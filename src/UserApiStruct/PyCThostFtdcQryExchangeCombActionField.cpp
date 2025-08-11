
#include "PyCThostFtdcQryExchangeCombActionField.h"



static PyObject *PyCThostFtdcQryExchangeCombActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeCombActionField *self = (PyCThostFtdcQryExchangeCombActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeCombActionField_init(PyCThostFtdcQryExchangeCombActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "reserve1", "ExchangeID", "TraderID", "ExchangeInstID",  NULL};

	//TThostFtdcParticipantIDType char[11]
	const char *pQryExchangeCombActionField_ParticipantID = NULL;
	Py_ssize_t pQryExchangeCombActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pQryExchangeCombActionField_ClientID = NULL;
	Py_ssize_t pQryExchangeCombActionField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pQryExchangeCombActionField_reserve1 = NULL;
	Py_ssize_t pQryExchangeCombActionField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryExchangeCombActionField_ExchangeID = NULL;
	Py_ssize_t pQryExchangeCombActionField_ExchangeID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQryExchangeCombActionField_TraderID = NULL;
	Py_ssize_t pQryExchangeCombActionField_TraderID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pQryExchangeCombActionField_ExchangeInstID = NULL;
	Py_ssize_t pQryExchangeCombActionField_ExchangeInstID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryExchangeCombActionField_ParticipantID, &pQryExchangeCombActionField_ParticipantID_len
		, &pQryExchangeCombActionField_ClientID, &pQryExchangeCombActionField_ClientID_len
		, &pQryExchangeCombActionField_reserve1, &pQryExchangeCombActionField_reserve1_len
		, &pQryExchangeCombActionField_ExchangeID, &pQryExchangeCombActionField_ExchangeID_len
		, &pQryExchangeCombActionField_TraderID, &pQryExchangeCombActionField_TraderID_len
		, &pQryExchangeCombActionField_ExchangeInstID, &pQryExchangeCombActionField_ExchangeInstID_len


    )) {
        return -1;
    }

	//TThostFtdcParticipantIDType char[11]
	if(pQryExchangeCombActionField_ParticipantID != NULL) {
		if(pQryExchangeCombActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQryExchangeCombActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQryExchangeCombActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQryExchangeCombActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pQryExchangeCombActionField_ClientID != NULL) {
		if(pQryExchangeCombActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pQryExchangeCombActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pQryExchangeCombActionField_ClientID, sizeof(self->data.ClientID) );
		pQryExchangeCombActionField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pQryExchangeCombActionField_reserve1 != NULL) {
		if(pQryExchangeCombActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryExchangeCombActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryExchangeCombActionField_reserve1, sizeof(self->data.reserve1) );
		pQryExchangeCombActionField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryExchangeCombActionField_ExchangeID != NULL) {
		if(pQryExchangeCombActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryExchangeCombActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryExchangeCombActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryExchangeCombActionField_ExchangeID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQryExchangeCombActionField_TraderID != NULL) {
		if(pQryExchangeCombActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQryExchangeCombActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQryExchangeCombActionField_TraderID, sizeof(self->data.TraderID) );
		pQryExchangeCombActionField_TraderID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pQryExchangeCombActionField_ExchangeInstID != NULL) {
		if(pQryExchangeCombActionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pQryExchangeCombActionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pQryExchangeCombActionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pQryExchangeCombActionField_ExchangeInstID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryExchangeCombActionField_dealloc(PyCThostFtdcQryExchangeCombActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeCombActionField_repr(PyCThostFtdcQryExchangeCombActionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeCombActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryExchangeCombActionField_get_ParticipantID(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQryExchangeCombActionField_get_ClientID(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcQryExchangeCombActionField_get_reserve1(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryExchangeCombActionField_get_ExchangeID(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryExchangeCombActionField_get_TraderID(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcQryExchangeCombActionField_get_ExchangeInstID(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static int PyCThostFtdcQryExchangeCombActionField_set_ParticipantID(PyCThostFtdcQryExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeCombActionField_set_ClientID(PyCThostFtdcQryExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeCombActionField_set_reserve1(PyCThostFtdcQryExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeCombActionField_set_ExchangeID(PyCThostFtdcQryExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeCombActionField_set_TraderID(PyCThostFtdcQryExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeCombActionField_set_ExchangeInstID(PyCThostFtdcQryExchangeCombActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryExchangeCombActionField_getset[] = {
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeCombActionField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeCombActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeCombActionField_get_ClientID, (setter)PyCThostFtdcQryExchangeCombActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryExchangeCombActionField_get_reserve1, (setter)PyCThostFtdcQryExchangeCombActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeCombActionField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeCombActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeCombActionField_get_TraderID, (setter)PyCThostFtdcQryExchangeCombActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryExchangeCombActionField_get_ExchangeInstID, (setter)PyCThostFtdcQryExchangeCombActionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeCombActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeCombActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeCombActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeCombActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeCombActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeCombActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeCombActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeCombActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeCombActionField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeCombActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeCombActionField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeCombActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeCombActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeCombActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeCombActionField", (PyObject *)&PyCThostFtdcQryExchangeCombActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeCombActionField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeCombActionFieldType);
		return -1;
    }

    return 0;
}
