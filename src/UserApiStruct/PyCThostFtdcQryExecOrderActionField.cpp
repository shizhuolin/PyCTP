
#include "PyCThostFtdcQryExecOrderActionField.h"



static PyObject *PyCThostFtdcQryExecOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExecOrderActionField *self = (PyCThostFtdcQryExecOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryExecOrderActionField_init(PyCThostFtdcQryExecOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExchangeID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryExecOrderActionField_BrokerID = NULL;
	Py_ssize_t pQryExecOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryExecOrderActionField_InvestorID = NULL;
	Py_ssize_t pQryExecOrderActionField_InvestorID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryExecOrderActionField_ExchangeID = NULL;
	Py_ssize_t pQryExecOrderActionField_ExchangeID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryExecOrderActionField_BrokerID, &pQryExecOrderActionField_BrokerID_len
		, &pQryExecOrderActionField_InvestorID, &pQryExecOrderActionField_InvestorID_len
		, &pQryExecOrderActionField_ExchangeID, &pQryExecOrderActionField_ExchangeID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryExecOrderActionField_BrokerID != NULL) {
		if(pQryExecOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryExecOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryExecOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pQryExecOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryExecOrderActionField_InvestorID != NULL) {
		if(pQryExecOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryExecOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryExecOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pQryExecOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryExecOrderActionField_ExchangeID != NULL) {
		if(pQryExecOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryExecOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryExecOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryExecOrderActionField_ExchangeID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryExecOrderActionField_dealloc(PyCThostFtdcQryExecOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExecOrderActionField_repr(PyCThostFtdcQryExecOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ExchangeID", self->data.ExchangeID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExecOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryExecOrderActionField_get_BrokerID(PyCThostFtdcQryExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryExecOrderActionField_get_InvestorID(PyCThostFtdcQryExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryExecOrderActionField_get_ExchangeID(PyCThostFtdcQryExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static int PyCThostFtdcQryExecOrderActionField_set_BrokerID(PyCThostFtdcQryExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExecOrderActionField_set_InvestorID(PyCThostFtdcQryExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExecOrderActionField_set_ExchangeID(PyCThostFtdcQryExecOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryExecOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryExecOrderActionField_get_BrokerID, (setter)PyCThostFtdcQryExecOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryExecOrderActionField_get_InvestorID, (setter)PyCThostFtdcQryExecOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryExecOrderActionField_get_ExchangeID, (setter)PyCThostFtdcQryExecOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExecOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExecOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryExecOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExecOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExecOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryExecOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExecOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExecOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExecOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcQryExecOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExecOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcQryExecOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExecOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExecOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExecOrderActionField", (PyObject *)&PyCThostFtdcQryExecOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExecOrderActionField to module");
        Py_DECREF(&PyCThostFtdcQryExecOrderActionFieldType);
		return -1;
    }

    return 0;
}
