
#include "PyCThostFtdcQryExchangeForQuoteField.h"



static PyObject *PyCThostFtdcQryExchangeForQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeForQuoteField *self = (PyCThostFtdcQryExchangeForQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeForQuoteField_init(PyCThostFtdcQryExchangeForQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "reserve1", "ExchangeID", "TraderID", "ExchangeInstID",  NULL};

	//TThostFtdcParticipantIDType char[11]
	const char *pQryExchangeForQuoteField_ParticipantID = NULL;
	Py_ssize_t pQryExchangeForQuoteField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pQryExchangeForQuoteField_ClientID = NULL;
	Py_ssize_t pQryExchangeForQuoteField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pQryExchangeForQuoteField_reserve1 = NULL;
	Py_ssize_t pQryExchangeForQuoteField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryExchangeForQuoteField_ExchangeID = NULL;
	Py_ssize_t pQryExchangeForQuoteField_ExchangeID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQryExchangeForQuoteField_TraderID = NULL;
	Py_ssize_t pQryExchangeForQuoteField_TraderID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pQryExchangeForQuoteField_ExchangeInstID = NULL;
	Py_ssize_t pQryExchangeForQuoteField_ExchangeInstID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryExchangeForQuoteField_ParticipantID, &pQryExchangeForQuoteField_ParticipantID_len
		, &pQryExchangeForQuoteField_ClientID, &pQryExchangeForQuoteField_ClientID_len
		, &pQryExchangeForQuoteField_reserve1, &pQryExchangeForQuoteField_reserve1_len
		, &pQryExchangeForQuoteField_ExchangeID, &pQryExchangeForQuoteField_ExchangeID_len
		, &pQryExchangeForQuoteField_TraderID, &pQryExchangeForQuoteField_TraderID_len
		, &pQryExchangeForQuoteField_ExchangeInstID, &pQryExchangeForQuoteField_ExchangeInstID_len


    )) {
        return -1;
    }

	//TThostFtdcParticipantIDType char[11]
	if(pQryExchangeForQuoteField_ParticipantID != NULL) {
		if(pQryExchangeForQuoteField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQryExchangeForQuoteField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQryExchangeForQuoteField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQryExchangeForQuoteField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pQryExchangeForQuoteField_ClientID != NULL) {
		if(pQryExchangeForQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pQryExchangeForQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pQryExchangeForQuoteField_ClientID, sizeof(self->data.ClientID) );
		pQryExchangeForQuoteField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pQryExchangeForQuoteField_reserve1 != NULL) {
		if(pQryExchangeForQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryExchangeForQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryExchangeForQuoteField_reserve1, sizeof(self->data.reserve1) );
		pQryExchangeForQuoteField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryExchangeForQuoteField_ExchangeID != NULL) {
		if(pQryExchangeForQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryExchangeForQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryExchangeForQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryExchangeForQuoteField_ExchangeID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQryExchangeForQuoteField_TraderID != NULL) {
		if(pQryExchangeForQuoteField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQryExchangeForQuoteField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQryExchangeForQuoteField_TraderID, sizeof(self->data.TraderID) );
		pQryExchangeForQuoteField_TraderID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pQryExchangeForQuoteField_ExchangeInstID != NULL) {
		if(pQryExchangeForQuoteField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pQryExchangeForQuoteField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pQryExchangeForQuoteField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pQryExchangeForQuoteField_ExchangeInstID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryExchangeForQuoteField_dealloc(PyCThostFtdcQryExchangeForQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeForQuoteField_repr(PyCThostFtdcQryExchangeForQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "TraderID", self->data.TraderID 
		, "ExchangeInstID", self->data.ExchangeInstID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeForQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryExchangeForQuoteField_get_ParticipantID(PyCThostFtdcQryExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQryExchangeForQuoteField_get_ClientID(PyCThostFtdcQryExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcQryExchangeForQuoteField_get_reserve1(PyCThostFtdcQryExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryExchangeForQuoteField_get_ExchangeID(PyCThostFtdcQryExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryExchangeForQuoteField_get_TraderID(PyCThostFtdcQryExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcQryExchangeForQuoteField_get_ExchangeInstID(PyCThostFtdcQryExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static int PyCThostFtdcQryExchangeForQuoteField_set_ParticipantID(PyCThostFtdcQryExchangeForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
		PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
	return 0;
}

static int PyCThostFtdcQryExchangeForQuoteField_set_ClientID(PyCThostFtdcQryExchangeForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeForQuoteField_set_reserve1(PyCThostFtdcQryExchangeForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeForQuoteField_set_ExchangeID(PyCThostFtdcQryExchangeForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeForQuoteField_set_TraderID(PyCThostFtdcQryExchangeForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
		PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
	return 0;
}

static int PyCThostFtdcQryExchangeForQuoteField_set_ExchangeInstID(PyCThostFtdcQryExchangeForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryExchangeForQuoteField_getset[] = {
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeForQuoteField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeForQuoteField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeForQuoteField_get_ClientID, (setter)PyCThostFtdcQryExchangeForQuoteField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryExchangeForQuoteField_get_reserve1, (setter)PyCThostFtdcQryExchangeForQuoteField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeForQuoteField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeForQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeForQuoteField_get_TraderID, (setter)PyCThostFtdcQryExchangeForQuoteField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryExchangeForQuoteField_get_ExchangeInstID, (setter)PyCThostFtdcQryExchangeForQuoteField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeForQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeForQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeForQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeForQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeForQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeForQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeForQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeForQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeForQuoteField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeForQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeForQuoteField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeForQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeForQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeForQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeForQuoteField", (PyObject *)&PyCThostFtdcQryExchangeForQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeForQuoteField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeForQuoteFieldType);
		return -1;
    }

    return 0;
}
