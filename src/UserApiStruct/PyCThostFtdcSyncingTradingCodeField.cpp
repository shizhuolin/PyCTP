
#include "PyCThostFtdcSyncingTradingCodeField.h"



static PyObject *PyCThostFtdcSyncingTradingCodeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingTradingCodeField *self = (PyCThostFtdcSyncingTradingCodeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingTradingCodeField_init(PyCThostFtdcSyncingTradingCodeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorID", "BrokerID", "ExchangeID", "ClientID", "IsActive", "ClientIDType",  NULL};

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncingTradingCodeField_InvestorID = NULL;
	Py_ssize_t pSyncingTradingCodeField_InvestorID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncingTradingCodeField_BrokerID = NULL;
	Py_ssize_t pSyncingTradingCodeField_BrokerID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncingTradingCodeField_ExchangeID = NULL;
	Py_ssize_t pSyncingTradingCodeField_ExchangeID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pSyncingTradingCodeField_ClientID = NULL;
	Py_ssize_t pSyncingTradingCodeField_ClientID_len = 0;

	//TThostFtdcBoolType int
	int pSyncingTradingCodeField_IsActive = 0;

	//TThostFtdcClientIDTypeType char
	char pSyncingTradingCodeField_ClientIDType = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ic", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ic", (char **)kwlist
#endif

		, &pSyncingTradingCodeField_InvestorID, &pSyncingTradingCodeField_InvestorID_len
		, &pSyncingTradingCodeField_BrokerID, &pSyncingTradingCodeField_BrokerID_len
		, &pSyncingTradingCodeField_ExchangeID, &pSyncingTradingCodeField_ExchangeID_len
		, &pSyncingTradingCodeField_ClientID, &pSyncingTradingCodeField_ClientID_len
		, &pSyncingTradingCodeField_IsActive
		, &pSyncingTradingCodeField_ClientIDType


    )) {
        return -1;
    }

	//TThostFtdcInvestorIDType char[13]
	if(pSyncingTradingCodeField_InvestorID != NULL) {
		if(pSyncingTradingCodeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncingTradingCodeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncingTradingCodeField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncingTradingCodeField_InvestorID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSyncingTradingCodeField_BrokerID != NULL) {
		if(pSyncingTradingCodeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncingTradingCodeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncingTradingCodeField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncingTradingCodeField_BrokerID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncingTradingCodeField_ExchangeID != NULL) {
		if(pSyncingTradingCodeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncingTradingCodeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncingTradingCodeField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncingTradingCodeField_ExchangeID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pSyncingTradingCodeField_ClientID != NULL) {
		if(pSyncingTradingCodeField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pSyncingTradingCodeField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pSyncingTradingCodeField_ClientID, sizeof(self->data.ClientID) );
		pSyncingTradingCodeField_ClientID = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsActive = pSyncingTradingCodeField_IsActive;

	//TThostFtdcClientIDTypeType char
	self->data.ClientIDType = pSyncingTradingCodeField_ClientIDType;



    return 0;
}

static void PyCThostFtdcSyncingTradingCodeField_dealloc(PyCThostFtdcSyncingTradingCodeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingTradingCodeField_repr(PyCThostFtdcSyncingTradingCodeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:c}"
#endif

		, "InvestorID", self->data.InvestorID 
		, "BrokerID", self->data.BrokerID 
		, "ExchangeID", self->data.ExchangeID 
		, "ClientID", self->data.ClientID 
		, "IsActive", self->data.IsActive
		, "ClientIDType", self->data.ClientIDType


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingTradingCodeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncingTradingCodeField_get_InvestorID(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncingTradingCodeField_get_BrokerID(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncingTradingCodeField_get_ExchangeID(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncingTradingCodeField_get_ClientID(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcSyncingTradingCodeField_get_IsActive(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsActive);
#else 
	return PyInt_FromLong(self->data.IsActive);
#endif 
}

static PyObject *PyCThostFtdcSyncingTradingCodeField_get_ClientIDType(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ClientIDType), 1);
}

static int PyCThostFtdcSyncingTradingCodeField_set_InvestorID(PyCThostFtdcSyncingTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingCodeField_set_BrokerID(PyCThostFtdcSyncingTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingCodeField_set_ExchangeID(PyCThostFtdcSyncingTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingCodeField_set_ClientID(PyCThostFtdcSyncingTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingCodeField_set_IsActive(PyCThostFtdcSyncingTradingCodeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingCodeField_set_ClientIDType(PyCThostFtdcSyncingTradingCodeField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncingTradingCodeField_getset[] = {
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncingTradingCodeField_get_InvestorID, (setter)PyCThostFtdcSyncingTradingCodeField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncingTradingCodeField_get_BrokerID, (setter)PyCThostFtdcSyncingTradingCodeField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncingTradingCodeField_get_ExchangeID, (setter)PyCThostFtdcSyncingTradingCodeField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcSyncingTradingCodeField_get_ClientID, (setter)PyCThostFtdcSyncingTradingCodeField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"IsActive", (getter)PyCThostFtdcSyncingTradingCodeField_get_IsActive, (setter)PyCThostFtdcSyncingTradingCodeField_set_IsActive, (char *)"IsActive", NULL},
	 {(char *)"ClientIDType", (getter)PyCThostFtdcSyncingTradingCodeField_get_ClientIDType, (setter)PyCThostFtdcSyncingTradingCodeField_set_ClientIDType, (char *)"ClientIDType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingTradingCodeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingTradingCodeField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingTradingCodeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingTradingCodeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingTradingCodeField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingTradingCodeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingTradingCodeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingTradingCodeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingTradingCodeField_new,       /* tp_new */
};

int PyCThostFtdcSyncingTradingCodeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingTradingCodeField  */
	if (PyType_Ready(&PyCThostFtdcSyncingTradingCodeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingTradingCodeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingTradingCodeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingTradingCodeField", (PyObject *)&PyCThostFtdcSyncingTradingCodeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingTradingCodeField to module");
        Py_DECREF(&PyCThostFtdcSyncingTradingCodeFieldType);
		return -1;
    }

    return 0;
}
