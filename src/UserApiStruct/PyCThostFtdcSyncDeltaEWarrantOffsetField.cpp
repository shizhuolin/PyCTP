
#include "PyCThostFtdcSyncDeltaEWarrantOffsetField.h"



static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaEWarrantOffsetField *self = (PyCThostFtdcSyncDeltaEWarrantOffsetField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_init(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "InvestorID", "ExchangeID", "InstrumentID", "Direction", "HedgeFlag", "Volume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcTradeDateType char[9]
	const char *pSyncDeltaEWarrantOffsetField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaEWarrantOffsetField_TradingDay_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaEWarrantOffsetField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaEWarrantOffsetField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDeltaEWarrantOffsetField_InvestorID = NULL;
	Py_ssize_t pSyncDeltaEWarrantOffsetField_InvestorID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaEWarrantOffsetField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaEWarrantOffsetField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaEWarrantOffsetField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaEWarrantOffsetField_InstrumentID_len = 0;

	//TThostFtdcDirectionType char
	char pSyncDeltaEWarrantOffsetField_Direction = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncDeltaEWarrantOffsetField_HedgeFlag = 0;

	//TThostFtdcVolumeType int
	int pSyncDeltaEWarrantOffsetField_Volume = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaEWarrantOffsetField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaEWarrantOffsetField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccici", (char **)kwlist
#endif

		, &pSyncDeltaEWarrantOffsetField_TradingDay, &pSyncDeltaEWarrantOffsetField_TradingDay_len
		, &pSyncDeltaEWarrantOffsetField_BrokerID, &pSyncDeltaEWarrantOffsetField_BrokerID_len
		, &pSyncDeltaEWarrantOffsetField_InvestorID, &pSyncDeltaEWarrantOffsetField_InvestorID_len
		, &pSyncDeltaEWarrantOffsetField_ExchangeID, &pSyncDeltaEWarrantOffsetField_ExchangeID_len
		, &pSyncDeltaEWarrantOffsetField_InstrumentID, &pSyncDeltaEWarrantOffsetField_InstrumentID_len
		, &pSyncDeltaEWarrantOffsetField_Direction
		, &pSyncDeltaEWarrantOffsetField_HedgeFlag
		, &pSyncDeltaEWarrantOffsetField_Volume
		, &pSyncDeltaEWarrantOffsetField_ActionDirection
		, &pSyncDeltaEWarrantOffsetField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcTradeDateType char[9]
	if(pSyncDeltaEWarrantOffsetField_TradingDay != NULL) {
		if(pSyncDeltaEWarrantOffsetField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaEWarrantOffsetField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaEWarrantOffsetField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaEWarrantOffsetField_TradingDay = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaEWarrantOffsetField_BrokerID != NULL) {
		if(pSyncDeltaEWarrantOffsetField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaEWarrantOffsetField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaEWarrantOffsetField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaEWarrantOffsetField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDeltaEWarrantOffsetField_InvestorID != NULL) {
		if(pSyncDeltaEWarrantOffsetField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDeltaEWarrantOffsetField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDeltaEWarrantOffsetField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDeltaEWarrantOffsetField_InvestorID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaEWarrantOffsetField_ExchangeID != NULL) {
		if(pSyncDeltaEWarrantOffsetField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaEWarrantOffsetField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaEWarrantOffsetField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaEWarrantOffsetField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaEWarrantOffsetField_InstrumentID != NULL) {
		if(pSyncDeltaEWarrantOffsetField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaEWarrantOffsetField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaEWarrantOffsetField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaEWarrantOffsetField_InstrumentID = NULL;
	}

	//TThostFtdcDirectionType char
	self->data.Direction = pSyncDeltaEWarrantOffsetField_Direction;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pSyncDeltaEWarrantOffsetField_HedgeFlag;

	//TThostFtdcVolumeType int
	self->data.Volume = pSyncDeltaEWarrantOffsetField_Volume;

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaEWarrantOffsetField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaEWarrantOffsetField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaEWarrantOffsetField_dealloc(PyCThostFtdcSyncDeltaEWarrantOffsetField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_repr(PyCThostFtdcSyncDeltaEWarrantOffsetField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:i,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 
		, "Direction", self->data.Direction
		, "HedgeFlag", self->data.HedgeFlag
		, "Volume", self->data.Volume
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaEWarrantOffsetField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_TradingDay(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_BrokerID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_InvestorID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_ExchangeID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_InstrumentID(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_Direction(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_HedgeFlag(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_Volume(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_ActionDirection(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaEWarrantOffsetField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaEWarrantOffsetField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_TradingDay(PyCThostFtdcSyncDeltaEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_BrokerID(PyCThostFtdcSyncDeltaEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_InvestorID(PyCThostFtdcSyncDeltaEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_ExchangeID(PyCThostFtdcSyncDeltaEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_InstrumentID(PyCThostFtdcSyncDeltaEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_Direction(PyCThostFtdcSyncDeltaEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_HedgeFlag(PyCThostFtdcSyncDeltaEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_Volume(PyCThostFtdcSyncDeltaEWarrantOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_ActionDirection(PyCThostFtdcSyncDeltaEWarrantOffsetField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
		PyErr_SetString(PyExc_ValueError, "ActionDirection must be less than 1 bytes");
		return -1;
	}
	self->data.ActionDirection = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaEWarrantOffsetField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaEWarrantOffsetField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int"); 
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
    self->data.SyncDeltaSequenceNo = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcSyncDeltaEWarrantOffsetField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_Direction, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_Volume, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaEWarrantOffsetField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaEWarrantOffsetField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaEWarrantOffsetFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaEWarrantOffsetField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaEWarrantOffsetField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaEWarrantOffsetField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaEWarrantOffsetField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaEWarrantOffsetField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaEWarrantOffsetField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaEWarrantOffsetField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaEWarrantOffsetField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaEWarrantOffsetField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaEWarrantOffsetFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaEWarrantOffsetField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaEWarrantOffsetFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaEWarrantOffsetField", (PyObject *)&PyCThostFtdcSyncDeltaEWarrantOffsetFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaEWarrantOffsetField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaEWarrantOffsetFieldType);
		return -1;
    }

    return 0;
}
