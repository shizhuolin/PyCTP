
#include "PyCThostFtdcInstrumentStatusField.h"



static PyObject *PyCThostFtdcInstrumentStatusField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentStatusField *self = (PyCThostFtdcInstrumentStatusField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentStatusField_init(PyCThostFtdcInstrumentStatusField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "reserve1", "SettlementGroupID", "reserve2", "InstrumentStatus", "TradingSegmentSN", "EnterTime", "EnterReason", "ExchangeInstID", "InstrumentID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pInstrumentStatusField_ExchangeID = NULL;
	Py_ssize_t pInstrumentStatusField_ExchangeID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pInstrumentStatusField_reserve1 = NULL;
	Py_ssize_t pInstrumentStatusField_reserve1_len = 0;

	//TThostFtdcSettlementGroupIDType char[9]
	const char *pInstrumentStatusField_SettlementGroupID = NULL;
	Py_ssize_t pInstrumentStatusField_SettlementGroupID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInstrumentStatusField_reserve2 = NULL;
	Py_ssize_t pInstrumentStatusField_reserve2_len = 0;

	//TThostFtdcInstrumentStatusType char
	char pInstrumentStatusField_InstrumentStatus = 0;

	//TThostFtdcTradingSegmentSNType int
	int pInstrumentStatusField_TradingSegmentSN = 0;

	//TThostFtdcTimeType char[9]
	const char *pInstrumentStatusField_EnterTime = NULL;
	Py_ssize_t pInstrumentStatusField_EnterTime_len = 0;

	//TThostFtdcInstStatusEnterReasonType char
	char pInstrumentStatusField_EnterReason = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pInstrumentStatusField_ExchangeInstID = NULL;
	Py_ssize_t pInstrumentStatusField_ExchangeInstID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInstrumentStatusField_InstrumentID = NULL;
	Py_ssize_t pInstrumentStatusField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ciy#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#cis#cs#s#", (char **)kwlist
#endif

		, &pInstrumentStatusField_ExchangeID, &pInstrumentStatusField_ExchangeID_len
		, &pInstrumentStatusField_reserve1, &pInstrumentStatusField_reserve1_len
		, &pInstrumentStatusField_SettlementGroupID, &pInstrumentStatusField_SettlementGroupID_len
		, &pInstrumentStatusField_reserve2, &pInstrumentStatusField_reserve2_len
		, &pInstrumentStatusField_InstrumentStatus
		, &pInstrumentStatusField_TradingSegmentSN
		, &pInstrumentStatusField_EnterTime, &pInstrumentStatusField_EnterTime_len
		, &pInstrumentStatusField_EnterReason
		, &pInstrumentStatusField_ExchangeInstID, &pInstrumentStatusField_ExchangeInstID_len
		, &pInstrumentStatusField_InstrumentID, &pInstrumentStatusField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pInstrumentStatusField_ExchangeID != NULL) {
		if(pInstrumentStatusField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInstrumentStatusField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInstrumentStatusField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInstrumentStatusField_ExchangeID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pInstrumentStatusField_reserve1 != NULL) {
		if(pInstrumentStatusField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInstrumentStatusField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInstrumentStatusField_reserve1, sizeof(self->data.reserve1) );
		pInstrumentStatusField_reserve1 = NULL;
	}

	//TThostFtdcSettlementGroupIDType char[9]
	if(pInstrumentStatusField_SettlementGroupID != NULL) {
		if(pInstrumentStatusField_SettlementGroupID_len > (Py_ssize_t)sizeof(self->data.SettlementGroupID)) {
			PyErr_Format(PyExc_ValueError, "SettlementGroupID too long: length=%zd (max allowed is %zd)", pInstrumentStatusField_SettlementGroupID_len, (Py_ssize_t)sizeof(self->data.SettlementGroupID));
			return -1;
		}
		strncpy(self->data.SettlementGroupID, pInstrumentStatusField_SettlementGroupID, sizeof(self->data.SettlementGroupID) );
		pInstrumentStatusField_SettlementGroupID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInstrumentStatusField_reserve2 != NULL) {
		if(pInstrumentStatusField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInstrumentStatusField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInstrumentStatusField_reserve2, sizeof(self->data.reserve2) );
		pInstrumentStatusField_reserve2 = NULL;
	}

	//TThostFtdcInstrumentStatusType char
	self->data.InstrumentStatus = pInstrumentStatusField_InstrumentStatus;

	//TThostFtdcTradingSegmentSNType int
	self->data.TradingSegmentSN = pInstrumentStatusField_TradingSegmentSN;

	//TThostFtdcTimeType char[9]
	if(pInstrumentStatusField_EnterTime != NULL) {
		if(pInstrumentStatusField_EnterTime_len > (Py_ssize_t)sizeof(self->data.EnterTime)) {
			PyErr_Format(PyExc_ValueError, "EnterTime too long: length=%zd (max allowed is %zd)", pInstrumentStatusField_EnterTime_len, (Py_ssize_t)sizeof(self->data.EnterTime));
			return -1;
		}
		strncpy(self->data.EnterTime, pInstrumentStatusField_EnterTime, sizeof(self->data.EnterTime) );
		pInstrumentStatusField_EnterTime = NULL;
	}

	//TThostFtdcInstStatusEnterReasonType char
	self->data.EnterReason = pInstrumentStatusField_EnterReason;

	//TThostFtdcExchangeInstIDType char[81]
	if(pInstrumentStatusField_ExchangeInstID != NULL) {
		if(pInstrumentStatusField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pInstrumentStatusField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pInstrumentStatusField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pInstrumentStatusField_ExchangeInstID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInstrumentStatusField_InstrumentID != NULL) {
		if(pInstrumentStatusField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInstrumentStatusField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInstrumentStatusField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInstrumentStatusField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInstrumentStatusField_dealloc(PyCThostFtdcInstrumentStatusField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentStatusField_repr(PyCThostFtdcInstrumentStatusField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:i,s:s,s:c,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "reserve1", self->data.reserve1 
		, "SettlementGroupID", self->data.SettlementGroupID 
		, "reserve2", self->data.reserve2 
		, "InstrumentStatus", self->data.InstrumentStatus
		, "TradingSegmentSN", self->data.TradingSegmentSN
		, "EnterTime", self->data.EnterTime 
		, "EnterReason", self->data.EnterReason
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentStatusField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInstrumentStatusField_get_ExchangeID(PyCThostFtdcInstrumentStatusField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInstrumentStatusField_get_reserve1(PyCThostFtdcInstrumentStatusField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInstrumentStatusField_get_SettlementGroupID(PyCThostFtdcInstrumentStatusField *self, void *closure) {
	return PyBytes_FromString(self->data.SettlementGroupID);
}

static PyObject *PyCThostFtdcInstrumentStatusField_get_reserve2(PyCThostFtdcInstrumentStatusField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInstrumentStatusField_get_InstrumentStatus(PyCThostFtdcInstrumentStatusField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InstrumentStatus), 1);
}

static PyObject *PyCThostFtdcInstrumentStatusField_get_TradingSegmentSN(PyCThostFtdcInstrumentStatusField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TradingSegmentSN);
#else 
	return PyInt_FromLong(self->data.TradingSegmentSN);
#endif 
}

static PyObject *PyCThostFtdcInstrumentStatusField_get_EnterTime(PyCThostFtdcInstrumentStatusField *self, void *closure) {
	return PyBytes_FromString(self->data.EnterTime);
}

static PyObject *PyCThostFtdcInstrumentStatusField_get_EnterReason(PyCThostFtdcInstrumentStatusField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.EnterReason), 1);
}

static PyObject *PyCThostFtdcInstrumentStatusField_get_ExchangeInstID(PyCThostFtdcInstrumentStatusField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcInstrumentStatusField_get_InstrumentID(PyCThostFtdcInstrumentStatusField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcInstrumentStatusField_set_ExchangeID(PyCThostFtdcInstrumentStatusField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentStatusField_set_reserve1(PyCThostFtdcInstrumentStatusField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentStatusField_set_SettlementGroupID(PyCThostFtdcInstrumentStatusField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SettlementGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SettlementGroupID)) {
		PyErr_SetString(PyExc_ValueError, "SettlementGroupID must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.SettlementGroupID, buf, sizeof(self->data.SettlementGroupID));
	return 0;
}

static int PyCThostFtdcInstrumentStatusField_set_reserve2(PyCThostFtdcInstrumentStatusField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcInstrumentStatusField_set_InstrumentStatus(PyCThostFtdcInstrumentStatusField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentStatus)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentStatus must be less than 1 bytes");
		return -1;
	}
	self->data.InstrumentStatus = *buf;
	return 0;
}

static int PyCThostFtdcInstrumentStatusField_set_TradingSegmentSN(PyCThostFtdcInstrumentStatusField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingSegmentSN Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "TradingSegmentSN Expected int"); 
#endif 
        return -1;
    }
#if PY_MAJOR_VERSION >= 3 
    const long buf = PyLong_AsLong(val); 
#else 
    const long buf = PyInt_AsLong(val); 
#endif 
    if (buf == -1 && PyErr_Occurred()) { 
        return -1; 
    } 
    if (buf < INT_MIN || buf > INT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.TradingSegmentSN = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInstrumentStatusField_set_EnterTime(PyCThostFtdcInstrumentStatusField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "EnterTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.EnterTime)) {
		PyErr_SetString(PyExc_ValueError, "EnterTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.EnterTime, buf, sizeof(self->data.EnterTime));
	return 0;
}

static int PyCThostFtdcInstrumentStatusField_set_EnterReason(PyCThostFtdcInstrumentStatusField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "EnterReason Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.EnterReason)) {
		PyErr_SetString(PyExc_ValueError, "EnterReason must be less than 1 bytes");
		return -1;
	}
	self->data.EnterReason = *buf;
	return 0;
}

static int PyCThostFtdcInstrumentStatusField_set_ExchangeInstID(PyCThostFtdcInstrumentStatusField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
	return 0;
}

static int PyCThostFtdcInstrumentStatusField_set_InstrumentID(PyCThostFtdcInstrumentStatusField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInstrumentStatusField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInstrumentStatusField_get_ExchangeID, (setter)PyCThostFtdcInstrumentStatusField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInstrumentStatusField_get_reserve1, (setter)PyCThostFtdcInstrumentStatusField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"SettlementGroupID", (getter)PyCThostFtdcInstrumentStatusField_get_SettlementGroupID, (setter)PyCThostFtdcInstrumentStatusField_set_SettlementGroupID, (char *)"SettlementGroupID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInstrumentStatusField_get_reserve2, (setter)PyCThostFtdcInstrumentStatusField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"InstrumentStatus", (getter)PyCThostFtdcInstrumentStatusField_get_InstrumentStatus, (setter)PyCThostFtdcInstrumentStatusField_set_InstrumentStatus, (char *)"InstrumentStatus", NULL},
	 {(char *)"TradingSegmentSN", (getter)PyCThostFtdcInstrumentStatusField_get_TradingSegmentSN, (setter)PyCThostFtdcInstrumentStatusField_set_TradingSegmentSN, (char *)"TradingSegmentSN", NULL},
	 {(char *)"EnterTime", (getter)PyCThostFtdcInstrumentStatusField_get_EnterTime, (setter)PyCThostFtdcInstrumentStatusField_set_EnterTime, (char *)"EnterTime", NULL},
	 {(char *)"EnterReason", (getter)PyCThostFtdcInstrumentStatusField_get_EnterReason, (setter)PyCThostFtdcInstrumentStatusField_set_EnterReason, (char *)"EnterReason", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcInstrumentStatusField_get_ExchangeInstID, (setter)PyCThostFtdcInstrumentStatusField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentStatusField_get_InstrumentID, (setter)PyCThostFtdcInstrumentStatusField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentStatusFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentStatusField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentStatusField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentStatusField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentStatusField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentStatusField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentStatusField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentStatusField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentStatusField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentStatusFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentStatusField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentStatusFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentStatusField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentStatusFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentStatusField", (PyObject *)&PyCThostFtdcInstrumentStatusFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentStatusField to module");
        Py_DECREF(&PyCThostFtdcInstrumentStatusFieldType);
		return -1;
    }

    return 0;
}
