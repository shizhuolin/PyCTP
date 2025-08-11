
#include "PyCThostFtdcQryRiskSettleInvstPositionField.h"



static PyObject *PyCThostFtdcQryRiskSettleInvstPositionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryRiskSettleInvstPositionField *self = (PyCThostFtdcQryRiskSettleInvstPositionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryRiskSettleInvstPositionField_init(PyCThostFtdcQryRiskSettleInvstPositionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryRiskSettleInvstPositionField_BrokerID = NULL;
	Py_ssize_t pQryRiskSettleInvstPositionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryRiskSettleInvstPositionField_InvestorID = NULL;
	Py_ssize_t pQryRiskSettleInvstPositionField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryRiskSettleInvstPositionField_InstrumentID = NULL;
	Py_ssize_t pQryRiskSettleInvstPositionField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryRiskSettleInvstPositionField_BrokerID, &pQryRiskSettleInvstPositionField_BrokerID_len
		, &pQryRiskSettleInvstPositionField_InvestorID, &pQryRiskSettleInvstPositionField_InvestorID_len
		, &pQryRiskSettleInvstPositionField_InstrumentID, &pQryRiskSettleInvstPositionField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryRiskSettleInvstPositionField_BrokerID != NULL) {
		if(pQryRiskSettleInvstPositionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryRiskSettleInvstPositionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryRiskSettleInvstPositionField_BrokerID, sizeof(self->data.BrokerID) );
		pQryRiskSettleInvstPositionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryRiskSettleInvstPositionField_InvestorID != NULL) {
		if(pQryRiskSettleInvstPositionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryRiskSettleInvstPositionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryRiskSettleInvstPositionField_InvestorID, sizeof(self->data.InvestorID) );
		pQryRiskSettleInvstPositionField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryRiskSettleInvstPositionField_InstrumentID != NULL) {
		if(pQryRiskSettleInvstPositionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryRiskSettleInvstPositionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryRiskSettleInvstPositionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryRiskSettleInvstPositionField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryRiskSettleInvstPositionField_dealloc(PyCThostFtdcQryRiskSettleInvstPositionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryRiskSettleInvstPositionField_repr(PyCThostFtdcQryRiskSettleInvstPositionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRiskSettleInvstPositionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryRiskSettleInvstPositionField_get_BrokerID(PyCThostFtdcQryRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryRiskSettleInvstPositionField_get_InvestorID(PyCThostFtdcQryRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryRiskSettleInvstPositionField_get_InstrumentID(PyCThostFtdcQryRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryRiskSettleInvstPositionField_set_BrokerID(PyCThostFtdcQryRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryRiskSettleInvstPositionField_set_InvestorID(PyCThostFtdcQryRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryRiskSettleInvstPositionField_set_InstrumentID(PyCThostFtdcQryRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryRiskSettleInvstPositionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryRiskSettleInvstPositionField_get_BrokerID, (setter)PyCThostFtdcQryRiskSettleInvstPositionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryRiskSettleInvstPositionField_get_InvestorID, (setter)PyCThostFtdcQryRiskSettleInvstPositionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryRiskSettleInvstPositionField_get_InstrumentID, (setter)PyCThostFtdcQryRiskSettleInvstPositionField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryRiskSettleInvstPositionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryRiskSettleInvstPositionField",	/* tp_name */
	sizeof(PyCThostFtdcQryRiskSettleInvstPositionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryRiskSettleInvstPositionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryRiskSettleInvstPositionField_repr,   /* tp_repr */
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
	"CThostFtdcQryRiskSettleInvstPositionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryRiskSettleInvstPositionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryRiskSettleInvstPositionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryRiskSettleInvstPositionField_new,       /* tp_new */
};

int PyCThostFtdcQryRiskSettleInvstPositionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryRiskSettleInvstPositionField  */
	if (PyType_Ready(&PyCThostFtdcQryRiskSettleInvstPositionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryRiskSettleInvstPositionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryRiskSettleInvstPositionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryRiskSettleInvstPositionField", (PyObject *)&PyCThostFtdcQryRiskSettleInvstPositionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRiskSettleInvstPositionField to module");
        Py_DECREF(&PyCThostFtdcQryRiskSettleInvstPositionFieldType);
		return -1;
    }

    return 0;
}
