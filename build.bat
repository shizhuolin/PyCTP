@echo off
setlocal enabledelayedexpansion

set ctp_cpp_se=.\ctp\v6.7.13_20260225_trader
set ctp_cpp_sm=.\ctp\v6.7.13_20260225_traderSM

set clientdatacollectdll_prod=.\ctp\v6.7.13_20260408_clientdatacollectdll
set clientdatacollectdll_eval=.\ctp\v6.7.13_CP_20260408_clientdatacollectdll

set use_sm=false
set use_cp=false
set use_gen=false
set ctp_cpp_path=
set clientdatacollectdll=

:parse_args
if "%~1"=="" goto :args_done
if /i "%~1"=="sm" (
    set use_sm=true
    shift
    goto :parse_args
)
if /i "%~1"=="cp" (
    set use_cp=true
    shift
    goto :parse_args
)
if /i "%~1"=="gen" (
    set use_gen=true
    shift
    goto :parse_args
)
echo Unknown argument: %~1
echo Usage: %~nx0 [sm] [cp] [gen]
exit /b 1

:args_done

echo Debug use_sm = %use_sm%
echo Debug use_sm = %use_cp%
echo Debug use_sm = %use_gen%

if %use_sm%==true (
    set ctp_cpp_path=%ctp_cpp_sm%
    echo CTP Crypto Mode: SM !ctp_cpp_path!
) else (
    set ctp_cpp_path=%ctp_cpp_se%
    echo CTP Crypto Mode: SE !ctp_cpp_path!
)

if %use_cp%==true (
    set clientdatacollectdll=%clientdatacollectdll_eval%
    echo Collection Mode: CP !clientdatacollectdll!
) else (
    set clientdatacollectdll=%clientdatacollectdll_prod%
    echo Collection Mode: Production !clientdatacollectdll!
)

if %use_gen%==true (
    echo "Generating Python extension code from CTP C/C++ headers (ctpgenbyast.py)"
    if exist .\src\UserApiStruct rmdir /s /q .\src\UserApiStruct
    mkdir .\src\UserApiStruct
    python ctpgenbyast.py
)

echo Build Python extension
if exist .\build rmdir /s /q .\build
python setup.py build
echo Build Complete!

endlocal
