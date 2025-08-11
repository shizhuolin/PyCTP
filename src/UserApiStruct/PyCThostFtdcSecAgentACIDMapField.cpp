
#include "PyCThostFtdcSecAgentACIDMapField.h"



static PyObject *PyCThostFtdcSecAgentACIDMapField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSecAgentACIDMapField *self = (PyCThostFtdcSecAgentACIDMapField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSecAgentACIDMapField_init(PyCThostFtdcSecAgentACIDMapField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "AccountID", "CurrencyID", "BrokerSecAgentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pSecAgentACIDMapField_BrokerID = NULL;
	Py_ssize_t pSecAgentACIDMapField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pSecAgentACIDMapField_UserID = NULL;
	Py_ssize_t pSecAgentACIDMapField_UserID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pSecAgentACIDMapField_AccountID = NULL;
	Py_ssize_t pSecAgentACIDMapField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSecAgentACIDMapField_CurrencyID = NULL;
	Py_ssize_t pSecAgentACIDMapField_CurrencyID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pSecAgentACIDMapField_BrokerSecAgentID = NULL;
	Py_ssize_t pSecAgentACIDMapField_BrokerSecAgentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#", (char **)kwlist
#endif

		, &pSecAgentACIDMapField_BrokerID, &pSecAgentACIDMapField_BrokerID_len
		, &pSecAgentACIDMapField_UserID, &pSecAgentACIDMapField_UserID_len
		, &pSecAgentACIDMapField_AccountID, &pSecAgentACIDMapField_AccountID_len
		, &pSecAgentACIDMapField_CurrencyID, &pSecAgentACIDMapField_CurrencyID_len
		, &pSecAgentACIDMapField_BrokerSecAgentID, &pSecAgentACIDMapField_BrokerSecAgentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pSecAgentACIDMapField_BrokerID != NULL) {
		if(pSecAgentACIDMapField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSecAgentACIDMapField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSecAgentACIDMapField_BrokerID, sizeof(self->data.BrokerID) );
		pSecAgentACIDMapField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pSecAgentACIDMapField_UserID != NULL) {
		if(pSecAgentACIDMapField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pSecAgentACIDMapField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pSecAgentACIDMapField_UserID, sizeof(self->data.UserID) );
		pSecAgentACIDMapField_UserID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pSecAgentACIDMapField_AccountID != NULL) {
		if(pSecAgentACIDMapField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pSecAgentACIDMapField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pSecAgentACIDMapField_AccountID, sizeof(self->data.AccountID) );
		pSecAgentACIDMapField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pSecAgentACIDMapField_CurrencyID != NULL) {
		if(pSecAgentACIDMapField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pSecAgentACIDMapField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pSecAgentACIDMapField_CurrencyID, sizeof(self->data.CurrencyID) );
		pSecAgentACIDMapField_CurrencyID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pSecAgentACIDMapField_BrokerSecAgentID != NULL) {
		if(pSecAgentACIDMapField_BrokerSecAgentID_len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
			PyErr_Format(PyExc_ValueError, "BrokerSecAgentID too long: length=%zd (max allowed is %zd)", pSecAgentACIDMapField_BrokerSecAgentID_len, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID));
			return -1;
		}
		strncpy(self->data.BrokerSecAgentID, pSecAgentACIDMapField_BrokerSecAgentID, sizeof(self->data.BrokerSecAgentID) );
		pSecAgentACIDMapField_BrokerSecAgentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcSecAgentACIDMapField_dealloc(PyCThostFtdcSecAgentACIDMapField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSecAgentACIDMapField_repr(PyCThostFtdcSecAgentACIDMapField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 
		, "BrokerSecAgentID", self->data.BrokerSecAgentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSecAgentACIDMapField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSecAgentACIDMapField_get_BrokerID(PyCThostFtdcSecAgentACIDMapField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSecAgentACIDMapField_get_UserID(PyCThostFtdcSecAgentACIDMapField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcSecAgentACIDMapField_get_AccountID(PyCThostFtdcSecAgentACIDMapField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcSecAgentACIDMapField_get_CurrencyID(PyCThostFtdcSecAgentACIDMapField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcSecAgentACIDMapField_get_BrokerSecAgentID(PyCThostFtdcSecAgentACIDMapField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerSecAgentID);
}

static int PyCThostFtdcSecAgentACIDMapField_set_BrokerID(PyCThostFtdcSecAgentACIDMapField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSecAgentACIDMapField_set_UserID(PyCThostFtdcSecAgentACIDMapField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
		PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
	return 0;
}

static int PyCThostFtdcSecAgentACIDMapField_set_AccountID(PyCThostFtdcSecAgentACIDMapField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSecAgentACIDMapField_set_CurrencyID(PyCThostFtdcSecAgentACIDMapField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSecAgentACIDMapField_set_BrokerSecAgentID(PyCThostFtdcSecAgentACIDMapField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSecAgentACIDMapField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcSecAgentACIDMapField_get_BrokerID, (setter)PyCThostFtdcSecAgentACIDMapField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcSecAgentACIDMapField_get_UserID, (setter)PyCThostFtdcSecAgentACIDMapField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcSecAgentACIDMapField_get_AccountID, (setter)PyCThostFtdcSecAgentACIDMapField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcSecAgentACIDMapField_get_CurrencyID, (setter)PyCThostFtdcSecAgentACIDMapField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"BrokerSecAgentID", (getter)PyCThostFtdcSecAgentACIDMapField_get_BrokerSecAgentID, (setter)PyCThostFtdcSecAgentACIDMapField_set_BrokerSecAgentID, (char *)"BrokerSecAgentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSecAgentACIDMapFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSecAgentACIDMapField",	/* tp_name */
	sizeof(PyCThostFtdcSecAgentACIDMapField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSecAgentACIDMapField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSecAgentACIDMapField_repr,   /* tp_repr */
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
	"CThostFtdcSecAgentACIDMapField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSecAgentACIDMapField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSecAgentACIDMapField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSecAgentACIDMapField_new,       /* tp_new */
};

int PyCThostFtdcSecAgentACIDMapFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSecAgentACIDMapField  */
	if (PyType_Ready(&PyCThostFtdcSecAgentACIDMapFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSecAgentACIDMapField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSecAgentACIDMapFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSecAgentACIDMapField", (PyObject *)&PyCThostFtdcSecAgentACIDMapFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSecAgentACIDMapField to module");
        Py_DECREF(&PyCThostFtdcSecAgentACIDMapFieldType);
		return -1;
    }

    return 0;
}
