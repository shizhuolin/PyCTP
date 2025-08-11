
#include "PyCThostFtdcInstrumentTradingRightField.h"



static PyObject *PyCThostFtdcInstrumentTradingRightField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentTradingRightField *self = (PyCThostFtdcInstrumentTradingRightField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentTradingRightField_init(PyCThostFtdcInstrumentTradingRightField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "TradingRight", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInstrumentTradingRightField_reserve1 = NULL;
	Py_ssize_t pInstrumentTradingRightField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pInstrumentTradingRightField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInstrumentTradingRightField_BrokerID = NULL;
	Py_ssize_t pInstrumentTradingRightField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInstrumentTradingRightField_InvestorID = NULL;
	Py_ssize_t pInstrumentTradingRightField_InvestorID_len = 0;

	//TThostFtdcTradingRightType char
	char pInstrumentTradingRightField_TradingRight = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInstrumentTradingRightField_InstrumentID = NULL;
	Py_ssize_t pInstrumentTradingRightField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cs#", (char **)kwlist
#endif

		, &pInstrumentTradingRightField_reserve1, &pInstrumentTradingRightField_reserve1_len
		, &pInstrumentTradingRightField_InvestorRange
		, &pInstrumentTradingRightField_BrokerID, &pInstrumentTradingRightField_BrokerID_len
		, &pInstrumentTradingRightField_InvestorID, &pInstrumentTradingRightField_InvestorID_len
		, &pInstrumentTradingRightField_TradingRight
		, &pInstrumentTradingRightField_InstrumentID, &pInstrumentTradingRightField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInstrumentTradingRightField_reserve1 != NULL) {
		if(pInstrumentTradingRightField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInstrumentTradingRightField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInstrumentTradingRightField_reserve1, sizeof(self->data.reserve1) );
		pInstrumentTradingRightField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pInstrumentTradingRightField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pInstrumentTradingRightField_BrokerID != NULL) {
		if(pInstrumentTradingRightField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInstrumentTradingRightField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInstrumentTradingRightField_BrokerID, sizeof(self->data.BrokerID) );
		pInstrumentTradingRightField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInstrumentTradingRightField_InvestorID != NULL) {
		if(pInstrumentTradingRightField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInstrumentTradingRightField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInstrumentTradingRightField_InvestorID, sizeof(self->data.InvestorID) );
		pInstrumentTradingRightField_InvestorID = NULL;
	}

	//TThostFtdcTradingRightType char
	self->data.TradingRight = pInstrumentTradingRightField_TradingRight;

	//TThostFtdcInstrumentIDType char[81]
	if(pInstrumentTradingRightField_InstrumentID != NULL) {
		if(pInstrumentTradingRightField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInstrumentTradingRightField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInstrumentTradingRightField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInstrumentTradingRightField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInstrumentTradingRightField_dealloc(PyCThostFtdcInstrumentTradingRightField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentTradingRightField_repr(PyCThostFtdcInstrumentTradingRightField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "TradingRight", self->data.TradingRight
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentTradingRightField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInstrumentTradingRightField_get_reserve1(PyCThostFtdcInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInstrumentTradingRightField_get_InvestorRange(PyCThostFtdcInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcInstrumentTradingRightField_get_BrokerID(PyCThostFtdcInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInstrumentTradingRightField_get_InvestorID(PyCThostFtdcInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInstrumentTradingRightField_get_TradingRight(PyCThostFtdcInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradingRight), 1);
}

static PyObject *PyCThostFtdcInstrumentTradingRightField_get_InstrumentID(PyCThostFtdcInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcInstrumentTradingRightField_set_reserve1(PyCThostFtdcInstrumentTradingRightField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentTradingRightField_set_InvestorRange(PyCThostFtdcInstrumentTradingRightField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentTradingRightField_set_BrokerID(PyCThostFtdcInstrumentTradingRightField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentTradingRightField_set_InvestorID(PyCThostFtdcInstrumentTradingRightField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentTradingRightField_set_TradingRight(PyCThostFtdcInstrumentTradingRightField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingRight Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingRight)) {
		PyErr_SetString(PyExc_ValueError, "TradingRight must be less than 1 bytes");
		return -1;
	}
	self->data.TradingRight = *buf;
	return 0;
}

static int PyCThostFtdcInstrumentTradingRightField_set_InstrumentID(PyCThostFtdcInstrumentTradingRightField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInstrumentTradingRightField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcInstrumentTradingRightField_get_reserve1, (setter)PyCThostFtdcInstrumentTradingRightField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcInstrumentTradingRightField_get_InvestorRange, (setter)PyCThostFtdcInstrumentTradingRightField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInstrumentTradingRightField_get_BrokerID, (setter)PyCThostFtdcInstrumentTradingRightField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInstrumentTradingRightField_get_InvestorID, (setter)PyCThostFtdcInstrumentTradingRightField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"TradingRight", (getter)PyCThostFtdcInstrumentTradingRightField_get_TradingRight, (setter)PyCThostFtdcInstrumentTradingRightField_set_TradingRight, (char *)"TradingRight", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentTradingRightField_get_InstrumentID, (setter)PyCThostFtdcInstrumentTradingRightField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentTradingRightFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentTradingRightField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentTradingRightField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentTradingRightField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentTradingRightField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentTradingRightField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentTradingRightField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentTradingRightField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentTradingRightField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentTradingRightFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentTradingRightField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentTradingRightFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentTradingRightField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentTradingRightFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentTradingRightField", (PyObject *)&PyCThostFtdcInstrumentTradingRightFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentTradingRightField to module");
        Py_DECREF(&PyCThostFtdcInstrumentTradingRightFieldType);
		return -1;
    }

    return 0;
}
