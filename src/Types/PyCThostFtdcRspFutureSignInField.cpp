
#include "PyCThostFtdcRspFutureSignInField.h"

///期商签到响应

static int PyCThostFtdcRspFutureSignInFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg", "PinKey", "MacKey", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcRspFutureSignInField_TradeCode = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcRspFutureSignInField_BankID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcRspFutureSignInField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspFutureSignInField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcRspFutureSignInField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspFutureSignInField_TradeDate = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcRspFutureSignInField_TradeTime = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcRspFutureSignInField_BankSerial = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspFutureSignInField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcRspFutureSignInField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcRspFutureSignInField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcRspFutureSignInField_SessionID = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcRspFutureSignInField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspFutureSignInField_UserID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_UserID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcRspFutureSignInField_Digest = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_Digest_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcRspFutureSignInField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_CurrencyID_length = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcRspFutureSignInField_DeviceID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_DeviceID_length = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcRspFutureSignInField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_BrokerIDByBank_length = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcRspFutureSignInField_OperNo = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcRspFutureSignInField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcRspFutureSignInField_TID = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcRspFutureSignInField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcRspFutureSignInField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_ErrorMsg_length = 0;

    /// PIN密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    char *CThostFtdcRspFutureSignInField_PinKey = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_PinKey_length = 0;

    /// MAC密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    char *CThostFtdcRspFutureSignInField_MacKey = NULL;
    Py_ssize_t CThostFtdcRspFutureSignInField_MacKey_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#iiiy#y#y#", (char **)kwlist
        , &CThostFtdcRspFutureSignInField_TradeCode, &CThostFtdcRspFutureSignInField_TradeCode_length
        , &CThostFtdcRspFutureSignInField_BankID, &CThostFtdcRspFutureSignInField_BankID_length
        , &CThostFtdcRspFutureSignInField_BankBranchID, &CThostFtdcRspFutureSignInField_BankBranchID_length
        , &CThostFtdcRspFutureSignInField_BrokerID, &CThostFtdcRspFutureSignInField_BrokerID_length
        , &CThostFtdcRspFutureSignInField_BrokerBranchID, &CThostFtdcRspFutureSignInField_BrokerBranchID_length
        , &CThostFtdcRspFutureSignInField_TradeDate, &CThostFtdcRspFutureSignInField_TradeDate_length
        , &CThostFtdcRspFutureSignInField_TradeTime, &CThostFtdcRspFutureSignInField_TradeTime_length
        , &CThostFtdcRspFutureSignInField_BankSerial, &CThostFtdcRspFutureSignInField_BankSerial_length
        , &CThostFtdcRspFutureSignInField_TradingDay, &CThostFtdcRspFutureSignInField_TradingDay_length
        , &CThostFtdcRspFutureSignInField_PlateSerial
        , &CThostFtdcRspFutureSignInField_LastFragment
        , &CThostFtdcRspFutureSignInField_SessionID
        , &CThostFtdcRspFutureSignInField_InstallID
        , &CThostFtdcRspFutureSignInField_UserID, &CThostFtdcRspFutureSignInField_UserID_length
        , &CThostFtdcRspFutureSignInField_Digest, &CThostFtdcRspFutureSignInField_Digest_length
        , &CThostFtdcRspFutureSignInField_CurrencyID, &CThostFtdcRspFutureSignInField_CurrencyID_length
        , &CThostFtdcRspFutureSignInField_DeviceID, &CThostFtdcRspFutureSignInField_DeviceID_length
        , &CThostFtdcRspFutureSignInField_BrokerIDByBank, &CThostFtdcRspFutureSignInField_BrokerIDByBank_length
        , &CThostFtdcRspFutureSignInField_OperNo, &CThostFtdcRspFutureSignInField_OperNo_length
        , &CThostFtdcRspFutureSignInField_RequestID
        , &CThostFtdcRspFutureSignInField_TID
        , &CThostFtdcRspFutureSignInField_ErrorID
        , &CThostFtdcRspFutureSignInField_ErrorMsg, &CThostFtdcRspFutureSignInField_ErrorMsg_length
        , &CThostFtdcRspFutureSignInField_PinKey, &CThostFtdcRspFutureSignInField_PinKey_length
        , &CThostFtdcRspFutureSignInField_MacKey, &CThostFtdcRspFutureSignInField_MacKey_length
    )) {
        return -1;
    }

    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcRspFutureSignInField_TradeCode != NULL ) {
        if(CThostFtdcRspFutureSignInField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcRspFutureSignInField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcRspFutureSignInField_TradeCode, CThostFtdcRspFutureSignInField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcRspFutureSignInField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcRspFutureSignInField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcRspFutureSignInField_BankID != NULL ) {
        if(CThostFtdcRspFutureSignInField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcRspFutureSignInField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcRspFutureSignInField_BankID, CThostFtdcRspFutureSignInField_BankID_length);
        strncpy(data->BankID, CThostFtdcRspFutureSignInField_BankID, sizeof(data->BankID));
        CThostFtdcRspFutureSignInField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcRspFutureSignInField_BankBranchID != NULL ) {
        if(CThostFtdcRspFutureSignInField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcRspFutureSignInField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcRspFutureSignInField_BankBranchID, CThostFtdcRspFutureSignInField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcRspFutureSignInField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcRspFutureSignInField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspFutureSignInField_BrokerID != NULL ) {
        if(CThostFtdcRspFutureSignInField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspFutureSignInField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspFutureSignInField_BrokerID, CThostFtdcRspFutureSignInField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspFutureSignInField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspFutureSignInField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcRspFutureSignInField_BrokerBranchID != NULL ) {
        if(CThostFtdcRspFutureSignInField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcRspFutureSignInField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcRspFutureSignInField_BrokerBranchID, CThostFtdcRspFutureSignInField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcRspFutureSignInField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcRspFutureSignInField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspFutureSignInField_TradeDate != NULL ) {
        if(CThostFtdcRspFutureSignInField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcRspFutureSignInField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcRspFutureSignInField_TradeDate, CThostFtdcRspFutureSignInField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcRspFutureSignInField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcRspFutureSignInField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcRspFutureSignInField_TradeTime != NULL ) {
        if(CThostFtdcRspFutureSignInField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcRspFutureSignInField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcRspFutureSignInField_TradeTime, CThostFtdcRspFutureSignInField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcRspFutureSignInField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcRspFutureSignInField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcRspFutureSignInField_BankSerial != NULL ) {
        if(CThostFtdcRspFutureSignInField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcRspFutureSignInField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcRspFutureSignInField_BankSerial, CThostFtdcRspFutureSignInField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcRspFutureSignInField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcRspFutureSignInField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspFutureSignInField_TradingDay != NULL ) {
        if(CThostFtdcRspFutureSignInField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRspFutureSignInField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRspFutureSignInField_TradingDay, CThostFtdcRspFutureSignInField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRspFutureSignInField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRspFutureSignInField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcRspFutureSignInField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcRspFutureSignInField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcRspFutureSignInField_SessionID;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcRspFutureSignInField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspFutureSignInField_UserID != NULL ) {
        if(CThostFtdcRspFutureSignInField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspFutureSignInField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspFutureSignInField_UserID, CThostFtdcRspFutureSignInField_UserID_length);
        strncpy(data->UserID, CThostFtdcRspFutureSignInField_UserID, sizeof(data->UserID));
        CThostFtdcRspFutureSignInField_UserID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcRspFutureSignInField_Digest != NULL ) {
        if(CThostFtdcRspFutureSignInField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcRspFutureSignInField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcRspFutureSignInField_Digest, CThostFtdcRspFutureSignInField_Digest_length);
        strncpy(data->Digest, CThostFtdcRspFutureSignInField_Digest, sizeof(data->Digest));
        CThostFtdcRspFutureSignInField_Digest = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcRspFutureSignInField_CurrencyID != NULL ) {
        if(CThostFtdcRspFutureSignInField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcRspFutureSignInField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcRspFutureSignInField_CurrencyID, CThostFtdcRspFutureSignInField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcRspFutureSignInField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcRspFutureSignInField_CurrencyID = NULL;
    }

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcRspFutureSignInField_DeviceID != NULL ) {
        if(CThostFtdcRspFutureSignInField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcRspFutureSignInField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcRspFutureSignInField_DeviceID, CThostFtdcRspFutureSignInField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcRspFutureSignInField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcRspFutureSignInField_DeviceID = NULL;
    }

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcRspFutureSignInField_BrokerIDByBank != NULL ) {
        if(CThostFtdcRspFutureSignInField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcRspFutureSignInField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcRspFutureSignInField_BrokerIDByBank, CThostFtdcRspFutureSignInField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcRspFutureSignInField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcRspFutureSignInField_BrokerIDByBank = NULL;
    }

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcRspFutureSignInField_OperNo != NULL ) {
        if(CThostFtdcRspFutureSignInField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcRspFutureSignInField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcRspFutureSignInField_OperNo, CThostFtdcRspFutureSignInField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcRspFutureSignInField_OperNo, sizeof(data->OperNo));
        CThostFtdcRspFutureSignInField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcRspFutureSignInField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcRspFutureSignInField_TID;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcRspFutureSignInField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcRspFutureSignInField_ErrorMsg != NULL ) {
        if(CThostFtdcRspFutureSignInField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcRspFutureSignInField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcRspFutureSignInField_ErrorMsg, CThostFtdcRspFutureSignInField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcRspFutureSignInField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcRspFutureSignInField_ErrorMsg = NULL;
    }

    /// PIN密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    if( CThostFtdcRspFutureSignInField_PinKey != NULL ) {
        if(CThostFtdcRspFutureSignInField_PinKey_length >= (Py_ssize_t)sizeof(data->PinKey)) {
            PyErr_Format(PyExc_ValueError, "PinKey too long: length=%zd (max allowed is 128)", CThostFtdcRspFutureSignInField_PinKey_length);
            return -1;
        }
        // memset(data->PinKey, 0, sizeof(data->PinKey));
        // memcpy(data->PinKey, CThostFtdcRspFutureSignInField_PinKey, CThostFtdcRspFutureSignInField_PinKey_length);
        strncpy(data->PinKey, CThostFtdcRspFutureSignInField_PinKey, sizeof(data->PinKey));
        CThostFtdcRspFutureSignInField_PinKey = NULL;
    }

    /// MAC密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    if( CThostFtdcRspFutureSignInField_MacKey != NULL ) {
        if(CThostFtdcRspFutureSignInField_MacKey_length >= (Py_ssize_t)sizeof(data->MacKey)) {
            PyErr_Format(PyExc_ValueError, "MacKey too long: length=%zd (max allowed is 128)", CThostFtdcRspFutureSignInField_MacKey_length);
            return -1;
        }
        // memset(data->MacKey, 0, sizeof(data->MacKey));
        // memcpy(data->MacKey, CThostFtdcRspFutureSignInField_MacKey, CThostFtdcRspFutureSignInField_MacKey_length);
        strncpy(data->MacKey, CThostFtdcRspFutureSignInField_MacKey, sizeof(data->MacKey));
        CThostFtdcRspFutureSignInField_MacKey = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspFutureSignInFieldType_repr(PyObject *self) {

    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y,s:y,s:y}"
        , "TradeCode", data->TradeCode//, (Py_ssize_t)sizeof(data->TradeCode)
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankBranchID", data->BankBranchID//, (Py_ssize_t)sizeof(data->BankBranchID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "BrokerBranchID", data->BrokerBranchID//, (Py_ssize_t)sizeof(data->BrokerBranchID)
        , "TradeDate", data->TradeDate//, (Py_ssize_t)sizeof(data->TradeDate)
        , "TradeTime", data->TradeTime//, (Py_ssize_t)sizeof(data->TradeTime)
        , "BankSerial", data->BankSerial//, (Py_ssize_t)sizeof(data->BankSerial)
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "PlateSerial", data->PlateSerial
        , "LastFragment", data->LastFragment
        , "SessionID", data->SessionID
        , "InstallID", data->InstallID
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Digest", data->Digest//, (Py_ssize_t)sizeof(data->Digest)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "DeviceID", data->DeviceID//, (Py_ssize_t)sizeof(data->DeviceID)
        , "BrokerIDByBank", data->BrokerIDByBank//, (Py_ssize_t)sizeof(data->BrokerIDByBank)
        , "OperNo", data->OperNo//, (Py_ssize_t)sizeof(data->OperNo)
        , "RequestID", data->RequestID
        , "TID", data->TID
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
        , "PinKey", data->PinKey//, (Py_ssize_t)sizeof(data->PinKey)
        , "MacKey", data->MacKey//, (Py_ssize_t)sizeof(data->MacKey)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspFutureSignInField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspFutureSignInField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// PIN密钥
/// typedef char TThostFtdcPasswordKeyType[129]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_PinKey(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->PinKey, (Py_ssize_t)sizeof(data->PinKey));
    return PyBytes_FromString(data->PinKey);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_PinKey(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PinKey Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::PinKey)) {
        PyErr_SetString(PyExc_ValueError, "PinKey must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->PinKey, 0, sizeof(data->PinKey));
    // memcpy(data->PinKey, buf, len);
    strncpy(data->PinKey, buf, sizeof(data->PinKey));
    extra = NULL;
    data = NULL;
    return 0;
}

/// MAC密钥
/// typedef char TThostFtdcPasswordKeyType[129]
static PyObject *PyCThostFtdcRspFutureSignInFieldType_get_MacKey(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacKey, (Py_ssize_t)sizeof(data->MacKey));
    return PyBytes_FromString(data->MacKey);
}

static int PyCThostFtdcRspFutureSignInFieldType_set_MacKey(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacKey Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignInField::MacKey)) {
        PyErr_SetString(PyExc_ValueError, "MacKey must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignInFieldData>(self);
    CThostFtdcRspFutureSignInField *data = &(extra->data);
    // memset(data->MacKey, 0, sizeof(data->MacKey));
    // memcpy(data->MacKey, buf, len);
    strncpy(data->MacKey, buf, sizeof(data->MacKey));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspFutureSignInFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspFutureSignInFieldData, data.PlateSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("银期平台消息流水号")
    },
    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    {
        .name = "SessionID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspFutureSignInFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话号")
    },
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspFutureSignInFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    {
        .name = "RequestID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspFutureSignInFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    /// 交易ID
    /// typedef int TThostFtdcTIDType
    {
        .name = "TID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspFutureSignInFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
    },
    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    {
        .name = "ErrorID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspFutureSignInFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspFutureSignInFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_TradeCode,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_BankID,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_BankBranchID,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_BrokerID,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_TradeDate,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_TradeTime,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_BankSerial,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_TradingDay,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_LastFragment,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_UserID,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_Digest,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_CurrencyID,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_DeviceID,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_OperNo,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_ErrorMsg,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// PIN密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    {
    .name = "PinKey",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_PinKey,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_PinKey,
    .doc = PyDoc_STR("PIN密钥"),
    },
    /// MAC密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    {
    .name = "MacKey",
    .get = PyCThostFtdcRspFutureSignInFieldType_get_MacKey,
    .set = PyCThostFtdcRspFutureSignInFieldType_set_MacKey,
    .doc = PyDoc_STR("MAC密钥"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspFutureSignInFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspFutureSignInField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期商签到响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspFutureSignInFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspFutureSignInFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspFutureSignInFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspFutureSignInFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspFutureSignInFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspFutureSignInFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期商签到响应")},
    {Py_tp_members, PyCThostFtdcRspFutureSignInFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspFutureSignInFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspFutureSignInFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspFutureSignInFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspFutureSignInFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspFutureSignInField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspFutureSignInFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspFutureSignInFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspFutureSignInFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspFutureSignInFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspFutureSignInFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspFutureSignInFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspFutureSignInFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspFutureSignInFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspFutureSignInField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspFutureSignInField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}