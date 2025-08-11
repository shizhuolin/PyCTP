
#include "PyCThostFtdcOrderActionField.h"



static PyObject *PyCThostFtdcOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOrderActionField *self = (PyCThostFtdcOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcOrderActionField_init(PyCThostFtdcOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OrderActionRef", "OrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "ActionDate", "ActionTime", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pOrderActionField_BrokerID = NULL;
	Py_ssize_t pOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pOrderActionField_InvestorID = NULL;
	Py_ssize_t pOrderActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pOrderActionField_OrderActionRef = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pOrderActionField_OrderRef = NULL;
	Py_ssize_t pOrderActionField_OrderRef_len = 0;

	//TThostFtdcRequestIDType int
	int pOrderActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pOrderActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pOrderActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pOrderActionField_ExchangeID = NULL;
	Py_ssize_t pOrderActionField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pOrderActionField_OrderSysID = NULL;
	Py_ssize_t pOrderActionField_OrderSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pOrderActionField_ActionFlag = 0;

	//TThostFtdcPriceType double
	double pOrderActionField_LimitPrice = 0.0;

	//TThostFtdcVolumeType int
	int pOrderActionField_VolumeChange = 0;

	//TThostFtdcDateType char[9]
	const char *pOrderActionField_ActionDate = NULL;
	Py_ssize_t pOrderActionField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pOrderActionField_ActionTime = NULL;
	Py_ssize_t pOrderActionField_ActionTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pOrderActionField_TraderID = NULL;
	Py_ssize_t pOrderActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pOrderActionField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pOrderActionField_OrderLocalID = NULL;
	Py_ssize_t pOrderActionField_OrderLocalID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pOrderActionField_ActionLocalID = NULL;
	Py_ssize_t pOrderActionField_ActionLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pOrderActionField_ParticipantID = NULL;
	Py_ssize_t pOrderActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pOrderActionField_ClientID = NULL;
	Py_ssize_t pOrderActionField_ClientID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pOrderActionField_BusinessUnit = NULL;
	Py_ssize_t pOrderActionField_BusinessUnit_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pOrderActionField_OrderActionStatus = 0;

	//TThostFtdcUserIDType char[16]
	const char *pOrderActionField_UserID = NULL;
	Py_ssize_t pOrderActionField_UserID_len = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pOrderActionField_StatusMsg = NULL;
	Py_ssize_t pOrderActionField_StatusMsg_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pOrderActionField_reserve1 = NULL;
	Py_ssize_t pOrderActionField_reserve1_len = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pOrderActionField_BranchID = NULL;
	Py_ssize_t pOrderActionField_BranchID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pOrderActionField_InvestUnitID = NULL;
	Py_ssize_t pOrderActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pOrderActionField_reserve2 = NULL;
	Py_ssize_t pOrderActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pOrderActionField_MacAddress = NULL;
	Py_ssize_t pOrderActionField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pOrderActionField_InstrumentID = NULL;
	Py_ssize_t pOrderActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pOrderActionField_IPAddress = NULL;
	Py_ssize_t pOrderActionField_IPAddress_len = 0;

	//TThostFtdcOrderMemoType char[13]
	const char *pOrderActionField_OrderMemo = NULL;
	Py_ssize_t pOrderActionField_OrderMemo_len = 0;

	//TThostFtdcSequenceNo12Type int
	int pOrderActionField_SessionReqSeq = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cdiy#y#y#iy#y#y#y#y#cy#y#y#y#y#y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cdis#s#s#is#s#s#s#s#cs#s#s#s#s#s#s#s#s#s#i", (char **)kwlist
#endif

		, &pOrderActionField_BrokerID, &pOrderActionField_BrokerID_len
		, &pOrderActionField_InvestorID, &pOrderActionField_InvestorID_len
		, &pOrderActionField_OrderActionRef
		, &pOrderActionField_OrderRef, &pOrderActionField_OrderRef_len
		, &pOrderActionField_RequestID
		, &pOrderActionField_FrontID
		, &pOrderActionField_SessionID
		, &pOrderActionField_ExchangeID, &pOrderActionField_ExchangeID_len
		, &pOrderActionField_OrderSysID, &pOrderActionField_OrderSysID_len
		, &pOrderActionField_ActionFlag
		, &pOrderActionField_LimitPrice
		, &pOrderActionField_VolumeChange
		, &pOrderActionField_ActionDate, &pOrderActionField_ActionDate_len
		, &pOrderActionField_ActionTime, &pOrderActionField_ActionTime_len
		, &pOrderActionField_TraderID, &pOrderActionField_TraderID_len
		, &pOrderActionField_InstallID
		, &pOrderActionField_OrderLocalID, &pOrderActionField_OrderLocalID_len
		, &pOrderActionField_ActionLocalID, &pOrderActionField_ActionLocalID_len
		, &pOrderActionField_ParticipantID, &pOrderActionField_ParticipantID_len
		, &pOrderActionField_ClientID, &pOrderActionField_ClientID_len
		, &pOrderActionField_BusinessUnit, &pOrderActionField_BusinessUnit_len
		, &pOrderActionField_OrderActionStatus
		, &pOrderActionField_UserID, &pOrderActionField_UserID_len
		, &pOrderActionField_StatusMsg, &pOrderActionField_StatusMsg_len
		, &pOrderActionField_reserve1, &pOrderActionField_reserve1_len
		, &pOrderActionField_BranchID, &pOrderActionField_BranchID_len
		, &pOrderActionField_InvestUnitID, &pOrderActionField_InvestUnitID_len
		, &pOrderActionField_reserve2, &pOrderActionField_reserve2_len
		, &pOrderActionField_MacAddress, &pOrderActionField_MacAddress_len
		, &pOrderActionField_InstrumentID, &pOrderActionField_InstrumentID_len
		, &pOrderActionField_IPAddress, &pOrderActionField_IPAddress_len
		, &pOrderActionField_OrderMemo, &pOrderActionField_OrderMemo_len
		, &pOrderActionField_SessionReqSeq


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pOrderActionField_BrokerID != NULL) {
		if(pOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pOrderActionField_InvestorID != NULL) {
		if(pOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.OrderActionRef = pOrderActionField_OrderActionRef;

	//TThostFtdcOrderRefType char[13]
	if(pOrderActionField_OrderRef != NULL) {
		if(pOrderActionField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
			PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", pOrderActionField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
			return -1;
		}
		strncpy(self->data.OrderRef, pOrderActionField_OrderRef, sizeof(self->data.OrderRef) );
		pOrderActionField_OrderRef = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pOrderActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pOrderActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pOrderActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pOrderActionField_ExchangeID != NULL) {
		if(pOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pOrderActionField_OrderSysID != NULL) {
		if(pOrderActionField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pOrderActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pOrderActionField_OrderSysID, sizeof(self->data.OrderSysID) );
		pOrderActionField_OrderSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pOrderActionField_ActionFlag;

	//TThostFtdcPriceType double
	self->data.LimitPrice = pOrderActionField_LimitPrice;
	//TThostFtdcVolumeType int
	self->data.VolumeChange = pOrderActionField_VolumeChange;

	//TThostFtdcDateType char[9]
	if(pOrderActionField_ActionDate != NULL) {
		if(pOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
		pOrderActionField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pOrderActionField_ActionTime != NULL) {
		if(pOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
		pOrderActionField_ActionTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pOrderActionField_TraderID != NULL) {
		if(pOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pOrderActionField_TraderID, sizeof(self->data.TraderID) );
		pOrderActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pOrderActionField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pOrderActionField_OrderLocalID != NULL) {
		if(pOrderActionField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", pOrderActionField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
			return -1;
		}
		strncpy(self->data.OrderLocalID, pOrderActionField_OrderLocalID, sizeof(self->data.OrderLocalID) );
		pOrderActionField_OrderLocalID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pOrderActionField_ActionLocalID != NULL) {
		if(pOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pOrderActionField_ActionLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pOrderActionField_ParticipantID != NULL) {
		if(pOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pOrderActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pOrderActionField_ClientID != NULL) {
		if(pOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pOrderActionField_ClientID, sizeof(self->data.ClientID) );
		pOrderActionField_ClientID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pOrderActionField_BusinessUnit != NULL) {
		if(pOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pOrderActionField_BusinessUnit = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pOrderActionField_OrderActionStatus;

	//TThostFtdcUserIDType char[16]
	if(pOrderActionField_UserID != NULL) {
		if(pOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pOrderActionField_UserID, sizeof(self->data.UserID) );
		pOrderActionField_UserID = NULL;
	}

	//TThostFtdcErrorMsgType char[81]
	if(pOrderActionField_StatusMsg != NULL) {
		if(pOrderActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pOrderActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pOrderActionField_StatusMsg, sizeof(self->data.StatusMsg) );
		pOrderActionField_StatusMsg = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pOrderActionField_reserve1 != NULL) {
		if(pOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcBranchIDType char[9]
	if(pOrderActionField_BranchID != NULL) {
		if(pOrderActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pOrderActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pOrderActionField_BranchID, sizeof(self->data.BranchID) );
		pOrderActionField_BranchID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pOrderActionField_InvestUnitID != NULL) {
		if(pOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pOrderActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pOrderActionField_reserve2 != NULL) {
		if(pOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pOrderActionField_reserve2, sizeof(self->data.reserve2) );
		pOrderActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pOrderActionField_MacAddress != NULL) {
		if(pOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pOrderActionField_InstrumentID != NULL) {
		if(pOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pOrderActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pOrderActionField_IPAddress != NULL) {
		if(pOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pOrderActionField_IPAddress = NULL;
	}

	//TThostFtdcOrderMemoType char[13]
	if(pOrderActionField_OrderMemo != NULL) {
		if(pOrderActionField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
			PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", pOrderActionField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
			return -1;
		}
		strncpy(self->data.OrderMemo, pOrderActionField_OrderMemo, sizeof(self->data.OrderMemo) );
		pOrderActionField_OrderMemo = NULL;
	}

	//TThostFtdcSequenceNo12Type int
	self->data.SessionReqSeq = pOrderActionField_SessionReqSeq;



    return 0;
}

static void PyCThostFtdcOrderActionField_dealloc(PyCThostFtdcOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOrderActionField_repr(PyCThostFtdcOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:d,s:i,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "OrderActionRef", self->data.OrderActionRef
		, "OrderRef", self->data.OrderRef 
		, "RequestID", self->data.RequestID
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "ExchangeID", self->data.ExchangeID 
		, "OrderSysID", self->data.OrderSysID 
		, "ActionFlag", self->data.ActionFlag
		, "LimitPrice", self->data.LimitPrice
		, "VolumeChange", self->data.VolumeChange
		, "ActionDate", self->data.ActionDate 
		, "ActionTime", self->data.ActionTime 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "OrderLocalID", self->data.OrderLocalID 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcOrderActionField_get_BrokerID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcOrderActionField_get_InvestorID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcOrderActionField_get_OrderActionRef(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OrderActionRef);
#else 
	return PyInt_FromLong(self->data.OrderActionRef);
#endif 
}

static PyObject *PyCThostFtdcOrderActionField_get_OrderRef(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderRef);
}

static PyObject *PyCThostFtdcOrderActionField_get_RequestID(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcOrderActionField_get_FrontID(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcOrderActionField_get_SessionID(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcOrderActionField_get_ExchangeID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcOrderActionField_get_OrderSysID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcOrderActionField_get_ActionFlag(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcOrderActionField_get_LimitPrice(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LimitPrice);
}

static PyObject *PyCThostFtdcOrderActionField_get_VolumeChange(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeChange);
#else 
	return PyInt_FromLong(self->data.VolumeChange);
#endif 
}

static PyObject *PyCThostFtdcOrderActionField_get_ActionDate(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcOrderActionField_get_ActionTime(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static PyObject *PyCThostFtdcOrderActionField_get_TraderID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcOrderActionField_get_InstallID(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcOrderActionField_get_OrderLocalID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderLocalID);
}

static PyObject *PyCThostFtdcOrderActionField_get_ActionLocalID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcOrderActionField_get_ParticipantID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcOrderActionField_get_ClientID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcOrderActionField_get_BusinessUnit(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcOrderActionField_get_OrderActionStatus(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcOrderActionField_get_UserID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcOrderActionField_get_StatusMsg(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcOrderActionField_get_reserve1(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcOrderActionField_get_BranchID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcOrderActionField_get_InvestUnitID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcOrderActionField_get_reserve2(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcOrderActionField_get_MacAddress(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcOrderActionField_get_InstrumentID(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcOrderActionField_get_IPAddress(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcOrderActionField_get_OrderMemo(PyCThostFtdcOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderMemo);
}

static PyObject *PyCThostFtdcOrderActionField_get_SessionReqSeq(PyCThostFtdcOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionReqSeq);
#else 
	return PyInt_FromLong(self->data.SessionReqSeq);
#endif 
}

static int PyCThostFtdcOrderActionField_set_BrokerID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_InvestorID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_OrderActionRef(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_OrderRef(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
		PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OrderRef, buf, sizeof(self->data.OrderRef));
	return 0;
}

static int PyCThostFtdcOrderActionField_set_RequestID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_FrontID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_SessionID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_ExchangeID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_OrderSysID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_ActionFlag(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_LimitPrice(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LimitPrice = buf;
    return 0;
}

static int PyCThostFtdcOrderActionField_set_VolumeChange(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeChange Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "VolumeChange Expected int"); 
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
    self->data.VolumeChange = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOrderActionField_set_ActionDate(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_ActionTime(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_TraderID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_InstallID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_OrderLocalID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_ActionLocalID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_ParticipantID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_ClientID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_BusinessUnit(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_OrderActionStatus(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_UserID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_StatusMsg(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_reserve1(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_BranchID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_InvestUnitID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_reserve2(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_MacAddress(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_InstrumentID(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_IPAddress(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_OrderMemo(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderActionField_set_SessionReqSeq(PyCThostFtdcOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcOrderActionField_get_BrokerID, (setter)PyCThostFtdcOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcOrderActionField_get_InvestorID, (setter)PyCThostFtdcOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OrderActionRef", (getter)PyCThostFtdcOrderActionField_get_OrderActionRef, (setter)PyCThostFtdcOrderActionField_set_OrderActionRef, (char *)"OrderActionRef", NULL},
	 {(char *)"OrderRef", (getter)PyCThostFtdcOrderActionField_get_OrderRef, (setter)PyCThostFtdcOrderActionField_set_OrderRef, (char *)"OrderRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcOrderActionField_get_RequestID, (setter)PyCThostFtdcOrderActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcOrderActionField_get_FrontID, (setter)PyCThostFtdcOrderActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcOrderActionField_get_SessionID, (setter)PyCThostFtdcOrderActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcOrderActionField_get_ExchangeID, (setter)PyCThostFtdcOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcOrderActionField_get_OrderSysID, (setter)PyCThostFtdcOrderActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcOrderActionField_get_ActionFlag, (setter)PyCThostFtdcOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"LimitPrice", (getter)PyCThostFtdcOrderActionField_get_LimitPrice, (setter)PyCThostFtdcOrderActionField_set_LimitPrice, (char *)"LimitPrice", NULL},
	 {(char *)"VolumeChange", (getter)PyCThostFtdcOrderActionField_get_VolumeChange, (setter)PyCThostFtdcOrderActionField_set_VolumeChange, (char *)"VolumeChange", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcOrderActionField_get_ActionDate, (setter)PyCThostFtdcOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
	 {(char *)"ActionTime", (getter)PyCThostFtdcOrderActionField_get_ActionTime, (setter)PyCThostFtdcOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcOrderActionField_get_TraderID, (setter)PyCThostFtdcOrderActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcOrderActionField_get_InstallID, (setter)PyCThostFtdcOrderActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderLocalID", (getter)PyCThostFtdcOrderActionField_get_OrderLocalID, (setter)PyCThostFtdcOrderActionField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcOrderActionField_get_ParticipantID, (setter)PyCThostFtdcOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcOrderActionField_get_ClientID, (setter)PyCThostFtdcOrderActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcOrderActionField_get_UserID, (setter)PyCThostFtdcOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcOrderActionField_get_StatusMsg, (setter)PyCThostFtdcOrderActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcOrderActionField_get_reserve1, (setter)PyCThostFtdcOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcOrderActionField_get_BranchID, (setter)PyCThostFtdcOrderActionField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcOrderActionField_get_reserve2, (setter)PyCThostFtdcOrderActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcOrderActionField_get_MacAddress, (setter)PyCThostFtdcOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcOrderActionField_get_InstrumentID, (setter)PyCThostFtdcOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcOrderActionField_get_IPAddress, (setter)PyCThostFtdcOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"OrderMemo", (getter)PyCThostFtdcOrderActionField_get_OrderMemo, (setter)PyCThostFtdcOrderActionField_set_OrderMemo, (char *)"OrderMemo", NULL},
	 {(char *)"SessionReqSeq", (getter)PyCThostFtdcOrderActionField_get_SessionReqSeq, (setter)PyCThostFtdcOrderActionField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOrderActionField", (PyObject *)&PyCThostFtdcOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOrderActionField to module");
        Py_DECREF(&PyCThostFtdcOrderActionFieldType);
		return -1;
    }

    return 0;
}
