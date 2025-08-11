
#include "PyCThostFtdcCFMMCTradingAccountTokenField.h"



static PyObject *PyCThostFtdcCFMMCTradingAccountTokenField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCFMMCTradingAccountTokenField *self = (PyCThostFtdcCFMMCTradingAccountTokenField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcCFMMCTradingAccountTokenField_init(PyCThostFtdcCFMMCTradingAccountTokenField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "ParticipantID", "AccountID", "KeyID", "Token",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pCFMMCTradingAccountTokenField_BrokerID = NULL;
	Py_ssize_t pCFMMCTradingAccountTokenField_BrokerID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pCFMMCTradingAccountTokenField_ParticipantID = NULL;
	Py_ssize_t pCFMMCTradingAccountTokenField_ParticipantID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pCFMMCTradingAccountTokenField_AccountID = NULL;
	Py_ssize_t pCFMMCTradingAccountTokenField_AccountID_len = 0;

	//TThostFtdcSequenceNoType int
	int pCFMMCTradingAccountTokenField_KeyID = 0;

	//TThostFtdcCFMMCTokenType char[21]
	const char *pCFMMCTradingAccountTokenField_Token = NULL;
	Py_ssize_t pCFMMCTradingAccountTokenField_Token_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#", (char **)kwlist
#endif

		, &pCFMMCTradingAccountTokenField_BrokerID, &pCFMMCTradingAccountTokenField_BrokerID_len
		, &pCFMMCTradingAccountTokenField_ParticipantID, &pCFMMCTradingAccountTokenField_ParticipantID_len
		, &pCFMMCTradingAccountTokenField_AccountID, &pCFMMCTradingAccountTokenField_AccountID_len
		, &pCFMMCTradingAccountTokenField_KeyID
		, &pCFMMCTradingAccountTokenField_Token, &pCFMMCTradingAccountTokenField_Token_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pCFMMCTradingAccountTokenField_BrokerID != NULL) {
		if(pCFMMCTradingAccountTokenField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pCFMMCTradingAccountTokenField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pCFMMCTradingAccountTokenField_BrokerID, sizeof(self->data.BrokerID) );
		pCFMMCTradingAccountTokenField_BrokerID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pCFMMCTradingAccountTokenField_ParticipantID != NULL) {
		if(pCFMMCTradingAccountTokenField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pCFMMCTradingAccountTokenField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pCFMMCTradingAccountTokenField_ParticipantID, sizeof(self->data.ParticipantID) );
		pCFMMCTradingAccountTokenField_ParticipantID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pCFMMCTradingAccountTokenField_AccountID != NULL) {
		if(pCFMMCTradingAccountTokenField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pCFMMCTradingAccountTokenField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pCFMMCTradingAccountTokenField_AccountID, sizeof(self->data.AccountID) );
		pCFMMCTradingAccountTokenField_AccountID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.KeyID = pCFMMCTradingAccountTokenField_KeyID;

	//TThostFtdcCFMMCTokenType char[21]
	if(pCFMMCTradingAccountTokenField_Token != NULL) {
		if(pCFMMCTradingAccountTokenField_Token_len > (Py_ssize_t)sizeof(self->data.Token)) {
			PyErr_Format(PyExc_ValueError, "Token too long: length=%zd (max allowed is %zd)", pCFMMCTradingAccountTokenField_Token_len, (Py_ssize_t)sizeof(self->data.Token));
			return -1;
		}
		strncpy(self->data.Token, pCFMMCTradingAccountTokenField_Token, sizeof(self->data.Token) );
		pCFMMCTradingAccountTokenField_Token = NULL;
	}



    return 0;
}

static void PyCThostFtdcCFMMCTradingAccountTokenField_dealloc(PyCThostFtdcCFMMCTradingAccountTokenField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCFMMCTradingAccountTokenField_repr(PyCThostFtdcCFMMCTradingAccountTokenField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "ParticipantID", self->data.ParticipantID 
		, "AccountID", self->data.AccountID 
		, "KeyID", self->data.KeyID
		, "Token", self->data.Token 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCFMMCTradingAccountTokenField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcCFMMCTradingAccountTokenField_get_BrokerID(PyCThostFtdcCFMMCTradingAccountTokenField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcCFMMCTradingAccountTokenField_get_ParticipantID(PyCThostFtdcCFMMCTradingAccountTokenField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcCFMMCTradingAccountTokenField_get_AccountID(PyCThostFtdcCFMMCTradingAccountTokenField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcCFMMCTradingAccountTokenField_get_KeyID(PyCThostFtdcCFMMCTradingAccountTokenField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.KeyID);
#else 
	return PyInt_FromLong(self->data.KeyID);
#endif 
}

static PyObject *PyCThostFtdcCFMMCTradingAccountTokenField_get_Token(PyCThostFtdcCFMMCTradingAccountTokenField *self, void *closure) {
	return PyBytes_FromString(self->data.Token);
}

static int PyCThostFtdcCFMMCTradingAccountTokenField_set_BrokerID(PyCThostFtdcCFMMCTradingAccountTokenField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCFMMCTradingAccountTokenField_set_ParticipantID(PyCThostFtdcCFMMCTradingAccountTokenField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCFMMCTradingAccountTokenField_set_AccountID(PyCThostFtdcCFMMCTradingAccountTokenField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
		PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
	return 0;
}

static int PyCThostFtdcCFMMCTradingAccountTokenField_set_KeyID(PyCThostFtdcCFMMCTradingAccountTokenField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCFMMCTradingAccountTokenField_set_Token(PyCThostFtdcCFMMCTradingAccountTokenField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Token Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Token)) {
		PyErr_SetString(PyExc_ValueError, "Token must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.Token, buf, sizeof(self->data.Token));
	return 0;
}



static PyGetSetDef PyCThostFtdcCFMMCTradingAccountTokenField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcCFMMCTradingAccountTokenField_get_BrokerID, (setter)PyCThostFtdcCFMMCTradingAccountTokenField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcCFMMCTradingAccountTokenField_get_ParticipantID, (setter)PyCThostFtdcCFMMCTradingAccountTokenField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcCFMMCTradingAccountTokenField_get_AccountID, (setter)PyCThostFtdcCFMMCTradingAccountTokenField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"KeyID", (getter)PyCThostFtdcCFMMCTradingAccountTokenField_get_KeyID, (setter)PyCThostFtdcCFMMCTradingAccountTokenField_set_KeyID, (char *)"KeyID", NULL},
	 {(char *)"Token", (getter)PyCThostFtdcCFMMCTradingAccountTokenField_get_Token, (setter)PyCThostFtdcCFMMCTradingAccountTokenField_set_Token, (char *)"Token", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCFMMCTradingAccountTokenFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCFMMCTradingAccountTokenField",	/* tp_name */
	sizeof(PyCThostFtdcCFMMCTradingAccountTokenField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCFMMCTradingAccountTokenField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCFMMCTradingAccountTokenField_repr,   /* tp_repr */
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
	"CThostFtdcCFMMCTradingAccountTokenField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCFMMCTradingAccountTokenField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCFMMCTradingAccountTokenField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCFMMCTradingAccountTokenField_new,       /* tp_new */
};

int PyCThostFtdcCFMMCTradingAccountTokenFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCFMMCTradingAccountTokenField  */
	if (PyType_Ready(&PyCThostFtdcCFMMCTradingAccountTokenFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCFMMCTradingAccountTokenField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCFMMCTradingAccountTokenFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCFMMCTradingAccountTokenField", (PyObject *)&PyCThostFtdcCFMMCTradingAccountTokenFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCFMMCTradingAccountTokenField to module");
        Py_DECREF(&PyCThostFtdcCFMMCTradingAccountTokenFieldType);
		return -1;
    }

    return 0;
}
