
#include "PyCThostFtdcQryInstrumentMarginRateField.h"



static PyObject *PyCThostFtdcQryInstrumentMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInstrumentMarginRateField *self = (PyCThostFtdcQryInstrumentMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryInstrumentMarginRateField_init(PyCThostFtdcQryInstrumentMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "HedgeFlag", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryInstrumentMarginRateField_BrokerID = NULL;
	Py_ssize_t pQryInstrumentMarginRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryInstrumentMarginRateField_InvestorID = NULL;
	Py_ssize_t pQryInstrumentMarginRateField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryInstrumentMarginRateField_reserve1 = NULL;
	Py_ssize_t pQryInstrumentMarginRateField_reserve1_len = 0;

	//TThostFtdcHedgeFlagType char
	char pQryInstrumentMarginRateField_HedgeFlag = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryInstrumentMarginRateField_ExchangeID = NULL;
	Py_ssize_t pQryInstrumentMarginRateField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryInstrumentMarginRateField_InvestUnitID = NULL;
	Py_ssize_t pQryInstrumentMarginRateField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryInstrumentMarginRateField_InstrumentID = NULL;
	Py_ssize_t pQryInstrumentMarginRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cs#s#s#", (char **)kwlist
#endif

		, &pQryInstrumentMarginRateField_BrokerID, &pQryInstrumentMarginRateField_BrokerID_len
		, &pQryInstrumentMarginRateField_InvestorID, &pQryInstrumentMarginRateField_InvestorID_len
		, &pQryInstrumentMarginRateField_reserve1, &pQryInstrumentMarginRateField_reserve1_len
		, &pQryInstrumentMarginRateField_HedgeFlag
		, &pQryInstrumentMarginRateField_ExchangeID, &pQryInstrumentMarginRateField_ExchangeID_len
		, &pQryInstrumentMarginRateField_InvestUnitID, &pQryInstrumentMarginRateField_InvestUnitID_len
		, &pQryInstrumentMarginRateField_InstrumentID, &pQryInstrumentMarginRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryInstrumentMarginRateField_BrokerID != NULL) {
		if(pQryInstrumentMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryInstrumentMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryInstrumentMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
		pQryInstrumentMarginRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryInstrumentMarginRateField_InvestorID != NULL) {
		if(pQryInstrumentMarginRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryInstrumentMarginRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryInstrumentMarginRateField_InvestorID, sizeof(self->data.InvestorID) );
		pQryInstrumentMarginRateField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryInstrumentMarginRateField_reserve1 != NULL) {
		if(pQryInstrumentMarginRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryInstrumentMarginRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryInstrumentMarginRateField_reserve1, sizeof(self->data.reserve1) );
		pQryInstrumentMarginRateField_reserve1 = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pQryInstrumentMarginRateField_HedgeFlag;

	//TThostFtdcExchangeIDType char[9]
	if(pQryInstrumentMarginRateField_ExchangeID != NULL) {
		if(pQryInstrumentMarginRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryInstrumentMarginRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryInstrumentMarginRateField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryInstrumentMarginRateField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryInstrumentMarginRateField_InvestUnitID != NULL) {
		if(pQryInstrumentMarginRateField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryInstrumentMarginRateField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryInstrumentMarginRateField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryInstrumentMarginRateField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryInstrumentMarginRateField_InstrumentID != NULL) {
		if(pQryInstrumentMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryInstrumentMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryInstrumentMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryInstrumentMarginRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryInstrumentMarginRateField_dealloc(PyCThostFtdcQryInstrumentMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInstrumentMarginRateField_repr(PyCThostFtdcQryInstrumentMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "HedgeFlag", self->data.HedgeFlag
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_BrokerID(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_InvestorID(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_reserve1(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_HedgeFlag(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_ExchangeID(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_InvestUnitID(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_InstrumentID(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryInstrumentMarginRateField_set_BrokerID(PyCThostFtdcQryInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentMarginRateField_set_InvestorID(PyCThostFtdcQryInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentMarginRateField_set_reserve1(PyCThostFtdcQryInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentMarginRateField_set_HedgeFlag(PyCThostFtdcQryInstrumentMarginRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "HedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.HedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcQryInstrumentMarginRateField_set_ExchangeID(PyCThostFtdcQryInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentMarginRateField_set_InvestUnitID(PyCThostFtdcQryInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentMarginRateField_set_InstrumentID(PyCThostFtdcQryInstrumentMarginRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryInstrumentMarginRateField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_BrokerID, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_InvestorID, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_reserve1, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_ExchangeID, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_InvestUnitID, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_InstrumentID, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInstrumentMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInstrumentMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcQryInstrumentMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInstrumentMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInstrumentMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcQryInstrumentMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInstrumentMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInstrumentMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInstrumentMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcQryInstrumentMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInstrumentMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcQryInstrumentMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInstrumentMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInstrumentMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentMarginRateField", (PyObject *)&PyCThostFtdcQryInstrumentMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentMarginRateField to module");
        Py_DECREF(&PyCThostFtdcQryInstrumentMarginRateFieldType);
		return -1;
    }

    return 0;
}
