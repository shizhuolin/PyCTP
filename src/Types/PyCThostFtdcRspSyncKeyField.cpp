
#include "PyCThostFtdcRspSyncKeyField.h"

///交易核心向银期报盘发出密钥同步响应

static int PyCThostFtdcRspSyncKeyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Message", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcRspSyncKeyField_TradeCode = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcRspSyncKeyField_BankID = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcRspSyncKeyField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspSyncKeyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcRspSyncKeyField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspSyncKeyField_TradeDate = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcRspSyncKeyField_TradeTime = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcRspSyncKeyField_BankSerial = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspSyncKeyField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcRspSyncKeyField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcRspSyncKeyField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcRspSyncKeyField_SessionID = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcRspSyncKeyField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspSyncKeyField_UserID = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_UserID_length = 0;

    /// 交易核心给银期报盘的消息
    /// typedef char TThostFtdcAddInfoType[129]
    char *CThostFtdcRspSyncKeyField_Message = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_Message_length = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcRspSyncKeyField_DeviceID = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_DeviceID_length = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcRspSyncKeyField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_BrokerIDByBank_length = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcRspSyncKeyField_OperNo = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcRspSyncKeyField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcRspSyncKeyField_TID = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcRspSyncKeyField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcRspSyncKeyField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcRspSyncKeyField_ErrorMsg_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#iiiy#", (char **)kwlist
        , &CThostFtdcRspSyncKeyField_TradeCode, &CThostFtdcRspSyncKeyField_TradeCode_length
        , &CThostFtdcRspSyncKeyField_BankID, &CThostFtdcRspSyncKeyField_BankID_length
        , &CThostFtdcRspSyncKeyField_BankBranchID, &CThostFtdcRspSyncKeyField_BankBranchID_length
        , &CThostFtdcRspSyncKeyField_BrokerID, &CThostFtdcRspSyncKeyField_BrokerID_length
        , &CThostFtdcRspSyncKeyField_BrokerBranchID, &CThostFtdcRspSyncKeyField_BrokerBranchID_length
        , &CThostFtdcRspSyncKeyField_TradeDate, &CThostFtdcRspSyncKeyField_TradeDate_length
        , &CThostFtdcRspSyncKeyField_TradeTime, &CThostFtdcRspSyncKeyField_TradeTime_length
        , &CThostFtdcRspSyncKeyField_BankSerial, &CThostFtdcRspSyncKeyField_BankSerial_length
        , &CThostFtdcRspSyncKeyField_TradingDay, &CThostFtdcRspSyncKeyField_TradingDay_length
        , &CThostFtdcRspSyncKeyField_PlateSerial
        , &CThostFtdcRspSyncKeyField_LastFragment
        , &CThostFtdcRspSyncKeyField_SessionID
        , &CThostFtdcRspSyncKeyField_InstallID
        , &CThostFtdcRspSyncKeyField_UserID, &CThostFtdcRspSyncKeyField_UserID_length
        , &CThostFtdcRspSyncKeyField_Message, &CThostFtdcRspSyncKeyField_Message_length
        , &CThostFtdcRspSyncKeyField_DeviceID, &CThostFtdcRspSyncKeyField_DeviceID_length
        , &CThostFtdcRspSyncKeyField_BrokerIDByBank, &CThostFtdcRspSyncKeyField_BrokerIDByBank_length
        , &CThostFtdcRspSyncKeyField_OperNo, &CThostFtdcRspSyncKeyField_OperNo_length
        , &CThostFtdcRspSyncKeyField_RequestID
        , &CThostFtdcRspSyncKeyField_TID
        , &CThostFtdcRspSyncKeyField_ErrorID
        , &CThostFtdcRspSyncKeyField_ErrorMsg, &CThostFtdcRspSyncKeyField_ErrorMsg_length
    )) {
        return -1;
    }

    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcRspSyncKeyField_TradeCode != NULL ) {
        if(CThostFtdcRspSyncKeyField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcRspSyncKeyField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcRspSyncKeyField_TradeCode, CThostFtdcRspSyncKeyField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcRspSyncKeyField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcRspSyncKeyField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcRspSyncKeyField_BankID != NULL ) {
        if(CThostFtdcRspSyncKeyField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcRspSyncKeyField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcRspSyncKeyField_BankID, CThostFtdcRspSyncKeyField_BankID_length);
        strncpy(data->BankID, CThostFtdcRspSyncKeyField_BankID, sizeof(data->BankID));
        CThostFtdcRspSyncKeyField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcRspSyncKeyField_BankBranchID != NULL ) {
        if(CThostFtdcRspSyncKeyField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcRspSyncKeyField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcRspSyncKeyField_BankBranchID, CThostFtdcRspSyncKeyField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcRspSyncKeyField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcRspSyncKeyField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspSyncKeyField_BrokerID != NULL ) {
        if(CThostFtdcRspSyncKeyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspSyncKeyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspSyncKeyField_BrokerID, CThostFtdcRspSyncKeyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspSyncKeyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspSyncKeyField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcRspSyncKeyField_BrokerBranchID != NULL ) {
        if(CThostFtdcRspSyncKeyField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcRspSyncKeyField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcRspSyncKeyField_BrokerBranchID, CThostFtdcRspSyncKeyField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcRspSyncKeyField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcRspSyncKeyField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspSyncKeyField_TradeDate != NULL ) {
        if(CThostFtdcRspSyncKeyField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcRspSyncKeyField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcRspSyncKeyField_TradeDate, CThostFtdcRspSyncKeyField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcRspSyncKeyField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcRspSyncKeyField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcRspSyncKeyField_TradeTime != NULL ) {
        if(CThostFtdcRspSyncKeyField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcRspSyncKeyField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcRspSyncKeyField_TradeTime, CThostFtdcRspSyncKeyField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcRspSyncKeyField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcRspSyncKeyField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcRspSyncKeyField_BankSerial != NULL ) {
        if(CThostFtdcRspSyncKeyField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcRspSyncKeyField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcRspSyncKeyField_BankSerial, CThostFtdcRspSyncKeyField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcRspSyncKeyField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcRspSyncKeyField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspSyncKeyField_TradingDay != NULL ) {
        if(CThostFtdcRspSyncKeyField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRspSyncKeyField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRspSyncKeyField_TradingDay, CThostFtdcRspSyncKeyField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRspSyncKeyField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRspSyncKeyField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcRspSyncKeyField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcRspSyncKeyField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcRspSyncKeyField_SessionID;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcRspSyncKeyField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspSyncKeyField_UserID != NULL ) {
        if(CThostFtdcRspSyncKeyField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspSyncKeyField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspSyncKeyField_UserID, CThostFtdcRspSyncKeyField_UserID_length);
        strncpy(data->UserID, CThostFtdcRspSyncKeyField_UserID, sizeof(data->UserID));
        CThostFtdcRspSyncKeyField_UserID = NULL;
    }

    /// 交易核心给银期报盘的消息
    /// typedef char TThostFtdcAddInfoType[129]
    if( CThostFtdcRspSyncKeyField_Message != NULL ) {
        if(CThostFtdcRspSyncKeyField_Message_length >= (Py_ssize_t)sizeof(data->Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is 128)", CThostFtdcRspSyncKeyField_Message_length);
            return -1;
        }
        // memset(data->Message, 0, sizeof(data->Message));
        // memcpy(data->Message, CThostFtdcRspSyncKeyField_Message, CThostFtdcRspSyncKeyField_Message_length);
        strncpy(data->Message, CThostFtdcRspSyncKeyField_Message, sizeof(data->Message));
        CThostFtdcRspSyncKeyField_Message = NULL;
    }

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcRspSyncKeyField_DeviceID != NULL ) {
        if(CThostFtdcRspSyncKeyField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcRspSyncKeyField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcRspSyncKeyField_DeviceID, CThostFtdcRspSyncKeyField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcRspSyncKeyField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcRspSyncKeyField_DeviceID = NULL;
    }

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcRspSyncKeyField_BrokerIDByBank != NULL ) {
        if(CThostFtdcRspSyncKeyField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcRspSyncKeyField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcRspSyncKeyField_BrokerIDByBank, CThostFtdcRspSyncKeyField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcRspSyncKeyField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcRspSyncKeyField_BrokerIDByBank = NULL;
    }

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcRspSyncKeyField_OperNo != NULL ) {
        if(CThostFtdcRspSyncKeyField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcRspSyncKeyField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcRspSyncKeyField_OperNo, CThostFtdcRspSyncKeyField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcRspSyncKeyField_OperNo, sizeof(data->OperNo));
        CThostFtdcRspSyncKeyField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcRspSyncKeyField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcRspSyncKeyField_TID;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcRspSyncKeyField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcRspSyncKeyField_ErrorMsg != NULL ) {
        if(CThostFtdcRspSyncKeyField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcRspSyncKeyField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcRspSyncKeyField_ErrorMsg, CThostFtdcRspSyncKeyField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcRspSyncKeyField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcRspSyncKeyField_ErrorMsg = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspSyncKeyFieldType_repr(PyObject *self) {

    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y}"
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
        , "Message", data->Message//, (Py_ssize_t)sizeof(data->Message)
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspSyncKeyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspSyncKeyField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易核心给银期报盘的消息
/// typedef char TThostFtdcAddInfoType[129]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_Message(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Message, (Py_ssize_t)sizeof(data->Message));
    return PyBytes_FromString(data->Message);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_Message(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Message Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::Message)) {
        PyErr_SetString(PyExc_ValueError, "Message must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->Message, 0, sizeof(data->Message));
    // memcpy(data->Message, buf, len);
    strncpy(data->Message, buf, sizeof(data->Message));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcRspSyncKeyFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcRspSyncKeyFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspSyncKeyField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspSyncKeyFieldData>(self);
    CThostFtdcRspSyncKeyField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspSyncKeyFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspSyncKeyFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcRspSyncKeyFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcRspSyncKeyFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcRspSyncKeyFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcRspSyncKeyFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcRspSyncKeyFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspSyncKeyFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_TradeCode,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_BankID,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_BankBranchID,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_BrokerID,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_TradeDate,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_TradeTime,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_BankSerial,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_TradingDay,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_LastFragment,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_UserID,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 交易核心给银期报盘的消息
    /// typedef char TThostFtdcAddInfoType[129]
    {
    .name = "Message",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_Message,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_Message,
    .doc = PyDoc_STR("交易核心给银期报盘的消息"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_DeviceID,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_OperNo,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcRspSyncKeyFieldType_get_ErrorMsg,
    .set = PyCThostFtdcRspSyncKeyFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspSyncKeyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspSyncKeyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易核心向银期报盘发出密钥同步响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspSyncKeyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspSyncKeyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspSyncKeyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspSyncKeyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspSyncKeyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspSyncKeyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易核心向银期报盘发出密钥同步响应")},
    {Py_tp_members, PyCThostFtdcRspSyncKeyFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspSyncKeyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspSyncKeyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspSyncKeyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspSyncKeyFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspSyncKeyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspSyncKeyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspSyncKeyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspSyncKeyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspSyncKeyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspSyncKeyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspSyncKeyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspSyncKeyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspSyncKeyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspSyncKeyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspSyncKeyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}