
#include "PyCThostFtdcReqDayEndFileReadyField.h"

///日终文件就绪请求

static int PyCThostFtdcReqDayEndFileReadyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "FileBusinessCode", "Digest", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReqDayEndFileReadyField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReqDayEndFileReadyField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReqDayEndFileReadyField_BankID = NULL;
    Py_ssize_t CThostFtdcReqDayEndFileReadyField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReqDayEndFileReadyField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReqDayEndFileReadyField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqDayEndFileReadyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqDayEndFileReadyField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReqDayEndFileReadyField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReqDayEndFileReadyField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqDayEndFileReadyField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReqDayEndFileReadyField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReqDayEndFileReadyField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReqDayEndFileReadyField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReqDayEndFileReadyField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReqDayEndFileReadyField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqDayEndFileReadyField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqDayEndFileReadyField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReqDayEndFileReadyField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReqDayEndFileReadyField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReqDayEndFileReadyField_SessionID = 0;

    /// 文件业务功能
    /// typedef char TThostFtdcFileBusinessCodeType
    char CThostFtdcReqDayEndFileReadyField_FileBusinessCode = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcReqDayEndFileReadyField_Digest = NULL;
    Py_ssize_t CThostFtdcReqDayEndFileReadyField_Digest_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#icicy#", (char **)kwlist
        , &CThostFtdcReqDayEndFileReadyField_TradeCode, &CThostFtdcReqDayEndFileReadyField_TradeCode_length
        , &CThostFtdcReqDayEndFileReadyField_BankID, &CThostFtdcReqDayEndFileReadyField_BankID_length
        , &CThostFtdcReqDayEndFileReadyField_BankBranchID, &CThostFtdcReqDayEndFileReadyField_BankBranchID_length
        , &CThostFtdcReqDayEndFileReadyField_BrokerID, &CThostFtdcReqDayEndFileReadyField_BrokerID_length
        , &CThostFtdcReqDayEndFileReadyField_BrokerBranchID, &CThostFtdcReqDayEndFileReadyField_BrokerBranchID_length
        , &CThostFtdcReqDayEndFileReadyField_TradeDate, &CThostFtdcReqDayEndFileReadyField_TradeDate_length
        , &CThostFtdcReqDayEndFileReadyField_TradeTime, &CThostFtdcReqDayEndFileReadyField_TradeTime_length
        , &CThostFtdcReqDayEndFileReadyField_BankSerial, &CThostFtdcReqDayEndFileReadyField_BankSerial_length
        , &CThostFtdcReqDayEndFileReadyField_TradingDay, &CThostFtdcReqDayEndFileReadyField_TradingDay_length
        , &CThostFtdcReqDayEndFileReadyField_PlateSerial
        , &CThostFtdcReqDayEndFileReadyField_LastFragment
        , &CThostFtdcReqDayEndFileReadyField_SessionID
        , &CThostFtdcReqDayEndFileReadyField_FileBusinessCode
        , &CThostFtdcReqDayEndFileReadyField_Digest, &CThostFtdcReqDayEndFileReadyField_Digest_length
    )) {
        return -1;
    }

    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReqDayEndFileReadyField_TradeCode != NULL ) {
        if(CThostFtdcReqDayEndFileReadyField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReqDayEndFileReadyField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReqDayEndFileReadyField_TradeCode, CThostFtdcReqDayEndFileReadyField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReqDayEndFileReadyField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReqDayEndFileReadyField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReqDayEndFileReadyField_BankID != NULL ) {
        if(CThostFtdcReqDayEndFileReadyField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReqDayEndFileReadyField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReqDayEndFileReadyField_BankID, CThostFtdcReqDayEndFileReadyField_BankID_length);
        strncpy(data->BankID, CThostFtdcReqDayEndFileReadyField_BankID, sizeof(data->BankID));
        CThostFtdcReqDayEndFileReadyField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReqDayEndFileReadyField_BankBranchID != NULL ) {
        if(CThostFtdcReqDayEndFileReadyField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReqDayEndFileReadyField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReqDayEndFileReadyField_BankBranchID, CThostFtdcReqDayEndFileReadyField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReqDayEndFileReadyField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReqDayEndFileReadyField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqDayEndFileReadyField_BrokerID != NULL ) {
        if(CThostFtdcReqDayEndFileReadyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqDayEndFileReadyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqDayEndFileReadyField_BrokerID, CThostFtdcReqDayEndFileReadyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqDayEndFileReadyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqDayEndFileReadyField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReqDayEndFileReadyField_BrokerBranchID != NULL ) {
        if(CThostFtdcReqDayEndFileReadyField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReqDayEndFileReadyField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReqDayEndFileReadyField_BrokerBranchID, CThostFtdcReqDayEndFileReadyField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReqDayEndFileReadyField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReqDayEndFileReadyField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqDayEndFileReadyField_TradeDate != NULL ) {
        if(CThostFtdcReqDayEndFileReadyField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReqDayEndFileReadyField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReqDayEndFileReadyField_TradeDate, CThostFtdcReqDayEndFileReadyField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReqDayEndFileReadyField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReqDayEndFileReadyField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReqDayEndFileReadyField_TradeTime != NULL ) {
        if(CThostFtdcReqDayEndFileReadyField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReqDayEndFileReadyField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReqDayEndFileReadyField_TradeTime, CThostFtdcReqDayEndFileReadyField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReqDayEndFileReadyField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReqDayEndFileReadyField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReqDayEndFileReadyField_BankSerial != NULL ) {
        if(CThostFtdcReqDayEndFileReadyField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReqDayEndFileReadyField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReqDayEndFileReadyField_BankSerial, CThostFtdcReqDayEndFileReadyField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReqDayEndFileReadyField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReqDayEndFileReadyField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqDayEndFileReadyField_TradingDay != NULL ) {
        if(CThostFtdcReqDayEndFileReadyField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqDayEndFileReadyField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqDayEndFileReadyField_TradingDay, CThostFtdcReqDayEndFileReadyField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqDayEndFileReadyField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqDayEndFileReadyField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReqDayEndFileReadyField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReqDayEndFileReadyField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReqDayEndFileReadyField_SessionID;

    /// 文件业务功能
    /// typedef char TThostFtdcFileBusinessCodeType
    data->FileBusinessCode = CThostFtdcReqDayEndFileReadyField_FileBusinessCode;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcReqDayEndFileReadyField_Digest != NULL ) {
        if(CThostFtdcReqDayEndFileReadyField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcReqDayEndFileReadyField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcReqDayEndFileReadyField_Digest, CThostFtdcReqDayEndFileReadyField_Digest_length);
        strncpy(data->Digest, CThostFtdcReqDayEndFileReadyField_Digest, sizeof(data->Digest));
        CThostFtdcReqDayEndFileReadyField_Digest = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_repr(PyObject *self) {

    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:c,s:y}"
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
        , "FileBusinessCode", data->FileBusinessCode
        , "Digest", data->Digest//, (Py_ssize_t)sizeof(data->Digest)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqDayEndFileReadyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqDayEndFileReadyField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 文件业务功能
/// typedef char TThostFtdcFileBusinessCodeType
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_FileBusinessCode(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FileBusinessCode), 1);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_FileBusinessCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FileBusinessCode Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::FileBusinessCode)) {
        PyErr_SetString(PyExc_ValueError, "FileBusinessCode must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    data->FileBusinessCode = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcReqDayEndFileReadyFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcReqDayEndFileReadyFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqDayEndFileReadyField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqDayEndFileReadyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqDayEndFileReadyFieldData>(self);
    CThostFtdcReqDayEndFileReadyField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqDayEndFileReadyFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqDayEndFileReadyFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReqDayEndFileReadyFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqDayEndFileReadyFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_TradeCode,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_BankID,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_BankBranchID,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_BrokerID,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_TradeDate,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_TradeTime,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_BankSerial,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_TradingDay,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_LastFragment,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 文件业务功能
    /// typedef char TThostFtdcFileBusinessCodeType
    {
    .name = "FileBusinessCode",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_FileBusinessCode,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_FileBusinessCode,
    .doc = PyDoc_STR("文件业务功能"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcReqDayEndFileReadyFieldType_get_Digest,
    .set = PyCThostFtdcReqDayEndFileReadyFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqDayEndFileReadyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqDayEndFileReadyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("日终文件就绪请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqDayEndFileReadyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqDayEndFileReadyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqDayEndFileReadyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqDayEndFileReadyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqDayEndFileReadyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqDayEndFileReadyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("日终文件就绪请求")},
    {Py_tp_members, PyCThostFtdcReqDayEndFileReadyFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqDayEndFileReadyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqDayEndFileReadyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqDayEndFileReadyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqDayEndFileReadyFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqDayEndFileReadyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqDayEndFileReadyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqDayEndFileReadyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqDayEndFileReadyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqDayEndFileReadyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqDayEndFileReadyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqDayEndFileReadyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqDayEndFileReadyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqDayEndFileReadyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqDayEndFileReadyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqDayEndFileReadyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}