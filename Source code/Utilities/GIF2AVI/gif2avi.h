/****************************************************************************
 *                                                                          *
 * File    : gif2avi.h                                                      *
 *                                                                          *
 * Purpose : Win32 GIF To AVI Converter; constants and definitions.         *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#ifndef _GIF2AVI_H
#define _GIF2AVI_H

#ifdef __cplusplus
extern "C" {
#endif

typedef int bool_t;
typedef unsigned long ulong_t;
typedef unsigned short ushort_t;
typedef unsigned int uint_t;

// Generic file description.
typedef struct tagFILEINFO
{
    struct tagFILEINFO *next;   // Next node.
    HANDLE hf;                  // File handle.
    HANDLE hmap;                // File mapping handle.
    void *base;                 // File mapping base.
    time_t time;                // File time.
    unsigned long size;         // File size.
    char name[1];               // File name.
} FILEINFO;

typedef struct tagFRAME
{
    BITMAPINFOHEADER *bitmap;   // Frame description.
    uint_t delay;               // Frame delay.
} FRAME;

#define tstrcpy(s)      (strlen(s) ? strcpy(my_alloc((strlen(s)+1) * sizeof(char)), (s)) : NULL)
#define tstrncpy(s,n)   (strncpy(my_alloc(((n)+1) * sizeof(char)), (s), (n)))
#define tstrcat(s,p)    (strcat(strcpy(my_alloc(strlen(s) + strlen(p) + 1), (s)), (p)))

#define file_offset(file,p) \
    ((BYTE *)(p) - (BYTE *)(file)->base)

#define end_of_file(file,p) \
    ((BYTE *)(p) >= ((BYTE *)(file)->base + (file)->size))

#define WIDTHBYTES(bits)  (((bits) + 31) / 32 * 4)

#define UNREFERENCED_PARAMETER(P)  ((void)(P))

// Matches GetLastError() type.
typedef DWORD WINERR;

#define SWAP(type,a,b)  { type t; t = (a); (a) = (b); (b) = t; }
#define CARRAY(arr)     (sizeof(arr) / sizeof(arr[0]))

// Display name for this program.
#define PROGRAM_NAME  "GIF2AVI"

#define EXT_GIF  ".GIF"
#define EXT_AVI  ".AVI"

#define ERRTEXT_PROGNAME  "%s: "
#define ERRTEXT_FATAL     "fatalt fel: "
#define ERRTEXT_ERROR     "fel: "
#define ERRTEXT_WARNING   "varning: "

struct options
{
    bool_t verbose;
    uint_t delay;
};

enum message
{
    MSG_FILE_NOT_FOUND = 1,
    MSG_WRITE_ERROR,
    MSG_BAD_DELAY_OPTION,
    MSG_OPTION_ARG_MISSING,
    MSG_UNKNOWN_OPTION,
    MSG_NO_IMAGE_FILE,
    MSG_INVALID_GIF_FILE,
    MSG_NO_INTERLACE_SUPPORT,
    MSG_INTERNAL_ERROR
};

// Error definitions.
#define ERROR_SEVERITY_FATAL    0x8000U

#define RCFATAL(err)    (ERROR_SEVERITY_FATAL|(err))
#define RCERROR(err)    (ERROR_SEVERITY_ERROR|(err))
#define RCWARNING(err)  (ERROR_SEVERITY_WARNING|(err))

#define ISFATAL(err)    (((err) & ERROR_SEVERITY_FATAL) ? 1 : 0)
#define ISERROR(err)    (((err) & 0xC0000000) == ERROR_SEVERITY_ERROR)
#define ISWARNING(err)  (((err) & 0xC0000000) == ERROR_SEVERITY_WARNING)

// Private WINERR error codes.
#define ERROR_OPEN_FILE             (APPLICATION_ERROR_MASK|MSG_FILE_NOT_FOUND)
#define ERROR_WRITE_FILE            (APPLICATION_ERROR_MASK|MSG_WRITE_ERROR)
#define ERROR_DELAY_OPTION          (APPLICATION_ERROR_MASK|MSG_BAD_DELAY_OPTION)
#define ERROR_OPTION_ARG_MISSING    (APPLICATION_ERROR_MASK|MSG_OPTION_ARG_MISSING)
#define ERROR_UNKNOWN_OPTION        (APPLICATION_ERROR_MASK|MSG_UNKNOWN_OPTION)
#define ERROR_NO_IMAGE_FILE         (APPLICATION_ERROR_MASK|MSG_NO_IMAGE_FILE)
#define ERROR_INVALID_GIF_FILE      (APPLICATION_ERROR_MASK|MSG_INVALID_GIF_FILE)
#define ERROR_NO_INTERLACE_SUPPORT  (APPLICATION_ERROR_MASK|MSG_NO_INTERLACE_SUPPORT)
#define ERROR_INTERNAL              (APPLICATION_ERROR_MASK|MSG_INTERNAL_ERROR)

#define MYOPENERROR(err) \
    ((((err) & APPLICATION_ERROR_MASK) == 0 && \
     (((err) & 0x00007FFF) == ERROR_FILE_NOT_FOUND || \
      ((err) & 0x00007FFF) == ERROR_PATH_NOT_FOUND)) ? \
     (((err) & 0xFFFF8000)|ERROR_OPEN_FILE) : (err))

// main.c
void add_frame_to_list(BITMAPINFOHEADER *, uint_t);
void free_frame_list(void);
void apperror(WINERR, ...);
const char *errortext(WINERR);
const char *msgtext(enum message);
void errorexit(int);

// gif.c
void read_animated_gif_file(FILEINFO *);

// avi.c
void write_video_file(const char *);

// utils.c
void *my_alloc(size_t);
void *my_realloc(void *, size_t);
void my_free(void *);
WINERR my_openmap(FILEINFO *);
WINERR my_closemap(FILEINFO *, bool_t);
WINERR my_deletefile(const char *);
const char *basename(const char *);
void add_extension_to_file(char *, const char *);
void update_extension_in_file(char *, const char *);

// Global vars.
extern struct options options;
extern int nerrs;
extern FILEINFO *gif_list;
extern FRAME *frame_list;
extern ulong_t frame_count;
extern ulong_t frame_maxcount;

#ifdef PODEBUG
__inline void *my_alloc(size_t size)
{
    void *vp = malloc(size);

    if (vp == NULL)
        apperror(RCFATAL(ERROR_OUTOFMEMORY));

    memset(vp, 0, size);

    return vp;
}

__inline void *my_realloc(void *vp, size_t newsize)
{
    vp = realloc(vp, newsize);

    if (vp == NULL)
        apperror(RCFATAL(ERROR_OUTOFMEMORY));

    return vp;
}

__inline void my_free(void *vp)
{
    if (vp) free(vp);
}
#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _GIF2AVI_H */
