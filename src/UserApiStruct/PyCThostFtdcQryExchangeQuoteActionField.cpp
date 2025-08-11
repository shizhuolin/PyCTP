
#include "PyCThostFtdcQryExchangeQuoteActionField.h"



static PyObject *PyCThostFtdcQryExchangeQuoteActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeQuoteActionField *self = (PyCThostFtdcQryExchangeQuoteActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeQuoteActionField_init(PyCThostFtdcQryExchangeQuoteActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "ExchangeID", "TraderID",  NULL};

	//TThostFtdcParticipantIDType char[11]
	const char *pQryExchangeQuoteActionField_ParticipantID = NULL;
	Py_ssize_t pQryExchangeQuoteActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pQryExchangeQuoteActionField_ClientID = NULL;
	Py_ssize_t pQryExchangeQuoteActionField_ClientID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryExchangeQuoteActionField_ExchangeID = NULL;
	Py_ssize_t pQryExchangeQuoteActionField_ExchangeID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQryExchangeQuoteActionField_TraderID = NULL;
	Py_ssize_t pQryExchangeQuoteActionField_TraderID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pQryExchangeQuoteActionField_ParticipantID, &pQryExchangeQuoteActionField_ParticipantID_len
		, &pQryExchangeQuoteActionField_ClientID, &pQryExchangeQuoteActionField_ClientID_len
		, &pQryExchangeQuoteActionField_ExchangeID, &pQryExchangeQuoteActionField_ExchangeID_len
		, &pQryExchangeQuoteActionField_TraderID, &pQryExchangeQuoteActionField_TraderID_len


    )) {
        return -1;
    }

	//TThostFtdcParticipantIDType char[11]
	if(pQryExchangeQuoteActionField_ParticipantID != NULL) {
		if(pQryExchangeQuoteActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQryExchangeQuoteActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQryExchangeQuoteActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQryExchangeQuoteActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pQryExchangeQuoteActionField_ClientID != NULL) {
		if(pQryExchangeQuoteActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pQryExchangeQuoteActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pQryExchangeQuoteActionField_ClientID, sizeof(self->data.ClientID) );
		pQryExchangeQuoteActionField_ClientID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryExchangeQuoteActionField_ExchangeID != NULL) {
		if(pQryExchangeQuoteActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryExchangeQuoteActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryExchangeQuoteActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryExchangeQuoteActionField_ExchangeID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQryExchangeQuoteActionField_TraderID != NULL) {
		if(pQryExchangeQuoteActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQryExchangeQuoteActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQryExchangeQuoteActionField_TraderID, sizeof(self->data.TraderID) );
		pQryExchangeQuoteActionField_TraderID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryExchangeQuoteActionField_dealloc(PyCThostFtdcQryExchangeQuoteActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeQuoteActionField_repr(PyCThostFtdcQryExchangeQuoteActionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeQuoteActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryExchangeQuoteActionField_get_ParticipantID(PyCThostFtdcQryExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQryExchangeQuoteActionField_get_ClientID(PyCThostFtdcQryExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcQryExchangeQuoteActionField_get_ExchangeID(PyCThostFtdcQryExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryExchangeQuoteActionField_get_TraderID(PyCThostFtdcQryExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static int PyCThostFtdcQryExchangeQuoteActionField_set_ParticipantID(PyCThostFtdcQryExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeQuoteActionField_set_ClientID(PyCThostFtdcQryExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeQuoteActionField_set_ExchangeID(PyCThostFtdcQryExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeQuoteActionField_set_TraderID(PyCThostFtdcQryExchangeQuoteActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryExchangeQuoteActionField_getset[] = {
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeQuoteActionField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeQuoteActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeQuoteActionField_get_ClientID, (setter)PyCThostFtdcQryExchangeQuoteActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeQuoteActionField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeQuoteActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeQuoteActionField_get_TraderID, (setter)PyCThostFtdcQryExchangeQuoteActionField_set_TraderID, (char *)"TraderID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeQuoteActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeQuoteActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeQuoteActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeQuoteActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeQuoteActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeQuoteActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeQuoteActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeQuoteActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeQuoteActionField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeQuoteActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeQuoteActionField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeQuoteActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeQuoteActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeQuoteActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeQuoteActionField", (PyObject *)&PyCThostFtdcQryExchangeQuoteActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeQuoteActionField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeQuoteActionFieldType);
		return -1;
    }

    return 0;
}
