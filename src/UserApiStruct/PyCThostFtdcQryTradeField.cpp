
#include "PyCThostFtdcQryTradeField.h"



static PyObject *PyCThostFtdcQryTradeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTradeField *self = (PyCThostFtdcQryTradeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryTradeField_init(PyCThostFtdcQryTradeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "TradeID", "TradeTimeStart", "TradeTimeEnd", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryTradeField_BrokerID = NULL;
	Py_ssize_t pQryTradeField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryTradeField_InvestorID = NULL;
	Py_ssize_t pQryTradeField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryTradeField_reserve1 = NULL;
	Py_ssize_t pQryTradeField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryTradeField_ExchangeID = NULL;
	Py_ssize_t pQryTradeField_ExchangeID_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pQryTradeField_TradeID = NULL;
	Py_ssize_t pQryTradeField_TradeID_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryTradeField_TradeTimeStart = NULL;
	Py_ssize_t pQryTradeField_TradeTimeStart_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryTradeField_TradeTimeEnd = NULL;
	Py_ssize_t pQryTradeField_TradeTimeEnd_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryTradeField_InvestUnitID = NULL;
	Py_ssize_t pQryTradeField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryTradeField_InstrumentID = NULL;
	Py_ssize_t pQryTradeField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryTradeField_BrokerID, &pQryTradeField_BrokerID_len
		, &pQryTradeField_InvestorID, &pQryTradeField_InvestorID_len
		, &pQryTradeField_reserve1, &pQryTradeField_reserve1_len
		, &pQryTradeField_ExchangeID, &pQryTradeField_ExchangeID_len
		, &pQryTradeField_TradeID, &pQryTradeField_TradeID_len
		, &pQryTradeField_TradeTimeStart, &pQryTradeField_TradeTimeStart_len
		, &pQryTradeField_TradeTimeEnd, &pQryTradeField_TradeTimeEnd_len
		, &pQryTradeField_InvestUnitID, &pQryTradeField_InvestUnitID_len
		, &pQryTradeField_InstrumentID, &pQryTradeField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryTradeField_BrokerID != NULL) {
		if(pQryTradeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryTradeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryTradeField_BrokerID, sizeof(self->data.BrokerID) );
		pQryTradeField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryTradeField_InvestorID != NULL) {
		if(pQryTradeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryTradeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryTradeField_InvestorID, sizeof(self->data.InvestorID) );
		pQryTradeField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryTradeField_reserve1 != NULL) {
		if(pQryTradeField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryTradeField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryTradeField_reserve1, sizeof(self->data.reserve1) );
		pQryTradeField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryTradeField_ExchangeID != NULL) {
		if(pQryTradeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryTradeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryTradeField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryTradeField_ExchangeID = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pQryTradeField_TradeID != NULL) {
		if(pQryTradeField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
			PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", pQryTradeField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
			return -1;
		}
		strncpy(self->data.TradeID, pQryTradeField_TradeID, sizeof(self->data.TradeID) );
		pQryTradeField_TradeID = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryTradeField_TradeTimeStart != NULL) {
		if(pQryTradeField_TradeTimeStart_len > (Py_ssize_t)sizeof(self->data.TradeTimeStart)) {
			PyErr_Format(PyExc_ValueError, "TradeTimeStart too long: length=%zd (max allowed is %zd)", pQryTradeField_TradeTimeStart_len, (Py_ssize_t)sizeof(self->data.TradeTimeStart));
			return -1;
		}
		strncpy(self->data.TradeTimeStart, pQryTradeField_TradeTimeStart, sizeof(self->data.TradeTimeStart) );
		pQryTradeField_TradeTimeStart = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryTradeField_TradeTimeEnd != NULL) {
		if(pQryTradeField_TradeTimeEnd_len > (Py_ssize_t)sizeof(self->data.TradeTimeEnd)) {
			PyErr_Format(PyExc_ValueError, "TradeTimeEnd too long: length=%zd (max allowed is %zd)", pQryTradeField_TradeTimeEnd_len, (Py_ssize_t)sizeof(self->data.TradeTimeEnd));
			return -1;
		}
		strncpy(self->data.TradeTimeEnd, pQryTradeField_TradeTimeEnd, sizeof(self->data.TradeTimeEnd) );
		pQryTradeField_TradeTimeEnd = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryTradeField_InvestUnitID != NULL) {
		if(pQryTradeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryTradeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryTradeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryTradeField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryTradeField_InstrumentID != NULL) {
		if(pQryTradeField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryTradeField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryTradeField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryTradeField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryTradeField_dealloc(PyCThostFtdcQryTradeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTradeField_repr(PyCThostFtdcQryTradeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "TradeID", self->data.TradeID 
		, "TradeTimeStart", self->data.TradeTimeStart 
		, "TradeTimeEnd", self->data.TradeTimeEnd 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryTradeField_get_BrokerID(PyCThostFtdcQryTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryTradeField_get_InvestorID(PyCThostFtdcQryTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryTradeField_get_reserve1(PyCThostFtdcQryTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryTradeField_get_ExchangeID(PyCThostFtdcQryTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryTradeField_get_TradeID(PyCThostFtdcQryTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeID);
}

static PyObject *PyCThostFtdcQryTradeField_get_TradeTimeStart(PyCThostFtdcQryTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTimeStart);
}

static PyObject *PyCThostFtdcQryTradeField_get_TradeTimeEnd(PyCThostFtdcQryTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTimeEnd);
}

static PyObject *PyCThostFtdcQryTradeField_get_InvestUnitID(PyCThostFtdcQryTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryTradeField_get_InstrumentID(PyCThostFtdcQryTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryTradeField_set_BrokerID(PyCThostFtdcQryTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradeField_set_InvestorID(PyCThostFtdcQryTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradeField_set_reserve1(PyCThostFtdcQryTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradeField_set_ExchangeID(PyCThostFtdcQryTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradeField_set_TradeID(PyCThostFtdcQryTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeID)) {
		PyErr_SetString(PyExc_ValueError, "TradeID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.TradeID, buf, sizeof(self->data.TradeID));
	return 0;
}

static int PyCThostFtdcQryTradeField_set_TradeTimeStart(PyCThostFtdcQryTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeTimeStart Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeTimeStart)) {
		PyErr_SetString(PyExc_ValueError, "TradeTimeStart must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradeTimeStart, buf, sizeof(self->data.TradeTimeStart));
	return 0;
}

static int PyCThostFtdcQryTradeField_set_TradeTimeEnd(PyCThostFtdcQryTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeTimeEnd Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeTimeEnd)) {
		PyErr_SetString(PyExc_ValueError, "TradeTimeEnd must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradeTimeEnd, buf, sizeof(self->data.TradeTimeEnd));
	return 0;
}

static int PyCThostFtdcQryTradeField_set_InvestUnitID(PyCThostFtdcQryTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradeField_set_InstrumentID(PyCThostFtdcQryTradeField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryTradeField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryTradeField_get_BrokerID, (setter)PyCThostFtdcQryTradeField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryTradeField_get_InvestorID, (setter)PyCThostFtdcQryTradeField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryTradeField_get_reserve1, (setter)PyCThostFtdcQryTradeField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryTradeField_get_ExchangeID, (setter)PyCThostFtdcQryTradeField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TradeID", (getter)PyCThostFtdcQryTradeField_get_TradeID, (setter)PyCThostFtdcQryTradeField_set_TradeID, (char *)"TradeID", NULL},
	 {(char *)"TradeTimeStart", (getter)PyCThostFtdcQryTradeField_get_TradeTimeStart, (setter)PyCThostFtdcQryTradeField_set_TradeTimeStart, (char *)"TradeTimeStart", NULL},
	 {(char *)"TradeTimeEnd", (getter)PyCThostFtdcQryTradeField_get_TradeTimeEnd, (setter)PyCThostFtdcQryTradeField_set_TradeTimeEnd, (char *)"TradeTimeEnd", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryTradeField_get_InvestUnitID, (setter)PyCThostFtdcQryTradeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryTradeField_get_InstrumentID, (setter)PyCThostFtdcQryTradeField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTradeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTradeField",	/* tp_name */
	sizeof(PyCThostFtdcQryTradeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTradeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTradeField_repr,   /* tp_repr */
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
	"CThostFtdcQryTradeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTradeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTradeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTradeField_new,       /* tp_new */
};

int PyCThostFtdcQryTradeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTradeField  */
	if (PyType_Ready(&PyCThostFtdcQryTradeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTradeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTradeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTradeField", (PyObject *)&PyCThostFtdcQryTradeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTradeField to module");
        Py_DECREF(&PyCThostFtdcQryTradeFieldType);
		return -1;
    }

    return 0;
}
