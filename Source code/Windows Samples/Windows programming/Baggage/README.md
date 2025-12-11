Sample that demonstrates a "user-defined" approach to delayed loading: two DLL files are stored as RCDATA resources in an EXE file, each one extracted on the first call to the first function (and only then). Contains source code that is slightly modified compared to the one found in **delayimp.lib**.

Ambitious people should be able to extend this idea (like adding file compression, or locating the DLL in other ways...).

Tested with Pelles C, v4.50.

(Use the workspace file, baggage.ppw, in the baggage subdirectory).

**Author**: Pelle Orinius (some code originally from Microsoft)
