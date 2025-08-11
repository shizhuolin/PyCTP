
#include "PyCThostFtdcExecOrderActionField.h"



static PyObject *PyCThostFtdcExecOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExecOrderActionField *self = (PyCThostFtdcExecOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExecOrderActionField_init(PyCThostFtdcExecOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExecOrderActionRef", "ExecOrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ExecOrderSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "ExecOrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "ActionType", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pExecOrderActionField_BrokerID = NULL;
	Py_ssize_t pExecOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pExecOrderActionField_InvestorID = NULL;
	Py_ssize_t pExecOrderActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pExecOrderActionField_ExecOrderActionRef = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pExecOrderActionField_ExecOrderRef = NULL;
	Py_ssize_t pExecOrderActionField_ExecOrderRef_len = 0;

	//TThostFtdcRequestIDType int
	int pExecOrderActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pExecOrderActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pExecOrderActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pExecOrderActionField_ExchangeID = NULL;
	Py_ssize_t pExecOrderActionField_ExchangeID_len = 0;

	//TThostFtdcExecOrderSysIDType char[21]
	const char *pExecOrderActionField_ExecOrderSysID = NULL;
	Py_ssize_t pExecOrderActionField_ExecOrderSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pExecOrderActionField_ActionFlag = 0;

	//TThostFtdcDateType char[9]
	const char *pExecOrderActionField_ActionDate = NULL;
	Py_ssize_t pExecOrderActionField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExecOrderActionField_ActionTime = NULL;
	Py_ssize_t pExecOrderActionField_ActionTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExecOrderActionField_TraderID = NULL;
	Py_ssize_t pExecOrderActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExecOrderActionField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExecOrderActionField_ExecOrderLocalID = NULL;
	Py_ssize_t pExecOrderActionField_ExecOrderLocalID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExecOrderActionField_ActionLocalID = NULL;
	Py_ssize_t pExecOrderActionField_ActionLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExecOrderActionField_ParticipantID = NULL;
	Py_ssize_t pExecOrderActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExecOrderActionField_ClientID = NULL;
	Py_ssize_t pExecOrderActionField_ClientID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExecOrderActionField_BusinessUnit = NULL;
	Py_ssize_t pExecOrderActionField_BusinessUnit_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pExecOrderActionField_OrderActionStatus = 0;

	//TThostFtdcUserIDType char[16]
	const char *pExecOrderActionField_UserID = NULL;
	Py_ssize_t pExecOrderActionField_UserID_len = 0;

	//TThostFtdcActionTypeType char
	char pExecOrderActionField_ActionType = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pExecOrderActionField_StatusMsg = NULL;
	Py_ssize_t pExecOrderActionField_StatusMsg_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pExecOrderActionField_reserve1 = NULL;
	Py_ssize_t pExecOrderActionField_reserve1_len = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pExecOrderActionField_BranchID = NULL;
	Py_ssize_t pExecOrderActionField_BranchID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pExecOrderActionField_InvestUnitID = NULL;
	Py_ssize_t pExecOrderActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExecOrderActionField_reserve2 = NULL;
	Py_ssize_t pExecOrderActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExecOrderActionField_MacAddress = NULL;
	Py_ssize_t pExecOrderActionField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pExecOrderActionField_InstrumentID = NULL;
	Py_ssize_t pExecOrderActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExecOrderActionField_IPAddress = NULL;
	Py_ssize_t pExecOrderActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#iy#y#y#y#y#cy#cy#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#is#s#s#s#s#cs#cs#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pExecOrderActionField_BrokerID, &pExecOrderActionField_BrokerID_len
		, &pExecOrderActionField_InvestorID, &pExecOrderActionField_InvestorID_len
		, &pExecOrderActionField_ExecOrderActionRef
		, &pExecOrderActionField_ExecOrderRef, &pExecOrderActionField_ExecOrderRef_len
		, &pExecOrderActionField_RequestID
		, &pExecOrderActionField_FrontID
		, &pExecOrderActionField_SessionID
		, &pExecOrderActionField_ExchangeID, &pExecOrderActionField_ExchangeID_len
		, &pExecOrderActionField_ExecOrderSysID, &pExecOrderActionField_ExecOrderSysID_len
		, &pExecOrderActionField_ActionFlag
		, &pExecOrderActionField_ActionDate, &pExecOrderActionField_ActionDate_len
		, &pExecOrderActionField_ActionTime, &pExecOrderActionField_ActionTime_len
		, &pExecOrderActionField_TraderID, &pExecOrderActionField_TraderID_len
		, &pExecOrderActionField_InstallID
		, &pExecOrderActionField_ExecOrderLocalID, &pExecOrderActionField_ExecOrderLocalID_len
		, &pExecOrderActionField_ActionLocalID, &pExecOrderActionField_ActionLocalID_len
		, &pExecOrderActionField_ParticipantID, &pExecOrderActionField_ParticipantID_len
		, &pExecOrderActionField_ClientID, &pExecOrderActionField_ClientID_len
		, &pExecOrderActionField_BusinessUnit, &pExecOrderActionField_BusinessUnit_len
		, &pExecOrderActionField_OrderActionStatus
		, &pExecOrderActionField_UserID, &pExecOrderActionField_UserID_len
		, &pExecOrderActionField_ActionType
		, &pExecOrderActionField_StatusMsg, &pExecOrderActionField_StatusMsg_len
		, &pExecOrderActionField_reserve1, &pExecOrderActionField_reserve1_len
		, &pExecOrderActionField_BranchID, &pExecOrderActionField_BranchID_len
		, &pExecOrderActionField_InvestUnitID, &pExecOrderActionField_InvestUnitID_len
		, &pExecOrderActionField_reserve2, &pExecOrderActionField_reserve2_len
		, &pExecOrderActionField_MacAddress, &pExecOrderActionField_MacAddress_len
		, &pExecOrderActionField_InstrumentID, &pExecOrderActionField_InstrumentID_len
		, &pExecOrderActionField_IPAddress, &pExecOrderActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pExecOrderActionField_BrokerID != NULL) {
		if(pExecOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pExecOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pExecOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pExecOrderActionField_InvestorID != NULL) {
		if(pExecOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pExecOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pExecOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.ExecOrderActionRef = pExecOrderActionField_ExecOrderActionRef;

	//TThostFtdcOrderRefType char[13]
	if(pExecOrderActionField_ExecOrderRef != NULL) {
		if(pExecOrderActionField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", pExecOrderActionField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
			return -1;
		}
		strncpy(self->data.ExecOrderRef, pExecOrderActionField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
		pExecOrderActionField_ExecOrderRef = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pExecOrderActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pExecOrderActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pExecOrderActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pExecOrderActionField_ExchangeID != NULL) {
		if(pExecOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExecOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExecOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcExecOrderSysIDType char[21]
	if(pExecOrderActionField_ExecOrderSysID != NULL) {
		if(pExecOrderActionField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
			return -1;
		}
		strncpy(self->data.ExecOrderSysID, pExecOrderActionField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
		pExecOrderActionField_ExecOrderSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pExecOrderActionField_ActionFlag;

	//TThostFtdcDateType char[9]
	if(pExecOrderActionField_ActionDate != NULL) {
		if(pExecOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pExecOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pExecOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
		pExecOrderActionField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExecOrderActionField_ActionTime != NULL) {
		if(pExecOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pExecOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pExecOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
		pExecOrderActionField_ActionTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExecOrderActionField_TraderID != NULL) {
		if(pExecOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExecOrderActionField_TraderID, sizeof(self->data.TraderID) );
		pExecOrderActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExecOrderActionField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExecOrderActionField_ExecOrderLocalID != NULL) {
		if(pExecOrderActionField_ExecOrderLocalID_len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_ExecOrderLocalID_len, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
			return -1;
		}
		strncpy(self->data.ExecOrderLocalID, pExecOrderActionField_ExecOrderLocalID, sizeof(self->data.ExecOrderLocalID) );
		pExecOrderActionField_ExecOrderLocalID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pExecOrderActionField_ActionLocalID != NULL) {
		if(pExecOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pExecOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pExecOrderActionField_ActionLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExecOrderActionField_ParticipantID != NULL) {
		if(pExecOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExecOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExecOrderActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExecOrderActionField_ClientID != NULL) {
		if(pExecOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExecOrderActionField_ClientID, sizeof(self->data.ClientID) );
		pExecOrderActionField_ClientID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pExecOrderActionField_BusinessUnit != NULL) {
		if(pExecOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExecOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExecOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExecOrderActionField_BusinessUnit = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pExecOrderActionField_OrderActionStatus;

	//TThostFtdcUserIDType char[16]
	if(pExecOrderActionField_UserID != NULL) {
		if(pExecOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pExecOrderActionField_UserID, sizeof(self->data.UserID) );
		pExecOrderActionField_UserID = NULL;
	}

	//TThostFtdcActionTypeType char
	self->data.ActionType = pExecOrderActionField_ActionType;

	//TThostFtdcErrorMsgType char[81]
	if(pExecOrderActionField_StatusMsg != NULL) {
		if(pExecOrderActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pExecOrderActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pExecOrderActionField_StatusMsg, sizeof(self->data.StatusMsg) );
		pExecOrderActionField_StatusMsg = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pExecOrderActionField_reserve1 != NULL) {
		if(pExecOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExecOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExecOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pExecOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcBranchIDType char[9]
	if(pExecOrderActionField_BranchID != NULL) {
		if(pExecOrderActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pExecOrderActionField_BranchID, sizeof(self->data.BranchID) );
		pExecOrderActionField_BranchID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pExecOrderActionField_InvestUnitID != NULL) {
		if(pExecOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pExecOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pExecOrderActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pExecOrderActionField_reserve2 != NULL) {
		if(pExecOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pExecOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pExecOrderActionField_reserve2, sizeof(self->data.reserve2) );
		pExecOrderActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExecOrderActionField_MacAddress != NULL) {
		if(pExecOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExecOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExecOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pExecOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pExecOrderActionField_InstrumentID != NULL) {
		if(pExecOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pExecOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pExecOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pExecOrderActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pExecOrderActionField_IPAddress != NULL) {
		if(pExecOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExecOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExecOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pExecOrderActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcExecOrderActionField_dealloc(PyCThostFtdcExecOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExecOrderActionField_repr(PyCThostFtdcExecOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ExecOrderActionRef", self->data.ExecOrderActionRef
		, "ExecOrderRef", self->data.ExecOrderRef 
		, "RequestID", self->data.RequestID
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "ExchangeID", self->data.ExchangeID 
		, "ExecOrderSysID", self->data.ExecOrderSysID 
		, "ActionFlag", self->data.ActionFlag
		, "ActionDate", self->data.ActionDate 
		, "ActionTime", self->data.ActionTime 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "ExecOrderLocalID", self->data.ExecOrderLocalID 
		, "ActionLocalID", self->data.ActionLocalID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "BusinessUnit", self->data.BusinessUnit 
		, "OrderActionStatus", self->data.OrderActionStatus
		, "UserID", self->data.UserID 
		, "ActionType", self->data.ActionType
		, "StatusMsg", self->data.StatusMsg 
		, "reserve1", self->data.reserve1 
		, "BranchID", self->data.BranchID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExecOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_BrokerID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_InvestorID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ExecOrderActionRef(PyCThostFtdcExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ExecOrderActionRef);
#else 
	return PyInt_FromLong(self->data.ExecOrderActionRef);
#endif 
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ExecOrderRef(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderRef);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_RequestID(PyCThostFtdcExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcExecOrderActionField_get_FrontID(PyCThostFtdcExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcExecOrderActionField_get_SessionID(PyCThostFtdcExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ExchangeID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ExecOrderSysID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderSysID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ActionFlag(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ActionDate(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ActionTime(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_TraderID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_InstallID(PyCThostFtdcExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ExecOrderLocalID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderLocalID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ActionLocalID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ParticipantID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ClientID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_BusinessUnit(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_OrderActionStatus(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_UserID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_ActionType(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_StatusMsg(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_reserve1(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_BranchID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_InvestUnitID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_reserve2(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_MacAddress(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_InstrumentID(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcExecOrderActionField_get_IPAddress(PyCThostFtdcExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcExecOrderActionField_set_BrokerID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_InvestorID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_ExecOrderActionRef(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderActionRef Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ExecOrderActionRef Expected int"); 
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
    self->data.ExecOrderActionRef = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExecOrderActionField_set_ExecOrderRef(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecOrderRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
		PyErr_SetString(PyExc_ValueError, "ExecOrderRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ExecOrderRef, buf, sizeof(self->data.ExecOrderRef));
	return 0;
}

static int PyCThostFtdcExecOrderActionField_set_RequestID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_FrontID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_SessionID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_ExchangeID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_ExecOrderSysID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ExecOrderSysID, buf, sizeof(self->data.ExecOrderSysID));
	return 0;
}

static int PyCThostFtdcExecOrderActionField_set_ActionFlag(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionFlag)) {
		PyErr_SetString(PyExc_ValueError, "ActionFlag must be less than 1 bytes");
		return -1;
	}
	self->data.ActionFlag = *buf;
	return 0;
}

static int PyCThostFtdcExecOrderActionField_set_ActionDate(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_ActionTime(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_TraderID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_InstallID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_ExecOrderLocalID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecOrderLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
		PyErr_SetString(PyExc_ValueError, "ExecOrderLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ExecOrderLocalID, buf, sizeof(self->data.ExecOrderLocalID));
	return 0;
}

static int PyCThostFtdcExecOrderActionField_set_ActionLocalID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_ParticipantID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_ClientID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_BusinessUnit(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_OrderActionStatus(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_UserID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_ActionType(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionType)) {
		PyErr_SetString(PyExc_ValueError, "ActionType must be less than 1 bytes");
		return -1;
	}
	self->data.ActionType = *buf;
	return 0;
}

static int PyCThostFtdcExecOrderActionField_set_StatusMsg(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_reserve1(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_BranchID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BranchID)) {
		PyErr_SetString(PyExc_ValueError, "BranchID must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.BranchID, buf, sizeof(self->data.BranchID));
	return 0;
}

static int PyCThostFtdcExecOrderActionField_set_InvestUnitID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_reserve2(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcExecOrderActionField_set_MacAddress(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_InstrumentID(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderActionField_set_IPAddress(PyCThostFtdcExecOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExecOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcExecOrderActionField_get_BrokerID, (setter)PyCThostFtdcExecOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcExecOrderActionField_get_InvestorID, (setter)PyCThostFtdcExecOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExecOrderActionRef", (getter)PyCThostFtdcExecOrderActionField_get_ExecOrderActionRef, (setter)PyCThostFtdcExecOrderActionField_set_ExecOrderActionRef, (char *)"ExecOrderActionRef", NULL},
	 {(char *)"ExecOrderRef", (getter)PyCThostFtdcExecOrderActionField_get_ExecOrderRef, (setter)PyCThostFtdcExecOrderActionField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcExecOrderActionField_get_RequestID, (setter)PyCThostFtdcExecOrderActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcExecOrderActionField_get_FrontID, (setter)PyCThostFtdcExecOrderActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcExecOrderActionField_get_SessionID, (setter)PyCThostFtdcExecOrderActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExecOrderActionField_get_ExchangeID, (setter)PyCThostFtdcExecOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ExecOrderSysID", (getter)PyCThostFtdcExecOrderActionField_get_ExecOrderSysID, (setter)PyCThostFtdcExecOrderActionField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcExecOrderActionField_get_ActionFlag, (setter)PyCThostFtdcExecOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcExecOrderActionField_get_ActionDate, (setter)PyCThostFtdcExecOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
	 {(char *)"ActionTime", (getter)PyCThostFtdcExecOrderActionField_get_ActionTime, (setter)PyCThostFtdcExecOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExecOrderActionField_get_TraderID, (setter)PyCThostFtdcExecOrderActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExecOrderActionField_get_InstallID, (setter)PyCThostFtdcExecOrderActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"ExecOrderLocalID", (getter)PyCThostFtdcExecOrderActionField_get_ExecOrderLocalID, (setter)PyCThostFtdcExecOrderActionField_set_ExecOrderLocalID, (char *)"ExecOrderLocalID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcExecOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcExecOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExecOrderActionField_get_ParticipantID, (setter)PyCThostFtdcExecOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExecOrderActionField_get_ClientID, (setter)PyCThostFtdcExecOrderActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExecOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcExecOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcExecOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcExecOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcExecOrderActionField_get_UserID, (setter)PyCThostFtdcExecOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"ActionType", (getter)PyCThostFtdcExecOrderActionField_get_ActionType, (setter)PyCThostFtdcExecOrderActionField_set_ActionType, (char *)"ActionType", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcExecOrderActionField_get_StatusMsg, (setter)PyCThostFtdcExecOrderActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExecOrderActionField_get_reserve1, (setter)PyCThostFtdcExecOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcExecOrderActionField_get_BranchID, (setter)PyCThostFtdcExecOrderActionField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcExecOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcExecOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcExecOrderActionField_get_reserve2, (setter)PyCThostFtdcExecOrderActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExecOrderActionField_get_MacAddress, (setter)PyCThostFtdcExecOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcExecOrderActionField_get_InstrumentID, (setter)PyCThostFtdcExecOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExecOrderActionField_get_IPAddress, (setter)PyCThostFtdcExecOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExecOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExecOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcExecOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExecOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExecOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcExecOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExecOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExecOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExecOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcExecOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExecOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcExecOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExecOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExecOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExecOrderActionField", (PyObject *)&PyCThostFtdcExecOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExecOrderActionField to module");
        Py_DECREF(&PyCThostFtdcExecOrderActionFieldType);
		return -1;
    }

    return 0;
}
