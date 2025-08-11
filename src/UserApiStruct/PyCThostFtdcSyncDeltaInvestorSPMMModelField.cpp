
#include "PyCThostFtdcSyncDeltaInvestorSPMMModelField.h"



static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInvestorSPMMModelField *self = (PyCThostFtdcSyncDeltaInvestorSPMMModelField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_init(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "SPMMModelID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaInvestorSPMMModelField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaInvestorSPMMModelField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaInvestorSPMMModelField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaInvestorSPMMModelField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDeltaInvestorSPMMModelField_InvestorID = NULL;
	Py_ssize_t pSyncDeltaInvestorSPMMModelField_InvestorID_len = 0;

	//TThostFtdcSPMMModelIDType char[33]
	const char *pSyncDeltaInvestorSPMMModelField_SPMMModelID = NULL;
	Py_ssize_t pSyncDeltaInvestorSPMMModelField_SPMMModelID_len = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaInvestorSPMMModelField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaInvestorSPMMModelField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ci", (char **)kwlist
#endif

		, &pSyncDeltaInvestorSPMMModelField_ExchangeID, &pSyncDeltaInvestorSPMMModelField_ExchangeID_len
		, &pSyncDeltaInvestorSPMMModelField_BrokerID, &pSyncDeltaInvestorSPMMModelField_BrokerID_len
		, &pSyncDeltaInvestorSPMMModelField_InvestorID, &pSyncDeltaInvestorSPMMModelField_InvestorID_len
		, &pSyncDeltaInvestorSPMMModelField_SPMMModelID, &pSyncDeltaInvestorSPMMModelField_SPMMModelID_len
		, &pSyncDeltaInvestorSPMMModelField_ActionDirection
		, &pSyncDeltaInvestorSPMMModelField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaInvestorSPMMModelField_ExchangeID != NULL) {
		if(pSyncDeltaInvestorSPMMModelField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvestorSPMMModelField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaInvestorSPMMModelField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaInvestorSPMMModelField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaInvestorSPMMModelField_BrokerID != NULL) {
		if(pSyncDeltaInvestorSPMMModelField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvestorSPMMModelField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaInvestorSPMMModelField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaInvestorSPMMModelField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDeltaInvestorSPMMModelField_InvestorID != NULL) {
		if(pSyncDeltaInvestorSPMMModelField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvestorSPMMModelField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDeltaInvestorSPMMModelField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDeltaInvestorSPMMModelField_InvestorID = NULL;
	}

	//TThostFtdcSPMMModelIDType char[33]
	if(pSyncDeltaInvestorSPMMModelField_SPMMModelID != NULL) {
		if(pSyncDeltaInvestorSPMMModelField_SPMMModelID_len > (Py_ssize_t)sizeof(self->data.SPMMModelID)) {
			PyErr_Format(PyExc_ValueError, "SPMMModelID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvestorSPMMModelField_SPMMModelID_len, (Py_ssize_t)sizeof(self->data.SPMMModelID));
			return -1;
		}
		strncpy(self->data.SPMMModelID, pSyncDeltaInvestorSPMMModelField_SPMMModelID, sizeof(self->data.SPMMModelID) );
		pSyncDeltaInvestorSPMMModelField_SPMMModelID = NULL;
	}

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaInvestorSPMMModelField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaInvestorSPMMModelField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaInvestorSPMMModelField_dealloc(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_repr(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "SPMMModelID", self->data.SPMMModelID 
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvestorSPMMModelField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_ExchangeID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_BrokerID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_InvestorID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_SPMMModelID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
	return PyBytes_FromString(self->data.SPMMModelID);
}

static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_ActionDirection(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_ExchangeID(PyCThostFtdcSyncDeltaInvestorSPMMModelField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_BrokerID(PyCThostFtdcSyncDeltaInvestorSPMMModelField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_InvestorID(PyCThostFtdcSyncDeltaInvestorSPMMModelField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}

static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_SPMMModelID(PyCThostFtdcSyncDeltaInvestorSPMMModelField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SPMMModelID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SPMMModelID)) {
		PyErr_SetString(PyExc_ValueError, "SPMMModelID must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.SPMMModelID, buf, sizeof(self->data.SPMMModelID));
	return 0;
}

static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_ActionDirection(PyCThostFtdcSyncDeltaInvestorSPMMModelField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
		PyErr_SetString(PyExc_ValueError, "ActionDirection must be less than 1 bytes");
		return -1;
	}
	self->data.ActionDirection = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvestorSPMMModelField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int"); 
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
    self->data.SyncDeltaSequenceNo = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcSyncDeltaInvestorSPMMModelField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"SPMMModelID", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_SPMMModelID, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_SPMMModelID, (char *)"SPMMModelID", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInvestorSPMMModelField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInvestorSPMMModelField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInvestorSPMMModelField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInvestorSPMMModelField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInvestorSPMMModelField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInvestorSPMMModelField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInvestorSPMMModelField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInvestorSPMMModelField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInvestorSPMMModelField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInvestorSPMMModelField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvestorSPMMModelField", (PyObject *)&PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvestorSPMMModelField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType);
		return -1;
    }

    return 0;
}
