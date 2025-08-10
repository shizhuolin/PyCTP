
#include "PyCThostFtdcMarketDataAsk23Field.h"

///行情申卖二、三属性

static PyObject *PyCThostFtdcMarketDataAsk23Field_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataAsk23Field *self = (PyCThostFtdcMarketDataAsk23Field *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataAsk23Field_init(PyCThostFtdcMarketDataAsk23Field *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"AskPrice2", "AskVolume2", "AskPrice3", "AskVolume3",  NULL};


    ///申卖价二
    // TThostFtdcPriceType double
    double MarketDataAsk23Field_AskPrice2 = 0.0;
        
    ///申卖量二
    // TThostFtdcVolumeType int
    int MarketDataAsk23Field_AskVolume2 = 0;
        
    ///申卖价三
    // TThostFtdcPriceType double
    double MarketDataAsk23Field_AskPrice3 = 0.0;
        
    ///申卖量三
    // TThostFtdcVolumeType int
    int MarketDataAsk23Field_AskVolume3 = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
#endif

        , &MarketDataAsk23Field_AskPrice2 
        , &MarketDataAsk23Field_AskVolume2 
        , &MarketDataAsk23Field_AskPrice3 
        , &MarketDataAsk23Field_AskVolume3 


    )) {
        return -1;
    }


    ///申卖价二
    // TThostFtdcPriceType double
    self->data.AskPrice2 = MarketDataAsk23Field_AskPrice2;
        
    ///申卖量二
    // TThostFtdcVolumeType int
    self->data.AskVolume2 = MarketDataAsk23Field_AskVolume2;
        
    ///申卖价三
    // TThostFtdcPriceType double
    self->data.AskPrice3 = MarketDataAsk23Field_AskPrice3;
        
    ///申卖量三
    // TThostFtdcVolumeType int
    self->data.AskVolume3 = MarketDataAsk23Field_AskVolume3;
        

    return 0;
}

static void PyCThostFtdcMarketDataAsk23Field_dealloc(PyCThostFtdcMarketDataAsk23Field *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataAsk23Field_repr(PyCThostFtdcMarketDataAsk23Field *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:i}"
#endif

        ,"AskPrice2", self->data.AskPrice2 
        ,"AskVolume2", self->data.AskVolume2 
        ,"AskPrice3", self->data.AskPrice3 
        ,"AskVolume3", self->data.AskVolume3 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataAsk23Field representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///申卖价二
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataAsk23Field_get_AskPrice2(PyCThostFtdcMarketDataAsk23Field *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice2);
}

///申卖价二
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataAsk23Field_set_AskPrice2(PyCThostFtdcMarketDataAsk23Field *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice2 = buf;
    return 0;
}
        
///申卖量二
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcMarketDataAsk23Field_get_AskVolume2(PyCThostFtdcMarketDataAsk23Field *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume2);
#else
    return PyInt_FromLong(self->data.AskVolume2);
#endif
}

///申卖量二
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataAsk23Field_set_AskVolume2(PyCThostFtdcMarketDataAsk23Field *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume2 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume2 Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the AskVolume2 value out of range for C int");
        return -1;
    }
    self->data.AskVolume2 = (int)buf;
    return 0;
}
        
///申卖价三
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataAsk23Field_get_AskPrice3(PyCThostFtdcMarketDataAsk23Field *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice3);
}

///申卖价三
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataAsk23Field_set_AskPrice3(PyCThostFtdcMarketDataAsk23Field *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice3 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice3 = buf;
    return 0;
}
        
///申卖量三
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcMarketDataAsk23Field_get_AskVolume3(PyCThostFtdcMarketDataAsk23Field *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume3);
#else
    return PyInt_FromLong(self->data.AskVolume3);
#endif
}

///申卖量三
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataAsk23Field_set_AskVolume3(PyCThostFtdcMarketDataAsk23Field *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume3 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume3 Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the AskVolume3 value out of range for C int");
        return -1;
    }
    self->data.AskVolume3 = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcMarketDataAsk23Field_getset[] = {
    ///申卖价二 
    {(char *)"AskPrice2", (getter)PyCThostFtdcMarketDataAsk23Field_get_AskPrice2, (setter)PyCThostFtdcMarketDataAsk23Field_set_AskPrice2, (char *)"AskPrice2", NULL},
    ///申卖量二 
    {(char *)"AskVolume2", (getter)PyCThostFtdcMarketDataAsk23Field_get_AskVolume2, (setter)PyCThostFtdcMarketDataAsk23Field_set_AskVolume2, (char *)"AskVolume2", NULL},
    ///申卖价三 
    {(char *)"AskPrice3", (getter)PyCThostFtdcMarketDataAsk23Field_get_AskPrice3, (setter)PyCThostFtdcMarketDataAsk23Field_set_AskPrice3, (char *)"AskPrice3", NULL},
    ///申卖量三 
    {(char *)"AskVolume3", (getter)PyCThostFtdcMarketDataAsk23Field_get_AskVolume3, (setter)PyCThostFtdcMarketDataAsk23Field_set_AskVolume3, (char *)"AskVolume3", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataAsk23FieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataAsk23Field",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataAsk23Field),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataAsk23Field_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataAsk23Field_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataAsk23Field",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataAsk23Field_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataAsk23Field_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataAsk23Field_new,       /* tp_new */
};

int PyCThostFtdcMarketDataAsk23FieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataAsk23Field  */
	if (PyType_Ready(&PyCThostFtdcMarketDataAsk23FieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataAsk23Field");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataAsk23FieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataAsk23Field", (PyObject *)&PyCThostFtdcMarketDataAsk23FieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataAsk23Field to module");
        Py_DECREF(&PyCThostFtdcMarketDataAsk23FieldType);
		return -1;
    }

    return 0;
}
