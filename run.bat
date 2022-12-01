@echo off
echo %PROCESSOR_ARCHITECTURE% | find /i "x86" > nul
SET MY_ARCH=%errorlevel%

:while
if not %MY_ARCH%==0 (
    start /b cyberWoodenfish_x64.exe
    echo 功德+1
    @REM Delay 1s
    ping -n 2 0.0.0.0 > NUL
) else (
    start /b cyberWoodenfish_x86.exe
    echo 功德+1
    @REM Delay 1s
    ping -n 2 0.0.0.0 > NUL
)
goto while