
#include "PyCThostFtdcQryEWarrantOffsetField.h"



static PyObject *PyCThostFtdcQryEWarrantOffsetField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryEWarrantOffsetField *self = (PyCThostFtdcQryEWarrantOffsetField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryEWarrantOffsetField_init(PyCThostFtdcQryEWarrantOffsetField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExchangeID", "reserve1", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryEWarrantOffsetField_BrokerID = NULL;
	Py_ssize_t pQryEWarrantOffsetField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryEWarrantOffsetField_InvestorID = NULL;
	Py_ssize_t pQryEWarrantOffsetField_InvestorID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryEWarrantOffsetField_ExchangeID = NULL;
	Py_ssize_t pQryEWarrantOffsetField_ExchangeID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryEWarrantOffsetField_reserve1 = NULL;
	Py_ssize_t pQryEWarrantOffsetField_reserve1_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryEWarrantOffsetField_InvestUnitID = NULL;
	Py_ssize_t pQryEWarrantOffsetField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryEWarrantOffsetField_InstrumentID = NULL;
	Py_ssize_t pQryEWarrantOffsetField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryEWarrantOffsetField_BrokerID, &pQryEWarrantOffsetField_BrokerID_len
		, &pQryEWarrantOffsetField_InvestorID, &pQryEWarrantOffsetField_InvestorID_len
		, &pQryEWarrantOffsetField_ExchangeID, &pQryEWarrantOffsetField_ExchangeID_len
		, &pQryEWarrantOffsetField_reserve1, &pQryEWarrantOffsetField_reserve1_len
		, &pQryEWarrantOffsetField_InvestUnitID, &pQryEWarrantOffsetField_InvestUnitID_len
		, &pQryEWarrantOffsetField_InstrumentID, &pQryEWarrantOffsetField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryEWarrantOffsetField_BrokerID != NULL) {
		if(pQryEWarrantOffsetField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryEWarrantOffsetField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryEWarrantOffsetField_BrokerID, sizeof(self->data.BrokerID) );
		pQryEWarrantOffsetField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryEWarrantOffsetField_InvestorID != NULL) {
		if(pQryEWarrantOffsetField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryEWarrantOffsetField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryEWarrantOffsetField_InvestorID, sizeof(self->data.InvestorID) );
		pQryEWarrantOffsetField_InvestorID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryEWarrantOffsetField_ExchangeID != NULL) {
		if(pQryEWarrantOffsetField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryEWarrantOffsetField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryEWarrantOffsetField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryEWarrantOffsetField_ExchangeID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryEWarrantOffsetField_reserve1 != NULL) {
		if(pQryEWarrantOffsetField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryEWarrantOffsetField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryEWarrantOffsetField_reserve1, sizeof(self->data.reserve1) );
		pQryEWarrantOffsetField_reserve1 = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryEWarrantOffsetField_InvestUnitID != NULL) {
		if(pQryEWarrantOffsetField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryEWarrantOffsetField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryEWarrantOffsetField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryEWarrantOffsetField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryEWarrantOffsetField_InstrumentID != NULL) {
		if(pQryEWarrantOffsetField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryEWarrantOffsetField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryEWarrantOffsetField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryEWarrantOffsetField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryEWarrantOffsetField_dealloc(PyCThostFtdcQryEWarrantOffsetField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryEWarrantOffsetField_repr(PyCThostFtdcQryEWarrantOffsetField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ExchangeID", self->data.ExchangeID 
		, "reserve1", self->data.reserve1 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryEWarrantOffsetField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_BrokerID(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_InvestorID(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_ExchangeID(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_reserve1(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_InvestUnitID(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_InstrumentID(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryEWarrantOffsetField_set_BrokerID(PyCThostFtdcQryEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryEWarrantOffsetField_set_InvestorID(PyCThostFtdcQryEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryEWarrantOffsetField_set_ExchangeID(PyCThostFtdcQryEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryEWarrantOffsetField_set_reserve1(PyCThostFtdcQryEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryEWarrantOffsetField_set_InvestUnitID(PyCThostFtdcQryEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryEWarrantOffsetField_set_InstrumentID(PyCThostFtdcQryEWarrantOffsetField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryEWarrantOffsetField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryEWarrantOffsetField_get_BrokerID, (setter)PyCThostFtdcQryEWarrantOffsetField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryEWarrantOffsetField_get_InvestorID, (setter)PyCThostFtdcQryEWarrantOffsetField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryEWarrantOffsetField_get_ExchangeID, (setter)PyCThostFtdcQryEWarrantOffsetField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryEWarrantOffsetField_get_reserve1, (setter)PyCThostFtdcQryEWarrantOffsetField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryEWarrantOffsetField_get_InvestUnitID, (setter)PyCThostFtdcQryEWarrantOffsetField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryEWarrantOffsetField_get_InstrumentID, (setter)PyCThostFtdcQryEWarrantOffsetField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryEWarrantOffsetFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryEWarrantOffsetField",	/* tp_name */
	sizeof(PyCThostFtdcQryEWarrantOffsetField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryEWarrantOffsetField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryEWarrantOffsetField_repr,   /* tp_repr */
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
	"CThostFtdcQryEWarrantOffsetField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryEWarrantOffsetField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryEWarrantOffsetField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryEWarrantOffsetField_new,       /* tp_new */
};

int PyCThostFtdcQryEWarrantOffsetFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryEWarrantOffsetField  */
	if (PyType_Ready(&PyCThostFtdcQryEWarrantOffsetFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryEWarrantOffsetField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryEWarrantOffsetFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryEWarrantOffsetField", (PyObject *)&PyCThostFtdcQryEWarrantOffsetFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryEWarrantOffsetField to module");
        Py_DECREF(&PyCThostFtdcQryEWarrantOffsetFieldType);
		return -1;
    }

    return 0;
}
