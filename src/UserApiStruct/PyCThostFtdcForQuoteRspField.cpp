
#include "PyCThostFtdcForQuoteRspField.h"



static PyObject *PyCThostFtdcForQuoteRspField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcForQuoteRspField *self = (PyCThostFtdcForQuoteRspField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcForQuoteRspField_init(PyCThostFtdcForQuoteRspField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "reserve1", "ForQuoteSysID", "ForQuoteTime", "ActionDay", "ExchangeID", "InstrumentID",  NULL};

	//TThostFtdcDateType char[9]
	const char *pForQuoteRspField_TradingDay = NULL;
	Py_ssize_t pForQuoteRspField_TradingDay_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pForQuoteRspField_reserve1 = NULL;
	Py_ssize_t pForQuoteRspField_reserve1_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pForQuoteRspField_ForQuoteSysID = NULL;
	Py_ssize_t pForQuoteRspField_ForQuoteSysID_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pForQuoteRspField_ForQuoteTime = NULL;
	Py_ssize_t pForQuoteRspField_ForQuoteTime_len = 0;

	//TThostFtdcDateType char[9]
	const char *pForQuoteRspField_ActionDay = NULL;
	Py_ssize_t pForQuoteRspField_ActionDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pForQuoteRspField_ExchangeID = NULL;
	Py_ssize_t pForQuoteRspField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pForQuoteRspField_InstrumentID = NULL;
	Py_ssize_t pForQuoteRspField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pForQuoteRspField_TradingDay, &pForQuoteRspField_TradingDay_len
		, &pForQuoteRspField_reserve1, &pForQuoteRspField_reserve1_len
		, &pForQuoteRspField_ForQuoteSysID, &pForQuoteRspField_ForQuoteSysID_len
		, &pForQuoteRspField_ForQuoteTime, &pForQuoteRspField_ForQuoteTime_len
		, &pForQuoteRspField_ActionDay, &pForQuoteRspField_ActionDay_len
		, &pForQuoteRspField_ExchangeID, &pForQuoteRspField_ExchangeID_len
		, &pForQuoteRspField_InstrumentID, &pForQuoteRspField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pForQuoteRspField_TradingDay != NULL) {
		if(pForQuoteRspField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pForQuoteRspField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pForQuoteRspField_TradingDay, sizeof(self->data.TradingDay) );
		pForQuoteRspField_TradingDay = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pForQuoteRspField_reserve1 != NULL) {
		if(pForQuoteRspField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pForQuoteRspField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pForQuoteRspField_reserve1, sizeof(self->data.reserve1) );
		pForQuoteRspField_reserve1 = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pForQuoteRspField_ForQuoteSysID != NULL) {
		if(pForQuoteRspField_ForQuoteSysID_len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
			PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is %zd)", pForQuoteRspField_ForQuoteSysID_len, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
			return -1;
		}
		strncpy(self->data.ForQuoteSysID, pForQuoteRspField_ForQuoteSysID, sizeof(self->data.ForQuoteSysID) );
		pForQuoteRspField_ForQuoteSysID = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pForQuoteRspField_ForQuoteTime != NULL) {
		if(pForQuoteRspField_ForQuoteTime_len > (Py_ssize_t)sizeof(self->data.ForQuoteTime)) {
			PyErr_Format(PyExc_ValueError, "ForQuoteTime too long: length=%zd (max allowed is %zd)", pForQuoteRspField_ForQuoteTime_len, (Py_ssize_t)sizeof(self->data.ForQuoteTime));
			return -1;
		}
		strncpy(self->data.ForQuoteTime, pForQuoteRspField_ForQuoteTime, sizeof(self->data.ForQuoteTime) );
		pForQuoteRspField_ForQuoteTime = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pForQuoteRspField_ActionDay != NULL) {
		if(pForQuoteRspField_ActionDay_len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
			PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is %zd)", pForQuoteRspField_ActionDay_len, (Py_ssize_t)sizeof(self->data.ActionDay));
			return -1;
		}
		strncpy(self->data.ActionDay, pForQuoteRspField_ActionDay, sizeof(self->data.ActionDay) );
		pForQuoteRspField_ActionDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pForQuoteRspField_ExchangeID != NULL) {
		if(pForQuoteRspField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pForQuoteRspField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pForQuoteRspField_ExchangeID, sizeof(self->data.ExchangeID) );
		pForQuoteRspField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pForQuoteRspField_InstrumentID != NULL) {
		if(pForQuoteRspField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pForQuoteRspField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pForQuoteRspField_InstrumentID, sizeof(self->data.InstrumentID) );
		pForQuoteRspField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcForQuoteRspField_dealloc(PyCThostFtdcForQuoteRspField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcForQuoteRspField_repr(PyCThostFtdcForQuoteRspField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "reserve1", self->data.reserve1 
		, "ForQuoteSysID", self->data.ForQuoteSysID 
		, "ForQuoteTime", self->data.ForQuoteTime 
		, "ActionDay", self->data.ActionDay 
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForQuoteRspField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcForQuoteRspField_get_TradingDay(PyCThostFtdcForQuoteRspField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcForQuoteRspField_get_reserve1(PyCThostFtdcForQuoteRspField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcForQuoteRspField_get_ForQuoteSysID(PyCThostFtdcForQuoteRspField *self, void *closure) {
	return PyBytes_FromString(self->data.ForQuoteSysID);
}

static PyObject *PyCThostFtdcForQuoteRspField_get_ForQuoteTime(PyCThostFtdcForQuoteRspField *self, void *closure) {
	return PyBytes_FromString(self->data.ForQuoteTime);
}

static PyObject *PyCThostFtdcForQuoteRspField_get_ActionDay(PyCThostFtdcForQuoteRspField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDay);
}

static PyObject *PyCThostFtdcForQuoteRspField_get_ExchangeID(PyCThostFtdcForQuoteRspField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcForQuoteRspField_get_InstrumentID(PyCThostFtdcForQuoteRspField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcForQuoteRspField_set_TradingDay(PyCThostFtdcForQuoteRspField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
		PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
	return 0;
}

static int PyCThostFtdcForQuoteRspField_set_reserve1(PyCThostFtdcForQuoteRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteRspField_set_ForQuoteSysID(PyCThostFtdcForQuoteRspField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ForQuoteSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
		PyErr_SetString(PyExc_ValueError, "ForQuoteSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ForQuoteSysID, buf, sizeof(self->data.ForQuoteSysID));
	return 0;
}

static int PyCThostFtdcForQuoteRspField_set_ForQuoteTime(PyCThostFtdcForQuoteRspField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ForQuoteTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ForQuoteTime)) {
		PyErr_SetString(PyExc_ValueError, "ForQuoteTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ForQuoteTime, buf, sizeof(self->data.ForQuoteTime));
	return 0;
}

static int PyCThostFtdcForQuoteRspField_set_ActionDay(PyCThostFtdcForQuoteRspField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
		PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ActionDay, buf, sizeof(self->data.ActionDay));
	return 0;
}

static int PyCThostFtdcForQuoteRspField_set_ExchangeID(PyCThostFtdcForQuoteRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteRspField_set_InstrumentID(PyCThostFtdcForQuoteRspField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcForQuoteRspField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcForQuoteRspField_get_TradingDay, (setter)PyCThostFtdcForQuoteRspField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcForQuoteRspField_get_reserve1, (setter)PyCThostFtdcForQuoteRspField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ForQuoteSysID", (getter)PyCThostFtdcForQuoteRspField_get_ForQuoteSysID, (setter)PyCThostFtdcForQuoteRspField_set_ForQuoteSysID, (char *)"ForQuoteSysID", NULL},
	 {(char *)"ForQuoteTime", (getter)PyCThostFtdcForQuoteRspField_get_ForQuoteTime, (setter)PyCThostFtdcForQuoteRspField_set_ForQuoteTime, (char *)"ForQuoteTime", NULL},
	 {(char *)"ActionDay", (getter)PyCThostFtdcForQuoteRspField_get_ActionDay, (setter)PyCThostFtdcForQuoteRspField_set_ActionDay, (char *)"ActionDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcForQuoteRspField_get_ExchangeID, (setter)PyCThostFtdcForQuoteRspField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcForQuoteRspField_get_InstrumentID, (setter)PyCThostFtdcForQuoteRspField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcForQuoteRspFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcForQuoteRspField",	/* tp_name */
	sizeof(PyCThostFtdcForQuoteRspField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcForQuoteRspField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcForQuoteRspField_repr,   /* tp_repr */
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
	"CThostFtdcForQuoteRspField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcForQuoteRspField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcForQuoteRspField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcForQuoteRspField_new,       /* tp_new */
};

int PyCThostFtdcForQuoteRspFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcForQuoteRspField  */
	if (PyType_Ready(&PyCThostFtdcForQuoteRspFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcForQuoteRspField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcForQuoteRspFieldType);
    if( PyModule_AddObject(module, "CThostFtdcForQuoteRspField", (PyObject *)&PyCThostFtdcForQuoteRspFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcForQuoteRspField to module");
        Py_DECREF(&PyCThostFtdcForQuoteRspFieldType);
		return -1;
    }

    return 0;
}
