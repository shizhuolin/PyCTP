
#include "PyCThostFtdcQryInstrumentCommissionRateField.h"



static PyObject *PyCThostFtdcQryInstrumentCommissionRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInstrumentCommissionRateField *self = (PyCThostFtdcQryInstrumentCommissionRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryInstrumentCommissionRateField_init(PyCThostFtdcQryInstrumentCommissionRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryInstrumentCommissionRateField_BrokerID = NULL;
	Py_ssize_t pQryInstrumentCommissionRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryInstrumentCommissionRateField_InvestorID = NULL;
	Py_ssize_t pQryInstrumentCommissionRateField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryInstrumentCommissionRateField_reserve1 = NULL;
	Py_ssize_t pQryInstrumentCommissionRateField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryInstrumentCommissionRateField_ExchangeID = NULL;
	Py_ssize_t pQryInstrumentCommissionRateField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryInstrumentCommissionRateField_InvestUnitID = NULL;
	Py_ssize_t pQryInstrumentCommissionRateField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryInstrumentCommissionRateField_InstrumentID = NULL;
	Py_ssize_t pQryInstrumentCommissionRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryInstrumentCommissionRateField_BrokerID, &pQryInstrumentCommissionRateField_BrokerID_len
		, &pQryInstrumentCommissionRateField_InvestorID, &pQryInstrumentCommissionRateField_InvestorID_len
		, &pQryInstrumentCommissionRateField_reserve1, &pQryInstrumentCommissionRateField_reserve1_len
		, &pQryInstrumentCommissionRateField_ExchangeID, &pQryInstrumentCommissionRateField_ExchangeID_len
		, &pQryInstrumentCommissionRateField_InvestUnitID, &pQryInstrumentCommissionRateField_InvestUnitID_len
		, &pQryInstrumentCommissionRateField_InstrumentID, &pQryInstrumentCommissionRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryInstrumentCommissionRateField_BrokerID != NULL) {
		if(pQryInstrumentCommissionRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryInstrumentCommissionRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryInstrumentCommissionRateField_BrokerID, sizeof(self->data.BrokerID) );
		pQryInstrumentCommissionRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryInstrumentCommissionRateField_InvestorID != NULL) {
		if(pQryInstrumentCommissionRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryInstrumentCommissionRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryInstrumentCommissionRateField_InvestorID, sizeof(self->data.InvestorID) );
		pQryInstrumentCommissionRateField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryInstrumentCommissionRateField_reserve1 != NULL) {
		if(pQryInstrumentCommissionRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryInstrumentCommissionRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryInstrumentCommissionRateField_reserve1, sizeof(self->data.reserve1) );
		pQryInstrumentCommissionRateField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryInstrumentCommissionRateField_ExchangeID != NULL) {
		if(pQryInstrumentCommissionRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryInstrumentCommissionRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryInstrumentCommissionRateField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryInstrumentCommissionRateField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryInstrumentCommissionRateField_InvestUnitID != NULL) {
		if(pQryInstrumentCommissionRateField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryInstrumentCommissionRateField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryInstrumentCommissionRateField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryInstrumentCommissionRateField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryInstrumentCommissionRateField_InstrumentID != NULL) {
		if(pQryInstrumentCommissionRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryInstrumentCommissionRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryInstrumentCommissionRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryInstrumentCommissionRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryInstrumentCommissionRateField_dealloc(PyCThostFtdcQryInstrumentCommissionRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInstrumentCommissionRateField_repr(PyCThostFtdcQryInstrumentCommissionRateField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentCommissionRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryInstrumentCommissionRateField_get_BrokerID(PyCThostFtdcQryInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryInstrumentCommissionRateField_get_InvestorID(PyCThostFtdcQryInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryInstrumentCommissionRateField_get_reserve1(PyCThostFtdcQryInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryInstrumentCommissionRateField_get_ExchangeID(PyCThostFtdcQryInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryInstrumentCommissionRateField_get_InvestUnitID(PyCThostFtdcQryInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryInstrumentCommissionRateField_get_InstrumentID(PyCThostFtdcQryInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryInstrumentCommissionRateField_set_BrokerID(PyCThostFtdcQryInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentCommissionRateField_set_InvestorID(PyCThostFtdcQryInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentCommissionRateField_set_reserve1(PyCThostFtdcQryInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentCommissionRateField_set_ExchangeID(PyCThostFtdcQryInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentCommissionRateField_set_InvestUnitID(PyCThostFtdcQryInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentCommissionRateField_set_InstrumentID(PyCThostFtdcQryInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryInstrumentCommissionRateField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryInstrumentCommissionRateField_get_BrokerID, (setter)PyCThostFtdcQryInstrumentCommissionRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryInstrumentCommissionRateField_get_InvestorID, (setter)PyCThostFtdcQryInstrumentCommissionRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryInstrumentCommissionRateField_get_reserve1, (setter)PyCThostFtdcQryInstrumentCommissionRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryInstrumentCommissionRateField_get_ExchangeID, (setter)PyCThostFtdcQryInstrumentCommissionRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryInstrumentCommissionRateField_get_InvestUnitID, (setter)PyCThostFtdcQryInstrumentCommissionRateField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryInstrumentCommissionRateField_get_InstrumentID, (setter)PyCThostFtdcQryInstrumentCommissionRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInstrumentCommissionRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInstrumentCommissionRateField",	/* tp_name */
	sizeof(PyCThostFtdcQryInstrumentCommissionRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInstrumentCommissionRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInstrumentCommissionRateField_repr,   /* tp_repr */
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
	"CThostFtdcQryInstrumentCommissionRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInstrumentCommissionRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInstrumentCommissionRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInstrumentCommissionRateField_new,       /* tp_new */
};

int PyCThostFtdcQryInstrumentCommissionRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInstrumentCommissionRateField  */
	if (PyType_Ready(&PyCThostFtdcQryInstrumentCommissionRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInstrumentCommissionRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInstrumentCommissionRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentCommissionRateField", (PyObject *)&PyCThostFtdcQryInstrumentCommissionRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentCommissionRateField to module");
        Py_DECREF(&PyCThostFtdcQryInstrumentCommissionRateFieldType);
		return -1;
    }

    return 0;
}
