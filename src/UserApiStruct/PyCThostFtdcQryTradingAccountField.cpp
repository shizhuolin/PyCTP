
#include "PyCThostFtdcQryTradingAccountField.h"



static PyObject *PyCThostFtdcQryTradingAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTradingAccountField *self = (PyCThostFtdcQryTradingAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryTradingAccountField_init(PyCThostFtdcQryTradingAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "CurrencyID", "BizType", "AccountID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryTradingAccountField_BrokerID = NULL;
	Py_ssize_t pQryTradingAccountField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryTradingAccountField_InvestorID = NULL;
	Py_ssize_t pQryTradingAccountField_InvestorID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pQryTradingAccountField_CurrencyID = NULL;
	Py_ssize_t pQryTradingAccountField_CurrencyID_len = 0;

	//TThostFtdcBizTypeType char
	char pQryTradingAccountField_BizType = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pQryTradingAccountField_AccountID = NULL;
	Py_ssize_t pQryTradingAccountField_AccountID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cs#", (char **)kwlist
#endif

		, &pQryTradingAccountField_BrokerID, &pQryTradingAccountField_BrokerID_len
		, &pQryTradingAccountField_InvestorID, &pQryTradingAccountField_InvestorID_len
		, &pQryTradingAccountField_CurrencyID, &pQryTradingAccountField_CurrencyID_len
		, &pQryTradingAccountField_BizType
		, &pQryTradingAccountField_AccountID, &pQryTradingAccountField_AccountID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryTradingAccountField_BrokerID != NULL) {
		if(pQryTradingAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryTradingAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryTradingAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pQryTradingAccountField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryTradingAccountField_InvestorID != NULL) {
		if(pQryTradingAccountField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryTradingAccountField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryTradingAccountField_InvestorID, sizeof(self->data.InvestorID) );
		pQryTradingAccountField_InvestorID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pQryTradingAccountField_CurrencyID != NULL) {
		if(pQryTradingAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pQryTradingAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pQryTradingAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pQryTradingAccountField_CurrencyID = NULL;
	}

	//TThostFtdcBizTypeType char
	self->data.BizType = pQryTradingAccountField_BizType;

	//TThostFtdcAccountIDType char[13]
	if(pQryTradingAccountField_AccountID != NULL) {
		if(pQryTradingAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pQryTradingAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pQryTradingAccountField_AccountID, sizeof(self->data.AccountID) );
		pQryTradingAccountField_AccountID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryTradingAccountField_dealloc(PyCThostFtdcQryTradingAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTradingAccountField_repr(PyCThostFtdcQryTradingAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "CurrencyID", self->data.CurrencyID 
		, "BizType", self->data.BizType
		, "AccountID", self->data.AccountID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradingAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryTradingAccountField_get_BrokerID(PyCThostFtdcQryTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryTradingAccountField_get_InvestorID(PyCThostFtdcQryTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryTradingAccountField_get_CurrencyID(PyCThostFtdcQryTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcQryTradingAccountField_get_BizType(PyCThostFtdcQryTradingAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BizType), 1);
}

static PyObject *PyCThostFtdcQryTradingAccountField_get_AccountID(PyCThostFtdcQryTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static int PyCThostFtdcQryTradingAccountField_set_BrokerID(PyCThostFtdcQryTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradingAccountField_set_InvestorID(PyCThostFtdcQryTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradingAccountField_set_CurrencyID(PyCThostFtdcQryTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradingAccountField_set_BizType(PyCThostFtdcQryTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradingAccountField_set_AccountID(PyCThostFtdcQryTradingAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryTradingAccountField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryTradingAccountField_get_BrokerID, (setter)PyCThostFtdcQryTradingAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryTradingAccountField_get_InvestorID, (setter)PyCThostFtdcQryTradingAccountField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcQryTradingAccountField_get_CurrencyID, (setter)PyCThostFtdcQryTradingAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"BizType", (getter)PyCThostFtdcQryTradingAccountField_get_BizType, (setter)PyCThostFtdcQryTradingAccountField_set_BizType, (char *)"BizType", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcQryTradingAccountField_get_AccountID, (setter)PyCThostFtdcQryTradingAccountField_set_AccountID, (char *)"AccountID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTradingAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTradingAccountField",	/* tp_name */
	sizeof(PyCThostFtdcQryTradingAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTradingAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTradingAccountField_repr,   /* tp_repr */
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
	"CThostFtdcQryTradingAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTradingAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTradingAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTradingAccountField_new,       /* tp_new */
};

int PyCThostFtdcQryTradingAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTradingAccountField  */
	if (PyType_Ready(&PyCThostFtdcQryTradingAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTradingAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTradingAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTradingAccountField", (PyObject *)&PyCThostFtdcQryTradingAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTradingAccountField to module");
        Py_DECREF(&PyCThostFtdcQryTradingAccountFieldType);
		return -1;
    }

    return 0;
}
