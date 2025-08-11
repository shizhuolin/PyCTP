
#include "PyCThostFtdcBrokerTradingAlgosField.h"



static PyObject *PyCThostFtdcBrokerTradingAlgosField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerTradingAlgosField *self = (PyCThostFtdcBrokerTradingAlgosField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerTradingAlgosField_init(PyCThostFtdcBrokerTradingAlgosField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "ExchangeID", "reserve1", "HandlePositionAlgoID", "FindMarginRateAlgoID", "HandleTradingAccountAlgoID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pBrokerTradingAlgosField_BrokerID = NULL;
	Py_ssize_t pBrokerTradingAlgosField_BrokerID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pBrokerTradingAlgosField_ExchangeID = NULL;
	Py_ssize_t pBrokerTradingAlgosField_ExchangeID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pBrokerTradingAlgosField_reserve1 = NULL;
	Py_ssize_t pBrokerTradingAlgosField_reserve1_len = 0;

	//TThostFtdcHandlePositionAlgoIDType char
	char pBrokerTradingAlgosField_HandlePositionAlgoID = 0;

	//TThostFtdcFindMarginRateAlgoIDType char
	char pBrokerTradingAlgosField_FindMarginRateAlgoID = 0;

	//TThostFtdcHandleTradingAccountAlgoIDType char
	char pBrokerTradingAlgosField_HandleTradingAccountAlgoID = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pBrokerTradingAlgosField_InstrumentID = NULL;
	Py_ssize_t pBrokerTradingAlgosField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cccy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cccs#", (char **)kwlist
#endif

		, &pBrokerTradingAlgosField_BrokerID, &pBrokerTradingAlgosField_BrokerID_len
		, &pBrokerTradingAlgosField_ExchangeID, &pBrokerTradingAlgosField_ExchangeID_len
		, &pBrokerTradingAlgosField_reserve1, &pBrokerTradingAlgosField_reserve1_len
		, &pBrokerTradingAlgosField_HandlePositionAlgoID
		, &pBrokerTradingAlgosField_FindMarginRateAlgoID
		, &pBrokerTradingAlgosField_HandleTradingAccountAlgoID
		, &pBrokerTradingAlgosField_InstrumentID, &pBrokerTradingAlgosField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pBrokerTradingAlgosField_BrokerID != NULL) {
		if(pBrokerTradingAlgosField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pBrokerTradingAlgosField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pBrokerTradingAlgosField_BrokerID, sizeof(self->data.BrokerID) );
		pBrokerTradingAlgosField_BrokerID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pBrokerTradingAlgosField_ExchangeID != NULL) {
		if(pBrokerTradingAlgosField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pBrokerTradingAlgosField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pBrokerTradingAlgosField_ExchangeID, sizeof(self->data.ExchangeID) );
		pBrokerTradingAlgosField_ExchangeID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pBrokerTradingAlgosField_reserve1 != NULL) {
		if(pBrokerTradingAlgosField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pBrokerTradingAlgosField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pBrokerTradingAlgosField_reserve1, sizeof(self->data.reserve1) );
		pBrokerTradingAlgosField_reserve1 = NULL;
	}

	//TThostFtdcHandlePositionAlgoIDType char
	self->data.HandlePositionAlgoID = pBrokerTradingAlgosField_HandlePositionAlgoID;

	//TThostFtdcFindMarginRateAlgoIDType char
	self->data.FindMarginRateAlgoID = pBrokerTradingAlgosField_FindMarginRateAlgoID;

	//TThostFtdcHandleTradingAccountAlgoIDType char
	self->data.HandleTradingAccountAlgoID = pBrokerTradingAlgosField_HandleTradingAccountAlgoID;

	//TThostFtdcInstrumentIDType char[81]
	if(pBrokerTradingAlgosField_InstrumentID != NULL) {
		if(pBrokerTradingAlgosField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pBrokerTradingAlgosField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pBrokerTradingAlgosField_InstrumentID, sizeof(self->data.InstrumentID) );
		pBrokerTradingAlgosField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcBrokerTradingAlgosField_dealloc(PyCThostFtdcBrokerTradingAlgosField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerTradingAlgosField_repr(PyCThostFtdcBrokerTradingAlgosField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:c,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "ExchangeID", self->data.ExchangeID 
		, "reserve1", self->data.reserve1 
		, "HandlePositionAlgoID", self->data.HandlePositionAlgoID
		, "FindMarginRateAlgoID", self->data.FindMarginRateAlgoID
		, "HandleTradingAccountAlgoID", self->data.HandleTradingAccountAlgoID
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerTradingAlgosField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_BrokerID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_ExchangeID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_reserve1(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_HandlePositionAlgoID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HandlePositionAlgoID), 1);
}

static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_FindMarginRateAlgoID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.FindMarginRateAlgoID), 1);
}

static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_HandleTradingAccountAlgoID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HandleTradingAccountAlgoID), 1);
}

static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_InstrumentID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcBrokerTradingAlgosField_set_BrokerID(PyCThostFtdcBrokerTradingAlgosField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerTradingAlgosField_set_ExchangeID(PyCThostFtdcBrokerTradingAlgosField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerTradingAlgosField_set_reserve1(PyCThostFtdcBrokerTradingAlgosField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerTradingAlgosField_set_HandlePositionAlgoID(PyCThostFtdcBrokerTradingAlgosField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "HandlePositionAlgoID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.HandlePositionAlgoID)) {
		PyErr_SetString(PyExc_ValueError, "HandlePositionAlgoID must be less than 1 bytes");
		return -1;
	}
	self->data.HandlePositionAlgoID = *buf;
	return 0;
}

static int PyCThostFtdcBrokerTradingAlgosField_set_FindMarginRateAlgoID(PyCThostFtdcBrokerTradingAlgosField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FindMarginRateAlgoID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FindMarginRateAlgoID)) {
		PyErr_SetString(PyExc_ValueError, "FindMarginRateAlgoID must be less than 1 bytes");
		return -1;
	}
	self->data.FindMarginRateAlgoID = *buf;
	return 0;
}

static int PyCThostFtdcBrokerTradingAlgosField_set_HandleTradingAccountAlgoID(PyCThostFtdcBrokerTradingAlgosField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "HandleTradingAccountAlgoID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.HandleTradingAccountAlgoID)) {
		PyErr_SetString(PyExc_ValueError, "HandleTradingAccountAlgoID must be less than 1 bytes");
		return -1;
	}
	self->data.HandleTradingAccountAlgoID = *buf;
	return 0;
}

static int PyCThostFtdcBrokerTradingAlgosField_set_InstrumentID(PyCThostFtdcBrokerTradingAlgosField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcBrokerTradingAlgosField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_BrokerID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_ExchangeID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcBrokerTradingAlgosField_get_reserve1, (setter)PyCThostFtdcBrokerTradingAlgosField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"HandlePositionAlgoID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_HandlePositionAlgoID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_HandlePositionAlgoID, (char *)"HandlePositionAlgoID", NULL},
	 {(char *)"FindMarginRateAlgoID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_FindMarginRateAlgoID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_FindMarginRateAlgoID, (char *)"FindMarginRateAlgoID", NULL},
	 {(char *)"HandleTradingAccountAlgoID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_HandleTradingAccountAlgoID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_HandleTradingAccountAlgoID, (char *)"HandleTradingAccountAlgoID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_InstrumentID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerTradingAlgosFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerTradingAlgosField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerTradingAlgosField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerTradingAlgosField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerTradingAlgosField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerTradingAlgosField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerTradingAlgosField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerTradingAlgosField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerTradingAlgosField_new,       /* tp_new */
};

int PyCThostFtdcBrokerTradingAlgosFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerTradingAlgosField  */
	if (PyType_Ready(&PyCThostFtdcBrokerTradingAlgosFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerTradingAlgosField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerTradingAlgosFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerTradingAlgosField", (PyObject *)&PyCThostFtdcBrokerTradingAlgosFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerTradingAlgosField to module");
        Py_DECREF(&PyCThostFtdcBrokerTradingAlgosFieldType);
		return -1;
    }

    return 0;
}
