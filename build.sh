#!/bin/bash

set -e

ctp_cpp_se="./ctp/v6.7.13_20260225_trader"
ctp_cpp_sm="./ctp/v6.7.13_20260225_traderSM"

clientdatacollectdll_prod=./ctp/v6.7.13_20260408_clientdatacollectdll
clientdatacollectdll_eval=./ctp/v6.7.13_CP_20260408_clientdatacollectdll

use_sm=false
use_cp=false
use_gen=false
ctp_cpp_path=""
clientdatacollectdll=""

for arg in "$@"; do
    case $arg in
        sm)
	    use_sm=true
	    ;;
	cp)
	    use_cp=true
	    ;;
	gen)
	    use_gen=true
	    ;;
	*)
            echo "Unknown argument: $arg"
	    echo "Usage: $0 [sm] [cp] [gen]"
	    exit 1
	    ;;
    esac
done

if [ "$use_sm" = true ]; then
    export ctp_cpp_path="$ctp_cpp_sm"
    echo "CTP Crypto Mode: SM $ctp_cpp_path"
else
    export ctp_cpp_path="$ctp_cpp_se"
    echo "CTP Crypto Mode: SE $ctp_cpp_path"
fi

if [ "$use_cp" = true ]; then
    export clientdatacollectdll="$clientdatacollectdll_eval"
    echo "Collection Mode: CP $clientdatacollectdll"
else
    export clientdatacollectdll="$clientdatacollectdll_prod"
    echo "Collection Mode: Production $clientdatacollectdll"
fi

if [ "$use_gen" = true ]; then
    echo "Generating Python extension code from CTP C/C++ headers (ctpgenbyast.py)"
    rm -rf ./src/UserApiStruct/
    mkdir ./src/UserApiStruct/
    python ctpgenbyast.py
fi

echo "Build Python extension"
rm -rf ./build
python setup.py build
echo "Build Complete!"
