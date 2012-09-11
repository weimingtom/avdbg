typedef HANDLE HPALETTE;
typedef HANDLE HENHMETAFILE;
typedef HANDLE HMETAFILE;
typedef HANDLE HGDIOBJ;
typedef HANDLE HPEN;


int __stdcall AbortDoc(HDC hDC);
int __stdcall AbortPath(HDC hDC);
int __stdcall AddFontMemResourceEx(PVOID pbFont,DWORD cbFont,PVOID pdv,DWORD* pcFonts);
int __stdcall AddFontResource(LPCTSTR lpszFilename);
int __stdcall AddFontResourceA(LPCTSTR lpszFilename);
int __stdcall AddFontResourceEx(LPCTSTR lpszFilename,DWORD fl,PVOID pdv);
int __stdcall AddFontResourceW(LPCTSTR lpszFilename);
int __stdcall AngleArc(HDC hDC,int x,int y,DWORD dwRadius,FLOAT eStartAngle,FLOAT eSweepAngle);
int __stdcall AnimatePalette(HPALETTE hpal,UINT iStartindex,UINT cEntries,const PALETTEENTRY* ppe);
int __stdcall Arc(HDC hDC,int nLeftRect,int nTopRect,int nTopRect,int nBottomRect,int nXStartArc,int nYStartArc,int nXEndArc,int nYEndArc);
int __stdcall ArcTo(HDC hdc,int nLeftRect,int nTopRect,int nRightRect,int nBottomRect,int nXRadial1,int nYRadial1,int nXRadial2,int nYRadial2);
int __stdcall BeginPath(HDC hDC);
int __stdcall BitBlt(HDC hDCDest,int nXDest,int nYDest,int nWidth,int nHeight,HDC hdcSrc,int nXSrc,int nYSrc,DWORD dwRop);
int __stdcall CancelDC(HDC hDC);
int __stdcall ChoosePixelFormat(HDC hdc,const PIXELFORMATDESCRIPTOR* ppfd);
int __stdcall Chord(HDC hDC,int nLeftRect,int nTopRect,int nRightRect,int nBottomRect,int nXRadial1,int nYRadial1,int nXRadial2,int nYRadial2);
int __stdcall CloseEnhMetaFile(HDC hDC);
int __stdcall CloseFigure(HDC hDC);
int __stdcall CloseMetaFile(HDC hDC);
int __stdcall CombineRgn(HRGN hrgnDest,HRGN hrgnSrc1,HRGN hrgnSrc2,DWORD fnCombineMode);
int __stdcall CombineTransform(LPXFORM lpxformResult,const XFORM* lpxform1,const XFORM* lpxform2);
int __stdcall CopyEnhMetaFile(HENHMETAFILE hemfSrc,LPCTSTR lpszFile);
int __stdcall CopyEnhMetaFileA(HENHMETAFILE hemfSrc,LPCTSTR lpszFile);
int __stdcall CopyEnhMetaFileW(HENHMETAFILE hemfSrc,LPCTSTR lpszFile);
int __stdcall CopyMetaFile(HMETAFILE hmfSrc,LPCTSTR lpszFile);
int __stdcall CopyMetaFileA(HMETAFILE hmfSrc,LPCTSTR lpszFile);
int __stdcall CopyMetaFileW(HMETAFILE hmfSrc,LPCTSTR lpszFile);
int __stdcall CreateBitmap(int nWidth,int nHeight,UINT cPlanes,UINT cBitsPerPel,const VOID* lpvBits);
int __stdcall CreateBitmapIndirect(const BITMAP* lpbm);
int __stdcall CreateBrushIndirect(const LOGBRUSH* lplb);
int __stdcall CreateCompatibleBitmap(HDC hDC,int nWidth,int nHeight);
int __stdcall CreateCompatibleDC(HDC hDC);
int __stdcall CreateDC(LPCTSTR lpszDriver,LPCTSTR lpszDevice,LPCTSTR lpszOutput,const DEVMODE* lpInitData);
int __stdcall CreateDCA(LPCTSTR lpszDriver,LPCTSTR lpszDevice,LPCTSTR lpszOutput,const DEVMODE* lpInitData);
int __stdcall CreateDCW(LPCTSTR lpszDriver,LPCTSTR lpszDevice,LPCTSTR lpszOutput,const DEVMODE* lpInitData);
int __stdcall CreateDIBPatternBrush(HGLOBAL hglbDIBPacked,UINT fuColorSpec);
int __stdcall CreateDIBPatternBrushPt(const VOID* lpPackedDIB,DWORD iUsage);
int __stdcall CreateDIBSection(HDC hDC,const BITMAPINFO* pbmi,DWORD iUsage,VOID** ppvBits,HANDLE hSection,DWORD dwOffset);
int __stdcall CreateDIBitmap(HDC hDC,const BITMAPINFOHEADER* lpbmih,DWORD lpbmih,const VOID* lpbInit,const BITMAPINFO* lpbmi,DWORD fuUsage);
int __stdcall CreateDiscardableBitmap(HDC hdc,int nWidth,int nHeight);
int __stdcall CreateEllipticRgn(int nLeftRect,int nTopRect,int nRightRect,int nBottomRect);
int __stdcall CreateEllipticRgnIndirect(const RECT* lprc);
int __stdcall CreateEnhMetaFile(HDC hdcRef,LPCTSTR lpFilename,const RECT* lpRect,LPCTSTR lpDescription);
int __stdcall CreateEnhMetaFileA(HDC hDC,LPCTSTR lpFilename,const RECT* lpRect,LPCTSTR lpDescription);
int __stdcall CreateEnhMetaFileW(HDC hDC,LPCTSTR lpFilename,const RECT* lpRect,LPCTSTR lpDescription);
int __stdcall CreateFont(int nHeight,int nWidth,int nEscapement,int nOrientation,DWORD fnWeight,DWORD fdwItalic,DWORD fdwUnderline,DWORD fdwStrikeOut,DWORD fdwCharSet,DWORD fdwOutputPrecision,DWORD fdwClipPrecision,DWORD fdwQuality,DWORD fdwPitchAndFamily,LPCTSTR lpszFace);
int __stdcall CreateFontA(int nHeight,int nWidth,int nEscapement,int nOrientation,DWORD fnWeight,DWORD fdwItalic,DWORD fdwUnderline,DWORD fdwStrikeOut,DWORD fdwCharSet,DWORD fdwOutputPrecision,DWORD fdwClipPrecision,DWORD fdwQuality,DWORD fdwPitchAndFamily,LPCTSTR lpszFace);
int __stdcall CreateFontIndirect(const LOGFONT* lplf);
int __stdcall CreateFontIndirectA(const LOGFONT* lplf);
int __stdcall CreateFontIndirectEx(const ENUMLOGFONTEXDV* penumlfex);
int __stdcall CreateFontIndirectW(const LOGFONT* lplf);
int __stdcall CreateFontW(int nHeight,int nWidth,int nEscapement,int nOrientation,DWORD fnWeight,DWORD fdwItalic,DWORD fdwUnderline,DWORD fdwStrikeOut,DWORD fdwCharSet,DWORD fdwOutputPrecision,DWORD fdwClipPrecision,DWORD fdwQuality,DWORD fdwPitchAndFamily,LPCTSTR lpszFace);
int __stdcall CreateHalftonePalette(HDC hDC);
int __stdcall CreateHatchBrush(DWORD fnStyle,COLORREF clrref);
int __stdcall CreateIC(LPCTSTR lpszDriver,LPCTSTR lpszDevice,LPCTSTR lpszOutput,const DEVMODE* lpdvmInit);
int __stdcall CreateICA(LPCTSTR lpszDriver,LPCTSTR lpszDevice,LPCTSTR lpszOutput,const DEVMODE* lpdvmInit);
int __stdcall CreateMetaFile(LPCTSTR lpszFile);
int __stdcall CreateMetaFileA(LPCTSTR lpszFile);
int __stdcall CreateMetaFileW(LPCTSTR lpszFile);
int __stdcall CreatePalette(const LOGPALETTE* lplgpl);
int __stdcall CreatePatternBrush(HBITMAP hbmp);
int __stdcall CreatePolyPolygonRgn(const POINT* lppt,const INT* lpPolyCounts,int nCount,DWORD fnPolyFillMode);
int __stdcall CreatePolygonRgn(const POINT* lppt,int cPoints,DWORD fnPolyFillMode);
int __stdcall CreateRectRgn(int nLeftRect,int nTopRect,int nRightRect,int nBottomRect);
int __stdcall CreateRectRgnIndirect(const RECT* lprc);
int __stdcall CreateRoundRectRgn(int nLeftRect,int nTopRect,int nRightRect,int nBottomRect,int nWidthEllipse,int nHeightEllipse);
int __stdcall CreateScalableFontResource(DWORD fdwHidden,LPCTSTR lpszFontRes,LPCTSTR lpszFontFile,LPCTSTR lpszCurrentPath);
int __stdcall CreateScalableFontResourceA(DWORD fdwHidden,LPCTSTR lpszFontRes,LPCTSTR lpszFontFile,LPCTSTR lpszCurrentPath);
int __stdcall CreateScalableFontResourceW(DWORD fdwHidden,LPCTSTR lpszFontRes,LPCTSTR lpszFontFile,LPCTSTR lpszCurrentPath);
int __stdcall CreateSolidBrush(COLORREF crColor);
int __stdcall DPtoLP(HDC hDC,LPPOINT lpPoints,int nCount);
int __stdcall DeleteDC(HDC hDC);
int __stdcall DeleteEnhMetaFile(HENHMETAFILE hemf);
int __stdcall DeleteMetaFile(HMETAFILE hmf);
int __stdcall DeleteObject(HGDIOBJ hObject);
int __stdcall DescribePixelFormat(HDC hdc,int iPixelFormat,UINT nBytes,LPPIXELFORMATDESCRIPTOR ppfd);
int __stdcall DrawEscape(HDC hDC,int nEscape,int cbInput,LPCSTR lpszInData);
int __stdcall Ellipse(HDC hdc,int nLeftRect,int nTopRect,int nRightRect,int nBottomRect);
int __stdcall EndDoc(HDC hDC);
int __stdcall EndPage(HDC hDC);
int __stdcall EndPath(HDC hDC);
int __stdcall EnumEnhMetaFile(HDC hDC,HENHMETAFILE hemf,ENHMFENUMPROC lpEnhMetaFunc,LPVOID lpData,const RECT* lpRect);
int __stdcall EnumFontFamilies(HDC hdc,LPCTSTR lpszFamily,FONTENUMPROC lpEnumFontFamProc,LPARAM lParam);
int __stdcall EnumFontFamiliesA(HDC hDC,LPCTSTR lpszFamily,FONTENUMPROC lpEnumFontFamProc,LPARAM lParam);
int __stdcall EnumFontFamiliesEx(HDC hdc,LPLOGFONT lpLogfont,FONTENUMPROC lpEnumFontFamExProc,LPARAM lParam,DWORD dwFlags);
int __stdcall EnumFontFamiliesExA(HDC hDC,LPLOGFONT lpLogfont,FONTENUMPROC lpEnumFontFamExProc,LPARAM lParam,DWORD dwFlags);
int __stdcall EnumFontFamiliesExW(HDC hDC,LPLOGFONT lpLogfont,FONTENUMPROC lpEnumFontFamExProc,LPARAM lParam,DWORD dwFlags);
int __stdcall EnumFontFamiliesW(HDC hDC,LPCTSTR lpszFamily,FONTENUMPROC lpEnumFontFamProc,LPARAM lParam);
int __stdcall EnumFonts(HDC hdc,LPCTSTR lpFaceName,FONTENUMPROC lpFontFunc,LPARAM lParam);
int __stdcall EnumFontsA(HDC hDC,LPCTSTR lpFaceName,FONTENUMPROC lpFontFunc,LPARAM lParam);
int __stdcall EnumFontsW(HDC hDC,LPCTSTR lpFaceName,FONTENUMPROC lpFontFunc,LPARAM lParam);
int __stdcall EnumMetaFile(HDC hDC,HMETAFILE hmf,MFENUMPROC lpMetaFunc,LPARAM lParam);
int __stdcall EnumObjects(HDC hDC,int nObjectType,GOBJENUMPROC lpObjectFunc,LPARAM lParam);
int __stdcall EqualRgn(HRGN hSrcRgn1,HRGN hSrcRgn2);
int __stdcall Escape(HDC hDC,DWORD nEscape,int cbInput,LPCSTR lpvInData,LPVOID lpvOutData );
int __stdcall ExcludeClipRect(HDC hDC,int nLeftRect,int nTopRect,int nRightRect,int nBottomRect);
int __stdcall ExtCreateRegion(const XFORM* lpXform,DWORD nCount,const RGNDATA* lpRgnData);
int __stdcall ExtEscape(HDC hdc,int nEscape,int cbInput,LPCSTR lpszInData,int cbOutput,LPSTR lpszOutData);
int __stdcall ExtFloodFill(HDC hDC,int nXStart,int nYStart,COLORREF crColor,UINT fuFillType);
int __stdcall ExtSelectClipRgn(HDC hDC,HRGN hrgn,DWORD fnMode);
int __stdcall ExtTextOut(HDC hdc,int X,int Y,DWORD fuOptions,const RECT* lprc,LPCTSTR lpString,UINT cbCount,const INT* lpDx);
int __stdcall ExtTextOutA(HDC hDC,int X,int Y,DWORD fuOptions,const RECT* lprc,LPCTSTR lpString,UINT cbCount,const INT* lpDx);
int __stdcall ExtTextOutW(HDC hDC,int X,int Y,DWORD fuOptions,const RECT* lprc,LPCTSTR lpString,UINT cbCount,const INT* lpDx);
int __stdcall FillPath(HDC hDC);
int __stdcall FillRgn(HDC hDc,HRGN hrgn,HBRUSH hbr);
int __stdcall FlattenPath(HDC hDC);
int __stdcall FloodFill(HDC hDc,int nXStart,int nYStart,COLORREF crFill);
int __stdcall FrameRgn(HDC hDc,HRGN hrgn,HBRUSH hbr,int nWidth,int nHeight);
int __stdcall GdiComment(HDC hDC,UINT cbSize,const BYTE* lpData);
int __stdcall GdiFlush();
int __stdcall GdiGetBatchLimit();
int __stdcall GdiSetBatchLimit(DWORD dwLimit);
int __stdcall GetArcDirection(HDC hDC);
int __stdcall GetAspectRatioFilterEx(HDC hDC);
int __stdcall GetBitmapBits(HBITMAP hBitmap,LONG dwCount,LPVOID lpBits);
int __stdcall GetBitmapDimensionEx(HBITMAP hBitmap,LPSIZE lpDimension);
int __stdcall GetBkColor(HDC hDC);
int __stdcall GetBkMode(HDC hDC);
int __stdcall GetBoundsRect(HDC hDC,LPRECT lprcBounds,DWORD flags);
int __stdcall GetBrushOrgEx(HDC hDC,LPPOINT lppt);
int __stdcall GetCharABCWidths(HDC hdc,UINT uFirstChar,UINT uLastChar,LPABC lpabc);
int __stdcall GetCharABCWidthsA(HDC hDC,UINT uFirstChar,UINT uLastChar,LPABC lpabc);
int __stdcall GetCharABCWidthsFloat(HDC hdc,UINT iFirstChar,UINT iLastChar,LPABCFLOAT lpABCF);
int __stdcall GetCharABCWidthsFloatA(HDC hDC,UINT iFirstChar,UINT iLastChar,LPABCFLOAT lpABCF);
int __stdcall GetCharABCWidthsFloatW(HDC hDC,UINT iFirstChar,UINT iLastChar,LPABCFLOAT lpABCF);
int __stdcall GetCharABCWidthsI(HDC hdc,UINT giFirst,UINT cgi,LPWORD pgi,LPABC lpabc);
int __stdcall GetCharABCWidthsW(HDC hDC,UINT uFirstChar,UINT uLastChar,LPABC lpabc);
int __stdcall GetCharWidth(HDC hdc,UINT iFirstChar,UINT iLastChar,LPINT lpBuffer);
int __stdcall GetCharWidth32(HDC hdc,UINT iFirstChar,UINT iLastChar,LPINT lpBuffer);
int __stdcall GetCharWidthA(HDC hDC,UINT iFirstChar,UINT iLastChar,LPINT lpStockBuffer);
int __stdcall GetCharWidthFloat(HDC hdc,UINT iFirstChar,UINT iLastChar,PFLOAT pxBuffer);
int __stdcall GetCharWidthI(HDC hdc,UINT giFirst,UINT cgi,LPWORD pgi,LPINT lpBuffer);
int __stdcall GetCharWidthW(HDC hDC,UINT iFirstChar,UINT iLastChar,LPINT lpStockBuffer);
int __stdcall GetCharacterPlacement(HDC hdc,LPCTSTR lpString,int nCount,int nMaxExtent,LPGCP_RESULTS lpResults,DWORD dwFlags);
int __stdcall GetCharacterPlacementA(HDC hDC,LPCTSTR lpString,int nCount,int nMaxExtent,LPGCP_RESULTS lpResults,DWORD dwFlags);
int __stdcall GetCharacterPlacementW(HDC hDC,LPCTSTR lpString,int nCount,int nMaxExtent,LPGCP_RESULTS lpResults,DWORD dwFlags);
int __stdcall GetClipBox(HDC hDC,LPRECT lprc);
int __stdcall GetClipRgn(HDC hdc,HRGN hrgn);
int __stdcall GetColorAdjustment(HDC hdc,LPCOLORADJUSTMENT lpca);
int __stdcall GetCurrentObject(HDC hDC,DWORD uObjectType);
int __stdcall GetCurrentPositionEx(HDC hDC,LPPOINT lpPoint);
int __stdcall GetDCBrushColor(HDC hdc);
int __stdcall GetDCOrgEx(HDC hDC,LPPOINT lpPoint);
int __stdcall GetDCPenColor(HDC hdc);
int __stdcall GetDIBColorTable(HDC hDC,UINT uStartIndex,UINT cEntries,RGBQUAD* pColors);
int __stdcall GetDIBits(HDC hDC,HBITMAP hbmp,UINT uStartScan,UINT cScanLines,LPVOID lpvBits,LPBITMAPINFO lpbi,DWORD uUsage);
int __stdcall GetDeviceCaps(HDC hDC,DWORD nIndex);
int __stdcall GetEnhMetaFile(LPCTSTR lpszMetaFile);
int __stdcall GetEnhMetaFileA(LPCTSTR lpszMetaFile);
int __stdcall GetEnhMetaFileBits(HENHMETAFILE hemf,UINT cbBuffer,LPBYTE lpbBuffer);
int __stdcall GetEnhMetaFileDescription(HENHMETAFILE hemf,UINT cchBuffer,LPTSTR lpszDescription);
int __stdcall GetEnhMetaFileDescriptionA(HENHMETAFILE hemf,UINT cchBuffer,LPTSTR lpszDescription);
int __stdcall GetEnhMetaFileDescriptionW(HENHMETAFILE hemf,UINT cchBuffer,LPTSTR lpszDescription);
int __stdcall GetEnhMetaFileHeader(HENHMETAFILE hemf,UINT cbBuffer,LPENHMETAHEADER lpemh);
int __stdcall GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf,UINT cEntries,LPPALETTEENTRY lppe);
int __stdcall GetEnhMetaFilePixelFormat(HENHMETAFILE hemf,DWORD cbBuffer,const PIXELFORMATDESCRIPTOR* ppfd);
int __stdcall GetEnhMetaFileW(LPCTSTR lpszMetaFile);
int __stdcall GetFontData(HDC hDC,DWORD dwTable,DWORD dwOffset,LPVOID lpvBuffer,DWORD cbData);
int __stdcall GetFontLanguageInfo(HDC hDC);
int __stdcall GetFontUnicodeRanges(HDC hdc,LPGLYPHSET lpgs);
int __stdcall GetGlyphIndices(HDC hdc,LPCTSTR lpstr,int c,LPWORD pgi,DWORD fl);
int __stdcall GetGlyphOutline(HDC hDC,UINT uChar,DWORD uFormat,LPGLYPHMETRICS lpgm,DWORD cbBuffer,LPVOID lpvBuffer,const MAT2* lpmat2);
int __stdcall GetGlyphOutlineW(HDC hDC,UINT uChar,DWORD uFormat,LPGLYPHMETRICS lpgm,DWORD cbBuffer,LPVOID lpvBuffer,const MAT2* lpmat2);
int __stdcall GetGraphicsMode(HDC hDC);
int __stdcall GetKerningPairs(HDC hDC,DWORD nNumPairs,LPKERNINGPAIR lpkrnpair);
int __stdcall GetKerningPairsW(HDC hDC,DWORD nNumPairs,LPKERNINGPAIR lpkrnpair);
int __stdcall GetLayout(HDC hdc);
int __stdcall GetMapMode(HDC hDC);
int __stdcall GetMetaFileBitsEx(HMETAFILE hmf,UINT nSize,LPVOID lpvData);
int __stdcall GetMetaRgn(HDC hdc,HRGN hrgn);
int __stdcall GetMiterLimit(HDC hDC,PFLOAT peLimit);
int __stdcall GetNearestColor(HDC hDC,COLORREF crColor);
int __stdcall GetNearestPaletteIndex(HPALETTE hpal,COLORREF crColor);
int __stdcall GetObject(HGDIOBJ hgdiobj,int cbBuffer,LPVOID lpvObject);
int __stdcall GetObjectA(HGDIOBJ hgdiobj,int cbBuffer,LPVOID lpvObject);
int __stdcall GetObjectType(HGDIOBJ hgdiobj);
int __stdcall GetObjectW(HGDIOBJ hgdiobj,int cbBuffer,LPVOID lpvObject);
int __stdcall GetOutlineTextMetrics(HDC hdc,UINT cbData,LPOUTLINETEXTMETRIC lpOTM);
int __stdcall GetOutlineTextMetricsA(HDC hDC,UINT cbData,LPOUTLINETEXTMETRIC lpOTM);
int __stdcall GetOutlineTextMetricsW(HDC hDC,UINT cbData,LPOUTLINETEXTMETRIC lpOTM);
int __stdcall GetPaletteEntries(HPALETTE hpal,UINT iStartIndex,UINT nEntries,LPPALETTEENTRY lppe);
int __stdcall GetPath(HDC hDC,LPPOINT lpPoints,LPBYTE lpTypes,int nSize);
int __stdcall GetPixel(HDC hDC,int XPos,int YPos);
int __stdcall GetPixelFormat(HDC hdc);
int __stdcall GetPolyFillMode(HDC hDC);
int __stdcall GetROP2(HDC hDC);
int __stdcall GetRandomRgn(HDC hdc,HRGN hrgn,DWORD iNum);
int __stdcall GetRasterizerCaps(LPRASTERIZER_STATUS lprs,UINT cb);
int __stdcall GetRegionData(HRGN hRgn,DWORD dwCount,LPRGNDATA lpRgnData);
int __stdcall GetRgnBox(HRGN hrgn,LPRECT lprc);
int __stdcall GetStockObject(int fnIndex);
int __stdcall GetStretchBltMode(HDC hDC);
int __stdcall GetSystemPaletteEntries(HDC hDC,UINT wStartIndex,UINT wNumEntries,LPPALETTEENTRY lpPaletteEntries);
int __stdcall GetSystemPaletteUse(HDC hdc);
int __stdcall GetTextAlign(HDC hDC);
int __stdcall GetTextCharacterExtra(HDC hDC);
int __stdcall GetTextCharset(HDC hDC);
int __stdcall GetTextCharsetInfo(HDC hDC);
int __stdcall GetTextColor(HDC hDC);
int __stdcall GetTextExtentExPoint(HDC hdc,LPCTSTR lpszStr,int cchString,int nMaxExtent,LPINT lpnFit,LPINT alpDx,LPSIZE lpSize);
int __stdcall GetTextExtentExPointA(HDC hDC,LPCTSTR lpszStr,int cchString,int nMaxExtent,LPINT lpnFit,LPINT alpDx,LPSIZE lpSize);
int __stdcall GetTextExtentExPointI(HDC hdc,LPWORD pgiIn,int cgi,int nMaxExtent,LPINT lpnFit,LPINT alpDx,LPSIZE lpSize);
int __stdcall GetTextExtentExPointW(HDC hDC,LPCTSTR lpszStr,int cchString,int nMaxExtent,LPINT lpnFit,LPINT alpDx,LPSIZE lpSize);
int __stdcall GetTextExtentPoint(HDC hdc,LPCTSTR lpString,int cbString,LPSIZE lpSize);
int __stdcall GetTextExtentPoint32(HDC hdc,LPCTSTR lpString,int c,LPSIZE lpSize);
int __stdcall GetTextExtentPoint32A(HDC hDC,LPCTSTR lpString,int cbString,LPSIZE lpSize);
int __stdcall GetTextExtentPoint32W(HDC hdc,LPCTSTR lpString,int cbString,LPSIZE lpSize);
int __stdcall GetTextExtentPointA(HDC hDC,LPCTSTR lpString,int cbString,LPSIZE lpSize);
int __stdcall GetTextExtentPointI(HDC hdc,LPWORD pgiIn,int cgi,LPSIZE lpSize);
int __stdcall GetTextExtentPointW(HDC hDC,LPCTSTR lpString,int cbString,LPSIZE lpSize);
int __stdcall GetTextFace(HDC hdc,int nCount,LPTSTR lpFaceName);
int __stdcall GetTextFaceA(HDC hDC,int nCount,LPTSTR lpFaceName);
int __stdcall GetTextFaceW(HDC hDC,int nCount,LPTSTR lpFaceName);
int __stdcall GetTextMetrics(HDC hdc,LPTEXTMETRIC lptm);
int __stdcall GetTextMetricsA(HDC hDC,LPTEXTMETRIC lptm);
int __stdcall GetTextMetricsW(HDC hDC,LPTEXTMETRIC lptm);
int __stdcall GetViewportExtEx(HDC hDC,LPSIZE lpSize);
int __stdcall GetViewportOrgEx(HDC hDC,LPPOINT lpPoint);
int __stdcall GetWinMetaFileBits(HENHMETAFILE hemf,UINT cbBuffer,LPBYTE lpbBuffer,DWORD fnMapMode,HDC hdcRef);
int __stdcall GetWindowExtEx(HDC hWnd,LPSIZE lpSize);
int __stdcall GetWindowOrgEx(HDC hWnd,LPPOINT lpPoint);
int __stdcall GetWorldTransform(HDC hDC,LPXFORM lpXform);
int __stdcall IntersectClipRect(HDC hDC,int nLeftRect,int nTopRect,int nRightRect,int nBottomRect);
int __stdcall InvertRgn(HDC hDC,HRGN hrgn);
int __stdcall LPtoDP(HDC hDC,LPPOINT lpPoints,int nCount);
int __stdcall LineDDA(int nXStart,int nYStart,int nXEnd,int nYEnd,LINEDDAPROC lpLineFunc,LPARAM lpData);
int __stdcall LineTo(HDC hDC,int nXEnd,int nYEnd);
int __stdcall MaskBlt(HDC hdcDest,int nXDest,int nYDest,int nWidth,int nHeight,HDC hdcSrc,int nXSrc,int nYSrc,HBITMAP hbmMask,int xMask,int yMask,DWORD dwRop);
int __stdcall ModifyWorldTransform(HDC hDC,const XFORM* lpXform,DWORD iMode);
int __stdcall MoveToEx(HDC hDC,int X,int Y,LPPOINT lpPoint);
int __stdcall OffsetClipRgn(HDC hDC,int nXOffset,int nYOffset);
int __stdcall OffsetRgn(HRGN hrgn,int nXOffset,int nYOffset);
int __stdcall OffsetViewportOrgEx(HDC hDC,int nXOffset,int nYOffset,LPPOINT lpPoint);
int __stdcall OffsetWindowOrgEx(HDC hDC,int nXOffset,int nYOffset,LPPOINT lpPoint);
int __stdcall PaintRgn(HDC hDC,HRGN hrgn);
int __stdcall PatBlt(HDC hDC,int nXLeft,int nYLeft,int nWidth,int nHeight,DWORD dwRop);
int __stdcall PathToRegion(HDC hDC);
int __stdcall Pie(HDC hDC,int nLeftRect,int nTopRect,int nRightRect,int nBottomRect,int nXRadial1,int nYRadial1,int nXRadial2,int nYRadial2);
int __stdcall PlayEnhMetaFile(HDC hDC,HENHMETAFILE hemf,const RECT* lpRect);
int __stdcall PlayEnhMetaFileRecord(HDC hDC,LPHANDLETABLE lpHandletable,const ENHMETARECORD* lpEnhMetaRecord,UINT nHandles);
int __stdcall PlayMetaFile(HDC hDC,HMETAFILE hmf);
int __stdcall PlayMetaFileRecord(HDC hDC,LPHANDLETABLE lpHandletable,LPMETARECORD lpMetaRecord,UINT nHandles);
int __stdcall PlgBlt(HDC hdcDest,const POINT* lpPoint,HDC hdcSrc,int nXSrc,int nYSrc,int nWidth,int nHeight,HBITMAP hbmMask,int xMask,int yMask);
int __stdcall PolyBezier(HDC hDC,const POINT* lppt,DWORD lppt);
int __stdcall PolyBezierTo(HDC hdc,const POINT* lppt,DWORD cCount);
int __stdcall PolyDraw(HDC hDC,const POINT* lppt,const BYTE* lpbTypes,int cCount);
int __stdcall PolyPolygon(HDC hDC,const POINT* lpPoints,const INT* lpPolyCounts,int nCount);
int __stdcall PolyPolyline(HDC hDC,const POINT* lppt,const DWORD* lpdwPolyPoints,DWORD cCount);
int __stdcall PolyTextOut(HDC hdc,const POLYTEXT* pptxt,int cStrings);
int __stdcall PolyTextOutA(HDC hDC,const POLYTEXT* pptxt,int cStrings);
int __stdcall PolyTextOutW(HDC hDC,const POLYTEXT* pptxt,int cStrings);
int __stdcall Polygon(HDC hDC,const POINT* lpPoints,int nCount);
int __stdcall Polyline(HDC hDC,const POINT* lppt,int cPoints);
int __stdcall PolylineTo(HDC hdc,const POINT* lppt,DWORD cCount);
int __stdcall PtInRegion(HRGN hrgn,int X,int Y);
int __stdcall PtVisible(HDC hDC,int X,int Y);
int __stdcall RealizePalette(DWORD hDC);
int __stdcall RealizePalette(HDC hDC);
int __stdcall RectInRegion(HRGN hrgn,const RECT* lprc);
int __stdcall RectVisible(HDC hDC,const RECT* lprc);
int __stdcall Rectangle(HDC hDC,int nLeftRect,int nTopRect,int nRightRect,int nBottomRect);
int __stdcall RemoveFontMemResourceEx(HANDLE fh);
int __stdcall RemoveFontResource(LPCTSTR lpFileName);
int __stdcall RemoveFontResourceA(LPCTSTR lpFileName);
int __stdcall RemoveFontResourceEx(LPCTSTR lpFileName,DWORD fl,PVOID pdv);
int __stdcall RemoveFontResourceW(LPCTSTR lpFileName);
int __stdcall ResetDC(HDC hdc,const DEVMODE* lpInitData);
int __stdcall ResetDCA(HDC hDc,const DEVMODE* lpInitData);
int __stdcall ResetDCW(HDC hDc,const DEVMODE* lpInitData);
int __stdcall ResizePalette(HPALETTE hpal,UINT nEntries);
int __stdcall RestoreDC(HDC hDC,int nSavedDC);
int __stdcall RoundRect(HDC hDC,int nLeftRect,int nTopRect,int nRightRect,int nBottomRect,int nWidth,int nHeight);
int __stdcall SaveDC(HDC hDC);
int __stdcall ScaleViewportExtEx(HDC hDC,int Xnum,int Xdenom,int Ynum,int Ydenom,LPSIZE lpSize);
int __stdcall ScaleWindowExtEx(HDC hDC,int Xnum,int Xdenom,int Ynum,int Ydenom,LPSIZE lpSize);
int __stdcall SelectClipPath(HDC hDC,int iMode);
int __stdcall SelectClipRgn(HDC hDC,HRGN hrgn);
int __stdcall SelectObject(HDC hDC,HGDIOBJ hObjec);
int __stdcall SelectPalette(HDC hDC,HPALETTE hpal,BOOL bForceBackground);
int __stdcall SetAbortProc(HDC hDC,ABORTPROC lpAbortProc);
int __stdcall SetArcDirection(HDC hDC,int ArcDirection);
int __stdcall SetBitmapBits(HBITMAP hbmp,DWORD cBytes,const VOID* lpBits);
int __stdcall SetBitmapDimensionEx(HBITMAP hBitmap,int nWidth,int nHeight,LPSIZE lpSize);
int __stdcall SetBkColor(HDC hDC,COLORREF crColor);
int __stdcall SetBkMode(HDC hDC,DWORD iBkMode);
int __stdcall SetBoundsRect(HDC hDC,const RECT* lprcBounds,DWORD flags);
int __stdcall SetBrushOrgEx(HDC hDC,int nXOrg,int nYOrg,LPPOINT lppt);
int __stdcall SetColorAdjustment(HDC hdc,const COLORADJUSTMENT* lpca);
int __stdcall SetDCBrushColor(HDC hdc,COLORREF crColor);
int __stdcall SetDCPenColor(HDC hdc,COLORREF crColor);
int __stdcall SetDIBColorTable(HDC hDC,UINT un1,UINT un2,const RGBQUAD* pcRGBQuad);
int __stdcall SetDIBits(HDC hDC,HBITMAP hbmp,UINT uStartScan,UINT cScanLines,const VOID* lpvBits,const BITMAPINFO* lpbmi,DWORD fuColorUse);
int __stdcall SetDIBitsToDevice(HDC hDC,int XDest,int YDest,DWORD dwWidth,DWORD dwHeight,int XSrc,int YSrc,UINT uStartScan,UINT cScanLines,const VOID* lpvBits,const BITMAPINFO* lpbmi,DWORD fuColorUse);
int __stdcall SetEnhMetaFileBits(UINT cbBuffer,const BYTE* lpData);
int __stdcall SetGraphicsMode(HDC hDC,DWORD iMode);
int __stdcall SetLayout(HDC hdc,DWORD dwLayout);
int __stdcall SetMapMode(HDC hDC,DWORD fnMapMode);
int __stdcall SetMapperFlags(HDC hDC,DWORD dwFlag);
int __stdcall SetMetaFileBitsEx(UINT nSize,const BYTE* lpData);
int __stdcall SetMetaRgn(HDC hdc);
int __stdcall SetMiterLimit(HDC hDC,FLOAT eNewLimit,PFLOAT peOldLimit);
int __stdcall SetPaletteEntries(HPALETTE hpal,UINT iStart,UINT cEntries,const PALETTEENTRY* lppe);
int __stdcall SetPixel(HDC hDC,int X,int Y,COLORREF crColor);
int __stdcall SetPixelFormat(HDC hdc,int iPixelFormat,const PIXELFORMATDESCRIPTOR* ppfd);
int __stdcall SetPixelV(HDC hDC,int X,int Y,COLORREF crColor);
int __stdcall SetPolyFillMode(HDC hDC,DWORD iPolyFillMode);
int __stdcall SetROP2(HDC hDC,DWORD fnDrawMode2);
int __stdcall SetRectRgn(HRGN hrgn,int nLeftRect,int nTopRect,int nRightRect,int nBottomRect);
int __stdcall SetStretchBltMode(HDC hDC,DWORD iStretchMode);
int __stdcall SetSystemPaletteUse(HDC hdc,UINT uUsage);
int __stdcall SetTextAlign(HDC hDC,DWORD fMode);
int __stdcall SetTextCharacterExtra(HDC hDC,int nCharExtra);
int __stdcall SetTextColor(HDC hDC,COLORREF crColor);
int __stdcall SetTextJustification(HDC hDC,int nBreakExtra,int nBreakCount);
int __stdcall SetViewportExtEx(HDC hDc,int nXExtent,int nYExtent,LPSIZE lpSize);
int __stdcall SetViewportOrgEx(HDC hDC,int X,int Y,LPPOINT lpPoint);
int __stdcall SetWinMetaFileBits(UINT nBufferSize,const BYTE* lpbBuffer,HDC hdcRef,const METAFILEPICT* lpmfp);
int __stdcall SetWindowExtEx(HDC hDC,int nXExtent,int nYExtent,LPSIZE lpSize);
int __stdcall SetWindowOrgEx(HDC hDC,int X,int Y,LPPOINT lpPoint);
int __stdcall SetWorldTransform(HDC hDC,const XFORM* lpXform);
int __stdcall StartDoc(HDC hdc,const DOCINFO* lpdi);
int __stdcall StartDocA(HDC hDC,const DOCINFO* lpdi);
int __stdcall StartDocW(HDC hDC,const DOCINFO* lpdi);
int __stdcall StartPage(HDC hDC);
int __stdcall StretchBlt(HDC hdcDest,int nXOriginDest,int nYOriginDest,int nWidthDest,int nHeightDest,HDC hdcSrc,int nXOriginSrc,int nYOriginSrc,int nWidthSrc,int nHeightSrc,DWORD dwRop);
int __stdcall StretchDIBits(HDC hDC,int XDest,int YDest,int nDestWidth,int nDestHeight,int XSrc,int YSrc,int nSrcWidth,int nSrcHeight,const VOID* lpBits,const BITMAPINFO* lpBitsInf,DWORD iUsage,DWORD dwRop);
int __stdcall StrokeAndFillPath(HDC hDC);
int __stdcall StrokePath(HDC hDC);
int __stdcall SwapBuffers(HDC hdc);
int __stdcall TextOut(HDC hdc,int nXStart,int nYStart,LPCTSTR lpString,int cbString);
int __stdcall TextOutA(HDC hDC,int nXStart,int nYStart,LPCTSTR lpString,int cbString);
int __stdcall TextOutW(HDC hDC,int nXStart,int nYStart,LPCTSTR lpString,int cbString);
int __stdcall TranslateCharsetInfo(DWORD* lpSrc,LPCHARSETINFO lpCharsetInfo,DWORD dwFlags);
int __stdcall UnrealizeObject(HGDIOBJ hgdiobj);
int __stdcall UpdateColors(HDC hdc);
int __stdcall WidenPath(HDC hDC);
HPEN __stdcall CreatePen(int fnPenStyle,int nWidth,COLORREF crColor);