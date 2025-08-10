
#include "PyCThostFtdcMarketDataBestPriceField.h"

///行情最优价属性

static PyObject *PyCThostFtdcMarketDataBestPriceField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataBestPriceField *self = (PyCThostFtdcMarketDataBestPriceField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataBestPriceField_init(PyCThostFtdcMarketDataBestPriceField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BidPrice1", "BidVolume1", "AskPrice1", "AskVolume1",  NULL};


    ///申买价一
    // TThostFtdcPriceType double
    double MarketDataBestPriceField_BidPrice1 = 0.0;
        
    ///申买量一
    // TThostFtdcVolumeType int
    int MarketDataBestPriceField_BidVolume1 = 0;
        
    ///申卖价一
    // TThostFtdcPriceType double
    double MarketDataBestPriceField_AskPrice1 = 0.0;
        
    ///申卖量一
    // TThostFtdcVolumeType int
    int MarketDataBestPriceField_AskVolume1 = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
#endif

        , &MarketDataBestPriceField_BidPrice1 
        , &MarketDataBestPriceField_BidVolume1 
        , &MarketDataBestPriceField_AskPrice1 
        , &MarketDataBestPriceField_AskVolume1 


    )) {
        return -1;
    }


    ///申买价一
    // TThostFtdcPriceType double
    self->data.BidPrice1 = MarketDataBestPriceField_BidPrice1;
        
    ///申买量一
    // TThostFtdcVolumeType int
    self->data.BidVolume1 = MarketDataBestPriceField_BidVolume1;
        
    ///申卖价一
    // TThostFtdcPriceType double
    self->data.AskPrice1 = MarketDataBestPriceField_AskPrice1;
        
    ///申卖量一
    // TThostFtdcVolumeType int
    self->data.AskVolume1 = MarketDataBestPriceField_AskVolume1;
        

    return 0;
}

static void PyCThostFtdcMarketDataBestPriceField_dealloc(PyCThostFtdcMarketDataBestPriceField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataBestPriceField_repr(PyCThostFtdcMarketDataBestPriceField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:d,s:i,s:d,s:i}"
#endif

        ,"BidPrice1", self->data.BidPrice1 
        ,"BidVolume1", self->data.BidVolume1 
        ,"AskPrice1", self->data.AskPrice1 
        ,"AskVolume1", self->data.AskVolume1 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBestPriceField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///申买价一
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataBestPriceField_get_BidPrice1(PyCThostFtdcMarketDataBestPriceField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice1);
}

///申买价一
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataBestPriceField_set_BidPrice1(PyCThostFtdcMarketDataBestPriceField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice1 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice1 = buf;
    return 0;
}
        
///申买量一
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcMarketDataBestPriceField_get_BidVolume1(PyCThostFtdcMarketDataBestPriceField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume1);
#else
    return PyInt_FromLong(self->data.BidVolume1);
#endif
}

///申买量一
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataBestPriceField_set_BidVolume1(PyCThostFtdcMarketDataBestPriceField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume1 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume1 Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BidVolume1 value out of range for C int");
        return -1;
    }
    self->data.BidVolume1 = (int)buf;
    return 0;
}
        
///申卖价一
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataBestPriceField_get_AskPrice1(PyCThostFtdcMarketDataBestPriceField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice1);
}

///申卖价一
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataBestPriceField_set_AskPrice1(PyCThostFtdcMarketDataBestPriceField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice1 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice1 = buf;
    return 0;
}
        
///申卖量一
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcMarketDataBestPriceField_get_AskVolume1(PyCThostFtdcMarketDataBestPriceField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume1);
#else
    return PyInt_FromLong(self->data.AskVolume1);
#endif
}

///申卖量一
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataBestPriceField_set_AskVolume1(PyCThostFtdcMarketDataBestPriceField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume1 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume1 Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the AskVolume1 value out of range for C int");
        return -1;
    }
    self->data.AskVolume1 = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcMarketDataBestPriceField_getset[] = {
    ///申买价一 
    {(char *)"BidPrice1", (getter)PyCThostFtdcMarketDataBestPriceField_get_BidPrice1, (setter)PyCThostFtdcMarketDataBestPriceField_set_BidPrice1, (char *)"BidPrice1", NULL},
    ///申买量一 
    {(char *)"BidVolume1", (getter)PyCThostFtdcMarketDataBestPriceField_get_BidVolume1, (setter)PyCThostFtdcMarketDataBestPriceField_set_BidVolume1, (char *)"BidVolume1", NULL},
    ///申卖价一 
    {(char *)"AskPrice1", (getter)PyCThostFtdcMarketDataBestPriceField_get_AskPrice1, (setter)PyCThostFtdcMarketDataBestPriceField_set_AskPrice1, (char *)"AskPrice1", NULL},
    ///申卖量一 
    {(char *)"AskVolume1", (getter)PyCThostFtdcMarketDataBestPriceField_get_AskVolume1, (setter)PyCThostFtdcMarketDataBestPriceField_set_AskVolume1, (char *)"AskVolume1", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataBestPriceFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataBestPriceField",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataBestPriceField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataBestPriceField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataBestPriceField_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataBestPriceField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataBestPriceField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataBestPriceField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataBestPriceField_new,       /* tp_new */
};

int PyCThostFtdcMarketDataBestPriceFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataBestPriceField  */
	if (PyType_Ready(&PyCThostFtdcMarketDataBestPriceFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataBestPriceField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataBestPriceFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataBestPriceField", (PyObject *)&PyCThostFtdcMarketDataBestPriceFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataBestPriceField to module");
        Py_DECREF(&PyCThostFtdcMarketDataBestPriceFieldType);
		return -1;
    }

    return 0;
}
