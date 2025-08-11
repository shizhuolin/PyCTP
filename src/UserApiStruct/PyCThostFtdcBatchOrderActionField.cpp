
#include "PyCThostFtdcBatchOrderActionField.h"



static PyObject *PyCThostFtdcBatchOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBatchOrderActionField *self = (PyCThostFtdcBatchOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcBatchOrderActionField_init(PyCThostFtdcBatchOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OrderActionRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ActionDate", "ActionTime", "TraderID", "InstallID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "InvestUnitID", "reserve1", "MacAddress", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pBatchOrderActionField_BrokerID = NULL;
	Py_ssize_t pBatchOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pBatchOrderActionField_InvestorID = NULL;
	Py_ssize_t pBatchOrderActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pBatchOrderActionField_OrderActionRef = 0;

	//TThostFtdcRequestIDType int
	int pBatchOrderActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pBatchOrderActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pBatchOrderActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pBatchOrderActionField_ExchangeID = NULL;
	Py_ssize_t pBatchOrderActionField_ExchangeID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pBatchOrderActionField_ActionDate = NULL;
	Py_ssize_t pBatchOrderActionField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pBatchOrderActionField_ActionTime = NULL;
	Py_ssize_t pBatchOrderActionField_ActionTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pBatchOrderActionField_TraderID = NULL;
	Py_ssize_t pBatchOrderActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pBatchOrderActionField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pBatchOrderActionField_ActionLocalID = NULL;
	Py_ssize_t pBatchOrderActionField_ActionLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pBatchOrderActionField_ParticipantID = NULL;
	Py_ssize_t pBatchOrderActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pBatchOrderActionField_ClientID = NULL;
	Py_ssize_t pBatchOrderActionField_ClientID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pBatchOrderActionField_BusinessUnit = NULL;
	Py_ssize_t pBatchOrderActionField_BusinessUnit_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pBatchOrderActionField_OrderActionStatus = 0;

	//TThostFtdcUserIDType char[16]
	const char *pBatchOrderActionField_UserID = NULL;
	Py_ssize_t pBatchOrderActionField_UserID_len = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pBatchOrderActionField_StatusMsg = NULL;
	Py_ssize_t pBatchOrderActionField_StatusMsg_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pBatchOrderActionField_InvestUnitID = NULL;
	Py_ssize_t pBatchOrderActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pBatchOrderActionField_reserve1 = NULL;
	Py_ssize_t pBatchOrderActionField_reserve1_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pBatchOrderActionField_MacAddress = NULL;
	Py_ssize_t pBatchOrderActionField_MacAddress_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pBatchOrderActionField_IPAddress = NULL;
	Py_ssize_t pBatchOrderActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iiiiy#y#y#y#iy#y#y#y#cy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#iiiis#s#s#s#is#s#s#s#cs#s#s#s#s#s#", (char **)kwlist
#endif

		, &pBatchOrderActionField_BrokerID, &pBatchOrderActionField_BrokerID_len
		, &pBatchOrderActionField_InvestorID, &pBatchOrderActionField_InvestorID_len
		, &pBatchOrderActionField_OrderActionRef
		, &pBatchOrderActionField_RequestID
		, &pBatchOrderActionField_FrontID
		, &pBatchOrderActionField_SessionID
		, &pBatchOrderActionField_ExchangeID, &pBatchOrderActionField_ExchangeID_len
		, &pBatchOrderActionField_ActionDate, &pBatchOrderActionField_ActionDate_len
		, &pBatchOrderActionField_ActionTime, &pBatchOrderActionField_ActionTime_len
		, &pBatchOrderActionField_TraderID, &pBatchOrderActionField_TraderID_len
		, &pBatchOrderActionField_InstallID
		, &pBatchOrderActionField_ActionLocalID, &pBatchOrderActionField_ActionLocalID_len
		, &pBatchOrderActionField_ParticipantID, &pBatchOrderActionField_ParticipantID_len
		, &pBatchOrderActionField_ClientID, &pBatchOrderActionField_ClientID_len
		, &pBatchOrderActionField_BusinessUnit, &pBatchOrderActionField_BusinessUnit_len
		, &pBatchOrderActionField_OrderActionStatus
		, &pBatchOrderActionField_UserID, &pBatchOrderActionField_UserID_len
		, &pBatchOrderActionField_StatusMsg, &pBatchOrderActionField_StatusMsg_len
		, &pBatchOrderActionField_InvestUnitID, &pBatchOrderActionField_InvestUnitID_len
		, &pBatchOrderActionField_reserve1, &pBatchOrderActionField_reserve1_len
		, &pBatchOrderActionField_MacAddress, &pBatchOrderActionField_MacAddress_len
		, &pBatchOrderActionField_IPAddress, &pBatchOrderActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pBatchOrderActionField_BrokerID != NULL) {
		if(pBatchOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pBatchOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pBatchOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pBatchOrderActionField_InvestorID != NULL) {
		if(pBatchOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pBatchOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pBatchOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.OrderActionRef = pBatchOrderActionField_OrderActionRef;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pBatchOrderActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pBatchOrderActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pBatchOrderActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pBatchOrderActionField_ExchangeID != NULL) {
		if(pBatchOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pBatchOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pBatchOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pBatchOrderActionField_ActionDate != NULL) {
		if(pBatchOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pBatchOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
		pBatchOrderActionField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pBatchOrderActionField_ActionTime != NULL) {
		if(pBatchOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pBatchOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
		pBatchOrderActionField_ActionTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pBatchOrderActionField_TraderID != NULL) {
		if(pBatchOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pBatchOrderActionField_TraderID, sizeof(self->data.TraderID) );
		pBatchOrderActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pBatchOrderActionField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pBatchOrderActionField_ActionLocalID != NULL) {
		if(pBatchOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pBatchOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pBatchOrderActionField_ActionLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pBatchOrderActionField_ParticipantID != NULL) {
		if(pBatchOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pBatchOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pBatchOrderActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pBatchOrderActionField_ClientID != NULL) {
		if(pBatchOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pBatchOrderActionField_ClientID, sizeof(self->data.ClientID) );
		pBatchOrderActionField_ClientID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pBatchOrderActionField_BusinessUnit != NULL) {
		if(pBatchOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pBatchOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pBatchOrderActionField_BusinessUnit = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pBatchOrderActionField_OrderActionStatus;

	//TThostFtdcUserIDType char[16]
	if(pBatchOrderActionField_UserID != NULL) {
		if(pBatchOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pBatchOrderActionField_UserID, sizeof(self->data.UserID) );
		pBatchOrderActionField_UserID = NULL;
	}

	//TThostFtdcErrorMsgType char[81]
	if(pBatchOrderActionField_StatusMsg != NULL) {
		if(pBatchOrderActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pBatchOrderActionField_StatusMsg, sizeof(self->data.StatusMsg) );
		pBatchOrderActionField_StatusMsg = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pBatchOrderActionField_InvestUnitID != NULL) {
		if(pBatchOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pBatchOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pBatchOrderActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pBatchOrderActionField_reserve1 != NULL) {
		if(pBatchOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pBatchOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pBatchOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pBatchOrderActionField_MacAddress != NULL) {
		if(pBatchOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pBatchOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pBatchOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pBatchOrderActionField_IPAddress != NULL) {
		if(pBatchOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pBatchOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pBatchOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pBatchOrderActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcBatchOrderActionField_dealloc(PyCThostFtdcBatchOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBatchOrderActionField_repr(PyCThostFtdcBatchOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:i,s:i,s:i,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "OrderActionRef", self->data.OrderActionRef
		, "RequestID", self->data.RequestID
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "ExchangeID", self->data.ExchangeID 
		, "ActionDate", self->data.ActionDate 
		, "ActionTime", self->data.ActionTime 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "ActionLocalID", self->data.ActionLocalID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "BusinessUnit", self->data.BusinessUnit 
		, "OrderActionStatus", self->data.OrderActionStatus
		, "UserID", self->data.UserID 
		, "StatusMsg", self->data.StatusMsg 
		, "InvestUnitID", self->data.InvestUnitID 
		, "reserve1", self->data.reserve1 
		, "MacAddress", self->data.MacAddress 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBatchOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_BrokerID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_InvestorID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_OrderActionRef(PyCThostFtdcBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OrderActionRef);
#else 
	return PyInt_FromLong(self->data.OrderActionRef);
#endif 
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_RequestID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_FrontID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_SessionID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_ExchangeID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_ActionDate(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_ActionTime(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_TraderID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_InstallID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_ActionLocalID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_ParticipantID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_ClientID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_BusinessUnit(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_OrderActionStatus(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_UserID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_StatusMsg(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_InvestUnitID(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_reserve1(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_MacAddress(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcBatchOrderActionField_get_IPAddress(PyCThostFtdcBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcBatchOrderActionField_set_BrokerID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBatchOrderActionField_set_InvestorID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBatchOrderActionField_set_OrderActionRef(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionRef Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "OrderActionRef Expected int"); 
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
    self->data.OrderActionRef = (int)buf; 
    return 0; 
}

static int PyCThostFtdcBatchOrderActionField_set_RequestID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "RequestID Expected int"); 
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
    self->data.RequestID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcBatchOrderActionField_set_FrontID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "FrontID Expected int"); 
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
    self->data.FrontID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcBatchOrderActionField_set_SessionID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SessionID Expected int"); 
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
    self->data.SessionID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcBatchOrderActionField_set_ExchangeID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBatchOrderActionField_set_ActionDate(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
		PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ActionDate, buf, sizeof(self->data.ActionDate));
	return 0;
}

static int PyCThostFtdcBatchOrderActionField_set_ActionTime(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
		PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ActionTime, buf, sizeof(self->data.ActionTime));
	return 0;
}

static int PyCThostFtdcBatchOrderActionField_set_TraderID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBatchOrderActionField_set_InstallID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBatchOrderActionField_set_ActionLocalID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
		PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ActionLocalID, buf, sizeof(self->data.ActionLocalID));
	return 0;
}

static int PyCThostFtdcBatchOrderActionField_set_ParticipantID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBatchOrderActionField_set_ClientID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientID)) {
		PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
	return 0;
}

static int PyCThostFtdcBatchOrderActionField_set_BusinessUnit(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
		PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.BusinessUnit, buf, sizeof(self->data.BusinessUnit));
	return 0;
}

static int PyCThostFtdcBatchOrderActionField_set_OrderActionStatus(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderActionStatus)) {
		PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be less than 1 bytes");
		return -1;
	}
	self->data.OrderActionStatus = *buf;
	return 0;
}

static int PyCThostFtdcBatchOrderActionField_set_UserID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBatchOrderActionField_set_StatusMsg(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
		PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.StatusMsg, buf, sizeof(self->data.StatusMsg));
	return 0;
}

static int PyCThostFtdcBatchOrderActionField_set_InvestUnitID(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBatchOrderActionField_set_reserve1(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
		PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcBatchOrderActionField_set_MacAddress(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
		PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
	return 0;
}

static int PyCThostFtdcBatchOrderActionField_set_IPAddress(PyCThostFtdcBatchOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
		PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
	return 0;
}



static PyGetSetDef PyCThostFtdcBatchOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcBatchOrderActionField_get_BrokerID, (setter)PyCThostFtdcBatchOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcBatchOrderActionField_get_InvestorID, (setter)PyCThostFtdcBatchOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OrderActionRef", (getter)PyCThostFtdcBatchOrderActionField_get_OrderActionRef, (setter)PyCThostFtdcBatchOrderActionField_set_OrderActionRef, (char *)"OrderActionRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcBatchOrderActionField_get_RequestID, (setter)PyCThostFtdcBatchOrderActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcBatchOrderActionField_get_FrontID, (setter)PyCThostFtdcBatchOrderActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcBatchOrderActionField_get_SessionID, (setter)PyCThostFtdcBatchOrderActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcBatchOrderActionField_get_ExchangeID, (setter)PyCThostFtdcBatchOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcBatchOrderActionField_get_ActionDate, (setter)PyCThostFtdcBatchOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
	 {(char *)"ActionTime", (getter)PyCThostFtdcBatchOrderActionField_get_ActionTime, (setter)PyCThostFtdcBatchOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcBatchOrderActionField_get_TraderID, (setter)PyCThostFtdcBatchOrderActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcBatchOrderActionField_get_InstallID, (setter)PyCThostFtdcBatchOrderActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcBatchOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcBatchOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcBatchOrderActionField_get_ParticipantID, (setter)PyCThostFtdcBatchOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcBatchOrderActionField_get_ClientID, (setter)PyCThostFtdcBatchOrderActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcBatchOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcBatchOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcBatchOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcBatchOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcBatchOrderActionField_get_UserID, (setter)PyCThostFtdcBatchOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcBatchOrderActionField_get_StatusMsg, (setter)PyCThostFtdcBatchOrderActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcBatchOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcBatchOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcBatchOrderActionField_get_reserve1, (setter)PyCThostFtdcBatchOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcBatchOrderActionField_get_MacAddress, (setter)PyCThostFtdcBatchOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcBatchOrderActionField_get_IPAddress, (setter)PyCThostFtdcBatchOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBatchOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBatchOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcBatchOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBatchOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBatchOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcBatchOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBatchOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBatchOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBatchOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcBatchOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBatchOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcBatchOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBatchOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBatchOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBatchOrderActionField", (PyObject *)&PyCThostFtdcBatchOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBatchOrderActionField to module");
        Py_DECREF(&PyCThostFtdcBatchOrderActionFieldType);
		return -1;
    }

    return 0;
}
