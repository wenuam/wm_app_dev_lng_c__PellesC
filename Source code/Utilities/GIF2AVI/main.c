/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Win32 GIF To AVI Converter; main module.                       *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created by Pelle Orinius                             *
 *                                                                          *
 ****************************************************************************/

#include "proj.h"
#include "gif2avi.h"

#define FRAME_ARRAY_INCREMENT  32

struct messages
{
    enum message msg;
    char *text;
};

/* global message array */
static const struct messages messages[] =
{
    { MSG_FILE_NOT_FOUND, "Unable to find the file '%s'." },
    { MSG_WRITE_ERROR, "Error writing to file." },
    { MSG_OPTION_ARG_MISSING, "Argument missing for /%s." },
    { MSG_UNKNOWN_OPTION, "Invalid option: '%s'; ignored." },
    { MSG_NO_IMAGE_FILE, "A GIF filename must be specified." },
    { MSG_INVALID_GIF_FILE, "Invalid/unsupported GIF format." },
    { MSG_NO_INTERLACE_SUPPORT, "No support for 'interlaced mode'." },
    { MSG_INTERNAL_ERROR, "Internal error (%s)." },
    { 0, 0 }
};

enum opttok
{
    C_NOTHING,
    C_DELAY,
    C_HELP,
    C_VERBOSE
};

struct opts
{
    enum opttok tok;
    char *name;
    bool_t has_args;
};

/* global options array */
static const struct opts opts[] =
{
    C_DELAY,    "DELAY",    TRUE,
    C_HELP,     "HELP",     FALSE,
    C_HELP,     "?",        FALSE,
    C_VERBOSE,  "VERBOSE",  FALSE
};

int nerrs = 0;

FILEINFO *gif_list = NULL;

FRAME *frame_list = NULL;
ulong_t frame_count = 0;
ulong_t frame_maxcount = 0;

struct options options = {0};

// Static function prototypes.
static void app_init_1(void);
static void app_init_2(void);
static void app_args(int, char **);
static enum opttok lookup_option(char **);
static void add_file_to_list(FILEINFO **, const char *);
static FILEINFO *lookup_file(FILEINFO **, const char *);
static void print_banner(void);
static void print_usage(void);
static BOOL WINAPI ctrl_handler(DWORD);

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point, of course!                                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int __cdecl main(int argc, char **argv)
{
    FILEINFO *file;

    app_init_1();

    // Process command line args.
    app_args(--argc, ++argv);

    app_init_2();

    // Process the specified file(s).
    for (file = gif_list; file != NULL; file = file->next)
    {
        char fname[MAX_PATH];

        __try
        {
            printf("Reading %s\n", file->name);

            read_animated_gif_file(file);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            apperror(ERROR_INVALID_GIF_FILE);
        }

        if (frame_count == 0)
            continue;

        __try
        {
            strcpy(fname, file->name);
            update_extension_in_file(fname, EXT_AVI);

            printf("Writing %s\n", fname);

            write_video_file(fname);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            apperror(ERROR_INTERNAL_ERROR, 666);
        }

        putchar('\n');

        free_frame_list();
    }

    if (nerrs != 0)
        errorexit(1);

    return 0;
}

/****************************************************************************
 *                                                                          *
 * Function: app_init_1                                                     *
 *                                                                          *
 * Purpose : Program initialization; part 1.                                *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void app_init_1(void)
{
    SetConsoleCtrlHandler(ctrl_handler, TRUE);
    SetFileApisToOEM();
}

/****************************************************************************
 *                                                                          *
 * Function: app_init_2                                                     *
 *                                                                          *
 * Purpose : Program initialization; part 2.                                *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void app_init_2(void)
{
    if (!gif_list)
        apperror(RCFATAL(ERROR_NO_IMAGE_FILE));
}

/****************************************************************************
 *                                                                          *
 * Function: app_args                                                       *
 *                                                                          *
 * Purpose : Decode command line or environment options.                    *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void app_args(int argc, char **argv)
{
    char *s;

    if (argc == 0)
        print_usage();

    for (; *argv && argc; argv++, argc--)
    {
        if (**argv == '-' || **argv == '/')
        {
            s = ++*argv;

            switch (lookup_option(&s))
            {
                case C_DELAY:
                    if (sscanf(s, "%u", &options.delay) != 1)
                        apperror(RCFATAL(ERROR_DELAY_OPTION));
                    break;

                case C_VERBOSE:
                    options.verbose = TRUE;
                    break;

                case C_HELP:
                    print_usage();
                    break;

                default:
                    apperror(RCWARNING(ERROR_UNKNOWN_OPTION), s);
                    break;
            }
        }
        else
        {
            char fname[MAX_PATH];

            add_extension_to_file(strcpy(fname, *argv), EXT_GIF);
            add_file_to_list(&gif_list, fname);
        }
    }
}

/****************************************************************************
 *                                                                          *
 * Function: lookup_option                                                  *
 *                                                                          *
 * Purpose : Lookup a option in the options array.                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static enum opttok lookup_option(char **opt)
{
    int i;

    for (i = 0; i < CARRAY(opts); i++)
    {
        if (_strnicmp(*opt, opts[i].name, strlen(opts[i].name)) == 0)
        {
            (*opt) += strlen(opts[i].name);

            // Special treatment of options with arguments.
            if (opts[i].has_args && (**opt != ':' || *++*opt == '\0'))
            {
                apperror(RCFATAL(ERROR_OPTION_ARG_MISSING), opts[i].name);
            }

            return opts[i].tok;
        }
    }

    return C_NOTHING;
}

/****************************************************************************
 *                                                                          *
 * Function: add_file_to_list                                               *
 *                                                                          *
 * Purpose : Add a new filename to the given list. Expand wildcards.        *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void add_file_to_list(FILEINFO **list, const char *filename)
{
    struct _finddata_t find;
    long handle;

    handle = _findfirst(filename, &find);
    if (handle == -1)
    {
        apperror(RCFATAL(ERROR_OPEN_FILE), filename);
    }

    do
    {
        char fname[MAX_PATH];
        char *s;
        size_t plen;
        FILEINFO *file;

        // Combine path and current filename.
        plen = (s = strrchr(filename, '\\')) || (s = strrchr(filename, ':')) ? (s-filename+1) : 0;
        strcpy(strncpy(fname, filename, plen) + plen, find.name);

        file = lookup_file(list, fname);
        file->time = find.time_write;
        file->size = find.size;

    } while (_findnext(handle, &find) == 0);
    _findclose(handle);
}

/****************************************************************************
 *                                                                          *
 * Function: lookup_file                                                    *
 *                                                                          *
 * Purpose : Lookup a file in the given list.                               *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static FILEINFO *lookup_file(FILEINFO **list, const char *name)
{
    FILEINFO *file;
    FILEINFO *file_last;

    //
    // Search for the given file.
    //
    for (file = *list, file_last = NULL;
         file != NULL;
         file_last = file, file = file->next)
    {
        if (strcmp(name, file->name) == 0)
            return file;
    }

    //
    // Didn't find the file. Add it.
    //
    file = (FILEINFO *)my_alloc(sizeof(FILEINFO) + strlen(name));

    if (file_last == NULL)
    {
        // This is the first node. Start the list.
        *list = file;
    }
    else
    {
        // Append the new node to the list.
        file_last->next = file;
    }

    file->next = NULL;
    file->hf = NULL;
    file->hmap = NULL;
    file->base = NULL;
    file->time = 0;
    file->size = 0;
    strcpy(file->name, name);

    return file;
}

/****************************************************************************
 *                                                                          *
 * Function: add_frame_to_list                                              *
 *                                                                          *
 * Purpose : Add a bitmap to the global list.                               *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

void add_frame_to_list(BITMAPINFOHEADER *bitmap, uint_t delay)
{
    if (frame_count == frame_maxcount)
    {
        frame_maxcount += FRAME_ARRAY_INCREMENT;
        frame_list = (FRAME *)my_realloc(frame_list, frame_maxcount * sizeof(FRAME));
    }

    frame_list[frame_count].bitmap = bitmap;
    frame_list[frame_count].delay = delay;
    frame_count++;
}

/****************************************************************************
 *                                                                          *
 * Function: free_frame_list                                                *
 *                                                                          *
 * Purpose : Free the global bitmap list.                                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

void free_frame_list(void)
{
    if (frame_count != 0)
    {
        ulong_t i;

        for (i = 0; i < frame_count; i++)
            my_free(frame_list[i].bitmap);

        my_free(frame_list);
        frame_list = NULL;

        frame_count = frame_maxcount = 0;
    }
}

/****************************************************************************
 *                                                                          *
 * Function: print_banner                                                   *
 *                                                                          *
 * Purpose : Display banner message.                                        *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void print_banner(void)
{
    static int banner = 0;

    if (!banner++)
    {
        printf("Conversion of GIF to AVI animations, Version 1.20\n");
        printf("Copyright (c) Pelle Orinius 1998-1999,2001\n");
        printf("Freeware with open source 2003\n");
        printf("\n");
    }
}

/****************************************************************************
 *                                                                          *
 * Function: print_usage                                                    *
 *                                                                          *
 * Purpose : Display usage information.                                     *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void print_usage(void)
{
    print_banner();

    printf("Syntax:\n%s [options] filespec[.GIF]\n\n", PROGRAM_NAME);
    printf("Options:\n");
    printf("/DELAY:time\tDelay time in hundredths of a second\n");
    printf("/VERBOSE\tDisplays more information\n\n");
    printf("\"filespec\" may contain wildcards.\n\n");
    printf("The output file(s) will be created in the same place as the GIF file(s),\n");
    printf("but the extension is always changed to .AVI.\n");

    errorexit(1);
}

/****************************************************************************
 *                                                                          *
 * Function: apperror                                                       *
 *                                                                          *
 * Purpose : Display error message. Terminate program if it's fatal.        *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

void apperror(WINERR err, ...)
{
    if (LOWORD(err) != ERROR_SUCCESS)
    {
        char buf[512];
        va_list ap;

        printf(ERRTEXT_PROGNAME, PROGRAM_NAME);

        if (ISFATAL(err)) printf(ERRTEXT_FATAL);
        if (ISERROR(err)) printf(ERRTEXT_ERROR);
        if (ISWARNING(err)) printf(ERRTEXT_WARNING);

        va_start(ap, err);
        vsprintf(buf, errortext(err), ap);
        va_end(ap);

        printf("%s\n", buf);

        if (ISFATAL(err)) errorexit(1);
        if (ISERROR(err)) nerrs++;
    }
}

/****************************************************************************
 *                                                                          *
 * Function: errortext                                                      *
 *                                                                          *
 * Purpose : Return text for given error code.                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

const char *errortext(WINERR err)
{
    if (err & APPLICATION_ERROR_MASK)
    {
        //
        // Handle application defined error code.
        //
        return msgtext(err & 0x7FFF);
    }
    else
    {
        //
        // Handle system defined error code.
        //
        static char msg[512] = "", *p;

        if (!FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, NULL, (err & 0x7FFF),
            LANG_SYSTEM_DEFAULT, msg, CARRAY(msg), NULL))
        {
            // This should NEVER happen, but in case it does...
            sprintf(msg, "Severe system error %u", (err & 0x7FFF));
        }

        while ((p = strstr(msg, "\r\n")) != NULL)
            *p++ = ' ', *p++ = ' ';

        return msg;
    }
}

/****************************************************************************
 *                                                                          *
 * Function: msgtext                                                        *
 *                                                                          *
 * Purpose : Return text from global message array.                         *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

const char *msgtext(enum message msg)
{
    int i;

    for (i = 0; messages[i].text; i++)
    {
        if (messages[i].msg == msg)
            return messages[i].text;
    }

    return "* message is missing *";
}

/****************************************************************************
 *                                                                          *
 * Function: errorexit                                                      *
 *                                                                          *
 * Purpose : Bail out.                                                      *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

void errorexit(int code)
{
    FILEINFO *file;

    for (file = gif_list; file != NULL; file = file->next)
        my_closemap(file, FALSE);

    exit(code);
}

/****************************************************************************
 *                                                                          *
 * Function: ctrl_handler                                                   *
 *                                                                          *
 * Purpose : Ctrl+C and Ctrl+Break handler for console apps.                *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static BOOL WINAPI ctrl_handler(DWORD dwCtrlType)
{
    UNREFERENCED_PARAMETER(dwCtrlType);

    printf("%s: execution aborted by user.\n", PROGRAM_NAME);

    errorexit(1);
    return 1;
}

