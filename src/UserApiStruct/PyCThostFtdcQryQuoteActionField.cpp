
#include "PyCThostFtdcQryQuoteActionField.h"



static PyObject *PyCThostFtdcQryQuoteActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryQuoteActionField *self = (PyCThostFtdcQryQuoteActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryQuoteActionField_init(PyCThostFtdcQryQuoteActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExchangeID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryQuoteActionField_BrokerID = NULL;
	Py_ssize_t pQryQuoteActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryQuoteActionField_InvestorID = NULL;
	Py_ssize_t pQryQuoteActionField_InvestorID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryQuoteActionField_ExchangeID = NULL;
	Py_ssize_t pQryQuoteActionField_ExchangeID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryQuoteActionField_BrokerID, &pQryQuoteActionField_BrokerID_len
		, &pQryQuoteActionField_InvestorID, &pQryQuoteActionField_InvestorID_len
		, &pQryQuoteActionField_ExchangeID, &pQryQuoteActionField_ExchangeID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryQuoteActionField_BrokerID != NULL) {
		if(pQryQuoteActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryQuoteActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryQuoteActionField_BrokerID, sizeof(self->data.BrokerID) );
		pQryQuoteActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryQuoteActionField_InvestorID != NULL) {
		if(pQryQuoteActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryQuoteActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryQuoteActionField_InvestorID, sizeof(self->data.InvestorID) );
		pQryQuoteActionField_InvestorID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryQuoteActionField_ExchangeID != NULL) {
		if(pQryQuoteActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryQuoteActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryQuoteActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryQuoteActionField_ExchangeID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryQuoteActionField_dealloc(PyCThostFtdcQryQuoteActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryQuoteActionField_repr(PyCThostFtdcQryQuoteActionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryQuoteActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryQuoteActionField_get_BrokerID(PyCThostFtdcQryQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryQuoteActionField_get_InvestorID(PyCThostFtdcQryQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryQuoteActionField_get_ExchangeID(PyCThostFtdcQryQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static int PyCThostFtdcQryQuoteActionField_set_BrokerID(PyCThostFtdcQryQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryQuoteActionField_set_InvestorID(PyCThostFtdcQryQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryQuoteActionField_set_ExchangeID(PyCThostFtdcQryQuoteActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryQuoteActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryQuoteActionField_get_BrokerID, (setter)PyCThostFtdcQryQuoteActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryQuoteActionField_get_InvestorID, (setter)PyCThostFtdcQryQuoteActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryQuoteActionField_get_ExchangeID, (setter)PyCThostFtdcQryQuoteActionField_set_ExchangeID, (char *)"ExchangeID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryQuoteActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryQuoteActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryQuoteActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryQuoteActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryQuoteActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryQuoteActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryQuoteActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryQuoteActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryQuoteActionField_new,       /* tp_new */
};

int PyCThostFtdcQryQuoteActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryQuoteActionField  */
	if (PyType_Ready(&PyCThostFtdcQryQuoteActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryQuoteActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryQuoteActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryQuoteActionField", (PyObject *)&PyCThostFtdcQryQuoteActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryQuoteActionField to module");
        Py_DECREF(&PyCThostFtdcQryQuoteActionFieldType);
		return -1;
    }

    return 0;
}
