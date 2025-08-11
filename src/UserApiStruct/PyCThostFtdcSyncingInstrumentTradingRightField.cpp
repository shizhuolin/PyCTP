
#include "PyCThostFtdcSyncingInstrumentTradingRightField.h"



static PyObject *PyCThostFtdcSyncingInstrumentTradingRightField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingInstrumentTradingRightField *self = (PyCThostFtdcSyncingInstrumentTradingRightField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingInstrumentTradingRightField_init(PyCThostFtdcSyncingInstrumentTradingRightField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "TradingRight", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pSyncingInstrumentTradingRightField_reserve1 = NULL;
	Py_ssize_t pSyncingInstrumentTradingRightField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pSyncingInstrumentTradingRightField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncingInstrumentTradingRightField_BrokerID = NULL;
	Py_ssize_t pSyncingInstrumentTradingRightField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncingInstrumentTradingRightField_InvestorID = NULL;
	Py_ssize_t pSyncingInstrumentTradingRightField_InvestorID_len = 0;

	//TThostFtdcTradingRightType char
	char pSyncingInstrumentTradingRightField_TradingRight = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncingInstrumentTradingRightField_InstrumentID = NULL;
	Py_ssize_t pSyncingInstrumentTradingRightField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cs#", (char **)kwlist
#endif

		, &pSyncingInstrumentTradingRightField_reserve1, &pSyncingInstrumentTradingRightField_reserve1_len
		, &pSyncingInstrumentTradingRightField_InvestorRange
		, &pSyncingInstrumentTradingRightField_BrokerID, &pSyncingInstrumentTradingRightField_BrokerID_len
		, &pSyncingInstrumentTradingRightField_InvestorID, &pSyncingInstrumentTradingRightField_InvestorID_len
		, &pSyncingInstrumentTradingRightField_TradingRight
		, &pSyncingInstrumentTradingRightField_InstrumentID, &pSyncingInstrumentTradingRightField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pSyncingInstrumentTradingRightField_reserve1 != NULL) {
		if(pSyncingInstrumentTradingRightField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pSyncingInstrumentTradingRightField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pSyncingInstrumentTradingRightField_reserve1, sizeof(self->data.reserve1) );
		pSyncingInstrumentTradingRightField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pSyncingInstrumentTradingRightField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pSyncingInstrumentTradingRightField_BrokerID != NULL) {
		if(pSyncingInstrumentTradingRightField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncingInstrumentTradingRightField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncingInstrumentTradingRightField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncingInstrumentTradingRightField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncingInstrumentTradingRightField_InvestorID != NULL) {
		if(pSyncingInstrumentTradingRightField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncingInstrumentTradingRightField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncingInstrumentTradingRightField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncingInstrumentTradingRightField_InvestorID = NULL;
	}

	//TThostFtdcTradingRightType char
	self->data.TradingRight = pSyncingInstrumentTradingRightField_TradingRight;

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncingInstrumentTradingRightField_InstrumentID != NULL) {
		if(pSyncingInstrumentTradingRightField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncingInstrumentTradingRightField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncingInstrumentTradingRightField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncingInstrumentTradingRightField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcSyncingInstrumentTradingRightField_dealloc(PyCThostFtdcSyncingInstrumentTradingRightField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingInstrumentTradingRightField_repr(PyCThostFtdcSyncingInstrumentTradingRightField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInstrumentTradingRightField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncingInstrumentTradingRightField_get_reserve1(PyCThostFtdcSyncingInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcSyncingInstrumentTradingRightField_get_InvestorRange(PyCThostFtdcSyncingInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcSyncingInstrumentTradingRightField_get_BrokerID(PyCThostFtdcSyncingInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncingInstrumentTradingRightField_get_InvestorID(PyCThostFtdcSyncingInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncingInstrumentTradingRightField_get_TradingRight(PyCThostFtdcSyncingInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradingRight), 1);
}

static PyObject *PyCThostFtdcSyncingInstrumentTradingRightField_get_InstrumentID(PyCThostFtdcSyncingInstrumentTradingRightField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcSyncingInstrumentTradingRightField_set_reserve1(PyCThostFtdcSyncingInstrumentTradingRightField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentTradingRightField_set_InvestorRange(PyCThostFtdcSyncingInstrumentTradingRightField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentTradingRightField_set_BrokerID(PyCThostFtdcSyncingInstrumentTradingRightField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentTradingRightField_set_InvestorID(PyCThostFtdcSyncingInstrumentTradingRightField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentTradingRightField_set_TradingRight(PyCThostFtdcSyncingInstrumentTradingRightField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentTradingRightField_set_InstrumentID(PyCThostFtdcSyncingInstrumentTradingRightField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncingInstrumentTradingRightField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcSyncingInstrumentTradingRightField_get_reserve1, (setter)PyCThostFtdcSyncingInstrumentTradingRightField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcSyncingInstrumentTradingRightField_get_InvestorRange, (setter)PyCThostFtdcSyncingInstrumentTradingRightField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncingInstrumentTradingRightField_get_BrokerID, (setter)PyCThostFtdcSyncingInstrumentTradingRightField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncingInstrumentTradingRightField_get_InvestorID, (setter)PyCThostFtdcSyncingInstrumentTradingRightField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"TradingRight", (getter)PyCThostFtdcSyncingInstrumentTradingRightField_get_TradingRight, (setter)PyCThostFtdcSyncingInstrumentTradingRightField_set_TradingRight, (char *)"TradingRight", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncingInstrumentTradingRightField_get_InstrumentID, (setter)PyCThostFtdcSyncingInstrumentTradingRightField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingInstrumentTradingRightFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingInstrumentTradingRightField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingInstrumentTradingRightField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingInstrumentTradingRightField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingInstrumentTradingRightField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingInstrumentTradingRightField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingInstrumentTradingRightField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingInstrumentTradingRightField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingInstrumentTradingRightField_new,       /* tp_new */
};

int PyCThostFtdcSyncingInstrumentTradingRightFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingInstrumentTradingRightField  */
	if (PyType_Ready(&PyCThostFtdcSyncingInstrumentTradingRightFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingInstrumentTradingRightField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingInstrumentTradingRightFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingInstrumentTradingRightField", (PyObject *)&PyCThostFtdcSyncingInstrumentTradingRightFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInstrumentTradingRightField to module");
        Py_DECREF(&PyCThostFtdcSyncingInstrumentTradingRightFieldType);
		return -1;
    }

    return 0;
}
