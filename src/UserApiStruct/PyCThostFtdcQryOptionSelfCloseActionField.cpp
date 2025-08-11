
#include "PyCThostFtdcQryOptionSelfCloseActionField.h"



static PyObject *PyCThostFtdcQryOptionSelfCloseActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryOptionSelfCloseActionField *self = (PyCThostFtdcQryOptionSelfCloseActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryOptionSelfCloseActionField_init(PyCThostFtdcQryOptionSelfCloseActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExchangeID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryOptionSelfCloseActionField_BrokerID = NULL;
	Py_ssize_t pQryOptionSelfCloseActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryOptionSelfCloseActionField_InvestorID = NULL;
	Py_ssize_t pQryOptionSelfCloseActionField_InvestorID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryOptionSelfCloseActionField_ExchangeID = NULL;
	Py_ssize_t pQryOptionSelfCloseActionField_ExchangeID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryOptionSelfCloseActionField_BrokerID, &pQryOptionSelfCloseActionField_BrokerID_len
		, &pQryOptionSelfCloseActionField_InvestorID, &pQryOptionSelfCloseActionField_InvestorID_len
		, &pQryOptionSelfCloseActionField_ExchangeID, &pQryOptionSelfCloseActionField_ExchangeID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryOptionSelfCloseActionField_BrokerID != NULL) {
		if(pQryOptionSelfCloseActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryOptionSelfCloseActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryOptionSelfCloseActionField_BrokerID, sizeof(self->data.BrokerID) );
		pQryOptionSelfCloseActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryOptionSelfCloseActionField_InvestorID != NULL) {
		if(pQryOptionSelfCloseActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryOptionSelfCloseActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryOptionSelfCloseActionField_InvestorID, sizeof(self->data.InvestorID) );
		pQryOptionSelfCloseActionField_InvestorID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryOptionSelfCloseActionField_ExchangeID != NULL) {
		if(pQryOptionSelfCloseActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryOptionSelfCloseActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryOptionSelfCloseActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryOptionSelfCloseActionField_ExchangeID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryOptionSelfCloseActionField_dealloc(PyCThostFtdcQryOptionSelfCloseActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseActionField_repr(PyCThostFtdcQryOptionSelfCloseActionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionSelfCloseActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseActionField_get_BrokerID(PyCThostFtdcQryOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseActionField_get_InvestorID(PyCThostFtdcQryOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryOptionSelfCloseActionField_get_ExchangeID(PyCThostFtdcQryOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static int PyCThostFtdcQryOptionSelfCloseActionField_set_BrokerID(PyCThostFtdcQryOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionSelfCloseActionField_set_InvestorID(PyCThostFtdcQryOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionSelfCloseActionField_set_ExchangeID(PyCThostFtdcQryOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryOptionSelfCloseActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryOptionSelfCloseActionField_get_BrokerID, (setter)PyCThostFtdcQryOptionSelfCloseActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryOptionSelfCloseActionField_get_InvestorID, (setter)PyCThostFtdcQryOptionSelfCloseActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryOptionSelfCloseActionField_get_ExchangeID, (setter)PyCThostFtdcQryOptionSelfCloseActionField_set_ExchangeID, (char *)"ExchangeID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryOptionSelfCloseActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryOptionSelfCloseActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryOptionSelfCloseActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryOptionSelfCloseActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryOptionSelfCloseActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryOptionSelfCloseActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryOptionSelfCloseActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryOptionSelfCloseActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryOptionSelfCloseActionField_new,       /* tp_new */
};

int PyCThostFtdcQryOptionSelfCloseActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryOptionSelfCloseActionField  */
	if (PyType_Ready(&PyCThostFtdcQryOptionSelfCloseActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryOptionSelfCloseActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryOptionSelfCloseActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryOptionSelfCloseActionField", (PyObject *)&PyCThostFtdcQryOptionSelfCloseActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionSelfCloseActionField to module");
        Py_DECREF(&PyCThostFtdcQryOptionSelfCloseActionFieldType);
		return -1;
    }

    return 0;
}
