
#include "PyCThostFtdcQryTradingCodeField.h"



static PyObject *PyCThostFtdcQryTradingCodeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTradingCodeField *self = (PyCThostFtdcQryTradingCodeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryTradingCodeField_init(PyCThostFtdcQryTradingCodeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExchangeID", "ClientID", "ClientIDType", "InvestUnitID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryTradingCodeField_BrokerID = NULL;
	Py_ssize_t pQryTradingCodeField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryTradingCodeField_InvestorID = NULL;
	Py_ssize_t pQryTradingCodeField_InvestorID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryTradingCodeField_ExchangeID = NULL;
	Py_ssize_t pQryTradingCodeField_ExchangeID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pQryTradingCodeField_ClientID = NULL;
	Py_ssize_t pQryTradingCodeField_ClientID_len = 0;

	//TThostFtdcClientIDTypeType char
	char pQryTradingCodeField_ClientIDType = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryTradingCodeField_InvestUnitID = NULL;
	Py_ssize_t pQryTradingCodeField_InvestUnitID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#cs#", (char **)kwlist
#endif

		, &pQryTradingCodeField_BrokerID, &pQryTradingCodeField_BrokerID_len
		, &pQryTradingCodeField_InvestorID, &pQryTradingCodeField_InvestorID_len
		, &pQryTradingCodeField_ExchangeID, &pQryTradingCodeField_ExchangeID_len
		, &pQryTradingCodeField_ClientID, &pQryTradingCodeField_ClientID_len
		, &pQryTradingCodeField_ClientIDType
		, &pQryTradingCodeField_InvestUnitID, &pQryTradingCodeField_InvestUnitID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryTradingCodeField_BrokerID != NULL) {
		if(pQryTradingCodeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryTradingCodeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryTradingCodeField_BrokerID, sizeof(self->data.BrokerID) );
		pQryTradingCodeField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryTradingCodeField_InvestorID != NULL) {
		if(pQryTradingCodeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryTradingCodeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryTradingCodeField_InvestorID, sizeof(self->data.InvestorID) );
		pQryTradingCodeField_InvestorID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryTradingCodeField_ExchangeID != NULL) {
		if(pQryTradingCodeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryTradingCodeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryTradingCodeField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryTradingCodeField_ExchangeID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pQryTradingCodeField_ClientID != NULL) {
		if(pQryTradingCodeField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pQryTradingCodeField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pQryTradingCodeField_ClientID, sizeof(self->data.ClientID) );
		pQryTradingCodeField_ClientID = NULL;
	}

	//TThostFtdcClientIDTypeType char
	self->data.ClientIDType = pQryTradingCodeField_ClientIDType;

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryTradingCodeField_InvestUnitID != NULL) {
		if(pQryTradingCodeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryTradingCodeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryTradingCodeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryTradingCodeField_InvestUnitID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryTradingCodeField_dealloc(PyCThostFtdcQryTradingCodeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTradingCodeField_repr(PyCThostFtdcQryTradingCodeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ExchangeID", self->data.ExchangeID 
		, "ClientID", self->data.ClientID 
		, "ClientIDType", self->data.ClientIDType
		, "InvestUnitID", self->data.InvestUnitID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradingCodeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryTradingCodeField_get_BrokerID(PyCThostFtdcQryTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryTradingCodeField_get_InvestorID(PyCThostFtdcQryTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryTradingCodeField_get_ExchangeID(PyCThostFtdcQryTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryTradingCodeField_get_ClientID(PyCThostFtdcQryTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcQryTradingCodeField_get_ClientIDType(PyCThostFtdcQryTradingCodeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ClientIDType), 1);
}

static PyObject *PyCThostFtdcQryTradingCodeField_get_InvestUnitID(PyCThostFtdcQryTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static int PyCThostFtdcQryTradingCodeField_set_BrokerID(PyCThostFtdcQryTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradingCodeField_set_InvestorID(PyCThostFtdcQryTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradingCodeField_set_ExchangeID(PyCThostFtdcQryTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradingCodeField_set_ClientID(PyCThostFtdcQryTradingCodeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientID)) {
		PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
	return 0;
}

static int PyCThostFtdcQryTradingCodeField_set_ClientIDType(PyCThostFtdcQryTradingCodeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientIDType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientIDType)) {
		PyErr_SetString(PyExc_ValueError, "ClientIDType must be less than 1 bytes");
		return -1;
	}
	self->data.ClientIDType = *buf;
	return 0;
}

static int PyCThostFtdcQryTradingCodeField_set_InvestUnitID(PyCThostFtdcQryTradingCodeField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryTradingCodeField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryTradingCodeField_get_BrokerID, (setter)PyCThostFtdcQryTradingCodeField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryTradingCodeField_get_InvestorID, (setter)PyCThostFtdcQryTradingCodeField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryTradingCodeField_get_ExchangeID, (setter)PyCThostFtdcQryTradingCodeField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcQryTradingCodeField_get_ClientID, (setter)PyCThostFtdcQryTradingCodeField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"ClientIDType", (getter)PyCThostFtdcQryTradingCodeField_get_ClientIDType, (setter)PyCThostFtdcQryTradingCodeField_set_ClientIDType, (char *)"ClientIDType", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryTradingCodeField_get_InvestUnitID, (setter)PyCThostFtdcQryTradingCodeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTradingCodeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTradingCodeField",	/* tp_name */
	sizeof(PyCThostFtdcQryTradingCodeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTradingCodeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTradingCodeField_repr,   /* tp_repr */
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
	"CThostFtdcQryTradingCodeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTradingCodeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTradingCodeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTradingCodeField_new,       /* tp_new */
};

int PyCThostFtdcQryTradingCodeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTradingCodeField  */
	if (PyType_Ready(&PyCThostFtdcQryTradingCodeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTradingCodeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTradingCodeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTradingCodeField", (PyObject *)&PyCThostFtdcQryTradingCodeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTradingCodeField to module");
        Py_DECREF(&PyCThostFtdcQryTradingCodeFieldType);
		return -1;
    }

    return 0;
}
