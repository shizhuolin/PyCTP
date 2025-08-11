
#include "PyCThostFtdcInvestorAccountField.h"



static PyObject *PyCThostFtdcInvestorAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorAccountField *self = (PyCThostFtdcInvestorAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorAccountField_init(PyCThostFtdcInvestorAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "AccountID", "CurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorAccountField_BrokerID = NULL;
	Py_ssize_t pInvestorAccountField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorAccountField_InvestorID = NULL;
	Py_ssize_t pInvestorAccountField_InvestorID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pInvestorAccountField_AccountID = NULL;
	Py_ssize_t pInvestorAccountField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pInvestorAccountField_CurrencyID = NULL;
	Py_ssize_t pInvestorAccountField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pInvestorAccountField_BrokerID, &pInvestorAccountField_BrokerID_len
		, &pInvestorAccountField_InvestorID, &pInvestorAccountField_InvestorID_len
		, &pInvestorAccountField_AccountID, &pInvestorAccountField_AccountID_len
		, &pInvestorAccountField_CurrencyID, &pInvestorAccountField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorAccountField_BrokerID != NULL) {
		if(pInvestorAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorAccountField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorAccountField_InvestorID != NULL) {
		if(pInvestorAccountField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorAccountField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorAccountField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorAccountField_InvestorID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pInvestorAccountField_AccountID != NULL) {
		if(pInvestorAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pInvestorAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pInvestorAccountField_AccountID, sizeof(self->data.AccountID) );
		pInvestorAccountField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pInvestorAccountField_CurrencyID != NULL) {
		if(pInvestorAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pInvestorAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pInvestorAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pInvestorAccountField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInvestorAccountField_dealloc(PyCThostFtdcInvestorAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorAccountField_repr(PyCThostFtdcInvestorAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorAccountField_get_BrokerID(PyCThostFtdcInvestorAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorAccountField_get_InvestorID(PyCThostFtdcInvestorAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorAccountField_get_AccountID(PyCThostFtdcInvestorAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcInvestorAccountField_get_CurrencyID(PyCThostFtdcInvestorAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcInvestorAccountField_set_BrokerID(PyCThostFtdcInvestorAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorAccountField_set_InvestorID(PyCThostFtdcInvestorAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorAccountField_set_AccountID(PyCThostFtdcInvestorAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorAccountField_set_CurrencyID(PyCThostFtdcInvestorAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInvestorAccountField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorAccountField_get_BrokerID, (setter)PyCThostFtdcInvestorAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorAccountField_get_InvestorID, (setter)PyCThostFtdcInvestorAccountField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcInvestorAccountField_get_AccountID, (setter)PyCThostFtdcInvestorAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcInvestorAccountField_get_CurrencyID, (setter)PyCThostFtdcInvestorAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorAccountField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorAccountField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorAccountField_new,       /* tp_new */
};

int PyCThostFtdcInvestorAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorAccountField  */
	if (PyType_Ready(&PyCThostFtdcInvestorAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorAccountField", (PyObject *)&PyCThostFtdcInvestorAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorAccountField to module");
        Py_DECREF(&PyCThostFtdcInvestorAccountFieldType);
		return -1;
    }

    return 0;
}
