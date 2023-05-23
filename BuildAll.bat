@ECHO OFF

cls

ECHO Building Engine
PUSHD Engine
CALL BuildEngine.bat
POPD

ECHO Building Test
PUSHD Test
CALL BuildTest.bat
POPD