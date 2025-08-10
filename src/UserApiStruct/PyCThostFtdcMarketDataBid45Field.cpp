
#include "PyCThostFtdcMarketDataBid45Field.h"

///行情申买四、五属性

static PyObject *PyCThostFtdcMarketDataBid45Field_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataBid45Field *self = (PyCThostFtdcMarketDataBid45Field *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataBid45Field_init(PyCThostFtdcMarketDataBid45Field *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BidPrice4", "BidVolume4", "BidPrice5", "BidVolume5",  NULL};


    ///申买价四
    // TThostFtdcPriceType double
    double MarketDataBid45Field_BidPrice4 = 0.0;
        
    ///申买量四
    // TThostFtdcVolumeType int
    int MarketDataBid45Field_BidVolume4 = 0;
        
    ///申买价五
    // TThostFtdcPriceType double
    double MarketDataBid45Field_BidPrice5 = 0.0;
        
    ///申买量五
    // TThostFtdcVolumeType int
    int MarketDataBid45Field_BidVolume5 = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
#endif

        , &MarketDataBid45Field_BidPrice4 
        , &MarketDataBid45Field_BidVolume4 
        , &MarketDataBid45Field_BidPrice5 
        , &MarketDataBid45Field_BidVolume5 


    )) {
        return -1;
    }


    ///申买价四
    // TThostFtdcPriceType double
    self->data.BidPrice4 = MarketDataBid45Field_BidPrice4;
        
    ///申买量四
    // TThostFtdcVolumeType int
    self->data.BidVolume4 = MarketDataBid45Field_BidVolume4;
        
    ///申买价五
    // TThostFtdcPriceType double
    self->data.BidPrice5 = MarketDataBid45Field_BidPrice5;
        
    ///申买量五
    // TThostFtdcVolumeType int
    self->data.BidVolume5 = MarketDataBid45Field_BidVolume5;
        

    return 0;
}

static void PyCThostFtdcMarketDataBid45Field_dealloc(PyCThostFtdcMarketDataBid45Field *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataBid45Field_repr(PyCThostFtdcMarketDataBid45Field *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:i}"
#endif

        ,"BidPrice4", self->data.BidPrice4 
        ,"BidVolume4", self->data.BidVolume4 
        ,"BidPrice5", self->data.BidPrice5 
        ,"BidVolume5", self->data.BidVolume5 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBid45Field representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///申买价四
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataBid45Field_get_BidPrice4(PyCThostFtdcMarketDataBid45Field *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice4);
}

///申买价四
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataBid45Field_set_BidPrice4(PyCThostFtdcMarketDataBid45Field *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice4 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice4 = buf;
    return 0;
}
        
///申买量四
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcMarketDataBid45Field_get_BidVolume4(PyCThostFtdcMarketDataBid45Field *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume4);
#else
    return PyInt_FromLong(self->data.BidVolume4);
#endif
}

///申买量四
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataBid45Field_set_BidVolume4(PyCThostFtdcMarketDataBid45Field *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume4 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume4 Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BidVolume4 value out of range for C int");
        return -1;
    }
    self->data.BidVolume4 = (int)buf;
    return 0;
}
        
///申买价五
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataBid45Field_get_BidPrice5(PyCThostFtdcMarketDataBid45Field *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice5);
}

///申买价五
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataBid45Field_set_BidPrice5(PyCThostFtdcMarketDataBid45Field *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice5 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice5 = buf;
    return 0;
}
        
///申买量五
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcMarketDataBid45Field_get_BidVolume5(PyCThostFtdcMarketDataBid45Field *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume5);
#else
    return PyInt_FromLong(self->data.BidVolume5);
#endif
}

///申买量五
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataBid45Field_set_BidVolume5(PyCThostFtdcMarketDataBid45Field *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume5 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume5 Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BidVolume5 value out of range for C int");
        return -1;
    }
    self->data.BidVolume5 = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcMarketDataBid45Field_getset[] = {
    ///申买价四 
    {(char *)"BidPrice4", (getter)PyCThostFtdcMarketDataBid45Field_get_BidPrice4, (setter)PyCThostFtdcMarketDataBid45Field_set_BidPrice4, (char *)"BidPrice4", NULL},
    ///申买量四 
    {(char *)"BidVolume4", (getter)PyCThostFtdcMarketDataBid45Field_get_BidVolume4, (setter)PyCThostFtdcMarketDataBid45Field_set_BidVolume4, (char *)"BidVolume4", NULL},
    ///申买价五 
    {(char *)"BidPrice5", (getter)PyCThostFtdcMarketDataBid45Field_get_BidPrice5, (setter)PyCThostFtdcMarketDataBid45Field_set_BidPrice5, (char *)"BidPrice5", NULL},
    ///申买量五 
    {(char *)"BidVolume5", (getter)PyCThostFtdcMarketDataBid45Field_get_BidVolume5, (setter)PyCThostFtdcMarketDataBid45Field_set_BidVolume5, (char *)"BidVolume5", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataBid45FieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataBid45Field",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataBid45Field),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataBid45Field_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataBid45Field_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataBid45Field",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataBid45Field_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataBid45Field_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataBid45Field_new,       /* tp_new */
};

int PyCThostFtdcMarketDataBid45FieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataBid45Field  */
	if (PyType_Ready(&PyCThostFtdcMarketDataBid45FieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataBid45Field");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataBid45FieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataBid45Field", (PyObject *)&PyCThostFtdcMarketDataBid45FieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataBid45Field to module");
        Py_DECREF(&PyCThostFtdcMarketDataBid45FieldType);
		return -1;
    }

    return 0;
}
