
#include "PyCThostFtdcExchangeRateField.h"



static PyObject *PyCThostFtdcExchangeRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeRateField *self = (PyCThostFtdcExchangeRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeRateField_init(PyCThostFtdcExchangeRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "FromCurrencyID", "FromCurrencyUnit", "ToCurrencyID", "ExchangeRate",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pExchangeRateField_BrokerID = NULL;
	Py_ssize_t pExchangeRateField_BrokerID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pExchangeRateField_FromCurrencyID = NULL;
	Py_ssize_t pExchangeRateField_FromCurrencyID_len = 0;

	//TThostFtdcCurrencyUnitType double
	double pExchangeRateField_FromCurrencyUnit = 0.0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pExchangeRateField_ToCurrencyID = NULL;
	Py_ssize_t pExchangeRateField_ToCurrencyID_len = 0;

	//TThostFtdcExchangeRateType double
	double pExchangeRateField_ExchangeRate = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ds#d", (char **)kwlist
#endif

		, &pExchangeRateField_BrokerID, &pExchangeRateField_BrokerID_len
		, &pExchangeRateField_FromCurrencyID, &pExchangeRateField_FromCurrencyID_len
		, &pExchangeRateField_FromCurrencyUnit
		, &pExchangeRateField_ToCurrencyID, &pExchangeRateField_ToCurrencyID_len
		, &pExchangeRateField_ExchangeRate


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pExchangeRateField_BrokerID != NULL) {
		if(pExchangeRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pExchangeRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pExchangeRateField_BrokerID, sizeof(self->data.BrokerID) );
		pExchangeRateField_BrokerID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pExchangeRateField_FromCurrencyID != NULL) {
		if(pExchangeRateField_FromCurrencyID_len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is %zd)", pExchangeRateField_FromCurrencyID_len, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
			return -1;
		}
		strncpy(self->data.FromCurrencyID, pExchangeRateField_FromCurrencyID, sizeof(self->data.FromCurrencyID) );
		pExchangeRateField_FromCurrencyID = NULL;
	}

	//TThostFtdcCurrencyUnitType double
	self->data.FromCurrencyUnit = pExchangeRateField_FromCurrencyUnit;
	//TThostFtdcCurrencyIDType char[4]
	if(pExchangeRateField_ToCurrencyID != NULL) {
		if(pExchangeRateField_ToCurrencyID_len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "ToCurrencyID too long: length=%zd (max allowed is %zd)", pExchangeRateField_ToCurrencyID_len, (Py_ssize_t)sizeof(self->data.ToCurrencyID));
			return -1;
		}
		strncpy(self->data.ToCurrencyID, pExchangeRateField_ToCurrencyID, sizeof(self->data.ToCurrencyID) );
		pExchangeRateField_ToCurrencyID = NULL;
	}

	//TThostFtdcExchangeRateType double
	self->data.ExchangeRate = pExchangeRateField_ExchangeRate;


    return 0;
}

static void PyCThostFtdcExchangeRateField_dealloc(PyCThostFtdcExchangeRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeRateField_repr(PyCThostFtdcExchangeRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:y,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:s,s:d}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "FromCurrencyID", self->data.FromCurrencyID 
		, "FromCurrencyUnit", self->data.FromCurrencyUnit
		, "ToCurrencyID", self->data.ToCurrencyID 
		, "ExchangeRate", self->data.ExchangeRate


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeRateField_get_BrokerID(PyCThostFtdcExchangeRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcExchangeRateField_get_FromCurrencyID(PyCThostFtdcExchangeRateField *self, void *closure) {
	return PyBytes_FromString(self->data.FromCurrencyID);
}

static PyObject *PyCThostFtdcExchangeRateField_get_FromCurrencyUnit(PyCThostFtdcExchangeRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FromCurrencyUnit);
}

static PyObject *PyCThostFtdcExchangeRateField_get_ToCurrencyID(PyCThostFtdcExchangeRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ToCurrencyID);
}

static PyObject *PyCThostFtdcExchangeRateField_get_ExchangeRate(PyCThostFtdcExchangeRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeRate);
}

static int PyCThostFtdcExchangeRateField_set_BrokerID(PyCThostFtdcExchangeRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
		PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
	return 0;
}

static int PyCThostFtdcExchangeRateField_set_FromCurrencyID(PyCThostFtdcExchangeRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.FromCurrencyID, buf, sizeof(self->data.FromCurrencyID));
	return 0;
}

static int PyCThostFtdcExchangeRateField_set_FromCurrencyUnit(PyCThostFtdcExchangeRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromCurrencyUnit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FromCurrencyUnit = buf;
    return 0;
}

static int PyCThostFtdcExchangeRateField_set_ToCurrencyID(PyCThostFtdcExchangeRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ToCurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "ToCurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.ToCurrencyID, buf, sizeof(self->data.ToCurrencyID));
	return 0;
}

static int PyCThostFtdcExchangeRateField_set_ExchangeRate(PyCThostFtdcExchangeRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeRateField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcExchangeRateField_get_BrokerID, (setter)PyCThostFtdcExchangeRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"FromCurrencyID", (getter)PyCThostFtdcExchangeRateField_get_FromCurrencyID, (setter)PyCThostFtdcExchangeRateField_set_FromCurrencyID, (char *)"FromCurrencyID", NULL},
	 {(char *)"FromCurrencyUnit", (getter)PyCThostFtdcExchangeRateField_get_FromCurrencyUnit, (setter)PyCThostFtdcExchangeRateField_set_FromCurrencyUnit, (char *)"FromCurrencyUnit", NULL},
	 {(char *)"ToCurrencyID", (getter)PyCThostFtdcExchangeRateField_get_ToCurrencyID, (setter)PyCThostFtdcExchangeRateField_set_ToCurrencyID, (char *)"ToCurrencyID", NULL},
	 {(char *)"ExchangeRate", (getter)PyCThostFtdcExchangeRateField_get_ExchangeRate, (setter)PyCThostFtdcExchangeRateField_set_ExchangeRate, (char *)"ExchangeRate", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeRateField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeRateField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeRateField_new,       /* tp_new */
};

int PyCThostFtdcExchangeRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeRateField  */
	if (PyType_Ready(&PyCThostFtdcExchangeRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeRateField", (PyObject *)&PyCThostFtdcExchangeRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeRateField to module");
        Py_DECREF(&PyCThostFtdcExchangeRateFieldType);
		return -1;
    }

    return 0;
}
