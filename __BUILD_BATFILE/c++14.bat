cls

@echo [101mg++ %* -std=c++14 -o gout.exe [0m
@g++ %* -std=c++14 -o gout.exe

@IF %ERRORLEVEL% EQU 0 (
	echo [33;4m[ g++ compiling success !! ][0m
	echo [33;4m[ run gout.exe ][0m
  	gout.exe
) ELSE (
	echo [33;4m[ Error !!, g++ fail to compile. ][0m
)

@echo.
@echo.

@echo [101mcl %* /std:c++14 /utf-8 /out:vout.exe [0m
@cl  %* /permissive- /std:c++14 /utf-8 /nologo /EHsc /link /out:vout.exe

@IF %ERRORLEVEL%  EQU 0 (
	echo [33;4m[ cl compiling success !! ][0m
	echo [33;4m[ run vout.exe ][0m
	vout.exe
)ELSE (
	echo [33;4m[ Error !!, cl fail to compile. ][0m
)

@echo.