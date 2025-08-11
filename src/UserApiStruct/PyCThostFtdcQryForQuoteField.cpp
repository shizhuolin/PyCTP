
#include "PyCThostFtdcQryForQuoteField.h"



static PyObject *PyCThostFtdcQryForQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryForQuoteField *self = (PyCThostFtdcQryForQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryForQuoteField_init(PyCThostFtdcQryForQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "InsertTimeStart", "InsertTimeEnd", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryForQuoteField_BrokerID = NULL;
	Py_ssize_t pQryForQuoteField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryForQuoteField_InvestorID = NULL;
	Py_ssize_t pQryForQuoteField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryForQuoteField_reserve1 = NULL;
	Py_ssize_t pQryForQuoteField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryForQuoteField_ExchangeID = NULL;
	Py_ssize_t pQryForQuoteField_ExchangeID_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryForQuoteField_InsertTimeStart = NULL;
	Py_ssize_t pQryForQuoteField_InsertTimeStart_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryForQuoteField_InsertTimeEnd = NULL;
	Py_ssize_t pQryForQuoteField_InsertTimeEnd_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryForQuoteField_InvestUnitID = NULL;
	Py_ssize_t pQryForQuoteField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryForQuoteField_InstrumentID = NULL;
	Py_ssize_t pQryForQuoteField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryForQuoteField_BrokerID, &pQryForQuoteField_BrokerID_len
		, &pQryForQuoteField_InvestorID, &pQryForQuoteField_InvestorID_len
		, &pQryForQuoteField_reserve1, &pQryForQuoteField_reserve1_len
		, &pQryForQuoteField_ExchangeID, &pQryForQuoteField_ExchangeID_len
		, &pQryForQuoteField_InsertTimeStart, &pQryForQuoteField_InsertTimeStart_len
		, &pQryForQuoteField_InsertTimeEnd, &pQryForQuoteField_InsertTimeEnd_len
		, &pQryForQuoteField_InvestUnitID, &pQryForQuoteField_InvestUnitID_len
		, &pQryForQuoteField_InstrumentID, &pQryForQuoteField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryForQuoteField_BrokerID != NULL) {
		if(pQryForQuoteField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryForQuoteField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryForQuoteField_BrokerID, sizeof(self->data.BrokerID) );
		pQryForQuoteField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryForQuoteField_InvestorID != NULL) {
		if(pQryForQuoteField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryForQuoteField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryForQuoteField_InvestorID, sizeof(self->data.InvestorID) );
		pQryForQuoteField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryForQuoteField_reserve1 != NULL) {
		if(pQryForQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryForQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryForQuoteField_reserve1, sizeof(self->data.reserve1) );
		pQryForQuoteField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryForQuoteField_ExchangeID != NULL) {
		if(pQryForQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryForQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryForQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryForQuoteField_ExchangeID = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryForQuoteField_InsertTimeStart != NULL) {
		if(pQryForQuoteField_InsertTimeStart_len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is %zd)", pQryForQuoteField_InsertTimeStart_len, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
			return -1;
		}
		strncpy(self->data.InsertTimeStart, pQryForQuoteField_InsertTimeStart, sizeof(self->data.InsertTimeStart) );
		pQryForQuoteField_InsertTimeStart = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryForQuoteField_InsertTimeEnd != NULL) {
		if(pQryForQuoteField_InsertTimeEnd_len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is %zd)", pQryForQuoteField_InsertTimeEnd_len, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
			return -1;
		}
		strncpy(self->data.InsertTimeEnd, pQryForQuoteField_InsertTimeEnd, sizeof(self->data.InsertTimeEnd) );
		pQryForQuoteField_InsertTimeEnd = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryForQuoteField_InvestUnitID != NULL) {
		if(pQryForQuoteField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryForQuoteField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryForQuoteField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryForQuoteField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryForQuoteField_InstrumentID != NULL) {
		if(pQryForQuoteField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryForQuoteField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryForQuoteField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryForQuoteField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryForQuoteField_dealloc(PyCThostFtdcQryForQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryForQuoteField_repr(PyCThostFtdcQryForQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "InsertTimeStart", self->data.InsertTimeStart 
		, "InsertTimeEnd", self->data.InsertTimeEnd 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryForQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryForQuoteField_get_BrokerID(PyCThostFtdcQryForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryForQuoteField_get_InvestorID(PyCThostFtdcQryForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryForQuoteField_get_reserve1(PyCThostFtdcQryForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryForQuoteField_get_ExchangeID(PyCThostFtdcQryForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryForQuoteField_get_InsertTimeStart(PyCThostFtdcQryForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeStart);
}

static PyObject *PyCThostFtdcQryForQuoteField_get_InsertTimeEnd(PyCThostFtdcQryForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeEnd);
}

static PyObject *PyCThostFtdcQryForQuoteField_get_InvestUnitID(PyCThostFtdcQryForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryForQuoteField_get_InstrumentID(PyCThostFtdcQryForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryForQuoteField_set_BrokerID(PyCThostFtdcQryForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryForQuoteField_set_InvestorID(PyCThostFtdcQryForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryForQuoteField_set_reserve1(PyCThostFtdcQryForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryForQuoteField_set_ExchangeID(PyCThostFtdcQryForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryForQuoteField_set_InsertTimeStart(PyCThostFtdcQryForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InsertTimeStart Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
		PyErr_SetString(PyExc_ValueError, "InsertTimeStart must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.InsertTimeStart, buf, sizeof(self->data.InsertTimeStart));
	return 0;
}

static int PyCThostFtdcQryForQuoteField_set_InsertTimeEnd(PyCThostFtdcQryForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InsertTimeEnd Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
		PyErr_SetString(PyExc_ValueError, "InsertTimeEnd must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.InsertTimeEnd, buf, sizeof(self->data.InsertTimeEnd));
	return 0;
}

static int PyCThostFtdcQryForQuoteField_set_InvestUnitID(PyCThostFtdcQryForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryForQuoteField_set_InstrumentID(PyCThostFtdcQryForQuoteField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryForQuoteField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryForQuoteField_get_BrokerID, (setter)PyCThostFtdcQryForQuoteField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryForQuoteField_get_InvestorID, (setter)PyCThostFtdcQryForQuoteField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryForQuoteField_get_reserve1, (setter)PyCThostFtdcQryForQuoteField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryForQuoteField_get_ExchangeID, (setter)PyCThostFtdcQryForQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InsertTimeStart", (getter)PyCThostFtdcQryForQuoteField_get_InsertTimeStart, (setter)PyCThostFtdcQryForQuoteField_set_InsertTimeStart, (char *)"InsertTimeStart", NULL},
	 {(char *)"InsertTimeEnd", (getter)PyCThostFtdcQryForQuoteField_get_InsertTimeEnd, (setter)PyCThostFtdcQryForQuoteField_set_InsertTimeEnd, (char *)"InsertTimeEnd", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryForQuoteField_get_InvestUnitID, (setter)PyCThostFtdcQryForQuoteField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryForQuoteField_get_InstrumentID, (setter)PyCThostFtdcQryForQuoteField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryForQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryForQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcQryForQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryForQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryForQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcQryForQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryForQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryForQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryForQuoteField_new,       /* tp_new */
};

int PyCThostFtdcQryForQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryForQuoteField  */
	if (PyType_Ready(&PyCThostFtdcQryForQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryForQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryForQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryForQuoteField", (PyObject *)&PyCThostFtdcQryForQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryForQuoteField to module");
        Py_DECREF(&PyCThostFtdcQryForQuoteFieldType);
		return -1;
    }

    return 0;
}
