
#include "PyCThostFtdcErrOrderActionField.h"



static PyObject *PyCThostFtdcErrOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcErrOrderActionField *self = (PyCThostFtdcErrOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcErrOrderActionField_init(PyCThostFtdcErrOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OrderActionRef", "OrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "ActionDate", "ActionTime", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "StatusMsg", "reserve1", "BranchID", "InvestUnitID", "reserve2", "MacAddress", "ErrorID", "ErrorMsg", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pErrOrderActionField_BrokerID = NULL;
	Py_ssize_t pErrOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pErrOrderActionField_InvestorID = NULL;
	Py_ssize_t pErrOrderActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pErrOrderActionField_OrderActionRef = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pErrOrderActionField_OrderRef = NULL;
	Py_ssize_t pErrOrderActionField_OrderRef_len = 0;

	//TThostFtdcRequestIDType int
	int pErrOrderActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pErrOrderActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pErrOrderActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pErrOrderActionField_ExchangeID = NULL;
	Py_ssize_t pErrOrderActionField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pErrOrderActionField_OrderSysID = NULL;
	Py_ssize_t pErrOrderActionField_OrderSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pErrOrderActionField_ActionFlag = 0;

	//TThostFtdcPriceType double
	double pErrOrderActionField_LimitPrice = 0.0;

	//TThostFtdcVolumeType int
	int pErrOrderActionField_VolumeChange = 0;

	//TThostFtdcDateType char[9]
	const char *pErrOrderActionField_ActionDate = NULL;
	Py_ssize_t pErrOrderActionField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pErrOrderActionField_ActionTime = NULL;
	Py_ssize_t pErrOrderActionField_ActionTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pErrOrderActionField_TraderID = NULL;
	Py_ssize_t pErrOrderActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pErrOrderActionField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pErrOrderActionField_OrderLocalID = NULL;
	Py_ssize_t pErrOrderActionField_OrderLocalID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pErrOrderActionField_ActionLocalID = NULL;
	Py_ssize_t pErrOrderActionField_ActionLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pErrOrderActionField_ParticipantID = NULL;
	Py_ssize_t pErrOrderActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pErrOrderActionField_ClientID = NULL;
	Py_ssize_t pErrOrderActionField_ClientID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pErrOrderActionField_BusinessUnit = NULL;
	Py_ssize_t pErrOrderActionField_BusinessUnit_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pErrOrderActionField_OrderActionStatus = 0;

	//TThostFtdcUserIDType char[16]
	const char *pErrOrderActionField_UserID = NULL;
	Py_ssize_t pErrOrderActionField_UserID_len = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pErrOrderActionField_StatusMsg = NULL;
	Py_ssize_t pErrOrderActionField_StatusMsg_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pErrOrderActionField_reserve1 = NULL;
	Py_ssize_t pErrOrderActionField_reserve1_len = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pErrOrderActionField_BranchID = NULL;
	Py_ssize_t pErrOrderActionField_BranchID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pErrOrderActionField_InvestUnitID = NULL;
	Py_ssize_t pErrOrderActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pErrOrderActionField_reserve2 = NULL;
	Py_ssize_t pErrOrderActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pErrOrderActionField_MacAddress = NULL;
	Py_ssize_t pErrOrderActionField_MacAddress_len = 0;

	//TThostFtdcErrorIDType int
	int pErrOrderActionField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pErrOrderActionField_ErrorMsg = NULL;
	Py_ssize_t pErrOrderActionField_ErrorMsg_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pErrOrderActionField_InstrumentID = NULL;
	Py_ssize_t pErrOrderActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pErrOrderActionField_IPAddress = NULL;
	Py_ssize_t pErrOrderActionField_IPAddress_len = 0;

	//TThostFtdcOrderMemoType char[13]
	const char *pErrOrderActionField_OrderMemo = NULL;
	Py_ssize_t pErrOrderActionField_OrderMemo_len = 0;

	//TThostFtdcSequenceNo12Type int
	int pErrOrderActionField_SessionReqSeq = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cdiy#y#y#iy#y#y#y#y#cy#y#y#y#y#y#y#iy#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cdis#s#s#is#s#s#s#s#cs#s#s#s#s#s#s#is#s#s#s#i", (char **)kwlist
#endif

		, &pErrOrderActionField_BrokerID, &pErrOrderActionField_BrokerID_len
		, &pErrOrderActionField_InvestorID, &pErrOrderActionField_InvestorID_len
		, &pErrOrderActionField_OrderActionRef
		, &pErrOrderActionField_OrderRef, &pErrOrderActionField_OrderRef_len
		, &pErrOrderActionField_RequestID
		, &pErrOrderActionField_FrontID
		, &pErrOrderActionField_SessionID
		, &pErrOrderActionField_ExchangeID, &pErrOrderActionField_ExchangeID_len
		, &pErrOrderActionField_OrderSysID, &pErrOrderActionField_OrderSysID_len
		, &pErrOrderActionField_ActionFlag
		, &pErrOrderActionField_LimitPrice
		, &pErrOrderActionField_VolumeChange
		, &pErrOrderActionField_ActionDate, &pErrOrderActionField_ActionDate_len
		, &pErrOrderActionField_ActionTime, &pErrOrderActionField_ActionTime_len
		, &pErrOrderActionField_TraderID, &pErrOrderActionField_TraderID_len
		, &pErrOrderActionField_InstallID
		, &pErrOrderActionField_OrderLocalID, &pErrOrderActionField_OrderLocalID_len
		, &pErrOrderActionField_ActionLocalID, &pErrOrderActionField_ActionLocalID_len
		, &pErrOrderActionField_ParticipantID, &pErrOrderActionField_ParticipantID_len
		, &pErrOrderActionField_ClientID, &pErrOrderActionField_ClientID_len
		, &pErrOrderActionField_BusinessUnit, &pErrOrderActionField_BusinessUnit_len
		, &pErrOrderActionField_OrderActionStatus
		, &pErrOrderActionField_UserID, &pErrOrderActionField_UserID_len
		, &pErrOrderActionField_StatusMsg, &pErrOrderActionField_StatusMsg_len
		, &pErrOrderActionField_reserve1, &pErrOrderActionField_reserve1_len
		, &pErrOrderActionField_BranchID, &pErrOrderActionField_BranchID_len
		, &pErrOrderActionField_InvestUnitID, &pErrOrderActionField_InvestUnitID_len
		, &pErrOrderActionField_reserve2, &pErrOrderActionField_reserve2_len
		, &pErrOrderActionField_MacAddress, &pErrOrderActionField_MacAddress_len
		, &pErrOrderActionField_ErrorID
		, &pErrOrderActionField_ErrorMsg, &pErrOrderActionField_ErrorMsg_len
		, &pErrOrderActionField_InstrumentID, &pErrOrderActionField_InstrumentID_len
		, &pErrOrderActionField_IPAddress, &pErrOrderActionField_IPAddress_len
		, &pErrOrderActionField_OrderMemo, &pErrOrderActionField_OrderMemo_len
		, &pErrOrderActionField_SessionReqSeq


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pErrOrderActionField_BrokerID != NULL) {
		if(pErrOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pErrOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pErrOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pErrOrderActionField_InvestorID != NULL) {
		if(pErrOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pErrOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pErrOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.OrderActionRef = pErrOrderActionField_OrderActionRef;

	//TThostFtdcOrderRefType char[13]
	if(pErrOrderActionField_OrderRef != NULL) {
		if(pErrOrderActionField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
			PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", pErrOrderActionField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
			return -1;
		}
		strncpy(self->data.OrderRef, pErrOrderActionField_OrderRef, sizeof(self->data.OrderRef) );
		pErrOrderActionField_OrderRef = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pErrOrderActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pErrOrderActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pErrOrderActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pErrOrderActionField_ExchangeID != NULL) {
		if(pErrOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pErrOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pErrOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pErrOrderActionField_OrderSysID != NULL) {
		if(pErrOrderActionField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pErrOrderActionField_OrderSysID, sizeof(self->data.OrderSysID) );
		pErrOrderActionField_OrderSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pErrOrderActionField_ActionFlag;

	//TThostFtdcPriceType double
	self->data.LimitPrice = pErrOrderActionField_LimitPrice;
	//TThostFtdcVolumeType int
	self->data.VolumeChange = pErrOrderActionField_VolumeChange;

	//TThostFtdcDateType char[9]
	if(pErrOrderActionField_ActionDate != NULL) {
		if(pErrOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pErrOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pErrOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
		pErrOrderActionField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pErrOrderActionField_ActionTime != NULL) {
		if(pErrOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pErrOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pErrOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
		pErrOrderActionField_ActionTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pErrOrderActionField_TraderID != NULL) {
		if(pErrOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pErrOrderActionField_TraderID, sizeof(self->data.TraderID) );
		pErrOrderActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pErrOrderActionField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pErrOrderActionField_OrderLocalID != NULL) {
		if(pErrOrderActionField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
			return -1;
		}
		strncpy(self->data.OrderLocalID, pErrOrderActionField_OrderLocalID, sizeof(self->data.OrderLocalID) );
		pErrOrderActionField_OrderLocalID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pErrOrderActionField_ActionLocalID != NULL) {
		if(pErrOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pErrOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pErrOrderActionField_ActionLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pErrOrderActionField_ParticipantID != NULL) {
		if(pErrOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pErrOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pErrOrderActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pErrOrderActionField_ClientID != NULL) {
		if(pErrOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pErrOrderActionField_ClientID, sizeof(self->data.ClientID) );
		pErrOrderActionField_ClientID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pErrOrderActionField_BusinessUnit != NULL) {
		if(pErrOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pErrOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pErrOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pErrOrderActionField_BusinessUnit = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pErrOrderActionField_OrderActionStatus;

	//TThostFtdcUserIDType char[16]
	if(pErrOrderActionField_UserID != NULL) {
		if(pErrOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pErrOrderActionField_UserID, sizeof(self->data.UserID) );
		pErrOrderActionField_UserID = NULL;
	}

	//TThostFtdcErrorMsgType char[81]
	if(pErrOrderActionField_StatusMsg != NULL) {
		if(pErrOrderActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pErrOrderActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pErrOrderActionField_StatusMsg, sizeof(self->data.StatusMsg) );
		pErrOrderActionField_StatusMsg = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pErrOrderActionField_reserve1 != NULL) {
		if(pErrOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pErrOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pErrOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pErrOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcBranchIDType char[9]
	if(pErrOrderActionField_BranchID != NULL) {
		if(pErrOrderActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pErrOrderActionField_BranchID, sizeof(self->data.BranchID) );
		pErrOrderActionField_BranchID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pErrOrderActionField_InvestUnitID != NULL) {
		if(pErrOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pErrOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pErrOrderActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pErrOrderActionField_reserve2 != NULL) {
		if(pErrOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pErrOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pErrOrderActionField_reserve2, sizeof(self->data.reserve2) );
		pErrOrderActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pErrOrderActionField_MacAddress != NULL) {
		if(pErrOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pErrOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pErrOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pErrOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pErrOrderActionField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pErrOrderActionField_ErrorMsg != NULL) {
		if(pErrOrderActionField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pErrOrderActionField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pErrOrderActionField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pErrOrderActionField_ErrorMsg = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pErrOrderActionField_InstrumentID != NULL) {
		if(pErrOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pErrOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pErrOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pErrOrderActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pErrOrderActionField_IPAddress != NULL) {
		if(pErrOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pErrOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pErrOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pErrOrderActionField_IPAddress = NULL;
	}

	//TThostFtdcOrderMemoType char[13]
	if(pErrOrderActionField_OrderMemo != NULL) {
		if(pErrOrderActionField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
			PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", pErrOrderActionField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
			return -1;
		}
		strncpy(self->data.OrderMemo, pErrOrderActionField_OrderMemo, sizeof(self->data.OrderMemo) );
		pErrOrderActionField_OrderMemo = NULL;
	}

	//TThostFtdcSequenceNo12Type int
	self->data.SessionReqSeq = pErrOrderActionField_SessionReqSeq;



    return 0;
}

static void PyCThostFtdcErrOrderActionField_dealloc(PyCThostFtdcErrOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcErrOrderActionField_repr(PyCThostFtdcErrOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:d,s:i,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:i}"
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
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 
		, "OrderMemo", self->data.OrderMemo 
		, "SessionReqSeq", self->data.SessionReqSeq


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_BrokerID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_InvestorID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_OrderActionRef(PyCThostFtdcErrOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OrderActionRef);
#else 
	return PyInt_FromLong(self->data.OrderActionRef);
#endif 
}

static PyObject *PyCThostFtdcErrOrderActionField_get_OrderRef(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderRef);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_RequestID(PyCThostFtdcErrOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcErrOrderActionField_get_FrontID(PyCThostFtdcErrOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcErrOrderActionField_get_SessionID(PyCThostFtdcErrOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcErrOrderActionField_get_ExchangeID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_OrderSysID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_ActionFlag(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_LimitPrice(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LimitPrice);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_VolumeChange(PyCThostFtdcErrOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeChange);
#else 
	return PyInt_FromLong(self->data.VolumeChange);
#endif 
}

static PyObject *PyCThostFtdcErrOrderActionField_get_ActionDate(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_ActionTime(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_TraderID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_InstallID(PyCThostFtdcErrOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcErrOrderActionField_get_OrderLocalID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderLocalID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_ActionLocalID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_ParticipantID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_ClientID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_BusinessUnit(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_OrderActionStatus(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_UserID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_StatusMsg(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_reserve1(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_BranchID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_InvestUnitID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_reserve2(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_MacAddress(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_ErrorID(PyCThostFtdcErrOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcErrOrderActionField_get_ErrorMsg(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_InstrumentID(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_IPAddress(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_OrderMemo(PyCThostFtdcErrOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderMemo);
}

static PyObject *PyCThostFtdcErrOrderActionField_get_SessionReqSeq(PyCThostFtdcErrOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionReqSeq);
#else 
	return PyInt_FromLong(self->data.SessionReqSeq);
#endif 
}

static int PyCThostFtdcErrOrderActionField_set_BrokerID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_InvestorID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_OrderActionRef(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_OrderRef(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_RequestID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_FrontID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_SessionID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_ExchangeID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_OrderSysID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_ActionFlag(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_LimitPrice(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_VolumeChange(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_ActionDate(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_ActionTime(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_TraderID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_InstallID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_OrderLocalID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_ActionLocalID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_ParticipantID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_ClientID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_BusinessUnit(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_OrderActionStatus(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_UserID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_StatusMsg(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_reserve1(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_BranchID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_InvestUnitID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_reserve2(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_MacAddress(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_ErrorID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected int"); 
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
    self->data.ErrorID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcErrOrderActionField_set_ErrorMsg(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
		PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ErrorMsg, buf, sizeof(self->data.ErrorMsg));
	return 0;
}

static int PyCThostFtdcErrOrderActionField_set_InstrumentID(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_IPAddress(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_OrderMemo(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderActionField_set_SessionReqSeq(PyCThostFtdcErrOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcErrOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcErrOrderActionField_get_BrokerID, (setter)PyCThostFtdcErrOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcErrOrderActionField_get_InvestorID, (setter)PyCThostFtdcErrOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OrderActionRef", (getter)PyCThostFtdcErrOrderActionField_get_OrderActionRef, (setter)PyCThostFtdcErrOrderActionField_set_OrderActionRef, (char *)"OrderActionRef", NULL},
	 {(char *)"OrderRef", (getter)PyCThostFtdcErrOrderActionField_get_OrderRef, (setter)PyCThostFtdcErrOrderActionField_set_OrderRef, (char *)"OrderRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcErrOrderActionField_get_RequestID, (setter)PyCThostFtdcErrOrderActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcErrOrderActionField_get_FrontID, (setter)PyCThostFtdcErrOrderActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcErrOrderActionField_get_SessionID, (setter)PyCThostFtdcErrOrderActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcErrOrderActionField_get_ExchangeID, (setter)PyCThostFtdcErrOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcErrOrderActionField_get_OrderSysID, (setter)PyCThostFtdcErrOrderActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcErrOrderActionField_get_ActionFlag, (setter)PyCThostFtdcErrOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"LimitPrice", (getter)PyCThostFtdcErrOrderActionField_get_LimitPrice, (setter)PyCThostFtdcErrOrderActionField_set_LimitPrice, (char *)"LimitPrice", NULL},
	 {(char *)"VolumeChange", (getter)PyCThostFtdcErrOrderActionField_get_VolumeChange, (setter)PyCThostFtdcErrOrderActionField_set_VolumeChange, (char *)"VolumeChange", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcErrOrderActionField_get_ActionDate, (setter)PyCThostFtdcErrOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
	 {(char *)"ActionTime", (getter)PyCThostFtdcErrOrderActionField_get_ActionTime, (setter)PyCThostFtdcErrOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcErrOrderActionField_get_TraderID, (setter)PyCThostFtdcErrOrderActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcErrOrderActionField_get_InstallID, (setter)PyCThostFtdcErrOrderActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderLocalID", (getter)PyCThostFtdcErrOrderActionField_get_OrderLocalID, (setter)PyCThostFtdcErrOrderActionField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcErrOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcErrOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcErrOrderActionField_get_ParticipantID, (setter)PyCThostFtdcErrOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcErrOrderActionField_get_ClientID, (setter)PyCThostFtdcErrOrderActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcErrOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcErrOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcErrOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcErrOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcErrOrderActionField_get_UserID, (setter)PyCThostFtdcErrOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcErrOrderActionField_get_StatusMsg, (setter)PyCThostFtdcErrOrderActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcErrOrderActionField_get_reserve1, (setter)PyCThostFtdcErrOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcErrOrderActionField_get_BranchID, (setter)PyCThostFtdcErrOrderActionField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcErrOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcErrOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcErrOrderActionField_get_reserve2, (setter)PyCThostFtdcErrOrderActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcErrOrderActionField_get_MacAddress, (setter)PyCThostFtdcErrOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcErrOrderActionField_get_ErrorID, (setter)PyCThostFtdcErrOrderActionField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcErrOrderActionField_get_ErrorMsg, (setter)PyCThostFtdcErrOrderActionField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcErrOrderActionField_get_InstrumentID, (setter)PyCThostFtdcErrOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcErrOrderActionField_get_IPAddress, (setter)PyCThostFtdcErrOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"OrderMemo", (getter)PyCThostFtdcErrOrderActionField_get_OrderMemo, (setter)PyCThostFtdcErrOrderActionField_set_OrderMemo, (char *)"OrderMemo", NULL},
	 {(char *)"SessionReqSeq", (getter)PyCThostFtdcErrOrderActionField_get_SessionReqSeq, (setter)PyCThostFtdcErrOrderActionField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcErrOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcErrOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcErrOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcErrOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcErrOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcErrOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcErrOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcErrOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcErrOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcErrOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcErrOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcErrOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcErrOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcErrOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcErrOrderActionField", (PyObject *)&PyCThostFtdcErrOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcErrOrderActionField to module");
        Py_DECREF(&PyCThostFtdcErrOrderActionFieldType);
		return -1;
    }

    return 0;
}
