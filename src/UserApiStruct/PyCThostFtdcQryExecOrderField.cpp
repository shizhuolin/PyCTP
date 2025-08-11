
#include "PyCThostFtdcQryExecOrderField.h"



static PyObject *PyCThostFtdcQryExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExecOrderField *self = (PyCThostFtdcQryExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryExecOrderField_init(PyCThostFtdcQryExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "ExecOrderSysID", "InsertTimeStart", "InsertTimeEnd", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryExecOrderField_BrokerID = NULL;
	Py_ssize_t pQryExecOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryExecOrderField_InvestorID = NULL;
	Py_ssize_t pQryExecOrderField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryExecOrderField_reserve1 = NULL;
	Py_ssize_t pQryExecOrderField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryExecOrderField_ExchangeID = NULL;
	Py_ssize_t pQryExecOrderField_ExchangeID_len = 0;

	//TThostFtdcExecOrderSysIDType char[21]
	const char *pQryExecOrderField_ExecOrderSysID = NULL;
	Py_ssize_t pQryExecOrderField_ExecOrderSysID_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryExecOrderField_InsertTimeStart = NULL;
	Py_ssize_t pQryExecOrderField_InsertTimeStart_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryExecOrderField_InsertTimeEnd = NULL;
	Py_ssize_t pQryExecOrderField_InsertTimeEnd_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryExecOrderField_InstrumentID = NULL;
	Py_ssize_t pQryExecOrderField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryExecOrderField_BrokerID, &pQryExecOrderField_BrokerID_len
		, &pQryExecOrderField_InvestorID, &pQryExecOrderField_InvestorID_len
		, &pQryExecOrderField_reserve1, &pQryExecOrderField_reserve1_len
		, &pQryExecOrderField_ExchangeID, &pQryExecOrderField_ExchangeID_len
		, &pQryExecOrderField_ExecOrderSysID, &pQryExecOrderField_ExecOrderSysID_len
		, &pQryExecOrderField_InsertTimeStart, &pQryExecOrderField_InsertTimeStart_len
		, &pQryExecOrderField_InsertTimeEnd, &pQryExecOrderField_InsertTimeEnd_len
		, &pQryExecOrderField_InstrumentID, &pQryExecOrderField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryExecOrderField_BrokerID != NULL) {
		if(pQryExecOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryExecOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryExecOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pQryExecOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryExecOrderField_InvestorID != NULL) {
		if(pQryExecOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryExecOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryExecOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pQryExecOrderField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryExecOrderField_reserve1 != NULL) {
		if(pQryExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryExecOrderField_reserve1, sizeof(self->data.reserve1) );
		pQryExecOrderField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryExecOrderField_ExchangeID != NULL) {
		if(pQryExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryExecOrderField_ExchangeID = NULL;
	}

	//TThostFtdcExecOrderSysIDType char[21]
	if(pQryExecOrderField_ExecOrderSysID != NULL) {
		if(pQryExecOrderField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", pQryExecOrderField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
			return -1;
		}
		strncpy(self->data.ExecOrderSysID, pQryExecOrderField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
		pQryExecOrderField_ExecOrderSysID = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryExecOrderField_InsertTimeStart != NULL) {
		if(pQryExecOrderField_InsertTimeStart_len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is %zd)", pQryExecOrderField_InsertTimeStart_len, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
			return -1;
		}
		strncpy(self->data.InsertTimeStart, pQryExecOrderField_InsertTimeStart, sizeof(self->data.InsertTimeStart) );
		pQryExecOrderField_InsertTimeStart = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryExecOrderField_InsertTimeEnd != NULL) {
		if(pQryExecOrderField_InsertTimeEnd_len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is %zd)", pQryExecOrderField_InsertTimeEnd_len, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
			return -1;
		}
		strncpy(self->data.InsertTimeEnd, pQryExecOrderField_InsertTimeEnd, sizeof(self->data.InsertTimeEnd) );
		pQryExecOrderField_InsertTimeEnd = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryExecOrderField_InstrumentID != NULL) {
		if(pQryExecOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryExecOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryExecOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryExecOrderField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryExecOrderField_dealloc(PyCThostFtdcQryExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExecOrderField_repr(PyCThostFtdcQryExecOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "ExecOrderSysID", self->data.ExecOrderSysID 
		, "InsertTimeStart", self->data.InsertTimeStart 
		, "InsertTimeEnd", self->data.InsertTimeEnd 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryExecOrderField_get_BrokerID(PyCThostFtdcQryExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryExecOrderField_get_InvestorID(PyCThostFtdcQryExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryExecOrderField_get_reserve1(PyCThostFtdcQryExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryExecOrderField_get_ExchangeID(PyCThostFtdcQryExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryExecOrderField_get_ExecOrderSysID(PyCThostFtdcQryExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderSysID);
}

static PyObject *PyCThostFtdcQryExecOrderField_get_InsertTimeStart(PyCThostFtdcQryExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeStart);
}

static PyObject *PyCThostFtdcQryExecOrderField_get_InsertTimeEnd(PyCThostFtdcQryExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeEnd);
}

static PyObject *PyCThostFtdcQryExecOrderField_get_InstrumentID(PyCThostFtdcQryExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryExecOrderField_set_BrokerID(PyCThostFtdcQryExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExecOrderField_set_InvestorID(PyCThostFtdcQryExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExecOrderField_set_reserve1(PyCThostFtdcQryExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExecOrderField_set_ExchangeID(PyCThostFtdcQryExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExecOrderField_set_ExecOrderSysID(PyCThostFtdcQryExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ExecOrderSysID, buf, sizeof(self->data.ExecOrderSysID));
	return 0;
}

static int PyCThostFtdcQryExecOrderField_set_InsertTimeStart(PyCThostFtdcQryExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExecOrderField_set_InsertTimeEnd(PyCThostFtdcQryExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExecOrderField_set_InstrumentID(PyCThostFtdcQryExecOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryExecOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryExecOrderField_get_BrokerID, (setter)PyCThostFtdcQryExecOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryExecOrderField_get_InvestorID, (setter)PyCThostFtdcQryExecOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryExecOrderField_get_reserve1, (setter)PyCThostFtdcQryExecOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryExecOrderField_get_ExchangeID, (setter)PyCThostFtdcQryExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ExecOrderSysID", (getter)PyCThostFtdcQryExecOrderField_get_ExecOrderSysID, (setter)PyCThostFtdcQryExecOrderField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
	 {(char *)"InsertTimeStart", (getter)PyCThostFtdcQryExecOrderField_get_InsertTimeStart, (setter)PyCThostFtdcQryExecOrderField_set_InsertTimeStart, (char *)"InsertTimeStart", NULL},
	 {(char *)"InsertTimeEnd", (getter)PyCThostFtdcQryExecOrderField_get_InsertTimeEnd, (setter)PyCThostFtdcQryExecOrderField_set_InsertTimeEnd, (char *)"InsertTimeEnd", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryExecOrderField_get_InstrumentID, (setter)PyCThostFtdcQryExecOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcQryExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcQryExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcQryExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcQryExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExecOrderField", (PyObject *)&PyCThostFtdcQryExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExecOrderField to module");
        Py_DECREF(&PyCThostFtdcQryExecOrderFieldType);
		return -1;
    }

    return 0;
}
