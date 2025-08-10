
#include "PyCThostFtdcRCAMSInstrParameterField.h"

///RCAMS同合约风险对冲参数

static PyObject *PyCThostFtdcRCAMSInstrParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRCAMSInstrParameterField *self = (PyCThostFtdcRCAMSInstrParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRCAMSInstrParameterField_init(PyCThostFtdcRCAMSInstrParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProductID", "HedgeRate",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *RCAMSInstrParameterField_TradingDay = NULL;
    Py_ssize_t RCAMSInstrParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *RCAMSInstrParameterField_ExchangeID = NULL;
    Py_ssize_t RCAMSInstrParameterField_ExchangeID_len = 0;
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    const char *RCAMSInstrParameterField_ProductID = NULL;
    Py_ssize_t RCAMSInstrParameterField_ProductID_len = 0;
            
    ///同合约风险对冲比率
    // TThostFtdcHedgeRateType double
    double RCAMSInstrParameterField_HedgeRate = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#d", (char **)kwlist
#endif

        , &RCAMSInstrParameterField_TradingDay, &RCAMSInstrParameterField_TradingDay_len 
        , &RCAMSInstrParameterField_ExchangeID, &RCAMSInstrParameterField_ExchangeID_len 
        , &RCAMSInstrParameterField_ProductID, &RCAMSInstrParameterField_ProductID_len 
        , &RCAMSInstrParameterField_HedgeRate 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( RCAMSInstrParameterField_TradingDay != NULL ) {
        if(RCAMSInstrParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RCAMSInstrParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RCAMSInstrParameterField_TradingDay, RCAMSInstrParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, RCAMSInstrParameterField_TradingDay, sizeof(self->data.TradingDay) );
        RCAMSInstrParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( RCAMSInstrParameterField_ExchangeID != NULL ) {
        if(RCAMSInstrParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", RCAMSInstrParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, RCAMSInstrParameterField_ExchangeID, RCAMSInstrParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, RCAMSInstrParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        RCAMSInstrParameterField_ExchangeID = NULL;
    }
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    if( RCAMSInstrParameterField_ProductID != NULL ) {
        if(RCAMSInstrParameterField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", RCAMSInstrParameterField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, RCAMSInstrParameterField_ProductID, RCAMSInstrParameterField_ProductID_len);        
        strncpy(self->data.ProductID, RCAMSInstrParameterField_ProductID, sizeof(self->data.ProductID) );
        RCAMSInstrParameterField_ProductID = NULL;
    }
            
    ///同合约风险对冲比率
    // TThostFtdcHedgeRateType double
    self->data.HedgeRate = RCAMSInstrParameterField_HedgeRate;
        

    return 0;
}

static void PyCThostFtdcRCAMSInstrParameterField_dealloc(PyCThostFtdcRCAMSInstrParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRCAMSInstrParameterField_repr(PyCThostFtdcRCAMSInstrParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"HedgeRate", self->data.HedgeRate 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInstrParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcRCAMSInstrParameterField_get_TradingDay(PyCThostFtdcRCAMSInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcRCAMSInstrParameterField_set_TradingDay(PyCThostFtdcRCAMSInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInstrParameterField_get_ExchangeID(PyCThostFtdcRCAMSInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcRCAMSInstrParameterField_set_ExchangeID(PyCThostFtdcRCAMSInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInstrParameterField_get_ProductID(PyCThostFtdcRCAMSInstrParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcRCAMSInstrParameterField_set_ProductID(PyCThostFtdcRCAMSInstrParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInstrParameterField_get_HedgeRate(PyCThostFtdcRCAMSInstrParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HedgeRate);
}

///同合约风险对冲比率
// TThostFtdcHedgeRateType double
static int PyCThostFtdcRCAMSInstrParameterField_set_HedgeRate(PyCThostFtdcRCAMSInstrParameterField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcRCAMSInstrParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcRCAMSInstrParameterField_get_TradingDay, (setter)PyCThostFtdcRCAMSInstrParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcRCAMSInstrParameterField_get_ExchangeID, (setter)PyCThostFtdcRCAMSInstrParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcRCAMSInstrParameterField_get_ProductID, (setter)PyCThostFtdcRCAMSInstrParameterField_set_ProductID, (char *)"ProductID", NULL},
    ///同合约风险对冲比率 
    {(char *)"HedgeRate", (getter)PyCThostFtdcRCAMSInstrParameterField_get_HedgeRate, (setter)PyCThostFtdcRCAMSInstrParameterField_set_HedgeRate, (char *)"HedgeRate", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRCAMSInstrParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRCAMSInstrParameterField",	/* tp_name */
	sizeof(PyCThostFtdcRCAMSInstrParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRCAMSInstrParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRCAMSInstrParameterField_repr,   /* tp_repr */
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
	"CThostFtdcRCAMSInstrParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRCAMSInstrParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRCAMSInstrParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRCAMSInstrParameterField_new,       /* tp_new */
};

int PyCThostFtdcRCAMSInstrParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRCAMSInstrParameterField  */
	if (PyType_Ready(&PyCThostFtdcRCAMSInstrParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRCAMSInstrParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRCAMSInstrParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRCAMSInstrParameterField", (PyObject *)&PyCThostFtdcRCAMSInstrParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSInstrParameterField to module");
        Py_DECREF(&PyCThostFtdcRCAMSInstrParameterFieldType);
		return -1;
    }

    return 0;
}
