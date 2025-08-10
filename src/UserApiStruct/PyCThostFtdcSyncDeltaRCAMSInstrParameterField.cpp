
#include "PyCThostFtdcSyncDeltaRCAMSInstrParameterField.h"

///风险结算追平RCAMS同合约风险对冲参数

static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self = (PyCThostFtdcSyncDeltaRCAMSInstrParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_init(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProductID", "HedgeRate", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaRCAMSInstrParameterField_TradingDay = NULL;
    Py_ssize_t SyncDeltaRCAMSInstrParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaRCAMSInstrParameterField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaRCAMSInstrParameterField_ExchangeID_len = 0;
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    const char *SyncDeltaRCAMSInstrParameterField_ProductID = NULL;
    Py_ssize_t SyncDeltaRCAMSInstrParameterField_ProductID_len = 0;
            
    ///同合约风险对冲比率
    // TThostFtdcHedgeRateType double
    double SyncDeltaRCAMSInstrParameterField_HedgeRate = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaRCAMSInstrParameterField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaRCAMSInstrParameterField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#dci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dci", (char **)kwlist
#endif

        , &SyncDeltaRCAMSInstrParameterField_TradingDay, &SyncDeltaRCAMSInstrParameterField_TradingDay_len 
        , &SyncDeltaRCAMSInstrParameterField_ExchangeID, &SyncDeltaRCAMSInstrParameterField_ExchangeID_len 
        , &SyncDeltaRCAMSInstrParameterField_ProductID, &SyncDeltaRCAMSInstrParameterField_ProductID_len 
        , &SyncDeltaRCAMSInstrParameterField_HedgeRate 
        , &SyncDeltaRCAMSInstrParameterField_ActionDirection 
        , &SyncDeltaRCAMSInstrParameterField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaRCAMSInstrParameterField_TradingDay != NULL ) {
        if(SyncDeltaRCAMSInstrParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInstrParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaRCAMSInstrParameterField_TradingDay, SyncDeltaRCAMSInstrParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaRCAMSInstrParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaRCAMSInstrParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaRCAMSInstrParameterField_ExchangeID != NULL ) {
        if(SyncDeltaRCAMSInstrParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInstrParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaRCAMSInstrParameterField_ExchangeID, SyncDeltaRCAMSInstrParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaRCAMSInstrParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaRCAMSInstrParameterField_ExchangeID = NULL;
    }
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    if( SyncDeltaRCAMSInstrParameterField_ProductID != NULL ) {
        if(SyncDeltaRCAMSInstrParameterField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInstrParameterField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, SyncDeltaRCAMSInstrParameterField_ProductID, SyncDeltaRCAMSInstrParameterField_ProductID_len);        
        strncpy(self->data.ProductID, SyncDeltaRCAMSInstrParameterField_ProductID, sizeof(self->data.ProductID) );
        SyncDeltaRCAMSInstrParameterField_ProductID = NULL;
    }
            
    ///同合约风险对冲比率
    // TThostFtdcHedgeRateType double
    self->data.HedgeRate = SyncDeltaRCAMSInstrParameterField_HedgeRate;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaRCAMSInstrParameterField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaRCAMSInstrParameterField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSInstrParameterField_dealloc(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_repr(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"HedgeRate", self->data.HedgeRate 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInstrParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_TradingDay(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_TradingDay(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, PyObject* val, void *closure) {
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
            
///产品代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ProductID(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ProductID(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///同合约风险对冲比率
// TThostFtdcHedgeRateType double
static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_HedgeRate(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HedgeRate);
}

///同合约风险对冲比率
// TThostFtdcHedgeRateType double
static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_HedgeRate(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HedgeRate = buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSInstrParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ProductID, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ProductID, (char *)"ProductID", NULL},
    ///同合约风险对冲比率 
    {(char *)"HedgeRate", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_HedgeRate, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_HedgeRate, (char *)"HedgeRate", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSInstrParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSInstrParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSInstrParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSInstrParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSInstrParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSInstrParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSInstrParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSInstrParameterField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSInstrParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType);
		return -1;
    }

    return 0;
}
