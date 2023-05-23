REM Build script for engine
@ECHO OFF
SetLocal EnableDelayedExpansion

REM Get a list of all the .c files.
SET cFilenames=
FOR /R %%f in (*.cpp) do (
    SET cFilenames=!cFilenames! %%f
)

SET assembly=Engine
SET compilerFlags=-g -shared
SET includeFlags=-ISource -IInclude -IVendor/SPDLog/include
SET linkerFlags=-lglfw3 -lopengl32 -lglu32 -L../bin
SET defines=-DGLFW_INCLUDE_NONE -DCORE_BUILD_DLL -DCORE_PLATFORM_WIN32


g++ %defines% %compilerFlags% %cFilenames% %includeFlags% %linkerFlags% -o ../bin/%assembly%.dll
