
#include "PyCThostFtdcQrySPBMInvestorPortfDefField.h"



static PyObject *PyCThostFtdcQrySPBMInvestorPortfDefField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySPBMInvestorPortfDefField *self = (PyCThostFtdcQrySPBMInvestorPortfDefField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQrySPBMInvestorPortfDefField_init(PyCThostFtdcQrySPBMInvestorPortfDefField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQrySPBMInvestorPortfDefField_ExchangeID = NULL;
	Py_ssize_t pQrySPBMInvestorPortfDefField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pQrySPBMInvestorPortfDefField_BrokerID = NULL;
	Py_ssize_t pQrySPBMInvestorPortfDefField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQrySPBMInvestorPortfDefField_InvestorID = NULL;
	Py_ssize_t pQrySPBMInvestorPortfDefField_InvestorID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQrySPBMInvestorPortfDefField_ExchangeID, &pQrySPBMInvestorPortfDefField_ExchangeID_len
		, &pQrySPBMInvestorPortfDefField_BrokerID, &pQrySPBMInvestorPortfDefField_BrokerID_len
		, &pQrySPBMInvestorPortfDefField_InvestorID, &pQrySPBMInvestorPortfDefField_InvestorID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQrySPBMInvestorPortfDefField_ExchangeID != NULL) {
		if(pQrySPBMInvestorPortfDefField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQrySPBMInvestorPortfDefField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQrySPBMInvestorPortfDefField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQrySPBMInvestorPortfDefField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pQrySPBMInvestorPortfDefField_BrokerID != NULL) {
		if(pQrySPBMInvestorPortfDefField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQrySPBMInvestorPortfDefField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQrySPBMInvestorPortfDefField_BrokerID, sizeof(self->data.BrokerID) );
		pQrySPBMInvestorPortfDefField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQrySPBMInvestorPortfDefField_InvestorID != NULL) {
		if(pQrySPBMInvestorPortfDefField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQrySPBMInvestorPortfDefField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQrySPBMInvestorPortfDefField_InvestorID, sizeof(self->data.InvestorID) );
		pQrySPBMInvestorPortfDefField_InvestorID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQrySPBMInvestorPortfDefField_dealloc(PyCThostFtdcQrySPBMInvestorPortfDefField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySPBMInvestorPortfDefField_repr(PyCThostFtdcQrySPBMInvestorPortfDefField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMInvestorPortfDefField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQrySPBMInvestorPortfDefField_get_ExchangeID(PyCThostFtdcQrySPBMInvestorPortfDefField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQrySPBMInvestorPortfDefField_get_BrokerID(PyCThostFtdcQrySPBMInvestorPortfDefField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQrySPBMInvestorPortfDefField_get_InvestorID(PyCThostFtdcQrySPBMInvestorPortfDefField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static int PyCThostFtdcQrySPBMInvestorPortfDefField_set_ExchangeID(PyCThostFtdcQrySPBMInvestorPortfDefField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySPBMInvestorPortfDefField_set_BrokerID(PyCThostFtdcQrySPBMInvestorPortfDefField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySPBMInvestorPortfDefField_set_InvestorID(PyCThostFtdcQrySPBMInvestorPortfDefField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQrySPBMInvestorPortfDefField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQrySPBMInvestorPortfDefField_get_ExchangeID, (setter)PyCThostFtdcQrySPBMInvestorPortfDefField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcQrySPBMInvestorPortfDefField_get_BrokerID, (setter)PyCThostFtdcQrySPBMInvestorPortfDefField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQrySPBMInvestorPortfDefField_get_InvestorID, (setter)PyCThostFtdcQrySPBMInvestorPortfDefField_set_InvestorID, (char *)"InvestorID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySPBMInvestorPortfDefFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySPBMInvestorPortfDefField",	/* tp_name */
	sizeof(PyCThostFtdcQrySPBMInvestorPortfDefField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySPBMInvestorPortfDefField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySPBMInvestorPortfDefField_repr,   /* tp_repr */
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
	"CThostFtdcQrySPBMInvestorPortfDefField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySPBMInvestorPortfDefField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySPBMInvestorPortfDefField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySPBMInvestorPortfDefField_new,       /* tp_new */
};

int PyCThostFtdcQrySPBMInvestorPortfDefFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySPBMInvestorPortfDefField  */
	if (PyType_Ready(&PyCThostFtdcQrySPBMInvestorPortfDefFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySPBMInvestorPortfDefField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySPBMInvestorPortfDefFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySPBMInvestorPortfDefField", (PyObject *)&PyCThostFtdcQrySPBMInvestorPortfDefFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMInvestorPortfDefField to module");
        Py_DECREF(&PyCThostFtdcQrySPBMInvestorPortfDefFieldType);
		return -1;
    }

    return 0;
}
