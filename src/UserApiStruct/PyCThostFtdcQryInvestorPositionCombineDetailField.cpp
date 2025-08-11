
#include "PyCThostFtdcQryInvestorPositionCombineDetailField.h"



static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorPositionCombineDetailField *self = (PyCThostFtdcQryInvestorPositionCombineDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorPositionCombineDetailField_init(PyCThostFtdcQryInvestorPositionCombineDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "CombInstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryInvestorPositionCombineDetailField_BrokerID = NULL;
	Py_ssize_t pQryInvestorPositionCombineDetailField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryInvestorPositionCombineDetailField_InvestorID = NULL;
	Py_ssize_t pQryInvestorPositionCombineDetailField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryInvestorPositionCombineDetailField_reserve1 = NULL;
	Py_ssize_t pQryInvestorPositionCombineDetailField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryInvestorPositionCombineDetailField_ExchangeID = NULL;
	Py_ssize_t pQryInvestorPositionCombineDetailField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryInvestorPositionCombineDetailField_InvestUnitID = NULL;
	Py_ssize_t pQryInvestorPositionCombineDetailField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryInvestorPositionCombineDetailField_CombInstrumentID = NULL;
	Py_ssize_t pQryInvestorPositionCombineDetailField_CombInstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryInvestorPositionCombineDetailField_BrokerID, &pQryInvestorPositionCombineDetailField_BrokerID_len
		, &pQryInvestorPositionCombineDetailField_InvestorID, &pQryInvestorPositionCombineDetailField_InvestorID_len
		, &pQryInvestorPositionCombineDetailField_reserve1, &pQryInvestorPositionCombineDetailField_reserve1_len
		, &pQryInvestorPositionCombineDetailField_ExchangeID, &pQryInvestorPositionCombineDetailField_ExchangeID_len
		, &pQryInvestorPositionCombineDetailField_InvestUnitID, &pQryInvestorPositionCombineDetailField_InvestUnitID_len
		, &pQryInvestorPositionCombineDetailField_CombInstrumentID, &pQryInvestorPositionCombineDetailField_CombInstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryInvestorPositionCombineDetailField_BrokerID != NULL) {
		if(pQryInvestorPositionCombineDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionCombineDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryInvestorPositionCombineDetailField_BrokerID, sizeof(self->data.BrokerID) );
		pQryInvestorPositionCombineDetailField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryInvestorPositionCombineDetailField_InvestorID != NULL) {
		if(pQryInvestorPositionCombineDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionCombineDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryInvestorPositionCombineDetailField_InvestorID, sizeof(self->data.InvestorID) );
		pQryInvestorPositionCombineDetailField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryInvestorPositionCombineDetailField_reserve1 != NULL) {
		if(pQryInvestorPositionCombineDetailField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryInvestorPositionCombineDetailField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryInvestorPositionCombineDetailField_reserve1, sizeof(self->data.reserve1) );
		pQryInvestorPositionCombineDetailField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryInvestorPositionCombineDetailField_ExchangeID != NULL) {
		if(pQryInvestorPositionCombineDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionCombineDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryInvestorPositionCombineDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryInvestorPositionCombineDetailField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryInvestorPositionCombineDetailField_InvestUnitID != NULL) {
		if(pQryInvestorPositionCombineDetailField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionCombineDetailField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryInvestorPositionCombineDetailField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryInvestorPositionCombineDetailField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryInvestorPositionCombineDetailField_CombInstrumentID != NULL) {
		if(pQryInvestorPositionCombineDetailField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", pQryInvestorPositionCombineDetailField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
			return -1;
		}
		strncpy(self->data.CombInstrumentID, pQryInvestorPositionCombineDetailField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
		pQryInvestorPositionCombineDetailField_CombInstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryInvestorPositionCombineDetailField_dealloc(PyCThostFtdcQryInvestorPositionCombineDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_repr(PyCThostFtdcQryInvestorPositionCombineDetailField *self) {

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
		, "CombInstrumentID", self->data.CombInstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPositionCombineDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_BrokerID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_InvestorID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_reserve1(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_ExchangeID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_InvestUnitID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_CombInstrumentID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.CombInstrumentID);
}

static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_BrokerID(PyCThostFtdcQryInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_InvestorID(PyCThostFtdcQryInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_reserve1(PyCThostFtdcQryInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_ExchangeID(PyCThostFtdcQryInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_InvestUnitID(PyCThostFtdcQryInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_CombInstrumentID(PyCThostFtdcQryInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.CombInstrumentID, buf, sizeof(self->data.CombInstrumentID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryInvestorPositionCombineDetailField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_BrokerID, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_InvestorID, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_reserve1, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_InvestUnitID, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"CombInstrumentID", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_CombInstrumentID, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorPositionCombineDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorPositionCombineDetailField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorPositionCombineDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorPositionCombineDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorPositionCombineDetailField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorPositionCombineDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorPositionCombineDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorPositionCombineDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorPositionCombineDetailField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorPositionCombineDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorPositionCombineDetailField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorPositionCombineDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorPositionCombineDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorPositionCombineDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPositionCombineDetailField", (PyObject *)&PyCThostFtdcQryInvestorPositionCombineDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPositionCombineDetailField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorPositionCombineDetailFieldType);
		return -1;
    }

    return 0;
}
