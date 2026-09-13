
#include "PyCThostFtdcReqFutureSignOutField.h"

///期商签退请求

static int PyCThostFtdcReqFutureSignOutFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReqFutureSignOutField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReqFutureSignOutField_BankID = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReqFutureSignOutField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqFutureSignOutField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReqFutureSignOutField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqFutureSignOutField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReqFutureSignOutField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReqFutureSignOutField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqFutureSignOutField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReqFutureSignOutField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReqFutureSignOutField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReqFutureSignOutField_SessionID = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcReqFutureSignOutField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqFutureSignOutField_UserID = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_UserID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcReqFutureSignOutField_Digest = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_Digest_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcReqFutureSignOutField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_CurrencyID_length = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcReqFutureSignOutField_DeviceID = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_DeviceID_length = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcReqFutureSignOutField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_BrokerIDByBank_length = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcReqFutureSignOutField_OperNo = NULL;
    Py_ssize_t CThostFtdcReqFutureSignOutField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcReqFutureSignOutField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcReqFutureSignOutField_TID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#ii", (char **)kwlist
        , &CThostFtdcReqFutureSignOutField_TradeCode, &CThostFtdcReqFutureSignOutField_TradeCode_length
        , &CThostFtdcReqFutureSignOutField_BankID, &CThostFtdcReqFutureSignOutField_BankID_length
        , &CThostFtdcReqFutureSignOutField_BankBranchID, &CThostFtdcReqFutureSignOutField_BankBranchID_length
        , &CThostFtdcReqFutureSignOutField_BrokerID, &CThostFtdcReqFutureSignOutField_BrokerID_length
        , &CThostFtdcReqFutureSignOutField_BrokerBranchID, &CThostFtdcReqFutureSignOutField_BrokerBranchID_length
        , &CThostFtdcReqFutureSignOutField_TradeDate, &CThostFtdcReqFutureSignOutField_TradeDate_length
        , &CThostFtdcReqFutureSignOutField_TradeTime, &CThostFtdcReqFutureSignOutField_TradeTime_length
        , &CThostFtdcReqFutureSignOutField_BankSerial, &CThostFtdcReqFutureSignOutField_BankSerial_length
        , &CThostFtdcReqFutureSignOutField_TradingDay, &CThostFtdcReqFutureSignOutField_TradingDay_length
        , &CThostFtdcReqFutureSignOutField_PlateSerial
        , &CThostFtdcReqFutureSignOutField_LastFragment
        , &CThostFtdcReqFutureSignOutField_SessionID
        , &CThostFtdcReqFutureSignOutField_InstallID
        , &CThostFtdcReqFutureSignOutField_UserID, &CThostFtdcReqFutureSignOutField_UserID_length
        , &CThostFtdcReqFutureSignOutField_Digest, &CThostFtdcReqFutureSignOutField_Digest_length
        , &CThostFtdcReqFutureSignOutField_CurrencyID, &CThostFtdcReqFutureSignOutField_CurrencyID_length
        , &CThostFtdcReqFutureSignOutField_DeviceID, &CThostFtdcReqFutureSignOutField_DeviceID_length
        , &CThostFtdcReqFutureSignOutField_BrokerIDByBank, &CThostFtdcReqFutureSignOutField_BrokerIDByBank_length
        , &CThostFtdcReqFutureSignOutField_OperNo, &CThostFtdcReqFutureSignOutField_OperNo_length
        , &CThostFtdcReqFutureSignOutField_RequestID
        , &CThostFtdcReqFutureSignOutField_TID
    )) {
        return -1;
    }

    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReqFutureSignOutField_TradeCode != NULL ) {
        if(CThostFtdcReqFutureSignOutField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReqFutureSignOutField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReqFutureSignOutField_TradeCode, CThostFtdcReqFutureSignOutField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReqFutureSignOutField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReqFutureSignOutField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReqFutureSignOutField_BankID != NULL ) {
        if(CThostFtdcReqFutureSignOutField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReqFutureSignOutField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReqFutureSignOutField_BankID, CThostFtdcReqFutureSignOutField_BankID_length);
        strncpy(data->BankID, CThostFtdcReqFutureSignOutField_BankID, sizeof(data->BankID));
        CThostFtdcReqFutureSignOutField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReqFutureSignOutField_BankBranchID != NULL ) {
        if(CThostFtdcReqFutureSignOutField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReqFutureSignOutField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReqFutureSignOutField_BankBranchID, CThostFtdcReqFutureSignOutField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReqFutureSignOutField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReqFutureSignOutField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqFutureSignOutField_BrokerID != NULL ) {
        if(CThostFtdcReqFutureSignOutField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqFutureSignOutField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqFutureSignOutField_BrokerID, CThostFtdcReqFutureSignOutField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqFutureSignOutField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqFutureSignOutField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReqFutureSignOutField_BrokerBranchID != NULL ) {
        if(CThostFtdcReqFutureSignOutField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReqFutureSignOutField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReqFutureSignOutField_BrokerBranchID, CThostFtdcReqFutureSignOutField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReqFutureSignOutField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReqFutureSignOutField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqFutureSignOutField_TradeDate != NULL ) {
        if(CThostFtdcReqFutureSignOutField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReqFutureSignOutField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReqFutureSignOutField_TradeDate, CThostFtdcReqFutureSignOutField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReqFutureSignOutField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReqFutureSignOutField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReqFutureSignOutField_TradeTime != NULL ) {
        if(CThostFtdcReqFutureSignOutField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReqFutureSignOutField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReqFutureSignOutField_TradeTime, CThostFtdcReqFutureSignOutField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReqFutureSignOutField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReqFutureSignOutField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReqFutureSignOutField_BankSerial != NULL ) {
        if(CThostFtdcReqFutureSignOutField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReqFutureSignOutField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReqFutureSignOutField_BankSerial, CThostFtdcReqFutureSignOutField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReqFutureSignOutField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReqFutureSignOutField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqFutureSignOutField_TradingDay != NULL ) {
        if(CThostFtdcReqFutureSignOutField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqFutureSignOutField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqFutureSignOutField_TradingDay, CThostFtdcReqFutureSignOutField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqFutureSignOutField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqFutureSignOutField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReqFutureSignOutField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReqFutureSignOutField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReqFutureSignOutField_SessionID;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcReqFutureSignOutField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqFutureSignOutField_UserID != NULL ) {
        if(CThostFtdcReqFutureSignOutField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqFutureSignOutField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqFutureSignOutField_UserID, CThostFtdcReqFutureSignOutField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqFutureSignOutField_UserID, sizeof(data->UserID));
        CThostFtdcReqFutureSignOutField_UserID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcReqFutureSignOutField_Digest != NULL ) {
        if(CThostFtdcReqFutureSignOutField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcReqFutureSignOutField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcReqFutureSignOutField_Digest, CThostFtdcReqFutureSignOutField_Digest_length);
        strncpy(data->Digest, CThostFtdcReqFutureSignOutField_Digest, sizeof(data->Digest));
        CThostFtdcReqFutureSignOutField_Digest = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcReqFutureSignOutField_CurrencyID != NULL ) {
        if(CThostFtdcReqFutureSignOutField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcReqFutureSignOutField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcReqFutureSignOutField_CurrencyID, CThostFtdcReqFutureSignOutField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcReqFutureSignOutField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcReqFutureSignOutField_CurrencyID = NULL;
    }

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcReqFutureSignOutField_DeviceID != NULL ) {
        if(CThostFtdcReqFutureSignOutField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcReqFutureSignOutField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcReqFutureSignOutField_DeviceID, CThostFtdcReqFutureSignOutField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcReqFutureSignOutField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcReqFutureSignOutField_DeviceID = NULL;
    }

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcReqFutureSignOutField_BrokerIDByBank != NULL ) {
        if(CThostFtdcReqFutureSignOutField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcReqFutureSignOutField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcReqFutureSignOutField_BrokerIDByBank, CThostFtdcReqFutureSignOutField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcReqFutureSignOutField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcReqFutureSignOutField_BrokerIDByBank = NULL;
    }

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcReqFutureSignOutField_OperNo != NULL ) {
        if(CThostFtdcReqFutureSignOutField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcReqFutureSignOutField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcReqFutureSignOutField_OperNo, CThostFtdcReqFutureSignOutField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcReqFutureSignOutField_OperNo, sizeof(data->OperNo));
        CThostFtdcReqFutureSignOutField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcReqFutureSignOutField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcReqFutureSignOutField_TID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqFutureSignOutFieldType_repr(PyObject *self) {

    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
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
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqFutureSignOutField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqFutureSignOutField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcReqFutureSignOutFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcReqFutureSignOutFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqFutureSignOutField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqFutureSignOutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqFutureSignOutFieldData>(self);
    CThostFtdcReqFutureSignOutField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqFutureSignOutFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqFutureSignOutFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReqFutureSignOutFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcReqFutureSignOutFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcReqFutureSignOutFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcReqFutureSignOutFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqFutureSignOutFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_TradeCode,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_BankID,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_BankBranchID,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_BrokerID,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_TradeDate,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_TradeTime,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_BankSerial,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_TradingDay,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_LastFragment,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_UserID,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_Digest,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_CurrencyID,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_DeviceID,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcReqFutureSignOutFieldType_get_OperNo,
    .set = PyCThostFtdcReqFutureSignOutFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqFutureSignOutFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqFutureSignOutField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期商签退请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqFutureSignOutFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqFutureSignOutFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqFutureSignOutFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqFutureSignOutFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqFutureSignOutFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqFutureSignOutFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期商签退请求")},
    {Py_tp_members, PyCThostFtdcReqFutureSignOutFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqFutureSignOutFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqFutureSignOutFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqFutureSignOutFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqFutureSignOutFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqFutureSignOutField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqFutureSignOutFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqFutureSignOutFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqFutureSignOutFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqFutureSignOutFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqFutureSignOutFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqFutureSignOutFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqFutureSignOutFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqFutureSignOutFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqFutureSignOutField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqFutureSignOutField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}