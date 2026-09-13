
#include "PyCThostFtdcTransferHeaderField.h"

///银期转帐报文头

static int PyCThostFtdcTransferHeaderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "Version", "TradeCode", "TradeDate", "TradeTime", "TradeSerial", "FutureID", "BankID", "BankBrchID", "OperNo", "DeviceID", "RecordNum", "SessionID", "RequestID", NULL };


    /// 版本号，常量，1.0
    /// typedef char TThostFtdcVersionType[4]
    char *CThostFtdcTransferHeaderField_Version = NULL;
    Py_ssize_t CThostFtdcTransferHeaderField_Version_length = 0;

    /// 交易代码，必填
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcTransferHeaderField_TradeCode = NULL;
    Py_ssize_t CThostFtdcTransferHeaderField_TradeCode_length = 0;

    /// 交易日期，必填，格式：yyyymmdd
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcTransferHeaderField_TradeDate = NULL;
    Py_ssize_t CThostFtdcTransferHeaderField_TradeDate_length = 0;

    /// 交易时间，必填，格式：hhmmss
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcTransferHeaderField_TradeTime = NULL;
    Py_ssize_t CThostFtdcTransferHeaderField_TradeTime_length = 0;

    /// 发起方流水号，N/A
    /// typedef char TThostFtdcTradeSerialType[9]
    char *CThostFtdcTransferHeaderField_TradeSerial = NULL;
    Py_ssize_t CThostFtdcTransferHeaderField_TradeSerial_length = 0;

    /// 期货公司代码，必填
    /// typedef char TThostFtdcFutureIDType[11]
    char *CThostFtdcTransferHeaderField_FutureID = NULL;
    Py_ssize_t CThostFtdcTransferHeaderField_FutureID_length = 0;

    /// 银行代码，根据查询银行得到，必填
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcTransferHeaderField_BankID = NULL;
    Py_ssize_t CThostFtdcTransferHeaderField_BankID_length = 0;

    /// 银行分中心代码，根据查询银行得到，必填
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcTransferHeaderField_BankBrchID = NULL;
    Py_ssize_t CThostFtdcTransferHeaderField_BankBrchID_length = 0;

    /// 操作员，N/A
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcTransferHeaderField_OperNo = NULL;
    Py_ssize_t CThostFtdcTransferHeaderField_OperNo_length = 0;

    /// 交易设备类型，N/A
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcTransferHeaderField_DeviceID = NULL;
    Py_ssize_t CThostFtdcTransferHeaderField_DeviceID_length = 0;

    /// 记录数，N/A
    /// typedef char TThostFtdcRecordNumType[7]
    char *CThostFtdcTransferHeaderField_RecordNum = NULL;
    Py_ssize_t CThostFtdcTransferHeaderField_RecordNum_length = 0;

    /// 会话编号，N/A
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcTransferHeaderField_SessionID = 0;

    /// 请求编号，N/A
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcTransferHeaderField_RequestID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#ii", (char **)kwlist
        , &CThostFtdcTransferHeaderField_Version, &CThostFtdcTransferHeaderField_Version_length
        , &CThostFtdcTransferHeaderField_TradeCode, &CThostFtdcTransferHeaderField_TradeCode_length
        , &CThostFtdcTransferHeaderField_TradeDate, &CThostFtdcTransferHeaderField_TradeDate_length
        , &CThostFtdcTransferHeaderField_TradeTime, &CThostFtdcTransferHeaderField_TradeTime_length
        , &CThostFtdcTransferHeaderField_TradeSerial, &CThostFtdcTransferHeaderField_TradeSerial_length
        , &CThostFtdcTransferHeaderField_FutureID, &CThostFtdcTransferHeaderField_FutureID_length
        , &CThostFtdcTransferHeaderField_BankID, &CThostFtdcTransferHeaderField_BankID_length
        , &CThostFtdcTransferHeaderField_BankBrchID, &CThostFtdcTransferHeaderField_BankBrchID_length
        , &CThostFtdcTransferHeaderField_OperNo, &CThostFtdcTransferHeaderField_OperNo_length
        , &CThostFtdcTransferHeaderField_DeviceID, &CThostFtdcTransferHeaderField_DeviceID_length
        , &CThostFtdcTransferHeaderField_RecordNum, &CThostFtdcTransferHeaderField_RecordNum_length
        , &CThostFtdcTransferHeaderField_SessionID
        , &CThostFtdcTransferHeaderField_RequestID
    )) {
        return -1;
    }

    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);


    /// 版本号，常量，1.0
    /// typedef char TThostFtdcVersionType[4]
    if( CThostFtdcTransferHeaderField_Version != NULL ) {
        if(CThostFtdcTransferHeaderField_Version_length >= (Py_ssize_t)sizeof(data->Version)) {
            PyErr_Format(PyExc_ValueError, "Version too long: length=%zd (max allowed is 3)", CThostFtdcTransferHeaderField_Version_length);
            return -1;
        }
        // memset(data->Version, 0, sizeof(data->Version));
        // memcpy(data->Version, CThostFtdcTransferHeaderField_Version, CThostFtdcTransferHeaderField_Version_length);
        strncpy(data->Version, CThostFtdcTransferHeaderField_Version, sizeof(data->Version));
        CThostFtdcTransferHeaderField_Version = NULL;
    }

    /// 交易代码，必填
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcTransferHeaderField_TradeCode != NULL ) {
        if(CThostFtdcTransferHeaderField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcTransferHeaderField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcTransferHeaderField_TradeCode, CThostFtdcTransferHeaderField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcTransferHeaderField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcTransferHeaderField_TradeCode = NULL;
    }

    /// 交易日期，必填，格式：yyyymmdd
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcTransferHeaderField_TradeDate != NULL ) {
        if(CThostFtdcTransferHeaderField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcTransferHeaderField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcTransferHeaderField_TradeDate, CThostFtdcTransferHeaderField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcTransferHeaderField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcTransferHeaderField_TradeDate = NULL;
    }

    /// 交易时间，必填，格式：hhmmss
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcTransferHeaderField_TradeTime != NULL ) {
        if(CThostFtdcTransferHeaderField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcTransferHeaderField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcTransferHeaderField_TradeTime, CThostFtdcTransferHeaderField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcTransferHeaderField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcTransferHeaderField_TradeTime = NULL;
    }

    /// 发起方流水号，N/A
    /// typedef char TThostFtdcTradeSerialType[9]
    if( CThostFtdcTransferHeaderField_TradeSerial != NULL ) {
        if(CThostFtdcTransferHeaderField_TradeSerial_length >= (Py_ssize_t)sizeof(data->TradeSerial)) {
            PyErr_Format(PyExc_ValueError, "TradeSerial too long: length=%zd (max allowed is 8)", CThostFtdcTransferHeaderField_TradeSerial_length);
            return -1;
        }
        // memset(data->TradeSerial, 0, sizeof(data->TradeSerial));
        // memcpy(data->TradeSerial, CThostFtdcTransferHeaderField_TradeSerial, CThostFtdcTransferHeaderField_TradeSerial_length);
        strncpy(data->TradeSerial, CThostFtdcTransferHeaderField_TradeSerial, sizeof(data->TradeSerial));
        CThostFtdcTransferHeaderField_TradeSerial = NULL;
    }

    /// 期货公司代码，必填
    /// typedef char TThostFtdcFutureIDType[11]
    if( CThostFtdcTransferHeaderField_FutureID != NULL ) {
        if(CThostFtdcTransferHeaderField_FutureID_length >= (Py_ssize_t)sizeof(data->FutureID)) {
            PyErr_Format(PyExc_ValueError, "FutureID too long: length=%zd (max allowed is 10)", CThostFtdcTransferHeaderField_FutureID_length);
            return -1;
        }
        // memset(data->FutureID, 0, sizeof(data->FutureID));
        // memcpy(data->FutureID, CThostFtdcTransferHeaderField_FutureID, CThostFtdcTransferHeaderField_FutureID_length);
        strncpy(data->FutureID, CThostFtdcTransferHeaderField_FutureID, sizeof(data->FutureID));
        CThostFtdcTransferHeaderField_FutureID = NULL;
    }

    /// 银行代码，根据查询银行得到，必填
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcTransferHeaderField_BankID != NULL ) {
        if(CThostFtdcTransferHeaderField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcTransferHeaderField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcTransferHeaderField_BankID, CThostFtdcTransferHeaderField_BankID_length);
        strncpy(data->BankID, CThostFtdcTransferHeaderField_BankID, sizeof(data->BankID));
        CThostFtdcTransferHeaderField_BankID = NULL;
    }

    /// 银行分中心代码，根据查询银行得到，必填
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcTransferHeaderField_BankBrchID != NULL ) {
        if(CThostFtdcTransferHeaderField_BankBrchID_length >= (Py_ssize_t)sizeof(data->BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is 4)", CThostFtdcTransferHeaderField_BankBrchID_length);
            return -1;
        }
        // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
        // memcpy(data->BankBrchID, CThostFtdcTransferHeaderField_BankBrchID, CThostFtdcTransferHeaderField_BankBrchID_length);
        strncpy(data->BankBrchID, CThostFtdcTransferHeaderField_BankBrchID, sizeof(data->BankBrchID));
        CThostFtdcTransferHeaderField_BankBrchID = NULL;
    }

    /// 操作员，N/A
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcTransferHeaderField_OperNo != NULL ) {
        if(CThostFtdcTransferHeaderField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcTransferHeaderField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcTransferHeaderField_OperNo, CThostFtdcTransferHeaderField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcTransferHeaderField_OperNo, sizeof(data->OperNo));
        CThostFtdcTransferHeaderField_OperNo = NULL;
    }

    /// 交易设备类型，N/A
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcTransferHeaderField_DeviceID != NULL ) {
        if(CThostFtdcTransferHeaderField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcTransferHeaderField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcTransferHeaderField_DeviceID, CThostFtdcTransferHeaderField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcTransferHeaderField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcTransferHeaderField_DeviceID = NULL;
    }

    /// 记录数，N/A
    /// typedef char TThostFtdcRecordNumType[7]
    if( CThostFtdcTransferHeaderField_RecordNum != NULL ) {
        if(CThostFtdcTransferHeaderField_RecordNum_length >= (Py_ssize_t)sizeof(data->RecordNum)) {
            PyErr_Format(PyExc_ValueError, "RecordNum too long: length=%zd (max allowed is 6)", CThostFtdcTransferHeaderField_RecordNum_length);
            return -1;
        }
        // memset(data->RecordNum, 0, sizeof(data->RecordNum));
        // memcpy(data->RecordNum, CThostFtdcTransferHeaderField_RecordNum, CThostFtdcTransferHeaderField_RecordNum_length);
        strncpy(data->RecordNum, CThostFtdcTransferHeaderField_RecordNum, sizeof(data->RecordNum));
        CThostFtdcTransferHeaderField_RecordNum = NULL;
    }

    /// 会话编号，N/A
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcTransferHeaderField_SessionID;

    /// 请求编号，N/A
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcTransferHeaderField_RequestID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTransferHeaderFieldType_repr(PyObject *self) {

    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
        , "Version", data->Version//, (Py_ssize_t)sizeof(data->Version)
        , "TradeCode", data->TradeCode//, (Py_ssize_t)sizeof(data->TradeCode)
        , "TradeDate", data->TradeDate//, (Py_ssize_t)sizeof(data->TradeDate)
        , "TradeTime", data->TradeTime//, (Py_ssize_t)sizeof(data->TradeTime)
        , "TradeSerial", data->TradeSerial//, (Py_ssize_t)sizeof(data->TradeSerial)
        , "FutureID", data->FutureID//, (Py_ssize_t)sizeof(data->FutureID)
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankBrchID", data->BankBrchID//, (Py_ssize_t)sizeof(data->BankBrchID)
        , "OperNo", data->OperNo//, (Py_ssize_t)sizeof(data->OperNo)
        , "DeviceID", data->DeviceID//, (Py_ssize_t)sizeof(data->DeviceID)
        , "RecordNum", data->RecordNum//, (Py_ssize_t)sizeof(data->RecordNum)
        , "SessionID", data->SessionID
        , "RequestID", data->RequestID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferHeaderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferHeaderField repr");
        return NULL;
    }

    return repr;
}


/// 版本号，常量，1.0
/// typedef char TThostFtdcVersionType[4]
static PyObject *PyCThostFtdcTransferHeaderFieldType_get_Version(PyObject *self, void *closure) {
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Version, (Py_ssize_t)sizeof(data->Version));
    return PyBytes_FromString(data->Version);
}

static int PyCThostFtdcTransferHeaderFieldType_set_Version(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Version Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferHeaderField::Version)) {
        PyErr_SetString(PyExc_ValueError, "Version must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // memset(data->Version, 0, sizeof(data->Version));
    // memcpy(data->Version, buf, len);
    strncpy(data->Version, buf, sizeof(data->Version));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易代码，必填
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcTransferHeaderFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcTransferHeaderFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferHeaderField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期，必填，格式：yyyymmdd
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcTransferHeaderFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcTransferHeaderFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferHeaderField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间，必填，格式：hhmmss
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcTransferHeaderFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcTransferHeaderFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferHeaderField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 发起方流水号，N/A
/// typedef char TThostFtdcTradeSerialType[9]
static PyObject *PyCThostFtdcTransferHeaderFieldType_get_TradeSerial(PyObject *self, void *closure) {
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeSerial, (Py_ssize_t)sizeof(data->TradeSerial));
    return PyBytes_FromString(data->TradeSerial);
}

static int PyCThostFtdcTransferHeaderFieldType_set_TradeSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferHeaderField::TradeSerial)) {
        PyErr_SetString(PyExc_ValueError, "TradeSerial must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // memset(data->TradeSerial, 0, sizeof(data->TradeSerial));
    // memcpy(data->TradeSerial, buf, len);
    strncpy(data->TradeSerial, buf, sizeof(data->TradeSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司代码，必填
/// typedef char TThostFtdcFutureIDType[11]
static PyObject *PyCThostFtdcTransferHeaderFieldType_get_FutureID(PyObject *self, void *closure) {
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureID, (Py_ssize_t)sizeof(data->FutureID));
    return PyBytes_FromString(data->FutureID);
}

static int PyCThostFtdcTransferHeaderFieldType_set_FutureID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferHeaderField::FutureID)) {
        PyErr_SetString(PyExc_ValueError, "FutureID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // memset(data->FutureID, 0, sizeof(data->FutureID));
    // memcpy(data->FutureID, buf, len);
    strncpy(data->FutureID, buf, sizeof(data->FutureID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码，根据查询银行得到，必填
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcTransferHeaderFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcTransferHeaderFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferHeaderField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分中心代码，根据查询银行得到，必填
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcTransferHeaderFieldType_get_BankBrchID(PyObject *self, void *closure) {
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBrchID, (Py_ssize_t)sizeof(data->BankBrchID));
    return PyBytes_FromString(data->BankBrchID);
}

static int PyCThostFtdcTransferHeaderFieldType_set_BankBrchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBrchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferHeaderField::BankBrchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBrchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
    // memcpy(data->BankBrchID, buf, len);
    strncpy(data->BankBrchID, buf, sizeof(data->BankBrchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作员，N/A
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcTransferHeaderFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcTransferHeaderFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferHeaderField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易设备类型，N/A
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcTransferHeaderFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcTransferHeaderFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferHeaderField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 记录数，N/A
/// typedef char TThostFtdcRecordNumType[7]
static PyObject *PyCThostFtdcTransferHeaderFieldType_get_RecordNum(PyObject *self, void *closure) {
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RecordNum, (Py_ssize_t)sizeof(data->RecordNum));
    return PyBytes_FromString(data->RecordNum);
}

static int PyCThostFtdcTransferHeaderFieldType_set_RecordNum(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RecordNum Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferHeaderField::RecordNum)) {
        PyErr_SetString(PyExc_ValueError, "RecordNum must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferHeaderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferHeaderFieldData>(self);
    CThostFtdcTransferHeaderField *data = &(extra->data);
    // memset(data->RecordNum, 0, sizeof(data->RecordNum));
    // memcpy(data->RecordNum, buf, len);
    strncpy(data->RecordNum, buf, sizeof(data->RecordNum));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTransferHeaderFieldType_members[] = {
    /// 会话编号，N/A
    /// typedef int TThostFtdcSessionIDType
    {
        .name = "SessionID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferHeaderFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号，N/A")
    },
    /// 请求编号，N/A
    /// typedef int TThostFtdcRequestIDType
    {
        .name = "RequestID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferHeaderFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号，N/A")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTransferHeaderFieldType_getsets[] = {
    /// 版本号，常量，1.0
    /// typedef char TThostFtdcVersionType[4]
    {
    .name = "Version",
    .get = PyCThostFtdcTransferHeaderFieldType_get_Version,
    .set = PyCThostFtdcTransferHeaderFieldType_set_Version,
    .doc = PyDoc_STR("版本号，常量，1.0"),
    },
    /// 交易代码，必填
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcTransferHeaderFieldType_get_TradeCode,
    .set = PyCThostFtdcTransferHeaderFieldType_set_TradeCode,
    .doc = PyDoc_STR("交易代码，必填"),
    },
    /// 交易日期，必填，格式：yyyymmdd
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcTransferHeaderFieldType_get_TradeDate,
    .set = PyCThostFtdcTransferHeaderFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期，必填，格式：yyyymmdd"),
    },
    /// 交易时间，必填，格式：hhmmss
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcTransferHeaderFieldType_get_TradeTime,
    .set = PyCThostFtdcTransferHeaderFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间，必填，格式：hhmmss"),
    },
    /// 发起方流水号，N/A
    /// typedef char TThostFtdcTradeSerialType[9]
    {
    .name = "TradeSerial",
    .get = PyCThostFtdcTransferHeaderFieldType_get_TradeSerial,
    .set = PyCThostFtdcTransferHeaderFieldType_set_TradeSerial,
    .doc = PyDoc_STR("发起方流水号，N/A"),
    },
    /// 期货公司代码，必填
    /// typedef char TThostFtdcFutureIDType[11]
    {
    .name = "FutureID",
    .get = PyCThostFtdcTransferHeaderFieldType_get_FutureID,
    .set = PyCThostFtdcTransferHeaderFieldType_set_FutureID,
    .doc = PyDoc_STR("期货公司代码，必填"),
    },
    /// 银行代码，根据查询银行得到，必填
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcTransferHeaderFieldType_get_BankID,
    .set = PyCThostFtdcTransferHeaderFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码，根据查询银行得到，必填"),
    },
    /// 银行分中心代码，根据查询银行得到，必填
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBrchID",
    .get = PyCThostFtdcTransferHeaderFieldType_get_BankBrchID,
    .set = PyCThostFtdcTransferHeaderFieldType_set_BankBrchID,
    .doc = PyDoc_STR("银行分中心代码，根据查询银行得到，必填"),
    },
    /// 操作员，N/A
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcTransferHeaderFieldType_get_OperNo,
    .set = PyCThostFtdcTransferHeaderFieldType_set_OperNo,
    .doc = PyDoc_STR("操作员，N/A"),
    },
    /// 交易设备类型，N/A
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcTransferHeaderFieldType_get_DeviceID,
    .set = PyCThostFtdcTransferHeaderFieldType_set_DeviceID,
    .doc = PyDoc_STR("交易设备类型，N/A"),
    },
    /// 记录数，N/A
    /// typedef char TThostFtdcRecordNumType[7]
    {
    .name = "RecordNum",
    .get = PyCThostFtdcTransferHeaderFieldType_get_RecordNum,
    .set = PyCThostFtdcTransferHeaderFieldType_set_RecordNum,
    .doc = PyDoc_STR("记录数，N/A"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTransferHeaderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTransferHeaderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("银期转帐报文头")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTransferHeaderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTransferHeaderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTransferHeaderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTransferHeaderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTransferHeaderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTransferHeaderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("银期转帐报文头")},
    {Py_tp_members, PyCThostFtdcTransferHeaderFieldType_members},
    {Py_tp_getset, PyCThostFtdcTransferHeaderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTransferHeaderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTransferHeaderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTransferHeaderFieldType_spec = {
    .name = "PyCTP.CThostFtdcTransferHeaderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTransferHeaderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTransferHeaderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTransferHeaderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTransferHeaderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTransferHeaderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTransferHeaderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTransferHeaderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTransferHeaderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTransferHeaderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferHeaderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}