
#include "PyCThostFtdcQuoteActionField.h"



static PyObject *PyCThostFtdcQuoteActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQuoteActionField *self = (PyCThostFtdcQuoteActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQuoteActionField_init(PyCThostFtdcQuoteActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "QuoteActionRef", "QuoteRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "QuoteSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "QuoteLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQuoteActionField_BrokerID = NULL;
	Py_ssize_t pQuoteActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQuoteActionField_InvestorID = NULL;
	Py_ssize_t pQuoteActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pQuoteActionField_QuoteActionRef = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pQuoteActionField_QuoteRef = NULL;
	Py_ssize_t pQuoteActionField_QuoteRef_len = 0;

	//TThostFtdcRequestIDType int
	int pQuoteActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pQuoteActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pQuoteActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQuoteActionField_ExchangeID = NULL;
	Py_ssize_t pQuoteActionField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pQuoteActionField_QuoteSysID = NULL;
	Py_ssize_t pQuoteActionField_QuoteSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pQuoteActionField_ActionFlag = 0;

	//TThostFtdcDateType char[9]
	const char *pQuoteActionField_ActionDate = NULL;
	Py_ssize_t pQuoteActionField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQuoteActionField_ActionTime = NULL;
	Py_ssize_t pQuoteActionField_ActionTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQuoteActionField_TraderID = NULL;
	Py_ssize_t pQuoteActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pQuoteActionField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pQuoteActionField_QuoteLocalID = NULL;
	Py_ssize_t pQuoteActionField_QuoteLocalID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pQuoteActionField_ActionLocalID = NULL;
	Py_ssize_t pQuoteActionField_ActionLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pQuoteActionField_ParticipantID = NULL;
	Py_ssize_t pQuoteActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pQuoteActionField_ClientID = NULL;
	Py_ssize_t pQuoteActionField_ClientID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pQuoteActionField_BusinessUnit = NULL;
	Py_ssize_t pQuoteActionField_BusinessUnit_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pQuoteActionField_OrderActionStatus = 0;

	//TThostFtdcUserIDType char[16]
	const char *pQuoteActionField_UserID = NULL;
	Py_ssize_t pQuoteActionField_UserID_len = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pQuoteActionField_StatusMsg = NULL;
	Py_ssize_t pQuoteActionField_StatusMsg_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQuoteActionField_reserve1 = NULL;
	Py_ssize_t pQuoteActionField_reserve1_len = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pQuoteActionField_BranchID = NULL;
	Py_ssize_t pQuoteActionField_BranchID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQuoteActionField_InvestUnitID = NULL;
	Py_ssize_t pQuoteActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pQuoteActionField_reserve2 = NULL;
	Py_ssize_t pQuoteActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pQuoteActionField_MacAddress = NULL;
	Py_ssize_t pQuoteActionField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQuoteActionField_InstrumentID = NULL;
	Py_ssize_t pQuoteActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pQuoteActionField_IPAddress = NULL;
	Py_ssize_t pQuoteActionField_IPAddress_len = 0;

	//TThostFtdcOrderMemoType char[13]
	const char *pQuoteActionField_OrderMemo = NULL;
	Py_ssize_t pQuoteActionField_OrderMemo_len = 0;

	//TThostFtdcSequenceNo12Type int
	int pQuoteActionField_SessionReqSeq = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#y#y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#is#s#s#s#s#cs#s#s#s#s#s#s#s#s#s#i", (char **)kwlist
#endif

		, &pQuoteActionField_BrokerID, &pQuoteActionField_BrokerID_len
		, &pQuoteActionField_InvestorID, &pQuoteActionField_InvestorID_len
		, &pQuoteActionField_QuoteActionRef
		, &pQuoteActionField_QuoteRef, &pQuoteActionField_QuoteRef_len
		, &pQuoteActionField_RequestID
		, &pQuoteActionField_FrontID
		, &pQuoteActionField_SessionID
		, &pQuoteActionField_ExchangeID, &pQuoteActionField_ExchangeID_len
		, &pQuoteActionField_QuoteSysID, &pQuoteActionField_QuoteSysID_len
		, &pQuoteActionField_ActionFlag
		, &pQuoteActionField_ActionDate, &pQuoteActionField_ActionDate_len
		, &pQuoteActionField_ActionTime, &pQuoteActionField_ActionTime_len
		, &pQuoteActionField_TraderID, &pQuoteActionField_TraderID_len
		, &pQuoteActionField_InstallID
		, &pQuoteActionField_QuoteLocalID, &pQuoteActionField_QuoteLocalID_len
		, &pQuoteActionField_ActionLocalID, &pQuoteActionField_ActionLocalID_len
		, &pQuoteActionField_ParticipantID, &pQuoteActionField_ParticipantID_len
		, &pQuoteActionField_ClientID, &pQuoteActionField_ClientID_len
		, &pQuoteActionField_BusinessUnit, &pQuoteActionField_BusinessUnit_len
		, &pQuoteActionField_OrderActionStatus
		, &pQuoteActionField_UserID, &pQuoteActionField_UserID_len
		, &pQuoteActionField_StatusMsg, &pQuoteActionField_StatusMsg_len
		, &pQuoteActionField_reserve1, &pQuoteActionField_reserve1_len
		, &pQuoteActionField_BranchID, &pQuoteActionField_BranchID_len
		, &pQuoteActionField_InvestUnitID, &pQuoteActionField_InvestUnitID_len
		, &pQuoteActionField_reserve2, &pQuoteActionField_reserve2_len
		, &pQuoteActionField_MacAddress, &pQuoteActionField_MacAddress_len
		, &pQuoteActionField_InstrumentID, &pQuoteActionField_InstrumentID_len
		, &pQuoteActionField_IPAddress, &pQuoteActionField_IPAddress_len
		, &pQuoteActionField_OrderMemo, &pQuoteActionField_OrderMemo_len
		, &pQuoteActionField_SessionReqSeq


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQuoteActionField_BrokerID != NULL) {
		if(pQuoteActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQuoteActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQuoteActionField_BrokerID, sizeof(self->data.BrokerID) );
		pQuoteActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQuoteActionField_InvestorID != NULL) {
		if(pQuoteActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQuoteActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQuoteActionField_InvestorID, sizeof(self->data.InvestorID) );
		pQuoteActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.QuoteActionRef = pQuoteActionField_QuoteActionRef;

	//TThostFtdcOrderRefType char[13]
	if(pQuoteActionField_QuoteRef != NULL) {
		if(pQuoteActionField_QuoteRef_len > (Py_ssize_t)sizeof(self->data.QuoteRef)) {
			PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is %zd)", pQuoteActionField_QuoteRef_len, (Py_ssize_t)sizeof(self->data.QuoteRef));
			return -1;
		}
		strncpy(self->data.QuoteRef, pQuoteActionField_QuoteRef, sizeof(self->data.QuoteRef) );
		pQuoteActionField_QuoteRef = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pQuoteActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pQuoteActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pQuoteActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pQuoteActionField_ExchangeID != NULL) {
		if(pQuoteActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQuoteActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQuoteActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQuoteActionField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pQuoteActionField_QuoteSysID != NULL) {
		if(pQuoteActionField_QuoteSysID_len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
			PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is %zd)", pQuoteActionField_QuoteSysID_len, (Py_ssize_t)sizeof(self->data.QuoteSysID));
			return -1;
		}
		strncpy(self->data.QuoteSysID, pQuoteActionField_QuoteSysID, sizeof(self->data.QuoteSysID) );
		pQuoteActionField_QuoteSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pQuoteActionField_ActionFlag;

	//TThostFtdcDateType char[9]
	if(pQuoteActionField_ActionDate != NULL) {
		if(pQuoteActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pQuoteActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pQuoteActionField_ActionDate, sizeof(self->data.ActionDate) );
		pQuoteActionField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQuoteActionField_ActionTime != NULL) {
		if(pQuoteActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pQuoteActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pQuoteActionField_ActionTime, sizeof(self->data.ActionTime) );
		pQuoteActionField_ActionTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQuoteActionField_TraderID != NULL) {
		if(pQuoteActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQuoteActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQuoteActionField_TraderID, sizeof(self->data.TraderID) );
		pQuoteActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pQuoteActionField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pQuoteActionField_QuoteLocalID != NULL) {
		if(pQuoteActionField_QuoteLocalID_len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
			PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is %zd)", pQuoteActionField_QuoteLocalID_len, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
			return -1;
		}
		strncpy(self->data.QuoteLocalID, pQuoteActionField_QuoteLocalID, sizeof(self->data.QuoteLocalID) );
		pQuoteActionField_QuoteLocalID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pQuoteActionField_ActionLocalID != NULL) {
		if(pQuoteActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pQuoteActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pQuoteActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pQuoteActionField_ActionLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pQuoteActionField_ParticipantID != NULL) {
		if(pQuoteActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQuoteActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQuoteActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQuoteActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pQuoteActionField_ClientID != NULL) {
		if(pQuoteActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pQuoteActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pQuoteActionField_ClientID, sizeof(self->data.ClientID) );
		pQuoteActionField_ClientID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pQuoteActionField_BusinessUnit != NULL) {
		if(pQuoteActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pQuoteActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pQuoteActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pQuoteActionField_BusinessUnit = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pQuoteActionField_OrderActionStatus;

	//TThostFtdcUserIDType char[16]
	if(pQuoteActionField_UserID != NULL) {
		if(pQuoteActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pQuoteActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pQuoteActionField_UserID, sizeof(self->data.UserID) );
		pQuoteActionField_UserID = NULL;
	}

	//TThostFtdcErrorMsgType char[81]
	if(pQuoteActionField_StatusMsg != NULL) {
		if(pQuoteActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pQuoteActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pQuoteActionField_StatusMsg, sizeof(self->data.StatusMsg) );
		pQuoteActionField_StatusMsg = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQuoteActionField_reserve1 != NULL) {
		if(pQuoteActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQuoteActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQuoteActionField_reserve1, sizeof(self->data.reserve1) );
		pQuoteActionField_reserve1 = NULL;
	}

	//TThostFtdcBranchIDType char[9]
	if(pQuoteActionField_BranchID != NULL) {
		if(pQuoteActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pQuoteActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pQuoteActionField_BranchID, sizeof(self->data.BranchID) );
		pQuoteActionField_BranchID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQuoteActionField_InvestUnitID != NULL) {
		if(pQuoteActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQuoteActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQuoteActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQuoteActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pQuoteActionField_reserve2 != NULL) {
		if(pQuoteActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pQuoteActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pQuoteActionField_reserve2, sizeof(self->data.reserve2) );
		pQuoteActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pQuoteActionField_MacAddress != NULL) {
		if(pQuoteActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pQuoteActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pQuoteActionField_MacAddress, sizeof(self->data.MacAddress) );
		pQuoteActionField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQuoteActionField_InstrumentID != NULL) {
		if(pQuoteActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQuoteActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQuoteActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQuoteActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pQuoteActionField_IPAddress != NULL) {
		if(pQuoteActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pQuoteActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pQuoteActionField_IPAddress, sizeof(self->data.IPAddress) );
		pQuoteActionField_IPAddress = NULL;
	}

	//TThostFtdcOrderMemoType char[13]
	if(pQuoteActionField_OrderMemo != NULL) {
		if(pQuoteActionField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
			PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", pQuoteActionField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
			return -1;
		}
		strncpy(self->data.OrderMemo, pQuoteActionField_OrderMemo, sizeof(self->data.OrderMemo) );
		pQuoteActionField_OrderMemo = NULL;
	}

	//TThostFtdcSequenceNo12Type int
	self->data.SessionReqSeq = pQuoteActionField_SessionReqSeq;



    return 0;
}

static void PyCThostFtdcQuoteActionField_dealloc(PyCThostFtdcQuoteActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQuoteActionField_repr(PyCThostFtdcQuoteActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "QuoteActionRef", self->data.QuoteActionRef
		, "QuoteRef", self->data.QuoteRef 
		, "RequestID", self->data.RequestID
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "ExchangeID", self->data.ExchangeID 
		, "QuoteSysID", self->data.QuoteSysID 
		, "ActionFlag", self->data.ActionFlag
		, "ActionDate", self->data.ActionDate 
		, "ActionTime", self->data.ActionTime 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "QuoteLocalID", self->data.QuoteLocalID 
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
		, "OrderMemo", self->data.OrderMemo 
		, "SessionReqSeq", self->data.SessionReqSeq


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQuoteActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQuoteActionField_get_BrokerID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_InvestorID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_QuoteActionRef(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.QuoteActionRef);
#else 
	return PyInt_FromLong(self->data.QuoteActionRef);
#endif 
}

static PyObject *PyCThostFtdcQuoteActionField_get_QuoteRef(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteRef);
}

static PyObject *PyCThostFtdcQuoteActionField_get_RequestID(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcQuoteActionField_get_FrontID(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcQuoteActionField_get_SessionID(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcQuoteActionField_get_ExchangeID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_QuoteSysID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteSysID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_ActionFlag(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcQuoteActionField_get_ActionDate(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcQuoteActionField_get_ActionTime(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static PyObject *PyCThostFtdcQuoteActionField_get_TraderID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_InstallID(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcQuoteActionField_get_QuoteLocalID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteLocalID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_ActionLocalID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_ParticipantID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_ClientID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_BusinessUnit(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcQuoteActionField_get_OrderActionStatus(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcQuoteActionField_get_UserID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_StatusMsg(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcQuoteActionField_get_reserve1(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQuoteActionField_get_BranchID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_InvestUnitID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_reserve2(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcQuoteActionField_get_MacAddress(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcQuoteActionField_get_InstrumentID(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcQuoteActionField_get_IPAddress(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcQuoteActionField_get_OrderMemo(PyCThostFtdcQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderMemo);
}

static PyObject *PyCThostFtdcQuoteActionField_get_SessionReqSeq(PyCThostFtdcQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionReqSeq);
#else 
	return PyInt_FromLong(self->data.SessionReqSeq);
#endif 
}

static int PyCThostFtdcQuoteActionField_set_BrokerID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_InvestorID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_QuoteActionRef(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QuoteActionRef Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "QuoteActionRef Expected int"); 
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
    self->data.QuoteActionRef = (int)buf; 
    return 0; 
}

static int PyCThostFtdcQuoteActionField_set_QuoteRef(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "QuoteRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.QuoteRef)) {
		PyErr_SetString(PyExc_ValueError, "QuoteRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.QuoteRef, buf, sizeof(self->data.QuoteRef));
	return 0;
}

static int PyCThostFtdcQuoteActionField_set_RequestID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_FrontID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_SessionID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_ExchangeID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_QuoteSysID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
		PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.QuoteSysID, buf, sizeof(self->data.QuoteSysID));
	return 0;
}

static int PyCThostFtdcQuoteActionField_set_ActionFlag(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_ActionDate(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_ActionTime(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_TraderID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_InstallID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_QuoteLocalID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "QuoteLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
		PyErr_SetString(PyExc_ValueError, "QuoteLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.QuoteLocalID, buf, sizeof(self->data.QuoteLocalID));
	return 0;
}

static int PyCThostFtdcQuoteActionField_set_ActionLocalID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_ParticipantID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_ClientID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_BusinessUnit(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_OrderActionStatus(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_UserID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_StatusMsg(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_reserve1(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_BranchID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_InvestUnitID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_reserve2(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_MacAddress(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_InstrumentID(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_IPAddress(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteActionField_set_OrderMemo(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
		PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OrderMemo, buf, sizeof(self->data.OrderMemo));
	return 0;
}

static int PyCThostFtdcQuoteActionField_set_SessionReqSeq(PyCThostFtdcQuoteActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionReqSeq Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SessionReqSeq Expected int"); 
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
    self->data.SessionReqSeq = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcQuoteActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQuoteActionField_get_BrokerID, (setter)PyCThostFtdcQuoteActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQuoteActionField_get_InvestorID, (setter)PyCThostFtdcQuoteActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"QuoteActionRef", (getter)PyCThostFtdcQuoteActionField_get_QuoteActionRef, (setter)PyCThostFtdcQuoteActionField_set_QuoteActionRef, (char *)"QuoteActionRef", NULL},
	 {(char *)"QuoteRef", (getter)PyCThostFtdcQuoteActionField_get_QuoteRef, (setter)PyCThostFtdcQuoteActionField_set_QuoteRef, (char *)"QuoteRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcQuoteActionField_get_RequestID, (setter)PyCThostFtdcQuoteActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcQuoteActionField_get_FrontID, (setter)PyCThostFtdcQuoteActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcQuoteActionField_get_SessionID, (setter)PyCThostFtdcQuoteActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQuoteActionField_get_ExchangeID, (setter)PyCThostFtdcQuoteActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"QuoteSysID", (getter)PyCThostFtdcQuoteActionField_get_QuoteSysID, (setter)PyCThostFtdcQuoteActionField_set_QuoteSysID, (char *)"QuoteSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcQuoteActionField_get_ActionFlag, (setter)PyCThostFtdcQuoteActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcQuoteActionField_get_ActionDate, (setter)PyCThostFtdcQuoteActionField_set_ActionDate, (char *)"ActionDate", NULL},
	 {(char *)"ActionTime", (getter)PyCThostFtdcQuoteActionField_get_ActionTime, (setter)PyCThostFtdcQuoteActionField_set_ActionTime, (char *)"ActionTime", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQuoteActionField_get_TraderID, (setter)PyCThostFtdcQuoteActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcQuoteActionField_get_InstallID, (setter)PyCThostFtdcQuoteActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"QuoteLocalID", (getter)PyCThostFtdcQuoteActionField_get_QuoteLocalID, (setter)PyCThostFtdcQuoteActionField_set_QuoteLocalID, (char *)"QuoteLocalID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcQuoteActionField_get_ActionLocalID, (setter)PyCThostFtdcQuoteActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQuoteActionField_get_ParticipantID, (setter)PyCThostFtdcQuoteActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcQuoteActionField_get_ClientID, (setter)PyCThostFtdcQuoteActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcQuoteActionField_get_BusinessUnit, (setter)PyCThostFtdcQuoteActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcQuoteActionField_get_OrderActionStatus, (setter)PyCThostFtdcQuoteActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcQuoteActionField_get_UserID, (setter)PyCThostFtdcQuoteActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcQuoteActionField_get_StatusMsg, (setter)PyCThostFtdcQuoteActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQuoteActionField_get_reserve1, (setter)PyCThostFtdcQuoteActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcQuoteActionField_get_BranchID, (setter)PyCThostFtdcQuoteActionField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQuoteActionField_get_InvestUnitID, (setter)PyCThostFtdcQuoteActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcQuoteActionField_get_reserve2, (setter)PyCThostFtdcQuoteActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcQuoteActionField_get_MacAddress, (setter)PyCThostFtdcQuoteActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQuoteActionField_get_InstrumentID, (setter)PyCThostFtdcQuoteActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcQuoteActionField_get_IPAddress, (setter)PyCThostFtdcQuoteActionField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"OrderMemo", (getter)PyCThostFtdcQuoteActionField_get_OrderMemo, (setter)PyCThostFtdcQuoteActionField_set_OrderMemo, (char *)"OrderMemo", NULL},
	 {(char *)"SessionReqSeq", (getter)PyCThostFtdcQuoteActionField_get_SessionReqSeq, (setter)PyCThostFtdcQuoteActionField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQuoteActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQuoteActionField",	/* tp_name */
	sizeof(PyCThostFtdcQuoteActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQuoteActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQuoteActionField_repr,   /* tp_repr */
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
	"CThostFtdcQuoteActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQuoteActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQuoteActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQuoteActionField_new,       /* tp_new */
};

int PyCThostFtdcQuoteActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQuoteActionField  */
	if (PyType_Ready(&PyCThostFtdcQuoteActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQuoteActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQuoteActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQuoteActionField", (PyObject *)&PyCThostFtdcQuoteActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQuoteActionField to module");
        Py_DECREF(&PyCThostFtdcQuoteActionFieldType);
		return -1;
    }

    return 0;
}
