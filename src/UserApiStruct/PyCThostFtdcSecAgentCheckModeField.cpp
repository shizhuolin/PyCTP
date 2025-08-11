
#include "PyCThostFtdcSecAgentCheckModeField.h"



static PyObject *PyCThostFtdcSecAgentCheckModeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSecAgentCheckModeField *self = (PyCThostFtdcSecAgentCheckModeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSecAgentCheckModeField_init(PyCThostFtdcSecAgentCheckModeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorID", "BrokerID", "CurrencyID", "BrokerSecAgentID", "CheckSelfAccount",  NULL};

	//TThostFtdcInvestorIDType char[13]
	const char *pSecAgentCheckModeField_InvestorID = NULL;
	Py_ssize_t pSecAgentCheckModeField_InvestorID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSecAgentCheckModeField_BrokerID = NULL;
	Py_ssize_t pSecAgentCheckModeField_BrokerID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSecAgentCheckModeField_CurrencyID = NULL;
	Py_ssize_t pSecAgentCheckModeField_CurrencyID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pSecAgentCheckModeField_BrokerSecAgentID = NULL;
	Py_ssize_t pSecAgentCheckModeField_BrokerSecAgentID_len = 0;

	//TThostFtdcBoolType int
	int pSecAgentCheckModeField_CheckSelfAccount = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#i", (char **)kwlist
#endif

		, &pSecAgentCheckModeField_InvestorID, &pSecAgentCheckModeField_InvestorID_len
		, &pSecAgentCheckModeField_BrokerID, &pSecAgentCheckModeField_BrokerID_len
		, &pSecAgentCheckModeField_CurrencyID, &pSecAgentCheckModeField_CurrencyID_len
		, &pSecAgentCheckModeField_BrokerSecAgentID, &pSecAgentCheckModeField_BrokerSecAgentID_len
		, &pSecAgentCheckModeField_CheckSelfAccount


    )) {
        return -1;
    }

	//TThostFtdcInvestorIDType char[13]
	if(pSecAgentCheckModeField_InvestorID != NULL) {
		if(pSecAgentCheckModeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSecAgentCheckModeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSecAgentCheckModeField_InvestorID, sizeof(self->data.InvestorID) );
		pSecAgentCheckModeField_InvestorID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSecAgentCheckModeField_BrokerID != NULL) {
		if(pSecAgentCheckModeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSecAgentCheckModeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSecAgentCheckModeField_BrokerID, sizeof(self->data.BrokerID) );
		pSecAgentCheckModeField_BrokerID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pSecAgentCheckModeField_CurrencyID != NULL) {
		if(pSecAgentCheckModeField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pSecAgentCheckModeField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pSecAgentCheckModeField_CurrencyID, sizeof(self->data.CurrencyID) );
		pSecAgentCheckModeField_CurrencyID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pSecAgentCheckModeField_BrokerSecAgentID != NULL) {
		if(pSecAgentCheckModeField_BrokerSecAgentID_len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
			PyErr_Format(PyExc_ValueError, "BrokerSecAgentID too long: length=%zd (max allowed is %zd)", pSecAgentCheckModeField_BrokerSecAgentID_len, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID));
			return -1;
		}
		strncpy(self->data.BrokerSecAgentID, pSecAgentCheckModeField_BrokerSecAgentID, sizeof(self->data.BrokerSecAgentID) );
		pSecAgentCheckModeField_BrokerSecAgentID = NULL;
	}

	//TThostFtdcBoolType int
	self->data.CheckSelfAccount = pSecAgentCheckModeField_CheckSelfAccount;



    return 0;
}

static void PyCThostFtdcSecAgentCheckModeField_dealloc(PyCThostFtdcSecAgentCheckModeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSecAgentCheckModeField_repr(PyCThostFtdcSecAgentCheckModeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i}"
#endif

		, "InvestorID", self->data.InvestorID 
		, "BrokerID", self->data.BrokerID 
		, "CurrencyID", self->data.CurrencyID 
		, "BrokerSecAgentID", self->data.BrokerSecAgentID 
		, "CheckSelfAccount", self->data.CheckSelfAccount


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSecAgentCheckModeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSecAgentCheckModeField_get_InvestorID(PyCThostFtdcSecAgentCheckModeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSecAgentCheckModeField_get_BrokerID(PyCThostFtdcSecAgentCheckModeField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSecAgentCheckModeField_get_CurrencyID(PyCThostFtdcSecAgentCheckModeField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcSecAgentCheckModeField_get_BrokerSecAgentID(PyCThostFtdcSecAgentCheckModeField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerSecAgentID);
}

static PyObject *PyCThostFtdcSecAgentCheckModeField_get_CheckSelfAccount(PyCThostFtdcSecAgentCheckModeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CheckSelfAccount);
#else 
	return PyInt_FromLong(self->data.CheckSelfAccount);
#endif 
}

static int PyCThostFtdcSecAgentCheckModeField_set_InvestorID(PyCThostFtdcSecAgentCheckModeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSecAgentCheckModeField_set_BrokerID(PyCThostFtdcSecAgentCheckModeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSecAgentCheckModeField_set_CurrencyID(PyCThostFtdcSecAgentCheckModeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
	return 0;
}

static int PyCThostFtdcSecAgentCheckModeField_set_BrokerSecAgentID(PyCThostFtdcSecAgentCheckModeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BrokerSecAgentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
		PyErr_SetString(PyExc_ValueError, "BrokerSecAgentID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.BrokerSecAgentID, buf, sizeof(self->data.BrokerSecAgentID));
	return 0;
}

static int PyCThostFtdcSecAgentCheckModeField_set_CheckSelfAccount(PyCThostFtdcSecAgentCheckModeField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CheckSelfAccount Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CheckSelfAccount Expected int"); 
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
    self->data.CheckSelfAccount = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcSecAgentCheckModeField_getset[] = {
	 {(char *)"InvestorID", (getter)PyCThostFtdcSecAgentCheckModeField_get_InvestorID, (setter)PyCThostFtdcSecAgentCheckModeField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSecAgentCheckModeField_get_BrokerID, (setter)PyCThostFtdcSecAgentCheckModeField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcSecAgentCheckModeField_get_CurrencyID, (setter)PyCThostFtdcSecAgentCheckModeField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"BrokerSecAgentID", (getter)PyCThostFtdcSecAgentCheckModeField_get_BrokerSecAgentID, (setter)PyCThostFtdcSecAgentCheckModeField_set_BrokerSecAgentID, (char *)"BrokerSecAgentID", NULL},
	 {(char *)"CheckSelfAccount", (getter)PyCThostFtdcSecAgentCheckModeField_get_CheckSelfAccount, (setter)PyCThostFtdcSecAgentCheckModeField_set_CheckSelfAccount, (char *)"CheckSelfAccount", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSecAgentCheckModeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSecAgentCheckModeField",	/* tp_name */
	sizeof(PyCThostFtdcSecAgentCheckModeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSecAgentCheckModeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSecAgentCheckModeField_repr,   /* tp_repr */
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
	"CThostFtdcSecAgentCheckModeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSecAgentCheckModeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSecAgentCheckModeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSecAgentCheckModeField_new,       /* tp_new */
};

int PyCThostFtdcSecAgentCheckModeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSecAgentCheckModeField  */
	if (PyType_Ready(&PyCThostFtdcSecAgentCheckModeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSecAgentCheckModeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSecAgentCheckModeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSecAgentCheckModeField", (PyObject *)&PyCThostFtdcSecAgentCheckModeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSecAgentCheckModeField to module");
        Py_DECREF(&PyCThostFtdcSecAgentCheckModeFieldType);
		return -1;
    }

    return 0;
}
