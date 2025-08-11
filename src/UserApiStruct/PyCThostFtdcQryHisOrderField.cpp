
#include "PyCThostFtdcQryHisOrderField.h"



static PyObject *PyCThostFtdcQryHisOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryHisOrderField *self = (PyCThostFtdcQryHisOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryHisOrderField_init(PyCThostFtdcQryHisOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "OrderSysID", "InsertTimeStart", "InsertTimeEnd", "TradingDay", "SettlementID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryHisOrderField_BrokerID = NULL;
	Py_ssize_t pQryHisOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryHisOrderField_InvestorID = NULL;
	Py_ssize_t pQryHisOrderField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryHisOrderField_reserve1 = NULL;
	Py_ssize_t pQryHisOrderField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryHisOrderField_ExchangeID = NULL;
	Py_ssize_t pQryHisOrderField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pQryHisOrderField_OrderSysID = NULL;
	Py_ssize_t pQryHisOrderField_OrderSysID_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryHisOrderField_InsertTimeStart = NULL;
	Py_ssize_t pQryHisOrderField_InsertTimeStart_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQryHisOrderField_InsertTimeEnd = NULL;
	Py_ssize_t pQryHisOrderField_InsertTimeEnd_len = 0;

	//TThostFtdcDateType char[9]
	const char *pQryHisOrderField_TradingDay = NULL;
	Py_ssize_t pQryHisOrderField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pQryHisOrderField_SettlementID = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryHisOrderField_InstrumentID = NULL;
	Py_ssize_t pQryHisOrderField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#is#", (char **)kwlist
#endif

		, &pQryHisOrderField_BrokerID, &pQryHisOrderField_BrokerID_len
		, &pQryHisOrderField_InvestorID, &pQryHisOrderField_InvestorID_len
		, &pQryHisOrderField_reserve1, &pQryHisOrderField_reserve1_len
		, &pQryHisOrderField_ExchangeID, &pQryHisOrderField_ExchangeID_len
		, &pQryHisOrderField_OrderSysID, &pQryHisOrderField_OrderSysID_len
		, &pQryHisOrderField_InsertTimeStart, &pQryHisOrderField_InsertTimeStart_len
		, &pQryHisOrderField_InsertTimeEnd, &pQryHisOrderField_InsertTimeEnd_len
		, &pQryHisOrderField_TradingDay, &pQryHisOrderField_TradingDay_len
		, &pQryHisOrderField_SettlementID
		, &pQryHisOrderField_InstrumentID, &pQryHisOrderField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryHisOrderField_BrokerID != NULL) {
		if(pQryHisOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryHisOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryHisOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pQryHisOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryHisOrderField_InvestorID != NULL) {
		if(pQryHisOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryHisOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryHisOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pQryHisOrderField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryHisOrderField_reserve1 != NULL) {
		if(pQryHisOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryHisOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryHisOrderField_reserve1, sizeof(self->data.reserve1) );
		pQryHisOrderField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryHisOrderField_ExchangeID != NULL) {
		if(pQryHisOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryHisOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryHisOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryHisOrderField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pQryHisOrderField_OrderSysID != NULL) {
		if(pQryHisOrderField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pQryHisOrderField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pQryHisOrderField_OrderSysID, sizeof(self->data.OrderSysID) );
		pQryHisOrderField_OrderSysID = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryHisOrderField_InsertTimeStart != NULL) {
		if(pQryHisOrderField_InsertTimeStart_len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeStart too long: length=%zd (max allowed is %zd)", pQryHisOrderField_InsertTimeStart_len, (Py_ssize_t)sizeof(self->data.InsertTimeStart));
			return -1;
		}
		strncpy(self->data.InsertTimeStart, pQryHisOrderField_InsertTimeStart, sizeof(self->data.InsertTimeStart) );
		pQryHisOrderField_InsertTimeStart = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQryHisOrderField_InsertTimeEnd != NULL) {
		if(pQryHisOrderField_InsertTimeEnd_len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
			PyErr_Format(PyExc_ValueError, "InsertTimeEnd too long: length=%zd (max allowed is %zd)", pQryHisOrderField_InsertTimeEnd_len, (Py_ssize_t)sizeof(self->data.InsertTimeEnd));
			return -1;
		}
		strncpy(self->data.InsertTimeEnd, pQryHisOrderField_InsertTimeEnd, sizeof(self->data.InsertTimeEnd) );
		pQryHisOrderField_InsertTimeEnd = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pQryHisOrderField_TradingDay != NULL) {
		if(pQryHisOrderField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pQryHisOrderField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pQryHisOrderField_TradingDay, sizeof(self->data.TradingDay) );
		pQryHisOrderField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pQryHisOrderField_SettlementID;

	//TThostFtdcInstrumentIDType char[81]
	if(pQryHisOrderField_InstrumentID != NULL) {
		if(pQryHisOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryHisOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryHisOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryHisOrderField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryHisOrderField_dealloc(PyCThostFtdcQryHisOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryHisOrderField_repr(PyCThostFtdcQryHisOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "OrderSysID", self->data.OrderSysID 
		, "InsertTimeStart", self->data.InsertTimeStart 
		, "InsertTimeEnd", self->data.InsertTimeEnd 
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryHisOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryHisOrderField_get_BrokerID(PyCThostFtdcQryHisOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryHisOrderField_get_InvestorID(PyCThostFtdcQryHisOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryHisOrderField_get_reserve1(PyCThostFtdcQryHisOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryHisOrderField_get_ExchangeID(PyCThostFtdcQryHisOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryHisOrderField_get_OrderSysID(PyCThostFtdcQryHisOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcQryHisOrderField_get_InsertTimeStart(PyCThostFtdcQryHisOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeStart);
}

static PyObject *PyCThostFtdcQryHisOrderField_get_InsertTimeEnd(PyCThostFtdcQryHisOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTimeEnd);
}

static PyObject *PyCThostFtdcQryHisOrderField_get_TradingDay(PyCThostFtdcQryHisOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcQryHisOrderField_get_SettlementID(PyCThostFtdcQryHisOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcQryHisOrderField_get_InstrumentID(PyCThostFtdcQryHisOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryHisOrderField_set_BrokerID(PyCThostFtdcQryHisOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryHisOrderField_set_InvestorID(PyCThostFtdcQryHisOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryHisOrderField_set_reserve1(PyCThostFtdcQryHisOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryHisOrderField_set_ExchangeID(PyCThostFtdcQryHisOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryHisOrderField_set_OrderSysID(PyCThostFtdcQryHisOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
	return 0;
}

static int PyCThostFtdcQryHisOrderField_set_InsertTimeStart(PyCThostFtdcQryHisOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InsertTimeStart Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InsertTimeStart)) {
		PyErr_SetString(PyExc_ValueError, "InsertTimeStart must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.InsertTimeStart, buf, sizeof(self->data.InsertTimeStart));
	return 0;
}

static int PyCThostFtdcQryHisOrderField_set_InsertTimeEnd(PyCThostFtdcQryHisOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InsertTimeEnd Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InsertTimeEnd)) {
		PyErr_SetString(PyExc_ValueError, "InsertTimeEnd must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.InsertTimeEnd, buf, sizeof(self->data.InsertTimeEnd));
	return 0;
}

static int PyCThostFtdcQryHisOrderField_set_TradingDay(PyCThostFtdcQryHisOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryHisOrderField_set_SettlementID(PyCThostFtdcQryHisOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected int"); 
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
    self->data.SettlementID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcQryHisOrderField_set_InstrumentID(PyCThostFtdcQryHisOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryHisOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryHisOrderField_get_BrokerID, (setter)PyCThostFtdcQryHisOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryHisOrderField_get_InvestorID, (setter)PyCThostFtdcQryHisOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryHisOrderField_get_reserve1, (setter)PyCThostFtdcQryHisOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryHisOrderField_get_ExchangeID, (setter)PyCThostFtdcQryHisOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcQryHisOrderField_get_OrderSysID, (setter)PyCThostFtdcQryHisOrderField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"InsertTimeStart", (getter)PyCThostFtdcQryHisOrderField_get_InsertTimeStart, (setter)PyCThostFtdcQryHisOrderField_set_InsertTimeStart, (char *)"InsertTimeStart", NULL},
	 {(char *)"InsertTimeEnd", (getter)PyCThostFtdcQryHisOrderField_get_InsertTimeEnd, (setter)PyCThostFtdcQryHisOrderField_set_InsertTimeEnd, (char *)"InsertTimeEnd", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcQryHisOrderField_get_TradingDay, (setter)PyCThostFtdcQryHisOrderField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcQryHisOrderField_get_SettlementID, (setter)PyCThostFtdcQryHisOrderField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryHisOrderField_get_InstrumentID, (setter)PyCThostFtdcQryHisOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryHisOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryHisOrderField",	/* tp_name */
	sizeof(PyCThostFtdcQryHisOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryHisOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryHisOrderField_repr,   /* tp_repr */
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
	"CThostFtdcQryHisOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryHisOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryHisOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryHisOrderField_new,       /* tp_new */
};

int PyCThostFtdcQryHisOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryHisOrderField  */
	if (PyType_Ready(&PyCThostFtdcQryHisOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryHisOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryHisOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryHisOrderField", (PyObject *)&PyCThostFtdcQryHisOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryHisOrderField to module");
        Py_DECREF(&PyCThostFtdcQryHisOrderFieldType);
		return -1;
    }

    return 0;
}
