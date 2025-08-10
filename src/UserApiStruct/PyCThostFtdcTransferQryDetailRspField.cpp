
#include "PyCThostFtdcTransferQryDetailRspField.h"

///查询银行交易明细请求响应

static PyObject *PyCThostFtdcTransferQryDetailRspField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferQryDetailRspField *self = (PyCThostFtdcTransferQryDetailRspField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTransferQryDetailRspField_init(PyCThostFtdcTransferQryDetailRspField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeDate", "TradeTime", "TradeCode", "FutureSerial", "FutureID", "FutureAccount", "BankSerial", "BankID", "BankBrchID", "BankAccount", "CertCode", "CurrencyCode", "TxAmount", "Flag",  NULL};


    ///交易日期
    // TThostFtdcDateType char[9]
    const char *TransferQryDetailRspField_TradeDate = NULL;
    Py_ssize_t TransferQryDetailRspField_TradeDate_len = 0;
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    const char *TransferQryDetailRspField_TradeTime = NULL;
    Py_ssize_t TransferQryDetailRspField_TradeTime_len = 0;
            
    ///交易代码
    // TThostFtdcTradeCodeType char[7]
    const char *TransferQryDetailRspField_TradeCode = NULL;
    Py_ssize_t TransferQryDetailRspField_TradeCode_len = 0;
            
    ///期货流水号
    // TThostFtdcTradeSerialNoType int
    int TransferQryDetailRspField_FutureSerial = 0;
        
    ///期货公司代码
    // TThostFtdcFutureIDType char[11]
    const char *TransferQryDetailRspField_FutureID = NULL;
    Py_ssize_t TransferQryDetailRspField_FutureID_len = 0;
            
    ///资金帐号
    // TThostFtdcFutureAccountType char[22]
    const char *TransferQryDetailRspField_FutureAccount = NULL;
    Py_ssize_t TransferQryDetailRspField_FutureAccount_len = 0;
            
    ///银行流水号
    // TThostFtdcTradeSerialNoType int
    int TransferQryDetailRspField_BankSerial = 0;
        
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *TransferQryDetailRspField_BankID = NULL;
    Py_ssize_t TransferQryDetailRspField_BankID_len = 0;
            
    ///银行分中心代码
    // TThostFtdcBankBrchIDType char[5]
    const char *TransferQryDetailRspField_BankBrchID = NULL;
    Py_ssize_t TransferQryDetailRspField_BankBrchID_len = 0;
            
    ///银行账号
    // TThostFtdcBankAccountType char[41]
    const char *TransferQryDetailRspField_BankAccount = NULL;
    Py_ssize_t TransferQryDetailRspField_BankAccount_len = 0;
            
    ///证件号码
    // TThostFtdcCertCodeType char[21]
    const char *TransferQryDetailRspField_CertCode = NULL;
    Py_ssize_t TransferQryDetailRspField_CertCode_len = 0;
            
    ///货币代码
    // TThostFtdcCurrencyCodeType char[4]
    const char *TransferQryDetailRspField_CurrencyCode = NULL;
    Py_ssize_t TransferQryDetailRspField_CurrencyCode_len = 0;
            
    ///发生金额
    // TThostFtdcMoneyType double
    double TransferQryDetailRspField_TxAmount = 0.0;
        
    ///有效标志
    // TThostFtdcTransferValidFlagType char
    char TransferQryDetailRspField_Flag = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#y#iy#y#y#y#y#dc", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#s#is#s#s#s#s#dc", (char **)kwlist
#endif

        , &TransferQryDetailRspField_TradeDate, &TransferQryDetailRspField_TradeDate_len 
        , &TransferQryDetailRspField_TradeTime, &TransferQryDetailRspField_TradeTime_len 
        , &TransferQryDetailRspField_TradeCode, &TransferQryDetailRspField_TradeCode_len 
        , &TransferQryDetailRspField_FutureSerial 
        , &TransferQryDetailRspField_FutureID, &TransferQryDetailRspField_FutureID_len 
        , &TransferQryDetailRspField_FutureAccount, &TransferQryDetailRspField_FutureAccount_len 
        , &TransferQryDetailRspField_BankSerial 
        , &TransferQryDetailRspField_BankID, &TransferQryDetailRspField_BankID_len 
        , &TransferQryDetailRspField_BankBrchID, &TransferQryDetailRspField_BankBrchID_len 
        , &TransferQryDetailRspField_BankAccount, &TransferQryDetailRspField_BankAccount_len 
        , &TransferQryDetailRspField_CertCode, &TransferQryDetailRspField_CertCode_len 
        , &TransferQryDetailRspField_CurrencyCode, &TransferQryDetailRspField_CurrencyCode_len 
        , &TransferQryDetailRspField_TxAmount 
        , &TransferQryDetailRspField_Flag 


    )) {
        return -1;
    }


    ///交易日期
    // TThostFtdcDateType char[9]
    if( TransferQryDetailRspField_TradeDate != NULL ) {
        if(TransferQryDetailRspField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", TransferQryDetailRspField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, TransferQryDetailRspField_TradeDate, TransferQryDetailRspField_TradeDate_len);        
        strncpy(self->data.TradeDate, TransferQryDetailRspField_TradeDate, sizeof(self->data.TradeDate) );
        TransferQryDetailRspField_TradeDate = NULL;
    }
            
    ///交易时间
    // TThostFtdcTradeTimeType char[9]
    if( TransferQryDetailRspField_TradeTime != NULL ) {
        if(TransferQryDetailRspField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", TransferQryDetailRspField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, TransferQryDetailRspField_TradeTime, TransferQryDetailRspField_TradeTime_len);        
        strncpy(self->data.TradeTime, TransferQryDetailRspField_TradeTime, sizeof(self->data.TradeTime) );
        TransferQryDetailRspField_TradeTime = NULL;
    }
            
    ///交易代码
    // TThostFtdcTradeCodeType char[7]
    if( TransferQryDetailRspField_TradeCode != NULL ) {
        if(TransferQryDetailRspField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", TransferQryDetailRspField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
            return -1;
        }
        // memset(self->data.TradeCode, 0, sizeof(self->data.TradeCode));
        // memcpy(self->data.TradeCode, TransferQryDetailRspField_TradeCode, TransferQryDetailRspField_TradeCode_len);        
        strncpy(self->data.TradeCode, TransferQryDetailRspField_TradeCode, sizeof(self->data.TradeCode) );
        TransferQryDetailRspField_TradeCode = NULL;
    }
            
    ///期货流水号
    // TThostFtdcTradeSerialNoType int
    self->data.FutureSerial = TransferQryDetailRspField_FutureSerial;
        
    ///期货公司代码
    // TThostFtdcFutureIDType char[11]
    if( TransferQryDetailRspField_FutureID != NULL ) {
        if(TransferQryDetailRspField_FutureID_len > (Py_ssize_t)sizeof(self->data.FutureID)) {
            PyErr_Format(PyExc_ValueError, "FutureID too long: length=%zd (max allowed is %zd)", TransferQryDetailRspField_FutureID_len, (Py_ssize_t)sizeof(self->data.FutureID));
            return -1;
        }
        // memset(self->data.FutureID, 0, sizeof(self->data.FutureID));
        // memcpy(self->data.FutureID, TransferQryDetailRspField_FutureID, TransferQryDetailRspField_FutureID_len);        
        strncpy(self->data.FutureID, TransferQryDetailRspField_FutureID, sizeof(self->data.FutureID) );
        TransferQryDetailRspField_FutureID = NULL;
    }
            
    ///资金帐号
    // TThostFtdcFutureAccountType char[22]
    if( TransferQryDetailRspField_FutureAccount != NULL ) {
        if(TransferQryDetailRspField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", TransferQryDetailRspField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
            return -1;
        }
        // memset(self->data.FutureAccount, 0, sizeof(self->data.FutureAccount));
        // memcpy(self->data.FutureAccount, TransferQryDetailRspField_FutureAccount, TransferQryDetailRspField_FutureAccount_len);        
        strncpy(self->data.FutureAccount, TransferQryDetailRspField_FutureAccount, sizeof(self->data.FutureAccount) );
        TransferQryDetailRspField_FutureAccount = NULL;
    }
            
    ///银行流水号
    // TThostFtdcTradeSerialNoType int
    self->data.BankSerial = TransferQryDetailRspField_BankSerial;
        
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( TransferQryDetailRspField_BankID != NULL ) {
        if(TransferQryDetailRspField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", TransferQryDetailRspField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, TransferQryDetailRspField_BankID, TransferQryDetailRspField_BankID_len);        
        strncpy(self->data.BankID, TransferQryDetailRspField_BankID, sizeof(self->data.BankID) );
        TransferQryDetailRspField_BankID = NULL;
    }
            
    ///银行分中心代码
    // TThostFtdcBankBrchIDType char[5]
    if( TransferQryDetailRspField_BankBrchID != NULL ) {
        if(TransferQryDetailRspField_BankBrchID_len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is %zd)", TransferQryDetailRspField_BankBrchID_len, (Py_ssize_t)sizeof(self->data.BankBrchID));
            return -1;
        }
        // memset(self->data.BankBrchID, 0, sizeof(self->data.BankBrchID));
        // memcpy(self->data.BankBrchID, TransferQryDetailRspField_BankBrchID, TransferQryDetailRspField_BankBrchID_len);        
        strncpy(self->data.BankBrchID, TransferQryDetailRspField_BankBrchID, sizeof(self->data.BankBrchID) );
        TransferQryDetailRspField_BankBrchID = NULL;
    }
            
    ///银行账号
    // TThostFtdcBankAccountType char[41]
    if( TransferQryDetailRspField_BankAccount != NULL ) {
        if(TransferQryDetailRspField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", TransferQryDetailRspField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
            return -1;
        }
        // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
        // memcpy(self->data.BankAccount, TransferQryDetailRspField_BankAccount, TransferQryDetailRspField_BankAccount_len);        
        strncpy(self->data.BankAccount, TransferQryDetailRspField_BankAccount, sizeof(self->data.BankAccount) );
        TransferQryDetailRspField_BankAccount = NULL;
    }
            
    ///证件号码
    // TThostFtdcCertCodeType char[21]
    if( TransferQryDetailRspField_CertCode != NULL ) {
        if(TransferQryDetailRspField_CertCode_len > (Py_ssize_t)sizeof(self->data.CertCode)) {
            PyErr_Format(PyExc_ValueError, "CertCode too long: length=%zd (max allowed is %zd)", TransferQryDetailRspField_CertCode_len, (Py_ssize_t)sizeof(self->data.CertCode));
            return -1;
        }
        // memset(self->data.CertCode, 0, sizeof(self->data.CertCode));
        // memcpy(self->data.CertCode, TransferQryDetailRspField_CertCode, TransferQryDetailRspField_CertCode_len);        
        strncpy(self->data.CertCode, TransferQryDetailRspField_CertCode, sizeof(self->data.CertCode) );
        TransferQryDetailRspField_CertCode = NULL;
    }
            
    ///货币代码
    // TThostFtdcCurrencyCodeType char[4]
    if( TransferQryDetailRspField_CurrencyCode != NULL ) {
        if(TransferQryDetailRspField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", TransferQryDetailRspField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
            return -1;
        }
        // memset(self->data.CurrencyCode, 0, sizeof(self->data.CurrencyCode));
        // memcpy(self->data.CurrencyCode, TransferQryDetailRspField_CurrencyCode, TransferQryDetailRspField_CurrencyCode_len);        
        strncpy(self->data.CurrencyCode, TransferQryDetailRspField_CurrencyCode, sizeof(self->data.CurrencyCode) );
        TransferQryDetailRspField_CurrencyCode = NULL;
    }
            
    ///发生金额
    // TThostFtdcMoneyType double
    self->data.TxAmount = TransferQryDetailRspField_TxAmount;
        
    ///有效标志
    // TThostFtdcTransferValidFlagType char
    self->data.Flag = TransferQryDetailRspField_Flag;
            

    return 0;
}

static void PyCThostFtdcTransferQryDetailRspField_dealloc(PyCThostFtdcTransferQryDetailRspField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_repr(PyCThostFtdcTransferQryDetailRspField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:d,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:d,s:c}"
#endif

        ,"TradeDate", self->data.TradeDate//, (Py_ssize_t)sizeof(self->data.TradeDate) 
        ,"TradeTime", self->data.TradeTime//, (Py_ssize_t)sizeof(self->data.TradeTime) 
        ,"TradeCode", self->data.TradeCode//, (Py_ssize_t)sizeof(self->data.TradeCode) 
        ,"FutureSerial", self->data.FutureSerial 
        ,"FutureID", self->data.FutureID//, (Py_ssize_t)sizeof(self->data.FutureID) 
        ,"FutureAccount", self->data.FutureAccount//, (Py_ssize_t)sizeof(self->data.FutureAccount) 
        ,"BankSerial", self->data.BankSerial 
        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"BankBrchID", self->data.BankBrchID//, (Py_ssize_t)sizeof(self->data.BankBrchID) 
        ,"BankAccount", self->data.BankAccount//, (Py_ssize_t)sizeof(self->data.BankAccount) 
        ,"CertCode", self->data.CertCode//, (Py_ssize_t)sizeof(self->data.CertCode) 
        ,"CurrencyCode", self->data.CurrencyCode//, (Py_ssize_t)sizeof(self->data.CurrencyCode) 
        ,"TxAmount", self->data.TxAmount 
        ,"Flag", self->data.Flag 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryDetailRspField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_TradeDate(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///交易日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcTransferQryDetailRspField_set_TradeDate(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_TradeTime(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///交易时间
// TThostFtdcTradeTimeType char[9]
static int PyCThostFtdcTransferQryDetailRspField_set_TradeTime(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
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
            
///交易代码
// TThostFtdcTradeCodeType char[7]
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_TradeCode(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeCode, (Py_ssize_t)sizeof(self->data.TradeCode));
    return PyBytes_FromString(self->data.TradeCode);
}

///交易代码
// TThostFtdcTradeCodeType char[7]
static int PyCThostFtdcTransferQryDetailRspField_set_TradeCode(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
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
            
///期货流水号
// TThostFtdcTradeSerialNoType int
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_FutureSerial(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FutureSerial);
#else
    return PyInt_FromLong(self->data.FutureSerial);
#endif
}

///期货流水号
// TThostFtdcTradeSerialNoType int
static int PyCThostFtdcTransferQryDetailRspField_set_FutureSerial(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureSerial Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureSerial Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FutureSerial value out of range for C int");
        return -1;
    }
    self->data.FutureSerial = (int)buf;
    return 0;
}
        
///期货公司代码
// TThostFtdcFutureIDType char[11]
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_FutureID(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureID, (Py_ssize_t)sizeof(self->data.FutureID));
    return PyBytes_FromString(self->data.FutureID);
}

///期货公司代码
// TThostFtdcFutureIDType char[11]
static int PyCThostFtdcTransferQryDetailRspField_set_FutureID(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
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
            
///资金帐号
// TThostFtdcFutureAccountType char[22]
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_FutureAccount(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureAccount, (Py_ssize_t)sizeof(self->data.FutureAccount));
    return PyBytes_FromString(self->data.FutureAccount);
}

///资金帐号
// TThostFtdcFutureAccountType char[22]
static int PyCThostFtdcTransferQryDetailRspField_set_FutureAccount(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 22 bytes");
        return -1;
    }
    // memset(self->data.FutureAccount, 0, sizeof(self->data.FutureAccount));
    // memcpy(self->data.FutureAccount, buf, len);
    strncpy(self->data.FutureAccount, buf, sizeof(self->data.FutureAccount));
    return 0;
}
            
///银行流水号
// TThostFtdcTradeSerialNoType int
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_BankSerial(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BankSerial);
#else
    return PyInt_FromLong(self->data.BankSerial);
#endif
}

///银行流水号
// TThostFtdcTradeSerialNoType int
static int PyCThostFtdcTransferQryDetailRspField_set_BankSerial(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BankSerial value out of range for C int");
        return -1;
    }
    self->data.BankSerial = (int)buf;
    return 0;
}
        
///银行代码
// TThostFtdcBankIDType char[4]
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_BankID(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcTransferQryDetailRspField_set_BankID(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
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
            
///银行分中心代码
// TThostFtdcBankBrchIDType char[5]
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_BankBrchID(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBrchID, (Py_ssize_t)sizeof(self->data.BankBrchID));
    return PyBytes_FromString(self->data.BankBrchID);
}

///银行分中心代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcTransferQryDetailRspField_set_BankBrchID(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
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
            
///银行账号
// TThostFtdcBankAccountType char[41]
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_BankAccount(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankAccount, (Py_ssize_t)sizeof(self->data.BankAccount));
    return PyBytes_FromString(self->data.BankAccount);
}

///银行账号
// TThostFtdcBankAccountType char[41]
static int PyCThostFtdcTransferQryDetailRspField_set_BankAccount(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.BankAccount, 0, sizeof(self->data.BankAccount));
    // memcpy(self->data.BankAccount, buf, len);
    strncpy(self->data.BankAccount, buf, sizeof(self->data.BankAccount));
    return 0;
}
            
///证件号码
// TThostFtdcCertCodeType char[21]
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_CertCode(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CertCode, (Py_ssize_t)sizeof(self->data.CertCode));
    return PyBytes_FromString(self->data.CertCode);
}

///证件号码
// TThostFtdcCertCodeType char[21]
static int PyCThostFtdcTransferQryDetailRspField_set_CertCode(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CertCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CertCode)) {
        PyErr_SetString(PyExc_ValueError, "CertCode must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.CertCode, 0, sizeof(self->data.CertCode));
    // memcpy(self->data.CertCode, buf, len);
    strncpy(self->data.CertCode, buf, sizeof(self->data.CertCode));
    return 0;
}
            
///货币代码
// TThostFtdcCurrencyCodeType char[4]
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_CurrencyCode(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyCode, (Py_ssize_t)sizeof(self->data.CurrencyCode));
    return PyBytes_FromString(self->data.CurrencyCode);
}

///货币代码
// TThostFtdcCurrencyCodeType char[4]
static int PyCThostFtdcTransferQryDetailRspField_set_CurrencyCode(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyCode must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.CurrencyCode, 0, sizeof(self->data.CurrencyCode));
    // memcpy(self->data.CurrencyCode, buf, len);
    strncpy(self->data.CurrencyCode, buf, sizeof(self->data.CurrencyCode));
    return 0;
}
            
///发生金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_TxAmount(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TxAmount);
}

///发生金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferQryDetailRspField_set_TxAmount(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TxAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.TxAmount = buf;
    return 0;
}
        
///有效标志
// TThostFtdcTransferValidFlagType char
static PyObject *PyCThostFtdcTransferQryDetailRspField_get_Flag(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Flag), 1);
}

///有效标志
// TThostFtdcTransferValidFlagType char
static int PyCThostFtdcTransferQryDetailRspField_set_Flag(PyCThostFtdcTransferQryDetailRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Flag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Flag)) {
        PyErr_SetString(PyExc_ValueError, "Flag must be equal 1 bytes");
        return -1;
    }
    self->data.Flag = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcTransferQryDetailRspField_getset[] = {
    ///交易日期 
    {(char *)"TradeDate", (getter)PyCThostFtdcTransferQryDetailRspField_get_TradeDate, (setter)PyCThostFtdcTransferQryDetailRspField_set_TradeDate, (char *)"TradeDate", NULL},
    ///交易时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcTransferQryDetailRspField_get_TradeTime, (setter)PyCThostFtdcTransferQryDetailRspField_set_TradeTime, (char *)"TradeTime", NULL},
    ///交易代码 
    {(char *)"TradeCode", (getter)PyCThostFtdcTransferQryDetailRspField_get_TradeCode, (setter)PyCThostFtdcTransferQryDetailRspField_set_TradeCode, (char *)"TradeCode", NULL},
    ///期货流水号 
    {(char *)"FutureSerial", (getter)PyCThostFtdcTransferQryDetailRspField_get_FutureSerial, (setter)PyCThostFtdcTransferQryDetailRspField_set_FutureSerial, (char *)"FutureSerial", NULL},
    ///期货公司代码 
    {(char *)"FutureID", (getter)PyCThostFtdcTransferQryDetailRspField_get_FutureID, (setter)PyCThostFtdcTransferQryDetailRspField_set_FutureID, (char *)"FutureID", NULL},
    ///资金帐号 
    {(char *)"FutureAccount", (getter)PyCThostFtdcTransferQryDetailRspField_get_FutureAccount, (setter)PyCThostFtdcTransferQryDetailRspField_set_FutureAccount, (char *)"FutureAccount", NULL},
    ///银行流水号 
    {(char *)"BankSerial", (getter)PyCThostFtdcTransferQryDetailRspField_get_BankSerial, (setter)PyCThostFtdcTransferQryDetailRspField_set_BankSerial, (char *)"BankSerial", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcTransferQryDetailRspField_get_BankID, (setter)PyCThostFtdcTransferQryDetailRspField_set_BankID, (char *)"BankID", NULL},
    ///银行分中心代码 
    {(char *)"BankBrchID", (getter)PyCThostFtdcTransferQryDetailRspField_get_BankBrchID, (setter)PyCThostFtdcTransferQryDetailRspField_set_BankBrchID, (char *)"BankBrchID", NULL},
    ///银行账号 
    {(char *)"BankAccount", (getter)PyCThostFtdcTransferQryDetailRspField_get_BankAccount, (setter)PyCThostFtdcTransferQryDetailRspField_set_BankAccount, (char *)"BankAccount", NULL},
    ///证件号码 
    {(char *)"CertCode", (getter)PyCThostFtdcTransferQryDetailRspField_get_CertCode, (setter)PyCThostFtdcTransferQryDetailRspField_set_CertCode, (char *)"CertCode", NULL},
    ///货币代码 
    {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferQryDetailRspField_get_CurrencyCode, (setter)PyCThostFtdcTransferQryDetailRspField_set_CurrencyCode, (char *)"CurrencyCode", NULL},
    ///发生金额 
    {(char *)"TxAmount", (getter)PyCThostFtdcTransferQryDetailRspField_get_TxAmount, (setter)PyCThostFtdcTransferQryDetailRspField_set_TxAmount, (char *)"TxAmount", NULL},
    ///有效标志 
    {(char *)"Flag", (getter)PyCThostFtdcTransferQryDetailRspField_get_Flag, (setter)PyCThostFtdcTransferQryDetailRspField_set_Flag, (char *)"Flag", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferQryDetailRspFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferQryDetailRspField",	/* tp_name */
	sizeof(PyCThostFtdcTransferQryDetailRspField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferQryDetailRspField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferQryDetailRspField_repr,   /* tp_repr */
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
	"CThostFtdcTransferQryDetailRspField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferQryDetailRspField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferQryDetailRspField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferQryDetailRspField_new,       /* tp_new */
};

int PyCThostFtdcTransferQryDetailRspFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferQryDetailRspField  */
	if (PyType_Ready(&PyCThostFtdcTransferQryDetailRspFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferQryDetailRspField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferQryDetailRspFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferQryDetailRspField", (PyObject *)&PyCThostFtdcTransferQryDetailRspFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferQryDetailRspField to module");
        Py_DECREF(&PyCThostFtdcTransferQryDetailRspFieldType);
		return -1;
    }

    return 0;
}
