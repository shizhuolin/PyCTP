
#include "PyCThostFtdcBrokerUserEventField.h"



static PyObject *PyCThostFtdcBrokerUserEventField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerUserEventField *self = (PyCThostFtdcBrokerUserEventField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerUserEventField_init(PyCThostFtdcBrokerUserEventField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "UserEventType", "EventSequenceNo", "EventDate", "EventTime", "UserEventInfo", "InvestorID", "reserve1", "InstrumentID", "DRIdentityID", "TradingDay",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pBrokerUserEventField_BrokerID = NULL;
	Py_ssize_t pBrokerUserEventField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pBrokerUserEventField_UserID = NULL;
	Py_ssize_t pBrokerUserEventField_UserID_len = 0;

	//TThostFtdcUserEventTypeType char
	char pBrokerUserEventField_UserEventType = 0;

	//TThostFtdcSequenceNoType int
	int pBrokerUserEventField_EventSequenceNo = 0;

	//TThostFtdcDateType char[9]
	const char *pBrokerUserEventField_EventDate = NULL;
	Py_ssize_t pBrokerUserEventField_EventDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pBrokerUserEventField_EventTime = NULL;
	Py_ssize_t pBrokerUserEventField_EventTime_len = 0;

	//TThostFtdcUserEventInfoType char[1025]
	const char *pBrokerUserEventField_UserEventInfo = NULL;
	Py_ssize_t pBrokerUserEventField_UserEventInfo_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pBrokerUserEventField_InvestorID = NULL;
	Py_ssize_t pBrokerUserEventField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pBrokerUserEventField_reserve1 = NULL;
	Py_ssize_t pBrokerUserEventField_reserve1_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pBrokerUserEventField_InstrumentID = NULL;
	Py_ssize_t pBrokerUserEventField_InstrumentID_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pBrokerUserEventField_DRIdentityID = 0;

	//TThostFtdcDateType char[9]
	const char *pBrokerUserEventField_TradingDay = NULL;
	Py_ssize_t pBrokerUserEventField_TradingDay_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ciy#y#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cis#s#s#s#s#s#is#", (char **)kwlist
#endif

		, &pBrokerUserEventField_BrokerID, &pBrokerUserEventField_BrokerID_len
		, &pBrokerUserEventField_UserID, &pBrokerUserEventField_UserID_len
		, &pBrokerUserEventField_UserEventType
		, &pBrokerUserEventField_EventSequenceNo
		, &pBrokerUserEventField_EventDate, &pBrokerUserEventField_EventDate_len
		, &pBrokerUserEventField_EventTime, &pBrokerUserEventField_EventTime_len
		, &pBrokerUserEventField_UserEventInfo, &pBrokerUserEventField_UserEventInfo_len
		, &pBrokerUserEventField_InvestorID, &pBrokerUserEventField_InvestorID_len
		, &pBrokerUserEventField_reserve1, &pBrokerUserEventField_reserve1_len
		, &pBrokerUserEventField_InstrumentID, &pBrokerUserEventField_InstrumentID_len
		, &pBrokerUserEventField_DRIdentityID
		, &pBrokerUserEventField_TradingDay, &pBrokerUserEventField_TradingDay_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pBrokerUserEventField_BrokerID != NULL) {
		if(pBrokerUserEventField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pBrokerUserEventField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pBrokerUserEventField_BrokerID, sizeof(self->data.BrokerID) );
		pBrokerUserEventField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pBrokerUserEventField_UserID != NULL) {
		if(pBrokerUserEventField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pBrokerUserEventField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pBrokerUserEventField_UserID, sizeof(self->data.UserID) );
		pBrokerUserEventField_UserID = NULL;
	}

	//TThostFtdcUserEventTypeType char
	self->data.UserEventType = pBrokerUserEventField_UserEventType;

	//TThostFtdcSequenceNoType int
	self->data.EventSequenceNo = pBrokerUserEventField_EventSequenceNo;

	//TThostFtdcDateType char[9]
	if(pBrokerUserEventField_EventDate != NULL) {
		if(pBrokerUserEventField_EventDate_len > (Py_ssize_t)sizeof(self->data.EventDate)) {
			PyErr_Format(PyExc_ValueError, "EventDate too long: length=%zd (max allowed is %zd)", pBrokerUserEventField_EventDate_len, (Py_ssize_t)sizeof(self->data.EventDate));
			return -1;
		}
		strncpy(self->data.EventDate, pBrokerUserEventField_EventDate, sizeof(self->data.EventDate) );
		pBrokerUserEventField_EventDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pBrokerUserEventField_EventTime != NULL) {
		if(pBrokerUserEventField_EventTime_len > (Py_ssize_t)sizeof(self->data.EventTime)) {
			PyErr_Format(PyExc_ValueError, "EventTime too long: length=%zd (max allowed is %zd)", pBrokerUserEventField_EventTime_len, (Py_ssize_t)sizeof(self->data.EventTime));
			return -1;
		}
		strncpy(self->data.EventTime, pBrokerUserEventField_EventTime, sizeof(self->data.EventTime) );
		pBrokerUserEventField_EventTime = NULL;
	}

	//TThostFtdcUserEventInfoType char[1025]
	if(pBrokerUserEventField_UserEventInfo != NULL) {
		if(pBrokerUserEventField_UserEventInfo_len > (Py_ssize_t)sizeof(self->data.UserEventInfo)) {
			PyErr_Format(PyExc_ValueError, "UserEventInfo too long: length=%zd (max allowed is %zd)", pBrokerUserEventField_UserEventInfo_len, (Py_ssize_t)sizeof(self->data.UserEventInfo));
			return -1;
		}
		strncpy(self->data.UserEventInfo, pBrokerUserEventField_UserEventInfo, sizeof(self->data.UserEventInfo) );
		pBrokerUserEventField_UserEventInfo = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pBrokerUserEventField_InvestorID != NULL) {
		if(pBrokerUserEventField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pBrokerUserEventField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pBrokerUserEventField_InvestorID, sizeof(self->data.InvestorID) );
		pBrokerUserEventField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pBrokerUserEventField_reserve1 != NULL) {
		if(pBrokerUserEventField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pBrokerUserEventField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pBrokerUserEventField_reserve1, sizeof(self->data.reserve1) );
		pBrokerUserEventField_reserve1 = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pBrokerUserEventField_InstrumentID != NULL) {
		if(pBrokerUserEventField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pBrokerUserEventField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pBrokerUserEventField_InstrumentID, sizeof(self->data.InstrumentID) );
		pBrokerUserEventField_InstrumentID = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pBrokerUserEventField_DRIdentityID;

	//TThostFtdcDateType char[9]
	if(pBrokerUserEventField_TradingDay != NULL) {
		if(pBrokerUserEventField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pBrokerUserEventField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pBrokerUserEventField_TradingDay, sizeof(self->data.TradingDay) );
		pBrokerUserEventField_TradingDay = NULL;
	}



    return 0;
}

static void PyCThostFtdcBrokerUserEventField_dealloc(PyCThostFtdcBrokerUserEventField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerUserEventField_repr(PyCThostFtdcBrokerUserEventField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "UserEventType", self->data.UserEventType
		, "EventSequenceNo", self->data.EventSequenceNo
		, "EventDate", self->data.EventDate 
		, "EventTime", self->data.EventTime 
		, "UserEventInfo", self->data.UserEventInfo 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "InstrumentID", self->data.InstrumentID 
		, "DRIdentityID", self->data.DRIdentityID
		, "TradingDay", self->data.TradingDay 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserEventField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_BrokerID(PyCThostFtdcBrokerUserEventField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_UserID(PyCThostFtdcBrokerUserEventField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_UserEventType(PyCThostFtdcBrokerUserEventField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.UserEventType), 1);
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_EventSequenceNo(PyCThostFtdcBrokerUserEventField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.EventSequenceNo);
#else 
	return PyInt_FromLong(self->data.EventSequenceNo);
#endif 
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_EventDate(PyCThostFtdcBrokerUserEventField *self, void *closure) {
	return PyBytes_FromString(self->data.EventDate);
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_EventTime(PyCThostFtdcBrokerUserEventField *self, void *closure) {
	return PyBytes_FromString(self->data.EventTime);
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_UserEventInfo(PyCThostFtdcBrokerUserEventField *self, void *closure) {
	return PyBytes_FromString(self->data.UserEventInfo);
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_InvestorID(PyCThostFtdcBrokerUserEventField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_reserve1(PyCThostFtdcBrokerUserEventField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_InstrumentID(PyCThostFtdcBrokerUserEventField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_DRIdentityID(PyCThostFtdcBrokerUserEventField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcBrokerUserEventField_get_TradingDay(PyCThostFtdcBrokerUserEventField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static int PyCThostFtdcBrokerUserEventField_set_BrokerID(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerUserEventField_set_UserID(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
		PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
	return 0;
}

static int PyCThostFtdcBrokerUserEventField_set_UserEventType(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserEventType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserEventType)) {
		PyErr_SetString(PyExc_ValueError, "UserEventType must be less than 1 bytes");
		return -1;
	}
	self->data.UserEventType = *buf;
	return 0;
}

static int PyCThostFtdcBrokerUserEventField_set_EventSequenceNo(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "EventSequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "EventSequenceNo Expected int"); 
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
    self->data.EventSequenceNo = (int)buf; 
    return 0; 
}

static int PyCThostFtdcBrokerUserEventField_set_EventDate(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "EventDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.EventDate)) {
		PyErr_SetString(PyExc_ValueError, "EventDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.EventDate, buf, sizeof(self->data.EventDate));
	return 0;
}

static int PyCThostFtdcBrokerUserEventField_set_EventTime(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "EventTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.EventTime)) {
		PyErr_SetString(PyExc_ValueError, "EventTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.EventTime, buf, sizeof(self->data.EventTime));
	return 0;
}

static int PyCThostFtdcBrokerUserEventField_set_UserEventInfo(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserEventInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserEventInfo)) {
		PyErr_SetString(PyExc_ValueError, "UserEventInfo must be less than 1025 bytes");
		return -1;
	}
	strncpy(self->data.UserEventInfo, buf, sizeof(self->data.UserEventInfo));
	return 0;
}

static int PyCThostFtdcBrokerUserEventField_set_InvestorID(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerUserEventField_set_reserve1(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerUserEventField_set_InstrumentID(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerUserEventField_set_DRIdentityID(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int"); 
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
    self->data.DRIdentityID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcBrokerUserEventField_set_TradingDay(PyCThostFtdcBrokerUserEventField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcBrokerUserEventField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcBrokerUserEventField_get_BrokerID, (setter)PyCThostFtdcBrokerUserEventField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcBrokerUserEventField_get_UserID, (setter)PyCThostFtdcBrokerUserEventField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"UserEventType", (getter)PyCThostFtdcBrokerUserEventField_get_UserEventType, (setter)PyCThostFtdcBrokerUserEventField_set_UserEventType, (char *)"UserEventType", NULL},
	 {(char *)"EventSequenceNo", (getter)PyCThostFtdcBrokerUserEventField_get_EventSequenceNo, (setter)PyCThostFtdcBrokerUserEventField_set_EventSequenceNo, (char *)"EventSequenceNo", NULL},
	 {(char *)"EventDate", (getter)PyCThostFtdcBrokerUserEventField_get_EventDate, (setter)PyCThostFtdcBrokerUserEventField_set_EventDate, (char *)"EventDate", NULL},
	 {(char *)"EventTime", (getter)PyCThostFtdcBrokerUserEventField_get_EventTime, (setter)PyCThostFtdcBrokerUserEventField_set_EventTime, (char *)"EventTime", NULL},
	 {(char *)"UserEventInfo", (getter)PyCThostFtdcBrokerUserEventField_get_UserEventInfo, (setter)PyCThostFtdcBrokerUserEventField_set_UserEventInfo, (char *)"UserEventInfo", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcBrokerUserEventField_get_InvestorID, (setter)PyCThostFtdcBrokerUserEventField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcBrokerUserEventField_get_reserve1, (setter)PyCThostFtdcBrokerUserEventField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcBrokerUserEventField_get_InstrumentID, (setter)PyCThostFtdcBrokerUserEventField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcBrokerUserEventField_get_DRIdentityID, (setter)PyCThostFtdcBrokerUserEventField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcBrokerUserEventField_get_TradingDay, (setter)PyCThostFtdcBrokerUserEventField_set_TradingDay, (char *)"TradingDay", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerUserEventFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerUserEventField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerUserEventField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerUserEventField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerUserEventField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerUserEventField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerUserEventField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerUserEventField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerUserEventField_new,       /* tp_new */
};

int PyCThostFtdcBrokerUserEventFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerUserEventField  */
	if (PyType_Ready(&PyCThostFtdcBrokerUserEventFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerUserEventField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerUserEventFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerUserEventField", (PyObject *)&PyCThostFtdcBrokerUserEventFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserEventField to module");
        Py_DECREF(&PyCThostFtdcBrokerUserEventFieldType);
		return -1;
    }

    return 0;
}
