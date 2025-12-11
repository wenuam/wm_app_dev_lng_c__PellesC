/****************************************************************************
 *                                                                          *
 * File    : avi.c                                                          *
 *                                                                          *
 * Purpose : Win32 GIF To AVI Converter; AVI file processing.               *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created by Pelle Orinius                             *
 *                                                                          *
 ****************************************************************************/

#include "proj.h"
#include <vfw.h>
#include "gif2avi.h"

// Static function prototypes.
static uint_t calculator(uint_t, uint_t);

/****************************************************************************
 *                                                                          *
 * Function: write_video_file                                               *
 *                                                                          *
 * Purpose : Write a audio-video interleaved (AVI) file.                    *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

void write_video_file(const char *fname)
{
    AVISTREAMINFO shdr;
    PAVIFILE pfile = NULL;
    PAVISTREAM ps = NULL;
    PAVISTREAM psCompressed = NULL;
    AVICOMPRESSOPTIONS opts;
    HRESULT hr;
    ulong_t i;
    ulong_t idx;
    uint_t delay;

    delay = frame_list[0].delay;
    for (i = 1; i < frame_count; i++)
        delay = calculator(delay, frame_list[i].delay);

    if (options.verbose)
        printf("\tLeast common multiple delay: %u\n", delay);

    // Microsoft tries to be smart, never succeeds, but *we* have to clean up...
    (void)my_deletefile(fname);

    AVIFileInit();

    //
    // Open the video file for writing.
    //
    hr = AVIFileOpenA(&pfile, fname, OF_WRITE|OF_CREATE, NULL);
    if (hr != AVIERR_OK) goto error;

    //
    // Fill in the header for the video stream.
    //
    memset(&shdr, 0, sizeof(shdr));
    shdr.fccType = streamtypeVIDEO;
    shdr.fccHandler = mmioFOURCC('m', 'r', 'l', 'e');
    shdr.dwScale = delay;
    shdr.dwRate = 100;
    shdr.dwSuggestedBufferSize = frame_list[0].bitmap->biSizeImage;
    SetRect(&shdr.rcFrame, 0, 0,
        (int)frame_list[0].bitmap->biWidth,
        (int)frame_list[0].bitmap->biHeight);

    //
    // Create the video stream.
    //
    hr = AVIFileCreateStream(pfile, &ps, &shdr);
    if (hr != AVIERR_OK) goto error;

    memset(&opts, 0, sizeof(opts));
    opts.dwFlags = AVICOMPRESSF_KEYFRAMES;
    opts.fccType = streamtypeVIDEO;
    opts.fccHandler = shdr.fccHandler;
    opts.dwKeyFrameEvery = 8;
    opts.dwQuality = (DWORD)ICQUALITY_DEFAULT;

    hr = AVIMakeCompressedStream(&psCompressed, ps, &opts, NULL);
    if (hr != AVIERR_OK) goto error;

    hr = AVIStreamSetFormat(psCompressed, 0, frame_list[0].bitmap,
        frame_list[0].bitmap->biSize +
        frame_list[0].bitmap->biClrUsed * sizeof(RGBQUAD));
    if (hr != AVIERR_OK) goto error;

    //
    // Write each video frame.
    //
    idx = 0;
    for (i = 0; i < frame_count; i++)
    {
        ulong_t frame_reps = (delay) ? frame_list[i].delay/delay : 1;
        ulong_t j;

        if (options.verbose)
            printf("\tFrame %lu: repeated %u times\n", i, frame_reps);

        for (j = 0; j < frame_reps; j++)
        {
            hr = AVIStreamWrite(psCompressed,
                idx++,
                1,  /* number of frames to write */
                (BYTE *)frame_list[i].bitmap +
                        frame_list[i].bitmap->biSize +
                        frame_list[i].bitmap->biClrUsed * sizeof(RGBQUAD),
                frame_list[i].bitmap->biSizeImage,
                AVIIF_KEYFRAME,
                NULL,
                NULL);
            if (hr != AVIERR_OK) goto error;
        }
    }

error:
    //
    // Close the file.
    //
    if (ps)
        AVIStreamClose(ps);

    if (psCompressed)
        AVIStreamClose(psCompressed);

    if (pfile)
        AVIFileClose(pfile);

    AVIFileExit();

    if (hr != NOERROR)
        apperror(ERROR_WRITE_FILE);
}

/****************************************************************************
 *                                                                          *
 * Function: calculator                                                     *
 *                                                                          *
 * Purpose : Perform interesting calculations.                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static uint_t calculator(uint_t n1, uint_t n2)
{
    if (n1 == 0 || n2 == 0)
        return 0;

    while (n1 != n2)
        if (n1 < n2) n2 -= n1; else n1 -= n2;

    return n1;
}

