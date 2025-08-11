
#include "PyCThostFtdcQryInvestorPositionField.h"



static PyObject *PyCThostFtdcQryInvestorPositionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorPositionField *self = (PyCThostFtdcQryInvestorPositionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorPositionField_init(PyCThostFtdcQryInvestorPositionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryInvestorPositionField_BrokerID = NULL;
	Py_ssize_t pQryInvestorPositionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryInvestorPositionField_InvestorID = NULL;
	Py_ssize_t pQryInvestorPositionField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryInvestorPositionField_reserve1 = NULL;
	Py_ssize_t pQryInvestorPositionField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryInvestorPositionField_ExchangeID = NULL;
	Py_ssize_t pQryInvestorPositionField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryInvestorPositionField_InvestUnitID = NULL;
	Py_ssize_t pQryInvestorPositionField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryInvestorPositionField_InstrumentID = NULL;
	Py_ssize_t pQryInvestorPositionField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryInvestorPositionField_BrokerID, &pQryInvestorPositionField_BrokerID_len
		, &pQryInvestorPositionField_InvestorID, &pQryInvestorPositionField_InvestorID_len
		, &pQryInvestorPositionField_reserve1, &pQryInvestorPositionField_reserve1_len
		, &pQryInvestorPositionField_ExchangeID, &pQryInvestorPositionField_ExchangeID_len
		, &pQryInvestorPositionField_InvestUnitID, &pQryInvestorPositionField_InvestUnitID_len
		, &pQryInvestorPositionField_InstrumentID, &pQryInvestorPositionField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryInvestorPositionField_BrokerID != NULL) {
		if(pQryInvestorPositionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryInvestorPositionField_BrokerID, sizeof(self->data.BrokerID) );
		pQryInvestorPositionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryInvestorPositionField_InvestorID != NULL) {
		if(pQryInvestorPositionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryInvestorPositionField_InvestorID, sizeof(self->data.InvestorID) );
		pQryInvestorPositionField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryInvestorPositionField_reserve1 != NULL) {
		if(pQryInvestorPositionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryInvestorPositionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryInvestorPositionField_reserve1, sizeof(self->data.reserve1) );
		pQryInvestorPositionField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryInvestorPositionField_ExchangeID != NULL) {
		if(pQryInvestorPositionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryInvestorPositionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryInvestorPositionField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryInvestorPositionField_InvestUnitID != NULL) {
		if(pQryInvestorPositionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryInvestorPositionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryInvestorPositionField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryInvestorPositionField_InstrumentID != NULL) {
		if(pQryInvestorPositionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryInvestorPositionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryInvestorPositionField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryInvestorPositionField_dealloc(PyCThostFtdcQryInvestorPositionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorPositionField_repr(PyCThostFtdcQryInvestorPositionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPositionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryInvestorPositionField_get_BrokerID(PyCThostFtdcQryInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryInvestorPositionField_get_InvestorID(PyCThostFtdcQryInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryInvestorPositionField_get_reserve1(PyCThostFtdcQryInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryInvestorPositionField_get_ExchangeID(PyCThostFtdcQryInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryInvestorPositionField_get_InvestUnitID(PyCThostFtdcQryInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryInvestorPositionField_get_InstrumentID(PyCThostFtdcQryInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryInvestorPositionField_set_BrokerID(PyCThostFtdcQryInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionField_set_InvestorID(PyCThostFtdcQryInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionField_set_reserve1(PyCThostFtdcQryInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionField_set_ExchangeID(PyCThostFtdcQryInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionField_set_InvestUnitID(PyCThostFtdcQryInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionField_set_InstrumentID(PyCThostFtdcQryInvestorPositionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryInvestorPositionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorPositionField_get_BrokerID, (setter)PyCThostFtdcQryInvestorPositionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorPositionField_get_InvestorID, (setter)PyCThostFtdcQryInvestorPositionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryInvestorPositionField_get_reserve1, (setter)PyCThostFtdcQryInvestorPositionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorPositionField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorPositionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryInvestorPositionField_get_InvestUnitID, (setter)PyCThostFtdcQryInvestorPositionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryInvestorPositionField_get_InstrumentID, (setter)PyCThostFtdcQryInvestorPositionField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorPositionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorPositionField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorPositionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorPositionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorPositionField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorPositionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorPositionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorPositionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorPositionField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorPositionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorPositionField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorPositionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorPositionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorPositionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPositionField", (PyObject *)&PyCThostFtdcQryInvestorPositionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPositionField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorPositionFieldType);
		return -1;
    }

    return 0;
}
