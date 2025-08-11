
#include "PyCThostFtdcTraderOfferField.h"



static PyObject *PyCThostFtdcTraderOfferField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTraderOfferField *self = (PyCThostFtdcTraderOfferField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTraderOfferField_init(PyCThostFtdcTraderOfferField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "TraderID", "ParticipantID", "Password", "InstallID", "OrderLocalID", "TraderConnectStatus", "ConnectRequestDate", "ConnectRequestTime", "LastReportDate", "LastReportTime", "ConnectDate", "ConnectTime", "StartDate", "StartTime", "TradingDay", "BrokerID", "MaxTradeID", "MaxOrderMessageReference", "OrderCancelAlg",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pTraderOfferField_ExchangeID = NULL;
	Py_ssize_t pTraderOfferField_ExchangeID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pTraderOfferField_TraderID = NULL;
	Py_ssize_t pTraderOfferField_TraderID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pTraderOfferField_ParticipantID = NULL;
	Py_ssize_t pTraderOfferField_ParticipantID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pTraderOfferField_Password = NULL;
	Py_ssize_t pTraderOfferField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pTraderOfferField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pTraderOfferField_OrderLocalID = NULL;
	Py_ssize_t pTraderOfferField_OrderLocalID_len = 0;

	//TThostFtdcTraderConnectStatusType char
	char pTraderOfferField_TraderConnectStatus = 0;

	//TThostFtdcDateType char[9]
	const char *pTraderOfferField_ConnectRequestDate = NULL;
	Py_ssize_t pTraderOfferField_ConnectRequestDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pTraderOfferField_ConnectRequestTime = NULL;
	Py_ssize_t pTraderOfferField_ConnectRequestTime_len = 0;

	//TThostFtdcDateType char[9]
	const char *pTraderOfferField_LastReportDate = NULL;
	Py_ssize_t pTraderOfferField_LastReportDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pTraderOfferField_LastReportTime = NULL;
	Py_ssize_t pTraderOfferField_LastReportTime_len = 0;

	//TThostFtdcDateType char[9]
	const char *pTraderOfferField_ConnectDate = NULL;
	Py_ssize_t pTraderOfferField_ConnectDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pTraderOfferField_ConnectTime = NULL;
	Py_ssize_t pTraderOfferField_ConnectTime_len = 0;

	//TThostFtdcDateType char[9]
	const char *pTraderOfferField_StartDate = NULL;
	Py_ssize_t pTraderOfferField_StartDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pTraderOfferField_StartTime = NULL;
	Py_ssize_t pTraderOfferField_StartTime_len = 0;

	//TThostFtdcDateType char[9]
	const char *pTraderOfferField_TradingDay = NULL;
	Py_ssize_t pTraderOfferField_TradingDay_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pTraderOfferField_BrokerID = NULL;
	Py_ssize_t pTraderOfferField_BrokerID_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pTraderOfferField_MaxTradeID = NULL;
	Py_ssize_t pTraderOfferField_MaxTradeID_len = 0;

	//TThostFtdcReturnCodeType char[7]
	const char *pTraderOfferField_MaxOrderMessageReference = NULL;
	Py_ssize_t pTraderOfferField_MaxOrderMessageReference_len = 0;

	//TThostFtdcOrderCancelAlgType char
	char pTraderOfferField_OrderCancelAlg = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#cy#y#y#y#y#y#y#y#y#y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#is#cs#s#s#s#s#s#s#s#s#s#s#s#c", (char **)kwlist
#endif

		, &pTraderOfferField_ExchangeID, &pTraderOfferField_ExchangeID_len
		, &pTraderOfferField_TraderID, &pTraderOfferField_TraderID_len
		, &pTraderOfferField_ParticipantID, &pTraderOfferField_ParticipantID_len
		, &pTraderOfferField_Password, &pTraderOfferField_Password_len
		, &pTraderOfferField_InstallID
		, &pTraderOfferField_OrderLocalID, &pTraderOfferField_OrderLocalID_len
		, &pTraderOfferField_TraderConnectStatus
		, &pTraderOfferField_ConnectRequestDate, &pTraderOfferField_ConnectRequestDate_len
		, &pTraderOfferField_ConnectRequestTime, &pTraderOfferField_ConnectRequestTime_len
		, &pTraderOfferField_LastReportDate, &pTraderOfferField_LastReportDate_len
		, &pTraderOfferField_LastReportTime, &pTraderOfferField_LastReportTime_len
		, &pTraderOfferField_ConnectDate, &pTraderOfferField_ConnectDate_len
		, &pTraderOfferField_ConnectTime, &pTraderOfferField_ConnectTime_len
		, &pTraderOfferField_StartDate, &pTraderOfferField_StartDate_len
		, &pTraderOfferField_StartTime, &pTraderOfferField_StartTime_len
		, &pTraderOfferField_TradingDay, &pTraderOfferField_TradingDay_len
		, &pTraderOfferField_BrokerID, &pTraderOfferField_BrokerID_len
		, &pTraderOfferField_MaxTradeID, &pTraderOfferField_MaxTradeID_len
		, &pTraderOfferField_MaxOrderMessageReference, &pTraderOfferField_MaxOrderMessageReference_len
		, &pTraderOfferField_OrderCancelAlg


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pTraderOfferField_ExchangeID != NULL) {
		if(pTraderOfferField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pTraderOfferField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pTraderOfferField_ExchangeID, sizeof(self->data.ExchangeID) );
		pTraderOfferField_ExchangeID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pTraderOfferField_TraderID != NULL) {
		if(pTraderOfferField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pTraderOfferField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pTraderOfferField_TraderID, sizeof(self->data.TraderID) );
		pTraderOfferField_TraderID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pTraderOfferField_ParticipantID != NULL) {
		if(pTraderOfferField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pTraderOfferField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pTraderOfferField_ParticipantID, sizeof(self->data.ParticipantID) );
		pTraderOfferField_ParticipantID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pTraderOfferField_Password != NULL) {
		if(pTraderOfferField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pTraderOfferField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pTraderOfferField_Password, sizeof(self->data.Password) );
		pTraderOfferField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pTraderOfferField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pTraderOfferField_OrderLocalID != NULL) {
		if(pTraderOfferField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", pTraderOfferField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
			return -1;
		}
		strncpy(self->data.OrderLocalID, pTraderOfferField_OrderLocalID, sizeof(self->data.OrderLocalID) );
		pTraderOfferField_OrderLocalID = NULL;
	}

	//TThostFtdcTraderConnectStatusType char
	self->data.TraderConnectStatus = pTraderOfferField_TraderConnectStatus;

	//TThostFtdcDateType char[9]
	if(pTraderOfferField_ConnectRequestDate != NULL) {
		if(pTraderOfferField_ConnectRequestDate_len > (Py_ssize_t)sizeof(self->data.ConnectRequestDate)) {
			PyErr_Format(PyExc_ValueError, "ConnectRequestDate too long: length=%zd (max allowed is %zd)", pTraderOfferField_ConnectRequestDate_len, (Py_ssize_t)sizeof(self->data.ConnectRequestDate));
			return -1;
		}
		strncpy(self->data.ConnectRequestDate, pTraderOfferField_ConnectRequestDate, sizeof(self->data.ConnectRequestDate) );
		pTraderOfferField_ConnectRequestDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pTraderOfferField_ConnectRequestTime != NULL) {
		if(pTraderOfferField_ConnectRequestTime_len > (Py_ssize_t)sizeof(self->data.ConnectRequestTime)) {
			PyErr_Format(PyExc_ValueError, "ConnectRequestTime too long: length=%zd (max allowed is %zd)", pTraderOfferField_ConnectRequestTime_len, (Py_ssize_t)sizeof(self->data.ConnectRequestTime));
			return -1;
		}
		strncpy(self->data.ConnectRequestTime, pTraderOfferField_ConnectRequestTime, sizeof(self->data.ConnectRequestTime) );
		pTraderOfferField_ConnectRequestTime = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pTraderOfferField_LastReportDate != NULL) {
		if(pTraderOfferField_LastReportDate_len > (Py_ssize_t)sizeof(self->data.LastReportDate)) {
			PyErr_Format(PyExc_ValueError, "LastReportDate too long: length=%zd (max allowed is %zd)", pTraderOfferField_LastReportDate_len, (Py_ssize_t)sizeof(self->data.LastReportDate));
			return -1;
		}
		strncpy(self->data.LastReportDate, pTraderOfferField_LastReportDate, sizeof(self->data.LastReportDate) );
		pTraderOfferField_LastReportDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pTraderOfferField_LastReportTime != NULL) {
		if(pTraderOfferField_LastReportTime_len > (Py_ssize_t)sizeof(self->data.LastReportTime)) {
			PyErr_Format(PyExc_ValueError, "LastReportTime too long: length=%zd (max allowed is %zd)", pTraderOfferField_LastReportTime_len, (Py_ssize_t)sizeof(self->data.LastReportTime));
			return -1;
		}
		strncpy(self->data.LastReportTime, pTraderOfferField_LastReportTime, sizeof(self->data.LastReportTime) );
		pTraderOfferField_LastReportTime = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pTraderOfferField_ConnectDate != NULL) {
		if(pTraderOfferField_ConnectDate_len > (Py_ssize_t)sizeof(self->data.ConnectDate)) {
			PyErr_Format(PyExc_ValueError, "ConnectDate too long: length=%zd (max allowed is %zd)", pTraderOfferField_ConnectDate_len, (Py_ssize_t)sizeof(self->data.ConnectDate));
			return -1;
		}
		strncpy(self->data.ConnectDate, pTraderOfferField_ConnectDate, sizeof(self->data.ConnectDate) );
		pTraderOfferField_ConnectDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pTraderOfferField_ConnectTime != NULL) {
		if(pTraderOfferField_ConnectTime_len > (Py_ssize_t)sizeof(self->data.ConnectTime)) {
			PyErr_Format(PyExc_ValueError, "ConnectTime too long: length=%zd (max allowed is %zd)", pTraderOfferField_ConnectTime_len, (Py_ssize_t)sizeof(self->data.ConnectTime));
			return -1;
		}
		strncpy(self->data.ConnectTime, pTraderOfferField_ConnectTime, sizeof(self->data.ConnectTime) );
		pTraderOfferField_ConnectTime = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pTraderOfferField_StartDate != NULL) {
		if(pTraderOfferField_StartDate_len > (Py_ssize_t)sizeof(self->data.StartDate)) {
			PyErr_Format(PyExc_ValueError, "StartDate too long: length=%zd (max allowed is %zd)", pTraderOfferField_StartDate_len, (Py_ssize_t)sizeof(self->data.StartDate));
			return -1;
		}
		strncpy(self->data.StartDate, pTraderOfferField_StartDate, sizeof(self->data.StartDate) );
		pTraderOfferField_StartDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pTraderOfferField_StartTime != NULL) {
		if(pTraderOfferField_StartTime_len > (Py_ssize_t)sizeof(self->data.StartTime)) {
			PyErr_Format(PyExc_ValueError, "StartTime too long: length=%zd (max allowed is %zd)", pTraderOfferField_StartTime_len, (Py_ssize_t)sizeof(self->data.StartTime));
			return -1;
		}
		strncpy(self->data.StartTime, pTraderOfferField_StartTime, sizeof(self->data.StartTime) );
		pTraderOfferField_StartTime = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pTraderOfferField_TradingDay != NULL) {
		if(pTraderOfferField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pTraderOfferField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pTraderOfferField_TradingDay, sizeof(self->data.TradingDay) );
		pTraderOfferField_TradingDay = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pTraderOfferField_BrokerID != NULL) {
		if(pTraderOfferField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTraderOfferField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTraderOfferField_BrokerID, sizeof(self->data.BrokerID) );
		pTraderOfferField_BrokerID = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pTraderOfferField_MaxTradeID != NULL) {
		if(pTraderOfferField_MaxTradeID_len > (Py_ssize_t)sizeof(self->data.MaxTradeID)) {
			PyErr_Format(PyExc_ValueError, "MaxTradeID too long: length=%zd (max allowed is %zd)", pTraderOfferField_MaxTradeID_len, (Py_ssize_t)sizeof(self->data.MaxTradeID));
			return -1;
		}
		strncpy(self->data.MaxTradeID, pTraderOfferField_MaxTradeID, sizeof(self->data.MaxTradeID) );
		pTraderOfferField_MaxTradeID = NULL;
	}

	//TThostFtdcReturnCodeType char[7]
	if(pTraderOfferField_MaxOrderMessageReference != NULL) {
		if(pTraderOfferField_MaxOrderMessageReference_len > (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference)) {
			PyErr_Format(PyExc_ValueError, "MaxOrderMessageReference too long: length=%zd (max allowed is %zd)", pTraderOfferField_MaxOrderMessageReference_len, (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference));
			return -1;
		}
		strncpy(self->data.MaxOrderMessageReference, pTraderOfferField_MaxOrderMessageReference, sizeof(self->data.MaxOrderMessageReference) );
		pTraderOfferField_MaxOrderMessageReference = NULL;
	}

	//TThostFtdcOrderCancelAlgType char
	self->data.OrderCancelAlg = pTraderOfferField_OrderCancelAlg;



    return 0;
}

static void PyCThostFtdcTraderOfferField_dealloc(PyCThostFtdcTraderOfferField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTraderOfferField_repr(PyCThostFtdcTraderOfferField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "TraderID", self->data.TraderID 
		, "ParticipantID", self->data.ParticipantID 
		, "Password", self->data.Password 
		, "InstallID", self->data.InstallID
		, "OrderLocalID", self->data.OrderLocalID 
		, "TraderConnectStatus", self->data.TraderConnectStatus
		, "ConnectRequestDate", self->data.ConnectRequestDate 
		, "ConnectRequestTime", self->data.ConnectRequestTime 
		, "LastReportDate", self->data.LastReportDate 
		, "LastReportTime", self->data.LastReportTime 
		, "ConnectDate", self->data.ConnectDate 
		, "ConnectTime", self->data.ConnectTime 
		, "StartDate", self->data.StartDate 
		, "StartTime", self->data.StartTime 
		, "TradingDay", self->data.TradingDay 
		, "BrokerID", self->data.BrokerID 
		, "MaxTradeID", self->data.MaxTradeID 
		, "MaxOrderMessageReference", self->data.MaxOrderMessageReference 
		, "OrderCancelAlg", self->data.OrderCancelAlg


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTraderOfferField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTraderOfferField_get_ExchangeID(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcTraderOfferField_get_TraderID(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcTraderOfferField_get_ParticipantID(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcTraderOfferField_get_Password(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcTraderOfferField_get_InstallID(PyCThostFtdcTraderOfferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcTraderOfferField_get_OrderLocalID(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderLocalID);
}

static PyObject *PyCThostFtdcTraderOfferField_get_TraderConnectStatus(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TraderConnectStatus), 1);
}

static PyObject *PyCThostFtdcTraderOfferField_get_ConnectRequestDate(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ConnectRequestDate);
}

static PyObject *PyCThostFtdcTraderOfferField_get_ConnectRequestTime(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ConnectRequestTime);
}

static PyObject *PyCThostFtdcTraderOfferField_get_LastReportDate(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.LastReportDate);
}

static PyObject *PyCThostFtdcTraderOfferField_get_LastReportTime(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.LastReportTime);
}

static PyObject *PyCThostFtdcTraderOfferField_get_ConnectDate(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ConnectDate);
}

static PyObject *PyCThostFtdcTraderOfferField_get_ConnectTime(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ConnectTime);
}

static PyObject *PyCThostFtdcTraderOfferField_get_StartDate(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.StartDate);
}

static PyObject *PyCThostFtdcTraderOfferField_get_StartTime(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.StartTime);
}

static PyObject *PyCThostFtdcTraderOfferField_get_TradingDay(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcTraderOfferField_get_BrokerID(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTraderOfferField_get_MaxTradeID(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.MaxTradeID);
}

static PyObject *PyCThostFtdcTraderOfferField_get_MaxOrderMessageReference(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.MaxOrderMessageReference);
}

static PyObject *PyCThostFtdcTraderOfferField_get_OrderCancelAlg(PyCThostFtdcTraderOfferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderCancelAlg), 1);
}

static int PyCThostFtdcTraderOfferField_set_ExchangeID(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTraderOfferField_set_TraderID(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
		PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_ParticipantID(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
		PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_Password(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Password)) {
		PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Password, buf, sizeof(self->data.Password));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_InstallID(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "InstallID Expected int"); 
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
    self->data.InstallID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcTraderOfferField_set_OrderLocalID(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
		PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OrderLocalID, buf, sizeof(self->data.OrderLocalID));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_TraderConnectStatus(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TraderConnectStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TraderConnectStatus)) {
		PyErr_SetString(PyExc_ValueError, "TraderConnectStatus must be less than 1 bytes");
		return -1;
	}
	self->data.TraderConnectStatus = *buf;
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_ConnectRequestDate(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ConnectRequestDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ConnectRequestDate)) {
		PyErr_SetString(PyExc_ValueError, "ConnectRequestDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ConnectRequestDate, buf, sizeof(self->data.ConnectRequestDate));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_ConnectRequestTime(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ConnectRequestTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ConnectRequestTime)) {
		PyErr_SetString(PyExc_ValueError, "ConnectRequestTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ConnectRequestTime, buf, sizeof(self->data.ConnectRequestTime));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_LastReportDate(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LastReportDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LastReportDate)) {
		PyErr_SetString(PyExc_ValueError, "LastReportDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.LastReportDate, buf, sizeof(self->data.LastReportDate));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_LastReportTime(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LastReportTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LastReportTime)) {
		PyErr_SetString(PyExc_ValueError, "LastReportTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.LastReportTime, buf, sizeof(self->data.LastReportTime));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_ConnectDate(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ConnectDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ConnectDate)) {
		PyErr_SetString(PyExc_ValueError, "ConnectDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ConnectDate, buf, sizeof(self->data.ConnectDate));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_ConnectTime(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ConnectTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ConnectTime)) {
		PyErr_SetString(PyExc_ValueError, "ConnectTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ConnectTime, buf, sizeof(self->data.ConnectTime));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_StartDate(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "StartDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.StartDate)) {
		PyErr_SetString(PyExc_ValueError, "StartDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.StartDate, buf, sizeof(self->data.StartDate));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_StartTime(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "StartTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.StartTime)) {
		PyErr_SetString(PyExc_ValueError, "StartTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.StartTime, buf, sizeof(self->data.StartTime));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_TradingDay(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTraderOfferField_set_BrokerID(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTraderOfferField_set_MaxTradeID(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MaxTradeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MaxTradeID)) {
		PyErr_SetString(PyExc_ValueError, "MaxTradeID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.MaxTradeID, buf, sizeof(self->data.MaxTradeID));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_MaxOrderMessageReference(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MaxOrderMessageReference Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference)) {
		PyErr_SetString(PyExc_ValueError, "MaxOrderMessageReference must be less than 7 bytes");
		return -1;
	}
	strncpy(self->data.MaxOrderMessageReference, buf, sizeof(self->data.MaxOrderMessageReference));
	return 0;
}

static int PyCThostFtdcTraderOfferField_set_OrderCancelAlg(PyCThostFtdcTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderCancelAlg Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderCancelAlg)) {
		PyErr_SetString(PyExc_ValueError, "OrderCancelAlg must be less than 1 bytes");
		return -1;
	}
	self->data.OrderCancelAlg = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcTraderOfferField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcTraderOfferField_get_ExchangeID, (setter)PyCThostFtdcTraderOfferField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcTraderOfferField_get_TraderID, (setter)PyCThostFtdcTraderOfferField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcTraderOfferField_get_ParticipantID, (setter)PyCThostFtdcTraderOfferField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcTraderOfferField_get_Password, (setter)PyCThostFtdcTraderOfferField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcTraderOfferField_get_InstallID, (setter)PyCThostFtdcTraderOfferField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderLocalID", (getter)PyCThostFtdcTraderOfferField_get_OrderLocalID, (setter)PyCThostFtdcTraderOfferField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
	 {(char *)"TraderConnectStatus", (getter)PyCThostFtdcTraderOfferField_get_TraderConnectStatus, (setter)PyCThostFtdcTraderOfferField_set_TraderConnectStatus, (char *)"TraderConnectStatus", NULL},
	 {(char *)"ConnectRequestDate", (getter)PyCThostFtdcTraderOfferField_get_ConnectRequestDate, (setter)PyCThostFtdcTraderOfferField_set_ConnectRequestDate, (char *)"ConnectRequestDate", NULL},
	 {(char *)"ConnectRequestTime", (getter)PyCThostFtdcTraderOfferField_get_ConnectRequestTime, (setter)PyCThostFtdcTraderOfferField_set_ConnectRequestTime, (char *)"ConnectRequestTime", NULL},
	 {(char *)"LastReportDate", (getter)PyCThostFtdcTraderOfferField_get_LastReportDate, (setter)PyCThostFtdcTraderOfferField_set_LastReportDate, (char *)"LastReportDate", NULL},
	 {(char *)"LastReportTime", (getter)PyCThostFtdcTraderOfferField_get_LastReportTime, (setter)PyCThostFtdcTraderOfferField_set_LastReportTime, (char *)"LastReportTime", NULL},
	 {(char *)"ConnectDate", (getter)PyCThostFtdcTraderOfferField_get_ConnectDate, (setter)PyCThostFtdcTraderOfferField_set_ConnectDate, (char *)"ConnectDate", NULL},
	 {(char *)"ConnectTime", (getter)PyCThostFtdcTraderOfferField_get_ConnectTime, (setter)PyCThostFtdcTraderOfferField_set_ConnectTime, (char *)"ConnectTime", NULL},
	 {(char *)"StartDate", (getter)PyCThostFtdcTraderOfferField_get_StartDate, (setter)PyCThostFtdcTraderOfferField_set_StartDate, (char *)"StartDate", NULL},
	 {(char *)"StartTime", (getter)PyCThostFtdcTraderOfferField_get_StartTime, (setter)PyCThostFtdcTraderOfferField_set_StartTime, (char *)"StartTime", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcTraderOfferField_get_TradingDay, (setter)PyCThostFtdcTraderOfferField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcTraderOfferField_get_BrokerID, (setter)PyCThostFtdcTraderOfferField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"MaxTradeID", (getter)PyCThostFtdcTraderOfferField_get_MaxTradeID, (setter)PyCThostFtdcTraderOfferField_set_MaxTradeID, (char *)"MaxTradeID", NULL},
	 {(char *)"MaxOrderMessageReference", (getter)PyCThostFtdcTraderOfferField_get_MaxOrderMessageReference, (setter)PyCThostFtdcTraderOfferField_set_MaxOrderMessageReference, (char *)"MaxOrderMessageReference", NULL},
	 {(char *)"OrderCancelAlg", (getter)PyCThostFtdcTraderOfferField_get_OrderCancelAlg, (setter)PyCThostFtdcTraderOfferField_set_OrderCancelAlg, (char *)"OrderCancelAlg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTraderOfferFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTraderOfferField",	/* tp_name */
	sizeof(PyCThostFtdcTraderOfferField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTraderOfferField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTraderOfferField_repr,   /* tp_repr */
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
	"CThostFtdcTraderOfferField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTraderOfferField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTraderOfferField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTraderOfferField_new,       /* tp_new */
};

int PyCThostFtdcTraderOfferFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTraderOfferField  */
	if (PyType_Ready(&PyCThostFtdcTraderOfferFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTraderOfferField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTraderOfferFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTraderOfferField", (PyObject *)&PyCThostFtdcTraderOfferFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTraderOfferField to module");
        Py_DECREF(&PyCThostFtdcTraderOfferFieldType);
		return -1;
    }

    return 0;
}
