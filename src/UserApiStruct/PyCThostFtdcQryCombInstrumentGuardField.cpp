
#include "PyCThostFtdcQryCombInstrumentGuardField.h"



static PyObject *PyCThostFtdcQryCombInstrumentGuardField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryCombInstrumentGuardField *self = (PyCThostFtdcQryCombInstrumentGuardField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryCombInstrumentGuardField_init(PyCThostFtdcQryCombInstrumentGuardField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "reserve1", "ExchangeID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryCombInstrumentGuardField_BrokerID = NULL;
	Py_ssize_t pQryCombInstrumentGuardField_BrokerID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryCombInstrumentGuardField_reserve1 = NULL;
	Py_ssize_t pQryCombInstrumentGuardField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryCombInstrumentGuardField_ExchangeID = NULL;
	Py_ssize_t pQryCombInstrumentGuardField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryCombInstrumentGuardField_InstrumentID = NULL;
	Py_ssize_t pQryCombInstrumentGuardField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pQryCombInstrumentGuardField_BrokerID, &pQryCombInstrumentGuardField_BrokerID_len
		, &pQryCombInstrumentGuardField_reserve1, &pQryCombInstrumentGuardField_reserve1_len
		, &pQryCombInstrumentGuardField_ExchangeID, &pQryCombInstrumentGuardField_ExchangeID_len
		, &pQryCombInstrumentGuardField_InstrumentID, &pQryCombInstrumentGuardField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryCombInstrumentGuardField_BrokerID != NULL) {
		if(pQryCombInstrumentGuardField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryCombInstrumentGuardField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryCombInstrumentGuardField_BrokerID, sizeof(self->data.BrokerID) );
		pQryCombInstrumentGuardField_BrokerID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryCombInstrumentGuardField_reserve1 != NULL) {
		if(pQryCombInstrumentGuardField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryCombInstrumentGuardField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryCombInstrumentGuardField_reserve1, sizeof(self->data.reserve1) );
		pQryCombInstrumentGuardField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryCombInstrumentGuardField_ExchangeID != NULL) {
		if(pQryCombInstrumentGuardField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryCombInstrumentGuardField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryCombInstrumentGuardField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryCombInstrumentGuardField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryCombInstrumentGuardField_InstrumentID != NULL) {
		if(pQryCombInstrumentGuardField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryCombInstrumentGuardField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryCombInstrumentGuardField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryCombInstrumentGuardField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryCombInstrumentGuardField_dealloc(PyCThostFtdcQryCombInstrumentGuardField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryCombInstrumentGuardField_repr(PyCThostFtdcQryCombInstrumentGuardField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCombInstrumentGuardField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryCombInstrumentGuardField_get_BrokerID(PyCThostFtdcQryCombInstrumentGuardField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryCombInstrumentGuardField_get_reserve1(PyCThostFtdcQryCombInstrumentGuardField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryCombInstrumentGuardField_get_ExchangeID(PyCThostFtdcQryCombInstrumentGuardField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryCombInstrumentGuardField_get_InstrumentID(PyCThostFtdcQryCombInstrumentGuardField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryCombInstrumentGuardField_set_BrokerID(PyCThostFtdcQryCombInstrumentGuardField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryCombInstrumentGuardField_set_reserve1(PyCThostFtdcQryCombInstrumentGuardField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryCombInstrumentGuardField_set_ExchangeID(PyCThostFtdcQryCombInstrumentGuardField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryCombInstrumentGuardField_set_InstrumentID(PyCThostFtdcQryCombInstrumentGuardField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryCombInstrumentGuardField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryCombInstrumentGuardField_get_BrokerID, (setter)PyCThostFtdcQryCombInstrumentGuardField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryCombInstrumentGuardField_get_reserve1, (setter)PyCThostFtdcQryCombInstrumentGuardField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryCombInstrumentGuardField_get_ExchangeID, (setter)PyCThostFtdcQryCombInstrumentGuardField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryCombInstrumentGuardField_get_InstrumentID, (setter)PyCThostFtdcQryCombInstrumentGuardField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryCombInstrumentGuardFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryCombInstrumentGuardField",	/* tp_name */
	sizeof(PyCThostFtdcQryCombInstrumentGuardField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryCombInstrumentGuardField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryCombInstrumentGuardField_repr,   /* tp_repr */
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
	"CThostFtdcQryCombInstrumentGuardField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryCombInstrumentGuardField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryCombInstrumentGuardField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryCombInstrumentGuardField_new,       /* tp_new */
};

int PyCThostFtdcQryCombInstrumentGuardFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryCombInstrumentGuardField  */
	if (PyType_Ready(&PyCThostFtdcQryCombInstrumentGuardFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryCombInstrumentGuardField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryCombInstrumentGuardFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryCombInstrumentGuardField", (PyObject *)&PyCThostFtdcQryCombInstrumentGuardFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCombInstrumentGuardField to module");
        Py_DECREF(&PyCThostFtdcQryCombInstrumentGuardFieldType);
		return -1;
    }

    return 0;
}
