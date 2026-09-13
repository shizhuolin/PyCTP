
#include "PyCThostFtdcReqSyncKeyField.h"

///交易核心向银期报盘发出密钥同步请求

static int PyCThostFtdcReqSyncKeyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Message", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReqSyncKeyField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReqSyncKeyField_BankID = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReqSyncKeyField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqSyncKeyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReqSyncKeyField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqSyncKeyField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReqSyncKeyField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReqSyncKeyField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqSyncKeyField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReqSyncKeyField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReqSyncKeyField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReqSyncKeyField_SessionID = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcReqSyncKeyField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqSyncKeyField_UserID = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_UserID_length = 0;

    /// 交易核心给银期报盘的消息
    /// typedef char TThostFtdcAddInfoType[129]
    char *CThostFtdcReqSyncKeyField_Message = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_Message_length = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcReqSyncKeyField_DeviceID = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_DeviceID_length = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcReqSyncKeyField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_BrokerIDByBank_length = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcReqSyncKeyField_OperNo = NULL;
    Py_ssize_t CThostFtdcReqSyncKeyField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcReqSyncKeyField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcReqSyncKeyField_TID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#ii", (char **)kwlist
        , &CThostFtdcReqSyncKeyField_TradeCode, &CThostFtdcReqSyncKeyField_TradeCode_length
        , &CThostFtdcReqSyncKeyField_BankID, &CThostFtdcReqSyncKeyField_BankID_length
        , &CThostFtdcReqSyncKeyField_BankBranchID, &CThostFtdcReqSyncKeyField_BankBranchID_length
        , &CThostFtdcReqSyncKeyField_BrokerID, &CThostFtdcReqSyncKeyField_BrokerID_length
        , &CThostFtdcReqSyncKeyField_BrokerBranchID, &CThostFtdcReqSyncKeyField_BrokerBranchID_length
        , &CThostFtdcReqSyncKeyField_TradeDate, &CThostFtdcReqSyncKeyField_TradeDate_length
        , &CThostFtdcReqSyncKeyField_TradeTime, &CThostFtdcReqSyncKeyField_TradeTime_length
        , &CThostFtdcReqSyncKeyField_BankSerial, &CThostFtdcReqSyncKeyField_BankSerial_length
        , &CThostFtdcReqSyncKeyField_TradingDay, &CThostFtdcReqSyncKeyField_TradingDay_length
        , &CThostFtdcReqSyncKeyField_PlateSerial
        , &CThostFtdcReqSyncKeyField_LastFragment
        , &CThostFtdcReqSyncKeyField_SessionID
        , &CThostFtdcReqSyncKeyField_InstallID
        , &CThostFtdcReqSyncKeyField_UserID, &CThostFtdcReqSyncKeyField_UserID_length
        , &CThostFtdcReqSyncKeyField_Message, &CThostFtdcReqSyncKeyField_Message_length
        , &CThostFtdcReqSyncKeyField_DeviceID, &CThostFtdcReqSyncKeyField_DeviceID_length
        , &CThostFtdcReqSyncKeyField_BrokerIDByBank, &CThostFtdcReqSyncKeyField_BrokerIDByBank_length
        , &CThostFtdcReqSyncKeyField_OperNo, &CThostFtdcReqSyncKeyField_OperNo_length
        , &CThostFtdcReqSyncKeyField_RequestID
        , &CThostFtdcReqSyncKeyField_TID
    )) {
        return -1;
    }

    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReqSyncKeyField_TradeCode != NULL ) {
        if(CThostFtdcReqSyncKeyField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReqSyncKeyField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReqSyncKeyField_TradeCode, CThostFtdcReqSyncKeyField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReqSyncKeyField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReqSyncKeyField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReqSyncKeyField_BankID != NULL ) {
        if(CThostFtdcReqSyncKeyField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReqSyncKeyField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReqSyncKeyField_BankID, CThostFtdcReqSyncKeyField_BankID_length);
        strncpy(data->BankID, CThostFtdcReqSyncKeyField_BankID, sizeof(data->BankID));
        CThostFtdcReqSyncKeyField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReqSyncKeyField_BankBranchID != NULL ) {
        if(CThostFtdcReqSyncKeyField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReqSyncKeyField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReqSyncKeyField_BankBranchID, CThostFtdcReqSyncKeyField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReqSyncKeyField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReqSyncKeyField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqSyncKeyField_BrokerID != NULL ) {
        if(CThostFtdcReqSyncKeyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqSyncKeyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqSyncKeyField_BrokerID, CThostFtdcReqSyncKeyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqSyncKeyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqSyncKeyField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReqSyncKeyField_BrokerBranchID != NULL ) {
        if(CThostFtdcReqSyncKeyField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReqSyncKeyField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReqSyncKeyField_BrokerBranchID, CThostFtdcReqSyncKeyField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReqSyncKeyField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReqSyncKeyField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqSyncKeyField_TradeDate != NULL ) {
        if(CThostFtdcReqSyncKeyField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReqSyncKeyField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReqSyncKeyField_TradeDate, CThostFtdcReqSyncKeyField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReqSyncKeyField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReqSyncKeyField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReqSyncKeyField_TradeTime != NULL ) {
        if(CThostFtdcReqSyncKeyField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReqSyncKeyField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReqSyncKeyField_TradeTime, CThostFtdcReqSyncKeyField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReqSyncKeyField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReqSyncKeyField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReqSyncKeyField_BankSerial != NULL ) {
        if(CThostFtdcReqSyncKeyField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReqSyncKeyField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReqSyncKeyField_BankSerial, CThostFtdcReqSyncKeyField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReqSyncKeyField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReqSyncKeyField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqSyncKeyField_TradingDay != NULL ) {
        if(CThostFtdcReqSyncKeyField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqSyncKeyField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqSyncKeyField_TradingDay, CThostFtdcReqSyncKeyField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqSyncKeyField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqSyncKeyField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReqSyncKeyField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReqSyncKeyField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReqSyncKeyField_SessionID;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcReqSyncKeyField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqSyncKeyField_UserID != NULL ) {
        if(CThostFtdcReqSyncKeyField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqSyncKeyField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqSyncKeyField_UserID, CThostFtdcReqSyncKeyField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqSyncKeyField_UserID, sizeof(data->UserID));
        CThostFtdcReqSyncKeyField_UserID = NULL;
    }

    /// 交易核心给银期报盘的消息
    /// typedef char TThostFtdcAddInfoType[129]
    if( CThostFtdcReqSyncKeyField_Message != NULL ) {
        if(CThostFtdcReqSyncKeyField_Message_length >= (Py_ssize_t)sizeof(data->Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is 128)", CThostFtdcReqSyncKeyField_Message_length);
            return -1;
        }
        // memset(data->Message, 0, sizeof(data->Message));
        // memcpy(data->Message, CThostFtdcReqSyncKeyField_Message, CThostFtdcReqSyncKeyField_Message_length);
        strncpy(data->Message, CThostFtdcReqSyncKeyField_Message, sizeof(data->Message));
        CThostFtdcReqSyncKeyField_Message = NULL;
    }

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcReqSyncKeyField_DeviceID != NULL ) {
        if(CThostFtdcReqSyncKeyField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcReqSyncKeyField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcReqSyncKeyField_DeviceID, CThostFtdcReqSyncKeyField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcReqSyncKeyField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcReqSyncKeyField_DeviceID = NULL;
    }

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcReqSyncKeyField_BrokerIDByBank != NULL ) {
        if(CThostFtdcReqSyncKeyField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcReqSyncKeyField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcReqSyncKeyField_BrokerIDByBank, CThostFtdcReqSyncKeyField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcReqSyncKeyField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcReqSyncKeyField_BrokerIDByBank = NULL;
    }

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcReqSyncKeyField_OperNo != NULL ) {
        if(CThostFtdcReqSyncKeyField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcReqSyncKeyField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcReqSyncKeyField_OperNo, CThostFtdcReqSyncKeyField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcReqSyncKeyField_OperNo, sizeof(data->OperNo));
        CThostFtdcReqSyncKeyField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcReqSyncKeyField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcReqSyncKeyField_TID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqSyncKeyFieldType_repr(PyObject *self) {

    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
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
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqSyncKeyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqSyncKeyField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易核心给银期报盘的消息
/// typedef char TThostFtdcAddInfoType[129]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_Message(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Message, (Py_ssize_t)sizeof(data->Message));
    return PyBytes_FromString(data->Message);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_Message(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Message Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::Message)) {
        PyErr_SetString(PyExc_ValueError, "Message must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->Message, 0, sizeof(data->Message));
    // memcpy(data->Message, buf, len);
    strncpy(data->Message, buf, sizeof(data->Message));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcReqSyncKeyFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcReqSyncKeyFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqSyncKeyField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqSyncKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqSyncKeyFieldData>(self);
    CThostFtdcReqSyncKeyField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqSyncKeyFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqSyncKeyFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReqSyncKeyFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcReqSyncKeyFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcReqSyncKeyFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcReqSyncKeyFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqSyncKeyFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_TradeCode,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_BankID,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_BankBranchID,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_BrokerID,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_TradeDate,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_TradeTime,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_BankSerial,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_TradingDay,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_LastFragment,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_UserID,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 交易核心给银期报盘的消息
    /// typedef char TThostFtdcAddInfoType[129]
    {
    .name = "Message",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_Message,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_Message,
    .doc = PyDoc_STR("交易核心给银期报盘的消息"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_DeviceID,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcReqSyncKeyFieldType_get_OperNo,
    .set = PyCThostFtdcReqSyncKeyFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqSyncKeyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqSyncKeyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易核心向银期报盘发出密钥同步请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqSyncKeyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqSyncKeyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqSyncKeyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqSyncKeyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqSyncKeyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqSyncKeyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易核心向银期报盘发出密钥同步请求")},
    {Py_tp_members, PyCThostFtdcReqSyncKeyFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqSyncKeyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqSyncKeyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqSyncKeyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqSyncKeyFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqSyncKeyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqSyncKeyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqSyncKeyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqSyncKeyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqSyncKeyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqSyncKeyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqSyncKeyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqSyncKeyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqSyncKeyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqSyncKeyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqSyncKeyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}