setlocal
set cmd_Configuration=%1
set cmd_OutDir=%2

goto %cmd_Configuration%

:Debug
echo %cmd_Configuration% %cmd_OutDir%

echo xcopy /d /f /h /i /r /v /y "..\..\..\vbisam-2.0.1\_build_windows_vs17\x64\Release\vbisam.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\vbisam-2.0.1\_build_windows_vs17\x64\Release\vbisam.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\cjson.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\cjson.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\charset-1.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\charset-1.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\iconv-2.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\iconv-2.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\intl-8.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\intl-8.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\libxml2.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\libxml2.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\lzmad.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\lzmad.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\mpir.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\mpir.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\pdcurses.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\pdcurses.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\zlib*.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\zlib*.*" "%cmd_OutDir%"

goto end

:Release
echo %cmd_Configuration% %cmd_OutDir%

echo xcopy /d /f /h /i /r /v /y "..\..\..\vbisam-2.0.1\_build_windows_vs17\x64\Release\vbisam.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\vbisam-2.0.1\_build_windows_vs17\x64\Release\vbisam.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\cjson.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\cjson.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\charset-1.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\charset-1.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\iconv-2.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\iconv-2.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\intl-8.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\intl-8.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\libxml2.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\libxml2.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\lzma.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\lzma.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\mpir.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\mpir.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\pdcurses.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\pdcurses.*" "%cmd_OutDir%"

echo xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\zlib*.*" "%cmd_OutDir%"
xcopy /d /f /h /i /r /v /y "..\..\..\_vcpkg\%cmd_Configuration%\bin\zlib*.*" "%cmd_OutDir%"

:end
endlocal