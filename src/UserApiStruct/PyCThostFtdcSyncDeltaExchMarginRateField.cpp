
#include "PyCThostFtdcSyncDeltaExchMarginRateField.h"

///风险结算追平交易所期货保证金率

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaExchMarginRateField *self = (PyCThostFtdcSyncDeltaExchMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaExchMarginRateField_init(PyCThostFtdcSyncDeltaExchMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InstrumentID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaExchMarginRateField_BrokerID = NULL;
    Py_ssize_t SyncDeltaExchMarginRateField_BrokerID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaExchMarginRateField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaExchMarginRateField_InstrumentID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char SyncDeltaExchMarginRateField_HedgeFlag = 0;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    double SyncDeltaExchMarginRateField_LongMarginRatioByMoney = 0.0;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    double SyncDeltaExchMarginRateField_LongMarginRatioByVolume = 0.0;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    double SyncDeltaExchMarginRateField_ShortMarginRatioByMoney = 0.0;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    double SyncDeltaExchMarginRateField_ShortMarginRatioByVolume = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaExchMarginRateField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaExchMarginRateField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cddddci", (char **)kwlist
#endif

        , &SyncDeltaExchMarginRateField_BrokerID, &SyncDeltaExchMarginRateField_BrokerID_len 
        , &SyncDeltaExchMarginRateField_InstrumentID, &SyncDeltaExchMarginRateField_InstrumentID_len 
        , &SyncDeltaExchMarginRateField_HedgeFlag 
        , &SyncDeltaExchMarginRateField_LongMarginRatioByMoney 
        , &SyncDeltaExchMarginRateField_LongMarginRatioByVolume 
        , &SyncDeltaExchMarginRateField_ShortMarginRatioByMoney 
        , &SyncDeltaExchMarginRateField_ShortMarginRatioByVolume 
        , &SyncDeltaExchMarginRateField_ActionDirection 
        , &SyncDeltaExchMarginRateField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaExchMarginRateField_BrokerID != NULL ) {
        if(SyncDeltaExchMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaExchMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaExchMarginRateField_BrokerID, SyncDeltaExchMarginRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaExchMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaExchMarginRateField_BrokerID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaExchMarginRateField_InstrumentID != NULL ) {
        if(SyncDeltaExchMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaExchMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaExchMarginRateField_InstrumentID, SyncDeltaExchMarginRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaExchMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaExchMarginRateField_InstrumentID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = SyncDeltaExchMarginRateField_HedgeFlag;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    self->data.LongMarginRatioByMoney = SyncDeltaExchMarginRateField_LongMarginRatioByMoney;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    self->data.LongMarginRatioByVolume = SyncDeltaExchMarginRateField_LongMarginRatioByVolume;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    self->data.ShortMarginRatioByMoney = SyncDeltaExchMarginRateField_ShortMarginRatioByMoney;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    self->data.ShortMarginRatioByVolume = SyncDeltaExchMarginRateField_ShortMarginRatioByVolume;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaExchMarginRateField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaExchMarginRateField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaExchMarginRateField_dealloc(PyCThostFtdcSyncDeltaExchMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_repr(PyCThostFtdcSyncDeltaExchMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"LongMarginRatioByMoney", self->data.LongMarginRatioByMoney 
        ,"LongMarginRatioByVolume", self->data.LongMarginRatioByVolume 
        ,"ShortMarginRatioByMoney", self->data.ShortMarginRatioByMoney 
        ,"ShortMarginRatioByVolume", self->data.ShortMarginRatioByVolume 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaExchMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_BrokerID(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaExchMarginRateField_set_BrokerID(PyCThostFtdcSyncDeltaExchMarginRateField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_InstrumentID(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaExchMarginRateField_set_InstrumentID(PyCThostFtdcSyncDeltaExchMarginRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_HedgeFlag(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcSyncDeltaExchMarginRateField_set_HedgeFlag(PyCThostFtdcSyncDeltaExchMarginRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.HedgeFlag = *buf;
    return 0;
}
            
///多头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

///多头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaExchMarginRateField_set_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaExchMarginRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongMarginRatioByMoney = buf;
    return 0;
}
        
///多头保证金费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

///多头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaExchMarginRateField_set_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaExchMarginRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongMarginRatioByVolume = buf;
    return 0;
}
        
///空头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

///空头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaExchMarginRateField_set_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaExchMarginRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortMarginRatioByMoney = buf;
    return 0;
}
        
///空头保证金费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

///空头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaExchMarginRateField_set_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaExchMarginRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortMarginRatioByVolume = buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_ActionDirection(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaExchMarginRateField_set_ActionDirection(PyCThostFtdcSyncDeltaExchMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaExchMarginRateField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaExchMarginRateField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaExchMarginRateField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///多头保证金率 
    {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
    ///多头保证金费 
    {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
    ///空头保证金率 
    {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
    ///空头保证金费 
    {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaExchMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaExchMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaExchMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaExchMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaExchMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaExchMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaExchMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaExchMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaExchMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaExchMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaExchMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaExchMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaExchMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaExchMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaExchMarginRateField", (PyObject *)&PyCThostFtdcSyncDeltaExchMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaExchMarginRateField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaExchMarginRateFieldType);
		return -1;
    }

    return 0;
}
