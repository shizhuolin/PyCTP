
#include "PyCThostFtdcEWarrantOffsetField.h"



static PyObject *PyCThostFtdcEWarrantOffsetField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcEWarrantOffsetField *self = (PyCThostFtdcEWarrantOffsetField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcEWarrantOffsetField_init(PyCThostFtdcEWarrantOffsetField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "InvestorID", "ExchangeID", "reserve1", "Direction", "HedgeFlag", "Volume", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcTradeDateType char[9]
	const char *pEWarrantOffsetField_TradingDay = NULL;
	Py_ssize_t pEWarrantOffsetField_TradingDay_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pEWarrantOffsetField_BrokerID = NULL;
	Py_ssize_t pEWarrantOffsetField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pEWarrantOffsetField_InvestorID = NULL;
	Py_ssize_t pEWarrantOffsetField_InvestorID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pEWarrantOffsetField_ExchangeID = NULL;
	Py_ssize_t pEWarrantOffsetField_ExchangeID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pEWarrantOffsetField_reserve1 = NULL;
	Py_ssize_t pEWarrantOffsetField_reserve1_len = 0;

	//TThostFtdcDirectionType char
	char pEWarrantOffsetField_Direction = 0;

	//TThostFtdcHedgeFlagType char
	char pEWarrantOffsetField_HedgeFlag = 0;

	//TThostFtdcVolumeType int
	int pEWarrantOffsetField_Volume = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pEWarrantOffsetField_InvestUnitID = NULL;
	Py_ssize_t pEWarrantOffsetField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pEWarrantOffsetField_InstrumentID = NULL;
	Py_ssize_t pEWarrantOffsetField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#cciy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccis#s#", (char **)kwlist
#endif

		, &pEWarrantOffsetField_TradingDay, &pEWarrantOffsetField_TradingDay_len
		, &pEWarrantOffsetField_BrokerID, &pEWarrantOffsetField_BrokerID_len
		, &pEWarrantOffsetField_InvestorID, &pEWarrantOffsetField_InvestorID_len
		, &pEWarrantOffsetField_ExchangeID, &pEWarrantOffsetField_ExchangeID_len
		, &pEWarrantOffsetField_reserve1, &pEWarrantOffsetField_reserve1_len
		, &pEWarrantOffsetField_Direction
		, &pEWarrantOffsetField_HedgeFlag
		, &pEWarrantOffsetField_Volume
		, &pEWarrantOffsetField_InvestUnitID, &pEWarrantOffsetField_InvestUnitID_len
		, &pEWarrantOffsetField_InstrumentID, &pEWarrantOffsetField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcTradeDateType char[9]
	if(pEWarrantOffsetField_TradingDay != NULL) {
		if(pEWarrantOffsetField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pEWarrantOffsetField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pEWarrantOffsetField_TradingDay, sizeof(self->data.TradingDay) );
		pEWarrantOffsetField_TradingDay = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pEWarrantOffsetField_BrokerID != NULL) {
		if(pEWarrantOffsetField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pEWarrantOffsetField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pEWarrantOffsetField_BrokerID, sizeof(self->data.BrokerID) );
		pEWarrantOffsetField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pEWarrantOffsetField_InvestorID != NULL) {
		if(pEWarrantOffsetField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pEWarrantOffsetField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pEWarrantOffsetField_InvestorID, sizeof(self->data.InvestorID) );
		pEWarrantOffsetField_InvestorID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pEWarrantOffsetField_ExchangeID != NULL) {
		if(pEWarrantOffsetField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pEWarrantOffsetField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pEWarrantOffsetField_ExchangeID, sizeof(self->data.ExchangeID) );
		pEWarrantOffsetField_ExchangeID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pEWarrantOffsetField_reserve1 != NULL) {
		if(pEWarrantOffsetField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pEWarrantOffsetField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pEWarrantOffsetField_reserve1, sizeof(self->data.reserve1) );
		pEWarrantOffsetField_reserve1 = NULL;
	}

	//TThostFtdcDirectionType char
	self->data.Direction = pEWarrantOffsetField_Direction;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pEWarrantOffsetField_HedgeFlag;

	//TThostFtdcVolumeType int
	self->data.Volume = pEWarrantOffsetField_Volume;

	//TThostFtdcInvestUnitIDType char[17]
	if(pEWarrantOffsetField_InvestUnitID != NULL) {
		if(pEWarrantOffsetField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pEWarrantOffsetField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pEWarrantOffsetField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pEWarrantOffsetField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pEWarrantOffsetField_InstrumentID != NULL) {
		if(pEWarrantOffsetField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pEWarrantOffsetField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pEWarrantOffsetField_InstrumentID, sizeof(self->data.InstrumentID) );
		pEWarrantOffsetField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcEWarrantOffsetField_dealloc(PyCThostFtdcEWarrantOffsetField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcEWarrantOffsetField_repr(PyCThostFtdcEWarrantOffsetField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:i,s:s,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ExchangeID", self->data.ExchangeID 
		, "reserve1", self->data.reserve1 
		, "Direction", self->data.Direction
		, "HedgeFlag", self->data.HedgeFlag
		, "Volume", self->data.Volume
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcEWarrantOffsetField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcEWarrantOffsetField_get_TradingDay(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcEWarrantOffsetField_get_BrokerID(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcEWarrantOffsetField_get_InvestorID(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcEWarrantOffsetField_get_ExchangeID(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcEWarrantOffsetField_get_reserve1(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcEWarrantOffsetField_get_Direction(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcEWarrantOffsetField_get_HedgeFlag(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcEWarrantOffsetField_get_Volume(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcEWarrantOffsetField_get_InvestUnitID(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcEWarrantOffsetField_get_InstrumentID(PyCThostFtdcEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcEWarrantOffsetField_set_TradingDay(PyCThostFtdcEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcEWarrantOffsetField_set_BrokerID(PyCThostFtdcEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcEWarrantOffsetField_set_InvestorID(PyCThostFtdcEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcEWarrantOffsetField_set_ExchangeID(PyCThostFtdcEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcEWarrantOffsetField_set_reserve1(PyCThostFtdcEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcEWarrantOffsetField_set_Direction(PyCThostFtdcEWarrantOffsetField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
		PyErr_SetString(PyExc_ValueError, "Direction must be less than 1 bytes");
		return -1;
	}
	self->data.Direction = *buf;
	return 0;
}

static int PyCThostFtdcEWarrantOffsetField_set_HedgeFlag(PyCThostFtdcEWarrantOffsetField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "HedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.HedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcEWarrantOffsetField_set_Volume(PyCThostFtdcEWarrantOffsetField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Volume Expected int"); 
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
    self->data.Volume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcEWarrantOffsetField_set_InvestUnitID(PyCThostFtdcEWarrantOffsetField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
		PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
	return 0;
}

static int PyCThostFtdcEWarrantOffsetField_set_InstrumentID(PyCThostFtdcEWarrantOffsetField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcEWarrantOffsetField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcEWarrantOffsetField_get_TradingDay, (setter)PyCThostFtdcEWarrantOffsetField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcEWarrantOffsetField_get_BrokerID, (setter)PyCThostFtdcEWarrantOffsetField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcEWarrantOffsetField_get_InvestorID, (setter)PyCThostFtdcEWarrantOffsetField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcEWarrantOffsetField_get_ExchangeID, (setter)PyCThostFtdcEWarrantOffsetField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcEWarrantOffsetField_get_reserve1, (setter)PyCThostFtdcEWarrantOffsetField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcEWarrantOffsetField_get_Direction, (setter)PyCThostFtdcEWarrantOffsetField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcEWarrantOffsetField_get_HedgeFlag, (setter)PyCThostFtdcEWarrantOffsetField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcEWarrantOffsetField_get_Volume, (setter)PyCThostFtdcEWarrantOffsetField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcEWarrantOffsetField_get_InvestUnitID, (setter)PyCThostFtdcEWarrantOffsetField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcEWarrantOffsetField_get_InstrumentID, (setter)PyCThostFtdcEWarrantOffsetField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcEWarrantOffsetFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcEWarrantOffsetField",	/* tp_name */
	sizeof(PyCThostFtdcEWarrantOffsetField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcEWarrantOffsetField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcEWarrantOffsetField_repr,   /* tp_repr */
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
	"CThostFtdcEWarrantOffsetField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcEWarrantOffsetField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcEWarrantOffsetField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcEWarrantOffsetField_new,       /* tp_new */
};

int PyCThostFtdcEWarrantOffsetFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcEWarrantOffsetField  */
	if (PyType_Ready(&PyCThostFtdcEWarrantOffsetFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcEWarrantOffsetField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcEWarrantOffsetFieldType);
    if( PyModule_AddObject(module, "CThostFtdcEWarrantOffsetField", (PyObject *)&PyCThostFtdcEWarrantOffsetFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcEWarrantOffsetField to module");
        Py_DECREF(&PyCThostFtdcEWarrantOffsetFieldType);
		return -1;
    }

    return 0;
}
