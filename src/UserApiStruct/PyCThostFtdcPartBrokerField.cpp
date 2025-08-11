
#include "PyCThostFtdcPartBrokerField.h"



static PyObject *PyCThostFtdcPartBrokerField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcPartBrokerField *self = (PyCThostFtdcPartBrokerField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcPartBrokerField_init(PyCThostFtdcPartBrokerField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "ExchangeID", "ParticipantID", "IsActive",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pPartBrokerField_BrokerID = NULL;
	Py_ssize_t pPartBrokerField_BrokerID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pPartBrokerField_ExchangeID = NULL;
	Py_ssize_t pPartBrokerField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pPartBrokerField_ParticipantID = NULL;
	Py_ssize_t pPartBrokerField_ParticipantID_len = 0;

	//TThostFtdcBoolType int
	int pPartBrokerField_IsActive = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#i", (char **)kwlist
#endif

		, &pPartBrokerField_BrokerID, &pPartBrokerField_BrokerID_len
		, &pPartBrokerField_ExchangeID, &pPartBrokerField_ExchangeID_len
		, &pPartBrokerField_ParticipantID, &pPartBrokerField_ParticipantID_len
		, &pPartBrokerField_IsActive


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pPartBrokerField_BrokerID != NULL) {
		if(pPartBrokerField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pPartBrokerField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pPartBrokerField_BrokerID, sizeof(self->data.BrokerID) );
		pPartBrokerField_BrokerID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pPartBrokerField_ExchangeID != NULL) {
		if(pPartBrokerField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pPartBrokerField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pPartBrokerField_ExchangeID, sizeof(self->data.ExchangeID) );
		pPartBrokerField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pPartBrokerField_ParticipantID != NULL) {
		if(pPartBrokerField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pPartBrokerField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pPartBrokerField_ParticipantID, sizeof(self->data.ParticipantID) );
		pPartBrokerField_ParticipantID = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsActive = pPartBrokerField_IsActive;



    return 0;
}

static void PyCThostFtdcPartBrokerField_dealloc(PyCThostFtdcPartBrokerField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcPartBrokerField_repr(PyCThostFtdcPartBrokerField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "ExchangeID", self->data.ExchangeID 
		, "ParticipantID", self->data.ParticipantID 
		, "IsActive", self->data.IsActive


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcPartBrokerField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcPartBrokerField_get_BrokerID(PyCThostFtdcPartBrokerField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcPartBrokerField_get_ExchangeID(PyCThostFtdcPartBrokerField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcPartBrokerField_get_ParticipantID(PyCThostFtdcPartBrokerField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcPartBrokerField_get_IsActive(PyCThostFtdcPartBrokerField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsActive);
#else 
	return PyInt_FromLong(self->data.IsActive);
#endif 
}

static int PyCThostFtdcPartBrokerField_set_BrokerID(PyCThostFtdcPartBrokerField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcPartBrokerField_set_ExchangeID(PyCThostFtdcPartBrokerField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcPartBrokerField_set_ParticipantID(PyCThostFtdcPartBrokerField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcPartBrokerField_set_IsActive(PyCThostFtdcPartBrokerField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int"); 
#endif 
        return -1;
    }
#if PY_MAJOR_VERSION >= 3 
    const long buf = PyLong_AsLong(val); 
#else 
    const long buf = PyInt_AsLong(val); 
#endif 
    if (buf == -1 && PyErr_Occurred()) { 
        return -1; 
    } 
    if (buf < INT_MIN || buf > INT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.IsActive = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcPartBrokerField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcPartBrokerField_get_BrokerID, (setter)PyCThostFtdcPartBrokerField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcPartBrokerField_get_ExchangeID, (setter)PyCThostFtdcPartBrokerField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcPartBrokerField_get_ParticipantID, (setter)PyCThostFtdcPartBrokerField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"IsActive", (getter)PyCThostFtdcPartBrokerField_get_IsActive, (setter)PyCThostFtdcPartBrokerField_set_IsActive, (char *)"IsActive", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcPartBrokerFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcPartBrokerField",	/* tp_name */
	sizeof(PyCThostFtdcPartBrokerField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcPartBrokerField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcPartBrokerField_repr,   /* tp_repr */
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
	"CThostFtdcPartBrokerField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcPartBrokerField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcPartBrokerField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcPartBrokerField_new,       /* tp_new */
};

int PyCThostFtdcPartBrokerFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcPartBrokerField  */
	if (PyType_Ready(&PyCThostFtdcPartBrokerFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcPartBrokerField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcPartBrokerFieldType);
    if( PyModule_AddObject(module, "CThostFtdcPartBrokerField", (PyObject *)&PyCThostFtdcPartBrokerFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcPartBrokerField to module");
        Py_DECREF(&PyCThostFtdcPartBrokerFieldType);
		return -1;
    }

    return 0;
}
