
#include "PyCThostFtdcSyncDeltaSPBMInterParameterField.h"

///风险结算追平SPBM跨品种抵扣参数

static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPBMInterParameterField *self = (PyCThostFtdcSyncDeltaSPBMInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterField_init(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "SpreadId", "InterRateZ", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaSPBMInterParameterField_TradingDay = NULL;
    Py_ssize_t SyncDeltaSPBMInterParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaSPBMInterParameterField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaSPBMInterParameterField_ExchangeID_len = 0;
            
    ///优先级
    // TThostFtdcSpreadIdType int
    int SyncDeltaSPBMInterParameterField_SpreadId = 0;
        
    ///品种间对锁仓费率折扣比例
    // TThostFtdcRatioType double
    double SyncDeltaSPBMInterParameterField_InterRateZ = 0.0;
        
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t SyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_len = 0;
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t SyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_len = 0;
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaSPBMInterParameterField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaSPBMInterParameterField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ids#s#ci", (char **)kwlist
#endif

        , &SyncDeltaSPBMInterParameterField_TradingDay, &SyncDeltaSPBMInterParameterField_TradingDay_len 
        , &SyncDeltaSPBMInterParameterField_ExchangeID, &SyncDeltaSPBMInterParameterField_ExchangeID_len 
        , &SyncDeltaSPBMInterParameterField_SpreadId 
        , &SyncDeltaSPBMInterParameterField_InterRateZ 
        , &SyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode, &SyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_len 
        , &SyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode, &SyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_len 
        , &SyncDeltaSPBMInterParameterField_ActionDirection 
        , &SyncDeltaSPBMInterParameterField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaSPBMInterParameterField_TradingDay != NULL ) {
        if(SyncDeltaSPBMInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaSPBMInterParameterField_TradingDay, SyncDeltaSPBMInterParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaSPBMInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaSPBMInterParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaSPBMInterParameterField_ExchangeID != NULL ) {
        if(SyncDeltaSPBMInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaSPBMInterParameterField_ExchangeID, SyncDeltaSPBMInterParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaSPBMInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaSPBMInterParameterField_ExchangeID = NULL;
    }
            
    ///优先级
    // TThostFtdcSpreadIdType int
    self->data.SpreadId = SyncDeltaSPBMInterParameterField_SpreadId;
        
    ///品种间对锁仓费率折扣比例
    // TThostFtdcRatioType double
    self->data.InterRateZ = SyncDeltaSPBMInterParameterField_InterRateZ;
        
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(SyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg1ProdFamilyCode, 0, sizeof(self->data.Leg1ProdFamilyCode));
        // memcpy(self->data.Leg1ProdFamilyCode, SyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode, SyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_len);        
        strncpy(self->data.Leg1ProdFamilyCode, SyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
        SyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode = NULL;
    }
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(SyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg2ProdFamilyCode, 0, sizeof(self->data.Leg2ProdFamilyCode));
        // memcpy(self->data.Leg2ProdFamilyCode, SyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode, SyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_len);        
        strncpy(self->data.Leg2ProdFamilyCode, SyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
        SyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaSPBMInterParameterField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaSPBMInterParameterField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaSPBMInterParameterField_dealloc(PyCThostFtdcSyncDeltaSPBMInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_repr(PyCThostFtdcSyncDeltaSPBMInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:d,s:s,s:s,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"SpreadId", self->data.SpreadId 
        ,"InterRateZ", self->data.InterRateZ 
        ,"Leg1ProdFamilyCode", self->data.Leg1ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode) 
        ,"Leg2ProdFamilyCode", self->data.Leg2ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode) 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_TradingDay(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_TradingDay(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, PyObject* val, void *closure) {
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
            
///优先级
// TThostFtdcSpreadIdType int
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_SpreadId(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SpreadId);
#else
    return PyInt_FromLong(self->data.SpreadId);
#endif
}

///优先级
// TThostFtdcSpreadIdType int
static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_SpreadId(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SpreadId value out of range for C int");
        return -1;
    }
    self->data.SpreadId = (int)buf;
    return 0;
}
        
///品种间对锁仓费率折扣比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_InterRateZ(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterRateZ);
}

///品种间对锁仓费率折扣比例
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_InterRateZ(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterRateZ Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterRateZ = buf;
    return 0;
}
        
///第一腿构成品种
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_Leg1ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg1ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

///第一腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_Leg1ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.Leg1ProdFamilyCode, 0, sizeof(self->data.Leg1ProdFamilyCode));
    // memcpy(self->data.Leg1ProdFamilyCode, buf, len);
    strncpy(self->data.Leg1ProdFamilyCode, buf, sizeof(self->data.Leg1ProdFamilyCode));
    return 0;
}
            
///第二腿构成品种
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_Leg2ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg2ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

///第二腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_Leg2ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.Leg2ProdFamilyCode, 0, sizeof(self->data.Leg2ProdFamilyCode));
    // memcpy(self->data.Leg2ProdFamilyCode, buf, len);
    strncpy(self->data.Leg2ProdFamilyCode, buf, sizeof(self->data.Leg2ProdFamilyCode));
    return 0;
}
            
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMInterParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///优先级 
    {(char *)"SpreadId", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_SpreadId, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_SpreadId, (char *)"SpreadId", NULL},
    ///品种间对锁仓费率折扣比例 
    {(char *)"InterRateZ", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_InterRateZ, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_InterRateZ, (char *)"InterRateZ", NULL},
    ///第一腿构成品种 
    {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
    ///第二腿构成品种 
    {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPBMInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPBMInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPBMInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPBMInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPBMInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPBMInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPBMInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPBMInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPBMInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPBMInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPBMInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPBMInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPBMInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMInterParameterField", (PyObject *)&PyCThostFtdcSyncDeltaSPBMInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMInterParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPBMInterParameterFieldType);
		return -1;
    }

    return 0;
}
