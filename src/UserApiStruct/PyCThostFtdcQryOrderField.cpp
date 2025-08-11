
#include "PyCThostFtdcQryOrderField.h"



static PyObject *PyCThostFtdcQryOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryOrderField *self = (PyCThostFtdcQryOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryOrderField_init(PyCThostFtdcQryOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "OrderSysID", "InsertTimeStart", "InsertTimeEnd", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryOrderField_BrokerID = NULL;
	Py_ssize_t pQryOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryOrderField_InvestorID = NULL;
	Py_ssize_t pQryOrderField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryOrderField_reserve1 = NULL;
	Py_ssize_t pQryOrderField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryOrderField_ExchangeID = NULL;
	Py_ssize_t pQryOrderField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pQryOrderField_OrderSysID = NULL;
	Py_ssize_t pQryOrderField_OrderSysID_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryOrderField_InsertTimeStart = NULL;
	Py_ssize_t pQryOrderField_InsertTimeStart_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryOrderField_InsertTimeEnd = NULL;
	Py_ssize_t pQryOrderField_InsertTimeEnd_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryOrderField_InvestUnitID = NULL;
	Py_ssize_t pQryOrderField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryOrderField_InstrumentID = NULL;
	Py_ssize_t pQryOrderField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryOrderField_BrokerID, &pQryOrderField_BrokerID_len
		, &pQryOrderField_InvestorID, &pQryOrderField_InvestorID_len
		, &pQryOrderField_reserve1, &pQryOrderField_reserve1_len
		, &pQryOrderField_ExchangeID, &pQryOrderField_ExchangeID_len
		, &pQryOrderField_OrderSysID, &pQryOrderField_OrderSysID_len
		, &pQryOrderField_InsertTimeStart, &pQryOrderField_InsertTimeStart_len
		, &pQryOrderField_InsertTimeEnd, &pQryOrderField_InsertTimeEnd_len
		, &pQryOrderField_InvestUnitID, &pQryOrderField_InvestUnitID_len
		, &pQryOrderField_InstrumentID, &pQryOrderField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryOrderField_BrokerID != NULL) {
		if(pQryOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pQryOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryOrderField_InvestorID != NULL) {
		if(pQryOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pQryOrderField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryOrderField_reserve1 != NULL) {
		if(pQryOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryOrderField_reserve1, sizeof(self->data.reserve1) );
		pQryOrderField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryOrderField_ExchangeID != NULL) {
		if(pQryOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryOrderField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pQryOrderField_OrderSysID != NULL) {
		if(pQryOrderField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pQryOrderField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pQryOrderField_OrderSysID, sizeof(self->data.OrderSysID) );
		pQryOrderField_OrderSysID = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryOrderField_InsertTimeStart != NULL) {
		if(pQryOrderField_InsertTimeStart_len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is %zd)", pQryOrderField_InsertTimeStart_len, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
			return -1;
		}
		strncpy(self->data.InsertTimeStart, pQryOrderField_InsertTimeStart, sizeof(self->data.InsertTimeStart) );
		pQryOrderField_InsertTimeStart = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryOrderField_InsertTimeEnd != NULL) {
		if(pQryOrderField_InsertTimeEnd_len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is %zd)", pQryOrderField_InsertTimeEnd_len, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
			return -1;
		}
		strncpy(self->data.InsertTimeEnd, pQryOrderField_InsertTimeEnd, sizeof(self->data.InsertTimeEnd) );
		pQryOrderField_InsertTimeEnd = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryOrderField_InvestUnitID != NULL) {
		if(pQryOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryOrderField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryOrderField_InstrumentID != NULL) {
		if(pQryOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryOrderField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryOrderField_dealloc(PyCThostFtdcQryOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryOrderField_repr(PyCThostFtdcQryOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "OrderSysID", self->data.OrderSysID 
		, "InsertTimeStart", self->data.InsertTimeStart 
		, "InsertTimeEnd", self->data.InsertTimeEnd 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryOrderField_get_BrokerID(PyCThostFtdcQryOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryOrderField_get_InvestorID(PyCThostFtdcQryOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryOrderField_get_reserve1(PyCThostFtdcQryOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryOrderField_get_ExchangeID(PyCThostFtdcQryOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryOrderField_get_OrderSysID(PyCThostFtdcQryOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcQryOrderField_get_InsertTimeStart(PyCThostFtdcQryOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeStart);
}

static PyObject *PyCThostFtdcQryOrderField_get_InsertTimeEnd(PyCThostFtdcQryOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeEnd);
}

static PyObject *PyCThostFtdcQryOrderField_get_InvestUnitID(PyCThostFtdcQryOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryOrderField_get_InstrumentID(PyCThostFtdcQryOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryOrderField_set_BrokerID(PyCThostFtdcQryOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOrderField_set_InvestorID(PyCThostFtdcQryOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOrderField_set_reserve1(PyCThostFtdcQryOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOrderField_set_ExchangeID(PyCThostFtdcQryOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOrderField_set_OrderSysID(PyCThostFtdcQryOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
	return 0;
}

static int PyCThostFtdcQryOrderField_set_InsertTimeStart(PyCThostFtdcQryOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOrderField_set_InsertTimeEnd(PyCThostFtdcQryOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOrderField_set_InvestUnitID(PyCThostFtdcQryOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOrderField_set_InstrumentID(PyCThostFtdcQryOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryOrderField_get_BrokerID, (setter)PyCThostFtdcQryOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryOrderField_get_InvestorID, (setter)PyCThostFtdcQryOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryOrderField_get_reserve1, (setter)PyCThostFtdcQryOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryOrderField_get_ExchangeID, (setter)PyCThostFtdcQryOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcQryOrderField_get_OrderSysID, (setter)PyCThostFtdcQryOrderField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"InsertTimeStart", (getter)PyCThostFtdcQryOrderField_get_InsertTimeStart, (setter)PyCThostFtdcQryOrderField_set_InsertTimeStart, (char *)"InsertTimeStart", NULL},
	 {(char *)"InsertTimeEnd", (getter)PyCThostFtdcQryOrderField_get_InsertTimeEnd, (setter)PyCThostFtdcQryOrderField_set_InsertTimeEnd, (char *)"InsertTimeEnd", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryOrderField_get_InvestUnitID, (setter)PyCThostFtdcQryOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryOrderField_get_InstrumentID, (setter)PyCThostFtdcQryOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryOrderField",	/* tp_name */
	sizeof(PyCThostFtdcQryOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryOrderField_repr,   /* tp_repr */
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
	"CThostFtdcQryOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryOrderField_new,       /* tp_new */
};

int PyCThostFtdcQryOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryOrderField  */
	if (PyType_Ready(&PyCThostFtdcQryOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryOrderField", (PyObject *)&PyCThostFtdcQryOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOrderField to module");
        Py_DECREF(&PyCThostFtdcQryOrderFieldType);
		return -1;
    }

    return 0;
}
