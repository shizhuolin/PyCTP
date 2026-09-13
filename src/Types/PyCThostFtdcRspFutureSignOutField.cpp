
#include "PyCThostFtdcRspFutureSignOutField.h"

///期商签退响应

static int PyCThostFtdcRspFutureSignOutFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcRspFutureSignOutField_TradeCode = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcRspFutureSignOutField_BankID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcRspFutureSignOutField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspFutureSignOutField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcRspFutureSignOutField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspFutureSignOutField_TradeDate = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcRspFutureSignOutField_TradeTime = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcRspFutureSignOutField_BankSerial = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspFutureSignOutField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcRspFutureSignOutField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcRspFutureSignOutField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcRspFutureSignOutField_SessionID = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcRspFutureSignOutField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspFutureSignOutField_UserID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_UserID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcRspFutureSignOutField_Digest = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_Digest_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcRspFutureSignOutField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_CurrencyID_length = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcRspFutureSignOutField_DeviceID = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_DeviceID_length = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcRspFutureSignOutField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_BrokerIDByBank_length = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcRspFutureSignOutField_OperNo = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcRspFutureSignOutField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcRspFutureSignOutField_TID = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcRspFutureSignOutField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcRspFutureSignOutField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcRspFutureSignOutField_ErrorMsg_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#iiiy#", (char **)kwlist
        , &CThostFtdcRspFutureSignOutField_TradeCode, &CThostFtdcRspFutureSignOutField_TradeCode_length
        , &CThostFtdcRspFutureSignOutField_BankID, &CThostFtdcRspFutureSignOutField_BankID_length
        , &CThostFtdcRspFutureSignOutField_BankBranchID, &CThostFtdcRspFutureSignOutField_BankBranchID_length
        , &CThostFtdcRspFutureSignOutField_BrokerID, &CThostFtdcRspFutureSignOutField_BrokerID_length
        , &CThostFtdcRspFutureSignOutField_BrokerBranchID, &CThostFtdcRspFutureSignOutField_BrokerBranchID_length
        , &CThostFtdcRspFutureSignOutField_TradeDate, &CThostFtdcRspFutureSignOutField_TradeDate_length
        , &CThostFtdcRspFutureSignOutField_TradeTime, &CThostFtdcRspFutureSignOutField_TradeTime_length
        , &CThostFtdcRspFutureSignOutField_BankSerial, &CThostFtdcRspFutureSignOutField_BankSerial_length
        , &CThostFtdcRspFutureSignOutField_TradingDay, &CThostFtdcRspFutureSignOutField_TradingDay_length
        , &CThostFtdcRspFutureSignOutField_PlateSerial
        , &CThostFtdcRspFutureSignOutField_LastFragment
        , &CThostFtdcRspFutureSignOutField_SessionID
        , &CThostFtdcRspFutureSignOutField_InstallID
        , &CThostFtdcRspFutureSignOutField_UserID, &CThostFtdcRspFutureSignOutField_UserID_length
        , &CThostFtdcRspFutureSignOutField_Digest, &CThostFtdcRspFutureSignOutField_Digest_length
        , &CThostFtdcRspFutureSignOutField_CurrencyID, &CThostFtdcRspFutureSignOutField_CurrencyID_length
        , &CThostFtdcRspFutureSignOutField_DeviceID, &CThostFtdcRspFutureSignOutField_DeviceID_length
        , &CThostFtdcRspFutureSignOutField_BrokerIDByBank, &CThostFtdcRspFutureSignOutField_BrokerIDByBank_length
        , &CThostFtdcRspFutureSignOutField_OperNo, &CThostFtdcRspFutureSignOutField_OperNo_length
        , &CThostFtdcRspFutureSignOutField_RequestID
        , &CThostFtdcRspFutureSignOutField_TID
        , &CThostFtdcRspFutureSignOutField_ErrorID
        , &CThostFtdcRspFutureSignOutField_ErrorMsg, &CThostFtdcRspFutureSignOutField_ErrorMsg_length
    )) {
        return -1;
    }

    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcRspFutureSignOutField_TradeCode != NULL ) {
        if(CThostFtdcRspFutureSignOutField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcRspFutureSignOutField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcRspFutureSignOutField_TradeCode, CThostFtdcRspFutureSignOutField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcRspFutureSignOutField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcRspFutureSignOutField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcRspFutureSignOutField_BankID != NULL ) {
        if(CThostFtdcRspFutureSignOutField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcRspFutureSignOutField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcRspFutureSignOutField_BankID, CThostFtdcRspFutureSignOutField_BankID_length);
        strncpy(data->BankID, CThostFtdcRspFutureSignOutField_BankID, sizeof(data->BankID));
        CThostFtdcRspFutureSignOutField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcRspFutureSignOutField_BankBranchID != NULL ) {
        if(CThostFtdcRspFutureSignOutField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcRspFutureSignOutField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcRspFutureSignOutField_BankBranchID, CThostFtdcRspFutureSignOutField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcRspFutureSignOutField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcRspFutureSignOutField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspFutureSignOutField_BrokerID != NULL ) {
        if(CThostFtdcRspFutureSignOutField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspFutureSignOutField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspFutureSignOutField_BrokerID, CThostFtdcRspFutureSignOutField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspFutureSignOutField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspFutureSignOutField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcRspFutureSignOutField_BrokerBranchID != NULL ) {
        if(CThostFtdcRspFutureSignOutField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcRspFutureSignOutField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcRspFutureSignOutField_BrokerBranchID, CThostFtdcRspFutureSignOutField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcRspFutureSignOutField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcRspFutureSignOutField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspFutureSignOutField_TradeDate != NULL ) {
        if(CThostFtdcRspFutureSignOutField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcRspFutureSignOutField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcRspFutureSignOutField_TradeDate, CThostFtdcRspFutureSignOutField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcRspFutureSignOutField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcRspFutureSignOutField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcRspFutureSignOutField_TradeTime != NULL ) {
        if(CThostFtdcRspFutureSignOutField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcRspFutureSignOutField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcRspFutureSignOutField_TradeTime, CThostFtdcRspFutureSignOutField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcRspFutureSignOutField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcRspFutureSignOutField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcRspFutureSignOutField_BankSerial != NULL ) {
        if(CThostFtdcRspFutureSignOutField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcRspFutureSignOutField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcRspFutureSignOutField_BankSerial, CThostFtdcRspFutureSignOutField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcRspFutureSignOutField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcRspFutureSignOutField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspFutureSignOutField_TradingDay != NULL ) {
        if(CThostFtdcRspFutureSignOutField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRspFutureSignOutField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRspFutureSignOutField_TradingDay, CThostFtdcRspFutureSignOutField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRspFutureSignOutField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRspFutureSignOutField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcRspFutureSignOutField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcRspFutureSignOutField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcRspFutureSignOutField_SessionID;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcRspFutureSignOutField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspFutureSignOutField_UserID != NULL ) {
        if(CThostFtdcRspFutureSignOutField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspFutureSignOutField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspFutureSignOutField_UserID, CThostFtdcRspFutureSignOutField_UserID_length);
        strncpy(data->UserID, CThostFtdcRspFutureSignOutField_UserID, sizeof(data->UserID));
        CThostFtdcRspFutureSignOutField_UserID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcRspFutureSignOutField_Digest != NULL ) {
        if(CThostFtdcRspFutureSignOutField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcRspFutureSignOutField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcRspFutureSignOutField_Digest, CThostFtdcRspFutureSignOutField_Digest_length);
        strncpy(data->Digest, CThostFtdcRspFutureSignOutField_Digest, sizeof(data->Digest));
        CThostFtdcRspFutureSignOutField_Digest = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcRspFutureSignOutField_CurrencyID != NULL ) {
        if(CThostFtdcRspFutureSignOutField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcRspFutureSignOutField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcRspFutureSignOutField_CurrencyID, CThostFtdcRspFutureSignOutField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcRspFutureSignOutField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcRspFutureSignOutField_CurrencyID = NULL;
    }

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcRspFutureSignOutField_DeviceID != NULL ) {
        if(CThostFtdcRspFutureSignOutField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcRspFutureSignOutField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcRspFutureSignOutField_DeviceID, CThostFtdcRspFutureSignOutField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcRspFutureSignOutField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcRspFutureSignOutField_DeviceID = NULL;
    }

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcRspFutureSignOutField_BrokerIDByBank != NULL ) {
        if(CThostFtdcRspFutureSignOutField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcRspFutureSignOutField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcRspFutureSignOutField_BrokerIDByBank, CThostFtdcRspFutureSignOutField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcRspFutureSignOutField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcRspFutureSignOutField_BrokerIDByBank = NULL;
    }

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcRspFutureSignOutField_OperNo != NULL ) {
        if(CThostFtdcRspFutureSignOutField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcRspFutureSignOutField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcRspFutureSignOutField_OperNo, CThostFtdcRspFutureSignOutField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcRspFutureSignOutField_OperNo, sizeof(data->OperNo));
        CThostFtdcRspFutureSignOutField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcRspFutureSignOutField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcRspFutureSignOutField_TID;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcRspFutureSignOutField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcRspFutureSignOutField_ErrorMsg != NULL ) {
        if(CThostFtdcRspFutureSignOutField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcRspFutureSignOutField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcRspFutureSignOutField_ErrorMsg, CThostFtdcRspFutureSignOutField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcRspFutureSignOutField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcRspFutureSignOutField_ErrorMsg = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspFutureSignOutFieldType_repr(PyObject *self) {

    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y}"
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
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspFutureSignOutField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspFutureSignOutField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcRspFutureSignOutFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcRspFutureSignOutFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspFutureSignOutField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspFutureSignOutFieldData>(self);
    CThostFtdcRspFutureSignOutField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspFutureSignOutFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspFutureSignOutFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcRspFutureSignOutFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcRspFutureSignOutFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcRspFutureSignOutFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcRspFutureSignOutFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcRspFutureSignOutFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspFutureSignOutFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_TradeCode,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_BankID,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_BankBranchID,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_BrokerID,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_TradeDate,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_TradeTime,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_BankSerial,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_TradingDay,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_LastFragment,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_UserID,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_Digest,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_CurrencyID,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_DeviceID,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_OperNo,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcRspFutureSignOutFieldType_get_ErrorMsg,
    .set = PyCThostFtdcRspFutureSignOutFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspFutureSignOutFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspFutureSignOutField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期商签退响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspFutureSignOutFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspFutureSignOutFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspFutureSignOutFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspFutureSignOutFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspFutureSignOutFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspFutureSignOutFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期商签退响应")},
    {Py_tp_members, PyCThostFtdcRspFutureSignOutFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspFutureSignOutFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspFutureSignOutFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspFutureSignOutFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspFutureSignOutFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspFutureSignOutField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspFutureSignOutFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspFutureSignOutFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspFutureSignOutFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspFutureSignOutFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspFutureSignOutFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspFutureSignOutFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspFutureSignOutFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspFutureSignOutFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspFutureSignOutField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspFutureSignOutField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}