
#include "PyCThostFtdcNotifySyncKeyField.h"

///交易核心向银期报盘发出密钥同步处理结果的通知

static int PyCThostFtdcNotifySyncKeyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Message", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcNotifySyncKeyField_TradeCode = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcNotifySyncKeyField_BankID = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcNotifySyncKeyField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcNotifySyncKeyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcNotifySyncKeyField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcNotifySyncKeyField_TradeDate = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcNotifySyncKeyField_TradeTime = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcNotifySyncKeyField_BankSerial = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcNotifySyncKeyField_TradingDay = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcNotifySyncKeyField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcNotifySyncKeyField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcNotifySyncKeyField_SessionID = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcNotifySyncKeyField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcNotifySyncKeyField_UserID = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_UserID_length = 0;

    /// 交易核心给银期报盘的消息
    /// typedef char TThostFtdcAddInfoType[129]
    char *CThostFtdcNotifySyncKeyField_Message = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_Message_length = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcNotifySyncKeyField_DeviceID = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_DeviceID_length = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcNotifySyncKeyField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_BrokerIDByBank_length = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcNotifySyncKeyField_OperNo = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcNotifySyncKeyField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcNotifySyncKeyField_TID = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcNotifySyncKeyField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcNotifySyncKeyField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcNotifySyncKeyField_ErrorMsg_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#iiiy#", (char **)kwlist
        , &CThostFtdcNotifySyncKeyField_TradeCode, &CThostFtdcNotifySyncKeyField_TradeCode_length
        , &CThostFtdcNotifySyncKeyField_BankID, &CThostFtdcNotifySyncKeyField_BankID_length
        , &CThostFtdcNotifySyncKeyField_BankBranchID, &CThostFtdcNotifySyncKeyField_BankBranchID_length
        , &CThostFtdcNotifySyncKeyField_BrokerID, &CThostFtdcNotifySyncKeyField_BrokerID_length
        , &CThostFtdcNotifySyncKeyField_BrokerBranchID, &CThostFtdcNotifySyncKeyField_BrokerBranchID_length
        , &CThostFtdcNotifySyncKeyField_TradeDate, &CThostFtdcNotifySyncKeyField_TradeDate_length
        , &CThostFtdcNotifySyncKeyField_TradeTime, &CThostFtdcNotifySyncKeyField_TradeTime_length
        , &CThostFtdcNotifySyncKeyField_BankSerial, &CThostFtdcNotifySyncKeyField_BankSerial_length
        , &CThostFtdcNotifySyncKeyField_TradingDay, &CThostFtdcNotifySyncKeyField_TradingDay_length
        , &CThostFtdcNotifySyncKeyField_PlateSerial
        , &CThostFtdcNotifySyncKeyField_LastFragment
        , &CThostFtdcNotifySyncKeyField_SessionID
        , &CThostFtdcNotifySyncKeyField_InstallID
        , &CThostFtdcNotifySyncKeyField_UserID, &CThostFtdcNotifySyncKeyField_UserID_length
        , &CThostFtdcNotifySyncKeyField_Message, &CThostFtdcNotifySyncKeyField_Message_length
        , &CThostFtdcNotifySyncKeyField_DeviceID, &CThostFtdcNotifySyncKeyField_DeviceID_length
        , &CThostFtdcNotifySyncKeyField_BrokerIDByBank, &CThostFtdcNotifySyncKeyField_BrokerIDByBank_length
        , &CThostFtdcNotifySyncKeyField_OperNo, &CThostFtdcNotifySyncKeyField_OperNo_length
        , &CThostFtdcNotifySyncKeyField_RequestID
        , &CThostFtdcNotifySyncKeyField_TID
        , &CThostFtdcNotifySyncKeyField_ErrorID
        , &CThostFtdcNotifySyncKeyField_ErrorMsg, &CThostFtdcNotifySyncKeyField_ErrorMsg_length
    )) {
        return -1;
    }

    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcNotifySyncKeyField_TradeCode != NULL ) {
        if(CThostFtdcNotifySyncKeyField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcNotifySyncKeyField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcNotifySyncKeyField_TradeCode, CThostFtdcNotifySyncKeyField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcNotifySyncKeyField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcNotifySyncKeyField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcNotifySyncKeyField_BankID != NULL ) {
        if(CThostFtdcNotifySyncKeyField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcNotifySyncKeyField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcNotifySyncKeyField_BankID, CThostFtdcNotifySyncKeyField_BankID_length);
        strncpy(data->BankID, CThostFtdcNotifySyncKeyField_BankID, sizeof(data->BankID));
        CThostFtdcNotifySyncKeyField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcNotifySyncKeyField_BankBranchID != NULL ) {
        if(CThostFtdcNotifySyncKeyField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcNotifySyncKeyField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcNotifySyncKeyField_BankBranchID, CThostFtdcNotifySyncKeyField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcNotifySyncKeyField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcNotifySyncKeyField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcNotifySyncKeyField_BrokerID != NULL ) {
        if(CThostFtdcNotifySyncKeyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcNotifySyncKeyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcNotifySyncKeyField_BrokerID, CThostFtdcNotifySyncKeyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcNotifySyncKeyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcNotifySyncKeyField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcNotifySyncKeyField_BrokerBranchID != NULL ) {
        if(CThostFtdcNotifySyncKeyField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcNotifySyncKeyField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcNotifySyncKeyField_BrokerBranchID, CThostFtdcNotifySyncKeyField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcNotifySyncKeyField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcNotifySyncKeyField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcNotifySyncKeyField_TradeDate != NULL ) {
        if(CThostFtdcNotifySyncKeyField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcNotifySyncKeyField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcNotifySyncKeyField_TradeDate, CThostFtdcNotifySyncKeyField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcNotifySyncKeyField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcNotifySyncKeyField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcNotifySyncKeyField_TradeTime != NULL ) {
        if(CThostFtdcNotifySyncKeyField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcNotifySyncKeyField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcNotifySyncKeyField_TradeTime, CThostFtdcNotifySyncKeyField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcNotifySyncKeyField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcNotifySyncKeyField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcNotifySyncKeyField_BankSerial != NULL ) {
        if(CThostFtdcNotifySyncKeyField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcNotifySyncKeyField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcNotifySyncKeyField_BankSerial, CThostFtdcNotifySyncKeyField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcNotifySyncKeyField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcNotifySyncKeyField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcNotifySyncKeyField_TradingDay != NULL ) {
        if(CThostFtdcNotifySyncKeyField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcNotifySyncKeyField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcNotifySyncKeyField_TradingDay, CThostFtdcNotifySyncKeyField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcNotifySyncKeyField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcNotifySyncKeyField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcNotifySyncKeyField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcNotifySyncKeyField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcNotifySyncKeyField_SessionID;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcNotifySyncKeyField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcNotifySyncKeyField_UserID != NULL ) {
        if(CThostFtdcNotifySyncKeyField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcNotifySyncKeyField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcNotifySyncKeyField_UserID, CThostFtdcNotifySyncKeyField_UserID_length);
        strncpy(data->UserID, CThostFtdcNotifySyncKeyField_UserID, sizeof(data->UserID));
        CThostFtdcNotifySyncKeyField_UserID = NULL;
    }

    /// 交易核心给银期报盘的消息
    /// typedef char TThostFtdcAddInfoType[129]
    if( CThostFtdcNotifySyncKeyField_Message != NULL ) {
        if(CThostFtdcNotifySyncKeyField_Message_length >= (Py_ssize_t)sizeof(data->Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is 128)", CThostFtdcNotifySyncKeyField_Message_length);
            return -1;
        }
        // memset(data->Message, 0, sizeof(data->Message));
        // memcpy(data->Message, CThostFtdcNotifySyncKeyField_Message, CThostFtdcNotifySyncKeyField_Message_length);
        strncpy(data->Message, CThostFtdcNotifySyncKeyField_Message, sizeof(data->Message));
        CThostFtdcNotifySyncKeyField_Message = NULL;
    }

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcNotifySyncKeyField_DeviceID != NULL ) {
        if(CThostFtdcNotifySyncKeyField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcNotifySyncKeyField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcNotifySyncKeyField_DeviceID, CThostFtdcNotifySyncKeyField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcNotifySyncKeyField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcNotifySyncKeyField_DeviceID = NULL;
    }

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcNotifySyncKeyField_BrokerIDByBank != NULL ) {
        if(CThostFtdcNotifySyncKeyField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcNotifySyncKeyField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcNotifySyncKeyField_BrokerIDByBank, CThostFtdcNotifySyncKeyField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcNotifySyncKeyField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcNotifySyncKeyField_BrokerIDByBank = NULL;
    }

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcNotifySyncKeyField_OperNo != NULL ) {
        if(CThostFtdcNotifySyncKeyField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcNotifySyncKeyField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcNotifySyncKeyField_OperNo, CThostFtdcNotifySyncKeyField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcNotifySyncKeyField_OperNo, sizeof(data->OperNo));
        CThostFtdcNotifySyncKeyField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcNotifySyncKeyField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcNotifySyncKeyField_TID;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcNotifySyncKeyField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcNotifySyncKeyField_ErrorMsg != NULL ) {
        if(CThostFtdcNotifySyncKeyField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcNotifySyncKeyField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcNotifySyncKeyField_ErrorMsg, CThostFtdcNotifySyncKeyField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcNotifySyncKeyField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcNotifySyncKeyField_ErrorMsg = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcNotifySyncKeyFieldType_repr(PyObject *self) {

    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifySyncKeyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifySyncKeyField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易核心给银期报盘的消息
/// typedef char TThostFtdcAddInfoType[129]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_Message(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Message, (Py_ssize_t)sizeof(data->Message));
    return PyBytes_FromString(data->Message);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_Message(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Message Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::Message)) {
        PyErr_SetString(PyExc_ValueError, "Message must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->Message, 0, sizeof(data->Message));
    // memcpy(data->Message, buf, len);
    strncpy(data->Message, buf, sizeof(data->Message));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcNotifySyncKeyFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcNotifySyncKeyFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifySyncKeyField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifySyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifySyncKeyFieldData>(self);
    CThostFtdcNotifySyncKeyField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcNotifySyncKeyFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcNotifySyncKeyFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcNotifySyncKeyFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcNotifySyncKeyFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcNotifySyncKeyFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcNotifySyncKeyFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcNotifySyncKeyFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcNotifySyncKeyFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_TradeCode,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_BankID,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_BankBranchID,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_BrokerID,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_TradeDate,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_TradeTime,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_BankSerial,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_TradingDay,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_LastFragment,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_UserID,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 交易核心给银期报盘的消息
    /// typedef char TThostFtdcAddInfoType[129]
    {
    .name = "Message",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_Message,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_Message,
    .doc = PyDoc_STR("交易核心给银期报盘的消息"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_DeviceID,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_OperNo,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcNotifySyncKeyFieldType_get_ErrorMsg,
    .set = PyCThostFtdcNotifySyncKeyFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcNotifySyncKeyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcNotifySyncKeyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易核心向银期报盘发出密钥同步处理结果的通知")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcNotifySyncKeyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcNotifySyncKeyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcNotifySyncKeyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcNotifySyncKeyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcNotifySyncKeyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcNotifySyncKeyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易核心向银期报盘发出密钥同步处理结果的通知")},
    {Py_tp_members, PyCThostFtdcNotifySyncKeyFieldType_members},
    {Py_tp_getset, PyCThostFtdcNotifySyncKeyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcNotifySyncKeyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcNotifySyncKeyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcNotifySyncKeyFieldType_spec = {
    .name = "PyCTP.CThostFtdcNotifySyncKeyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcNotifySyncKeyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcNotifySyncKeyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcNotifySyncKeyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcNotifySyncKeyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcNotifySyncKeyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcNotifySyncKeyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcNotifySyncKeyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcNotifySyncKeyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcNotifySyncKeyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifySyncKeyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}