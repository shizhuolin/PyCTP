
#include "PyCThostFtdcQryBatchOrderActionField.h"



static PyObject *PyCThostFtdcQryBatchOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryBatchOrderActionField *self = (PyCThostFtdcQryBatchOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryBatchOrderActionField_init(PyCThostFtdcQryBatchOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExchangeID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryBatchOrderActionField_BrokerID = NULL;
	Py_ssize_t pQryBatchOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryBatchOrderActionField_InvestorID = NULL;
	Py_ssize_t pQryBatchOrderActionField_InvestorID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryBatchOrderActionField_ExchangeID = NULL;
	Py_ssize_t pQryBatchOrderActionField_ExchangeID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryBatchOrderActionField_BrokerID, &pQryBatchOrderActionField_BrokerID_len
		, &pQryBatchOrderActionField_InvestorID, &pQryBatchOrderActionField_InvestorID_len
		, &pQryBatchOrderActionField_ExchangeID, &pQryBatchOrderActionField_ExchangeID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryBatchOrderActionField_BrokerID != NULL) {
		if(pQryBatchOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryBatchOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryBatchOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pQryBatchOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryBatchOrderActionField_InvestorID != NULL) {
		if(pQryBatchOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryBatchOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryBatchOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pQryBatchOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryBatchOrderActionField_ExchangeID != NULL) {
		if(pQryBatchOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryBatchOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryBatchOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryBatchOrderActionField_ExchangeID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryBatchOrderActionField_dealloc(PyCThostFtdcQryBatchOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryBatchOrderActionField_repr(PyCThostFtdcQryBatchOrderActionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBatchOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryBatchOrderActionField_get_BrokerID(PyCThostFtdcQryBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryBatchOrderActionField_get_InvestorID(PyCThostFtdcQryBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryBatchOrderActionField_get_ExchangeID(PyCThostFtdcQryBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static int PyCThostFtdcQryBatchOrderActionField_set_BrokerID(PyCThostFtdcQryBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryBatchOrderActionField_set_InvestorID(PyCThostFtdcQryBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryBatchOrderActionField_set_ExchangeID(PyCThostFtdcQryBatchOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryBatchOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryBatchOrderActionField_get_BrokerID, (setter)PyCThostFtdcQryBatchOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryBatchOrderActionField_get_InvestorID, (setter)PyCThostFtdcQryBatchOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryBatchOrderActionField_get_ExchangeID, (setter)PyCThostFtdcQryBatchOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryBatchOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryBatchOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryBatchOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryBatchOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryBatchOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryBatchOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryBatchOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryBatchOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryBatchOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcQryBatchOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryBatchOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcQryBatchOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryBatchOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryBatchOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryBatchOrderActionField", (PyObject *)&PyCThostFtdcQryBatchOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBatchOrderActionField to module");
        Py_DECREF(&PyCThostFtdcQryBatchOrderActionFieldType);
		return -1;
    }

    return 0;
}
