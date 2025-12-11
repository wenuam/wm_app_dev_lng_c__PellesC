/****************************************************************************
 *                                                                          *
 * File    : utils.c                                                        *
 *                                                                          *
 * Purpose : Win32 GIF To AVI Converter; support functions.                 *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created by Pelle Orinius                             *
 *                                                                          *
 ****************************************************************************/

#include "proj.h"
#include "gif2avi.h"

/****************************************************************************
 *                                                                          *
 * Function: my_alloc                                                       *
 *                                                                          *
 * Purpose : Allocate a memory block.                                       *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#ifndef PODEBUG
void *my_alloc(size_t size)
{
    void *vp = malloc(size);

    if (vp == NULL)
        apperror(RCFATAL(ERROR_OUTOFMEMORY));

    memset(vp, 0, size);

    return vp;
}
#endif

/****************************************************************************
 *                                                                          *
 * Function: my_realloc                                                     *
 *                                                                          *
 * Purpose : Re-allocate a memory block.                                    *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#ifndef PODEBUG
void *my_realloc(void *vp, size_t newsize)
{
    vp = realloc(vp, newsize);

    if (vp == NULL)
        apperror(RCFATAL(ERROR_OUTOFMEMORY));

    return vp;
}
#endif

/****************************************************************************
 *                                                                          *
 * Function: my_free                                                        *
 *                                                                          *
 * Purpose : Free a memory block.                                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#ifndef PODEBUG
void my_free(void *vp)
{
    if (vp) free(vp);
}
#endif

/****************************************************************************
 *                                                                          *
 * Function: my_openmap                                                     *
 *                                                                          *
 * Purpose : Create a read-only file mapping.                               *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

WINERR my_openmap(FILEINFO *file)
{
    //
    // Open the given file.
    //
    file->hf = CreateFileA(file->name, GENERIC_READ, FILE_SHARE_READ,
        NULL, OPEN_EXISTING, 0, 0);

    if (file->hf == INVALID_HANDLE_VALUE)
        return GetLastError();

    //
    // Create a file mapping of the opened file.
    //
    file->hmap = CreateFileMappingA(file->hf, NULL, PAGE_READONLY, 0, 0, NULL);

    if (file->hmap == NULL)
        return GetLastError();

    //
    // Map a view of the whole file.
    //
    file->base = MapViewOfFile(file->hmap, FILE_MAP_READ, 0, 0, 0);

    if (file->base == NULL)
        return GetLastError();

    return ERROR_SUCCESS;
}

/****************************************************************************
 *                                                                          *
 * Function: my_closemap                                                    *
 *                                                                          *
 * Purpose : Close a file mapping.                                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

WINERR my_closemap(FILEINFO *file, bool_t force_eof)
{
    if (file->base)
    {
        if (!UnmapViewOfFile(file->base))
            return GetLastError();

        file->base = NULL;
    }

    if (file->hmap)
    {
        if (!CloseHandle(file->hmap))
            return GetLastError();

        file->hmap = NULL;
    }

    if (file->hf)
    {
        if (force_eof)
        {
            if (SetFilePointer(file->hf, file->size, 0, FILE_BEGIN) == 0xFFFFFFFF)
                return GetLastError();

            if (!SetEndOfFile(file->hf))
                return GetLastError();
        }

        if (!CloseHandle(file->hf))
            return GetLastError();

        file->hf = NULL;
    }

    return ERROR_SUCCESS;
}

/****************************************************************************
 *                                                                          *
 * Function: my_deletefile                                                  *
 *                                                                          *
 * Purpose : Delete the given file.                                         *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

WINERR my_deletefile(const char *filename)
{
    if (!DeleteFileA(filename))
        return GetLastError();
    else
        return ERROR_SUCCESS;
}

/****************************************************************************
 *                                                                          *
 * Function: basename                                                       *
 *                                                                          *
 * Purpose : Return filename part of a pathname.                            *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

const char *basename(const char *filename)
{
    if (filename && *filename)
    {
        const char *s;

        s = strrchr(filename, '\\');
        if (s) return ++s;

        // No path, return whole name.
        return filename;
    }

    return "";
}

/****************************************************************************
 *                                                                          *
 * Function: add_extension_to_file                                          *
 *                                                                          *
 * Purpose : Add extension to filename without it.                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

void add_extension_to_file(char *filename, const char *ext)
{
    char *s;

    s = strrchr(filename, '\\');
    if (!strchr((s) ? s : filename, '.'))
        strcat(filename, ext);
}

/****************************************************************************
 *                                                                          *
 * Function: update_extension_in_file                                       *
 *                                                                          *
 * Purpose : Update extension in a filename.                                *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

void update_extension_in_file(char *filename, const char *ext)
{
    char *s;

    s = strrchr(filename, '\\');
    if ((s = strchr((s) ? s : filename, '.')) != NULL)
        strcpy(s, ext);
    else
        strcat(filename, ext);
}

