
#include "PyCThostFtdcQryInvestorPositionDetailField.h"



static PyObject *PyCThostFtdcQryInvestorPositionDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorPositionDetailField *self = (PyCThostFtdcQryInvestorPositionDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorPositionDetailField_init(PyCThostFtdcQryInvestorPositionDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryInvestorPositionDetailField_BrokerID = NULL;
	Py_ssize_t pQryInvestorPositionDetailField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryInvestorPositionDetailField_InvestorID = NULL;
	Py_ssize_t pQryInvestorPositionDetailField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryInvestorPositionDetailField_reserve1 = NULL;
	Py_ssize_t pQryInvestorPositionDetailField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryInvestorPositionDetailField_ExchangeID = NULL;
	Py_ssize_t pQryInvestorPositionDetailField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryInvestorPositionDetailField_InvestUnitID = NULL;
	Py_ssize_t pQryInvestorPositionDetailField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryInvestorPositionDetailField_InstrumentID = NULL;
	Py_ssize_t pQryInvestorPositionDetailField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryInvestorPositionDetailField_BrokerID, &pQryInvestorPositionDetailField_BrokerID_len
		, &pQryInvestorPositionDetailField_InvestorID, &pQryInvestorPositionDetailField_InvestorID_len
		, &pQryInvestorPositionDetailField_reserve1, &pQryInvestorPositionDetailField_reserve1_len
		, &pQryInvestorPositionDetailField_ExchangeID, &pQryInvestorPositionDetailField_ExchangeID_len
		, &pQryInvestorPositionDetailField_InvestUnitID, &pQryInvestorPositionDetailField_InvestUnitID_len
		, &pQryInvestorPositionDetailField_InstrumentID, &pQryInvestorPositionDetailField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryInvestorPositionDetailField_BrokerID != NULL) {
		if(pQryInvestorPositionDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryInvestorPositionDetailField_BrokerID, sizeof(self->data.BrokerID) );
		pQryInvestorPositionDetailField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryInvestorPositionDetailField_InvestorID != NULL) {
		if(pQryInvestorPositionDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryInvestorPositionDetailField_InvestorID, sizeof(self->data.InvestorID) );
		pQryInvestorPositionDetailField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryInvestorPositionDetailField_reserve1 != NULL) {
		if(pQryInvestorPositionDetailField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryInvestorPositionDetailField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryInvestorPositionDetailField_reserve1, sizeof(self->data.reserve1) );
		pQryInvestorPositionDetailField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryInvestorPositionDetailField_ExchangeID != NULL) {
		if(pQryInvestorPositionDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryInvestorPositionDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryInvestorPositionDetailField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryInvestorPositionDetailField_InvestUnitID != NULL) {
		if(pQryInvestorPositionDetailField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionDetailField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryInvestorPositionDetailField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryInvestorPositionDetailField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryInvestorPositionDetailField_InstrumentID != NULL) {
		if(pQryInvestorPositionDetailField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionDetailField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryInvestorPositionDetailField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryInvestorPositionDetailField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryInvestorPositionDetailField_dealloc(PyCThostFtdcQryInvestorPositionDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorPositionDetailField_repr(PyCThostFtdcQryInvestorPositionDetailField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPositionDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_BrokerID(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_InvestorID(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_reserve1(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_ExchangeID(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_InvestUnitID(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_InstrumentID(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryInvestorPositionDetailField_set_BrokerID(PyCThostFtdcQryInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionDetailField_set_InvestorID(PyCThostFtdcQryInvestorPositionDetailField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}

static int PyCThostFtdcQryInvestorPositionDetailField_set_reserve1(PyCThostFtdcQryInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionDetailField_set_ExchangeID(PyCThostFtdcQryInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionDetailField_set_InvestUnitID(PyCThostFtdcQryInvestorPositionDetailField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
		PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
	return 0;
}

static int PyCThostFtdcQryInvestorPositionDetailField_set_InstrumentID(PyCThostFtdcQryInvestorPositionDetailField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryInvestorPositionDetailField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_BrokerID, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_InvestorID, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_reserve1, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_InvestUnitID, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_InstrumentID, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorPositionDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorPositionDetailField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorPositionDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorPositionDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorPositionDetailField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorPositionDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorPositionDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorPositionDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorPositionDetailField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorPositionDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorPositionDetailField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorPositionDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorPositionDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorPositionDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPositionDetailField", (PyObject *)&PyCThostFtdcQryInvestorPositionDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPositionDetailField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorPositionDetailFieldType);
		return -1;
    }

    return 0;
}
