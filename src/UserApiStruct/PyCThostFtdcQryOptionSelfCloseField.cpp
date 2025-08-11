
#include "PyCThostFtdcQryOptionSelfCloseField.h"



static PyObject *PyCThostFtdcQryOptionSelfCloseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryOptionSelfCloseField *self = (PyCThostFtdcQryOptionSelfCloseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryOptionSelfCloseField_init(PyCThostFtdcQryOptionSelfCloseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "OptionSelfCloseSysID", "InsertTimeStart", "InsertTimeEnd", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryOptionSelfCloseField_BrokerID = NULL;
	Py_ssize_t pQryOptionSelfCloseField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryOptionSelfCloseField_InvestorID = NULL;
	Py_ssize_t pQryOptionSelfCloseField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryOptionSelfCloseField_reserve1 = NULL;
	Py_ssize_t pQryOptionSelfCloseField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryOptionSelfCloseField_ExchangeID = NULL;
	Py_ssize_t pQryOptionSelfCloseField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pQryOptionSelfCloseField_OptionSelfCloseSysID = NULL;
	Py_ssize_t pQryOptionSelfCloseField_OptionSelfCloseSysID_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryOptionSelfCloseField_InsertTimeStart = NULL;
	Py_ssize_t pQryOptionSelfCloseField_InsertTimeStart_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryOptionSelfCloseField_InsertTimeEnd = NULL;
	Py_ssize_t pQryOptionSelfCloseField_InsertTimeEnd_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryOptionSelfCloseField_InstrumentID = NULL;
	Py_ssize_t pQryOptionSelfCloseField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryOptionSelfCloseField_BrokerID, &pQryOptionSelfCloseField_BrokerID_len
		, &pQryOptionSelfCloseField_InvestorID, &pQryOptionSelfCloseField_InvestorID_len
		, &pQryOptionSelfCloseField_reserve1, &pQryOptionSelfCloseField_reserve1_len
		, &pQryOptionSelfCloseField_ExchangeID, &pQryOptionSelfCloseField_ExchangeID_len
		, &pQryOptionSelfCloseField_OptionSelfCloseSysID, &pQryOptionSelfCloseField_OptionSelfCloseSysID_len
		, &pQryOptionSelfCloseField_InsertTimeStart, &pQryOptionSelfCloseField_InsertTimeStart_len
		, &pQryOptionSelfCloseField_InsertTimeEnd, &pQryOptionSelfCloseField_InsertTimeEnd_len
		, &pQryOptionSelfCloseField_InstrumentID, &pQryOptionSelfCloseField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryOptionSelfCloseField_BrokerID != NULL) {
		if(pQryOptionSelfCloseField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryOptionSelfCloseField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryOptionSelfCloseField_BrokerID, sizeof(self->data.BrokerID) );
		pQryOptionSelfCloseField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryOptionSelfCloseField_InvestorID != NULL) {
		if(pQryOptionSelfCloseField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryOptionSelfCloseField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryOptionSelfCloseField_InvestorID, sizeof(self->data.InvestorID) );
		pQryOptionSelfCloseField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryOptionSelfCloseField_reserve1 != NULL) {
		if(pQryOptionSelfCloseField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryOptionSelfCloseField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryOptionSelfCloseField_reserve1, sizeof(self->data.reserve1) );
		pQryOptionSelfCloseField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryOptionSelfCloseField_ExchangeID != NULL) {
		if(pQryOptionSelfCloseField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryOptionSelfCloseField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryOptionSelfCloseField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryOptionSelfCloseField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pQryOptionSelfCloseField_OptionSelfCloseSysID != NULL) {
		if(pQryOptionSelfCloseField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", pQryOptionSelfCloseField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseSysID, pQryOptionSelfCloseField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
		pQryOptionSelfCloseField_OptionSelfCloseSysID = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryOptionSelfCloseField_InsertTimeStart != NULL) {
		if(pQryOptionSelfCloseField_InsertTimeStart_len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is %zd)", pQryOptionSelfCloseField_InsertTimeStart_len, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
			return -1;
		}
		strncpy(self->data.InsertTimeStart, pQryOptionSelfCloseField_InsertTimeStart, sizeof(self->data.InsertTimeStart) );
		pQryOptionSelfCloseField_InsertTimeStart = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryOptionSelfCloseField_InsertTimeEnd != NULL) {
		if(pQryOptionSelfCloseField_InsertTimeEnd_len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is %zd)", pQryOptionSelfCloseField_InsertTimeEnd_len, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
			return -1;
		}
		strncpy(self->data.InsertTimeEnd, pQryOptionSelfCloseField_InsertTimeEnd, sizeof(self->data.InsertTimeEnd) );
		pQryOptionSelfCloseField_InsertTimeEnd = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryOptionSelfCloseField_InstrumentID != NULL) {
		if(pQryOptionSelfCloseField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryOptionSelfCloseField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryOptionSelfCloseField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryOptionSelfCloseField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryOptionSelfCloseField_dealloc(PyCThostFtdcQryOptionSelfCloseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseField_repr(PyCThostFtdcQryOptionSelfCloseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "OptionSelfCloseSysID", self->data.OptionSelfCloseSysID 
		, "InsertTimeStart", self->data.InsertTimeStart 
		, "InsertTimeEnd", self->data.InsertTimeEnd 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionSelfCloseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_BrokerID(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_InvestorID(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_reserve1(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_ExchangeID(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_OptionSelfCloseSysID(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_InsertTimeStart(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeStart);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_InsertTimeEnd(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeEnd);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseField_get_InstrumentID(PyCThostFtdcQryOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryOptionSelfCloseField_set_BrokerID(PyCThostFtdcQryOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionSelfCloseField_set_InvestorID(PyCThostFtdcQryOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionSelfCloseField_set_reserve1(PyCThostFtdcQryOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionSelfCloseField_set_ExchangeID(PyCThostFtdcQryOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionSelfCloseField_set_OptionSelfCloseSysID(PyCThostFtdcQryOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
		PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.OptionSelfCloseSysID, buf, sizeof(self->data.OptionSelfCloseSysID));
	return 0;
}

static int PyCThostFtdcQryOptionSelfCloseField_set_InsertTimeStart(PyCThostFtdcQryOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionSelfCloseField_set_InsertTimeEnd(PyCThostFtdcQryOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionSelfCloseField_set_InstrumentID(PyCThostFtdcQryOptionSelfCloseField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryOptionSelfCloseField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryOptionSelfCloseField_get_BrokerID, (setter)PyCThostFtdcQryOptionSelfCloseField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryOptionSelfCloseField_get_InvestorID, (setter)PyCThostFtdcQryOptionSelfCloseField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryOptionSelfCloseField_get_reserve1, (setter)PyCThostFtdcQryOptionSelfCloseField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryOptionSelfCloseField_get_ExchangeID, (setter)PyCThostFtdcQryOptionSelfCloseField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcQryOptionSelfCloseField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcQryOptionSelfCloseField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
	 {(char *)"InsertTimeStart", (getter)PyCThostFtdcQryOptionSelfCloseField_get_InsertTimeStart, (setter)PyCThostFtdcQryOptionSelfCloseField_set_InsertTimeStart, (char *)"InsertTimeStart", NULL},
	 {(char *)"InsertTimeEnd", (getter)PyCThostFtdcQryOptionSelfCloseField_get_InsertTimeEnd, (setter)PyCThostFtdcQryOptionSelfCloseField_set_InsertTimeEnd, (char *)"InsertTimeEnd", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryOptionSelfCloseField_get_InstrumentID, (setter)PyCThostFtdcQryOptionSelfCloseField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryOptionSelfCloseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryOptionSelfCloseField",	/* tp_name */
	sizeof(PyCThostFtdcQryOptionSelfCloseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryOptionSelfCloseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryOptionSelfCloseField_repr,   /* tp_repr */
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
	"CThostFtdcQryOptionSelfCloseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryOptionSelfCloseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryOptionSelfCloseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryOptionSelfCloseField_new,       /* tp_new */
};

int PyCThostFtdcQryOptionSelfCloseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryOptionSelfCloseField  */
	if (PyType_Ready(&PyCThostFtdcQryOptionSelfCloseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryOptionSelfCloseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryOptionSelfCloseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryOptionSelfCloseField", (PyObject *)&PyCThostFtdcQryOptionSelfCloseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionSelfCloseField to module");
        Py_DECREF(&PyCThostFtdcQryOptionSelfCloseFieldType);
		return -1;
    }

    return 0;
}
