
#include "PyCThostFtdcSyncDeltaRULEIntraParameterField.h"

///风险结算追平RULE品种内对锁仓折扣参数

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRULEIntraParameterField *self = (PyCThostFtdcSyncDeltaRULEIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterField_init(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProdFamilyCode", "StdInstrumentID", "StdInstrMargin", "UsualIntraRate", "DeliveryIntraRate", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaRULEIntraParameterField_TradingDay = NULL;
    Py_ssize_t SyncDeltaRULEIntraParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaRULEIntraParameterField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaRULEIntraParameterField_ExchangeID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaRULEIntraParameterField_ProdFamilyCode = NULL;
    Py_ssize_t SyncDeltaRULEIntraParameterField_ProdFamilyCode_len = 0;
            
    ///标准合约
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaRULEIntraParameterField_StdInstrumentID = NULL;
    Py_ssize_t SyncDeltaRULEIntraParameterField_StdInstrumentID_len = 0;
            
    ///标准合约保证金
    // TThostFtdcMoneyType double
    double SyncDeltaRULEIntraParameterField_StdInstrMargin = 0.0;
        
    ///一般月份合约组合保证金系数
    // TThostFtdcRatioType double
    double SyncDeltaRULEIntraParameterField_UsualIntraRate = 0.0;
        
    ///临近交割合约组合保证金系数
    // TThostFtdcRatioType double
    double SyncDeltaRULEIntraParameterField_DeliveryIntraRate = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaRULEIntraParameterField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaRULEIntraParameterField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#dddci", (char **)kwlist
#endif

        , &SyncDeltaRULEIntraParameterField_TradingDay, &SyncDeltaRULEIntraParameterField_TradingDay_len 
        , &SyncDeltaRULEIntraParameterField_ExchangeID, &SyncDeltaRULEIntraParameterField_ExchangeID_len 
        , &SyncDeltaRULEIntraParameterField_ProdFamilyCode, &SyncDeltaRULEIntraParameterField_ProdFamilyCode_len 
        , &SyncDeltaRULEIntraParameterField_StdInstrumentID, &SyncDeltaRULEIntraParameterField_StdInstrumentID_len 
        , &SyncDeltaRULEIntraParameterField_StdInstrMargin 
        , &SyncDeltaRULEIntraParameterField_UsualIntraRate 
        , &SyncDeltaRULEIntraParameterField_DeliveryIntraRate 
        , &SyncDeltaRULEIntraParameterField_ActionDirection 
        , &SyncDeltaRULEIntraParameterField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaRULEIntraParameterField_TradingDay != NULL ) {
        if(SyncDeltaRULEIntraParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaRULEIntraParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaRULEIntraParameterField_TradingDay, SyncDeltaRULEIntraParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaRULEIntraParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaRULEIntraParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaRULEIntraParameterField_ExchangeID != NULL ) {
        if(SyncDeltaRULEIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaRULEIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaRULEIntraParameterField_ExchangeID, SyncDeltaRULEIntraParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaRULEIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaRULEIntraParameterField_ExchangeID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaRULEIntraParameterField_ProdFamilyCode != NULL ) {
        if(SyncDeltaRULEIntraParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", SyncDeltaRULEIntraParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, SyncDeltaRULEIntraParameterField_ProdFamilyCode, SyncDeltaRULEIntraParameterField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, SyncDeltaRULEIntraParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        SyncDeltaRULEIntraParameterField_ProdFamilyCode = NULL;
    }
            
    ///标准合约
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaRULEIntraParameterField_StdInstrumentID != NULL ) {
        if(SyncDeltaRULEIntraParameterField_StdInstrumentID_len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaRULEIntraParameterField_StdInstrumentID_len, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
            return -1;
        }
        // memset(self->data.StdInstrumentID, 0, sizeof(self->data.StdInstrumentID));
        // memcpy(self->data.StdInstrumentID, SyncDeltaRULEIntraParameterField_StdInstrumentID, SyncDeltaRULEIntraParameterField_StdInstrumentID_len);        
        strncpy(self->data.StdInstrumentID, SyncDeltaRULEIntraParameterField_StdInstrumentID, sizeof(self->data.StdInstrumentID) );
        SyncDeltaRULEIntraParameterField_StdInstrumentID = NULL;
    }
            
    ///标准合约保证金
    // TThostFtdcMoneyType double
    self->data.StdInstrMargin = SyncDeltaRULEIntraParameterField_StdInstrMargin;
        
    ///一般月份合约组合保证金系数
    // TThostFtdcRatioType double
    self->data.UsualIntraRate = SyncDeltaRULEIntraParameterField_UsualIntraRate;
        
    ///临近交割合约组合保证金系数
    // TThostFtdcRatioType double
    self->data.DeliveryIntraRate = SyncDeltaRULEIntraParameterField_DeliveryIntraRate;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaRULEIntraParameterField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaRULEIntraParameterField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaRULEIntraParameterField_dealloc(PyCThostFtdcSyncDeltaRULEIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_repr(PyCThostFtdcSyncDeltaRULEIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 
        ,"StdInstrumentID", self->data.StdInstrumentID//, (Py_ssize_t)sizeof(self->data.StdInstrumentID) 
        ,"StdInstrMargin", self->data.StdInstrMargin 
        ,"UsualIntraRate", self->data.UsualIntraRate 
        ,"DeliveryIntraRate", self->data.DeliveryIntraRate 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRULEIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_TradingDay(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_TradingDay(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///品种代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ProdFamilyCode(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ProdFamilyCode(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
    // memcpy(self->data.ProdFamilyCode, buf, len);
    strncpy(self->data.ProdFamilyCode, buf, sizeof(self->data.ProdFamilyCode));
    return 0;
}
            
///标准合约
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_StdInstrumentID(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StdInstrumentID, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
    return PyBytes_FromString(self->data.StdInstrumentID);
}

///标准合约
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_StdInstrumentID(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StdInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "StdInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.StdInstrumentID, 0, sizeof(self->data.StdInstrumentID));
    // memcpy(self->data.StdInstrumentID, buf, len);
    strncpy(self->data.StdInstrumentID, buf, sizeof(self->data.StdInstrumentID));
    return 0;
}
            
///标准合约保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_StdInstrMargin(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StdInstrMargin);
}

///标准合约保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_StdInstrMargin(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StdInstrMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StdInstrMargin = buf;
    return 0;
}
        
///一般月份合约组合保证金系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_UsualIntraRate(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UsualIntraRate);
}

///一般月份合约组合保证金系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_UsualIntraRate(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsualIntraRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UsualIntraRate = buf;
    return 0;
}
        
///临近交割合约组合保证金系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_DeliveryIntraRate(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.DeliveryIntraRate);
}

///临近交割合约组合保证金系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_DeliveryIntraRate(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryIntraRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryIntraRate = buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    self->data.ActionDirection = *buf;
    return 0;
}
            
///追平序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SyncDeltaSequenceNo value out of range for C int");
        return -1;
    }
    self->data.SyncDeltaSequenceNo = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSyncDeltaRULEIntraParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
    ///标准合约 
    {(char *)"StdInstrumentID", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_StdInstrumentID, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_StdInstrumentID, (char *)"StdInstrumentID", NULL},
    ///标准合约保证金 
    {(char *)"StdInstrMargin", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_StdInstrMargin, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_StdInstrMargin, (char *)"StdInstrMargin", NULL},
    ///一般月份合约组合保证金系数 
    {(char *)"UsualIntraRate", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_UsualIntraRate, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_UsualIntraRate, (char *)"UsualIntraRate", NULL},
    ///临近交割合约组合保证金系数 
    {(char *)"DeliveryIntraRate", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_DeliveryIntraRate, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_DeliveryIntraRate, (char *)"DeliveryIntraRate", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRULEIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRULEIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRULEIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRULEIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRULEIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRULEIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRULEIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRULEIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRULEIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRULEIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRULEIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRULEIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRULEIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRULEIntraParameterField", (PyObject *)&PyCThostFtdcSyncDeltaRULEIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRULEIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRULEIntraParameterFieldType);
		return -1;
    }

    return 0;
}
