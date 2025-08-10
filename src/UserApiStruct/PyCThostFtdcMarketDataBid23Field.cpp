
#include "PyCThostFtdcMarketDataBid23Field.h"

///行情申买二、三属性

static PyObject *PyCThostFtdcMarketDataBid23Field_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataBid23Field *self = (PyCThostFtdcMarketDataBid23Field *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataBid23Field_init(PyCThostFtdcMarketDataBid23Field *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BidPrice2", "BidVolume2", "BidPrice3", "BidVolume3",  NULL};


    ///申买价二
    // TThostFtdcPriceType double
    double MarketDataBid23Field_BidPrice2 = 0.0;
        
    ///申买量二
    // TThostFtdcVolumeType int
    int MarketDataBid23Field_BidVolume2 = 0;
        
    ///申买价三
    // TThostFtdcPriceType double
    double MarketDataBid23Field_BidPrice3 = 0.0;
        
    ///申买量三
    // TThostFtdcVolumeType int
    int MarketDataBid23Field_BidVolume3 = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
#endif

        , &MarketDataBid23Field_BidPrice2 
        , &MarketDataBid23Field_BidVolume2 
        , &MarketDataBid23Field_BidPrice3 
        , &MarketDataBid23Field_BidVolume3 


    )) {
        return -1;
    }


    ///申买价二
    // TThostFtdcPriceType double
    self->data.BidPrice2 = MarketDataBid23Field_BidPrice2;
        
    ///申买量二
    // TThostFtdcVolumeType int
    self->data.BidVolume2 = MarketDataBid23Field_BidVolume2;
        
    ///申买价三
    // TThostFtdcPriceType double
    self->data.BidPrice3 = MarketDataBid23Field_BidPrice3;
        
    ///申买量三
    // TThostFtdcVolumeType int
    self->data.BidVolume3 = MarketDataBid23Field_BidVolume3;
        

    return 0;
}

static void PyCThostFtdcMarketDataBid23Field_dealloc(PyCThostFtdcMarketDataBid23Field *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataBid23Field_repr(PyCThostFtdcMarketDataBid23Field *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:i}"
#endif

        ,"BidPrice2", self->data.BidPrice2 
        ,"BidVolume2", self->data.BidVolume2 
        ,"BidPrice3", self->data.BidPrice3 
        ,"BidVolume3", self->data.BidVolume3 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBid23Field representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///申买价二
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataBid23Field_get_BidPrice2(PyCThostFtdcMarketDataBid23Field *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice2);
}

///申买价二
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataBid23Field_set_BidPrice2(PyCThostFtdcMarketDataBid23Field *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice2 = buf;
    return 0;
}
        
///申买量二
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcMarketDataBid23Field_get_BidVolume2(PyCThostFtdcMarketDataBid23Field *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume2);
#else
    return PyInt_FromLong(self->data.BidVolume2);
#endif
}

///申买量二
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataBid23Field_set_BidVolume2(PyCThostFtdcMarketDataBid23Field *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume2 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume2 Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BidVolume2 value out of range for C int");
        return -1;
    }
    self->data.BidVolume2 = (int)buf;
    return 0;
}
        
///申买价三
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataBid23Field_get_BidPrice3(PyCThostFtdcMarketDataBid23Field *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice3);
}

///申买价三
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataBid23Field_set_BidPrice3(PyCThostFtdcMarketDataBid23Field *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice3 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice3 = buf;
    return 0;
}
        
///申买量三
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcMarketDataBid23Field_get_BidVolume3(PyCThostFtdcMarketDataBid23Field *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume3);
#else
    return PyInt_FromLong(self->data.BidVolume3);
#endif
}

///申买量三
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataBid23Field_set_BidVolume3(PyCThostFtdcMarketDataBid23Field *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume3 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume3 Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BidVolume3 value out of range for C int");
        return -1;
    }
    self->data.BidVolume3 = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcMarketDataBid23Field_getset[] = {
    ///申买价二 
    {(char *)"BidPrice2", (getter)PyCThostFtdcMarketDataBid23Field_get_BidPrice2, (setter)PyCThostFtdcMarketDataBid23Field_set_BidPrice2, (char *)"BidPrice2", NULL},
    ///申买量二 
    {(char *)"BidVolume2", (getter)PyCThostFtdcMarketDataBid23Field_get_BidVolume2, (setter)PyCThostFtdcMarketDataBid23Field_set_BidVolume2, (char *)"BidVolume2", NULL},
    ///申买价三 
    {(char *)"BidPrice3", (getter)PyCThostFtdcMarketDataBid23Field_get_BidPrice3, (setter)PyCThostFtdcMarketDataBid23Field_set_BidPrice3, (char *)"BidPrice3", NULL},
    ///申买量三 
    {(char *)"BidVolume3", (getter)PyCThostFtdcMarketDataBid23Field_get_BidVolume3, (setter)PyCThostFtdcMarketDataBid23Field_set_BidVolume3, (char *)"BidVolume3", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataBid23FieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataBid23Field",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataBid23Field),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataBid23Field_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataBid23Field_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataBid23Field",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataBid23Field_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataBid23Field_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataBid23Field_new,       /* tp_new */
};

int PyCThostFtdcMarketDataBid23FieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataBid23Field  */
	if (PyType_Ready(&PyCThostFtdcMarketDataBid23FieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataBid23Field");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataBid23FieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataBid23Field", (PyObject *)&PyCThostFtdcMarketDataBid23FieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataBid23Field to module");
        Py_DECREF(&PyCThostFtdcMarketDataBid23FieldType);
		return -1;
    }

    return 0;
}
