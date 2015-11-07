!IFDEF DEBUG
Configuration = Debug
TargetName = PyCTP_d
DEBUGCMD = ..\..\Python-3.4.3\PCbuild\python_d.exe -d
CPPFLAGS = /D "_DEBUG" /D "WIN32" /D "_WINDOWS"

!ELSE
Configuration = Release
TargetName = PyCTP
DEBUGCMD = ..\..\Python-3.4.3\PCbuild\python.exe
CPPFLAGS = /D "NDEBUG" /D "WIN32" /D "_WINDOWS" /O2

!ENDIF

TargetFile = $(TargetName).pyd
UNICODE = /D "_UNICODE" /D "UNICODE"

CPPFLAGS = $(CPPFLAGS) $(UNICODE) /Zi /nologo /W3 /WX /Gm /Fo$(Configuration)\ /Fd$(Configuration)\ /c
CPPFLAGS = $(CPPFLAGS) /I"..\..\Python-3.4.3\Include" /I"..\..\Python-3.4.3\PC" /I"..\tradeapidll"

RFLAGS = $(RFLAGS) $(UNICODE) /l 0x0409 /nologo

LFLAGS = $(LFLAGS) /OUT:"..\$(Configuration)\$(TargetFile)" /NOLOGO /DLL /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF /WX
LFLAGS = $(LFLAGS) /LIBPATH:"..\..\Python-3.4.3\PCbuild" /LIBPATH:"..\tradeapidll"
LFLAGS = $(LFLAGS) "thosttraderapi.lib" "thostmduserapi.lib"

RC = rc.exe
CPP = cl.exe
LINK = link.exe

PCHNAME  = "$(Configuration)\stdafx.pch"
PCHHEADER = "stdafx.h"
PCHFLAGS = /Yu$(PCHHEADER) /Fp$(PCHNAME)

OBJS = $(Configuration)\stdafx.obj		\
	   $(Configuration)\Constant.obj	\
	   $(Configuration)\DataStruct.obj	\
	   $(Configuration)\DataType.obj	\
	   $(Configuration)\Market.obj		\
	   $(Configuration)\Trader.obj		\
	   $(Configuration)\PyCTP.obj		\
	   $(Configuration)\PyCTP.res


build : $(TargetFile)
	copy ..\tradeapidll\thostmduserapi.dll ..\$(Configuration)\thostmduserapi.dll
	copy ..\tradeapidll\thosttraderapi.dll ..\$(Configuration)\thosttraderapi.dll
	copy test.py ..\$(Configuration)\$(TargetName)_TEST.py

test : build
	chdir ..\$(Configuration)
	set PYTHONIOENCODING=utf-8
	$(DEBUGCMD) -B .\$(TargetName)_TEST.py

	
clean : 
	if exist $(Configuration) del /Q $(Configuration)\*.*
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\$(TargetFile)
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\$(TargetName).pdb
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\$(TargetName).lib
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\$(TargetName).exp
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\$(TargetName)_TEST.py
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\thostmduserapi.dll
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\thosttraderapi.dll
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\*TradingDay.con
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\*QueryRsp.con
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\*Public.con
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\*Private.con
	if exist ..\$(Configuration) del /Q ..\$(Configuration)\*DialogRsp.con
	
	
$(PCHNAME) $(Configuration)\stdafx.obj : $(PCHHEADER) stdafx.cpp
	$(CPP) $(CPPFLAGS) $(PCHFLAGS:Yu=Yc) stdafx.cpp
	
	
{.\}.cpp{$(Configuration)\}.obj::
	$(CPP) $(CPPFLAGS) $(PCHFLAGS) $<
	

{.\}.rc{$(Configuration)\}.res:
	$(RC) $(RFLAGS) /fo"$(Configuration)\$(<B).res" $<
	
	
$(TargetFile) : $(Configuration) $(PCHNAME) $(OBJS)
	$(LINK) $(LFLAGS) $(OBJS)
	
	
$(Configuration) : 
	if not exist $(Configuration) md $(Configuration)
	if not exist ..\$(Configuration) md ..\$(Configuration)
