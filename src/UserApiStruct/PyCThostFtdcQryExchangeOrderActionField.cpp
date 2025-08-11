
#include "PyCThostFtdcQryExchangeOrderActionField.h"



static PyObject *PyCThostFtdcQryExchangeOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeOrderActionField *self = (PyCThostFtdcQryExchangeOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeOrderActionField_init(PyCThostFtdcQryExchangeOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "ExchangeID", "TraderID",  NULL};

	//TThostFtdcParticipantIDType char[11]
	const char *pQryExchangeOrderActionField_ParticipantID = NULL;
	Py_ssize_t pQryExchangeOrderActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pQryExchangeOrderActionField_ClientID = NULL;
	Py_ssize_t pQryExchangeOrderActionField_ClientID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryExchangeOrderActionField_ExchangeID = NULL;
	Py_ssize_t pQryExchangeOrderActionField_ExchangeID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQryExchangeOrderActionField_TraderID = NULL;
	Py_ssize_t pQryExchangeOrderActionField_TraderID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pQryExchangeOrderActionField_ParticipantID, &pQryExchangeOrderActionField_ParticipantID_len
		, &pQryExchangeOrderActionField_ClientID, &pQryExchangeOrderActionField_ClientID_len
		, &pQryExchangeOrderActionField_ExchangeID, &pQryExchangeOrderActionField_ExchangeID_len
		, &pQryExchangeOrderActionField_TraderID, &pQryExchangeOrderActionField_TraderID_len


    )) {
        return -1;
    }

	//TThostFtdcParticipantIDType char[11]
	if(pQryExchangeOrderActionField_ParticipantID != NULL) {
		if(pQryExchangeOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQryExchangeOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQryExchangeOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQryExchangeOrderActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pQryExchangeOrderActionField_ClientID != NULL) {
		if(pQryExchangeOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pQryExchangeOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pQryExchangeOrderActionField_ClientID, sizeof(self->data.ClientID) );
		pQryExchangeOrderActionField_ClientID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryExchangeOrderActionField_ExchangeID != NULL) {
		if(pQryExchangeOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryExchangeOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryExchangeOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryExchangeOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQryExchangeOrderActionField_TraderID != NULL) {
		if(pQryExchangeOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQryExchangeOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQryExchangeOrderActionField_TraderID, sizeof(self->data.TraderID) );
		pQryExchangeOrderActionField_TraderID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryExchangeOrderActionField_dealloc(PyCThostFtdcQryExchangeOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeOrderActionField_repr(PyCThostFtdcQryExchangeOrderActionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryExchangeOrderActionField_get_ParticipantID(PyCThostFtdcQryExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQryExchangeOrderActionField_get_ClientID(PyCThostFtdcQryExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcQryExchangeOrderActionField_get_ExchangeID(PyCThostFtdcQryExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryExchangeOrderActionField_get_TraderID(PyCThostFtdcQryExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static int PyCThostFtdcQryExchangeOrderActionField_set_ParticipantID(PyCThostFtdcQryExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeOrderActionField_set_ClientID(PyCThostFtdcQryExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeOrderActionField_set_ExchangeID(PyCThostFtdcQryExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeOrderActionField_set_TraderID(PyCThostFtdcQryExchangeOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryExchangeOrderActionField_getset[] = {
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeOrderActionField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeOrderActionField_get_ClientID, (setter)PyCThostFtdcQryExchangeOrderActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeOrderActionField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeOrderActionField_get_TraderID, (setter)PyCThostFtdcQryExchangeOrderActionField_set_TraderID, (char *)"TraderID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeOrderActionField", (PyObject *)&PyCThostFtdcQryExchangeOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeOrderActionField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeOrderActionFieldType);
		return -1;
    }

    return 0;
}
