
#include "PyCThostFtdcQryExchangeExecOrderField.h"



static PyObject *PyCThostFtdcQryExchangeExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeExecOrderField *self = (PyCThostFtdcQryExchangeExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeExecOrderField_init(PyCThostFtdcQryExchangeExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "reserve1", "ExchangeID", "TraderID", "ExchangeInstID",  NULL};

	//TThostFtdcParticipantIDType char[11]
	const char *pQryExchangeExecOrderField_ParticipantID = NULL;
	Py_ssize_t pQryExchangeExecOrderField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pQryExchangeExecOrderField_ClientID = NULL;
	Py_ssize_t pQryExchangeExecOrderField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pQryExchangeExecOrderField_reserve1 = NULL;
	Py_ssize_t pQryExchangeExecOrderField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryExchangeExecOrderField_ExchangeID = NULL;
	Py_ssize_t pQryExchangeExecOrderField_ExchangeID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQryExchangeExecOrderField_TraderID = NULL;
	Py_ssize_t pQryExchangeExecOrderField_TraderID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pQryExchangeExecOrderField_ExchangeInstID = NULL;
	Py_ssize_t pQryExchangeExecOrderField_ExchangeInstID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryExchangeExecOrderField_ParticipantID, &pQryExchangeExecOrderField_ParticipantID_len
		, &pQryExchangeExecOrderField_ClientID, &pQryExchangeExecOrderField_ClientID_len
		, &pQryExchangeExecOrderField_reserve1, &pQryExchangeExecOrderField_reserve1_len
		, &pQryExchangeExecOrderField_ExchangeID, &pQryExchangeExecOrderField_ExchangeID_len
		, &pQryExchangeExecOrderField_TraderID, &pQryExchangeExecOrderField_TraderID_len
		, &pQryExchangeExecOrderField_ExchangeInstID, &pQryExchangeExecOrderField_ExchangeInstID_len


    )) {
        return -1;
    }

	//TThostFtdcParticipantIDType char[11]
	if(pQryExchangeExecOrderField_ParticipantID != NULL) {
		if(pQryExchangeExecOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQryExchangeExecOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQryExchangeExecOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQryExchangeExecOrderField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pQryExchangeExecOrderField_ClientID != NULL) {
		if(pQryExchangeExecOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pQryExchangeExecOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pQryExchangeExecOrderField_ClientID, sizeof(self->data.ClientID) );
		pQryExchangeExecOrderField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pQryExchangeExecOrderField_reserve1 != NULL) {
		if(pQryExchangeExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryExchangeExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryExchangeExecOrderField_reserve1, sizeof(self->data.reserve1) );
		pQryExchangeExecOrderField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryExchangeExecOrderField_ExchangeID != NULL) {
		if(pQryExchangeExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryExchangeExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryExchangeExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryExchangeExecOrderField_ExchangeID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQryExchangeExecOrderField_TraderID != NULL) {
		if(pQryExchangeExecOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQryExchangeExecOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQryExchangeExecOrderField_TraderID, sizeof(self->data.TraderID) );
		pQryExchangeExecOrderField_TraderID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pQryExchangeExecOrderField_ExchangeInstID != NULL) {
		if(pQryExchangeExecOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pQryExchangeExecOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pQryExchangeExecOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pQryExchangeExecOrderField_ExchangeInstID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryExchangeExecOrderField_dealloc(PyCThostFtdcQryExchangeExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderField_repr(PyCThostFtdcQryExchangeExecOrderField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_ParticipantID(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_ClientID(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_reserve1(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_ExchangeID(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_TraderID(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_ExchangeInstID(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static int PyCThostFtdcQryExchangeExecOrderField_set_ParticipantID(PyCThostFtdcQryExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeExecOrderField_set_ClientID(PyCThostFtdcQryExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeExecOrderField_set_reserve1(PyCThostFtdcQryExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeExecOrderField_set_ExchangeID(PyCThostFtdcQryExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeExecOrderField_set_TraderID(PyCThostFtdcQryExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeExecOrderField_set_ExchangeInstID(PyCThostFtdcQryExchangeExecOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryExchangeExecOrderField_getset[] = {
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeExecOrderField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeExecOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeExecOrderField_get_ClientID, (setter)PyCThostFtdcQryExchangeExecOrderField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryExchangeExecOrderField_get_reserve1, (setter)PyCThostFtdcQryExchangeExecOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeExecOrderField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeExecOrderField_get_TraderID, (setter)PyCThostFtdcQryExchangeExecOrderField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryExchangeExecOrderField_get_ExchangeInstID, (setter)PyCThostFtdcQryExchangeExecOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeExecOrderField", (PyObject *)&PyCThostFtdcQryExchangeExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeExecOrderField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeExecOrderFieldType);
		return -1;
    }

    return 0;
}
