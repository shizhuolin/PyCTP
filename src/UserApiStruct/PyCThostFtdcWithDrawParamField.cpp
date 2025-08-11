
#include "PyCThostFtdcWithDrawParamField.h"



static PyObject *PyCThostFtdcWithDrawParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcWithDrawParamField *self = (PyCThostFtdcWithDrawParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcWithDrawParamField_init(PyCThostFtdcWithDrawParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "WithDrawParamID", "WithDrawParamValue",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pWithDrawParamField_BrokerID = NULL;
	Py_ssize_t pWithDrawParamField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pWithDrawParamField_AccountID = NULL;
	Py_ssize_t pWithDrawParamField_AccountID_len = 0;

	//TThostFtdcWithDrawParamIDType char
	char pWithDrawParamField_WithDrawParamID = 0;

	//TThostFtdcWithDrawParamValueType char[41]
	const char *pWithDrawParamField_WithDrawParamValue = NULL;
	Py_ssize_t pWithDrawParamField_WithDrawParamValue_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#", (char **)kwlist
#endif

		, &pWithDrawParamField_BrokerID, &pWithDrawParamField_BrokerID_len
		, &pWithDrawParamField_AccountID, &pWithDrawParamField_AccountID_len
		, &pWithDrawParamField_WithDrawParamID
		, &pWithDrawParamField_WithDrawParamValue, &pWithDrawParamField_WithDrawParamValue_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pWithDrawParamField_BrokerID != NULL) {
		if(pWithDrawParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pWithDrawParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pWithDrawParamField_BrokerID, sizeof(self->data.BrokerID) );
		pWithDrawParamField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pWithDrawParamField_AccountID != NULL) {
		if(pWithDrawParamField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pWithDrawParamField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pWithDrawParamField_AccountID, sizeof(self->data.AccountID) );
		pWithDrawParamField_AccountID = NULL;
	}

	//TThostFtdcWithDrawParamIDType char
	self->data.WithDrawParamID = pWithDrawParamField_WithDrawParamID;

	//TThostFtdcWithDrawParamValueType char[41]
	if(pWithDrawParamField_WithDrawParamValue != NULL) {
		if(pWithDrawParamField_WithDrawParamValue_len > (Py_ssize_t)sizeof(self->data.WithDrawParamValue)) {
			PyErr_Format(PyExc_ValueError, "WithDrawParamValue too long: length=%zd (max allowed is %zd)", pWithDrawParamField_WithDrawParamValue_len, (Py_ssize_t)sizeof(self->data.WithDrawParamValue));
			return -1;
		}
		strncpy(self->data.WithDrawParamValue, pWithDrawParamField_WithDrawParamValue, sizeof(self->data.WithDrawParamValue) );
		pWithDrawParamField_WithDrawParamValue = NULL;
	}



    return 0;
}

static void PyCThostFtdcWithDrawParamField_dealloc(PyCThostFtdcWithDrawParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcWithDrawParamField_repr(PyCThostFtdcWithDrawParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AccountID", self->data.AccountID 
		, "WithDrawParamID", self->data.WithDrawParamID
		, "WithDrawParamValue", self->data.WithDrawParamValue 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcWithDrawParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcWithDrawParamField_get_BrokerID(PyCThostFtdcWithDrawParamField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcWithDrawParamField_get_AccountID(PyCThostFtdcWithDrawParamField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcWithDrawParamField_get_WithDrawParamID(PyCThostFtdcWithDrawParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.WithDrawParamID), 1);
}

static PyObject *PyCThostFtdcWithDrawParamField_get_WithDrawParamValue(PyCThostFtdcWithDrawParamField *self, void *closure) {
	return PyBytes_FromString(self->data.WithDrawParamValue);
}

static int PyCThostFtdcWithDrawParamField_set_BrokerID(PyCThostFtdcWithDrawParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcWithDrawParamField_set_AccountID(PyCThostFtdcWithDrawParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcWithDrawParamField_set_WithDrawParamID(PyCThostFtdcWithDrawParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "WithDrawParamID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.WithDrawParamID)) {
		PyErr_SetString(PyExc_ValueError, "WithDrawParamID must be less than 1 bytes");
		return -1;
	}
	self->data.WithDrawParamID = *buf;
	return 0;
}

static int PyCThostFtdcWithDrawParamField_set_WithDrawParamValue(PyCThostFtdcWithDrawParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "WithDrawParamValue Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.WithDrawParamValue)) {
		PyErr_SetString(PyExc_ValueError, "WithDrawParamValue must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.WithDrawParamValue, buf, sizeof(self->data.WithDrawParamValue));
	return 0;
}



static PyGetSetDef PyCThostFtdcWithDrawParamField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcWithDrawParamField_get_BrokerID, (setter)PyCThostFtdcWithDrawParamField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcWithDrawParamField_get_AccountID, (setter)PyCThostFtdcWithDrawParamField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"WithDrawParamID", (getter)PyCThostFtdcWithDrawParamField_get_WithDrawParamID, (setter)PyCThostFtdcWithDrawParamField_set_WithDrawParamID, (char *)"WithDrawParamID", NULL},
	 {(char *)"WithDrawParamValue", (getter)PyCThostFtdcWithDrawParamField_get_WithDrawParamValue, (setter)PyCThostFtdcWithDrawParamField_set_WithDrawParamValue, (char *)"WithDrawParamValue", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcWithDrawParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcWithDrawParamField",	/* tp_name */
	sizeof(PyCThostFtdcWithDrawParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcWithDrawParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcWithDrawParamField_repr,   /* tp_repr */
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
	"CThostFtdcWithDrawParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcWithDrawParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcWithDrawParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcWithDrawParamField_new,       /* tp_new */
};

int PyCThostFtdcWithDrawParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcWithDrawParamField  */
	if (PyType_Ready(&PyCThostFtdcWithDrawParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcWithDrawParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcWithDrawParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcWithDrawParamField", (PyObject *)&PyCThostFtdcWithDrawParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcWithDrawParamField to module");
        Py_DECREF(&PyCThostFtdcWithDrawParamFieldType);
		return -1;
    }

    return 0;
}
