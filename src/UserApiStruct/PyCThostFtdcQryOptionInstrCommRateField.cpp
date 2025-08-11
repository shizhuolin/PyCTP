
#include "PyCThostFtdcQryOptionInstrCommRateField.h"



static PyObject *PyCThostFtdcQryOptionInstrCommRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryOptionInstrCommRateField *self = (PyCThostFtdcQryOptionInstrCommRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryOptionInstrCommRateField_init(PyCThostFtdcQryOptionInstrCommRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryOptionInstrCommRateField_BrokerID = NULL;
	Py_ssize_t pQryOptionInstrCommRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryOptionInstrCommRateField_InvestorID = NULL;
	Py_ssize_t pQryOptionInstrCommRateField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryOptionInstrCommRateField_reserve1 = NULL;
	Py_ssize_t pQryOptionInstrCommRateField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryOptionInstrCommRateField_ExchangeID = NULL;
	Py_ssize_t pQryOptionInstrCommRateField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryOptionInstrCommRateField_InvestUnitID = NULL;
	Py_ssize_t pQryOptionInstrCommRateField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryOptionInstrCommRateField_InstrumentID = NULL;
	Py_ssize_t pQryOptionInstrCommRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryOptionInstrCommRateField_BrokerID, &pQryOptionInstrCommRateField_BrokerID_len
		, &pQryOptionInstrCommRateField_InvestorID, &pQryOptionInstrCommRateField_InvestorID_len
		, &pQryOptionInstrCommRateField_reserve1, &pQryOptionInstrCommRateField_reserve1_len
		, &pQryOptionInstrCommRateField_ExchangeID, &pQryOptionInstrCommRateField_ExchangeID_len
		, &pQryOptionInstrCommRateField_InvestUnitID, &pQryOptionInstrCommRateField_InvestUnitID_len
		, &pQryOptionInstrCommRateField_InstrumentID, &pQryOptionInstrCommRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryOptionInstrCommRateField_BrokerID != NULL) {
		if(pQryOptionInstrCommRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryOptionInstrCommRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryOptionInstrCommRateField_BrokerID, sizeof(self->data.BrokerID) );
		pQryOptionInstrCommRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryOptionInstrCommRateField_InvestorID != NULL) {
		if(pQryOptionInstrCommRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryOptionInstrCommRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryOptionInstrCommRateField_InvestorID, sizeof(self->data.InvestorID) );
		pQryOptionInstrCommRateField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryOptionInstrCommRateField_reserve1 != NULL) {
		if(pQryOptionInstrCommRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryOptionInstrCommRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryOptionInstrCommRateField_reserve1, sizeof(self->data.reserve1) );
		pQryOptionInstrCommRateField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryOptionInstrCommRateField_ExchangeID != NULL) {
		if(pQryOptionInstrCommRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryOptionInstrCommRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryOptionInstrCommRateField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryOptionInstrCommRateField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryOptionInstrCommRateField_InvestUnitID != NULL) {
		if(pQryOptionInstrCommRateField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryOptionInstrCommRateField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryOptionInstrCommRateField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryOptionInstrCommRateField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryOptionInstrCommRateField_InstrumentID != NULL) {
		if(pQryOptionInstrCommRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryOptionInstrCommRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryOptionInstrCommRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryOptionInstrCommRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryOptionInstrCommRateField_dealloc(PyCThostFtdcQryOptionInstrCommRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryOptionInstrCommRateField_repr(PyCThostFtdcQryOptionInstrCommRateField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionInstrCommRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryOptionInstrCommRateField_get_BrokerID(PyCThostFtdcQryOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryOptionInstrCommRateField_get_InvestorID(PyCThostFtdcQryOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryOptionInstrCommRateField_get_reserve1(PyCThostFtdcQryOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryOptionInstrCommRateField_get_ExchangeID(PyCThostFtdcQryOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryOptionInstrCommRateField_get_InvestUnitID(PyCThostFtdcQryOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryOptionInstrCommRateField_get_InstrumentID(PyCThostFtdcQryOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryOptionInstrCommRateField_set_BrokerID(PyCThostFtdcQryOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionInstrCommRateField_set_InvestorID(PyCThostFtdcQryOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionInstrCommRateField_set_reserve1(PyCThostFtdcQryOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionInstrCommRateField_set_ExchangeID(PyCThostFtdcQryOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionInstrCommRateField_set_InvestUnitID(PyCThostFtdcQryOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionInstrCommRateField_set_InstrumentID(PyCThostFtdcQryOptionInstrCommRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryOptionInstrCommRateField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryOptionInstrCommRateField_get_BrokerID, (setter)PyCThostFtdcQryOptionInstrCommRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryOptionInstrCommRateField_get_InvestorID, (setter)PyCThostFtdcQryOptionInstrCommRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryOptionInstrCommRateField_get_reserve1, (setter)PyCThostFtdcQryOptionInstrCommRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryOptionInstrCommRateField_get_ExchangeID, (setter)PyCThostFtdcQryOptionInstrCommRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryOptionInstrCommRateField_get_InvestUnitID, (setter)PyCThostFtdcQryOptionInstrCommRateField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryOptionInstrCommRateField_get_InstrumentID, (setter)PyCThostFtdcQryOptionInstrCommRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryOptionInstrCommRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryOptionInstrCommRateField",	/* tp_name */
	sizeof(PyCThostFtdcQryOptionInstrCommRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryOptionInstrCommRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryOptionInstrCommRateField_repr,   /* tp_repr */
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
	"CThostFtdcQryOptionInstrCommRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryOptionInstrCommRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryOptionInstrCommRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryOptionInstrCommRateField_new,       /* tp_new */
};

int PyCThostFtdcQryOptionInstrCommRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryOptionInstrCommRateField  */
	if (PyType_Ready(&PyCThostFtdcQryOptionInstrCommRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryOptionInstrCommRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryOptionInstrCommRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryOptionInstrCommRateField", (PyObject *)&PyCThostFtdcQryOptionInstrCommRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionInstrCommRateField to module");
        Py_DECREF(&PyCThostFtdcQryOptionInstrCommRateFieldType);
		return -1;
    }

    return 0;
}
