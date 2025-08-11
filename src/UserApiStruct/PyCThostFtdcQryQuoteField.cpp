
#include "PyCThostFtdcQryQuoteField.h"



static PyObject *PyCThostFtdcQryQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryQuoteField *self = (PyCThostFtdcQryQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryQuoteField_init(PyCThostFtdcQryQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "QuoteSysID", "InsertTimeStart", "InsertTimeEnd", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryQuoteField_BrokerID = NULL;
	Py_ssize_t pQryQuoteField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryQuoteField_InvestorID = NULL;
	Py_ssize_t pQryQuoteField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryQuoteField_reserve1 = NULL;
	Py_ssize_t pQryQuoteField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryQuoteField_ExchangeID = NULL;
	Py_ssize_t pQryQuoteField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pQryQuoteField_QuoteSysID = NULL;
	Py_ssize_t pQryQuoteField_QuoteSysID_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryQuoteField_InsertTimeStart = NULL;
	Py_ssize_t pQryQuoteField_InsertTimeStart_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryQuoteField_InsertTimeEnd = NULL;
	Py_ssize_t pQryQuoteField_InsertTimeEnd_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryQuoteField_InvestUnitID = NULL;
	Py_ssize_t pQryQuoteField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryQuoteField_InstrumentID = NULL;
	Py_ssize_t pQryQuoteField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryQuoteField_BrokerID, &pQryQuoteField_BrokerID_len
		, &pQryQuoteField_InvestorID, &pQryQuoteField_InvestorID_len
		, &pQryQuoteField_reserve1, &pQryQuoteField_reserve1_len
		, &pQryQuoteField_ExchangeID, &pQryQuoteField_ExchangeID_len
		, &pQryQuoteField_QuoteSysID, &pQryQuoteField_QuoteSysID_len
		, &pQryQuoteField_InsertTimeStart, &pQryQuoteField_InsertTimeStart_len
		, &pQryQuoteField_InsertTimeEnd, &pQryQuoteField_InsertTimeEnd_len
		, &pQryQuoteField_InvestUnitID, &pQryQuoteField_InvestUnitID_len
		, &pQryQuoteField_InstrumentID, &pQryQuoteField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryQuoteField_BrokerID != NULL) {
		if(pQryQuoteField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryQuoteField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryQuoteField_BrokerID, sizeof(self->data.BrokerID) );
		pQryQuoteField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryQuoteField_InvestorID != NULL) {
		if(pQryQuoteField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryQuoteField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryQuoteField_InvestorID, sizeof(self->data.InvestorID) );
		pQryQuoteField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryQuoteField_reserve1 != NULL) {
		if(pQryQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryQuoteField_reserve1, sizeof(self->data.reserve1) );
		pQryQuoteField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryQuoteField_ExchangeID != NULL) {
		if(pQryQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryQuoteField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pQryQuoteField_QuoteSysID != NULL) {
		if(pQryQuoteField_QuoteSysID_len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
			PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is %zd)", pQryQuoteField_QuoteSysID_len, (Py_ssize_t)sizeof(self->data.QuoteSysID));
			return -1;
		}
		strncpy(self->data.QuoteSysID, pQryQuoteField_QuoteSysID, sizeof(self->data.QuoteSysID) );
		pQryQuoteField_QuoteSysID = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryQuoteField_InsertTimeStart != NULL) {
		if(pQryQuoteField_InsertTimeStart_len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is %zd)", pQryQuoteField_InsertTimeStart_len, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
			return -1;
		}
		strncpy(self->data.InsertTimeStart, pQryQuoteField_InsertTimeStart, sizeof(self->data.InsertTimeStart) );
		pQryQuoteField_InsertTimeStart = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryQuoteField_InsertTimeEnd != NULL) {
		if(pQryQuoteField_InsertTimeEnd_len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is %zd)", pQryQuoteField_InsertTimeEnd_len, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
			return -1;
		}
		strncpy(self->data.InsertTimeEnd, pQryQuoteField_InsertTimeEnd, sizeof(self->data.InsertTimeEnd) );
		pQryQuoteField_InsertTimeEnd = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryQuoteField_InvestUnitID != NULL) {
		if(pQryQuoteField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryQuoteField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryQuoteField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryQuoteField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryQuoteField_InstrumentID != NULL) {
		if(pQryQuoteField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryQuoteField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryQuoteField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryQuoteField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryQuoteField_dealloc(PyCThostFtdcQryQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryQuoteField_repr(PyCThostFtdcQryQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "QuoteSysID", self->data.QuoteSysID 
		, "InsertTimeStart", self->data.InsertTimeStart 
		, "InsertTimeEnd", self->data.InsertTimeEnd 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryQuoteField_get_BrokerID(PyCThostFtdcQryQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryQuoteField_get_InvestorID(PyCThostFtdcQryQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryQuoteField_get_reserve1(PyCThostFtdcQryQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryQuoteField_get_ExchangeID(PyCThostFtdcQryQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryQuoteField_get_QuoteSysID(PyCThostFtdcQryQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteSysID);
}

static PyObject *PyCThostFtdcQryQuoteField_get_InsertTimeStart(PyCThostFtdcQryQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeStart);
}

static PyObject *PyCThostFtdcQryQuoteField_get_InsertTimeEnd(PyCThostFtdcQryQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeEnd);
}

static PyObject *PyCThostFtdcQryQuoteField_get_InvestUnitID(PyCThostFtdcQryQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryQuoteField_get_InstrumentID(PyCThostFtdcQryQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryQuoteField_set_BrokerID(PyCThostFtdcQryQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryQuoteField_set_InvestorID(PyCThostFtdcQryQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryQuoteField_set_reserve1(PyCThostFtdcQryQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryQuoteField_set_ExchangeID(PyCThostFtdcQryQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryQuoteField_set_QuoteSysID(PyCThostFtdcQryQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
		PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.QuoteSysID, buf, sizeof(self->data.QuoteSysID));
	return 0;
}

static int PyCThostFtdcQryQuoteField_set_InsertTimeStart(PyCThostFtdcQryQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryQuoteField_set_InsertTimeEnd(PyCThostFtdcQryQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryQuoteField_set_InvestUnitID(PyCThostFtdcQryQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryQuoteField_set_InstrumentID(PyCThostFtdcQryQuoteField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryQuoteField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryQuoteField_get_BrokerID, (setter)PyCThostFtdcQryQuoteField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryQuoteField_get_InvestorID, (setter)PyCThostFtdcQryQuoteField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryQuoteField_get_reserve1, (setter)PyCThostFtdcQryQuoteField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryQuoteField_get_ExchangeID, (setter)PyCThostFtdcQryQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"QuoteSysID", (getter)PyCThostFtdcQryQuoteField_get_QuoteSysID, (setter)PyCThostFtdcQryQuoteField_set_QuoteSysID, (char *)"QuoteSysID", NULL},
	 {(char *)"InsertTimeStart", (getter)PyCThostFtdcQryQuoteField_get_InsertTimeStart, (setter)PyCThostFtdcQryQuoteField_set_InsertTimeStart, (char *)"InsertTimeStart", NULL},
	 {(char *)"InsertTimeEnd", (getter)PyCThostFtdcQryQuoteField_get_InsertTimeEnd, (setter)PyCThostFtdcQryQuoteField_set_InsertTimeEnd, (char *)"InsertTimeEnd", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryQuoteField_get_InvestUnitID, (setter)PyCThostFtdcQryQuoteField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryQuoteField_get_InstrumentID, (setter)PyCThostFtdcQryQuoteField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcQryQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcQryQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryQuoteField_new,       /* tp_new */
};

int PyCThostFtdcQryQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryQuoteField  */
	if (PyType_Ready(&PyCThostFtdcQryQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryQuoteField", (PyObject *)&PyCThostFtdcQryQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryQuoteField to module");
        Py_DECREF(&PyCThostFtdcQryQuoteFieldType);
		return -1;
    }

    return 0;
}
