
#include "PyCThostFtdcMarketDataAveragePriceField.h"

///成交均价

static PyObject *PyCThostFtdcMarketDataAveragePriceField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataAveragePriceField *self = (PyCThostFtdcMarketDataAveragePriceField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataAveragePriceField_init(PyCThostFtdcMarketDataAveragePriceField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"AveragePrice",  NULL};


    ///当日均价
    // TThostFtdcPriceType double
    double MarketDataAveragePriceField_AveragePrice = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|d", (char **)kwlist
#endif

        , &MarketDataAveragePriceField_AveragePrice 


    )) {
        return -1;
    }


    ///当日均价
    // TThostFtdcPriceType double
    self->data.AveragePrice = MarketDataAveragePriceField_AveragePrice;
        

    return 0;
}

static void PyCThostFtdcMarketDataAveragePriceField_dealloc(PyCThostFtdcMarketDataAveragePriceField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataAveragePriceField_repr(PyCThostFtdcMarketDataAveragePriceField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:d}"
#endif

        ,"AveragePrice", self->data.AveragePrice 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataAveragePriceField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///当日均价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataAveragePriceField_get_AveragePrice(PyCThostFtdcMarketDataAveragePriceField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AveragePrice);
}

///当日均价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataAveragePriceField_set_AveragePrice(PyCThostFtdcMarketDataAveragePriceField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AveragePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AveragePrice = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcMarketDataAveragePriceField_getset[] = {
    ///当日均价 
    {(char *)"AveragePrice", (getter)PyCThostFtdcMarketDataAveragePriceField_get_AveragePrice, (setter)PyCThostFtdcMarketDataAveragePriceField_set_AveragePrice, (char *)"AveragePrice", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataAveragePriceFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataAveragePriceField",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataAveragePriceField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataAveragePriceField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataAveragePriceField_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataAveragePriceField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataAveragePriceField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataAveragePriceField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataAveragePriceField_new,       /* tp_new */
};

int PyCThostFtdcMarketDataAveragePriceFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataAveragePriceField  */
	if (PyType_Ready(&PyCThostFtdcMarketDataAveragePriceFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataAveragePriceField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataAveragePriceFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataAveragePriceField", (PyObject *)&PyCThostFtdcMarketDataAveragePriceFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataAveragePriceField to module");
        Py_DECREF(&PyCThostFtdcMarketDataAveragePriceFieldType);
		return -1;
    }

    return 0;
}
