
#include "PyCThostFtdcInvestUnitField.h"



static PyObject *PyCThostFtdcInvestUnitField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestUnitField *self = (PyCThostFtdcInvestUnitField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestUnitField_init(PyCThostFtdcInvestUnitField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InvestUnitID", "InvestorUnitName", "InvestorGroupID", "CommModelID", "MarginModelID", "AccountID", "CurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestUnitField_BrokerID = NULL;
	Py_ssize_t pInvestUnitField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestUnitField_InvestorID = NULL;
	Py_ssize_t pInvestUnitField_InvestorID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInvestUnitField_InvestUnitID = NULL;
	Py_ssize_t pInvestUnitField_InvestUnitID_len = 0;

	//TThostFtdcPartyNameType char[81]
	const char *pInvestUnitField_InvestorUnitName = NULL;
	Py_ssize_t pInvestUnitField_InvestorUnitName_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestUnitField_InvestorGroupID = NULL;
	Py_ssize_t pInvestUnitField_InvestorGroupID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestUnitField_CommModelID = NULL;
	Py_ssize_t pInvestUnitField_CommModelID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestUnitField_MarginModelID = NULL;
	Py_ssize_t pInvestUnitField_MarginModelID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pInvestUnitField_AccountID = NULL;
	Py_ssize_t pInvestUnitField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pInvestUnitField_CurrencyID = NULL;
	Py_ssize_t pInvestUnitField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pInvestUnitField_BrokerID, &pInvestUnitField_BrokerID_len
		, &pInvestUnitField_InvestorID, &pInvestUnitField_InvestorID_len
		, &pInvestUnitField_InvestUnitID, &pInvestUnitField_InvestUnitID_len
		, &pInvestUnitField_InvestorUnitName, &pInvestUnitField_InvestorUnitName_len
		, &pInvestUnitField_InvestorGroupID, &pInvestUnitField_InvestorGroupID_len
		, &pInvestUnitField_CommModelID, &pInvestUnitField_CommModelID_len
		, &pInvestUnitField_MarginModelID, &pInvestUnitField_MarginModelID_len
		, &pInvestUnitField_AccountID, &pInvestUnitField_AccountID_len
		, &pInvestUnitField_CurrencyID, &pInvestUnitField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInvestUnitField_BrokerID != NULL) {
		if(pInvestUnitField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestUnitField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestUnitField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestUnitField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestUnitField_InvestorID != NULL) {
		if(pInvestUnitField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestUnitField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestUnitField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestUnitField_InvestorID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInvestUnitField_InvestUnitID != NULL) {
		if(pInvestUnitField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInvestUnitField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInvestUnitField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInvestUnitField_InvestUnitID = NULL;
	}

	//TThostFtdcPartyNameType char[81]
	if(pInvestUnitField_InvestorUnitName != NULL) {
		if(pInvestUnitField_InvestorUnitName_len > (Py_ssize_t)sizeof(self->data.InvestorUnitName)) {
			PyErr_Format(PyExc_ValueError, "InvestorUnitName too long: length=%zd (max allowed is %zd)", pInvestUnitField_InvestorUnitName_len, (Py_ssize_t)sizeof(self->data.InvestorUnitName));
			return -1;
		}
		strncpy(self->data.InvestorUnitName, pInvestUnitField_InvestorUnitName, sizeof(self->data.InvestorUnitName) );
		pInvestUnitField_InvestorUnitName = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestUnitField_InvestorGroupID != NULL) {
		if(pInvestUnitField_InvestorGroupID_len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
			PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is %zd)", pInvestUnitField_InvestorGroupID_len, (Py_ssize_t)sizeof(self->data.InvestorGroupID));
			return -1;
		}
		strncpy(self->data.InvestorGroupID, pInvestUnitField_InvestorGroupID, sizeof(self->data.InvestorGroupID) );
		pInvestUnitField_InvestorGroupID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestUnitField_CommModelID != NULL) {
		if(pInvestUnitField_CommModelID_len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
			PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is %zd)", pInvestUnitField_CommModelID_len, (Py_ssize_t)sizeof(self->data.CommModelID));
			return -1;
		}
		strncpy(self->data.CommModelID, pInvestUnitField_CommModelID, sizeof(self->data.CommModelID) );
		pInvestUnitField_CommModelID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestUnitField_MarginModelID != NULL) {
		if(pInvestUnitField_MarginModelID_len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
			PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is %zd)", pInvestUnitField_MarginModelID_len, (Py_ssize_t)sizeof(self->data.MarginModelID));
			return -1;
		}
		strncpy(self->data.MarginModelID, pInvestUnitField_MarginModelID, sizeof(self->data.MarginModelID) );
		pInvestUnitField_MarginModelID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pInvestUnitField_AccountID != NULL) {
		if(pInvestUnitField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pInvestUnitField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pInvestUnitField_AccountID, sizeof(self->data.AccountID) );
		pInvestUnitField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pInvestUnitField_CurrencyID != NULL) {
		if(pInvestUnitField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pInvestUnitField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pInvestUnitField_CurrencyID, sizeof(self->data.CurrencyID) );
		pInvestUnitField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInvestUnitField_dealloc(PyCThostFtdcInvestUnitField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestUnitField_repr(PyCThostFtdcInvestUnitField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InvestorUnitName", self->data.InvestorUnitName 
		, "InvestorGroupID", self->data.InvestorGroupID 
		, "CommModelID", self->data.CommModelID 
		, "MarginModelID", self->data.MarginModelID 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestUnitField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestUnitField_get_BrokerID(PyCThostFtdcInvestUnitField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestUnitField_get_InvestorID(PyCThostFtdcInvestUnitField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestUnitField_get_InvestUnitID(PyCThostFtdcInvestUnitField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInvestUnitField_get_InvestorUnitName(PyCThostFtdcInvestUnitField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorUnitName);
}

static PyObject *PyCThostFtdcInvestUnitField_get_InvestorGroupID(PyCThostFtdcInvestUnitField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorGroupID);
}

static PyObject *PyCThostFtdcInvestUnitField_get_CommModelID(PyCThostFtdcInvestUnitField *self, void *closure) {
	return PyBytes_FromString(self->data.CommModelID);
}

static PyObject *PyCThostFtdcInvestUnitField_get_MarginModelID(PyCThostFtdcInvestUnitField *self, void *closure) {
	return PyBytes_FromString(self->data.MarginModelID);
}

static PyObject *PyCThostFtdcInvestUnitField_get_AccountID(PyCThostFtdcInvestUnitField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcInvestUnitField_get_CurrencyID(PyCThostFtdcInvestUnitField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcInvestUnitField_set_BrokerID(PyCThostFtdcInvestUnitField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestUnitField_set_InvestorID(PyCThostFtdcInvestUnitField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestUnitField_set_InvestUnitID(PyCThostFtdcInvestUnitField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestUnitField_set_InvestorUnitName(PyCThostFtdcInvestUnitField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorUnitName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorUnitName)) {
		PyErr_SetString(PyExc_ValueError, "InvestorUnitName must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.InvestorUnitName, buf, sizeof(self->data.InvestorUnitName));
	return 0;
}

static int PyCThostFtdcInvestUnitField_set_InvestorGroupID(PyCThostFtdcInvestUnitField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorGroupID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorGroupID, buf, sizeof(self->data.InvestorGroupID));
	return 0;
}

static int PyCThostFtdcInvestUnitField_set_CommModelID(PyCThostFtdcInvestUnitField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CommModelID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
		PyErr_SetString(PyExc_ValueError, "CommModelID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.CommModelID, buf, sizeof(self->data.CommModelID));
	return 0;
}

static int PyCThostFtdcInvestUnitField_set_MarginModelID(PyCThostFtdcInvestUnitField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
		PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.MarginModelID, buf, sizeof(self->data.MarginModelID));
	return 0;
}

static int PyCThostFtdcInvestUnitField_set_AccountID(PyCThostFtdcInvestUnitField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
		PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
	return 0;
}

static int PyCThostFtdcInvestUnitField_set_CurrencyID(PyCThostFtdcInvestUnitField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInvestUnitField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestUnitField_get_BrokerID, (setter)PyCThostFtdcInvestUnitField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestUnitField_get_InvestorID, (setter)PyCThostFtdcInvestUnitField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInvestUnitField_get_InvestUnitID, (setter)PyCThostFtdcInvestUnitField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InvestorUnitName", (getter)PyCThostFtdcInvestUnitField_get_InvestorUnitName, (setter)PyCThostFtdcInvestUnitField_set_InvestorUnitName, (char *)"InvestorUnitName", NULL},
	 {(char *)"InvestorGroupID", (getter)PyCThostFtdcInvestUnitField_get_InvestorGroupID, (setter)PyCThostFtdcInvestUnitField_set_InvestorGroupID, (char *)"InvestorGroupID", NULL},
	 {(char *)"CommModelID", (getter)PyCThostFtdcInvestUnitField_get_CommModelID, (setter)PyCThostFtdcInvestUnitField_set_CommModelID, (char *)"CommModelID", NULL},
	 {(char *)"MarginModelID", (getter)PyCThostFtdcInvestUnitField_get_MarginModelID, (setter)PyCThostFtdcInvestUnitField_set_MarginModelID, (char *)"MarginModelID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcInvestUnitField_get_AccountID, (setter)PyCThostFtdcInvestUnitField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcInvestUnitField_get_CurrencyID, (setter)PyCThostFtdcInvestUnitField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestUnitFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestUnitField",	/* tp_name */
	sizeof(PyCThostFtdcInvestUnitField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestUnitField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestUnitField_repr,   /* tp_repr */
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
	"CThostFtdcInvestUnitField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestUnitField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestUnitField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestUnitField_new,       /* tp_new */
};

int PyCThostFtdcInvestUnitFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestUnitField  */
	if (PyType_Ready(&PyCThostFtdcInvestUnitFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestUnitField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestUnitFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestUnitField", (PyObject *)&PyCThostFtdcInvestUnitFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestUnitField to module");
        Py_DECREF(&PyCThostFtdcInvestUnitFieldType);
		return -1;
    }

    return 0;
}
