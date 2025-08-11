
#include "PyCThostFtdcMDTraderOfferField.h"



static PyObject *PyCThostFtdcMDTraderOfferField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMDTraderOfferField *self = (PyCThostFtdcMDTraderOfferField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcMDTraderOfferField_init(PyCThostFtdcMDTraderOfferField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "TraderID", "ParticipantID", "Password", "InstallID", "OrderLocalID", "TraderConnectStatus", "ConnectRequestDate", "ConnectRequestTime", "LastReportDate", "LastReportTime", "ConnectDate", "ConnectTime", "StartDate", "StartTime", "TradingDay", "BrokerID", "MaxTradeID", "MaxOrderMessageReference", "OrderCancelAlg",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pMDTraderOfferField_ExchangeID = NULL;
	Py_ssize_t pMDTraderOfferField_ExchangeID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pMDTraderOfferField_TraderID = NULL;
	Py_ssize_t pMDTraderOfferField_TraderID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pMDTraderOfferField_ParticipantID = NULL;
	Py_ssize_t pMDTraderOfferField_ParticipantID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pMDTraderOfferField_Password = NULL;
	Py_ssize_t pMDTraderOfferField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pMDTraderOfferField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pMDTraderOfferField_OrderLocalID = NULL;
	Py_ssize_t pMDTraderOfferField_OrderLocalID_len = 0;

	//TThostFtdcTraderConnectStatusType char
	char pMDTraderOfferField_TraderConnectStatus = 0;

	//TThostFtdcDateType char[9]
	const char *pMDTraderOfferField_ConnectRequestDate = NULL;
	Py_ssize_t pMDTraderOfferField_ConnectRequestDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pMDTraderOfferField_ConnectRequestTime = NULL;
	Py_ssize_t pMDTraderOfferField_ConnectRequestTime_len = 0;

	//TThostFtdcDateType char[9]
	const char *pMDTraderOfferField_LastReportDate = NULL;
	Py_ssize_t pMDTraderOfferField_LastReportDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pMDTraderOfferField_LastReportTime = NULL;
	Py_ssize_t pMDTraderOfferField_LastReportTime_len = 0;

	//TThostFtdcDateType char[9]
	const char *pMDTraderOfferField_ConnectDate = NULL;
	Py_ssize_t pMDTraderOfferField_ConnectDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pMDTraderOfferField_ConnectTime = NULL;
	Py_ssize_t pMDTraderOfferField_ConnectTime_len = 0;

	//TThostFtdcDateType char[9]
	const char *pMDTraderOfferField_StartDate = NULL;
	Py_ssize_t pMDTraderOfferField_StartDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pMDTraderOfferField_StartTime = NULL;
	Py_ssize_t pMDTraderOfferField_StartTime_len = 0;

	//TThostFtdcDateType char[9]
	const char *pMDTraderOfferField_TradingDay = NULL;
	Py_ssize_t pMDTraderOfferField_TradingDay_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pMDTraderOfferField_BrokerID = NULL;
	Py_ssize_t pMDTraderOfferField_BrokerID_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pMDTraderOfferField_MaxTradeID = NULL;
	Py_ssize_t pMDTraderOfferField_MaxTradeID_len = 0;

	//TThostFtdcReturnCodeType char[7]
	const char *pMDTraderOfferField_MaxOrderMessageReference = NULL;
	Py_ssize_t pMDTraderOfferField_MaxOrderMessageReference_len = 0;

	//TThostFtdcOrderCancelAlgType char
	char pMDTraderOfferField_OrderCancelAlg = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#cy#y#y#y#y#y#y#y#y#y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#is#cs#s#s#s#s#s#s#s#s#s#s#s#c", (char **)kwlist
#endif

		, &pMDTraderOfferField_ExchangeID, &pMDTraderOfferField_ExchangeID_len
		, &pMDTraderOfferField_TraderID, &pMDTraderOfferField_TraderID_len
		, &pMDTraderOfferField_ParticipantID, &pMDTraderOfferField_ParticipantID_len
		, &pMDTraderOfferField_Password, &pMDTraderOfferField_Password_len
		, &pMDTraderOfferField_InstallID
		, &pMDTraderOfferField_OrderLocalID, &pMDTraderOfferField_OrderLocalID_len
		, &pMDTraderOfferField_TraderConnectStatus
		, &pMDTraderOfferField_ConnectRequestDate, &pMDTraderOfferField_ConnectRequestDate_len
		, &pMDTraderOfferField_ConnectRequestTime, &pMDTraderOfferField_ConnectRequestTime_len
		, &pMDTraderOfferField_LastReportDate, &pMDTraderOfferField_LastReportDate_len
		, &pMDTraderOfferField_LastReportTime, &pMDTraderOfferField_LastReportTime_len
		, &pMDTraderOfferField_ConnectDate, &pMDTraderOfferField_ConnectDate_len
		, &pMDTraderOfferField_ConnectTime, &pMDTraderOfferField_ConnectTime_len
		, &pMDTraderOfferField_StartDate, &pMDTraderOfferField_StartDate_len
		, &pMDTraderOfferField_StartTime, &pMDTraderOfferField_StartTime_len
		, &pMDTraderOfferField_TradingDay, &pMDTraderOfferField_TradingDay_len
		, &pMDTraderOfferField_BrokerID, &pMDTraderOfferField_BrokerID_len
		, &pMDTraderOfferField_MaxTradeID, &pMDTraderOfferField_MaxTradeID_len
		, &pMDTraderOfferField_MaxOrderMessageReference, &pMDTraderOfferField_MaxOrderMessageReference_len
		, &pMDTraderOfferField_OrderCancelAlg


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pMDTraderOfferField_ExchangeID != NULL) {
		if(pMDTraderOfferField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pMDTraderOfferField_ExchangeID, sizeof(self->data.ExchangeID) );
		pMDTraderOfferField_ExchangeID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pMDTraderOfferField_TraderID != NULL) {
		if(pMDTraderOfferField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pMDTraderOfferField_TraderID, sizeof(self->data.TraderID) );
		pMDTraderOfferField_TraderID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pMDTraderOfferField_ParticipantID != NULL) {
		if(pMDTraderOfferField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pMDTraderOfferField_ParticipantID, sizeof(self->data.ParticipantID) );
		pMDTraderOfferField_ParticipantID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pMDTraderOfferField_Password != NULL) {
		if(pMDTraderOfferField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pMDTraderOfferField_Password, sizeof(self->data.Password) );
		pMDTraderOfferField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pMDTraderOfferField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pMDTraderOfferField_OrderLocalID != NULL) {
		if(pMDTraderOfferField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
			return -1;
		}
		strncpy(self->data.OrderLocalID, pMDTraderOfferField_OrderLocalID, sizeof(self->data.OrderLocalID) );
		pMDTraderOfferField_OrderLocalID = NULL;
	}

	//TThostFtdcTraderConnectStatusType char
	self->data.TraderConnectStatus = pMDTraderOfferField_TraderConnectStatus;

	//TThostFtdcDateType char[9]
	if(pMDTraderOfferField_ConnectRequestDate != NULL) {
		if(pMDTraderOfferField_ConnectRequestDate_len > (Py_ssize_t)sizeof(self->data.ConnectRequestDate)) {
			PyErr_Format(PyExc_ValueError, "ConnectRequestDate too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_ConnectRequestDate_len, (Py_ssize_t)sizeof(self->data.ConnectRequestDate));
			return -1;
		}
		strncpy(self->data.ConnectRequestDate, pMDTraderOfferField_ConnectRequestDate, sizeof(self->data.ConnectRequestDate) );
		pMDTraderOfferField_ConnectRequestDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pMDTraderOfferField_ConnectRequestTime != NULL) {
		if(pMDTraderOfferField_ConnectRequestTime_len > (Py_ssize_t)sizeof(self->data.ConnectRequestTime)) {
			PyErr_Format(PyExc_ValueError, "ConnectRequestTime too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_ConnectRequestTime_len, (Py_ssize_t)sizeof(self->data.ConnectRequestTime));
			return -1;
		}
		strncpy(self->data.ConnectRequestTime, pMDTraderOfferField_ConnectRequestTime, sizeof(self->data.ConnectRequestTime) );
		pMDTraderOfferField_ConnectRequestTime = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pMDTraderOfferField_LastReportDate != NULL) {
		if(pMDTraderOfferField_LastReportDate_len > (Py_ssize_t)sizeof(self->data.LastReportDate)) {
			PyErr_Format(PyExc_ValueError, "LastReportDate too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_LastReportDate_len, (Py_ssize_t)sizeof(self->data.LastReportDate));
			return -1;
		}
		strncpy(self->data.LastReportDate, pMDTraderOfferField_LastReportDate, sizeof(self->data.LastReportDate) );
		pMDTraderOfferField_LastReportDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pMDTraderOfferField_LastReportTime != NULL) {
		if(pMDTraderOfferField_LastReportTime_len > (Py_ssize_t)sizeof(self->data.LastReportTime)) {
			PyErr_Format(PyExc_ValueError, "LastReportTime too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_LastReportTime_len, (Py_ssize_t)sizeof(self->data.LastReportTime));
			return -1;
		}
		strncpy(self->data.LastReportTime, pMDTraderOfferField_LastReportTime, sizeof(self->data.LastReportTime) );
		pMDTraderOfferField_LastReportTime = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pMDTraderOfferField_ConnectDate != NULL) {
		if(pMDTraderOfferField_ConnectDate_len > (Py_ssize_t)sizeof(self->data.ConnectDate)) {
			PyErr_Format(PyExc_ValueError, "ConnectDate too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_ConnectDate_len, (Py_ssize_t)sizeof(self->data.ConnectDate));
			return -1;
		}
		strncpy(self->data.ConnectDate, pMDTraderOfferField_ConnectDate, sizeof(self->data.ConnectDate) );
		pMDTraderOfferField_ConnectDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pMDTraderOfferField_ConnectTime != NULL) {
		if(pMDTraderOfferField_ConnectTime_len > (Py_ssize_t)sizeof(self->data.ConnectTime)) {
			PyErr_Format(PyExc_ValueError, "ConnectTime too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_ConnectTime_len, (Py_ssize_t)sizeof(self->data.ConnectTime));
			return -1;
		}
		strncpy(self->data.ConnectTime, pMDTraderOfferField_ConnectTime, sizeof(self->data.ConnectTime) );
		pMDTraderOfferField_ConnectTime = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pMDTraderOfferField_StartDate != NULL) {
		if(pMDTraderOfferField_StartDate_len > (Py_ssize_t)sizeof(self->data.StartDate)) {
			PyErr_Format(PyExc_ValueError, "StartDate too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_StartDate_len, (Py_ssize_t)sizeof(self->data.StartDate));
			return -1;
		}
		strncpy(self->data.StartDate, pMDTraderOfferField_StartDate, sizeof(self->data.StartDate) );
		pMDTraderOfferField_StartDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pMDTraderOfferField_StartTime != NULL) {
		if(pMDTraderOfferField_StartTime_len > (Py_ssize_t)sizeof(self->data.StartTime)) {
			PyErr_Format(PyExc_ValueError, "StartTime too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_StartTime_len, (Py_ssize_t)sizeof(self->data.StartTime));
			return -1;
		}
		strncpy(self->data.StartTime, pMDTraderOfferField_StartTime, sizeof(self->data.StartTime) );
		pMDTraderOfferField_StartTime = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pMDTraderOfferField_TradingDay != NULL) {
		if(pMDTraderOfferField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pMDTraderOfferField_TradingDay, sizeof(self->data.TradingDay) );
		pMDTraderOfferField_TradingDay = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pMDTraderOfferField_BrokerID != NULL) {
		if(pMDTraderOfferField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pMDTraderOfferField_BrokerID, sizeof(self->data.BrokerID) );
		pMDTraderOfferField_BrokerID = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pMDTraderOfferField_MaxTradeID != NULL) {
		if(pMDTraderOfferField_MaxTradeID_len > (Py_ssize_t)sizeof(self->data.MaxTradeID)) {
			PyErr_Format(PyExc_ValueError, "MaxTradeID too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_MaxTradeID_len, (Py_ssize_t)sizeof(self->data.MaxTradeID));
			return -1;
		}
		strncpy(self->data.MaxTradeID, pMDTraderOfferField_MaxTradeID, sizeof(self->data.MaxTradeID) );
		pMDTraderOfferField_MaxTradeID = NULL;
	}

	//TThostFtdcReturnCodeType char[7]
	if(pMDTraderOfferField_MaxOrderMessageReference != NULL) {
		if(pMDTraderOfferField_MaxOrderMessageReference_len > (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference)) {
			PyErr_Format(PyExc_ValueError, "MaxOrderMessageReference too long: length=%zd (max allowed is %zd)", pMDTraderOfferField_MaxOrderMessageReference_len, (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference));
			return -1;
		}
		strncpy(self->data.MaxOrderMessageReference, pMDTraderOfferField_MaxOrderMessageReference, sizeof(self->data.MaxOrderMessageReference) );
		pMDTraderOfferField_MaxOrderMessageReference = NULL;
	}

	//TThostFtdcOrderCancelAlgType char
	self->data.OrderCancelAlg = pMDTraderOfferField_OrderCancelAlg;



    return 0;
}

static void PyCThostFtdcMDTraderOfferField_dealloc(PyCThostFtdcMDTraderOfferField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMDTraderOfferField_repr(PyCThostFtdcMDTraderOfferField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMDTraderOfferField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_ExchangeID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_TraderID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_ParticipantID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_Password(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_InstallID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_OrderLocalID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderLocalID);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_TraderConnectStatus(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TraderConnectStatus), 1);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_ConnectRequestDate(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ConnectRequestDate);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_ConnectRequestTime(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ConnectRequestTime);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_LastReportDate(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.LastReportDate);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_LastReportTime(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.LastReportTime);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_ConnectDate(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ConnectDate);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_ConnectTime(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ConnectTime);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_StartDate(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.StartDate);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_StartTime(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.StartTime);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_TradingDay(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_BrokerID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_MaxTradeID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.MaxTradeID);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_MaxOrderMessageReference(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.MaxOrderMessageReference);
}

static PyObject *PyCThostFtdcMDTraderOfferField_get_OrderCancelAlg(PyCThostFtdcMDTraderOfferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderCancelAlg), 1);
}

static int PyCThostFtdcMDTraderOfferField_set_ExchangeID(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_TraderID(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_ParticipantID(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_Password(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_InstallID(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_OrderLocalID(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_TraderConnectStatus(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_ConnectRequestDate(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_ConnectRequestTime(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_LastReportDate(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_LastReportTime(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_ConnectDate(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_ConnectTime(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_StartDate(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_StartTime(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_TradingDay(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_BrokerID(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_MaxTradeID(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_MaxOrderMessageReference(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMDTraderOfferField_set_OrderCancelAlg(PyCThostFtdcMDTraderOfferField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcMDTraderOfferField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcMDTraderOfferField_get_ExchangeID, (setter)PyCThostFtdcMDTraderOfferField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcMDTraderOfferField_get_TraderID, (setter)PyCThostFtdcMDTraderOfferField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcMDTraderOfferField_get_ParticipantID, (setter)PyCThostFtdcMDTraderOfferField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcMDTraderOfferField_get_Password, (setter)PyCThostFtdcMDTraderOfferField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcMDTraderOfferField_get_InstallID, (setter)PyCThostFtdcMDTraderOfferField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderLocalID", (getter)PyCThostFtdcMDTraderOfferField_get_OrderLocalID, (setter)PyCThostFtdcMDTraderOfferField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
	 {(char *)"TraderConnectStatus", (getter)PyCThostFtdcMDTraderOfferField_get_TraderConnectStatus, (setter)PyCThostFtdcMDTraderOfferField_set_TraderConnectStatus, (char *)"TraderConnectStatus", NULL},
	 {(char *)"ConnectRequestDate", (getter)PyCThostFtdcMDTraderOfferField_get_ConnectRequestDate, (setter)PyCThostFtdcMDTraderOfferField_set_ConnectRequestDate, (char *)"ConnectRequestDate", NULL},
	 {(char *)"ConnectRequestTime", (getter)PyCThostFtdcMDTraderOfferField_get_ConnectRequestTime, (setter)PyCThostFtdcMDTraderOfferField_set_ConnectRequestTime, (char *)"ConnectRequestTime", NULL},
	 {(char *)"LastReportDate", (getter)PyCThostFtdcMDTraderOfferField_get_LastReportDate, (setter)PyCThostFtdcMDTraderOfferField_set_LastReportDate, (char *)"LastReportDate", NULL},
	 {(char *)"LastReportTime", (getter)PyCThostFtdcMDTraderOfferField_get_LastReportTime, (setter)PyCThostFtdcMDTraderOfferField_set_LastReportTime, (char *)"LastReportTime", NULL},
	 {(char *)"ConnectDate", (getter)PyCThostFtdcMDTraderOfferField_get_ConnectDate, (setter)PyCThostFtdcMDTraderOfferField_set_ConnectDate, (char *)"ConnectDate", NULL},
	 {(char *)"ConnectTime", (getter)PyCThostFtdcMDTraderOfferField_get_ConnectTime, (setter)PyCThostFtdcMDTraderOfferField_set_ConnectTime, (char *)"ConnectTime", NULL},
	 {(char *)"StartDate", (getter)PyCThostFtdcMDTraderOfferField_get_StartDate, (setter)PyCThostFtdcMDTraderOfferField_set_StartDate, (char *)"StartDate", NULL},
	 {(char *)"StartTime", (getter)PyCThostFtdcMDTraderOfferField_get_StartTime, (setter)PyCThostFtdcMDTraderOfferField_set_StartTime, (char *)"StartTime", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcMDTraderOfferField_get_TradingDay, (setter)PyCThostFtdcMDTraderOfferField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcMDTraderOfferField_get_BrokerID, (setter)PyCThostFtdcMDTraderOfferField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"MaxTradeID", (getter)PyCThostFtdcMDTraderOfferField_get_MaxTradeID, (setter)PyCThostFtdcMDTraderOfferField_set_MaxTradeID, (char *)"MaxTradeID", NULL},
	 {(char *)"MaxOrderMessageReference", (getter)PyCThostFtdcMDTraderOfferField_get_MaxOrderMessageReference, (setter)PyCThostFtdcMDTraderOfferField_set_MaxOrderMessageReference, (char *)"MaxOrderMessageReference", NULL},
	 {(char *)"OrderCancelAlg", (getter)PyCThostFtdcMDTraderOfferField_get_OrderCancelAlg, (setter)PyCThostFtdcMDTraderOfferField_set_OrderCancelAlg, (char *)"OrderCancelAlg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMDTraderOfferFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMDTraderOfferField",	/* tp_name */
	sizeof(PyCThostFtdcMDTraderOfferField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMDTraderOfferField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMDTraderOfferField_repr,   /* tp_repr */
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
	"CThostFtdcMDTraderOfferField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMDTraderOfferField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMDTraderOfferField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMDTraderOfferField_new,       /* tp_new */
};

int PyCThostFtdcMDTraderOfferFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMDTraderOfferField  */
	if (PyType_Ready(&PyCThostFtdcMDTraderOfferFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMDTraderOfferField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMDTraderOfferFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMDTraderOfferField", (PyObject *)&PyCThostFtdcMDTraderOfferFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMDTraderOfferField to module");
        Py_DECREF(&PyCThostFtdcMDTraderOfferFieldType);
		return -1;
    }

    return 0;
}
