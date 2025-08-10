
#include "PyCThostFtdcTransferHeaderField.h"

///银期转帐报文头

static PyObject *PyCThostFtdcTransferHeaderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferHeaderField *self = (PyCThostFtdcTransferHeaderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTransferHeaderField_init(PyCThostFtdcTransferHeaderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"Version", "TradeCode", "TradeDate", "TradeTime", "TradeSerial", "FutureID", "BankID", "BankBrchID", "OperNo", "DeviceID", "RecordNum", "SessionID", "RequestID",  NULL};


    ///版本号，常量，1.0
    // TThostFtdcVersionType char[4]
    const char *TransferHeaderField_Version = NULL;
    Py_ssize_t TransferHeaderField_Version_len = 0;
            
    ///交易代码，必填
    // TThostFtdcTradeCodeType char[7]
    const char *TransferHeaderField_TradeCode = NULL;
    Py_ssize_t TransferHeaderField_TradeCode_len = 0;
            
    ///交易日期，必填，格式：yyyymmdd
    // TThostFtdcTradeDateType char[9]
    const char *TransferHeaderField_TradeDate = NULL;
    Py_ssize_t TransferHeaderField_TradeDate_len = 0;
            
    ///交易时间，必填，格式：hhmmss
    // TThostFtdcTradeTimeType char[9]
    const char *TransferHeaderField_TradeTime = NULL;
    Py_ssize_t TransferHeaderField_TradeTime_len = 0;
            
    ///发起方流水号，N/A
    // TThostFtdcTradeSerialType char[9]
    const char *TransferHeaderField_TradeSerial = NULL;
    Py_ssize_t TransferHeaderField_TradeSerial_len = 0;
            
    ///期货公司代码，必填
    // TThostFtdcFutureIDType char[11]
    const char *TransferHeaderField_FutureID = NULL;
    Py_ssize_t TransferHeaderField_FutureID_len = 0;
            
    ///银行代码，根据查询银行得到，必填
    // TThostFtdcBankIDType char[4]
    const char *TransferHeaderField_BankID = NULL;
    Py_ssize_t TransferHeaderField_BankID_len = 0;
            
    ///银行分中心代码，根据查询银行得到，必填
    // TThostFtdcBankBrchIDType char[5]
    const char *TransferHeaderField_BankBrchID = NULL;
    Py_ssize_t TransferHeaderField_BankBrchID_len = 0;
            
    ///操作员，N/A
    // TThostFtdcOperNoType char[17]
    const char *TransferHeaderField_OperNo = NULL;
    Py_ssize_t TransferHeaderField_OperNo_len = 0;
            
    ///交易设备类型，N/A
    // TThostFtdcDeviceIDType char[3]
    const char *TransferHeaderField_DeviceID = NULL;
    Py_ssize_t TransferHeaderField_DeviceID_len = 0;
            
    ///记录数，N/A
    // TThostFtdcRecordNumType char[7]
    const char *TransferHeaderField_RecordNum = NULL;
    Py_ssize_t TransferHeaderField_RecordNum_len = 0;
            
    ///会话编号，N/A
    // TThostFtdcSessionIDType int
    int TransferHeaderField_SessionID = 0;
        
    ///请求编号，N/A
    // TThostFtdcRequestIDType int
    int TransferHeaderField_RequestID = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#ii", (char **)kwlist
#endif

        , &TransferHeaderField_Version, &TransferHeaderField_Version_len 
        , &TransferHeaderField_TradeCode, &TransferHeaderField_TradeCode_len 
        , &TransferHeaderField_TradeDate, &TransferHeaderField_TradeDate_len 
        , &TransferHeaderField_TradeTime, &TransferHeaderField_TradeTime_len 
        , &TransferHeaderField_TradeSerial, &TransferHeaderField_TradeSerial_len 
        , &TransferHeaderField_FutureID, &TransferHeaderField_FutureID_len 
        , &TransferHeaderField_BankID, &TransferHeaderField_BankID_len 
        , &TransferHeaderField_BankBrchID, &TransferHeaderField_BankBrchID_len 
        , &TransferHeaderField_OperNo, &TransferHeaderField_OperNo_len 
        , &TransferHeaderField_DeviceID, &TransferHeaderField_DeviceID_len 
        , &TransferHeaderField_RecordNum, &TransferHeaderField_RecordNum_len 
        , &TransferHeaderField_SessionID 
        , &TransferHeaderField_RequestID 


    )) {
        return -1;
    }


    ///版本号，常量，1.0
    // TThostFtdcVersionType char[4]
    if( TransferHeaderField_Version != NULL ) {
        if(TransferHeaderField_Version_len > (Py_ssize_t)sizeof(self->data.Version)) {
            PyErr_Format(PyExc_ValueError, "Version too long: length=%zd (max allowed is %zd)", TransferHeaderField_Version_len, (Py_ssize_t)sizeof(self->data.Version));
            return -1;
        }
        // memset(self->data.Version, 0, sizeof(self->data.Version));
        // memcpy(self->data.Version, TransferHeaderField_Version, TransferHeaderField_Version_len);        
        strncpy(self->data.Version, TransferHeaderField_Version, sizeof(self->data.Version) );
        TransferHeaderField_Version = NULL;
    }
            
    ///交易代码，必填
    // TThostFtdcTradeCodeType char[7]
    if( TransferHeaderField_TradeCode != NULL ) {
        if(TransferHeaderField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", TransferHeaderField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, TransferHeaderField_TradeCode, TransferHeaderField_TradeCode_len);        
        strncpy(self->data.TradeCode, TransferHeaderField_TradeCode, sizeof(self->data.TradeCode) );
        TransferHeaderField_TradeCode = NULL;
    }
            
    ///交易日期，必填，格式：yyyymmdd
    // TThostFtdcTradeDateType char[9]
    if( TransferHeaderField_TradeDate != NULL ) {
        if(TransferHeaderField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", TransferHeaderField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, TransferHeaderField_TradeDate, TransferHeaderField_TradeDate_len);        
        strncpy(self->data.TradeDate, TransferHeaderField_TradeDate, sizeof(self->data.TradeDate) );
        TransferHeaderField_TradeDate = NULL;
    }
            
    ///交易时间，必填，格式：hhmmss
    // TThostFtdcTradeTimeType char[9]
    if( TransferHeaderField_TradeTime != NULL ) {
        if(TransferHeaderField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", TransferHeaderField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, TransferHeaderField_TradeTime, TransferHeaderField_TradeTime_len);        
        strncpy(self->data.TradeTime, TransferHeaderField_TradeTime, sizeof(self->data.TradeTime) );
        TransferHeaderField_TradeTime = NULL;
    }
            
    ///发起方流水号，N/A
    // TThostFtdcTradeSerialType char[9]
    if( TransferHeaderField_TradeSerial != NULL ) {
        if(TransferHeaderField_TradeSerial_len > (Py_ssize_t)sizeof(self->data.TradeSerial)) {
            PyErr_Format(PyExc_ValueError, "TradeSerial too long: length=%zd (max allowed is %zd)", TransferHeaderField_TradeSerial_len, (Py_ssize_t)sizeof(self->data.TradeSerial));
            return -1;
        }
        // memset(self->data.TradeSerial, 0, sizeof(self->data.TradeSerial));
        // memcpy(self->data.TradeSerial, TransferHeaderField_TradeSerial, TransferHeaderField_TradeSerial_len);        
        strncpy(self->data.TradeSerial, TransferHeaderField_TradeSerial, sizeof(self->data.TradeSerial) );
        TransferHeaderField_TradeSerial = NULL;
    }
            
    ///期货公司代码，必填
    // TThostFtdcFutureIDType char[11]
    if( TransferHeaderField_FutureID != NULL ) {
        if(TransferHeaderField_FutureID_len > (Py_ssize_t)sizeof(self->data.FutureID)) {
            PyErr_Format(PyExc_ValueError, "FutureID too long: length=%zd (max allowed is %zd)", TransferHeaderField_FutureID_len, (Py_ssize_t)sizeof(self->data.FutureID));
            return -1;
        }
        // memset(self->data.FutureID, 0, sizeof(self->data.FutureID));
        // memcpy(self->data.FutureID, TransferHeaderField_FutureID, TransferHeaderField_FutureID_len);        
        strncpy(self->data.FutureID, TransferHeaderField_FutureID, sizeof(self->data.FutureID) );
        TransferHeaderField_FutureID = NULL;
    }
            
    ///银行代码，根据查询银行得到，必填
    // TThostFtdcBankIDType char[4]
    if( TransferHeaderField_BankID != NULL ) {
        if(TransferHeaderField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", TransferHeaderField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, TransferHeaderField_BankID, TransferHeaderField_BankID_len);        
        strncpy(self->data.BankID, TransferHeaderField_BankID, sizeof(self->data.BankID) );
        TransferHeaderField_BankID = NULL;
    }
            
    ///银行分中心代码，根据查询银行得到，必填
    // TThostFtdcBankBrchIDType char[5]
    if( TransferHeaderField_BankBrchID != NULL ) {
        if(TransferHeaderField_BankBrchID_len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is %zd)", TransferHeaderField_BankBrchID_len, (Py_ssize_t)sizeof(self->data.BankBrchID));
            return -1;
        }
        // memset(self->data.BankBrchID, 0, sizeof(self->data.BankBrchID));
        // memcpy(self->data.BankBrchID, TransferHeaderField_BankBrchID, TransferHeaderField_BankBrchID_len);        
        strncpy(self->data.BankBrchID, TransferHeaderField_BankBrchID, sizeof(self->data.BankBrchID) );
        TransferHeaderField_BankBrchID = NULL;
    }
            
    ///操作员，N/A
    // TThostFtdcOperNoType char[17]
    if( TransferHeaderField_OperNo != NULL ) {
        if(TransferHeaderField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", TransferHeaderField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
            return -1;
        }
        // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
        // memcpy(self->data.OperNo, TransferHeaderField_OperNo, TransferHeaderField_OperNo_len);        
        strncpy(self->data.OperNo, TransferHeaderField_OperNo, sizeof(self->data.OperNo) );
        TransferHeaderField_OperNo = NULL;
    }
            
    ///交易设备类型，N/A
    // TThostFtdcDeviceIDType char[3]
    if( TransferHeaderField_DeviceID != NULL ) {
        if(TransferHeaderField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", TransferHeaderField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
            return -1;
        }
        // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
        // memcpy(self->data.DeviceID, TransferHeaderField_DeviceID, TransferHeaderField_DeviceID_len);        
        strncpy(self->data.DeviceID, TransferHeaderField_DeviceID, sizeof(self->data.DeviceID) );
        TransferHeaderField_DeviceID = NULL;
    }
            
    ///记录数，N/A
    // TThostFtdcRecordNumType char[7]
    if( TransferHeaderField_RecordNum != NULL ) {
        if(TransferHeaderField_RecordNum_len > (Py_ssize_t)sizeof(self->data.RecordNum)) {
            PyErr_Format(PyExc_ValueError, "RecordNum too long: length=%zd (max allowed is %zd)", TransferHeaderField_RecordNum_len, (Py_ssize_t)sizeof(self->data.RecordNum));
            return -1;
        }
        // memset(self->data.RecordNum, 0, sizeof(self->data.RecordNum));
        // memcpy(self->data.RecordNum, TransferHeaderField_RecordNum, TransferHeaderField_RecordNum_len);        
        strncpy(self->data.RecordNum, TransferHeaderField_RecordNum, sizeof(self->data.RecordNum) );
        TransferHeaderField_RecordNum = NULL;
    }
            
    ///会话编号，N/A
    // TThostFtdcSessionIDType int
    self->data.SessionID = TransferHeaderField_SessionID;
        
    ///请求编号，N/A
    // TThostFtdcRequestIDType int
    self->data.RequestID = TransferHeaderField_RequestID;
        

    return 0;
}

static void PyCThostFtdcTransferHeaderField_dealloc(PyCThostFtdcTransferHeaderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferHeaderField_repr(PyCThostFtdcTransferHeaderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i}"
#endif

        ,"Version", self->data.Version//, (Py_ssize_t)sizeof(self->data.Version) 
        ,"TradeCode", self->data.TradeCode//, (Py_ssize_t)sizeof(self->data.TradeCode) 
        ,"TradeDate", self->data.TradeDate//, (Py_ssize_t)sizeof(self->data.TradeDate) 
        ,"TradeTime", self->data.TradeTime//, (Py_ssize_t)sizeof(self->data.TradeTime) 
        ,"TradeSerial", self->data.TradeSerial//, (Py_ssize_t)sizeof(self->data.TradeSerial) 
        ,"FutureID", self->data.FutureID//, (Py_ssize_t)sizeof(self->data.FutureID) 
        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"BankBrchID", self->data.BankBrchID//, (Py_ssize_t)sizeof(self->data.BankBrchID) 
        ,"OperNo", self->data.OperNo//, (Py_ssize_t)sizeof(self->data.OperNo) 
        ,"DeviceID", self->data.DeviceID//, (Py_ssize_t)sizeof(self->data.DeviceID) 
        ,"RecordNum", self->data.RecordNum//, (Py_ssize_t)sizeof(self->data.RecordNum) 
        ,"SessionID", self->data.SessionID 
        ,"RequestID", self->data.RequestID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferHeaderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///版本号，常量，1.0
// TThostFtdcVersionType char[4]
static PyObject *PyCThostFtdcTransferHeaderField_get_Version(PyCThostFtdcTransferHeaderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Version, (Py_ssize_t)sizeof(self->data.Version));
    return PyBytes_FromString(self->data.Version);
}

///版本号，常量，1.0
// TThostFtdcVersionType char[4]
static int PyCThostFtdcTransferHeaderField_set_Version(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Version Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Version)) {
        PyErr_SetString(PyExc_ValueError, "Version must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.Version, 0, sizeof(self->data.Version));
    // memcpy(self->data.Version, buf, len);
    strncpy(self->data.Version, buf, sizeof(self->data.Version));
    return 0;
}
            
///交易代码，必填
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcTransferHeaderField_get_TradeCode(PyCThostFtdcTransferHeaderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///交易代码，必填
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcTransferHeaderField_set_TradeCode(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 7 bytes");
        return -1;
    }
    // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
    // memcpy(self->data.TradeCode, buf, len);
    strncpy(self->data.TradeCode, buf, sizeof(self->data.TradeCode));
    return 0;
}
            
///交易日期，必填，格式：yyyymmdd
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcTransferHeaderField_get_TradeDate(PyCThostFtdcTransferHeaderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期，必填，格式：yyyymmdd
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcTransferHeaderField_set_TradeDate(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
    // memcpy(self->data.TradeDate, buf, len);
    strncpy(self->data.TradeDate, buf, sizeof(self->data.TradeDate));
    return 0;
}
            
///交易时间，必填，格式：hhmmss
// TThostFtdcTradeTimeType char[9]
static PyObject *PyCThostFtdcTransferHeaderField_get_TradeTime(PyCThostFtdcTransferHeaderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间，必填，格式：hhmmss
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcTransferHeaderField_set_TradeTime(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
    // memcpy(self->data.TradeTime, buf, len);
    strncpy(self->data.TradeTime, buf, sizeof(self->data.TradeTime));
    return 0;
}
            
///发起方流水号，N/A
// TThostFtdcTradeSerialType char[9]
static PyObject *PyCThostFtdcTransferHeaderField_get_TradeSerial(PyCThostFtdcTransferHeaderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeSerial, (Py_ssize_t)sizeof(self->data.TradeSerial));
    return PyBytes_FromString(self->data.TradeSerial);
}

///发起方流水号，N/A
// TThostFtdcTradeSerialType char[9]
static int PyCThostFtdcTransferHeaderField_set_TradeSerial(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeSerial Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeSerial)) {
        PyErr_SetString(PyExc_ValueError, "TradeSerial must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeSerial, 0, sizeof(self->data.TradeSerial));
    // memcpy(self->data.TradeSerial, buf, len);
    strncpy(self->data.TradeSerial, buf, sizeof(self->data.TradeSerial));
    return 0;
}
            
///期货公司代码，必填
// TThostFtdcFutureIDType char[11]
static PyObject *PyCThostFtdcTransferHeaderField_get_FutureID(PyCThostFtdcTransferHeaderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureID, (Py_ssize_t)sizeof(self->data.FutureID));
    return PyBytes_FromString(self->data.FutureID);
}

///期货公司代码，必填
// TThostFtdcFutureIDType char[11]
static int PyCThostFtdcTransferHeaderField_set_FutureID(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FutureID)) {
        PyErr_SetString(PyExc_ValueError, "FutureID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.FutureID, 0, sizeof(self->data.FutureID));
    // memcpy(self->data.FutureID, buf, len);
    strncpy(self->data.FutureID, buf, sizeof(self->data.FutureID));
    return 0;
}
            
///银行代码，根据查询银行得到，必填
// TThostFtdcBankIDType char[4]
static PyObject *PyCThostFtdcTransferHeaderField_get_BankID(PyCThostFtdcTransferHeaderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码，根据查询银行得到，必填
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcTransferHeaderField_set_BankID(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.BankID, 0, sizeof(self->data.BankID));
    // memcpy(self->data.BankID, buf, len);
    strncpy(self->data.BankID, buf, sizeof(self->data.BankID));
    return 0;
}
            
///银行分中心代码，根据查询银行得到，必填
// TThostFtdcBankBrchIDType char[5]
static PyObject *PyCThostFtdcTransferHeaderField_get_BankBrchID(PyCThostFtdcTransferHeaderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBrchID, (Py_ssize_t)sizeof(self->data.BankBrchID));
    return PyBytes_FromString(self->data.BankBrchID);
}

///银行分中心代码，根据查询银行得到，必填
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcTransferHeaderField_set_BankBrchID(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankBrchID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBrchID must be less than 5 bytes");
        return -1;
    }
    // memset(self->data.BankBrchID, 0, sizeof(self->data.BankBrchID));
    // memcpy(self->data.BankBrchID, buf, len);
    strncpy(self->data.BankBrchID, buf, sizeof(self->data.BankBrchID));
    return 0;
}
            
///操作员，N/A
// TThostFtdcOperNoType char[17]
static PyObject *PyCThostFtdcTransferHeaderField_get_OperNo(PyCThostFtdcTransferHeaderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OperNo, (Py_ssize_t)sizeof(self->data.OperNo));
    return PyBytes_FromString(self->data.OperNo);
}

///操作员，N/A
// TThostFtdcOperNoType char[17]
static int PyCThostFtdcTransferHeaderField_set_OperNo(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.OperNo, 0, sizeof(self->data.OperNo));
    // memcpy(self->data.OperNo, buf, len);
    strncpy(self->data.OperNo, buf, sizeof(self->data.OperNo));
    return 0;
}
            
///交易设备类型，N/A
// TThostFtdcDeviceIDType char[3]
static PyObject *PyCThostFtdcTransferHeaderField_get_DeviceID(PyCThostFtdcTransferHeaderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DeviceID, (Py_ssize_t)sizeof(self->data.DeviceID));
    return PyBytes_FromString(self->data.DeviceID);
}

///交易设备类型，N/A
// TThostFtdcDeviceIDType char[3]
static int PyCThostFtdcTransferHeaderField_set_DeviceID(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 3 bytes");
        return -1;
    }
    // memset(self->data.DeviceID, 0, sizeof(self->data.DeviceID));
    // memcpy(self->data.DeviceID, buf, len);
    strncpy(self->data.DeviceID, buf, sizeof(self->data.DeviceID));
    return 0;
}
            
///记录数，N/A
// TThostFtdcRecordNumType char[7]
static PyObject *PyCThostFtdcTransferHeaderField_get_RecordNum(PyCThostFtdcTransferHeaderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RecordNum, (Py_ssize_t)sizeof(self->data.RecordNum));
    return PyBytes_FromString(self->data.RecordNum);
}

///记录数，N/A
// TThostFtdcRecordNumType char[7]
static int PyCThostFtdcTransferHeaderField_set_RecordNum(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RecordNum Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.RecordNum)) {
        PyErr_SetString(PyExc_ValueError, "RecordNum must be less than 7 bytes");
        return -1;
    }
    // memset(self->data.RecordNum, 0, sizeof(self->data.RecordNum));
    // memcpy(self->data.RecordNum, buf, len);
    strncpy(self->data.RecordNum, buf, sizeof(self->data.RecordNum));
    return 0;
}
            
///会话编号，N/A
// TThostFtdcSessionIDType int
static PyObject *PyCThostFtdcTransferHeaderField_get_SessionID(PyCThostFtdcTransferHeaderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号，N/A
// TThostFtdcSessionIDType int
static int PyCThostFtdcTransferHeaderField_set_SessionID(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the SessionID value out of range for C int");
        return -1;
    }
    self->data.SessionID = (int)buf;
    return 0;
}
        
///请求编号，N/A
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcTransferHeaderField_get_RequestID(PyCThostFtdcTransferHeaderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号，N/A
// TThostFtdcRequestIDType int
static int PyCThostFtdcTransferHeaderField_set_RequestID(PyCThostFtdcTransferHeaderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the RequestID value out of range for C int");
        return -1;
    }
    self->data.RequestID = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcTransferHeaderField_getset[] = {
    ///版本号，常量，1.0 
    {(char *)"Version", (getter)PyCThostFtdcTransferHeaderField_get_Version, (setter)PyCThostFtdcTransferHeaderField_set_Version, (char *)"Version", NULL},
    ///交易代码，必填 
    {(char *)"TradeCode", (getter)PyCThostFtdcTransferHeaderField_get_TradeCode, (setter)PyCThostFtdcTransferHeaderField_set_TradeCode, (char *)"TradeCode", NULL},
    ///交易日期，必填，格式：yyyymmdd 
    {(char *)"TradeDate", (getter)PyCThostFtdcTransferHeaderField_get_TradeDate, (setter)PyCThostFtdcTransferHeaderField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间，必填，格式：hhmmss 
    {(char *)"TradeTime", (getter)PyCThostFtdcTransferHeaderField_get_TradeTime, (setter)PyCThostFtdcTransferHeaderField_set_TradeTime, (char *)"TradeTime", NULL},
    ///发起方流水号，N/A 
    {(char *)"TradeSerial", (getter)PyCThostFtdcTransferHeaderField_get_TradeSerial, (setter)PyCThostFtdcTransferHeaderField_set_TradeSerial, (char *)"TradeSerial", NULL},
    ///期货公司代码，必填 
    {(char *)"FutureID", (getter)PyCThostFtdcTransferHeaderField_get_FutureID, (setter)PyCThostFtdcTransferHeaderField_set_FutureID, (char *)"FutureID", NULL},
    ///银行代码，根据查询银行得到，必填 
    {(char *)"BankID", (getter)PyCThostFtdcTransferHeaderField_get_BankID, (setter)PyCThostFtdcTransferHeaderField_set_BankID, (char *)"BankID", NULL},
    ///银行分中心代码，根据查询银行得到，必填 
    {(char *)"BankBrchID", (getter)PyCThostFtdcTransferHeaderField_get_BankBrchID, (setter)PyCThostFtdcTransferHeaderField_set_BankBrchID, (char *)"BankBrchID", NULL},
    ///操作员，N/A 
    {(char *)"OperNo", (getter)PyCThostFtdcTransferHeaderField_get_OperNo, (setter)PyCThostFtdcTransferHeaderField_set_OperNo, (char *)"OperNo", NULL},
    ///交易设备类型，N/A 
    {(char *)"DeviceID", (getter)PyCThostFtdcTransferHeaderField_get_DeviceID, (setter)PyCThostFtdcTransferHeaderField_set_DeviceID, (char *)"DeviceID", NULL},
    ///记录数，N/A 
    {(char *)"RecordNum", (getter)PyCThostFtdcTransferHeaderField_get_RecordNum, (setter)PyCThostFtdcTransferHeaderField_set_RecordNum, (char *)"RecordNum", NULL},
    ///会话编号，N/A 
    {(char *)"SessionID", (getter)PyCThostFtdcTransferHeaderField_get_SessionID, (setter)PyCThostFtdcTransferHeaderField_set_SessionID, (char *)"SessionID", NULL},
    ///请求编号，N/A 
    {(char *)"RequestID", (getter)PyCThostFtdcTransferHeaderField_get_RequestID, (setter)PyCThostFtdcTransferHeaderField_set_RequestID, (char *)"RequestID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferHeaderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferHeaderField",	/* tp_name */
	sizeof(PyCThostFtdcTransferHeaderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferHeaderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferHeaderField_repr,   /* tp_repr */
	0,                          /* tp_as_number */
	0,                          /* tp_as_sequence */
	0,                          /* tp_as_mapping */
	0,                          /* tp_hash  */
	0,                          /* tp_call */
	0,                          /* tp_str */
	0,                          /* tp_getattro */
	0,                          /* tp_setattro */
	0,                          /* tp_as_buffer */
	Py_TPFLAGS_DEFAULT,         /* tp_flags */
	"CThostFtdcTransferHeaderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferHeaderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferHeaderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferHeaderField_new,       /* tp_new */
};

int PyCThostFtdcTransferHeaderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferHeaderField  */
	if (PyType_Ready(&PyCThostFtdcTransferHeaderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferHeaderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferHeaderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferHeaderField", (PyObject *)&PyCThostFtdcTransferHeaderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferHeaderField to module");
        Py_DECREF(&PyCThostFtdcTransferHeaderFieldType);
		return -1;
    }

    return 0;
}
