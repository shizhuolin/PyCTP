
#include "PyCThostFtdcMarketDataBandingPriceField.h"



static PyObject *PyCThostFtdcMarketDataBandingPriceField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataBandingPriceField *self = (PyCThostFtdcMarketDataBandingPriceField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataBandingPriceField_init(PyCThostFtdcMarketDataBandingPriceField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BandingUpperPrice", "BandingLowerPrice",  NULL};

	//TThostFtdcPriceType double
	double pMarketDataBandingPriceField_BandingUpperPrice = 0.0;

	//TThostFtdcPriceType double
	double pMarketDataBandingPriceField_BandingLowerPrice = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|dd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|dd", (char **)kwlist
#endif

		, &pMarketDataBandingPriceField_BandingUpperPrice
		, &pMarketDataBandingPriceField_BandingLowerPrice


    )) {
        return -1;
    }

	//TThostFtdcPriceType double
	self->data.BandingUpperPrice = pMarketDataBandingPriceField_BandingUpperPrice;
	//TThostFtdcPriceType double
	self->data.BandingLowerPrice = pMarketDataBandingPriceField_BandingLowerPrice;


    return 0;
}

static void PyCThostFtdcMarketDataBandingPriceField_dealloc(PyCThostFtdcMarketDataBandingPriceField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataBandingPriceField_repr(PyCThostFtdcMarketDataBandingPriceField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:d,s:d}"
#endif

		, "BandingUpperPrice", self->data.BandingUpperPrice
		, "BandingLowerPrice", self->data.BandingLowerPrice


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBandingPriceField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcMarketDataBandingPriceField_get_BandingUpperPrice(PyCThostFtdcMarketDataBandingPriceField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BandingUpperPrice);
}

static PyObject *PyCThostFtdcMarketDataBandingPriceField_get_BandingLowerPrice(PyCThostFtdcMarketDataBandingPriceField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BandingLowerPrice);
}

static int PyCThostFtdcMarketDataBandingPriceField_set_BandingUpperPrice(PyCThostFtdcMarketDataBandingPriceField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BandingUpperPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BandingUpperPrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataBandingPriceField_set_BandingLowerPrice(PyCThostFtdcMarketDataBandingPriceField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BandingLowerPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BandingLowerPrice = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcMarketDataBandingPriceField_getset[] = {
	 {(char *)"BandingUpperPrice", (getter)PyCThostFtdcMarketDataBandingPriceField_get_BandingUpperPrice, (setter)PyCThostFtdcMarketDataBandingPriceField_set_BandingUpperPrice, (char *)"BandingUpperPrice", NULL},
	 {(char *)"BandingLowerPrice", (getter)PyCThostFtdcMarketDataBandingPriceField_get_BandingLowerPrice, (setter)PyCThostFtdcMarketDataBandingPriceField_set_BandingLowerPrice, (char *)"BandingLowerPrice", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataBandingPriceFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataBandingPriceField",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataBandingPriceField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataBandingPriceField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataBandingPriceField_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataBandingPriceField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataBandingPriceField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataBandingPriceField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataBandingPriceField_new,       /* tp_new */
};

int PyCThostFtdcMarketDataBandingPriceFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataBandingPriceField  */
	if (PyType_Ready(&PyCThostFtdcMarketDataBandingPriceFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataBandingPriceField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataBandingPriceFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataBandingPriceField", (PyObject *)&PyCThostFtdcMarketDataBandingPriceFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataBandingPriceField to module");
        Py_DECREF(&PyCThostFtdcMarketDataBandingPriceFieldType);
		return -1;
    }

    return 0;
}
