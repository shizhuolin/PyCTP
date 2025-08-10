
#include "PyCThostFtdcMarketDataAsk45Field.h"

///行情申卖四、五属性

static PyObject *PyCThostFtdcMarketDataAsk45Field_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataAsk45Field *self = (PyCThostFtdcMarketDataAsk45Field *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataAsk45Field_init(PyCThostFtdcMarketDataAsk45Field *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"AskPrice4", "AskVolume4", "AskPrice5", "AskVolume5",  NULL};


    ///申卖价四
    // TThostFtdcPriceType double
    double MarketDataAsk45Field_AskPrice4 = 0.0;
        
    ///申卖量四
    // TThostFtdcVolumeType int
    int MarketDataAsk45Field_AskVolume4 = 0;
        
    ///申卖价五
    // TThostFtdcPriceType double
    double MarketDataAsk45Field_AskPrice5 = 0.0;
        
    ///申卖量五
    // TThostFtdcVolumeType int
    int MarketDataAsk45Field_AskVolume5 = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
#endif

        , &MarketDataAsk45Field_AskPrice4 
        , &MarketDataAsk45Field_AskVolume4 
        , &MarketDataAsk45Field_AskPrice5 
        , &MarketDataAsk45Field_AskVolume5 


    )) {
        return -1;
    }


    ///申卖价四
    // TThostFtdcPriceType double
    self->data.AskPrice4 = MarketDataAsk45Field_AskPrice4;
        
    ///申卖量四
    // TThostFtdcVolumeType int
    self->data.AskVolume4 = MarketDataAsk45Field_AskVolume4;
        
    ///申卖价五
    // TThostFtdcPriceType double
    self->data.AskPrice5 = MarketDataAsk45Field_AskPrice5;
        
    ///申卖量五
    // TThostFtdcVolumeType int
    self->data.AskVolume5 = MarketDataAsk45Field_AskVolume5;
        

    return 0;
}

static void PyCThostFtdcMarketDataAsk45Field_dealloc(PyCThostFtdcMarketDataAsk45Field *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataAsk45Field_repr(PyCThostFtdcMarketDataAsk45Field *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:i}"
#endif

        ,"AskPrice4", self->data.AskPrice4 
        ,"AskVolume4", self->data.AskVolume4 
        ,"AskPrice5", self->data.AskPrice5 
        ,"AskVolume5", self->data.AskVolume5 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataAsk45Field representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///申卖价四
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataAsk45Field_get_AskPrice4(PyCThostFtdcMarketDataAsk45Field *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice4);
}

///申卖价四
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataAsk45Field_set_AskPrice4(PyCThostFtdcMarketDataAsk45Field *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice4 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice4 = buf;
    return 0;
}
        
///申卖量四
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcMarketDataAsk45Field_get_AskVolume4(PyCThostFtdcMarketDataAsk45Field *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume4);
#else
    return PyInt_FromLong(self->data.AskVolume4);
#endif
}

///申卖量四
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataAsk45Field_set_AskVolume4(PyCThostFtdcMarketDataAsk45Field *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume4 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume4 Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the AskVolume4 value out of range for C int");
        return -1;
    }
    self->data.AskVolume4 = (int)buf;
    return 0;
}
        
///申卖价五
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataAsk45Field_get_AskPrice5(PyCThostFtdcMarketDataAsk45Field *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice5);
}

///申卖价五
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataAsk45Field_set_AskPrice5(PyCThostFtdcMarketDataAsk45Field *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice5 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice5 = buf;
    return 0;
}
        
///申卖量五
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcMarketDataAsk45Field_get_AskVolume5(PyCThostFtdcMarketDataAsk45Field *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume5);
#else
    return PyInt_FromLong(self->data.AskVolume5);
#endif
}

///申卖量五
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataAsk45Field_set_AskVolume5(PyCThostFtdcMarketDataAsk45Field *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume5 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume5 Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the AskVolume5 value out of range for C int");
        return -1;
    }
    self->data.AskVolume5 = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcMarketDataAsk45Field_getset[] = {
    ///申卖价四 
    {(char *)"AskPrice4", (getter)PyCThostFtdcMarketDataAsk45Field_get_AskPrice4, (setter)PyCThostFtdcMarketDataAsk45Field_set_AskPrice4, (char *)"AskPrice4", NULL},
    ///申卖量四 
    {(char *)"AskVolume4", (getter)PyCThostFtdcMarketDataAsk45Field_get_AskVolume4, (setter)PyCThostFtdcMarketDataAsk45Field_set_AskVolume4, (char *)"AskVolume4", NULL},
    ///申卖价五 
    {(char *)"AskPrice5", (getter)PyCThostFtdcMarketDataAsk45Field_get_AskPrice5, (setter)PyCThostFtdcMarketDataAsk45Field_set_AskPrice5, (char *)"AskPrice5", NULL},
    ///申卖量五 
    {(char *)"AskVolume5", (getter)PyCThostFtdcMarketDataAsk45Field_get_AskVolume5, (setter)PyCThostFtdcMarketDataAsk45Field_set_AskVolume5, (char *)"AskVolume5", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataAsk45FieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataAsk45Field",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataAsk45Field),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataAsk45Field_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataAsk45Field_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataAsk45Field",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataAsk45Field_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataAsk45Field_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataAsk45Field_new,       /* tp_new */
};

int PyCThostFtdcMarketDataAsk45FieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataAsk45Field  */
	if (PyType_Ready(&PyCThostFtdcMarketDataAsk45FieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataAsk45Field");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataAsk45FieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataAsk45Field", (PyObject *)&PyCThostFtdcMarketDataAsk45FieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataAsk45Field to module");
        Py_DECREF(&PyCThostFtdcMarketDataAsk45FieldType);
		return -1;
    }

    return 0;
}
