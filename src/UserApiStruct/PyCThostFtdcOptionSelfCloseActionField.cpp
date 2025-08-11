
#include "PyCThostFtdcOptionSelfCloseActionField.h"



static PyObject *PyCThostFtdcOptionSelfCloseActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionSelfCloseActionField *self = (PyCThostFtdcOptionSelfCloseActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcOptionSelfCloseActionField_init(PyCThostFtdcOptionSelfCloseActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OptionSelfCloseActionRef", "OptionSelfCloseRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OptionSelfCloseSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "OptionSelfCloseLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pOptionSelfCloseActionField_BrokerID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pOptionSelfCloseActionField_InvestorID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pOptionSelfCloseActionField_OptionSelfCloseActionRef = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pOptionSelfCloseActionField_OptionSelfCloseRef = NULL;
	Py_ssize_t pOptionSelfCloseActionField_OptionSelfCloseRef_len = 0;

	//TThostFtdcRequestIDType int
	int pOptionSelfCloseActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pOptionSelfCloseActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pOptionSelfCloseActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pOptionSelfCloseActionField_ExchangeID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_OptionSelfCloseSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pOptionSelfCloseActionField_ActionFlag = 0;

	//TThostFtdcDateType char[9]
	const char *pOptionSelfCloseActionField_ActionDate = NULL;
	Py_ssize_t pOptionSelfCloseActionField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pOptionSelfCloseActionField_ActionTime = NULL;
	Py_ssize_t pOptionSelfCloseActionField_ActionTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pOptionSelfCloseActionField_TraderID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pOptionSelfCloseActionField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pOptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_OptionSelfCloseLocalID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pOptionSelfCloseActionField_ActionLocalID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_ActionLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pOptionSelfCloseActionField_ParticipantID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pOptionSelfCloseActionField_ClientID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_ClientID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pOptionSelfCloseActionField_BusinessUnit = NULL;
	Py_ssize_t pOptionSelfCloseActionField_BusinessUnit_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pOptionSelfCloseActionField_OrderActionStatus = 0;

	//TThostFtdcUserIDType char[16]
	const char *pOptionSelfCloseActionField_UserID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_UserID_len = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pOptionSelfCloseActionField_StatusMsg = NULL;
	Py_ssize_t pOptionSelfCloseActionField_StatusMsg_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pOptionSelfCloseActionField_reserve1 = NULL;
	Py_ssize_t pOptionSelfCloseActionField_reserve1_len = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pOptionSelfCloseActionField_BranchID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_BranchID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pOptionSelfCloseActionField_InvestUnitID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pOptionSelfCloseActionField_reserve2 = NULL;
	Py_ssize_t pOptionSelfCloseActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pOptionSelfCloseActionField_MacAddress = NULL;
	Py_ssize_t pOptionSelfCloseActionField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pOptionSelfCloseActionField_InstrumentID = NULL;
	Py_ssize_t pOptionSelfCloseActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pOptionSelfCloseActionField_IPAddress = NULL;
	Py_ssize_t pOptionSelfCloseActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#is#s#s#s#s#cs#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pOptionSelfCloseActionField_BrokerID, &pOptionSelfCloseActionField_BrokerID_len
		, &pOptionSelfCloseActionField_InvestorID, &pOptionSelfCloseActionField_InvestorID_len
		, &pOptionSelfCloseActionField_OptionSelfCloseActionRef
		, &pOptionSelfCloseActionField_OptionSelfCloseRef, &pOptionSelfCloseActionField_OptionSelfCloseRef_len
		, &pOptionSelfCloseActionField_RequestID
		, &pOptionSelfCloseActionField_FrontID
		, &pOptionSelfCloseActionField_SessionID
		, &pOptionSelfCloseActionField_ExchangeID, &pOptionSelfCloseActionField_ExchangeID_len
		, &pOptionSelfCloseActionField_OptionSelfCloseSysID, &pOptionSelfCloseActionField_OptionSelfCloseSysID_len
		, &pOptionSelfCloseActionField_ActionFlag
		, &pOptionSelfCloseActionField_ActionDate, &pOptionSelfCloseActionField_ActionDate_len
		, &pOptionSelfCloseActionField_ActionTime, &pOptionSelfCloseActionField_ActionTime_len
		, &pOptionSelfCloseActionField_TraderID, &pOptionSelfCloseActionField_TraderID_len
		, &pOptionSelfCloseActionField_InstallID
		, &pOptionSelfCloseActionField_OptionSelfCloseLocalID, &pOptionSelfCloseActionField_OptionSelfCloseLocalID_len
		, &pOptionSelfCloseActionField_ActionLocalID, &pOptionSelfCloseActionField_ActionLocalID_len
		, &pOptionSelfCloseActionField_ParticipantID, &pOptionSelfCloseActionField_ParticipantID_len
		, &pOptionSelfCloseActionField_ClientID, &pOptionSelfCloseActionField_ClientID_len
		, &pOptionSelfCloseActionField_BusinessUnit, &pOptionSelfCloseActionField_BusinessUnit_len
		, &pOptionSelfCloseActionField_OrderActionStatus
		, &pOptionSelfCloseActionField_UserID, &pOptionSelfCloseActionField_UserID_len
		, &pOptionSelfCloseActionField_StatusMsg, &pOptionSelfCloseActionField_StatusMsg_len
		, &pOptionSelfCloseActionField_reserve1, &pOptionSelfCloseActionField_reserve1_len
		, &pOptionSelfCloseActionField_BranchID, &pOptionSelfCloseActionField_BranchID_len
		, &pOptionSelfCloseActionField_InvestUnitID, &pOptionSelfCloseActionField_InvestUnitID_len
		, &pOptionSelfCloseActionField_reserve2, &pOptionSelfCloseActionField_reserve2_len
		, &pOptionSelfCloseActionField_MacAddress, &pOptionSelfCloseActionField_MacAddress_len
		, &pOptionSelfCloseActionField_InstrumentID, &pOptionSelfCloseActionField_InstrumentID_len
		, &pOptionSelfCloseActionField_IPAddress, &pOptionSelfCloseActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pOptionSelfCloseActionField_BrokerID != NULL) {
		if(pOptionSelfCloseActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pOptionSelfCloseActionField_BrokerID, sizeof(self->data.BrokerID) );
		pOptionSelfCloseActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pOptionSelfCloseActionField_InvestorID != NULL) {
		if(pOptionSelfCloseActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pOptionSelfCloseActionField_InvestorID, sizeof(self->data.InvestorID) );
		pOptionSelfCloseActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.OptionSelfCloseActionRef = pOptionSelfCloseActionField_OptionSelfCloseActionRef;

	//TThostFtdcOrderRefType char[13]
	if(pOptionSelfCloseActionField_OptionSelfCloseRef != NULL) {
		if(pOptionSelfCloseActionField_OptionSelfCloseRef_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_OptionSelfCloseRef_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseRef, pOptionSelfCloseActionField_OptionSelfCloseRef, sizeof(self->data.OptionSelfCloseRef) );
		pOptionSelfCloseActionField_OptionSelfCloseRef = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pOptionSelfCloseActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pOptionSelfCloseActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pOptionSelfCloseActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pOptionSelfCloseActionField_ExchangeID != NULL) {
		if(pOptionSelfCloseActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pOptionSelfCloseActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pOptionSelfCloseActionField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pOptionSelfCloseActionField_OptionSelfCloseSysID != NULL) {
		if(pOptionSelfCloseActionField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseSysID, pOptionSelfCloseActionField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
		pOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pOptionSelfCloseActionField_ActionFlag;

	//TThostFtdcDateType char[9]
	if(pOptionSelfCloseActionField_ActionDate != NULL) {
		if(pOptionSelfCloseActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pOptionSelfCloseActionField_ActionDate, sizeof(self->data.ActionDate) );
		pOptionSelfCloseActionField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pOptionSelfCloseActionField_ActionTime != NULL) {
		if(pOptionSelfCloseActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pOptionSelfCloseActionField_ActionTime, sizeof(self->data.ActionTime) );
		pOptionSelfCloseActionField_ActionTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pOptionSelfCloseActionField_TraderID != NULL) {
		if(pOptionSelfCloseActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pOptionSelfCloseActionField_TraderID, sizeof(self->data.TraderID) );
		pOptionSelfCloseActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pOptionSelfCloseActionField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pOptionSelfCloseActionField_OptionSelfCloseLocalID != NULL) {
		if(pOptionSelfCloseActionField_OptionSelfCloseLocalID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_OptionSelfCloseLocalID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseLocalID, pOptionSelfCloseActionField_OptionSelfCloseLocalID, sizeof(self->data.OptionSelfCloseLocalID) );
		pOptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pOptionSelfCloseActionField_ActionLocalID != NULL) {
		if(pOptionSelfCloseActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pOptionSelfCloseActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pOptionSelfCloseActionField_ActionLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pOptionSelfCloseActionField_ParticipantID != NULL) {
		if(pOptionSelfCloseActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pOptionSelfCloseActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pOptionSelfCloseActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pOptionSelfCloseActionField_ClientID != NULL) {
		if(pOptionSelfCloseActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pOptionSelfCloseActionField_ClientID, sizeof(self->data.ClientID) );
		pOptionSelfCloseActionField_ClientID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pOptionSelfCloseActionField_BusinessUnit != NULL) {
		if(pOptionSelfCloseActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pOptionSelfCloseActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pOptionSelfCloseActionField_BusinessUnit = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pOptionSelfCloseActionField_OrderActionStatus;

	//TThostFtdcUserIDType char[16]
	if(pOptionSelfCloseActionField_UserID != NULL) {
		if(pOptionSelfCloseActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pOptionSelfCloseActionField_UserID, sizeof(self->data.UserID) );
		pOptionSelfCloseActionField_UserID = NULL;
	}

	//TThostFtdcErrorMsgType char[81]
	if(pOptionSelfCloseActionField_StatusMsg != NULL) {
		if(pOptionSelfCloseActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pOptionSelfCloseActionField_StatusMsg, sizeof(self->data.StatusMsg) );
		pOptionSelfCloseActionField_StatusMsg = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pOptionSelfCloseActionField_reserve1 != NULL) {
		if(pOptionSelfCloseActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pOptionSelfCloseActionField_reserve1, sizeof(self->data.reserve1) );
		pOptionSelfCloseActionField_reserve1 = NULL;
	}

	//TThostFtdcBranchIDType char[9]
	if(pOptionSelfCloseActionField_BranchID != NULL) {
		if(pOptionSelfCloseActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pOptionSelfCloseActionField_BranchID, sizeof(self->data.BranchID) );
		pOptionSelfCloseActionField_BranchID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pOptionSelfCloseActionField_InvestUnitID != NULL) {
		if(pOptionSelfCloseActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pOptionSelfCloseActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pOptionSelfCloseActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pOptionSelfCloseActionField_reserve2 != NULL) {
		if(pOptionSelfCloseActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pOptionSelfCloseActionField_reserve2, sizeof(self->data.reserve2) );
		pOptionSelfCloseActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pOptionSelfCloseActionField_MacAddress != NULL) {
		if(pOptionSelfCloseActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pOptionSelfCloseActionField_MacAddress, sizeof(self->data.MacAddress) );
		pOptionSelfCloseActionField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pOptionSelfCloseActionField_InstrumentID != NULL) {
		if(pOptionSelfCloseActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pOptionSelfCloseActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pOptionSelfCloseActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pOptionSelfCloseActionField_IPAddress != NULL) {
		if(pOptionSelfCloseActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pOptionSelfCloseActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pOptionSelfCloseActionField_IPAddress, sizeof(self->data.IPAddress) );
		pOptionSelfCloseActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcOptionSelfCloseActionField_dealloc(PyCThostFtdcOptionSelfCloseActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_repr(PyCThostFtdcOptionSelfCloseActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "OptionSelfCloseActionRef", self->data.OptionSelfCloseActionRef
		, "OptionSelfCloseRef", self->data.OptionSelfCloseRef 
		, "RequestID", self->data.RequestID
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "ExchangeID", self->data.ExchangeID 
		, "OptionSelfCloseSysID", self->data.OptionSelfCloseSysID 
		, "ActionFlag", self->data.ActionFlag
		, "ActionDate", self->data.ActionDate 
		, "ActionTime", self->data.ActionTime 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "OptionSelfCloseLocalID", self->data.OptionSelfCloseLocalID 
		, "ActionLocalID", self->data.ActionLocalID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "BusinessUnit", self->data.BusinessUnit 
		, "OrderActionStatus", self->data.OrderActionStatus
		, "UserID", self->data.UserID 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionSelfCloseActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_BrokerID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_InvestorID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseActionRef(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OptionSelfCloseActionRef);
#else 
	return PyInt_FromLong(self->data.OptionSelfCloseActionRef);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseRef(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseRef);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_RequestID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_FrontID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_SessionID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ExchangeID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseSysID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ActionFlag(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ActionDate(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ActionTime(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_TraderID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_InstallID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseLocalID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseLocalID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ActionLocalID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ParticipantID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_ClientID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_BusinessUnit(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_OrderActionStatus(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_UserID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_StatusMsg(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_reserve1(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_BranchID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_InvestUnitID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_reserve2(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_MacAddress(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_InstrumentID(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcOptionSelfCloseActionField_get_IPAddress(PyCThostFtdcOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcOptionSelfCloseActionField_set_BrokerID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_InvestorID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseActionRef(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseActionRef Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseActionRef Expected int"); 
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
    self->data.OptionSelfCloseActionRef = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseRef(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionSelfCloseRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
		PyErr_SetString(PyExc_ValueError, "OptionSelfCloseRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OptionSelfCloseRef, buf, sizeof(self->data.OptionSelfCloseRef));
	return 0;
}

static int PyCThostFtdcOptionSelfCloseActionField_set_RequestID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_FrontID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_SessionID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_ExchangeID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseSysID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
		PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.OptionSelfCloseSysID, buf, sizeof(self->data.OptionSelfCloseSysID));
	return 0;
}

static int PyCThostFtdcOptionSelfCloseActionField_set_ActionFlag(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_ActionDate(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_ActionTime(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_TraderID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_InstallID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseLocalID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionSelfCloseLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
		PyErr_SetString(PyExc_ValueError, "OptionSelfCloseLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OptionSelfCloseLocalID, buf, sizeof(self->data.OptionSelfCloseLocalID));
	return 0;
}

static int PyCThostFtdcOptionSelfCloseActionField_set_ActionLocalID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_ParticipantID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_ClientID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_BusinessUnit(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_OrderActionStatus(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_UserID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_StatusMsg(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_reserve1(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_BranchID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_InvestUnitID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_reserve2(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_MacAddress(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_InstrumentID(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseActionField_set_IPAddress(PyCThostFtdcOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcOptionSelfCloseActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_BrokerID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_InvestorID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OptionSelfCloseActionRef", (getter)PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseActionRef, (setter)PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseActionRef, (char *)"OptionSelfCloseActionRef", NULL},
	 {(char *)"OptionSelfCloseRef", (getter)PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseRef, (setter)PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseRef, (char *)"OptionSelfCloseRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_RequestID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_FrontID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_SessionID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ExchangeID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ActionFlag, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ActionDate, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ActionDate, (char *)"ActionDate", NULL},
	 {(char *)"ActionTime", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ActionTime, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ActionTime, (char *)"ActionTime", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_TraderID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_InstallID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OptionSelfCloseLocalID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_OptionSelfCloseLocalID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_OptionSelfCloseLocalID, (char *)"OptionSelfCloseLocalID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ActionLocalID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ParticipantID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_ClientID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcOptionSelfCloseActionField_get_BusinessUnit, (setter)PyCThostFtdcOptionSelfCloseActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcOptionSelfCloseActionField_get_OrderActionStatus, (setter)PyCThostFtdcOptionSelfCloseActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_UserID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcOptionSelfCloseActionField_get_StatusMsg, (setter)PyCThostFtdcOptionSelfCloseActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcOptionSelfCloseActionField_get_reserve1, (setter)PyCThostFtdcOptionSelfCloseActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_BranchID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_InvestUnitID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcOptionSelfCloseActionField_get_reserve2, (setter)PyCThostFtdcOptionSelfCloseActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcOptionSelfCloseActionField_get_MacAddress, (setter)PyCThostFtdcOptionSelfCloseActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcOptionSelfCloseActionField_get_InstrumentID, (setter)PyCThostFtdcOptionSelfCloseActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcOptionSelfCloseActionField_get_IPAddress, (setter)PyCThostFtdcOptionSelfCloseActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionSelfCloseActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionSelfCloseActionField",	/* tp_name */
	sizeof(PyCThostFtdcOptionSelfCloseActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionSelfCloseActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionSelfCloseActionField_repr,   /* tp_repr */
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
	"CThostFtdcOptionSelfCloseActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionSelfCloseActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionSelfCloseActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionSelfCloseActionField_new,       /* tp_new */
};

int PyCThostFtdcOptionSelfCloseActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionSelfCloseActionField  */
	if (PyType_Ready(&PyCThostFtdcOptionSelfCloseActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionSelfCloseActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionSelfCloseActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionSelfCloseActionField", (PyObject *)&PyCThostFtdcOptionSelfCloseActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionSelfCloseActionField to module");
        Py_DECREF(&PyCThostFtdcOptionSelfCloseActionFieldType);
		return -1;
    }

    return 0;
}
