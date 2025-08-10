
#include "PyCThostFtdcReqDayEndFileReadyField.h"

///日终文件就绪请求

static PyObject *PyCThostFtdcReqDayEndFileReadyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqDayEndFileReadyField *self = (PyCThostFtdcReqDayEndFileReadyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqDayEndFileReadyField_init(PyCThostFtdcReqDayEndFileReadyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "FileBusinessCode", "Digest",  NULL};


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    const char *ReqDayEndFileReadyField_TradeCode = NULL;
    Py_ssize_t ReqDayEndFileReadyField_TradeCode_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ReqDayEndFileReadyField_BankID = NULL;
    Py_ssize_t ReqDayEndFileReadyField_BankID_len = 0;
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ReqDayEndFileReadyField_BankBranchID = NULL;
    Py_ssize_t ReqDayEndFileReadyField_BankBranchID_len = 0;
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqDayEndFileReadyField_BrokerID = NULL;
    Py_ssize_t ReqDayEndFileReadyField_BrokerID_len = 0;
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    const char *ReqDayEndFileReadyField_BrokerBranchID = NULL;
    Py_ssize_t ReqDayEndFileReadyField_BrokerBranchID_len = 0;
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqDayEndFileReadyField_TradeDate = NULL;
    Py_ssize_t ReqDayEndFileReadyField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *ReqDayEndFileReadyField_TradeTime = NULL;
    Py_ssize_t ReqDayEndFileReadyField_TradeTime_len = 0;
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    const char *ReqDayEndFileReadyField_BankSerial = NULL;
    Py_ssize_t ReqDayEndFileReadyField_BankSerial_len = 0;
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    const char *ReqDayEndFileReadyField_TradingDay = NULL;
    Py_ssize_t ReqDayEndFileReadyField_TradingDay_len = 0;
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    int ReqDayEndFileReadyField_PlateSerial = 0;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    char ReqDayEndFileReadyField_LastFragment = 0;
            
    ///会话号
    // TThostFtdcSessionIDType int
    int ReqDayEndFileReadyField_SessionID = 0;
        
    ///文件业务功能
    // TThostFtdcFileBusinessCodeType char
    char ReqDayEndFileReadyField_FileBusinessCode = 0;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    const char *ReqDayEndFileReadyField_Digest = NULL;
    Py_ssize_t ReqDayEndFileReadyField_Digest_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#icicy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icics#", (char **)kwlist
#endif

        , &ReqDayEndFileReadyField_TradeCode, &ReqDayEndFileReadyField_TradeCode_len 
        , &ReqDayEndFileReadyField_BankID, &ReqDayEndFileReadyField_BankID_len 
        , &ReqDayEndFileReadyField_BankBranchID, &ReqDayEndFileReadyField_BankBranchID_len 
        , &ReqDayEndFileReadyField_BrokerID, &ReqDayEndFileReadyField_BrokerID_len 
        , &ReqDayEndFileReadyField_BrokerBranchID, &ReqDayEndFileReadyField_BrokerBranchID_len 
        , &ReqDayEndFileReadyField_TradeDate, &ReqDayEndFileReadyField_TradeDate_len 
        , &ReqDayEndFileReadyField_TradeTime, &ReqDayEndFileReadyField_TradeTime_len 
        , &ReqDayEndFileReadyField_BankSerial, &ReqDayEndFileReadyField_BankSerial_len 
        , &ReqDayEndFileReadyField_TradingDay, &ReqDayEndFileReadyField_TradingDay_len 
        , &ReqDayEndFileReadyField_PlateSerial 
        , &ReqDayEndFileReadyField_LastFragment 
        , &ReqDayEndFileReadyField_SessionID 
        , &ReqDayEndFileReadyField_FileBusinessCode 
        , &ReqDayEndFileReadyField_Digest, &ReqDayEndFileReadyField_Digest_len 


    )) {
        return -1;
    }


    ///业务功能码
    // TThostFtdcTradeCodeType char[7]
    if( ReqDayEndFileReadyField_TradeCode != NULL ) {
        if(ReqDayEndFileReadyField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", ReqDayEndFileReadyField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, ReqDayEndFileReadyField_TradeCode, ReqDayEndFileReadyField_TradeCode_len);        
        strncpy(self->data.TradeCode, ReqDayEndFileReadyField_TradeCode, sizeof(self->data.TradeCode) );
        ReqDayEndFileReadyField_TradeCode = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ReqDayEndFileReadyField_BankID != NULL ) {
        if(ReqDayEndFileReadyField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ReqDayEndFileReadyField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ReqDayEndFileReadyField_BankID, ReqDayEndFileReadyField_BankID_len);        
        strncpy(self->data.BankID, ReqDayEndFileReadyField_BankID, sizeof(self->data.BankID) );
        ReqDayEndFileReadyField_BankID = NULL;
    }
            
    ///银行分支机构代码
    // TThostFtdcBankBrchIDType char[5]
    if( ReqDayEndFileReadyField_BankBranchID != NULL ) {
        if(ReqDayEndFileReadyField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", ReqDayEndFileReadyField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
            return -1;
        }
        // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
        // memcpy(self->data.BankBranchID, ReqDayEndFileReadyField_BankBranchID, ReqDayEndFileReadyField_BankBranchID_len);        
        strncpy(self->data.BankBranchID, ReqDayEndFileReadyField_BankBranchID, sizeof(self->data.BankBranchID) );
        ReqDayEndFileReadyField_BankBranchID = NULL;
    }
            
    ///期商代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqDayEndFileReadyField_BrokerID != NULL ) {
        if(ReqDayEndFileReadyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqDayEndFileReadyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqDayEndFileReadyField_BrokerID, ReqDayEndFileReadyField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqDayEndFileReadyField_BrokerID, sizeof(self->data.BrokerID) );
        ReqDayEndFileReadyField_BrokerID = NULL;
    }
            
    ///期商分支机构代码
    // TThostFtdcFutureBranchIDType char[31]
    if( ReqDayEndFileReadyField_BrokerBranchID != NULL ) {
        if(ReqDayEndFileReadyField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", ReqDayEndFileReadyField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
            return -1;
        }
        // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
        // memcpy(self->data.BrokerBranchID, ReqDayEndFileReadyField_BrokerBranchID, ReqDayEndFileReadyField_BrokerBranchID_len);        
        strncpy(self->data.BrokerBranchID, ReqDayEndFileReadyField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
        ReqDayEndFileReadyField_BrokerBranchID = NULL;
    }
            
    ///交易日期
    // TThostFtdcTradeDateType char[9]
    if( ReqDayEndFileReadyField_TradeDate != NULL ) {
        if(ReqDayEndFileReadyField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ReqDayEndFileReadyField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ReqDayEndFileReadyField_TradeDate, ReqDayEndFileReadyField_TradeDate_len);        
        strncpy(self->data.TradeDate, ReqDayEndFileReadyField_TradeDate, sizeof(self->data.TradeDate) );
        ReqDayEndFileReadyField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( ReqDayEndFileReadyField_TradeTime != NULL ) {
        if(ReqDayEndFileReadyField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ReqDayEndFileReadyField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ReqDayEndFileReadyField_TradeTime, ReqDayEndFileReadyField_TradeTime_len);        
        strncpy(self->data.TradeTime, ReqDayEndFileReadyField_TradeTime, sizeof(self->data.TradeTime) );
        ReqDayEndFileReadyField_TradeTime = NULL;
    }
            
    ///银行流水号
    // TThostFtdcBankSerialType char[13]
    if( ReqDayEndFileReadyField_BankSerial != NULL ) {
        if(ReqDayEndFileReadyField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", ReqDayEndFileReadyField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
            return -1;
        }
        // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
        // memcpy(self->data.BankSerial, ReqDayEndFileReadyField_BankSerial, ReqDayEndFileReadyField_BankSerial_len);        
        strncpy(self->data.BankSerial, ReqDayEndFileReadyField_BankSerial, sizeof(self->data.BankSerial) );
        ReqDayEndFileReadyField_BankSerial = NULL;
    }
            
    ///交易系统日期
    // TThostFtdcTradeDateType char[9]
    if( ReqDayEndFileReadyField_TradingDay != NULL ) {
        if(ReqDayEndFileReadyField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqDayEndFileReadyField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqDayEndFileReadyField_TradingDay, ReqDayEndFileReadyField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqDayEndFileReadyField_TradingDay, sizeof(self->data.TradingDay) );
        ReqDayEndFileReadyField_TradingDay = NULL;
    }
            
    ///银期平台消息流水号
    // TThostFtdcSerialType int
    self->data.PlateSerial = ReqDayEndFileReadyField_PlateSerial;
        
    ///最后分片标志
    // TThostFtdcLastFragmentType char
    self->data.LastFragment = ReqDayEndFileReadyField_LastFragment;
            
    ///会话号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ReqDayEndFileReadyField_SessionID;
        
    ///文件业务功能
    // TThostFtdcFileBusinessCodeType char
    self->data.FileBusinessCode = ReqDayEndFileReadyField_FileBusinessCode;
            
    ///摘要
    // TThostFtdcDigestType char[36]
    if( ReqDayEndFileReadyField_Digest != NULL ) {
        if(ReqDayEndFileReadyField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", ReqDayEndFileReadyField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
            return -1;
        }
        // memset(self->data.Digest, 0, sizeof(self->data.Digest));
        // memcpy(self->data.Digest, ReqDayEndFileReadyField_Digest, ReqDayEndFileReadyField_Digest_len);        
        strncpy(self->data.Digest, ReqDayEndFileReadyField_Digest, sizeof(self->data.Digest) );
        ReqDayEndFileReadyField_Digest = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqDayEndFileReadyField_dealloc(PyCThostFtdcReqDayEndFileReadyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_repr(PyCThostFtdcReqDayEndFileReadyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:c,s:s}"
#endif

        ,"TradeCode", self->data.TradeCode//, (Py_ssize_t)sizeof(self->data.TradeCode) 
        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"BankBranchID", self->data.BankBranchID//, (Py_ssize_t)sizeof(self->data.BankBranchID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"BrokerBranchID", self->data.BrokerBranchID//, (Py_ssize_t)sizeof(self->data.BrokerBranchID) 
        ,"TradeDate", self->data.TradeDate//, (Py_ssize_t)sizeof(self->data.TradeDate) 
        ,"TradeTime", self->data.TradeTime//, (Py_ssize_t)sizeof(self->data.TradeTime) 
        ,"BankSerial", self->data.BankSerial//, (Py_ssize_t)sizeof(self->data.BankSerial) 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"PlateSerial", self->data.PlateSerial 
        ,"LastFragment", self->data.LastFragment 
        ,"SessionID", self->data.SessionID 
        ,"FileBusinessCode", self->data.FileBusinessCode 
        ,"Digest", self->data.Digest//, (Py_ssize_t)sizeof(self->data.Digest) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqDayEndFileReadyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///业务功能码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_TradeCode(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///业务功能码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcReqDayEndFileReadyField_set_TradeCode(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
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
            
///银行代码
// TThostFtdcBankIDType char[4]
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_BankID(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcReqDayEndFileReadyField_set_BankID(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
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
            
///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_BankBranchID(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBranchID, (Py_ssize_t)sizeof(self->data.BankBranchID));
    return PyBytes_FromString(self->data.BankBranchID);
}

///银行分支机构代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcReqDayEndFileReadyField_set_BankBranchID(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 5 bytes");
        return -1;
    }
    // memset(self->data.BankBranchID, 0, sizeof(self->data.BankBranchID));
    // memcpy(self->data.BankBranchID, buf, len);
    strncpy(self->data.BankBranchID, buf, sizeof(self->data.BankBranchID));
    return 0;
}
            
///期商代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_BrokerID(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///期商代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqDayEndFileReadyField_set_BrokerID(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
    // memcpy(self->data.BrokerID, buf, len);
    strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
    return 0;
}
            
///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_BrokerBranchID(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerBranchID, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
    return PyBytes_FromString(self->data.BrokerBranchID);
}

///期商分支机构代码
// TThostFtdcFutureBranchIDType char[31]
static int PyCThostFtdcReqDayEndFileReadyField_set_BrokerBranchID(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.BrokerBranchID, 0, sizeof(self->data.BrokerBranchID));
    // memcpy(self->data.BrokerBranchID, buf, len);
    strncpy(self->data.BrokerBranchID, buf, sizeof(self->data.BrokerBranchID));
    return 0;
}
            
///交易日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_TradeDate(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqDayEndFileReadyField_set_TradeDate(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
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
            
///交易时间
// TThostFtdcTradeTimeType char[9]
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_TradeTime(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcReqDayEndFileReadyField_set_TradeTime(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
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
            
///银行流水号
// TThostFtdcBankSerialType char[13]
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_BankSerial(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankSerial, (Py_ssize_t)sizeof(self->data.BankSerial));
    return PyBytes_FromString(self->data.BankSerial);
}

///银行流水号
// TThostFtdcBankSerialType char[13]
static int PyCThostFtdcReqDayEndFileReadyField_set_BankSerial(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.BankSerial, 0, sizeof(self->data.BankSerial));
    // memcpy(self->data.BankSerial, buf, len);
    strncpy(self->data.BankSerial, buf, sizeof(self->data.BankSerial));
    return 0;
}
            
///交易系统日期
// TThostFtdcTradeDateType char[9]
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_TradingDay(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易系统日期
// TThostFtdcTradeDateType char[9]
static int PyCThostFtdcReqDayEndFileReadyField_set_TradingDay(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///银期平台消息流水号
// TThostFtdcSerialType int
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_PlateSerial(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PlateSerial);
#else
    return PyInt_FromLong(self->data.PlateSerial);
#endif
}

///银期平台消息流水号
// TThostFtdcSerialType int
static int PyCThostFtdcReqDayEndFileReadyField_set_PlateSerial(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PlateSerial Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PlateSerial Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the PlateSerial value out of range for C int");
        return -1;
    }
    self->data.PlateSerial = (int)buf;
    return 0;
}
        
///最后分片标志
// TThostFtdcLastFragmentType char
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_LastFragment(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

///最后分片标志
// TThostFtdcLastFragmentType char
static int PyCThostFtdcReqDayEndFileReadyField_set_LastFragment(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    self->data.LastFragment = *buf;
    return 0;
}
            
///会话号
// TThostFtdcSessionIDType int
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_SessionID(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话号
// TThostFtdcSessionIDType int
static int PyCThostFtdcReqDayEndFileReadyField_set_SessionID(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
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
        
///文件业务功能
// TThostFtdcFileBusinessCodeType char
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_FileBusinessCode(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.FileBusinessCode), 1);
}

///文件业务功能
// TThostFtdcFileBusinessCodeType char
static int PyCThostFtdcReqDayEndFileReadyField_set_FileBusinessCode(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FileBusinessCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FileBusinessCode)) {
        PyErr_SetString(PyExc_ValueError, "FileBusinessCode must be equal 1 bytes");
        return -1;
    }
    self->data.FileBusinessCode = *buf;
    return 0;
}
            
///摘要
// TThostFtdcDigestType char[36]
static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_Digest(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Digest, (Py_ssize_t)sizeof(self->data.Digest));
    return PyBytes_FromString(self->data.Digest);
}

///摘要
// TThostFtdcDigestType char[36]
static int PyCThostFtdcReqDayEndFileReadyField_set_Digest(PyCThostFtdcReqDayEndFileReadyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 36 bytes");
        return -1;
    }
    // memset(self->data.Digest, 0, sizeof(self->data.Digest));
    // memcpy(self->data.Digest, buf, len);
    strncpy(self->data.Digest, buf, sizeof(self->data.Digest));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcReqDayEndFileReadyField_getset[] = {
    ///业务功能码 
    {(char *)"TradeCode", (getter)PyCThostFtdcReqDayEndFileReadyField_get_TradeCode, (setter)PyCThostFtdcReqDayEndFileReadyField_set_TradeCode, (char *)"TradeCode", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcReqDayEndFileReadyField_get_BankID, (setter)PyCThostFtdcReqDayEndFileReadyField_set_BankID, (char *)"BankID", NULL},
    ///银行分支机构代码 
    {(char *)"BankBranchID", (getter)PyCThostFtdcReqDayEndFileReadyField_get_BankBranchID, (setter)PyCThostFtdcReqDayEndFileReadyField_set_BankBranchID, (char *)"BankBranchID", NULL},
    ///期商代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqDayEndFileReadyField_get_BrokerID, (setter)PyCThostFtdcReqDayEndFileReadyField_set_BrokerID, (char *)"BrokerID", NULL},
    ///期商分支机构代码 
    {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqDayEndFileReadyField_get_BrokerBranchID, (setter)PyCThostFtdcReqDayEndFileReadyField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcReqDayEndFileReadyField_get_TradeDate, (setter)PyCThostFtdcReqDayEndFileReadyField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcReqDayEndFileReadyField_get_TradeTime, (setter)PyCThostFtdcReqDayEndFileReadyField_set_TradeTime, (char *)"TradeTime", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcReqDayEndFileReadyField_get_BankSerial, (setter)PyCThostFtdcReqDayEndFileReadyField_set_BankSerial, (char *)"BankSerial", NULL},
    ///交易系统日期 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqDayEndFileReadyField_get_TradingDay, (setter)PyCThostFtdcReqDayEndFileReadyField_set_TradingDay, (char *)"TradingDay", NULL},
    ///银期平台消息流水号 
    {(char *)"PlateSerial", (getter)PyCThostFtdcReqDayEndFileReadyField_get_PlateSerial, (setter)PyCThostFtdcReqDayEndFileReadyField_set_PlateSerial, (char *)"PlateSerial", NULL},
    ///最后分片标志 
    {(char *)"LastFragment", (getter)PyCThostFtdcReqDayEndFileReadyField_get_LastFragment, (setter)PyCThostFtdcReqDayEndFileReadyField_set_LastFragment, (char *)"LastFragment", NULL},
    ///会话号 
    {(char *)"SessionID", (getter)PyCThostFtdcReqDayEndFileReadyField_get_SessionID, (setter)PyCThostFtdcReqDayEndFileReadyField_set_SessionID, (char *)"SessionID", NULL},
    ///文件业务功能 
    {(char *)"FileBusinessCode", (getter)PyCThostFtdcReqDayEndFileReadyField_get_FileBusinessCode, (setter)PyCThostFtdcReqDayEndFileReadyField_set_FileBusinessCode, (char *)"FileBusinessCode", NULL},
    ///摘要 
    {(char *)"Digest", (getter)PyCThostFtdcReqDayEndFileReadyField_get_Digest, (setter)PyCThostFtdcReqDayEndFileReadyField_set_Digest, (char *)"Digest", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqDayEndFileReadyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqDayEndFileReadyField",	/* tp_name */
	sizeof(PyCThostFtdcReqDayEndFileReadyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqDayEndFileReadyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqDayEndFileReadyField_repr,   /* tp_repr */
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
	"CThostFtdcReqDayEndFileReadyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqDayEndFileReadyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqDayEndFileReadyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqDayEndFileReadyField_new,       /* tp_new */
};

int PyCThostFtdcReqDayEndFileReadyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqDayEndFileReadyField  */
	if (PyType_Ready(&PyCThostFtdcReqDayEndFileReadyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqDayEndFileReadyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqDayEndFileReadyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqDayEndFileReadyField", (PyObject *)&PyCThostFtdcReqDayEndFileReadyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqDayEndFileReadyField to module");
        Py_DECREF(&PyCThostFtdcReqDayEndFileReadyFieldType);
		return -1;
    }

    return 0;
}
