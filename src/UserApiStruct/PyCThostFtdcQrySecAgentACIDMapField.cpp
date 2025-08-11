
#include "PyCThostFtdcQrySecAgentACIDMapField.h"



static PyObject *PyCThostFtdcQrySecAgentACIDMapField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySecAgentACIDMapField *self = (PyCThostFtdcQrySecAgentACIDMapField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQrySecAgentACIDMapField_init(PyCThostFtdcQrySecAgentACIDMapField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "AccountID", "CurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQrySecAgentACIDMapField_BrokerID = NULL;
	Py_ssize_t pQrySecAgentACIDMapField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pQrySecAgentACIDMapField_UserID = NULL;
	Py_ssize_t pQrySecAgentACIDMapField_UserID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pQrySecAgentACIDMapField_AccountID = NULL;
	Py_ssize_t pQrySecAgentACIDMapField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pQrySecAgentACIDMapField_CurrencyID = NULL;
	Py_ssize_t pQrySecAgentACIDMapField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pQrySecAgentACIDMapField_BrokerID, &pQrySecAgentACIDMapField_BrokerID_len
		, &pQrySecAgentACIDMapField_UserID, &pQrySecAgentACIDMapField_UserID_len
		, &pQrySecAgentACIDMapField_AccountID, &pQrySecAgentACIDMapField_AccountID_len
		, &pQrySecAgentACIDMapField_CurrencyID, &pQrySecAgentACIDMapField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQrySecAgentACIDMapField_BrokerID != NULL) {
		if(pQrySecAgentACIDMapField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQrySecAgentACIDMapField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQrySecAgentACIDMapField_BrokerID, sizeof(self->data.BrokerID) );
		pQrySecAgentACIDMapField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pQrySecAgentACIDMapField_UserID != NULL) {
		if(pQrySecAgentACIDMapField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pQrySecAgentACIDMapField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pQrySecAgentACIDMapField_UserID, sizeof(self->data.UserID) );
		pQrySecAgentACIDMapField_UserID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pQrySecAgentACIDMapField_AccountID != NULL) {
		if(pQrySecAgentACIDMapField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pQrySecAgentACIDMapField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pQrySecAgentACIDMapField_AccountID, sizeof(self->data.AccountID) );
		pQrySecAgentACIDMapField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pQrySecAgentACIDMapField_CurrencyID != NULL) {
		if(pQrySecAgentACIDMapField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pQrySecAgentACIDMapField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pQrySecAgentACIDMapField_CurrencyID, sizeof(self->data.CurrencyID) );
		pQrySecAgentACIDMapField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQrySecAgentACIDMapField_dealloc(PyCThostFtdcQrySecAgentACIDMapField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySecAgentACIDMapField_repr(PyCThostFtdcQrySecAgentACIDMapField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySecAgentACIDMapField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQrySecAgentACIDMapField_get_BrokerID(PyCThostFtdcQrySecAgentACIDMapField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQrySecAgentACIDMapField_get_UserID(PyCThostFtdcQrySecAgentACIDMapField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcQrySecAgentACIDMapField_get_AccountID(PyCThostFtdcQrySecAgentACIDMapField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcQrySecAgentACIDMapField_get_CurrencyID(PyCThostFtdcQrySecAgentACIDMapField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcQrySecAgentACIDMapField_set_BrokerID(PyCThostFtdcQrySecAgentACIDMapField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySecAgentACIDMapField_set_UserID(PyCThostFtdcQrySecAgentACIDMapField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySecAgentACIDMapField_set_AccountID(PyCThostFtdcQrySecAgentACIDMapField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySecAgentACIDMapField_set_CurrencyID(PyCThostFtdcQrySecAgentACIDMapField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQrySecAgentACIDMapField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQrySecAgentACIDMapField_get_BrokerID, (setter)PyCThostFtdcQrySecAgentACIDMapField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcQrySecAgentACIDMapField_get_UserID, (setter)PyCThostFtdcQrySecAgentACIDMapField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcQrySecAgentACIDMapField_get_AccountID, (setter)PyCThostFtdcQrySecAgentACIDMapField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcQrySecAgentACIDMapField_get_CurrencyID, (setter)PyCThostFtdcQrySecAgentACIDMapField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySecAgentACIDMapFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySecAgentACIDMapField",	/* tp_name */
	sizeof(PyCThostFtdcQrySecAgentACIDMapField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySecAgentACIDMapField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySecAgentACIDMapField_repr,   /* tp_repr */
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
	"CThostFtdcQrySecAgentACIDMapField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySecAgentACIDMapField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySecAgentACIDMapField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySecAgentACIDMapField_new,       /* tp_new */
};

int PyCThostFtdcQrySecAgentACIDMapFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySecAgentACIDMapField  */
	if (PyType_Ready(&PyCThostFtdcQrySecAgentACIDMapFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySecAgentACIDMapField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySecAgentACIDMapFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySecAgentACIDMapField", (PyObject *)&PyCThostFtdcQrySecAgentACIDMapFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySecAgentACIDMapField to module");
        Py_DECREF(&PyCThostFtdcQrySecAgentACIDMapFieldType);
		return -1;
    }

    return 0;
}
