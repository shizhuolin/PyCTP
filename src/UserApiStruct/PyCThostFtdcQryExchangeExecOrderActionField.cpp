
#include "PyCThostFtdcQryExchangeExecOrderActionField.h"



static PyObject *PyCThostFtdcQryExchangeExecOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeExecOrderActionField *self = (PyCThostFtdcQryExchangeExecOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeExecOrderActionField_init(PyCThostFtdcQryExchangeExecOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "ExchangeID", "TraderID",  NULL};

	//TThostFtdcParticipantIDType char[11]
	const char *pQryExchangeExecOrderActionField_ParticipantID = NULL;
	Py_ssize_t pQryExchangeExecOrderActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pQryExchangeExecOrderActionField_ClientID = NULL;
	Py_ssize_t pQryExchangeExecOrderActionField_ClientID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryExchangeExecOrderActionField_ExchangeID = NULL;
	Py_ssize_t pQryExchangeExecOrderActionField_ExchangeID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQryExchangeExecOrderActionField_TraderID = NULL;
	Py_ssize_t pQryExchangeExecOrderActionField_TraderID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pQryExchangeExecOrderActionField_ParticipantID, &pQryExchangeExecOrderActionField_ParticipantID_len
		, &pQryExchangeExecOrderActionField_ClientID, &pQryExchangeExecOrderActionField_ClientID_len
		, &pQryExchangeExecOrderActionField_ExchangeID, &pQryExchangeExecOrderActionField_ExchangeID_len
		, &pQryExchangeExecOrderActionField_TraderID, &pQryExchangeExecOrderActionField_TraderID_len


    )) {
        return -1;
    }

	//TThostFtdcParticipantIDType char[11]
	if(pQryExchangeExecOrderActionField_ParticipantID != NULL) {
		if(pQryExchangeExecOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQryExchangeExecOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQryExchangeExecOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQryExchangeExecOrderActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pQryExchangeExecOrderActionField_ClientID != NULL) {
		if(pQryExchangeExecOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pQryExchangeExecOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pQryExchangeExecOrderActionField_ClientID, sizeof(self->data.ClientID) );
		pQryExchangeExecOrderActionField_ClientID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryExchangeExecOrderActionField_ExchangeID != NULL) {
		if(pQryExchangeExecOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryExchangeExecOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryExchangeExecOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryExchangeExecOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQryExchangeExecOrderActionField_TraderID != NULL) {
		if(pQryExchangeExecOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQryExchangeExecOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQryExchangeExecOrderActionField_TraderID, sizeof(self->data.TraderID) );
		pQryExchangeExecOrderActionField_TraderID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryExchangeExecOrderActionField_dealloc(PyCThostFtdcQryExchangeExecOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderActionField_repr(PyCThostFtdcQryExchangeExecOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "ExchangeID", self->data.ExchangeID 
		, "TraderID", self->data.TraderID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeExecOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderActionField_get_ParticipantID(PyCThostFtdcQryExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderActionField_get_ClientID(PyCThostFtdcQryExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderActionField_get_ExchangeID(PyCThostFtdcQryExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderActionField_get_TraderID(PyCThostFtdcQryExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static int PyCThostFtdcQryExchangeExecOrderActionField_set_ParticipantID(PyCThostFtdcQryExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeExecOrderActionField_set_ClientID(PyCThostFtdcQryExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeExecOrderActionField_set_ExchangeID(PyCThostFtdcQryExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeExecOrderActionField_set_TraderID(PyCThostFtdcQryExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryExchangeExecOrderActionField_getset[] = {
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeExecOrderActionField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeExecOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeExecOrderActionField_get_ClientID, (setter)PyCThostFtdcQryExchangeExecOrderActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeExecOrderActionField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeExecOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeExecOrderActionField_get_TraderID, (setter)PyCThostFtdcQryExchangeExecOrderActionField_set_TraderID, (char *)"TraderID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeExecOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeExecOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeExecOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeExecOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeExecOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeExecOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeExecOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeExecOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeExecOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeExecOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeExecOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeExecOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeExecOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeExecOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeExecOrderActionField", (PyObject *)&PyCThostFtdcQryExchangeExecOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeExecOrderActionField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeExecOrderActionFieldType);
		return -1;
    }

    return 0;
}
