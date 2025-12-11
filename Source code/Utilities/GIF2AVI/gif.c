/****************************************************************************
 *                                                                          *
 * File    : gif.c                                                          *
 *                                                                          *
 * Purpose : Win32 GIF To AVI Converter; GIF file processing.               *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created by Pelle Orinius                             *
 *                                                                          *
 ****************************************************************************/

#include "proj.h"
#include "gif2avi.h"
#include "gif32.h"

#define CMAXBITS_LZW  12        // Maximum code size (4096 symbols).
#define HSIZE  5003             // Hash table size for 80% occupancy.

#define TABLESIZE_LZW  ((short)(1 << CMAXBITS_LZW))
#define HASH_ENTRY(prefix,suffix)  ((((int)(prefix)) << 8) | (suffix))
#define MAXCODE(cBits)  (((short)(1 << (cBits))) - 1)
#define CHAR_OUT(ps,c)  { (ps)->packet[++(ps)->packet_cnt] = (c); if ((ps)->packet_cnt >= 255) WritePacket(ps); }

// Global input state.
typedef struct tagGIFSTATE
{
    BYTE *raw_ptr;              // Memory mapped file ptr.
    BYTE *bits_ptr;             // Output ptr.
    FILEINFO *file;             // File descriptor.
    GIFRGB *palette_ptr;        // Palette ptr (global or local).
    GIFLSD lsd;                 // Logical screen descriptor.
    uint_t delay;               // Delay time (1/100 seconds).
    bool_t transparent;         // Use transparent index?
    BYTE transparent_index;     // Palette index of transparent color.
    uint_t dispose_this;        // Disposal method.
    uint_t dispose_pend;        // Pending disposal method.
    uint_t bpp;                 // Bits per pixel in GIF file.
    uint_t bpp_in_dib;          // Bits per pixel in DIB.
    uint_t dib_height;          // DIB Image height.
    uint_t dib_width;           // DIB Image width.
    uint_t dib_step;            // Line step (interlace).
    int dib_line;               // Current output line.
    int dib_left;               // Left column position.
    // Variables used for separating out codes.
    short num_bits_left;        // Num bits left in current byte.
    BYTE packet[257];           // Current block.
    short packet_cnt;           // Num bytes left in block.
    BYTE *packet_ptr;           // Ptr to next byte in block.
    BYTE current_byte;          // Current byte.
    //
    short bits_per_code;        // Current number of bits/code.
    short code_clear;           // Clear code (doesn't change).
    short code_eof;             // EOF code (ditto).
    short code_free;            // First not-yet-used symbol code.
    short code_max;             // Highest code for current size.
    short code;                 // Last read code.
    //
    BYTE stack[TABLESIZE_LZW];  // Stack for storing pixels.
    BYTE suffix[TABLESIZE_LZW]; // Suffix table.
    uint_t prefix[TABLESIZE_LZW]; // Prefix linked list.
    //
    int num_bad_codes;          // Count of bad codes (should be zero).
} GIFSTATE;

static RGBQUAD g_rgb[16] = /* VGA palette */
{
    { 0x00, 0x00, 0x00 }, // black
    { 0x80, 0x00, 0x00 }, // dark red
    { 0x00, 0x80, 0x00 }, // dark green
    { 0x80, 0x80, 0x00 }, // dark yellow
    { 0x00, 0x00, 0x80 }, // dark blue
    { 0x80, 0x00, 0x80 }, // dark magenta
    { 0x00, 0x80, 0x80 }, // dark cyan
    { 0xC0, 0xC0, 0xC0 }, // light gray
    { 0x80, 0x80, 0x80 }, // medium gray
    { 0xFF, 0x00, 0x00 }, // red
    { 0x00, 0xFF, 0x00 }, // green
    { 0xFF, 0xFF, 0x00 }, // yellow
    { 0x00, 0x00, 0xFF }, // blue
    { 0xFF, 0x00, 0xFF }, // magenta
    { 0x00, 0xFF, 0xFF }, // cyan
    { 0xFF, 0xFF, 0xFF }  // white
};

// Static function prototypes.
static void read_extensions(GIFSTATE *);
static void read_image(GIFSTATE *, GIFIMAGEHEADER *);
static size_t sizeof_dib(BITMAPINFOHEADER *);
static inline BYTE read_byte(GIFSTATE *);
static void output_line(GIFSTATE *, BYTE *, uint_t);
static void init_decoder(GIFSTATE *, short);
static short read_code(GIFSTATE *);
static void read_packet(GIFSTATE *);
static void decoder(GIFSTATE *, uint_t);

/****************************************************************************
 *                                                                          *
 * Function: read_animated_gif_file                                         *
 *                                                                          *
 * Purpose : Load a Graphics Interchange Format (GIF) animation from file.  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

void read_animated_gif_file(FILEINFO *gif_file)
{
    GIFSTATE *state;
    WINERR err;

    err = my_openmap(gif_file);
    if (err) apperror(MYOPENERROR(RCFATAL(err)), gif_file->name);

    state = (GIFSTATE *)my_alloc(sizeof(GIFSTATE));

    state->raw_ptr = (BYTE *)gif_file->base;
    state->file = gif_file;

    //
    // Check version in header.
    //
    if (memcmp(((GIFHEADER *)state->raw_ptr)->bSignature,
        GIF_VER87a, strlen(GIF_VER87a)) == 0 ||
        memcmp(((GIFHEADER *)state->raw_ptr)->bSignature,
        GIF_VER89a, strlen(GIF_VER89a)) == 0)
    {
        GIFIMAGEHEADER gih;
        GIFLSD lsd;

        // The file header is correct.
        state->raw_ptr += sizeof(GIFHEADER);

        //
        // Read Logical Screen Descriptor.
        //
        state->lsd = lsd = *(GIFLSD *)state->raw_ptr;
        state->raw_ptr = (PBYTE)state->raw_ptr + sizeof(GIFLSD);
        if (lsd.bFlags & LSD_GLOBALCOLORTABLE)
        {
            uint_t bpp = (lsd.bFlags & LSD_GLOBALCOLORTABLESIZE) + 1;

            state->bpp = bpp;
            state->bpp_in_dib = 8;  /* always 256 colors */
            state->palette_ptr = (GIFRGB *)state->raw_ptr;
            state->raw_ptr += (1 << bpp) * sizeof(GIFRGB);
        }

        if (options.verbose)
        {
            printf("\tLogical screen size: %ux%u\n",
                (UINT)lsd.wScreenWidth, (UINT)lsd.wScreenHeight);
        }

        state->transparent = FALSE;
        state->dispose_this = GCE_DISPOSE_UNSPECIFIED;
        state->dispose_pend = GCE_DISPOSE_UNSPECIFIED;

        do
        {
            // Read optional extension(s).
            read_extensions(state);

            //
            // Read Image Descriptor (first).
            //
            gih = *(GIFIMAGEHEADER *)state->raw_ptr;
            state->raw_ptr = (PBYTE)state->raw_ptr + sizeof(GIFIMAGEHEADER);
            if (gih.bFlags & GIH_LOCALCOLORTABLE)
            {
                uint_t bpp = (gih.bFlags & GIH_LOCALCOLORTABLESIZE) + 1;

                state->bpp = bpp;
                state->bpp_in_dib = 8;  /* always 256 colors */
                state->palette_ptr = (GIFRGB *)state->raw_ptr;
                state->raw_ptr += (1 << bpp) * sizeof(GIFRGB);
            }

            if (gih.bImageSeparator != GIF_LABEL_IMAGEDESCRIPTOR)
                printf("\"Image descriptor\" expected.\n");

            if (options.verbose)
            {
                printf("\tFrame %lu: %ux%u, delay: %u\n",
                    frame_count, gih.wImageWidth, gih.wImageHeight, state->delay);
            }

            // Get the actual image.
            read_image(state, &gih);

            if (*state->raw_ptr == 0)
                state->raw_ptr++;
            else
            {
                printf("Zero expected; found %02X at position %08X\n",
                    *state->raw_ptr, file_offset(state->file, state->raw_ptr));
            }

            // Skip optional extension(s).
            read_extensions(state);

        } while (*state->raw_ptr == GIF_LABEL_IMAGEDESCRIPTOR);
    }
    else
    {
        // The header is invalid.
        apperror(RCFATAL(ERROR_INVALID_GIF_FILE));
    }

    my_free(state);
    my_closemap(gif_file, FALSE);
}

/****************************************************************************
 *                                                                          *
 * Function: read_extensions                                                *
 *                                                                          *
 * Purpose : Read optional extension block(s).                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void read_extensions(GIFSTATE *state)
{
    for (;;)
    {
        GIFEXTENSION *ext = ((GIFEXTENSION *)state->raw_ptr);

        if (ext->bExtensionIntroducer != GIF_LABEL_EXTENSION)
            return;

        switch (ext->bExtensionLabel)
        {
            BYTE cnt;

            case GIF_EXTLABEL_COMMENT:
                state->raw_ptr += sizeof(GIFEXTENSION);
                while ((cnt = *state->raw_ptr++) != 0) state->raw_ptr += cnt;
                break;

            case GIF_EXTLABEL_PLAINTEXT:
                state->raw_ptr += sizeof(GIFPTE);
                while ((cnt = *state->raw_ptr++) != 0) state->raw_ptr += cnt;
                break;

            case GIF_EXTLABEL_GRAPHCONTROL:
            {
                GIFGCE *gce = (GIFGCE *)state->raw_ptr;
                state->delay = gce->wDelayTime;
                if (state->delay == 0)
                {
                    printf("warning; zero delay time set to 1.\n");
                    state->delay = 1;
                }
                state->transparent = (gce->bFlags & GCE_TRANSPARENTCOLORFLAG);
                state->transparent_index = gce->bTransparentColorIndex;
                state->dispose_pend = (gce->bFlags & GCE_DISPOSALMETHOD) >> 2;
                state->raw_ptr += sizeof(GIFGCE);
                break;
            }

            case GIF_EXTLABEL_APPLICATION:
                state->raw_ptr += sizeof(GIFAPE);
                while ((cnt = *state->raw_ptr++) != 0) state->raw_ptr += cnt;
                break;

            default:
                apperror(RCFATAL(ERROR_INVALID_GIF_FILE));
                break;
        }
    }
}

/****************************************************************************
 *                                                                          *
 * Function: read_image                                                     *
 *                                                                          *
 * Purpose : Read a single image from the file.                             *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void read_image(GIFSTATE *state, GIFIMAGEHEADER *gih)
{
    BITMAPINFOHEADER dib = {0};
    BITMAPINFOHEADER *bitmap;
    int i;
    int idx;

    // Turn off transparency for full frames to improve appearance.
    if (state->lsd.wScreenWidth == gih->wImageWidth &&
        state->lsd.wScreenHeight == gih->wImageHeight)
        state->transparent = FALSE;

    dib.biSize = sizeof(BITMAPINFOHEADER);
    dib.biWidth = state->lsd.wScreenWidth;
    dib.biHeight = state->lsd.wScreenHeight;
    dib.biBitCount = state->bpp_in_dib;
    dib.biPlanes = 1;
    dib.biSizeImage = dib.biHeight * WIDTHBYTES(dib.biWidth * dib.biBitCount);  /* needed by AVI code */
    dib.biClrUsed = (1 << dib.biBitCount);  /* needed by AVI code */

    bitmap = (BITMAPINFOHEADER *)my_alloc(sizeof_dib(&dib));
    state->bits_ptr = (BYTE *)bitmap;

    // Copy the bitmap header.
    *(BITMAPINFOHEADER *)state->bits_ptr = dib;
    state->bits_ptr = (PBYTE)state->bits_ptr + sizeof(BITMAPINFOHEADER);

    idx = 0;

    // Copy the bitmap palette.
    for (i = 0; i < (1 << dib.biBitCount); i++)
    {
        RGBQUAD rgb;

        if (i < (1 << state->bpp))
        {
            rgb.rgbRed   = state->palette_ptr[i].bRed;
            rgb.rgbGreen = state->palette_ptr[i].bGreen;
            rgb.rgbBlue  = state->palette_ptr[i].bBlue;
            rgb.rgbReserved = 0;
        }
        else
        {
            rgb.rgbRed   = g_rgb[idx].rgbRed;
            rgb.rgbGreen = g_rgb[idx].rgbGreen;
            rgb.rgbBlue  = g_rgb[idx].rgbBlue;
            rgb.rgbReserved = 0;

            idx = (idx+1) % 16;
        }

        *(RGBQUAD *)state->bits_ptr = rgb;
        state->bits_ptr = (PBYTE)state->bits_ptr + sizeof(RGBQUAD);
    }

    switch (state->dispose_this)
    {
        default:
            printf("Unknown dispose method.\n");
            break;

        case GCE_DISPOSE_UNSPECIFIED:
        case GCE_DISPOSE_NOT:
        {
            if (frame_count > 0)
            {
                BITMAPINFOHEADER *bitmap = frame_list[frame_count-1].bitmap;
                void *bits = (BYTE *)bitmap + bitmap->biSize + bitmap->biClrUsed * sizeof(RGBQUAD);
                memcpy(state->bits_ptr, bits, dib.biSizeImage);
            }
            break;
        }

        case GCE_DISPOSE_RESTOREPREV:
            printf("'No support for dispose method \"restore previous\".\n");
            break;

        case GCE_DISPOSE_RESTOREBACK:
            /* probably *nothing* to do?? */
            break;
    }

    // How to clean up after this frame, when we process the next.
    state->dispose_this = state->dispose_pend;

    // Set values for the output_line function.
    state->dib_width = WIDTHBYTES(dib.biWidth * dib.biBitCount);
    state->dib_height = dib.biHeight;
    state->dib_line = dib.biHeight-1 - gih->wTopPosition;
    state->dib_left = gih->wLeftPosition;
    state->dib_step = (gih->bFlags & GIH_INTERLACEFLAG) ? 16 : 1;

    // Decode the LZW compressed bitmap bits.
    decoder(state, gih->wImageWidth);

    // Add the image to the global array.
    add_frame_to_list(bitmap, state->delay);
}

/****************************************************************************
 *                                                                          *
 * Function: sizeof_dib                                                     *
 *                                                                          *
 * Purpose : Return total size of the DIB.                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static size_t sizeof_dib(BITMAPINFOHEADER *dib)
{
    return dib->biSize + (1 << dib->biBitCount) * sizeof(RGBQUAD) +
        dib->biHeight * WIDTHBYTES(dib->biWidth * dib->biBitCount);
}

/****************************************************************************
 *                                                                          *
 * Function: read_byte                                                      *
 *                                                                          *
 * Purpose : Read next byte from the file.                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static inline BYTE read_byte(GIFSTATE *state)
{
    return *state->raw_ptr++;
}

/****************************************************************************
 *                                                                          *
 * Function: output_line                                                    *
 *                                                                          *
 * Purpose : Output a line of pixels to the DIB.                            *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void output_line(GIFSTATE *state, BYTE *pixel_ptr, uint_t num_pixels)
{
    BYTE *bits_ptr;
    uint_t i;

    //
    // Note! We only support 8 BPP to keep this code simple.
    //

    // Get pointer to current DIB line.
    bits_ptr = state->bits_ptr + state->dib_line * state->dib_width;

    // Calculate next line (special handling for interlaced images).
    state->dib_line -= (state->dib_step < 16) ? state->dib_step : 8;
    if (state->dib_line < 0)
    {
        state->dib_step /= 2;
        state->dib_line = state->dib_height - state->dib_step / 2 - 1;
    }

    // Adjust the left column position.
    bits_ptr += state->dib_left;

    for (i = 0; i < num_pixels; i++)
    {
        if (!state->transparent || state->transparent_index != pixel_ptr[i])
            bits_ptr[i] = pixel_ptr[i];
    }
}

/****************************************************************************
 *                                                                          *
 * Function: init_decoder                                                   *
 *                                                                          *
 * Purpose : Initialize the decoder for reading a new image.                *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void init_decoder(GIFSTATE *state, short bits_per_code)
{
    state->bits_per_code = (bits_per_code + 1);

    state->code_max = (1 << state->bits_per_code);
    state->code_clear = (1 << bits_per_code);
    state->code_eof = (state->code_clear + 1);
    state->code = state->code_free = (state->code_eof + 1);

    state->packet_cnt = state->num_bits_left = 0;
}

/****************************************************************************
 *                                                                          *
 * Function: read_code                                                      *
 *                                                                          *
 * Purpose : Get the next code from the GIF file.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static short read_code(GIFSTATE *state)
{
    static const uint_t code_masks[1+CMAXBITS_LZW] =
    {
        0,
        0x0001, 0x0003,
        0x0007, 0x000F,
        0x001F, 0x003F,
        0x007F, 0x00FF,
        0x01FF, 0x03FF,
        0x07FF, 0x0FFF
    };
    int ret;

    if (state->num_bits_left == 0)
    {
        if (state->packet_cnt <= 0)
        {
            // Out of bytes in current packet, read next.
            read_packet(state);
        }

        state->current_byte = *state->packet_ptr++;
        state->num_bits_left = 8;
        state->packet_cnt--;
    }

    ret = state->current_byte >> (8 - state->num_bits_left);
    while (state->bits_per_code > state->num_bits_left)
    {
        if (state->packet_cnt <= 0)
        {
            // Out of bytes in current packet, read next.
            read_packet(state);
        }

        state->current_byte = *state->packet_ptr++;
        ret |= state->current_byte << state->num_bits_left;
        state->num_bits_left += 8;
        state->packet_cnt--;
    }

    state->num_bits_left -= state->bits_per_code;
    ret &= code_masks[state->bits_per_code];
    return (short)ret;
}

/****************************************************************************
 *                                                                          *
 * Function: read_packet                                                    *
 *                                                                          *
 * Purpose : Read next packet from the file.                                *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void read_packet(GIFSTATE *state)
{
    short i;

    state->packet_ptr = state->packet;
    state->packet_cnt = read_byte(state);
    if (state->packet_cnt != 0)
    {
        for (i = 0; i < state->packet_cnt; i++)
            state->packet[i] = read_byte(state);
    }
}

/****************************************************************************
 *                                                                          *
 * Function: decoder                                                        *
 *                                                                          *
 * Purpose : Decompress the LZW-compressed bitmap.                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void decoder(GIFSTATE *state, uint_t image_width)
{
    BYTE *sp;
    BYTE *buf;
    BYTE *pixel_ptr;
    uint_t num_pixels;
    short code;
    short fc;
    short oc;
    short c;
    short bits_per_code;

    //
    // Initialize for decoding a new image...
    //
    bits_per_code = read_byte(state);
    if (bits_per_code < 2 || bits_per_code > 9)
        apperror(RCFATAL(ERROR_INVALID_GIF_FILE));

    init_decoder(state, bits_per_code);

    //
    // Initialize in case they forgot to put in a clear code.
    //(This shouldn't happen, but we'll try and decode it anyway...)
    oc = fc = 0;

    //
    // Allocate space for the decode buffer.
    //
    buf = (BYTE *)my_alloc(image_width+1);

    //
    // Set up the stack pointer and decode buffer pointer.
    //
    sp = state->stack;
    pixel_ptr = buf;
    num_pixels = image_width;

    //
    // This is the main loop.  For each code we get we pass through the
    // linked list of prefix codes, pushing the corresponding "character"
    // for each code onto the stack.  When the list reaches a single
    // "character" we push that on the stack too, and then start unstacking
    // each character for output in the correct order.  Special handling
    // is included for the clear code, and the whole thing ends when we
    // get an ending code.
    //
    while ((c = read_code(state)) != state->code_eof)
    {
        //
        // If we had a file error, return without completing the decode.
        //
        if (c < 0)
        {
            printf("Read error; aborting decoder.\n");
            my_free(buf);
            return;
        }

        //
        // If the code is a clear code, reinitialize all necessary items.
        //
        if (c == state->code_clear)
        {
            state->bits_per_code = (bits_per_code + 1);
            state->code = state->code_free;
            state->code_max = (1 << state->bits_per_code);

            //
            // Continue reading codes until we get a non-clear code
            // (Another unlikely, but possible case...)
            //
            while ((c = read_code(state)) == state->code_clear)
                ;

            //
            // If we get an ending code immediately after a clear code
            // (Yet another unlikely case), then break out of the loop.
            //
            if (c == state->code_eof)
                break;

            //
            // Finally, if the code is beyond the range of already set
            // codes, (This one had better NOT happen...  I have no idea
            // what will result from this, but I doubt it will look good...)
            // then set it to color zero.
            //
            if (c >= state->code)
                c = 0;

            oc = fc = c;

            //
            // And let us not forget to put the char into the buffer...
            // And if, on the off chance, we were exactly one pixel from
            // the end of the line, we have to send the buffer to the
            // output_line() routine...
            //
            *pixel_ptr++ = (BYTE)c;
            if (--num_pixels == 0)
            {
                output_line(state, buf, image_width);
                pixel_ptr = buf;
                num_pixels = image_width;
            }
        }
        else
        {
            //
            // In this case, it's not a clear code or an ending code, so
            // it must be a code code...  So we can now decode the code
            // into a stack of character codes. (Clear as mud, right?)
            //
            code = c;

            //
            // Here we go again with one of those off chances...  If, on
            // the off chance, the code we got is beyond the range of those
            // already set up (Another thing which had better NOT happen...)
            // we trick the decoder into thinking it actually got the last
            // code read. (Hmmn... I'm not sure why this works...)
            //
            if (code >= state->code)
            {
                if (code > state->code)
                    state->num_bad_codes++;

                code = oc;
                *sp++ = (BYTE)fc;
            }

            //
            // Here we scan back along the linked list of prefixes, pushing
            // helpless characters (ie. suffixes) onto the stack as we do so.
            //
            while (code >= state->code_free)
            {
                *sp++ = state->suffix[code];
                code = state->prefix[code];
            }

            //
            // Push the last character on the stack, and set up the new
            // prefix and suffix, and if the required slot number is
            // greater than that allowed by the current bit size, increase
            // the bit size.  (NOTE - If we are all full, we *don't* save
            // the new suffix and prefix...  I'm not certain if this is
            // correct...  it might be better to overwrite the last code...
            //
            *sp++ = (BYTE)code;
            if (state->code < state->code_max)
            {
                /* state->suffix[state->code] = (BYTE)fc = (BYTE)code; */
                fc = (BYTE)code;
                state->suffix[state->code] = (BYTE)fc;
                state->prefix[state->code++] = oc;
                oc = c;
            }
            if (state->code >= state->code_max)
                if (state->bits_per_code < 12)
                {
                    state->code_max <<= 1;
                    state->bits_per_code++;
                }

            //
            // Now that we've pushed the decoded string (in reverse order)
            // onto the stack, lets pop it off and put it into our decode
            // buffer.  And when the decode buffer is full, write another
            // line...
            //
            while (sp > state->stack)
            {
                *pixel_ptr++ = *(--sp);
                if (--num_pixels == 0)
                {
                    output_line(state, buf, image_width);
                    pixel_ptr = buf;
                    num_pixels = image_width;
                }
            }
        }
    }

    if (num_pixels != image_width)
        output_line(state, buf, (image_width - num_pixels));

    my_free(buf);
    return;
}

