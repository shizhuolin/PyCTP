
#include "PyCThostFtdcSyncDelaySwapField.h"

///延时换汇同步

static PyObject *PyCThostFtdcSyncDelaySwapField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDelaySwapField *self = (PyCThostFtdcSyncDelaySwapField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDelaySwapField_init(PyCThostFtdcSyncDelaySwapField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"DelaySwapSeqNo", "BrokerID", "InvestorID", "FromCurrencyID", "FromAmount", "FromFrozenSwap", "FromRemainSwap", "ToCurrencyID", "ToAmount", "IsManualSwap", "IsAllRemainSetZero",  NULL};


    ///换汇流水号
    // TThostFtdcDepositSeqNoType char[15]
    const char *SyncDelaySwapField_DelaySwapSeqNo = NULL;
    Py_ssize_t SyncDelaySwapField_DelaySwapSeqNo_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDelaySwapField_BrokerID = NULL;
    Py_ssize_t SyncDelaySwapField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDelaySwapField_InvestorID = NULL;
    Py_ssize_t SyncDelaySwapField_InvestorID_len = 0;
            
    ///源币种
    // TThostFtdcCurrencyIDType char[4]
    const char *SyncDelaySwapField_FromCurrencyID = NULL;
    Py_ssize_t SyncDelaySwapField_FromCurrencyID_len = 0;
            
    ///源金额
    // TThostFtdcMoneyType double
    double SyncDelaySwapField_FromAmount = 0.0;
        
    ///源换汇冻结金额(可用冻结)
    // TThostFtdcMoneyType double
    double SyncDelaySwapField_FromFrozenSwap = 0.0;
        
    ///源剩余换汇额度(可提冻结)
    // TThostFtdcMoneyType double
    double SyncDelaySwapField_FromRemainSwap = 0.0;
        
    ///目标币种
    // TThostFtdcCurrencyIDType char[4]
    const char *SyncDelaySwapField_ToCurrencyID = NULL;
    Py_ssize_t SyncDelaySwapField_ToCurrencyID_len = 0;
            
    ///目标金额
    // TThostFtdcMoneyType double
    double SyncDelaySwapField_ToAmount = 0.0;
        
    ///是否手工换汇
    // TThostFtdcBoolType int
    int SyncDelaySwapField_IsManualSwap = 0;
        
    ///是否将所有外币的剩余换汇额度设置为0
    // TThostFtdcBoolType int
    int SyncDelaySwapField_IsAllRemainSetZero = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddy#dii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddds#dii", (char **)kwlist
#endif

        , &SyncDelaySwapField_DelaySwapSeqNo, &SyncDelaySwapField_DelaySwapSeqNo_len 
        , &SyncDelaySwapField_BrokerID, &SyncDelaySwapField_BrokerID_len 
        , &SyncDelaySwapField_InvestorID, &SyncDelaySwapField_InvestorID_len 
        , &SyncDelaySwapField_FromCurrencyID, &SyncDelaySwapField_FromCurrencyID_len 
        , &SyncDelaySwapField_FromAmount 
        , &SyncDelaySwapField_FromFrozenSwap 
        , &SyncDelaySwapField_FromRemainSwap 
        , &SyncDelaySwapField_ToCurrencyID, &SyncDelaySwapField_ToCurrencyID_len 
        , &SyncDelaySwapField_ToAmount 
        , &SyncDelaySwapField_IsManualSwap 
        , &SyncDelaySwapField_IsAllRemainSetZero 


    )) {
        return -1;
    }


    ///换汇流水号
    // TThostFtdcDepositSeqNoType char[15]
    if( SyncDelaySwapField_DelaySwapSeqNo != NULL ) {
        if(SyncDelaySwapField_DelaySwapSeqNo_len > (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo)) {
            PyErr_Format(PyExc_ValueError, "DelaySwapSeqNo too long: length=%zd (max allowed is %zd)", SyncDelaySwapField_DelaySwapSeqNo_len, (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo));
            return -1;
        }
        // memset(self->data.DelaySwapSeqNo, 0, sizeof(self->data.DelaySwapSeqNo));
        // memcpy(self->data.DelaySwapSeqNo, SyncDelaySwapField_DelaySwapSeqNo, SyncDelaySwapField_DelaySwapSeqNo_len);        
        strncpy(self->data.DelaySwapSeqNo, SyncDelaySwapField_DelaySwapSeqNo, sizeof(self->data.DelaySwapSeqNo) );
        SyncDelaySwapField_DelaySwapSeqNo = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDelaySwapField_BrokerID != NULL ) {
        if(SyncDelaySwapField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDelaySwapField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDelaySwapField_BrokerID, SyncDelaySwapField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDelaySwapField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDelaySwapField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDelaySwapField_InvestorID != NULL ) {
        if(SyncDelaySwapField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDelaySwapField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDelaySwapField_InvestorID, SyncDelaySwapField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDelaySwapField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDelaySwapField_InvestorID = NULL;
    }
            
    ///源币种
    // TThostFtdcCurrencyIDType char[4]
    if( SyncDelaySwapField_FromCurrencyID != NULL ) {
        if(SyncDelaySwapField_FromCurrencyID_len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is %zd)", SyncDelaySwapField_FromCurrencyID_len, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
            return -1;
        }
        // memset(self->data.FromCurrencyID, 0, sizeof(self->data.FromCurrencyID));
        // memcpy(self->data.FromCurrencyID, SyncDelaySwapField_FromCurrencyID, SyncDelaySwapField_FromCurrencyID_len);        
        strncpy(self->data.FromCurrencyID, SyncDelaySwapField_FromCurrencyID, sizeof(self->data.FromCurrencyID) );
        SyncDelaySwapField_FromCurrencyID = NULL;
    }
            
    ///源金额
    // TThostFtdcMoneyType double
    self->data.FromAmount = SyncDelaySwapField_FromAmount;
        
    ///源换汇冻结金额(可用冻结)
    // TThostFtdcMoneyType double
    self->data.FromFrozenSwap = SyncDelaySwapField_FromFrozenSwap;
        
    ///源剩余换汇额度(可提冻结)
    // TThostFtdcMoneyType double
    self->data.FromRemainSwap = SyncDelaySwapField_FromRemainSwap;
        
    ///目标币种
    // TThostFtdcCurrencyIDType char[4]
    if( SyncDelaySwapField_ToCurrencyID != NULL ) {
        if(SyncDelaySwapField_ToCurrencyID_len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "ToCurrencyID too long: length=%zd (max allowed is %zd)", SyncDelaySwapField_ToCurrencyID_len, (Py_ssize_t)sizeof(self->data.ToCurrencyID));
            return -1;
        }
        // memset(self->data.ToCurrencyID, 0, sizeof(self->data.ToCurrencyID));
        // memcpy(self->data.ToCurrencyID, SyncDelaySwapField_ToCurrencyID, SyncDelaySwapField_ToCurrencyID_len);        
        strncpy(self->data.ToCurrencyID, SyncDelaySwapField_ToCurrencyID, sizeof(self->data.ToCurrencyID) );
        SyncDelaySwapField_ToCurrencyID = NULL;
    }
            
    ///目标金额
    // TThostFtdcMoneyType double
    self->data.ToAmount = SyncDelaySwapField_ToAmount;
        
    ///是否手工换汇
    // TThostFtdcBoolType int
    self->data.IsManualSwap = SyncDelaySwapField_IsManualSwap;
        
    ///是否将所有外币的剩余换汇额度设置为0
    // TThostFtdcBoolType int
    self->data.IsAllRemainSetZero = SyncDelaySwapField_IsAllRemainSetZero;
        

    return 0;
}

static void PyCThostFtdcSyncDelaySwapField_dealloc(PyCThostFtdcSyncDelaySwapField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_repr(PyCThostFtdcSyncDelaySwapField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:y,s:d,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:s,s:d,s:i,s:i}"
#endif

        ,"DelaySwapSeqNo", self->data.DelaySwapSeqNo//, (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"FromCurrencyID", self->data.FromCurrencyID//, (Py_ssize_t)sizeof(self->data.FromCurrencyID) 
        ,"FromAmount", self->data.FromAmount 
        ,"FromFrozenSwap", self->data.FromFrozenSwap 
        ,"FromRemainSwap", self->data.FromRemainSwap 
        ,"ToCurrencyID", self->data.ToCurrencyID//, (Py_ssize_t)sizeof(self->data.ToCurrencyID) 
        ,"ToAmount", self->data.ToAmount 
        ,"IsManualSwap", self->data.IsManualSwap 
        ,"IsAllRemainSetZero", self->data.IsAllRemainSetZero 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDelaySwapField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///换汇流水号
// TThostFtdcDepositSeqNoType char[15]
static PyObject *PyCThostFtdcSyncDelaySwapField_get_DelaySwapSeqNo(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DelaySwapSeqNo, (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo));
    return PyBytes_FromString(self->data.DelaySwapSeqNo);
}

///换汇流水号
// TThostFtdcDepositSeqNoType char[15]
static int PyCThostFtdcSyncDelaySwapField_set_DelaySwapSeqNo(PyCThostFtdcSyncDelaySwapField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DelaySwapSeqNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "DelaySwapSeqNo must be less than 15 bytes");
        return -1;
    }
    // memset(self->data.DelaySwapSeqNo, 0, sizeof(self->data.DelaySwapSeqNo));
    // memcpy(self->data.DelaySwapSeqNo, buf, len);
    strncpy(self->data.DelaySwapSeqNo, buf, sizeof(self->data.DelaySwapSeqNo));
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDelaySwapField_get_BrokerID(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDelaySwapField_set_BrokerID(PyCThostFtdcSyncDelaySwapField *self, PyObject* val, void *closure) {
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
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcSyncDelaySwapField_get_InvestorID(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDelaySwapField_set_InvestorID(PyCThostFtdcSyncDelaySwapField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///源币种
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcSyncDelaySwapField_get_FromCurrencyID(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FromCurrencyID, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
    return PyBytes_FromString(self->data.FromCurrencyID);
}

///源币种
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSyncDelaySwapField_set_FromCurrencyID(PyCThostFtdcSyncDelaySwapField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.FromCurrencyID, 0, sizeof(self->data.FromCurrencyID));
    // memcpy(self->data.FromCurrencyID, buf, len);
    strncpy(self->data.FromCurrencyID, buf, sizeof(self->data.FromCurrencyID));
    return 0;
}
            
///源金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDelaySwapField_get_FromAmount(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FromAmount);
}

///源金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDelaySwapField_set_FromAmount(PyCThostFtdcSyncDelaySwapField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FromAmount = buf;
    return 0;
}
        
///源换汇冻结金额(可用冻结)
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDelaySwapField_get_FromFrozenSwap(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FromFrozenSwap);
}

///源换汇冻结金额(可用冻结)
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDelaySwapField_set_FromFrozenSwap(PyCThostFtdcSyncDelaySwapField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromFrozenSwap Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FromFrozenSwap = buf;
    return 0;
}
        
///源剩余换汇额度(可提冻结)
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDelaySwapField_get_FromRemainSwap(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FromRemainSwap);
}

///源剩余换汇额度(可提冻结)
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDelaySwapField_set_FromRemainSwap(PyCThostFtdcSyncDelaySwapField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromRemainSwap Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FromRemainSwap = buf;
    return 0;
}
        
///目标币种
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcSyncDelaySwapField_get_ToCurrencyID(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ToCurrencyID, (Py_ssize_t)sizeof(self->data.ToCurrencyID));
    return PyBytes_FromString(self->data.ToCurrencyID);
}

///目标币种
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSyncDelaySwapField_set_ToCurrencyID(PyCThostFtdcSyncDelaySwapField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ToCurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "ToCurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.ToCurrencyID, 0, sizeof(self->data.ToCurrencyID));
    // memcpy(self->data.ToCurrencyID, buf, len);
    strncpy(self->data.ToCurrencyID, buf, sizeof(self->data.ToCurrencyID));
    return 0;
}
            
///目标金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDelaySwapField_get_ToAmount(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ToAmount);
}

///目标金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDelaySwapField_set_ToAmount(PyCThostFtdcSyncDelaySwapField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ToAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ToAmount = buf;
    return 0;
}
        
///是否手工换汇
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSyncDelaySwapField_get_IsManualSwap(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsManualSwap);
#else
    return PyInt_FromLong(self->data.IsManualSwap);
#endif
}

///是否手工换汇
// TThostFtdcBoolType int
static int PyCThostFtdcSyncDelaySwapField_set_IsManualSwap(PyCThostFtdcSyncDelaySwapField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsManualSwap Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsManualSwap Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsManualSwap value out of range for C int");
        return -1;
    }
    self->data.IsManualSwap = (int)buf;
    return 0;
}
        
///是否将所有外币的剩余换汇额度设置为0
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSyncDelaySwapField_get_IsAllRemainSetZero(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsAllRemainSetZero);
#else
    return PyInt_FromLong(self->data.IsAllRemainSetZero);
#endif
}

///是否将所有外币的剩余换汇额度设置为0
// TThostFtdcBoolType int
static int PyCThostFtdcSyncDelaySwapField_set_IsAllRemainSetZero(PyCThostFtdcSyncDelaySwapField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsAllRemainSetZero Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsAllRemainSetZero Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsAllRemainSetZero value out of range for C int");
        return -1;
    }
    self->data.IsAllRemainSetZero = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSyncDelaySwapField_getset[] = {
    ///换汇流水号 
    {(char *)"DelaySwapSeqNo", (getter)PyCThostFtdcSyncDelaySwapField_get_DelaySwapSeqNo, (setter)PyCThostFtdcSyncDelaySwapField_set_DelaySwapSeqNo, (char *)"DelaySwapSeqNo", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDelaySwapField_get_BrokerID, (setter)PyCThostFtdcSyncDelaySwapField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDelaySwapField_get_InvestorID, (setter)PyCThostFtdcSyncDelaySwapField_set_InvestorID, (char *)"InvestorID", NULL},
    ///源币种 
    {(char *)"FromCurrencyID", (getter)PyCThostFtdcSyncDelaySwapField_get_FromCurrencyID, (setter)PyCThostFtdcSyncDelaySwapField_set_FromCurrencyID, (char *)"FromCurrencyID", NULL},
    ///源金额 
    {(char *)"FromAmount", (getter)PyCThostFtdcSyncDelaySwapField_get_FromAmount, (setter)PyCThostFtdcSyncDelaySwapField_set_FromAmount, (char *)"FromAmount", NULL},
    ///源换汇冻结金额(可用冻结) 
    {(char *)"FromFrozenSwap", (getter)PyCThostFtdcSyncDelaySwapField_get_FromFrozenSwap, (setter)PyCThostFtdcSyncDelaySwapField_set_FromFrozenSwap, (char *)"FromFrozenSwap", NULL},
    ///源剩余换汇额度(可提冻结) 
    {(char *)"FromRemainSwap", (getter)PyCThostFtdcSyncDelaySwapField_get_FromRemainSwap, (setter)PyCThostFtdcSyncDelaySwapField_set_FromRemainSwap, (char *)"FromRemainSwap", NULL},
    ///目标币种 
    {(char *)"ToCurrencyID", (getter)PyCThostFtdcSyncDelaySwapField_get_ToCurrencyID, (setter)PyCThostFtdcSyncDelaySwapField_set_ToCurrencyID, (char *)"ToCurrencyID", NULL},
    ///目标金额 
    {(char *)"ToAmount", (getter)PyCThostFtdcSyncDelaySwapField_get_ToAmount, (setter)PyCThostFtdcSyncDelaySwapField_set_ToAmount, (char *)"ToAmount", NULL},
    ///是否手工换汇 
    {(char *)"IsManualSwap", (getter)PyCThostFtdcSyncDelaySwapField_get_IsManualSwap, (setter)PyCThostFtdcSyncDelaySwapField_set_IsManualSwap, (char *)"IsManualSwap", NULL},
    ///是否将所有外币的剩余换汇额度设置为0 
    {(char *)"IsAllRemainSetZero", (getter)PyCThostFtdcSyncDelaySwapField_get_IsAllRemainSetZero, (setter)PyCThostFtdcSyncDelaySwapField_set_IsAllRemainSetZero, (char *)"IsAllRemainSetZero", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDelaySwapFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDelaySwapField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDelaySwapField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDelaySwapField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDelaySwapField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDelaySwapField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDelaySwapField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDelaySwapField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDelaySwapField_new,       /* tp_new */
};

int PyCThostFtdcSyncDelaySwapFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDelaySwapField  */
	if (PyType_Ready(&PyCThostFtdcSyncDelaySwapFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDelaySwapField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDelaySwapFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDelaySwapField", (PyObject *)&PyCThostFtdcSyncDelaySwapFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDelaySwapField to module");
        Py_DECREF(&PyCThostFtdcSyncDelaySwapFieldType);
		return -1;
    }

    return 0;
}
