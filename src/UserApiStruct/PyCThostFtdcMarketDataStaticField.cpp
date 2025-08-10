
#include "PyCThostFtdcMarketDataStaticField.h"

///行情静态属性

static PyObject *PyCThostFtdcMarketDataStaticField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataStaticField *self = (PyCThostFtdcMarketDataStaticField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataStaticField_init(PyCThostFtdcMarketDataStaticField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"OpenPrice", "HighestPrice", "LowestPrice", "ClosePrice", "UpperLimitPrice", "LowerLimitPrice", "SettlementPrice", "CurrDelta",  NULL};


    ///今开盘
    // TThostFtdcPriceType double
    double MarketDataStaticField_OpenPrice = 0.0;
        
    ///最高价
    // TThostFtdcPriceType double
    double MarketDataStaticField_HighestPrice = 0.0;
        
    ///最低价
    // TThostFtdcPriceType double
    double MarketDataStaticField_LowestPrice = 0.0;
        
    ///今收盘
    // TThostFtdcPriceType double
    double MarketDataStaticField_ClosePrice = 0.0;
        
    ///涨停板价
    // TThostFtdcPriceType double
    double MarketDataStaticField_UpperLimitPrice = 0.0;
        
    ///跌停板价
    // TThostFtdcPriceType double
    double MarketDataStaticField_LowerLimitPrice = 0.0;
        
    ///本次结算价
    // TThostFtdcPriceType double
    double MarketDataStaticField_SettlementPrice = 0.0;
        
    ///今虚实度
    // TThostFtdcRatioType double
    double MarketDataStaticField_CurrDelta = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|dddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|dddddddd", (char **)kwlist
#endif

        , &MarketDataStaticField_OpenPrice 
        , &MarketDataStaticField_HighestPrice 
        , &MarketDataStaticField_LowestPrice 
        , &MarketDataStaticField_ClosePrice 
        , &MarketDataStaticField_UpperLimitPrice 
        , &MarketDataStaticField_LowerLimitPrice 
        , &MarketDataStaticField_SettlementPrice 
        , &MarketDataStaticField_CurrDelta 


    )) {
        return -1;
    }


    ///今开盘
    // TThostFtdcPriceType double
    self->data.OpenPrice = MarketDataStaticField_OpenPrice;
        
    ///最高价
    // TThostFtdcPriceType double
    self->data.HighestPrice = MarketDataStaticField_HighestPrice;
        
    ///最低价
    // TThostFtdcPriceType double
    self->data.LowestPrice = MarketDataStaticField_LowestPrice;
        
    ///今收盘
    // TThostFtdcPriceType double
    self->data.ClosePrice = MarketDataStaticField_ClosePrice;
        
    ///涨停板价
    // TThostFtdcPriceType double
    self->data.UpperLimitPrice = MarketDataStaticField_UpperLimitPrice;
        
    ///跌停板价
    // TThostFtdcPriceType double
    self->data.LowerLimitPrice = MarketDataStaticField_LowerLimitPrice;
        
    ///本次结算价
    // TThostFtdcPriceType double
    self->data.SettlementPrice = MarketDataStaticField_SettlementPrice;
        
    ///今虚实度
    // TThostFtdcRatioType double
    self->data.CurrDelta = MarketDataStaticField_CurrDelta;
        

    return 0;
}

static void PyCThostFtdcMarketDataStaticField_dealloc(PyCThostFtdcMarketDataStaticField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataStaticField_repr(PyCThostFtdcMarketDataStaticField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

        ,"OpenPrice", self->data.OpenPrice 
        ,"HighestPrice", self->data.HighestPrice 
        ,"LowestPrice", self->data.LowestPrice 
        ,"ClosePrice", self->data.ClosePrice 
        ,"UpperLimitPrice", self->data.UpperLimitPrice 
        ,"LowerLimitPrice", self->data.LowerLimitPrice 
        ,"SettlementPrice", self->data.SettlementPrice 
        ,"CurrDelta", self->data.CurrDelta 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataStaticField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///今开盘
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataStaticField_get_OpenPrice(PyCThostFtdcMarketDataStaticField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenPrice);
}

///今开盘
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataStaticField_set_OpenPrice(PyCThostFtdcMarketDataStaticField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenPrice = buf;
    return 0;
}
        
///最高价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataStaticField_get_HighestPrice(PyCThostFtdcMarketDataStaticField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HighestPrice);
}

///最高价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataStaticField_set_HighestPrice(PyCThostFtdcMarketDataStaticField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HighestPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HighestPrice = buf;
    return 0;
}
        
///最低价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataStaticField_get_LowestPrice(PyCThostFtdcMarketDataStaticField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LowestPrice);
}

///最低价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataStaticField_set_LowestPrice(PyCThostFtdcMarketDataStaticField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LowestPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LowestPrice = buf;
    return 0;
}
        
///今收盘
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataStaticField_get_ClosePrice(PyCThostFtdcMarketDataStaticField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ClosePrice);
}

///今收盘
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataStaticField_set_ClosePrice(PyCThostFtdcMarketDataStaticField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ClosePrice = buf;
    return 0;
}
        
///涨停板价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataStaticField_get_UpperLimitPrice(PyCThostFtdcMarketDataStaticField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UpperLimitPrice);
}

///涨停板价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataStaticField_set_UpperLimitPrice(PyCThostFtdcMarketDataStaticField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UpperLimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UpperLimitPrice = buf;
    return 0;
}
        
///跌停板价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataStaticField_get_LowerLimitPrice(PyCThostFtdcMarketDataStaticField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LowerLimitPrice);
}

///跌停板价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataStaticField_set_LowerLimitPrice(PyCThostFtdcMarketDataStaticField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LowerLimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LowerLimitPrice = buf;
    return 0;
}
        
///本次结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataStaticField_get_SettlementPrice(PyCThostFtdcMarketDataStaticField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SettlementPrice);
}

///本次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataStaticField_set_SettlementPrice(PyCThostFtdcMarketDataStaticField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SettlementPrice = buf;
    return 0;
}
        
///今虚实度
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcMarketDataStaticField_get_CurrDelta(PyCThostFtdcMarketDataStaticField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CurrDelta);
}

///今虚实度
// TThostFtdcRatioType double
static int PyCThostFtdcMarketDataStaticField_set_CurrDelta(PyCThostFtdcMarketDataStaticField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CurrDelta = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcMarketDataStaticField_getset[] = {
    ///今开盘 
    {(char *)"OpenPrice", (getter)PyCThostFtdcMarketDataStaticField_get_OpenPrice, (setter)PyCThostFtdcMarketDataStaticField_set_OpenPrice, (char *)"OpenPrice", NULL},
    ///最高价 
    {(char *)"HighestPrice", (getter)PyCThostFtdcMarketDataStaticField_get_HighestPrice, (setter)PyCThostFtdcMarketDataStaticField_set_HighestPrice, (char *)"HighestPrice", NULL},
    ///最低价 
    {(char *)"LowestPrice", (getter)PyCThostFtdcMarketDataStaticField_get_LowestPrice, (setter)PyCThostFtdcMarketDataStaticField_set_LowestPrice, (char *)"LowestPrice", NULL},
    ///今收盘 
    {(char *)"ClosePrice", (getter)PyCThostFtdcMarketDataStaticField_get_ClosePrice, (setter)PyCThostFtdcMarketDataStaticField_set_ClosePrice, (char *)"ClosePrice", NULL},
    ///涨停板价 
    {(char *)"UpperLimitPrice", (getter)PyCThostFtdcMarketDataStaticField_get_UpperLimitPrice, (setter)PyCThostFtdcMarketDataStaticField_set_UpperLimitPrice, (char *)"UpperLimitPrice", NULL},
    ///跌停板价 
    {(char *)"LowerLimitPrice", (getter)PyCThostFtdcMarketDataStaticField_get_LowerLimitPrice, (setter)PyCThostFtdcMarketDataStaticField_set_LowerLimitPrice, (char *)"LowerLimitPrice", NULL},
    ///本次结算价 
    {(char *)"SettlementPrice", (getter)PyCThostFtdcMarketDataStaticField_get_SettlementPrice, (setter)PyCThostFtdcMarketDataStaticField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
    ///今虚实度 
    {(char *)"CurrDelta", (getter)PyCThostFtdcMarketDataStaticField_get_CurrDelta, (setter)PyCThostFtdcMarketDataStaticField_set_CurrDelta, (char *)"CurrDelta", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataStaticFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataStaticField",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataStaticField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataStaticField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataStaticField_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataStaticField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataStaticField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataStaticField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataStaticField_new,       /* tp_new */
};

int PyCThostFtdcMarketDataStaticFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataStaticField  */
	if (PyType_Ready(&PyCThostFtdcMarketDataStaticFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataStaticField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataStaticFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataStaticField", (PyObject *)&PyCThostFtdcMarketDataStaticFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataStaticField to module");
        Py_DECREF(&PyCThostFtdcMarketDataStaticFieldType);
		return -1;
    }

    return 0;
}
