
#include "PyCThostFtdcTradingCodeField.h"



static PyObject *PyCThostFtdcTradingCodeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingCodeField *self = (PyCThostFtdcTradingCodeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTradingCodeField_init(PyCThostFtdcTradingCodeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorID", "BrokerID", "ExchangeID", "ClientID", "IsActive", "ClientIDType", "BranchID", "BizType", "InvestUnitID",  NULL};

	//TThostFtdcInvestorIDType char[13]
	const char *pTradingCodeField_InvestorID = NULL;
	Py_ssize_t pTradingCodeField_InvestorID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pTradingCodeField_BrokerID = NULL;
	Py_ssize_t pTradingCodeField_BrokerID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pTradingCodeField_ExchangeID = NULL;
	Py_ssize_t pTradingCodeField_ExchangeID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pTradingCodeField_ClientID = NULL;
	Py_ssize_t pTradingCodeField_ClientID_len = 0;

	//TThostFtdcBoolType int
	int pTradingCodeField_IsActive = 0;

	//TThostFtdcClientIDTypeType char
	char pTradingCodeField_ClientIDType = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pTradingCodeField_BranchID = NULL;
	Py_ssize_t pTradingCodeField_BranchID_len = 0;

	//TThostFtdcBizTypeType char
	char pTradingCodeField_BizType = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pTradingCodeField_InvestUnitID = NULL;
	Py_ssize_t pTradingCodeField_InvestUnitID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#icy#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ics#cs#", (char **)kwlist
#endif

		, &pTradingCodeField_InvestorID, &pTradingCodeField_InvestorID_len
		, &pTradingCodeField_BrokerID, &pTradingCodeField_BrokerID_len
		, &pTradingCodeField_ExchangeID, &pTradingCodeField_ExchangeID_len
		, &pTradingCodeField_ClientID, &pTradingCodeField_ClientID_len
		, &pTradingCodeField_IsActive
		, &pTradingCodeField_ClientIDType
		, &pTradingCodeField_BranchID, &pTradingCodeField_BranchID_len
		, &pTradingCodeField_BizType
		, &pTradingCodeField_InvestUnitID, &pTradingCodeField_InvestUnitID_len


    )) {
        return -1;
    }

	//TThostFtdcInvestorIDType char[13]
	if(pTradingCodeField_InvestorID != NULL) {
		if(pTradingCodeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pTradingCodeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pTradingCodeField_InvestorID, sizeof(self->data.InvestorID) );
		pTradingCodeField_InvestorID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pTradingCodeField_BrokerID != NULL) {
		if(pTradingCodeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTradingCodeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTradingCodeField_BrokerID, sizeof(self->data.BrokerID) );
		pTradingCodeField_BrokerID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pTradingCodeField_ExchangeID != NULL) {
		if(pTradingCodeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pTradingCodeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pTradingCodeField_ExchangeID, sizeof(self->data.ExchangeID) );
		pTradingCodeField_ExchangeID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pTradingCodeField_ClientID != NULL) {
		if(pTradingCodeField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pTradingCodeField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pTradingCodeField_ClientID, sizeof(self->data.ClientID) );
		pTradingCodeField_ClientID = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsActive = pTradingCodeField_IsActive;

	//TThostFtdcClientIDTypeType char
	self->data.ClientIDType = pTradingCodeField_ClientIDType;

	//TThostFtdcBranchIDType char[9]
	if(pTradingCodeField_BranchID != NULL) {
		if(pTradingCodeField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pTradingCodeField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pTradingCodeField_BranchID, sizeof(self->data.BranchID) );
		pTradingCodeField_BranchID = NULL;
	}

	//TThostFtdcBizTypeType char
	self->data.BizType = pTradingCodeField_BizType;

	//TThostFtdcInvestUnitIDType char[17]
	if(pTradingCodeField_InvestUnitID != NULL) {
		if(pTradingCodeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pTradingCodeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pTradingCodeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pTradingCodeField_InvestUnitID = NULL;
	}



    return 0;
}

static void PyCThostFtdcTradingCodeField_dealloc(PyCThostFtdcTradingCodeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingCodeField_repr(PyCThostFtdcTradingCodeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:c,s:s,s:c,s:s}"
#endif

		, "InvestorID", self->data.InvestorID 
		, "BrokerID", self->data.BrokerID 
		, "ExchangeID", self->data.ExchangeID 
		, "ClientID", self->data.ClientID 
		, "IsActive", self->data.IsActive
		, "ClientIDType", self->data.ClientIDType
		, "BranchID", self->data.BranchID 
		, "BizType", self->data.BizType
		, "InvestUnitID", self->data.InvestUnitID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingCodeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTradingCodeField_get_InvestorID(PyCThostFtdcTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcTradingCodeField_get_BrokerID(PyCThostFtdcTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTradingCodeField_get_ExchangeID(PyCThostFtdcTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcTradingCodeField_get_ClientID(PyCThostFtdcTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcTradingCodeField_get_IsActive(PyCThostFtdcTradingCodeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsActive);
#else 
	return PyInt_FromLong(self->data.IsActive);
#endif 
}

static PyObject *PyCThostFtdcTradingCodeField_get_ClientIDType(PyCThostFtdcTradingCodeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ClientIDType), 1);
}

static PyObject *PyCThostFtdcTradingCodeField_get_BranchID(PyCThostFtdcTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcTradingCodeField_get_BizType(PyCThostFtdcTradingCodeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BizType), 1);
}

static PyObject *PyCThostFtdcTradingCodeField_get_InvestUnitID(PyCThostFtdcTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static int PyCThostFtdcTradingCodeField_set_InvestorID(PyCThostFtdcTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingCodeField_set_BrokerID(PyCThostFtdcTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingCodeField_set_ExchangeID(PyCThostFtdcTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingCodeField_set_ClientID(PyCThostFtdcTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingCodeField_set_IsActive(PyCThostFtdcTradingCodeField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int"); 
#endif 
        return -1;
    }
#if PY_MAJOR_VERSION >= 3 
    const long buf = PyLong_AsLong(val); 
#else 
    const long buf = PyInt_AsLong(val); 
#endif 
    if (buf == -1 && PyErr_Occurred()) { 
        return -1; 
    } 
    if (buf < INT_MIN || buf > INT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.IsActive = (int)buf; 
    return 0; 
}

static int PyCThostFtdcTradingCodeField_set_ClientIDType(PyCThostFtdcTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingCodeField_set_BranchID(PyCThostFtdcTradingCodeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BranchID)) {
		PyErr_SetString(PyExc_ValueError, "BranchID must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.BranchID, buf, sizeof(self->data.BranchID));
	return 0;
}

static int PyCThostFtdcTradingCodeField_set_BizType(PyCThostFtdcTradingCodeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BizType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BizType)) {
		PyErr_SetString(PyExc_ValueError, "BizType must be less than 1 bytes");
		return -1;
	}
	self->data.BizType = *buf;
	return 0;
}

static int PyCThostFtdcTradingCodeField_set_InvestUnitID(PyCThostFtdcTradingCodeField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTradingCodeField_getset[] = {
	 {(char *)"InvestorID", (getter)PyCThostFtdcTradingCodeField_get_InvestorID, (setter)PyCThostFtdcTradingCodeField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcTradingCodeField_get_BrokerID, (setter)PyCThostFtdcTradingCodeField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcTradingCodeField_get_ExchangeID, (setter)PyCThostFtdcTradingCodeField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcTradingCodeField_get_ClientID, (setter)PyCThostFtdcTradingCodeField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"IsActive", (getter)PyCThostFtdcTradingCodeField_get_IsActive, (setter)PyCThostFtdcTradingCodeField_set_IsActive, (char *)"IsActive", NULL},
	 {(char *)"ClientIDType", (getter)PyCThostFtdcTradingCodeField_get_ClientIDType, (setter)PyCThostFtdcTradingCodeField_set_ClientIDType, (char *)"ClientIDType", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcTradingCodeField_get_BranchID, (setter)PyCThostFtdcTradingCodeField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"BizType", (getter)PyCThostFtdcTradingCodeField_get_BizType, (setter)PyCThostFtdcTradingCodeField_set_BizType, (char *)"BizType", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcTradingCodeField_get_InvestUnitID, (setter)PyCThostFtdcTradingCodeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingCodeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingCodeField",	/* tp_name */
	sizeof(PyCThostFtdcTradingCodeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingCodeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingCodeField_repr,   /* tp_repr */
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
	"CThostFtdcTradingCodeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingCodeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingCodeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingCodeField_new,       /* tp_new */
};

int PyCThostFtdcTradingCodeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingCodeField  */
	if (PyType_Ready(&PyCThostFtdcTradingCodeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingCodeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingCodeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingCodeField", (PyObject *)&PyCThostFtdcTradingCodeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingCodeField to module");
        Py_DECREF(&PyCThostFtdcTradingCodeFieldType);
		return -1;
    }

    return 0;
}
