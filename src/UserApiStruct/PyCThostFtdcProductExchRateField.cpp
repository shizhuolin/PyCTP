
#include "PyCThostFtdcProductExchRateField.h"



static PyObject *PyCThostFtdcProductExchRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcProductExchRateField *self = (PyCThostFtdcProductExchRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcProductExchRateField_init(PyCThostFtdcProductExchRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "QuoteCurrencyID", "ExchangeRate", "ExchangeID", "ProductID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pProductExchRateField_reserve1 = NULL;
	Py_ssize_t pProductExchRateField_reserve1_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pProductExchRateField_QuoteCurrencyID = NULL;
	Py_ssize_t pProductExchRateField_QuoteCurrencyID_len = 0;

	//TThostFtdcExchangeRateType double
	double pProductExchRateField_ExchangeRate = 0.0;

	//TThostFtdcExchangeIDType char[9]
	const char *pProductExchRateField_ExchangeID = NULL;
	Py_ssize_t pProductExchRateField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pProductExchRateField_ProductID = NULL;
	Py_ssize_t pProductExchRateField_ProductID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ds#s#", (char **)kwlist
#endif

		, &pProductExchRateField_reserve1, &pProductExchRateField_reserve1_len
		, &pProductExchRateField_QuoteCurrencyID, &pProductExchRateField_QuoteCurrencyID_len
		, &pProductExchRateField_ExchangeRate
		, &pProductExchRateField_ExchangeID, &pProductExchRateField_ExchangeID_len
		, &pProductExchRateField_ProductID, &pProductExchRateField_ProductID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pProductExchRateField_reserve1 != NULL) {
		if(pProductExchRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pProductExchRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pProductExchRateField_reserve1, sizeof(self->data.reserve1) );
		pProductExchRateField_reserve1 = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pProductExchRateField_QuoteCurrencyID != NULL) {
		if(pProductExchRateField_QuoteCurrencyID_len > (Py_ssize_t)sizeof(self->data.QuoteCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "QuoteCurrencyID too long: length=%zd (max allowed is %zd)", pProductExchRateField_QuoteCurrencyID_len, (Py_ssize_t)sizeof(self->data.QuoteCurrencyID));
			return -1;
		}
		strncpy(self->data.QuoteCurrencyID, pProductExchRateField_QuoteCurrencyID, sizeof(self->data.QuoteCurrencyID) );
		pProductExchRateField_QuoteCurrencyID = NULL;
	}

	//TThostFtdcExchangeRateType double
	self->data.ExchangeRate = pProductExchRateField_ExchangeRate;
	//TThostFtdcExchangeIDType char[9]
	if(pProductExchRateField_ExchangeID != NULL) {
		if(pProductExchRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pProductExchRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pProductExchRateField_ExchangeID, sizeof(self->data.ExchangeID) );
		pProductExchRateField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pProductExchRateField_ProductID != NULL) {
		if(pProductExchRateField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pProductExchRateField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pProductExchRateField_ProductID, sizeof(self->data.ProductID) );
		pProductExchRateField_ProductID = NULL;
	}



    return 0;
}

static void PyCThostFtdcProductExchRateField_dealloc(PyCThostFtdcProductExchRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcProductExchRateField_repr(PyCThostFtdcProductExchRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "QuoteCurrencyID", self->data.QuoteCurrencyID 
		, "ExchangeRate", self->data.ExchangeRate
		, "ExchangeID", self->data.ExchangeID 
		, "ProductID", self->data.ProductID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductExchRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcProductExchRateField_get_reserve1(PyCThostFtdcProductExchRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcProductExchRateField_get_QuoteCurrencyID(PyCThostFtdcProductExchRateField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteCurrencyID);
}

static PyObject *PyCThostFtdcProductExchRateField_get_ExchangeRate(PyCThostFtdcProductExchRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeRate);
}

static PyObject *PyCThostFtdcProductExchRateField_get_ExchangeID(PyCThostFtdcProductExchRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcProductExchRateField_get_ProductID(PyCThostFtdcProductExchRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static int PyCThostFtdcProductExchRateField_set_reserve1(PyCThostFtdcProductExchRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
		PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcProductExchRateField_set_QuoteCurrencyID(PyCThostFtdcProductExchRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "QuoteCurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.QuoteCurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "QuoteCurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.QuoteCurrencyID, buf, sizeof(self->data.QuoteCurrencyID));
	return 0;
}

static int PyCThostFtdcProductExchRateField_set_ExchangeRate(PyCThostFtdcProductExchRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchangeRate = buf;
    return 0;
}

static int PyCThostFtdcProductExchRateField_set_ExchangeID(PyCThostFtdcProductExchRateField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
	return 0;
}

static int PyCThostFtdcProductExchRateField_set_ProductID(PyCThostFtdcProductExchRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
		PyErr_SetString(PyExc_ValueError, "ProductID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}



static PyGetSetDef PyCThostFtdcProductExchRateField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcProductExchRateField_get_reserve1, (setter)PyCThostFtdcProductExchRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"QuoteCurrencyID", (getter)PyCThostFtdcProductExchRateField_get_QuoteCurrencyID, (setter)PyCThostFtdcProductExchRateField_set_QuoteCurrencyID, (char *)"QuoteCurrencyID", NULL},
	 {(char *)"ExchangeRate", (getter)PyCThostFtdcProductExchRateField_get_ExchangeRate, (setter)PyCThostFtdcProductExchRateField_set_ExchangeRate, (char *)"ExchangeRate", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcProductExchRateField_get_ExchangeID, (setter)PyCThostFtdcProductExchRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcProductExchRateField_get_ProductID, (setter)PyCThostFtdcProductExchRateField_set_ProductID, (char *)"ProductID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcProductExchRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcProductExchRateField",	/* tp_name */
	sizeof(PyCThostFtdcProductExchRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcProductExchRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcProductExchRateField_repr,   /* tp_repr */
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
	"CThostFtdcProductExchRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcProductExchRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcProductExchRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcProductExchRateField_new,       /* tp_new */
};

int PyCThostFtdcProductExchRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcProductExchRateField  */
	if (PyType_Ready(&PyCThostFtdcProductExchRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcProductExchRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcProductExchRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcProductExchRateField", (PyObject *)&PyCThostFtdcProductExchRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcProductExchRateField to module");
        Py_DECREF(&PyCThostFtdcProductExchRateFieldType);
		return -1;
    }

    return 0;
}
