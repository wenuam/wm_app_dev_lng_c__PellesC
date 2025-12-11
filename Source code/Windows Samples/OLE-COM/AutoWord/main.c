#include <windows.h>
#include <stdio.h>

// Wrapper function for IDispatch->Invoke().
static HRESULT AutoWrap(int autoType, VARIANT *pvResult, IDispatch *pDisp, LPOLESTR ptName, int cArgs, ...)
{
    if (!pDisp)
    {
        MessageBox(NULL, "NULL IDispatch passed", "AutoWrap()", MB_SETFOREGROUND|MB_ICONHAND);
        return E_UNEXPECTED;
    }

    // Variables used...
    DISPPARAMS dp = { NULL, NULL, 0, 0 };
    DISPID dispidNamed = DISPID_PROPERTYPUT;
    DISPID dispID;
    HRESULT hr;
    char buf[200];
    char szName[200];

    // Convert name passed to to ANSI...
    WideCharToMultiByte(CP_ACP, 0, ptName, -1, szName, 200, NULL, NULL);

    // Get DISPID for name passed...
    hr = pDisp->lpVtbl->GetIDsOfNames(pDisp, &IID_NULL, &ptName, 1, LOCALE_USER_DEFAULT, &dispID);
    if(FAILED(hr))
    {
        sprintf(buf, "IDispatch->GetIDsOfNames(\"%s\") failed with error 0x%08lx", szName, hr);
        MessageBox(NULL, buf, "AutoWrap()", MB_SETFOREGROUND|MB_ICONHAND);
        return hr;
    }

    // Allocate memory for arguments...
    VARIANT *pArgs = malloc(sizeof(VARIANT) * (cArgs + 1));

    // Begin variable-argument list...
    va_list marker;
    va_start(marker, cArgs);

    // Extract arguments...
    for (int i=0; i<cArgs; i++)
        pArgs[i] = va_arg(marker, VARIANT);

    // End variable-argument list...
    va_end(marker);

    // Build DISPPARAMS...
    dp.cArgs = cArgs;
    dp.rgvarg = pArgs;

    // Handle special-case for property-puts!
    if (autoType & DISPATCH_PROPERTYPUT)
    {
        dp.cNamedArgs = 1;
        dp.rgdispidNamedArgs = &dispidNamed;
    }

    // Make the call!
    hr = pDisp->lpVtbl->Invoke(pDisp, dispID, &IID_NULL, LOCALE_SYSTEM_DEFAULT, autoType, &dp, pvResult, NULL, NULL);
    if (FAILED(hr))
    {
        sprintf(buf, "IDispatch->Invoke(\"%s\"=%08lx) failed with error 0x%08lx", szName, dispID, hr);
        MessageBox(NULL, buf, "AutoWrap()", MB_SETFOREGROUND|MB_ICONHAND);
        // Countinue by freeing the memory.
    }

    free(pArgs);

    return hr;
}

// The main function, I guess.
int WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nCmdShow)
{
    VARIANT root[64] = {0};  // Generic IDispatchs
    VARIANT parm[64] = {0};  // Generic Parameters
    VARIANT rVal = {0};  // Temporary result holder
    int level = 0;  // Current index into root[]

    // Initialize the OLE Library...
    OleInitialize(NULL);

    // VB: Dim wdApp As Object
    VARIANT wdApp = {0};

    // VB: Set wdApp = CreateObject Word.Application
    {
        CLSID clsid;
        CLSIDFromProgID(L"Word.Application", &clsid);
        HRESULT hr = CoCreateInstance(&clsid, NULL, CLSCTX_LOCAL_SERVER|CLSCTX_INPROC_SERVER, &IID_IDispatch, (void **)&rVal.pdispVal);
        if(FAILED(hr))
        {
            char buf[256];
            sprintf(buf, "CoCreateInstance() for \"Word.Application\" failed. Err=%08lx", hr);
            MessageBox(NULL, buf, "Error", MB_SETFOREGROUND|MB_ICONHAND);
            return 1;
        }
        rVal.vt = VT_DISPATCH;
    }
    VariantCopy(&wdApp, &rVal);
    VariantClear(&rVal);

    // VB: wdApp.Visible = 1
    rVal.vt = VT_I4;
    rVal.lVal = 1;
    VariantCopy(&root[++level], &wdApp);
    AutoWrap(DISPATCH_PROPERTYPUT, NULL, root[level].pdispVal, L"Visible", 1, rVal);
    VariantClear(&root[level--]);
    VariantClear(&rVal);

    // VB: Dim wdDoc As Object
    VARIANT wdDoc = {0};

    // VB: Set wdDoc = wdApp.Documents.Add
    VariantCopy(&root[++level], &wdApp);
    AutoWrap(DISPATCH_PROPERTYGET|DISPATCH_METHOD, &root[level+1], root[level].pdispVal, L"Documents", 0), level++;
    AutoWrap(DISPATCH_PROPERTYGET|DISPATCH_METHOD, &rVal, root[level].pdispVal, L"Add", 0);
    VariantClear(&root[level--]);
    VariantClear(&root[level--]);
    VariantCopy(&wdDoc, &rVal);
    VariantClear(&rVal);

    // VB wdApp.Selection.TypeText Hello World! 
    VariantCopy(&root[++level], &wdApp);
    AutoWrap(DISPATCH_PROPERTYGET|DISPATCH_METHOD, &root[level+1], root[level].pdispVal, L"Selection", 0), level++;
    parm[0].vt = VT_BSTR; parm[0].bstrVal = SysAllocString(L"Hello World!");
    AutoWrap(DISPATCH_METHOD, NULL, root[level].pdispVal, L"TypeText", 1, parm[0]);
    VariantClear(&parm[0]);
    VariantClear(&root[level--]);
    VariantClear(&root[level--]);

    // VB: Dim wdRange As Object
    VARIANT wdRange = {0};

    // VB: Set wdRange = wdApp.Selection.Range 
    VariantCopy(&root[++level], &wdApp);
    AutoWrap(DISPATCH_PROPERTYGET|DISPATCH_METHOD, &root[level+1], root[level].pdispVal, L"Selection", 0), level++;
    AutoWrap(DISPATCH_PROPERTYGET|DISPATCH_METHOD, &rVal, root[level].pdispVal, L"Range", 0);
    VariantClear(&root[level--]);
    VariantClear(&root[level--]);
    VariantCopy(&wdRange, &rVal);
    VariantClear(&rVal);

    // VB: wdRange.WholeStory 
    VariantCopy(&root[++level], &wdRange);
    AutoWrap(DISPATCH_METHOD, NULL, root[level].pdispVal, L"WholeStory", 0);
    VariantClear(&root[level--]);

    // VB: With wdRange.Font 
    VariantCopy(&root[++level], &wdRange);
    AutoWrap(DISPATCH_PROPERTYGET|DISPATCH_METHOD, &rVal, root[level].pdispVal, L"Font", 0);
    VariantClear(&root[level--]);
    VariantCopy(&root[++level], &rVal);
    VariantClear(&rVal);

    // VB: .Bold = 1 
    rVal.vt = VT_I4;
    rVal.lVal = 1;
    AutoWrap(DISPATCH_PROPERTYPUT, NULL, root[level].pdispVal, L"Bold", 1, rVal);
    VariantClear(&rVal);

    // VB: .Size = 30 
    rVal.vt = VT_I4;
    rVal.lVal = 30;
    AutoWrap(DISPATCH_PROPERTYPUT, NULL, root[level].pdispVal, L"Size", 1, rVal);
    VariantClear(&rVal);

    // VB: .Animation = 3 
    rVal.vt = VT_I4;
    rVal.lVal = 3;
    AutoWrap(DISPATCH_PROPERTYPUT, NULL, root[level].pdispVal, L"Animation", 1, rVal);
    VariantClear(&rVal);

    // VB: End With 
    VariantClear(&root[level--]);

    // VB: wdRange.ParagraphFormat.Alignment = 1 
    rVal.vt = VT_I4;
    rVal.lVal = 1;
    VariantCopy(&root[++level], &wdRange);
    AutoWrap(DISPATCH_PROPERTYGET|DISPATCH_METHOD, &root[level+1], root[level].pdispVal, L"ParagraphFormat", 0), level++;
    AutoWrap(DISPATCH_PROPERTYPUT, NULL, root[level].pdispVal, L"Alignment", 1, rVal);
    VariantClear(&root[level--]);
    VariantClear(&root[level--]);
    VariantClear(&rVal);

    // VB: wdDoc.Shapes.AddTextEffect 15 , Microsoft Word! , Arial Black , 36 , 0 , 0 , 210 , 120 
    VariantCopy(&root[++level], &wdDoc);
    AutoWrap(DISPATCH_PROPERTYGET|DISPATCH_METHOD, &root[level+1], root[level].pdispVal, L"Shapes", 0), level++;
    parm[0].vt = VT_I4; parm[0].lVal = 15;
    parm[1].vt = VT_BSTR; parm[1].bstrVal = SysAllocString(L"Microsoft Word!");
    parm[2].vt = VT_BSTR; parm[2].bstrVal = SysAllocString(L"Arial Black");
    parm[3].vt = VT_I4; parm[3].lVal = 36;
    parm[4].vt = VT_I4; parm[4].lVal = 0;
    parm[5].vt = VT_I4; parm[5].lVal = 0;
    parm[6].vt = VT_I4; parm[6].lVal = 210;
    parm[7].vt = VT_I4; parm[7].lVal = 120;
    AutoWrap(DISPATCH_METHOD, NULL, root[level].pdispVal, L"AddTextEffect", 8, parm[7], parm[6], parm[5], parm[4], parm[3], parm[2], parm[1], parm[0]);
    VariantClear(&parm[0]);
    VariantClear(&parm[1]);
    VariantClear(&parm[2]);
    VariantClear(&parm[3]);
    VariantClear(&parm[4]);
    VariantClear(&parm[5]);
    VariantClear(&parm[6]);
    VariantClear(&parm[7]);
    VariantClear(&root[level--]);
    VariantClear(&root[level--]);

    // Wait a little with MsgBox()...
    Sleep(2000);

    // VB: MsgBox Click me to continue... , vbMsgBoxSetForeground 
    MessageBox(NULL, "Click me to continue...", "MsgBox", MB_SETFOREGROUND);

    // VB: wdDoc.Saved = 1 
    rVal.vt = VT_I4;
    rVal.lVal = 1;
    VariantCopy(&root[++level], &wdDoc);
    AutoWrap(DISPATCH_PROPERTYPUT, NULL, root[level].pdispVal, L"Saved", 1, rVal);
    VariantClear(&root[level--]);
    VariantClear(&rVal);

    // VB: wdApp.Quit 
    VariantCopy(&root[++level], &wdApp);
    AutoWrap(DISPATCH_METHOD, NULL, root[level].pdispVal, L"Quit", 0);
    VariantClear(&root[level--]);

    // Clearing variables
    VariantClear(&wdApp);
    VariantClear(&wdDoc);
    VariantClear(&wdRange);

    // Terminate the OLE Library...
    OleUninitialize();

    return 0;
}
