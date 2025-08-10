
#include "PyCThostFtdcMarketDataLastMatchField.h"

///行情最新成交属性

static PyObject *PyCThostFtdcMarketDataLastMatchField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataLastMatchField *self = (PyCThostFtdcMarketDataLastMatchField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataLastMatchField_init(PyCThostFtdcMarketDataLastMatchField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"LastPrice", "Volume", "Turnover", "OpenInterest",  NULL};


    ///最新价
    // TThostFtdcPriceType double
    double MarketDataLastMatchField_LastPrice = 0.0;
        
    ///数量
    // TThostFtdcVolumeType int
    int MarketDataLastMatchField_Volume = 0;
        
    ///成交金额
    // TThostFtdcMoneyType double
    double MarketDataLastMatchField_Turnover = 0.0;
        
    ///持仓量
    // TThostFtdcLargeVolumeType double
    double MarketDataLastMatchField_OpenInterest = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didd", (char **)kwlist
#endif

        , &MarketDataLastMatchField_LastPrice 
        , &MarketDataLastMatchField_Volume 
        , &MarketDataLastMatchField_Turnover 
        , &MarketDataLastMatchField_OpenInterest 


    )) {
        return -1;
    }


    ///最新价
    // TThostFtdcPriceType double
    self->data.LastPrice = MarketDataLastMatchField_LastPrice;
        
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = MarketDataLastMatchField_Volume;
        
    ///成交金额
    // TThostFtdcMoneyType double
    self->data.Turnover = MarketDataLastMatchField_Turnover;
        
    ///持仓量
    // TThostFtdcLargeVolumeType double
    self->data.OpenInterest = MarketDataLastMatchField_OpenInterest;
        

    return 0;
}

static void PyCThostFtdcMarketDataLastMatchField_dealloc(PyCThostFtdcMarketDataLastMatchField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataLastMatchField_repr(PyCThostFtdcMarketDataLastMatchField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:d}"
#endif

        ,"LastPrice", self->data.LastPrice 
        ,"Volume", self->data.Volume 
        ,"Turnover", self->data.Turnover 
        ,"OpenInterest", self->data.OpenInterest 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataLastMatchField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///最新价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataLastMatchField_get_LastPrice(PyCThostFtdcMarketDataLastMatchField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LastPrice);
}

///最新价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataLastMatchField_set_LastPrice(PyCThostFtdcMarketDataLastMatchField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LastPrice = buf;
    return 0;
}
        
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcMarketDataLastMatchField_get_Volume(PyCThostFtdcMarketDataLastMatchField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataLastMatchField_set_Volume(PyCThostFtdcMarketDataLastMatchField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Volume value out of range for C int");
        return -1;
    }
    self->data.Volume = (int)buf;
    return 0;
}
        
///成交金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcMarketDataLastMatchField_get_Turnover(PyCThostFtdcMarketDataLastMatchField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Turnover);
}

///成交金额
// TThostFtdcMoneyType double
static int PyCThostFtdcMarketDataLastMatchField_set_Turnover(PyCThostFtdcMarketDataLastMatchField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Turnover Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Turnover = buf;
    return 0;
}
        
///持仓量
// TThostFtdcLargeVolumeType double
static PyObject *PyCThostFtdcMarketDataLastMatchField_get_OpenInterest(PyCThostFtdcMarketDataLastMatchField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenInterest);
}

///持仓量
// TThostFtdcLargeVolumeType double
static int PyCThostFtdcMarketDataLastMatchField_set_OpenInterest(PyCThostFtdcMarketDataLastMatchField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenInterest Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenInterest = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcMarketDataLastMatchField_getset[] = {
    ///最新价 
    {(char *)"LastPrice", (getter)PyCThostFtdcMarketDataLastMatchField_get_LastPrice, (setter)PyCThostFtdcMarketDataLastMatchField_set_LastPrice, (char *)"LastPrice", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcMarketDataLastMatchField_get_Volume, (setter)PyCThostFtdcMarketDataLastMatchField_set_Volume, (char *)"Volume", NULL},
    ///成交金额 
    {(char *)"Turnover", (getter)PyCThostFtdcMarketDataLastMatchField_get_Turnover, (setter)PyCThostFtdcMarketDataLastMatchField_set_Turnover, (char *)"Turnover", NULL},
    ///持仓量 
    {(char *)"OpenInterest", (getter)PyCThostFtdcMarketDataLastMatchField_get_OpenInterest, (setter)PyCThostFtdcMarketDataLastMatchField_set_OpenInterest, (char *)"OpenInterest", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataLastMatchFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataLastMatchField",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataLastMatchField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataLastMatchField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataLastMatchField_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataLastMatchField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataLastMatchField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataLastMatchField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataLastMatchField_new,       /* tp_new */
};

int PyCThostFtdcMarketDataLastMatchFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataLastMatchField  */
	if (PyType_Ready(&PyCThostFtdcMarketDataLastMatchFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataLastMatchField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataLastMatchFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataLastMatchField", (PyObject *)&PyCThostFtdcMarketDataLastMatchFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataLastMatchField to module");
        Py_DECREF(&PyCThostFtdcMarketDataLastMatchFieldType);
		return -1;
    }

    return 0;
}
