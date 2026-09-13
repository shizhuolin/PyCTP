
#include "PyCThostFtdcNotifyFutureSignInField.h"

///期商签到通知

static int PyCThostFtdcNotifyFutureSignInFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg", "PinKey", "MacKey", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcNotifyFutureSignInField_TradeCode = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcNotifyFutureSignInField_BankID = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcNotifyFutureSignInField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcNotifyFutureSignInField_BrokerID = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcNotifyFutureSignInField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcNotifyFutureSignInField_TradeDate = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcNotifyFutureSignInField_TradeTime = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcNotifyFutureSignInField_BankSerial = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcNotifyFutureSignInField_TradingDay = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcNotifyFutureSignInField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcNotifyFutureSignInField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcNotifyFutureSignInField_SessionID = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcNotifyFutureSignInField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcNotifyFutureSignInField_UserID = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_UserID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcNotifyFutureSignInField_Digest = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_Digest_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcNotifyFutureSignInField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_CurrencyID_length = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcNotifyFutureSignInField_DeviceID = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_DeviceID_length = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcNotifyFutureSignInField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_BrokerIDByBank_length = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcNotifyFutureSignInField_OperNo = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcNotifyFutureSignInField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcNotifyFutureSignInField_TID = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcNotifyFutureSignInField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcNotifyFutureSignInField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_ErrorMsg_length = 0;

    /// PIN密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    char *CThostFtdcNotifyFutureSignInField_PinKey = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_PinKey_length = 0;

    /// MAC密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    char *CThostFtdcNotifyFutureSignInField_MacKey = NULL;
    Py_ssize_t CThostFtdcNotifyFutureSignInField_MacKey_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#iiiy#y#y#", (char **)kwlist
        , &CThostFtdcNotifyFutureSignInField_TradeCode, &CThostFtdcNotifyFutureSignInField_TradeCode_length
        , &CThostFtdcNotifyFutureSignInField_BankID, &CThostFtdcNotifyFutureSignInField_BankID_length
        , &CThostFtdcNotifyFutureSignInField_BankBranchID, &CThostFtdcNotifyFutureSignInField_BankBranchID_length
        , &CThostFtdcNotifyFutureSignInField_BrokerID, &CThostFtdcNotifyFutureSignInField_BrokerID_length
        , &CThostFtdcNotifyFutureSignInField_BrokerBranchID, &CThostFtdcNotifyFutureSignInField_BrokerBranchID_length
        , &CThostFtdcNotifyFutureSignInField_TradeDate, &CThostFtdcNotifyFutureSignInField_TradeDate_length
        , &CThostFtdcNotifyFutureSignInField_TradeTime, &CThostFtdcNotifyFutureSignInField_TradeTime_length
        , &CThostFtdcNotifyFutureSignInField_BankSerial, &CThostFtdcNotifyFutureSignInField_BankSerial_length
        , &CThostFtdcNotifyFutureSignInField_TradingDay, &CThostFtdcNotifyFutureSignInField_TradingDay_length
        , &CThostFtdcNotifyFutureSignInField_PlateSerial
        , &CThostFtdcNotifyFutureSignInField_LastFragment
        , &CThostFtdcNotifyFutureSignInField_SessionID
        , &CThostFtdcNotifyFutureSignInField_InstallID
        , &CThostFtdcNotifyFutureSignInField_UserID, &CThostFtdcNotifyFutureSignInField_UserID_length
        , &CThostFtdcNotifyFutureSignInField_Digest, &CThostFtdcNotifyFutureSignInField_Digest_length
        , &CThostFtdcNotifyFutureSignInField_CurrencyID, &CThostFtdcNotifyFutureSignInField_CurrencyID_length
        , &CThostFtdcNotifyFutureSignInField_DeviceID, &CThostFtdcNotifyFutureSignInField_DeviceID_length
        , &CThostFtdcNotifyFutureSignInField_BrokerIDByBank, &CThostFtdcNotifyFutureSignInField_BrokerIDByBank_length
        , &CThostFtdcNotifyFutureSignInField_OperNo, &CThostFtdcNotifyFutureSignInField_OperNo_length
        , &CThostFtdcNotifyFutureSignInField_RequestID
        , &CThostFtdcNotifyFutureSignInField_TID
        , &CThostFtdcNotifyFutureSignInField_ErrorID
        , &CThostFtdcNotifyFutureSignInField_ErrorMsg, &CThostFtdcNotifyFutureSignInField_ErrorMsg_length
        , &CThostFtdcNotifyFutureSignInField_PinKey, &CThostFtdcNotifyFutureSignInField_PinKey_length
        , &CThostFtdcNotifyFutureSignInField_MacKey, &CThostFtdcNotifyFutureSignInField_MacKey_length
    )) {
        return -1;
    }

    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcNotifyFutureSignInField_TradeCode != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcNotifyFutureSignInField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcNotifyFutureSignInField_TradeCode, CThostFtdcNotifyFutureSignInField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcNotifyFutureSignInField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcNotifyFutureSignInField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcNotifyFutureSignInField_BankID != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcNotifyFutureSignInField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcNotifyFutureSignInField_BankID, CThostFtdcNotifyFutureSignInField_BankID_length);
        strncpy(data->BankID, CThostFtdcNotifyFutureSignInField_BankID, sizeof(data->BankID));
        CThostFtdcNotifyFutureSignInField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcNotifyFutureSignInField_BankBranchID != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcNotifyFutureSignInField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcNotifyFutureSignInField_BankBranchID, CThostFtdcNotifyFutureSignInField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcNotifyFutureSignInField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcNotifyFutureSignInField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcNotifyFutureSignInField_BrokerID != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcNotifyFutureSignInField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcNotifyFutureSignInField_BrokerID, CThostFtdcNotifyFutureSignInField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcNotifyFutureSignInField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcNotifyFutureSignInField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcNotifyFutureSignInField_BrokerBranchID != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcNotifyFutureSignInField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcNotifyFutureSignInField_BrokerBranchID, CThostFtdcNotifyFutureSignInField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcNotifyFutureSignInField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcNotifyFutureSignInField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcNotifyFutureSignInField_TradeDate != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcNotifyFutureSignInField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcNotifyFutureSignInField_TradeDate, CThostFtdcNotifyFutureSignInField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcNotifyFutureSignInField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcNotifyFutureSignInField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcNotifyFutureSignInField_TradeTime != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcNotifyFutureSignInField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcNotifyFutureSignInField_TradeTime, CThostFtdcNotifyFutureSignInField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcNotifyFutureSignInField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcNotifyFutureSignInField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcNotifyFutureSignInField_BankSerial != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcNotifyFutureSignInField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcNotifyFutureSignInField_BankSerial, CThostFtdcNotifyFutureSignInField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcNotifyFutureSignInField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcNotifyFutureSignInField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcNotifyFutureSignInField_TradingDay != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcNotifyFutureSignInField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcNotifyFutureSignInField_TradingDay, CThostFtdcNotifyFutureSignInField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcNotifyFutureSignInField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcNotifyFutureSignInField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcNotifyFutureSignInField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcNotifyFutureSignInField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcNotifyFutureSignInField_SessionID;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcNotifyFutureSignInField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcNotifyFutureSignInField_UserID != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcNotifyFutureSignInField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcNotifyFutureSignInField_UserID, CThostFtdcNotifyFutureSignInField_UserID_length);
        strncpy(data->UserID, CThostFtdcNotifyFutureSignInField_UserID, sizeof(data->UserID));
        CThostFtdcNotifyFutureSignInField_UserID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcNotifyFutureSignInField_Digest != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcNotifyFutureSignInField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcNotifyFutureSignInField_Digest, CThostFtdcNotifyFutureSignInField_Digest_length);
        strncpy(data->Digest, CThostFtdcNotifyFutureSignInField_Digest, sizeof(data->Digest));
        CThostFtdcNotifyFutureSignInField_Digest = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcNotifyFutureSignInField_CurrencyID != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcNotifyFutureSignInField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcNotifyFutureSignInField_CurrencyID, CThostFtdcNotifyFutureSignInField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcNotifyFutureSignInField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcNotifyFutureSignInField_CurrencyID = NULL;
    }

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcNotifyFutureSignInField_DeviceID != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcNotifyFutureSignInField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcNotifyFutureSignInField_DeviceID, CThostFtdcNotifyFutureSignInField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcNotifyFutureSignInField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcNotifyFutureSignInField_DeviceID = NULL;
    }

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcNotifyFutureSignInField_BrokerIDByBank != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcNotifyFutureSignInField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcNotifyFutureSignInField_BrokerIDByBank, CThostFtdcNotifyFutureSignInField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcNotifyFutureSignInField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcNotifyFutureSignInField_BrokerIDByBank = NULL;
    }

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcNotifyFutureSignInField_OperNo != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcNotifyFutureSignInField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcNotifyFutureSignInField_OperNo, CThostFtdcNotifyFutureSignInField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcNotifyFutureSignInField_OperNo, sizeof(data->OperNo));
        CThostFtdcNotifyFutureSignInField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcNotifyFutureSignInField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcNotifyFutureSignInField_TID;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcNotifyFutureSignInField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcNotifyFutureSignInField_ErrorMsg != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcNotifyFutureSignInField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcNotifyFutureSignInField_ErrorMsg, CThostFtdcNotifyFutureSignInField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcNotifyFutureSignInField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcNotifyFutureSignInField_ErrorMsg = NULL;
    }

    /// PIN密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    if( CThostFtdcNotifyFutureSignInField_PinKey != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_PinKey_length >= (Py_ssize_t)sizeof(data->PinKey)) {
            PyErr_Format(PyExc_ValueError, "PinKey too long: length=%zd (max allowed is 128)", CThostFtdcNotifyFutureSignInField_PinKey_length);
            return -1;
        }
        // memset(data->PinKey, 0, sizeof(data->PinKey));
        // memcpy(data->PinKey, CThostFtdcNotifyFutureSignInField_PinKey, CThostFtdcNotifyFutureSignInField_PinKey_length);
        strncpy(data->PinKey, CThostFtdcNotifyFutureSignInField_PinKey, sizeof(data->PinKey));
        CThostFtdcNotifyFutureSignInField_PinKey = NULL;
    }

    /// MAC密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    if( CThostFtdcNotifyFutureSignInField_MacKey != NULL ) {
        if(CThostFtdcNotifyFutureSignInField_MacKey_length >= (Py_ssize_t)sizeof(data->MacKey)) {
            PyErr_Format(PyExc_ValueError, "MacKey too long: length=%zd (max allowed is 128)", CThostFtdcNotifyFutureSignInField_MacKey_length);
            return -1;
        }
        // memset(data->MacKey, 0, sizeof(data->MacKey));
        // memcpy(data->MacKey, CThostFtdcNotifyFutureSignInField_MacKey, CThostFtdcNotifyFutureSignInField_MacKey_length);
        strncpy(data->MacKey, CThostFtdcNotifyFutureSignInField_MacKey, sizeof(data->MacKey));
        CThostFtdcNotifyFutureSignInField_MacKey = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_repr(PyObject *self) {

    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyFutureSignInField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyFutureSignInField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// PIN密钥
/// typedef char TThostFtdcPasswordKeyType[129]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_PinKey(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->PinKey, (Py_ssize_t)sizeof(data->PinKey));
    return PyBytes_FromString(data->PinKey);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_PinKey(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PinKey Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::PinKey)) {
        PyErr_SetString(PyExc_ValueError, "PinKey must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->PinKey, 0, sizeof(data->PinKey));
    // memcpy(data->PinKey, buf, len);
    strncpy(data->PinKey, buf, sizeof(data->PinKey));
    extra = NULL;
    data = NULL;
    return 0;
}

/// MAC密钥
/// typedef char TThostFtdcPasswordKeyType[129]
static PyObject *PyCThostFtdcNotifyFutureSignInFieldType_get_MacKey(PyObject *self, void *closure) {
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacKey, (Py_ssize_t)sizeof(data->MacKey));
    return PyBytes_FromString(data->MacKey);
}

static int PyCThostFtdcNotifyFutureSignInFieldType_set_MacKey(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacKey Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyFutureSignInField::MacKey)) {
        PyErr_SetString(PyExc_ValueError, "MacKey must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyFutureSignInFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyFutureSignInFieldData>(self);
    CThostFtdcNotifyFutureSignInField *data = &(extra->data);
    // memset(data->MacKey, 0, sizeof(data->MacKey));
    // memcpy(data->MacKey, buf, len);
    strncpy(data->MacKey, buf, sizeof(data->MacKey));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcNotifyFutureSignInFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcNotifyFutureSignInFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcNotifyFutureSignInFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcNotifyFutureSignInFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcNotifyFutureSignInFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcNotifyFutureSignInFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcNotifyFutureSignInFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcNotifyFutureSignInFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_TradeCode,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_BankID,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_BankBranchID,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_BrokerID,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_TradeDate,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_TradeTime,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_BankSerial,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_TradingDay,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_LastFragment,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_UserID,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_Digest,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_CurrencyID,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_DeviceID,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_OperNo,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_ErrorMsg,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// PIN密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    {
    .name = "PinKey",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_PinKey,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_PinKey,
    .doc = PyDoc_STR("PIN密钥"),
    },
    /// MAC密钥
    /// typedef char TThostFtdcPasswordKeyType[129]
    {
    .name = "MacKey",
    .get = PyCThostFtdcNotifyFutureSignInFieldType_get_MacKey,
    .set = PyCThostFtdcNotifyFutureSignInFieldType_set_MacKey,
    .doc = PyDoc_STR("MAC密钥"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcNotifyFutureSignInFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcNotifyFutureSignInField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期商签到通知")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcNotifyFutureSignInFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcNotifyFutureSignInFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcNotifyFutureSignInFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcNotifyFutureSignInFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcNotifyFutureSignInFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcNotifyFutureSignInFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期商签到通知")},
    {Py_tp_members, PyCThostFtdcNotifyFutureSignInFieldType_members},
    {Py_tp_getset, PyCThostFtdcNotifyFutureSignInFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcNotifyFutureSignInFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcNotifyFutureSignInFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcNotifyFutureSignInFieldType_spec = {
    .name = "PyCTP.CThostFtdcNotifyFutureSignInField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcNotifyFutureSignInFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcNotifyFutureSignInFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcNotifyFutureSignInFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcNotifyFutureSignInFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcNotifyFutureSignInFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcNotifyFutureSignInFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcNotifyFutureSignInFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcNotifyFutureSignInFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcNotifyFutureSignInField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifyFutureSignInField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}