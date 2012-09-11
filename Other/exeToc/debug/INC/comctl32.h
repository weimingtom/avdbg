
int __stdcall AddMRUStringW(HANDLE hMRU,LPCTSTR szString);
int __stdcall CreateMRUListW(LPMRUINFO lpmi);
int __stdcall CreateMappedBitmap(HINSTANCE hInstance,INT_PTR idBitmap,UINT wFlags,LPCOLORMAP lpColorMap,int iNumMaps);
int __stdcall CreatePropertySheetPage(LPCPROPSHEETPAGE lppsp);
int __stdcall CreateStatusWindow(LONG style,LPCTSTR lpszText,HWND hwndParent,UINT wID);
int __stdcall CreateStatusWindowW(LONG style,LPCTSTR lpszText,HWND hwndParent,UINT wID);
int __stdcall CreateToolbarEx(HWND hWnd,DWORD ws,UINT wID,int nBitmaps,HINSTANCE hBMInst,UINT_PTR wBMID,LPCTBBUTTON lpButtons,int iNumButtons,int dxButton,int dyButton,int dxBitmap,int dyBitmap,UINT uStructSize);
int __stdcall CreateUpDownControl(DWORD dwStyle,int x,int y,int cx,int cy,HWND hParent,int nID,HINSTANCE hInst,HWND hBuddy,int nUpper,int nLower,int nPos);
int __stdcall DPA_Clone(const HDPA hdpaSource,HDPA hdpaNew);
int __stdcall DPA_Create(int cpGrow);
int __stdcall DPA_CreateEx(int cpGrow,HANDLE hheap);
int __stdcall DPA_DeleteAllPtrs(HDPA pdpa);
int __stdcall DPA_DeletePtr(HDPA pdpa,int index);
int __stdcall DPA_Destroy(HDPA pdpa);
int __stdcall DPA_DestroyCallback(HDPA pdpa,PFNDPAENUMCALLBACK pfnCB,void* pData);
int __stdcall DPA_EnumCallback(HDPA pdpa,PFNDPAENUMCALLBACK pfnCB,void* pData);
int __stdcall DPA_GetPtr(HDPA pdpa,int index);
int __stdcall DPA_GetPtrIndex(HDPA hdpa,const void* pvoid);
int __stdcall DPA_GetSize(HDPA pdpa);
int __stdcall DPA_Grow(HDPA hdpa,int cp);
int __stdcall DPA_InsertPtr(HDPA pdpa,int index,void* p);
int __stdcall DPA_LoadStream(HDPA* ppdpa,PFNDPASTREAM pfn,IStream* pstm,void* pvInstData);
int __stdcall DPA_Merge(HDPA hdpaDest,HDPA hdpaSrc,DWORD dwFlags,PFNDPACOMPARE pfnCompare,PFNDPAMERGE pfnMerge,LPARAM lParam);
int __stdcall DPA_SaveStream(HDPA pdpa,PFNDPASTREAM pfn,IStream* pstm,void* pvInstData);
int __stdcall DPA_Search(HDPA pdpa,void* pFind,int iStart,PFNDPACOMPARE pfnCmp,LPARAM lParam,UINT options);
int __stdcall DPA_SetPtr(HDPA pdpa,int index,void* p);
int __stdcall DPA_Sort(HDPA pdpa,PFNDPACOMPARE pfnCmp,LPARAM lParam);
int __stdcall DSA_Clone(HDSA hdsa);
int __stdcall DSA_Create(int cbItem,int cbItemGrow);
int __stdcall DSA_DeleteAllItems(HDSA hdsa);
int __stdcall DSA_DeleteItem(HDSA hdsa,int nPosition);
int __stdcall DSA_Destroy(HDSA pdsa);
int __stdcall DSA_DestroyCallback(HDSA pdsa,PFNDSAENUMCALLBACK pfnCB,void* pData);
int __stdcall DSA_EnumCallback(HDSA hdsa,PFNDAENUMCALLBACK* pfnCB,void* pData);
int __stdcall DSA_GetItem(HDSA pdsa,int index,void* pitem);
int __stdcall DSA_GetItemPtr(HDSA pdsa,int index);
int __stdcall DSA_GetSize(HDSA hdsa);
int __stdcall DSA_InsertItem(HDSA pdsa,int index,void* pItem);
int __stdcall DSA_SetItem(HDSA hdsa,int index,void* pItem);
int __stdcall DSA_Sort(HDSA pdsa,PFNDACOMPARE pfnCompare,LPARAM lParam);
int __stdcall DefSubclassProc(HWND hWnd,DWORD uMsg,WPARAM WPARAM,LPARAM LPARAM);
int __stdcall DestroyPropertySheetPage(HPROPSHEETPAGE hPSPage);
int __stdcall DoReaderMode(PREADERMODEINFO prmi);
int __stdcall DrawInsert(HWND handParent,HWND hLB,int nItem);
int __stdcall DrawShadowText(HDC hdc,LPCWSTR pszText,UINT cch,const RECT* pRect,DWORD dwFlags,COLORREF crText,COLORREF crShadow,int ixOffset,int iyOffset);
int __stdcall DrawStatusText(HDC hdc,LPCRECT lprc,LPCTSTR pszText,UINT uFlags);
int __stdcall DrawTextExPrivWrap(HDC hdc,LPTSTR lpchText,int cchText,LPRECT lprc,UINT dwDTFormat,LPDRAWTEXTPARAMS lpDTParams);
int __stdcall DrawTextWrap(HDC hdc,LPCTSTR lpString,int nCount,LPRECT lpRect,UINT uFormat,LPDRAWTEXTPARAMS lpDTParams);
int __stdcall EnumMRUListW(HANDLE hMRU,int nItem,void* lpData,UINT uLen);
int __stdcall ExtTextOutWrap(HDC hdc,int X,int Y,UINT uOptions,const RECT* lprc,LPCTSTR lpString,UINT cbCount,const INT* lpDx);
int __stdcall FlatSB_EnableScrollBar(HWND hwnd,int wSBflags,UINT wArrows);
int __stdcall FlatSB_GetScrollInfo(HWND hwnd,DWORD fnBar,LPSCROLLINFO lpsi);
int __stdcall FlatSB_GetScrollPos(HWND hwnd,DWORD code);
int __stdcall FlatSB_GetScrollProp(HWND hwnd,DWORD index,LPINT pValue);
int __stdcall FlatSB_GetScrollPropPtr(HWND hwnd,DWORD index,LPINT pValue);
int __stdcall FlatSB_GetScrollRange(HWND hwnd,int code,LPINT lpMinPos,LPINT lpMaxPos);
int __stdcall FlatSB_SetScrollInfo(HWND arg1);
int __stdcall FlatSB_SetScrollPos(HWND hwnd,int code,int nPos,BOOL fRedraw);
int __stdcall FlatSB_SetScrollProp(HWND hWnd,DWORD arg2,INT_PTR arg3,BOOL arg4);
int __stdcall FlatSB_SetScrollRange(HWND hwnd,int code,int nMinPos,int nMaxPos,BOOL fRedraw);
int __stdcall FlatSB_ShowScrollBar(HWND hwnd,int code,BOOL fShow);
int __stdcall FreeMRUList(HANDLE hMRU);
int __stdcall GetEffectiveClientRect(HWND hWnd,LPRECT lprc,const INT* lpInfo);
int __stdcall GetMUILanguage();
int __stdcall GetTextExtentPoint32Wrap(HDC hdc,LPCTSTR lpString,UINT cbCount,LPSIZE lpSize);
int __stdcall GetWindowSubclass(HWND hWnd,SUBCLASSPROC pfnSubclass,UINT_PTR uIdSubclass,DWORD_PTR* pdwRefData);
int __stdcall HIMAGELIST_QueryInterface(HIMAGELIST himl,REFIID riid,void** ppv);
int __stdcall ImageList_Add(HIMAGELIST hIml,HBITMAP hImageBmp,HBITMAP hMaskBmp);
int __stdcall ImageList_AddMasked(HIMAGELIST hImageList,HBITMAP hObject,COLORREF clrMask);
int __stdcall ImageList_BeginDrag(HIMAGELIST himlTrack,int iTrack,int dxHotspot,int dyHotspot);
int __stdcall ImageList_CoCreateInstance(REFCLSID rclsid,const IUnknown* punkOuter,REFIID riid,void** ppv);
int __stdcall ImageList_Copy(HIMAGELIST himlDst,int iDst,HIMAGELIST himlSrc,int iSrc,UINT uFlags);
int __stdcall ImageList_Create(int Width,int Height,DWORD Type,int nInital,int nGraw);
int __stdcall ImageList_Destroy(HIMAGELIST hIml);
int __stdcall ImageList_DragEnter(HWND hwndLock,int x,int y);
int __stdcall ImageList_DragLeave(HWND hwndLock);
int __stdcall ImageList_DragMove(int x,int y);
int __stdcall ImageList_DragShowNolock(BOOL fShow);
int __stdcall ImageList_Draw(HIMAGELIST hIml,int Index,HDC hDC,int X,int Y,DWORD Style);
int __stdcall ImageList_DrawEx(HIMAGELIST hIml,int Index,HDC hDC,int X,int Y,int Width,int Height,COLORREF BkColor,COLORREF FgColor,DWORD Style);
int __stdcall ImageList_DrawIndirect(IMAGELISTDRAWPARAMS* pimldp);
int __stdcall ImageList_Duplicate(HIMAGELIST himl);
int __stdcall ImageList_EndDrag();
int __stdcall ImageList_GetBkColor(HIMAGELIST himl);
int __stdcall ImageList_GetDragImage(POINT* ppt,POINT* pptHotspot);
int __stdcall ImageList_GetIcon(HIMAGELIST himl,int i,DWORD flags);
int __stdcall ImageList_GetIconSize(HIMAGELIST hImageList,int* cx,int* cy);
int __stdcall ImageList_GetImageCount(HIMAGELIST himl);
int __stdcall ImageList_GetImageInfo(HIMAGELIST himl,int i,IMAGEINFO* pImageInfo);
int __stdcall ImageList_LoadImage(HINSTANCE hInstance,LPCTSTR lpStrbmp,int cx,int cGrow,COLORREF crMask,DWORD uType,DWORD uFlags);
int __stdcall ImageList_LoadImageW(HINSTANCE hInstance,LPCTSTR lpStrbmp,int cx,int cGrow,COLORREF crMask,DWORD uType,DWORD uFlags);
int __stdcall ImageList_Merge(HIMAGELIST himl1,int i1,HIMAGELIST himl2,int i2,int dx,int dy);
int __stdcall ImageList_Read(LPSTREAM pstm);
int __stdcall ImageList_ReadEx(DWORD dwFlags,LPSTREAM pstm,REFIID riid,void** ppv);
int __stdcall ImageList_Remove(HIMAGELIST hIml,int Index);
int __stdcall ImageList_Replace(HIMAGELIST hIml,int Index,HBITMAP hImageBmp,HBITMAP hMaskBmp);
int __stdcall ImageList_ReplaceIcon(HIMAGELIST hImageList,int itype,HICON hicon);
int __stdcall ImageList_SetBkColor(HIMAGELIST himl,COLORREF clrBk);
int __stdcall ImageList_SetColorTable(HIMAGELIST himl,int start,int len,RGBQUAD* prgb);
int __stdcall ImageList_SetDragCursorImage(HIMAGELIST himlDrag,int iDrag,int dxHotspot,int dyHotspot);
int __stdcall ImageList_SetIconSize(HIMAGELIST himl,int cx,int cy);
int __stdcall ImageList_SetImageCount(HIMAGELIST himl,UINT uNewCount);
int __stdcall ImageList_SetOverlayImage(HIMAGELIST himl,int iImage,int iOverlay);
int __stdcall ImageList_Write(HIMAGELIST himl,LPSTREAM pstm);
int __stdcall ImageList_WriteEx(HIMAGELIST himl,DWORD dwFlags,LPSTREAM pstm);
int __stdcall InitCommonControls();
int __stdcall InitCommonControlsEx(const LPINITCOMMONCONTROLSEX lpInitCtrls);
int __stdcall InitMUILanguage(LANGID uiLang);
int __stdcall InitializeFlatSB(HWND hWnd);
int __stdcall LBItemFromPt(HWND hLB,POINT pt,BOOL bAutoScroll);
int __stdcall LoadIconMetric(HINSTANCE hinst,PCWSTR pszName,int lims,HICON* phico);
int __stdcall LoadIconWithScaleDown(HINSTANCE hinst,PCWSTR pszName,int cx,int cy,HICON* phico);
int __stdcall MakeDragList(HWND hLB);
int __stdcall MenuHelp(DWORD uMsg,WPARAM wParam,LPARAM lParam,HMENU hMainMenu,HINSTANCE hInst,HWND hwndStatus,LPUINT lpwIDs);
int __stdcall MirrorIcon(HICON* phIconSmall,HICON* phIconLarge);
int __stdcall PropertySheet(LPCPROPSHEETHEADER lppsph);
int __stdcall RemoveWindowSubclass(HWND hWnd,SUBCLASSPROC pfnSubclass,UINT_PTR uIdSubclass);
int __stdcall SetWindowSubclass(HWND hWnd,SUBCLASSPROC pfnSubclass,UINT_PTR uIdSubclass,DWORD_PTR dwRefData);
int __stdcall ShowHideMenuCtl(HWND hWnd,UINT_PTR uFlags,LPINT lpInfo);
int __stdcall Str_GetPtr(LPCTSTR pszSource,LPCSTR pszDest,int cchDest);
int __stdcall Str_SetPtr(LPTSTR* ppszCurrent,LPCTSTR pszNew);
int __stdcall TaskDialog(HWND hWndParent,HINSTANCE hInstance,PCWSTR pszWindowTitle,PCWSTR pszMainInstruction,PCWSTR pszContent,TASKDIALOG_COMMON_BUTTON_FLAGS dwCommonButtons,PCWSTR pszIcon,int* pnButton);
int __stdcall TaskDialogIndirect(const TASKDIALOGCONFIG* pTaskConfig,int* pnButton,int* pnRadioButton,BOOL* pfVerificationFlagChecked);
int __stdcall UninitializeFlatSB(HWND hwnd);
int __stdcall _TrackMouseEvent(LPTRACKMOUSEEVENT pTrackMouseEvent);