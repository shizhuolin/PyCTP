
#include "PyCThostFtdcQryTraderField.h"



static PyObject *PyCThostFtdcQryTraderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTraderField *self = (PyCThostFtdcQryTraderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryTraderField_init(PyCThostFtdcQryTraderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ParticipantID", "TraderID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQryTraderField_ExchangeID = NULL;
	Py_ssize_t pQryTraderField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pQryTraderField_ParticipantID = NULL;
	Py_ssize_t pQryTraderField_ParticipantID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQryTraderField_TraderID = NULL;
	Py_ssize_t pQryTraderField_TraderID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryTraderField_ExchangeID, &pQryTraderField_ExchangeID_len
		, &pQryTraderField_ParticipantID, &pQryTraderField_ParticipantID_len
		, &pQryTraderField_TraderID, &pQryTraderField_TraderID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQryTraderField_ExchangeID != NULL) {
		if(pQryTraderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryTraderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryTraderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryTraderField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pQryTraderField_ParticipantID != NULL) {
		if(pQryTraderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQryTraderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQryTraderField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQryTraderField_ParticipantID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQryTraderField_TraderID != NULL) {
		if(pQryTraderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQryTraderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQryTraderField_TraderID, sizeof(self->data.TraderID) );
		pQryTraderField_TraderID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryTraderField_dealloc(PyCThostFtdcQryTraderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTraderField_repr(PyCThostFtdcQryTraderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "ParticipantID", self->data.ParticipantID 
		, "TraderID", self->data.TraderID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTraderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryTraderField_get_ExchangeID(PyCThostFtdcQryTraderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryTraderField_get_ParticipantID(PyCThostFtdcQryTraderField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQryTraderField_get_TraderID(PyCThostFtdcQryTraderField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static int PyCThostFtdcQryTraderField_set_ExchangeID(PyCThostFtdcQryTraderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTraderField_set_ParticipantID(PyCThostFtdcQryTraderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTraderField_set_TraderID(PyCThostFtdcQryTraderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryTraderField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryTraderField_get_ExchangeID, (setter)PyCThostFtdcQryTraderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQryTraderField_get_ParticipantID, (setter)PyCThostFtdcQryTraderField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQryTraderField_get_TraderID, (setter)PyCThostFtdcQryTraderField_set_TraderID, (char *)"TraderID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTraderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTraderField",	/* tp_name */
	sizeof(PyCThostFtdcQryTraderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTraderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTraderField_repr,   /* tp_repr */
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
	"CThostFtdcQryTraderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTraderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTraderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTraderField_new,       /* tp_new */
};

int PyCThostFtdcQryTraderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTraderField  */
	if (PyType_Ready(&PyCThostFtdcQryTraderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTraderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTraderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTraderField", (PyObject *)&PyCThostFtdcQryTraderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTraderField to module");
        Py_DECREF(&PyCThostFtdcQryTraderFieldType);
		return -1;
    }

    return 0;
}
