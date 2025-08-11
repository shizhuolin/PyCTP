
#include "PyCThostFtdcQryExchangeQuoteField.h"



static PyObject *PyCThostFtdcQryExchangeQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeQuoteField *self = (PyCThostFtdcQryExchangeQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeQuoteField_init(PyCThostFtdcQryExchangeQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "reserve1", "ExchangeID", "TraderID", "ExchangeInstID",  NULL};

	//TThostFtdcParticipantIDType char[11]
	const char *pQryExchangeQuoteField_ParticipantID = NULL;
	Py_ssize_t pQryExchangeQuoteField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pQryExchangeQuoteField_ClientID = NULL;
	Py_ssize_t pQryExchangeQuoteField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pQryExchangeQuoteField_reserve1 = NULL;
	Py_ssize_t pQryExchangeQuoteField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryExchangeQuoteField_ExchangeID = NULL;
	Py_ssize_t pQryExchangeQuoteField_ExchangeID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQryExchangeQuoteField_TraderID = NULL;
	Py_ssize_t pQryExchangeQuoteField_TraderID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pQryExchangeQuoteField_ExchangeInstID = NULL;
	Py_ssize_t pQryExchangeQuoteField_ExchangeInstID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryExchangeQuoteField_ParticipantID, &pQryExchangeQuoteField_ParticipantID_len
		, &pQryExchangeQuoteField_ClientID, &pQryExchangeQuoteField_ClientID_len
		, &pQryExchangeQuoteField_reserve1, &pQryExchangeQuoteField_reserve1_len
		, &pQryExchangeQuoteField_ExchangeID, &pQryExchangeQuoteField_ExchangeID_len
		, &pQryExchangeQuoteField_TraderID, &pQryExchangeQuoteField_TraderID_len
		, &pQryExchangeQuoteField_ExchangeInstID, &pQryExchangeQuoteField_ExchangeInstID_len


    )) {
        return -1;
    }

	//TThostFtdcParticipantIDType char[11]
	if(pQryExchangeQuoteField_ParticipantID != NULL) {
		if(pQryExchangeQuoteField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQryExchangeQuoteField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQryExchangeQuoteField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQryExchangeQuoteField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pQryExchangeQuoteField_ClientID != NULL) {
		if(pQryExchangeQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pQryExchangeQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pQryExchangeQuoteField_ClientID, sizeof(self->data.ClientID) );
		pQryExchangeQuoteField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pQryExchangeQuoteField_reserve1 != NULL) {
		if(pQryExchangeQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryExchangeQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryExchangeQuoteField_reserve1, sizeof(self->data.reserve1) );
		pQryExchangeQuoteField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryExchangeQuoteField_ExchangeID != NULL) {
		if(pQryExchangeQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryExchangeQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryExchangeQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryExchangeQuoteField_ExchangeID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQryExchangeQuoteField_TraderID != NULL) {
		if(pQryExchangeQuoteField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQryExchangeQuoteField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQryExchangeQuoteField_TraderID, sizeof(self->data.TraderID) );
		pQryExchangeQuoteField_TraderID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pQryExchangeQuoteField_ExchangeInstID != NULL) {
		if(pQryExchangeQuoteField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pQryExchangeQuoteField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pQryExchangeQuoteField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pQryExchangeQuoteField_ExchangeInstID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryExchangeQuoteField_dealloc(PyCThostFtdcQryExchangeQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeQuoteField_repr(PyCThostFtdcQryExchangeQuoteField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryExchangeQuoteField_get_ParticipantID(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQryExchangeQuoteField_get_ClientID(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcQryExchangeQuoteField_get_reserve1(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryExchangeQuoteField_get_ExchangeID(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryExchangeQuoteField_get_TraderID(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcQryExchangeQuoteField_get_ExchangeInstID(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static int PyCThostFtdcQryExchangeQuoteField_set_ParticipantID(PyCThostFtdcQryExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeQuoteField_set_ClientID(PyCThostFtdcQryExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeQuoteField_set_reserve1(PyCThostFtdcQryExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeQuoteField_set_ExchangeID(PyCThostFtdcQryExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeQuoteField_set_TraderID(PyCThostFtdcQryExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeQuoteField_set_ExchangeInstID(PyCThostFtdcQryExchangeQuoteField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryExchangeQuoteField_getset[] = {
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeQuoteField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeQuoteField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeQuoteField_get_ClientID, (setter)PyCThostFtdcQryExchangeQuoteField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryExchangeQuoteField_get_reserve1, (setter)PyCThostFtdcQryExchangeQuoteField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeQuoteField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeQuoteField_get_TraderID, (setter)PyCThostFtdcQryExchangeQuoteField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryExchangeQuoteField_get_ExchangeInstID, (setter)PyCThostFtdcQryExchangeQuoteField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeQuoteField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeQuoteField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeQuoteField", (PyObject *)&PyCThostFtdcQryExchangeQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeQuoteField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeQuoteFieldType);
		return -1;
    }

    return 0;
}
