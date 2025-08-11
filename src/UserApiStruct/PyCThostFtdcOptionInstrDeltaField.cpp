
#include "PyCThostFtdcOptionInstrDeltaField.h"



static PyObject *PyCThostFtdcOptionInstrDeltaField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionInstrDeltaField *self = (PyCThostFtdcOptionInstrDeltaField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcOptionInstrDeltaField_init(PyCThostFtdcOptionInstrDeltaField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "Delta", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pOptionInstrDeltaField_reserve1 = NULL;
	Py_ssize_t pOptionInstrDeltaField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pOptionInstrDeltaField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pOptionInstrDeltaField_BrokerID = NULL;
	Py_ssize_t pOptionInstrDeltaField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pOptionInstrDeltaField_InvestorID = NULL;
	Py_ssize_t pOptionInstrDeltaField_InvestorID_len = 0;

	//TThostFtdcRatioType double
	double pOptionInstrDeltaField_Delta = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pOptionInstrDeltaField_InstrumentID = NULL;
	Py_ssize_t pOptionInstrDeltaField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#dy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#ds#", (char **)kwlist
#endif

		, &pOptionInstrDeltaField_reserve1, &pOptionInstrDeltaField_reserve1_len
		, &pOptionInstrDeltaField_InvestorRange
		, &pOptionInstrDeltaField_BrokerID, &pOptionInstrDeltaField_BrokerID_len
		, &pOptionInstrDeltaField_InvestorID, &pOptionInstrDeltaField_InvestorID_len
		, &pOptionInstrDeltaField_Delta
		, &pOptionInstrDeltaField_InstrumentID, &pOptionInstrDeltaField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pOptionInstrDeltaField_reserve1 != NULL) {
		if(pOptionInstrDeltaField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pOptionInstrDeltaField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pOptionInstrDeltaField_reserve1, sizeof(self->data.reserve1) );
		pOptionInstrDeltaField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pOptionInstrDeltaField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pOptionInstrDeltaField_BrokerID != NULL) {
		if(pOptionInstrDeltaField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pOptionInstrDeltaField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pOptionInstrDeltaField_BrokerID, sizeof(self->data.BrokerID) );
		pOptionInstrDeltaField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pOptionInstrDeltaField_InvestorID != NULL) {
		if(pOptionInstrDeltaField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pOptionInstrDeltaField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pOptionInstrDeltaField_InvestorID, sizeof(self->data.InvestorID) );
		pOptionInstrDeltaField_InvestorID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.Delta = pOptionInstrDeltaField_Delta;
	//TThostFtdcInstrumentIDType char[81]
	if(pOptionInstrDeltaField_InstrumentID != NULL) {
		if(pOptionInstrDeltaField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pOptionInstrDeltaField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pOptionInstrDeltaField_InstrumentID, sizeof(self->data.InstrumentID) );
		pOptionInstrDeltaField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcOptionInstrDeltaField_dealloc(PyCThostFtdcOptionInstrDeltaField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionInstrDeltaField_repr(PyCThostFtdcOptionInstrDeltaField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "Delta", self->data.Delta
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrDeltaField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcOptionInstrDeltaField_get_reserve1(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcOptionInstrDeltaField_get_InvestorRange(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcOptionInstrDeltaField_get_BrokerID(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcOptionInstrDeltaField_get_InvestorID(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcOptionInstrDeltaField_get_Delta(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Delta);
}

static PyObject *PyCThostFtdcOptionInstrDeltaField_get_InstrumentID(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcOptionInstrDeltaField_set_reserve1(PyCThostFtdcOptionInstrDeltaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrDeltaField_set_InvestorRange(PyCThostFtdcOptionInstrDeltaField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
		PyErr_SetString(PyExc_ValueError, "InvestorRange must be less than 1 bytes");
		return -1;
	}
	self->data.InvestorRange = *buf;
	return 0;
}

static int PyCThostFtdcOptionInstrDeltaField_set_BrokerID(PyCThostFtdcOptionInstrDeltaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrDeltaField_set_InvestorID(PyCThostFtdcOptionInstrDeltaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrDeltaField_set_Delta(PyCThostFtdcOptionInstrDeltaField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Delta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Delta = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrDeltaField_set_InstrumentID(PyCThostFtdcOptionInstrDeltaField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcOptionInstrDeltaField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcOptionInstrDeltaField_get_reserve1, (setter)PyCThostFtdcOptionInstrDeltaField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcOptionInstrDeltaField_get_InvestorRange, (setter)PyCThostFtdcOptionInstrDeltaField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcOptionInstrDeltaField_get_BrokerID, (setter)PyCThostFtdcOptionInstrDeltaField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcOptionInstrDeltaField_get_InvestorID, (setter)PyCThostFtdcOptionInstrDeltaField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"Delta", (getter)PyCThostFtdcOptionInstrDeltaField_get_Delta, (setter)PyCThostFtdcOptionInstrDeltaField_set_Delta, (char *)"Delta", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcOptionInstrDeltaField_get_InstrumentID, (setter)PyCThostFtdcOptionInstrDeltaField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionInstrDeltaFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionInstrDeltaField",	/* tp_name */
	sizeof(PyCThostFtdcOptionInstrDeltaField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionInstrDeltaField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionInstrDeltaField_repr,   /* tp_repr */
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
	"CThostFtdcOptionInstrDeltaField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionInstrDeltaField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionInstrDeltaField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionInstrDeltaField_new,       /* tp_new */
};

int PyCThostFtdcOptionInstrDeltaFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionInstrDeltaField  */
	if (PyType_Ready(&PyCThostFtdcOptionInstrDeltaFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionInstrDeltaField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionInstrDeltaFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionInstrDeltaField", (PyObject *)&PyCThostFtdcOptionInstrDeltaFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrDeltaField to module");
        Py_DECREF(&PyCThostFtdcOptionInstrDeltaFieldType);
		return -1;
    }

    return 0;
}
