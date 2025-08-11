
#include "PyCThostFtdcQryForQuoteParamField.h"



static PyObject *PyCThostFtdcQryForQuoteParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryForQuoteParamField *self = (PyCThostFtdcQryForQuoteParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryForQuoteParamField_init(PyCThostFtdcQryForQuoteParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "reserve1", "ExchangeID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryForQuoteParamField_BrokerID = NULL;
	Py_ssize_t pQryForQuoteParamField_BrokerID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryForQuoteParamField_reserve1 = NULL;
	Py_ssize_t pQryForQuoteParamField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryForQuoteParamField_ExchangeID = NULL;
	Py_ssize_t pQryForQuoteParamField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryForQuoteParamField_InstrumentID = NULL;
	Py_ssize_t pQryForQuoteParamField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pQryForQuoteParamField_BrokerID, &pQryForQuoteParamField_BrokerID_len
		, &pQryForQuoteParamField_reserve1, &pQryForQuoteParamField_reserve1_len
		, &pQryForQuoteParamField_ExchangeID, &pQryForQuoteParamField_ExchangeID_len
		, &pQryForQuoteParamField_InstrumentID, &pQryForQuoteParamField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryForQuoteParamField_BrokerID != NULL) {
		if(pQryForQuoteParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryForQuoteParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryForQuoteParamField_BrokerID, sizeof(self->data.BrokerID) );
		pQryForQuoteParamField_BrokerID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryForQuoteParamField_reserve1 != NULL) {
		if(pQryForQuoteParamField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryForQuoteParamField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryForQuoteParamField_reserve1, sizeof(self->data.reserve1) );
		pQryForQuoteParamField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryForQuoteParamField_ExchangeID != NULL) {
		if(pQryForQuoteParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryForQuoteParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryForQuoteParamField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryForQuoteParamField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryForQuoteParamField_InstrumentID != NULL) {
		if(pQryForQuoteParamField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryForQuoteParamField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryForQuoteParamField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryForQuoteParamField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryForQuoteParamField_dealloc(PyCThostFtdcQryForQuoteParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryForQuoteParamField_repr(PyCThostFtdcQryForQuoteParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryForQuoteParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryForQuoteParamField_get_BrokerID(PyCThostFtdcQryForQuoteParamField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryForQuoteParamField_get_reserve1(PyCThostFtdcQryForQuoteParamField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryForQuoteParamField_get_ExchangeID(PyCThostFtdcQryForQuoteParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryForQuoteParamField_get_InstrumentID(PyCThostFtdcQryForQuoteParamField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryForQuoteParamField_set_BrokerID(PyCThostFtdcQryForQuoteParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryForQuoteParamField_set_reserve1(PyCThostFtdcQryForQuoteParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryForQuoteParamField_set_ExchangeID(PyCThostFtdcQryForQuoteParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryForQuoteParamField_set_InstrumentID(PyCThostFtdcQryForQuoteParamField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryForQuoteParamField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryForQuoteParamField_get_BrokerID, (setter)PyCThostFtdcQryForQuoteParamField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryForQuoteParamField_get_reserve1, (setter)PyCThostFtdcQryForQuoteParamField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryForQuoteParamField_get_ExchangeID, (setter)PyCThostFtdcQryForQuoteParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryForQuoteParamField_get_InstrumentID, (setter)PyCThostFtdcQryForQuoteParamField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryForQuoteParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryForQuoteParamField",	/* tp_name */
	sizeof(PyCThostFtdcQryForQuoteParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryForQuoteParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryForQuoteParamField_repr,   /* tp_repr */
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
	"CThostFtdcQryForQuoteParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryForQuoteParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryForQuoteParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryForQuoteParamField_new,       /* tp_new */
};

int PyCThostFtdcQryForQuoteParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryForQuoteParamField  */
	if (PyType_Ready(&PyCThostFtdcQryForQuoteParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryForQuoteParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryForQuoteParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryForQuoteParamField", (PyObject *)&PyCThostFtdcQryForQuoteParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryForQuoteParamField to module");
        Py_DECREF(&PyCThostFtdcQryForQuoteParamFieldType);
		return -1;
    }

    return 0;
}
