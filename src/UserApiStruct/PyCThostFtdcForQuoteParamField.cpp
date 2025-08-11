
#include "PyCThostFtdcForQuoteParamField.h"



static PyObject *PyCThostFtdcForQuoteParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcForQuoteParamField *self = (PyCThostFtdcForQuoteParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcForQuoteParamField_init(PyCThostFtdcForQuoteParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "reserve1", "ExchangeID", "LastPrice", "PriceInterval", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pForQuoteParamField_BrokerID = NULL;
	Py_ssize_t pForQuoteParamField_BrokerID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pForQuoteParamField_reserve1 = NULL;
	Py_ssize_t pForQuoteParamField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pForQuoteParamField_ExchangeID = NULL;
	Py_ssize_t pForQuoteParamField_ExchangeID_len = 0;

	//TThostFtdcPriceType double
	double pForQuoteParamField_LastPrice = 0.0;

	//TThostFtdcPriceType double
	double pForQuoteParamField_PriceInterval = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pForQuoteParamField_InstrumentID = NULL;
	Py_ssize_t pForQuoteParamField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dds#", (char **)kwlist
#endif

		, &pForQuoteParamField_BrokerID, &pForQuoteParamField_BrokerID_len
		, &pForQuoteParamField_reserve1, &pForQuoteParamField_reserve1_len
		, &pForQuoteParamField_ExchangeID, &pForQuoteParamField_ExchangeID_len
		, &pForQuoteParamField_LastPrice
		, &pForQuoteParamField_PriceInterval
		, &pForQuoteParamField_InstrumentID, &pForQuoteParamField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pForQuoteParamField_BrokerID != NULL) {
		if(pForQuoteParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pForQuoteParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pForQuoteParamField_BrokerID, sizeof(self->data.BrokerID) );
		pForQuoteParamField_BrokerID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pForQuoteParamField_reserve1 != NULL) {
		if(pForQuoteParamField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pForQuoteParamField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pForQuoteParamField_reserve1, sizeof(self->data.reserve1) );
		pForQuoteParamField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pForQuoteParamField_ExchangeID != NULL) {
		if(pForQuoteParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pForQuoteParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pForQuoteParamField_ExchangeID, sizeof(self->data.ExchangeID) );
		pForQuoteParamField_ExchangeID = NULL;
	}

	//TThostFtdcPriceType double
	self->data.LastPrice = pForQuoteParamField_LastPrice;
	//TThostFtdcPriceType double
	self->data.PriceInterval = pForQuoteParamField_PriceInterval;
	//TThostFtdcInstrumentIDType char[81]
	if(pForQuoteParamField_InstrumentID != NULL) {
		if(pForQuoteParamField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pForQuoteParamField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pForQuoteParamField_InstrumentID, sizeof(self->data.InstrumentID) );
		pForQuoteParamField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcForQuoteParamField_dealloc(PyCThostFtdcForQuoteParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcForQuoteParamField_repr(PyCThostFtdcForQuoteParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:d,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "LastPrice", self->data.LastPrice
		, "PriceInterval", self->data.PriceInterval
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForQuoteParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcForQuoteParamField_get_BrokerID(PyCThostFtdcForQuoteParamField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcForQuoteParamField_get_reserve1(PyCThostFtdcForQuoteParamField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcForQuoteParamField_get_ExchangeID(PyCThostFtdcForQuoteParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcForQuoteParamField_get_LastPrice(PyCThostFtdcForQuoteParamField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LastPrice);
}

static PyObject *PyCThostFtdcForQuoteParamField_get_PriceInterval(PyCThostFtdcForQuoteParamField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PriceInterval);
}

static PyObject *PyCThostFtdcForQuoteParamField_get_InstrumentID(PyCThostFtdcForQuoteParamField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcForQuoteParamField_set_BrokerID(PyCThostFtdcForQuoteParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteParamField_set_reserve1(PyCThostFtdcForQuoteParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteParamField_set_ExchangeID(PyCThostFtdcForQuoteParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteParamField_set_LastPrice(PyCThostFtdcForQuoteParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteParamField_set_PriceInterval(PyCThostFtdcForQuoteParamField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PriceInterval Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PriceInterval = buf;
    return 0;
}

static int PyCThostFtdcForQuoteParamField_set_InstrumentID(PyCThostFtdcForQuoteParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
	return 0;
}



static PyGetSetDef PyCThostFtdcForQuoteParamField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcForQuoteParamField_get_BrokerID, (setter)PyCThostFtdcForQuoteParamField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcForQuoteParamField_get_reserve1, (setter)PyCThostFtdcForQuoteParamField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcForQuoteParamField_get_ExchangeID, (setter)PyCThostFtdcForQuoteParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"LastPrice", (getter)PyCThostFtdcForQuoteParamField_get_LastPrice, (setter)PyCThostFtdcForQuoteParamField_set_LastPrice, (char *)"LastPrice", NULL},
	 {(char *)"PriceInterval", (getter)PyCThostFtdcForQuoteParamField_get_PriceInterval, (setter)PyCThostFtdcForQuoteParamField_set_PriceInterval, (char *)"PriceInterval", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcForQuoteParamField_get_InstrumentID, (setter)PyCThostFtdcForQuoteParamField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcForQuoteParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcForQuoteParamField",	/* tp_name */
	sizeof(PyCThostFtdcForQuoteParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcForQuoteParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcForQuoteParamField_repr,   /* tp_repr */
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
	"CThostFtdcForQuoteParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcForQuoteParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcForQuoteParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcForQuoteParamField_new,       /* tp_new */
};

int PyCThostFtdcForQuoteParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcForQuoteParamField  */
	if (PyType_Ready(&PyCThostFtdcForQuoteParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcForQuoteParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcForQuoteParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcForQuoteParamField", (PyObject *)&PyCThostFtdcForQuoteParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcForQuoteParamField to module");
        Py_DECREF(&PyCThostFtdcForQuoteParamFieldType);
		return -1;
    }

    return 0;
}
