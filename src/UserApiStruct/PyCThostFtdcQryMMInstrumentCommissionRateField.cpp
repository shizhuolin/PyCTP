
#include "PyCThostFtdcQryMMInstrumentCommissionRateField.h"



static PyObject *PyCThostFtdcQryMMInstrumentCommissionRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryMMInstrumentCommissionRateField *self = (PyCThostFtdcQryMMInstrumentCommissionRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryMMInstrumentCommissionRateField_init(PyCThostFtdcQryMMInstrumentCommissionRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryMMInstrumentCommissionRateField_BrokerID = NULL;
	Py_ssize_t pQryMMInstrumentCommissionRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryMMInstrumentCommissionRateField_InvestorID = NULL;
	Py_ssize_t pQryMMInstrumentCommissionRateField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryMMInstrumentCommissionRateField_reserve1 = NULL;
	Py_ssize_t pQryMMInstrumentCommissionRateField_reserve1_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryMMInstrumentCommissionRateField_InstrumentID = NULL;
	Py_ssize_t pQryMMInstrumentCommissionRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pQryMMInstrumentCommissionRateField_BrokerID, &pQryMMInstrumentCommissionRateField_BrokerID_len
		, &pQryMMInstrumentCommissionRateField_InvestorID, &pQryMMInstrumentCommissionRateField_InvestorID_len
		, &pQryMMInstrumentCommissionRateField_reserve1, &pQryMMInstrumentCommissionRateField_reserve1_len
		, &pQryMMInstrumentCommissionRateField_InstrumentID, &pQryMMInstrumentCommissionRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryMMInstrumentCommissionRateField_BrokerID != NULL) {
		if(pQryMMInstrumentCommissionRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryMMInstrumentCommissionRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryMMInstrumentCommissionRateField_BrokerID, sizeof(self->data.BrokerID) );
		pQryMMInstrumentCommissionRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryMMInstrumentCommissionRateField_InvestorID != NULL) {
		if(pQryMMInstrumentCommissionRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryMMInstrumentCommissionRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryMMInstrumentCommissionRateField_InvestorID, sizeof(self->data.InvestorID) );
		pQryMMInstrumentCommissionRateField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryMMInstrumentCommissionRateField_reserve1 != NULL) {
		if(pQryMMInstrumentCommissionRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryMMInstrumentCommissionRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryMMInstrumentCommissionRateField_reserve1, sizeof(self->data.reserve1) );
		pQryMMInstrumentCommissionRateField_reserve1 = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryMMInstrumentCommissionRateField_InstrumentID != NULL) {
		if(pQryMMInstrumentCommissionRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryMMInstrumentCommissionRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryMMInstrumentCommissionRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryMMInstrumentCommissionRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryMMInstrumentCommissionRateField_dealloc(PyCThostFtdcQryMMInstrumentCommissionRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryMMInstrumentCommissionRateField_repr(PyCThostFtdcQryMMInstrumentCommissionRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMMInstrumentCommissionRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryMMInstrumentCommissionRateField_get_BrokerID(PyCThostFtdcQryMMInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryMMInstrumentCommissionRateField_get_InvestorID(PyCThostFtdcQryMMInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryMMInstrumentCommissionRateField_get_reserve1(PyCThostFtdcQryMMInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryMMInstrumentCommissionRateField_get_InstrumentID(PyCThostFtdcQryMMInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryMMInstrumentCommissionRateField_set_BrokerID(PyCThostFtdcQryMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMMInstrumentCommissionRateField_set_InvestorID(PyCThostFtdcQryMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMMInstrumentCommissionRateField_set_reserve1(PyCThostFtdcQryMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMMInstrumentCommissionRateField_set_InstrumentID(PyCThostFtdcQryMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryMMInstrumentCommissionRateField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryMMInstrumentCommissionRateField_get_BrokerID, (setter)PyCThostFtdcQryMMInstrumentCommissionRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryMMInstrumentCommissionRateField_get_InvestorID, (setter)PyCThostFtdcQryMMInstrumentCommissionRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryMMInstrumentCommissionRateField_get_reserve1, (setter)PyCThostFtdcQryMMInstrumentCommissionRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryMMInstrumentCommissionRateField_get_InstrumentID, (setter)PyCThostFtdcQryMMInstrumentCommissionRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryMMInstrumentCommissionRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryMMInstrumentCommissionRateField",	/* tp_name */
	sizeof(PyCThostFtdcQryMMInstrumentCommissionRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryMMInstrumentCommissionRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryMMInstrumentCommissionRateField_repr,   /* tp_repr */
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
	"CThostFtdcQryMMInstrumentCommissionRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryMMInstrumentCommissionRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryMMInstrumentCommissionRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryMMInstrumentCommissionRateField_new,       /* tp_new */
};

int PyCThostFtdcQryMMInstrumentCommissionRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryMMInstrumentCommissionRateField  */
	if (PyType_Ready(&PyCThostFtdcQryMMInstrumentCommissionRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryMMInstrumentCommissionRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryMMInstrumentCommissionRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryMMInstrumentCommissionRateField", (PyObject *)&PyCThostFtdcQryMMInstrumentCommissionRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMMInstrumentCommissionRateField to module");
        Py_DECREF(&PyCThostFtdcQryMMInstrumentCommissionRateFieldType);
		return -1;
    }

    return 0;
}
