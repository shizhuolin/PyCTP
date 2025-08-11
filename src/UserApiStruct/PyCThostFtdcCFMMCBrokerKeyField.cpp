
#include "PyCThostFtdcCFMMCBrokerKeyField.h"



static PyObject *PyCThostFtdcCFMMCBrokerKeyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCFMMCBrokerKeyField *self = (PyCThostFtdcCFMMCBrokerKeyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcCFMMCBrokerKeyField_init(PyCThostFtdcCFMMCBrokerKeyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "ParticipantID", "CreateDate", "CreateTime", "KeyID", "CurrentKey", "KeyKind",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pCFMMCBrokerKeyField_BrokerID = NULL;
	Py_ssize_t pCFMMCBrokerKeyField_BrokerID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pCFMMCBrokerKeyField_ParticipantID = NULL;
	Py_ssize_t pCFMMCBrokerKeyField_ParticipantID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pCFMMCBrokerKeyField_CreateDate = NULL;
	Py_ssize_t pCFMMCBrokerKeyField_CreateDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pCFMMCBrokerKeyField_CreateTime = NULL;
	Py_ssize_t pCFMMCBrokerKeyField_CreateTime_len = 0;

	//TThostFtdcSequenceNoType int
	int pCFMMCBrokerKeyField_KeyID = 0;

	//TThostFtdcCFMMCKeyType char[21]
	const char *pCFMMCBrokerKeyField_CurrentKey = NULL;
	Py_ssize_t pCFMMCBrokerKeyField_CurrentKey_len = 0;

	//TThostFtdcCFMMCKeyKindType char
	char pCFMMCBrokerKeyField_KeyKind = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#is#c", (char **)kwlist
#endif

		, &pCFMMCBrokerKeyField_BrokerID, &pCFMMCBrokerKeyField_BrokerID_len
		, &pCFMMCBrokerKeyField_ParticipantID, &pCFMMCBrokerKeyField_ParticipantID_len
		, &pCFMMCBrokerKeyField_CreateDate, &pCFMMCBrokerKeyField_CreateDate_len
		, &pCFMMCBrokerKeyField_CreateTime, &pCFMMCBrokerKeyField_CreateTime_len
		, &pCFMMCBrokerKeyField_KeyID
		, &pCFMMCBrokerKeyField_CurrentKey, &pCFMMCBrokerKeyField_CurrentKey_len
		, &pCFMMCBrokerKeyField_KeyKind


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pCFMMCBrokerKeyField_BrokerID != NULL) {
		if(pCFMMCBrokerKeyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pCFMMCBrokerKeyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pCFMMCBrokerKeyField_BrokerID, sizeof(self->data.BrokerID) );
		pCFMMCBrokerKeyField_BrokerID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pCFMMCBrokerKeyField_ParticipantID != NULL) {
		if(pCFMMCBrokerKeyField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pCFMMCBrokerKeyField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pCFMMCBrokerKeyField_ParticipantID, sizeof(self->data.ParticipantID) );
		pCFMMCBrokerKeyField_ParticipantID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pCFMMCBrokerKeyField_CreateDate != NULL) {
		if(pCFMMCBrokerKeyField_CreateDate_len > (Py_ssize_t)sizeof(self->data.CreateDate)) {
			PyErr_Format(PyExc_ValueError, "CreateDate too long: length=%zd (max allowed is %zd)", pCFMMCBrokerKeyField_CreateDate_len, (Py_ssize_t)sizeof(self->data.CreateDate));
			return -1;
		}
		strncpy(self->data.CreateDate, pCFMMCBrokerKeyField_CreateDate, sizeof(self->data.CreateDate) );
		pCFMMCBrokerKeyField_CreateDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pCFMMCBrokerKeyField_CreateTime != NULL) {
		if(pCFMMCBrokerKeyField_CreateTime_len > (Py_ssize_t)sizeof(self->data.CreateTime)) {
			PyErr_Format(PyExc_ValueError, "CreateTime too long: length=%zd (max allowed is %zd)", pCFMMCBrokerKeyField_CreateTime_len, (Py_ssize_t)sizeof(self->data.CreateTime));
			return -1;
		}
		strncpy(self->data.CreateTime, pCFMMCBrokerKeyField_CreateTime, sizeof(self->data.CreateTime) );
		pCFMMCBrokerKeyField_CreateTime = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.KeyID = pCFMMCBrokerKeyField_KeyID;

	//TThostFtdcCFMMCKeyType char[21]
	if(pCFMMCBrokerKeyField_CurrentKey != NULL) {
		if(pCFMMCBrokerKeyField_CurrentKey_len > (Py_ssize_t)sizeof(self->data.CurrentKey)) {
			PyErr_Format(PyExc_ValueError, "CurrentKey too long: length=%zd (max allowed is %zd)", pCFMMCBrokerKeyField_CurrentKey_len, (Py_ssize_t)sizeof(self->data.CurrentKey));
			return -1;
		}
		strncpy(self->data.CurrentKey, pCFMMCBrokerKeyField_CurrentKey, sizeof(self->data.CurrentKey) );
		pCFMMCBrokerKeyField_CurrentKey = NULL;
	}

	//TThostFtdcCFMMCKeyKindType char
	self->data.KeyKind = pCFMMCBrokerKeyField_KeyKind;



    return 0;
}

static void PyCThostFtdcCFMMCBrokerKeyField_dealloc(PyCThostFtdcCFMMCBrokerKeyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCFMMCBrokerKeyField_repr(PyCThostFtdcCFMMCBrokerKeyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:s,s:c}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "ParticipantID", self->data.ParticipantID 
		, "CreateDate", self->data.CreateDate 
		, "CreateTime", self->data.CreateTime 
		, "KeyID", self->data.KeyID
		, "CurrentKey", self->data.CurrentKey 
		, "KeyKind", self->data.KeyKind


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCFMMCBrokerKeyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcCFMMCBrokerKeyField_get_BrokerID(PyCThostFtdcCFMMCBrokerKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcCFMMCBrokerKeyField_get_ParticipantID(PyCThostFtdcCFMMCBrokerKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcCFMMCBrokerKeyField_get_CreateDate(PyCThostFtdcCFMMCBrokerKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.CreateDate);
}

static PyObject *PyCThostFtdcCFMMCBrokerKeyField_get_CreateTime(PyCThostFtdcCFMMCBrokerKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.CreateTime);
}

static PyObject *PyCThostFtdcCFMMCBrokerKeyField_get_KeyID(PyCThostFtdcCFMMCBrokerKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.KeyID);
#else 
	return PyInt_FromLong(self->data.KeyID);
#endif 
}

static PyObject *PyCThostFtdcCFMMCBrokerKeyField_get_CurrentKey(PyCThostFtdcCFMMCBrokerKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrentKey);
}

static PyObject *PyCThostFtdcCFMMCBrokerKeyField_get_KeyKind(PyCThostFtdcCFMMCBrokerKeyField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.KeyKind), 1);
}

static int PyCThostFtdcCFMMCBrokerKeyField_set_BrokerID(PyCThostFtdcCFMMCBrokerKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCFMMCBrokerKeyField_set_ParticipantID(PyCThostFtdcCFMMCBrokerKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCFMMCBrokerKeyField_set_CreateDate(PyCThostFtdcCFMMCBrokerKeyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CreateDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CreateDate)) {
		PyErr_SetString(PyExc_ValueError, "CreateDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.CreateDate, buf, sizeof(self->data.CreateDate));
	return 0;
}

static int PyCThostFtdcCFMMCBrokerKeyField_set_CreateTime(PyCThostFtdcCFMMCBrokerKeyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CreateTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CreateTime)) {
		PyErr_SetString(PyExc_ValueError, "CreateTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.CreateTime, buf, sizeof(self->data.CreateTime));
	return 0;
}

static int PyCThostFtdcCFMMCBrokerKeyField_set_KeyID(PyCThostFtdcCFMMCBrokerKeyField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "KeyID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "KeyID Expected int"); 
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
    self->data.KeyID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCFMMCBrokerKeyField_set_CurrentKey(PyCThostFtdcCFMMCBrokerKeyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrentKey Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrentKey)) {
		PyErr_SetString(PyExc_ValueError, "CurrentKey must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.CurrentKey, buf, sizeof(self->data.CurrentKey));
	return 0;
}

static int PyCThostFtdcCFMMCBrokerKeyField_set_KeyKind(PyCThostFtdcCFMMCBrokerKeyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "KeyKind Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.KeyKind)) {
		PyErr_SetString(PyExc_ValueError, "KeyKind must be less than 1 bytes");
		return -1;
	}
	self->data.KeyKind = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcCFMMCBrokerKeyField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcCFMMCBrokerKeyField_get_BrokerID, (setter)PyCThostFtdcCFMMCBrokerKeyField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcCFMMCBrokerKeyField_get_ParticipantID, (setter)PyCThostFtdcCFMMCBrokerKeyField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"CreateDate", (getter)PyCThostFtdcCFMMCBrokerKeyField_get_CreateDate, (setter)PyCThostFtdcCFMMCBrokerKeyField_set_CreateDate, (char *)"CreateDate", NULL},
	 {(char *)"CreateTime", (getter)PyCThostFtdcCFMMCBrokerKeyField_get_CreateTime, (setter)PyCThostFtdcCFMMCBrokerKeyField_set_CreateTime, (char *)"CreateTime", NULL},
	 {(char *)"KeyID", (getter)PyCThostFtdcCFMMCBrokerKeyField_get_KeyID, (setter)PyCThostFtdcCFMMCBrokerKeyField_set_KeyID, (char *)"KeyID", NULL},
	 {(char *)"CurrentKey", (getter)PyCThostFtdcCFMMCBrokerKeyField_get_CurrentKey, (setter)PyCThostFtdcCFMMCBrokerKeyField_set_CurrentKey, (char *)"CurrentKey", NULL},
	 {(char *)"KeyKind", (getter)PyCThostFtdcCFMMCBrokerKeyField_get_KeyKind, (setter)PyCThostFtdcCFMMCBrokerKeyField_set_KeyKind, (char *)"KeyKind", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCFMMCBrokerKeyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCFMMCBrokerKeyField",	/* tp_name */
	sizeof(PyCThostFtdcCFMMCBrokerKeyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCFMMCBrokerKeyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCFMMCBrokerKeyField_repr,   /* tp_repr */
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
	"CThostFtdcCFMMCBrokerKeyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCFMMCBrokerKeyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCFMMCBrokerKeyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCFMMCBrokerKeyField_new,       /* tp_new */
};

int PyCThostFtdcCFMMCBrokerKeyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCFMMCBrokerKeyField  */
	if (PyType_Ready(&PyCThostFtdcCFMMCBrokerKeyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCFMMCBrokerKeyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCFMMCBrokerKeyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCFMMCBrokerKeyField", (PyObject *)&PyCThostFtdcCFMMCBrokerKeyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCFMMCBrokerKeyField to module");
        Py_DECREF(&PyCThostFtdcCFMMCBrokerKeyFieldType);
		return -1;
    }

    return 0;
}
