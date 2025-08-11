
#include "PyCThostFtdcQrySecAgentTradeInfoField.h"



static PyObject *PyCThostFtdcQrySecAgentTradeInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySecAgentTradeInfoField *self = (PyCThostFtdcQrySecAgentTradeInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQrySecAgentTradeInfoField_init(PyCThostFtdcQrySecAgentTradeInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "BrokerSecAgentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQrySecAgentTradeInfoField_BrokerID = NULL;
	Py_ssize_t pQrySecAgentTradeInfoField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pQrySecAgentTradeInfoField_BrokerSecAgentID = NULL;
	Py_ssize_t pQrySecAgentTradeInfoField_BrokerSecAgentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQrySecAgentTradeInfoField_BrokerID, &pQrySecAgentTradeInfoField_BrokerID_len
		, &pQrySecAgentTradeInfoField_BrokerSecAgentID, &pQrySecAgentTradeInfoField_BrokerSecAgentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQrySecAgentTradeInfoField_BrokerID != NULL) {
		if(pQrySecAgentTradeInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQrySecAgentTradeInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQrySecAgentTradeInfoField_BrokerID, sizeof(self->data.BrokerID) );
		pQrySecAgentTradeInfoField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pQrySecAgentTradeInfoField_BrokerSecAgentID != NULL) {
		if(pQrySecAgentTradeInfoField_BrokerSecAgentID_len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
			PyErr_Format(PyExc_ValueError, "BrokerSecAgentID too long: length=%zd (max allowed is %zd)", pQrySecAgentTradeInfoField_BrokerSecAgentID_len, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID));
			return -1;
		}
		strncpy(self->data.BrokerSecAgentID, pQrySecAgentTradeInfoField_BrokerSecAgentID, sizeof(self->data.BrokerSecAgentID) );
		pQrySecAgentTradeInfoField_BrokerSecAgentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQrySecAgentTradeInfoField_dealloc(PyCThostFtdcQrySecAgentTradeInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySecAgentTradeInfoField_repr(PyCThostFtdcQrySecAgentTradeInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "BrokerSecAgentID", self->data.BrokerSecAgentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySecAgentTradeInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQrySecAgentTradeInfoField_get_BrokerID(PyCThostFtdcQrySecAgentTradeInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQrySecAgentTradeInfoField_get_BrokerSecAgentID(PyCThostFtdcQrySecAgentTradeInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerSecAgentID);
}

static int PyCThostFtdcQrySecAgentTradeInfoField_set_BrokerID(PyCThostFtdcQrySecAgentTradeInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySecAgentTradeInfoField_set_BrokerSecAgentID(PyCThostFtdcQrySecAgentTradeInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BrokerSecAgentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
		PyErr_SetString(PyExc_ValueError, "BrokerSecAgentID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.BrokerSecAgentID, buf, sizeof(self->data.BrokerSecAgentID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQrySecAgentTradeInfoField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQrySecAgentTradeInfoField_get_BrokerID, (setter)PyCThostFtdcQrySecAgentTradeInfoField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerSecAgentID", (getter)PyCThostFtdcQrySecAgentTradeInfoField_get_BrokerSecAgentID, (setter)PyCThostFtdcQrySecAgentTradeInfoField_set_BrokerSecAgentID, (char *)"BrokerSecAgentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySecAgentTradeInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySecAgentTradeInfoField",	/* tp_name */
	sizeof(PyCThostFtdcQrySecAgentTradeInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySecAgentTradeInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySecAgentTradeInfoField_repr,   /* tp_repr */
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
	"CThostFtdcQrySecAgentTradeInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySecAgentTradeInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySecAgentTradeInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySecAgentTradeInfoField_new,       /* tp_new */
};

int PyCThostFtdcQrySecAgentTradeInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySecAgentTradeInfoField  */
	if (PyType_Ready(&PyCThostFtdcQrySecAgentTradeInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySecAgentTradeInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySecAgentTradeInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySecAgentTradeInfoField", (PyObject *)&PyCThostFtdcQrySecAgentTradeInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySecAgentTradeInfoField to module");
        Py_DECREF(&PyCThostFtdcQrySecAgentTradeInfoFieldType);
		return -1;
    }

    return 0;
}
