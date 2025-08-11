
#include "PyCThostFtdcExecOrderField.h"



static PyObject *PyCThostFtdcExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExecOrderField *self = (PyCThostFtdcExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExecOrderField_init(PyCThostFtdcExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExecOrderRef", "UserID", "Volume", "RequestID", "BusinessUnit", "OffsetFlag", "HedgeFlag", "ActionType", "PosiDirection", "ReservePositionFlag", "CloseFlag", "ExecOrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "ExecOrderSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "ActiveUserID", "BrokerExecOrderSeq", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pExecOrderField_BrokerID = NULL;
	Py_ssize_t pExecOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pExecOrderField_InvestorID = NULL;
	Py_ssize_t pExecOrderField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pExecOrderField_reserve1 = NULL;
	Py_ssize_t pExecOrderField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pExecOrderField_ExecOrderRef = NULL;
	Py_ssize_t pExecOrderField_ExecOrderRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pExecOrderField_UserID = NULL;
	Py_ssize_t pExecOrderField_UserID_len = 0;

	//TThostFtdcVolumeType int
	int pExecOrderField_Volume = 0;

	//TThostFtdcRequestIDType int
	int pExecOrderField_RequestID = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExecOrderField_BusinessUnit = NULL;
	Py_ssize_t pExecOrderField_BusinessUnit_len = 0;

	//TThostFtdcOffsetFlagType char
	char pExecOrderField_OffsetFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pExecOrderField_HedgeFlag = 0;

	//TThostFtdcActionTypeType char
	char pExecOrderField_ActionType = 0;

	//TThostFtdcPosiDirectionType char
	char pExecOrderField_PosiDirection = 0;

	//TThostFtdcExecOrderPositionFlagType char
	char pExecOrderField_ReservePositionFlag = 0;

	//TThostFtdcExecOrderCloseFlagType char
	char pExecOrderField_CloseFlag = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExecOrderField_ExecOrderLocalID = NULL;
	Py_ssize_t pExecOrderField_ExecOrderLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pExecOrderField_ExchangeID = NULL;
	Py_ssize_t pExecOrderField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExecOrderField_ParticipantID = NULL;
	Py_ssize_t pExecOrderField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExecOrderField_ClientID = NULL;
	Py_ssize_t pExecOrderField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pExecOrderField_reserve2 = NULL;
	Py_ssize_t pExecOrderField_reserve2_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExecOrderField_TraderID = NULL;
	Py_ssize_t pExecOrderField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExecOrderField_InstallID = 0;

	//TThostFtdcOrderSubmitStatusType char
	char pExecOrderField_OrderSubmitStatus = 0;

	//TThostFtdcSequenceNoType int
	int pExecOrderField_NotifySequence = 0;

	//TThostFtdcDateType char[9]
	const char *pExecOrderField_TradingDay = NULL;
	Py_ssize_t pExecOrderField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pExecOrderField_SettlementID = 0;

	//TThostFtdcExecOrderSysIDType char[21]
	const char *pExecOrderField_ExecOrderSysID = NULL;
	Py_ssize_t pExecOrderField_ExecOrderSysID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pExecOrderField_InsertDate = NULL;
	Py_ssize_t pExecOrderField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExecOrderField_InsertTime = NULL;
	Py_ssize_t pExecOrderField_InsertTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExecOrderField_CancelTime = NULL;
	Py_ssize_t pExecOrderField_CancelTime_len = 0;

	//TThostFtdcExecResultType char
	char pExecOrderField_ExecResult = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExecOrderField_ClearingPartID = NULL;
	Py_ssize_t pExecOrderField_ClearingPartID_len = 0;

	//TThostFtdcSequenceNoType int
	int pExecOrderField_SequenceNo = 0;

	//TThostFtdcFrontIDType int
	int pExecOrderField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pExecOrderField_SessionID = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pExecOrderField_UserProductInfo = NULL;
	Py_ssize_t pExecOrderField_UserProductInfo_len = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pExecOrderField_StatusMsg = NULL;
	Py_ssize_t pExecOrderField_StatusMsg_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pExecOrderField_ActiveUserID = NULL;
	Py_ssize_t pExecOrderField_ActiveUserID_len = 0;

	//TThostFtdcSequenceNoType int
	int pExecOrderField_BrokerExecOrderSeq = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pExecOrderField_BranchID = NULL;
	Py_ssize_t pExecOrderField_BranchID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pExecOrderField_InvestUnitID = NULL;
	Py_ssize_t pExecOrderField_InvestUnitID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pExecOrderField_AccountID = NULL;
	Py_ssize_t pExecOrderField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pExecOrderField_CurrencyID = NULL;
	Py_ssize_t pExecOrderField_CurrencyID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExecOrderField_reserve3 = NULL;
	Py_ssize_t pExecOrderField_reserve3_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExecOrderField_MacAddress = NULL;
	Py_ssize_t pExecOrderField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pExecOrderField_InstrumentID = NULL;
	Py_ssize_t pExecOrderField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pExecOrderField_ExchangeInstID = NULL;
	Py_ssize_t pExecOrderField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExecOrderField_IPAddress = NULL;
	Py_ssize_t pExecOrderField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccccccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iiiy#y#y#iy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#ccccccs#s#s#s#s#s#icis#is#s#s#s#cs#iiis#s#s#is#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pExecOrderField_BrokerID, &pExecOrderField_BrokerID_len
		, &pExecOrderField_InvestorID, &pExecOrderField_InvestorID_len
		, &pExecOrderField_reserve1, &pExecOrderField_reserve1_len
		, &pExecOrderField_ExecOrderRef, &pExecOrderField_ExecOrderRef_len
		, &pExecOrderField_UserID, &pExecOrderField_UserID_len
		, &pExecOrderField_Volume
		, &pExecOrderField_RequestID
		, &pExecOrderField_BusinessUnit, &pExecOrderField_BusinessUnit_len
		, &pExecOrderField_OffsetFlag
		, &pExecOrderField_HedgeFlag
		, &pExecOrderField_ActionType
		, &pExecOrderField_PosiDirection
		, &pExecOrderField_ReservePositionFlag
		, &pExecOrderField_CloseFlag
		, &pExecOrderField_ExecOrderLocalID, &pExecOrderField_ExecOrderLocalID_len
		, &pExecOrderField_ExchangeID, &pExecOrderField_ExchangeID_len
		, &pExecOrderField_ParticipantID, &pExecOrderField_ParticipantID_len
		, &pExecOrderField_ClientID, &pExecOrderField_ClientID_len
		, &pExecOrderField_reserve2, &pExecOrderField_reserve2_len
		, &pExecOrderField_TraderID, &pExecOrderField_TraderID_len
		, &pExecOrderField_InstallID
		, &pExecOrderField_OrderSubmitStatus
		, &pExecOrderField_NotifySequence
		, &pExecOrderField_TradingDay, &pExecOrderField_TradingDay_len
		, &pExecOrderField_SettlementID
		, &pExecOrderField_ExecOrderSysID, &pExecOrderField_ExecOrderSysID_len
		, &pExecOrderField_InsertDate, &pExecOrderField_InsertDate_len
		, &pExecOrderField_InsertTime, &pExecOrderField_InsertTime_len
		, &pExecOrderField_CancelTime, &pExecOrderField_CancelTime_len
		, &pExecOrderField_ExecResult
		, &pExecOrderField_ClearingPartID, &pExecOrderField_ClearingPartID_len
		, &pExecOrderField_SequenceNo
		, &pExecOrderField_FrontID
		, &pExecOrderField_SessionID
		, &pExecOrderField_UserProductInfo, &pExecOrderField_UserProductInfo_len
		, &pExecOrderField_StatusMsg, &pExecOrderField_StatusMsg_len
		, &pExecOrderField_ActiveUserID, &pExecOrderField_ActiveUserID_len
		, &pExecOrderField_BrokerExecOrderSeq
		, &pExecOrderField_BranchID, &pExecOrderField_BranchID_len
		, &pExecOrderField_InvestUnitID, &pExecOrderField_InvestUnitID_len
		, &pExecOrderField_AccountID, &pExecOrderField_AccountID_len
		, &pExecOrderField_CurrencyID, &pExecOrderField_CurrencyID_len
		, &pExecOrderField_reserve3, &pExecOrderField_reserve3_len
		, &pExecOrderField_MacAddress, &pExecOrderField_MacAddress_len
		, &pExecOrderField_InstrumentID, &pExecOrderField_InstrumentID_len
		, &pExecOrderField_ExchangeInstID, &pExecOrderField_ExchangeInstID_len
		, &pExecOrderField_IPAddress, &pExecOrderField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pExecOrderField_BrokerID != NULL) {
		if(pExecOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pExecOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pExecOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pExecOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pExecOrderField_InvestorID != NULL) {
		if(pExecOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pExecOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pExecOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pExecOrderField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pExecOrderField_reserve1 != NULL) {
		if(pExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExecOrderField_reserve1, sizeof(self->data.reserve1) );
		pExecOrderField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pExecOrderField_ExecOrderRef != NULL) {
		if(pExecOrderField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", pExecOrderField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
			return -1;
		}
		strncpy(self->data.ExecOrderRef, pExecOrderField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
		pExecOrderField_ExecOrderRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pExecOrderField_UserID != NULL) {
		if(pExecOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pExecOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pExecOrderField_UserID, sizeof(self->data.UserID) );
		pExecOrderField_UserID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.Volume = pExecOrderField_Volume;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pExecOrderField_RequestID;

	//TThostFtdcBusinessUnitType char[21]
	if(pExecOrderField_BusinessUnit != NULL) {
		if(pExecOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExecOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExecOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExecOrderField_BusinessUnit = NULL;
	}

	//TThostFtdcOffsetFlagType char
	self->data.OffsetFlag = pExecOrderField_OffsetFlag;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pExecOrderField_HedgeFlag;

	//TThostFtdcActionTypeType char
	self->data.ActionType = pExecOrderField_ActionType;

	//TThostFtdcPosiDirectionType char
	self->data.PosiDirection = pExecOrderField_PosiDirection;

	//TThostFtdcExecOrderPositionFlagType char
	self->data.ReservePositionFlag = pExecOrderField_ReservePositionFlag;

	//TThostFtdcExecOrderCloseFlagType char
	self->data.CloseFlag = pExecOrderField_CloseFlag;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExecOrderField_ExecOrderLocalID != NULL) {
		if(pExecOrderField_ExecOrderLocalID_len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is %zd)", pExecOrderField_ExecOrderLocalID_len, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
			return -1;
		}
		strncpy(self->data.ExecOrderLocalID, pExecOrderField_ExecOrderLocalID, sizeof(self->data.ExecOrderLocalID) );
		pExecOrderField_ExecOrderLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pExecOrderField_ExchangeID != NULL) {
		if(pExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExecOrderField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExecOrderField_ParticipantID != NULL) {
		if(pExecOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExecOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExecOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExecOrderField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExecOrderField_ClientID != NULL) {
		if(pExecOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExecOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExecOrderField_ClientID, sizeof(self->data.ClientID) );
		pExecOrderField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pExecOrderField_reserve2 != NULL) {
		if(pExecOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pExecOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pExecOrderField_reserve2, sizeof(self->data.reserve2) );
		pExecOrderField_reserve2 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExecOrderField_TraderID != NULL) {
		if(pExecOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExecOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExecOrderField_TraderID, sizeof(self->data.TraderID) );
		pExecOrderField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExecOrderField_InstallID;

	//TThostFtdcOrderSubmitStatusType char
	self->data.OrderSubmitStatus = pExecOrderField_OrderSubmitStatus;

	//TThostFtdcSequenceNoType int
	self->data.NotifySequence = pExecOrderField_NotifySequence;

	//TThostFtdcDateType char[9]
	if(pExecOrderField_TradingDay != NULL) {
		if(pExecOrderField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pExecOrderField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pExecOrderField_TradingDay, sizeof(self->data.TradingDay) );
		pExecOrderField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pExecOrderField_SettlementID;

	//TThostFtdcExecOrderSysIDType char[21]
	if(pExecOrderField_ExecOrderSysID != NULL) {
		if(pExecOrderField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", pExecOrderField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
			return -1;
		}
		strncpy(self->data.ExecOrderSysID, pExecOrderField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
		pExecOrderField_ExecOrderSysID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pExecOrderField_InsertDate != NULL) {
		if(pExecOrderField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pExecOrderField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pExecOrderField_InsertDate, sizeof(self->data.InsertDate) );
		pExecOrderField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExecOrderField_InsertTime != NULL) {
		if(pExecOrderField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pExecOrderField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pExecOrderField_InsertTime, sizeof(self->data.InsertTime) );
		pExecOrderField_InsertTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExecOrderField_CancelTime != NULL) {
		if(pExecOrderField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
			PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", pExecOrderField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
			return -1;
		}
		strncpy(self->data.CancelTime, pExecOrderField_CancelTime, sizeof(self->data.CancelTime) );
		pExecOrderField_CancelTime = NULL;
	}

	//TThostFtdcExecResultType char
	self->data.ExecResult = pExecOrderField_ExecResult;

	//TThostFtdcParticipantIDType char[11]
	if(pExecOrderField_ClearingPartID != NULL) {
		if(pExecOrderField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
			PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", pExecOrderField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
			return -1;
		}
		strncpy(self->data.ClearingPartID, pExecOrderField_ClearingPartID, sizeof(self->data.ClearingPartID) );
		pExecOrderField_ClearingPartID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pExecOrderField_SequenceNo;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pExecOrderField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pExecOrderField_SessionID;

	//TThostFtdcProductInfoType char[11]
	if(pExecOrderField_UserProductInfo != NULL) {
		if(pExecOrderField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pExecOrderField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pExecOrderField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pExecOrderField_UserProductInfo = NULL;
	}

	//TThostFtdcErrorMsgType char[81]
	if(pExecOrderField_StatusMsg != NULL) {
		if(pExecOrderField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pExecOrderField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pExecOrderField_StatusMsg, sizeof(self->data.StatusMsg) );
		pExecOrderField_StatusMsg = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pExecOrderField_ActiveUserID != NULL) {
		if(pExecOrderField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
			PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", pExecOrderField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
			return -1;
		}
		strncpy(self->data.ActiveUserID, pExecOrderField_ActiveUserID, sizeof(self->data.ActiveUserID) );
		pExecOrderField_ActiveUserID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.BrokerExecOrderSeq = pExecOrderField_BrokerExecOrderSeq;

	//TThostFtdcBranchIDType char[9]
	if(pExecOrderField_BranchID != NULL) {
		if(pExecOrderField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pExecOrderField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pExecOrderField_BranchID, sizeof(self->data.BranchID) );
		pExecOrderField_BranchID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pExecOrderField_InvestUnitID != NULL) {
		if(pExecOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pExecOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pExecOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pExecOrderField_InvestUnitID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pExecOrderField_AccountID != NULL) {
		if(pExecOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pExecOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pExecOrderField_AccountID, sizeof(self->data.AccountID) );
		pExecOrderField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pExecOrderField_CurrencyID != NULL) {
		if(pExecOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pExecOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pExecOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
		pExecOrderField_CurrencyID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pExecOrderField_reserve3 != NULL) {
		if(pExecOrderField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
			PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", pExecOrderField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
			return -1;
		}
		strncpy(self->data.reserve3, pExecOrderField_reserve3, sizeof(self->data.reserve3) );
		pExecOrderField_reserve3 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExecOrderField_MacAddress != NULL) {
		if(pExecOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExecOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExecOrderField_MacAddress, sizeof(self->data.MacAddress) );
		pExecOrderField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pExecOrderField_InstrumentID != NULL) {
		if(pExecOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pExecOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pExecOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
		pExecOrderField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pExecOrderField_ExchangeInstID != NULL) {
		if(pExecOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pExecOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pExecOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pExecOrderField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pExecOrderField_IPAddress != NULL) {
		if(pExecOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExecOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExecOrderField_IPAddress, sizeof(self->data.IPAddress) );
		pExecOrderField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcExecOrderField_dealloc(PyCThostFtdcExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExecOrderField_repr(PyCThostFtdcExecOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:i,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:i,s:i,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ExecOrderRef", self->data.ExecOrderRef 
		, "UserID", self->data.UserID 
		, "Volume", self->data.Volume
		, "RequestID", self->data.RequestID
		, "BusinessUnit", self->data.BusinessUnit 
		, "OffsetFlag", self->data.OffsetFlag
		, "HedgeFlag", self->data.HedgeFlag
		, "ActionType", self->data.ActionType
		, "PosiDirection", self->data.PosiDirection
		, "ReservePositionFlag", self->data.ReservePositionFlag
		, "CloseFlag", self->data.CloseFlag
		, "ExecOrderLocalID", self->data.ExecOrderLocalID 
		, "ExchangeID", self->data.ExchangeID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "reserve2", self->data.reserve2 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "OrderSubmitStatus", self->data.OrderSubmitStatus
		, "NotifySequence", self->data.NotifySequence
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "ExecOrderSysID", self->data.ExecOrderSysID 
		, "InsertDate", self->data.InsertDate 
		, "InsertTime", self->data.InsertTime 
		, "CancelTime", self->data.CancelTime 
		, "ExecResult", self->data.ExecResult
		, "ClearingPartID", self->data.ClearingPartID 
		, "SequenceNo", self->data.SequenceNo
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "UserProductInfo", self->data.UserProductInfo 
		, "StatusMsg", self->data.StatusMsg 
		, "ActiveUserID", self->data.ActiveUserID 
		, "BrokerExecOrderSeq", self->data.BrokerExecOrderSeq
		, "BranchID", self->data.BranchID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 
		, "reserve3", self->data.reserve3 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExecOrderField_get_BrokerID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcExecOrderField_get_InvestorID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcExecOrderField_get_reserve1(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExecOrderField_get_ExecOrderRef(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderRef);
}

static PyObject *PyCThostFtdcExecOrderField_get_UserID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcExecOrderField_get_Volume(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcExecOrderField_get_RequestID(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcExecOrderField_get_BusinessUnit(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExecOrderField_get_OffsetFlag(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

static PyObject *PyCThostFtdcExecOrderField_get_HedgeFlag(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcExecOrderField_get_ActionType(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

static PyObject *PyCThostFtdcExecOrderField_get_PosiDirection(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

static PyObject *PyCThostFtdcExecOrderField_get_ReservePositionFlag(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ReservePositionFlag), 1);
}

static PyObject *PyCThostFtdcExecOrderField_get_CloseFlag(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CloseFlag), 1);
}

static PyObject *PyCThostFtdcExecOrderField_get_ExecOrderLocalID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderLocalID);
}

static PyObject *PyCThostFtdcExecOrderField_get_ExchangeID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExecOrderField_get_ParticipantID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExecOrderField_get_ClientID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExecOrderField_get_reserve2(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcExecOrderField_get_TraderID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExecOrderField_get_InstallID(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExecOrderField_get_OrderSubmitStatus(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

static PyObject *PyCThostFtdcExecOrderField_get_NotifySequence(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.NotifySequence);
#else 
	return PyInt_FromLong(self->data.NotifySequence);
#endif 
}

static PyObject *PyCThostFtdcExecOrderField_get_TradingDay(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcExecOrderField_get_SettlementID(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcExecOrderField_get_ExecOrderSysID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderSysID);
}

static PyObject *PyCThostFtdcExecOrderField_get_InsertDate(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcExecOrderField_get_InsertTime(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcExecOrderField_get_CancelTime(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CancelTime);
}

static PyObject *PyCThostFtdcExecOrderField_get_ExecResult(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ExecResult), 1);
}

static PyObject *PyCThostFtdcExecOrderField_get_ClearingPartID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClearingPartID);
}

static PyObject *PyCThostFtdcExecOrderField_get_SequenceNo(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcExecOrderField_get_FrontID(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcExecOrderField_get_SessionID(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcExecOrderField_get_UserProductInfo(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcExecOrderField_get_StatusMsg(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcExecOrderField_get_ActiveUserID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveUserID);
}

static PyObject *PyCThostFtdcExecOrderField_get_BrokerExecOrderSeq(PyCThostFtdcExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BrokerExecOrderSeq);
#else 
	return PyInt_FromLong(self->data.BrokerExecOrderSeq);
#endif 
}

static PyObject *PyCThostFtdcExecOrderField_get_BranchID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcExecOrderField_get_InvestUnitID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcExecOrderField_get_AccountID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcExecOrderField_get_CurrencyID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcExecOrderField_get_reserve3(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve3);
}

static PyObject *PyCThostFtdcExecOrderField_get_MacAddress(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExecOrderField_get_InstrumentID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcExecOrderField_get_ExchangeInstID(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcExecOrderField_get_IPAddress(PyCThostFtdcExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcExecOrderField_set_BrokerID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_InvestorID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_reserve1(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_ExecOrderRef(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_UserID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_Volume(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Volume Expected int"); 
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
    self->data.Volume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExecOrderField_set_RequestID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_BusinessUnit(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_OffsetFlag(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OffsetFlag)) {
		PyErr_SetString(PyExc_ValueError, "OffsetFlag must be less than 1 bytes");
		return -1;
	}
	self->data.OffsetFlag = *buf;
	return 0;
}

static int PyCThostFtdcExecOrderField_set_HedgeFlag(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "HedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.HedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcExecOrderField_set_ActionType(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_PosiDirection(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PosiDirection)) {
		PyErr_SetString(PyExc_ValueError, "PosiDirection must be less than 1 bytes");
		return -1;
	}
	self->data.PosiDirection = *buf;
	return 0;
}

static int PyCThostFtdcExecOrderField_set_ReservePositionFlag(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ReservePositionFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ReservePositionFlag)) {
		PyErr_SetString(PyExc_ValueError, "ReservePositionFlag must be less than 1 bytes");
		return -1;
	}
	self->data.ReservePositionFlag = *buf;
	return 0;
}

static int PyCThostFtdcExecOrderField_set_CloseFlag(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CloseFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CloseFlag)) {
		PyErr_SetString(PyExc_ValueError, "CloseFlag must be less than 1 bytes");
		return -1;
	}
	self->data.CloseFlag = *buf;
	return 0;
}

static int PyCThostFtdcExecOrderField_set_ExecOrderLocalID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_ExchangeID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_ParticipantID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_ClientID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_reserve2(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcExecOrderField_set_TraderID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_InstallID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_OrderSubmitStatus(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderSubmitStatus)) {
		PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be less than 1 bytes");
		return -1;
	}
	self->data.OrderSubmitStatus = *buf;
	return 0;
}

static int PyCThostFtdcExecOrderField_set_NotifySequence(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected int"); 
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
    self->data.NotifySequence = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExecOrderField_set_TradingDay(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_SettlementID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_ExecOrderSysID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_InsertDate(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
		PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.InsertDate, buf, sizeof(self->data.InsertDate));
	return 0;
}

static int PyCThostFtdcExecOrderField_set_InsertTime(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
		PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.InsertTime, buf, sizeof(self->data.InsertTime));
	return 0;
}

static int PyCThostFtdcExecOrderField_set_CancelTime(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
		PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.CancelTime, buf, sizeof(self->data.CancelTime));
	return 0;
}

static int PyCThostFtdcExecOrderField_set_ExecResult(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecResult Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecResult)) {
		PyErr_SetString(PyExc_ValueError, "ExecResult must be less than 1 bytes");
		return -1;
	}
	self->data.ExecResult = *buf;
	return 0;
}

static int PyCThostFtdcExecOrderField_set_ClearingPartID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
		PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ClearingPartID, buf, sizeof(self->data.ClearingPartID));
	return 0;
}

static int PyCThostFtdcExecOrderField_set_SequenceNo(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int"); 
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
    self->data.SequenceNo = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExecOrderField_set_FrontID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_SessionID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_UserProductInfo(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
		PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.UserProductInfo, buf, sizeof(self->data.UserProductInfo));
	return 0;
}

static int PyCThostFtdcExecOrderField_set_StatusMsg(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_ActiveUserID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
		PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.ActiveUserID, buf, sizeof(self->data.ActiveUserID));
	return 0;
}

static int PyCThostFtdcExecOrderField_set_BrokerExecOrderSeq(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerExecOrderSeq Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BrokerExecOrderSeq Expected int"); 
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
    self->data.BrokerExecOrderSeq = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExecOrderField_set_BranchID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_InvestUnitID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_AccountID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
		PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
	return 0;
}

static int PyCThostFtdcExecOrderField_set_CurrencyID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
	return 0;
}

static int PyCThostFtdcExecOrderField_set_reserve3(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve3)) {
		PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.reserve3, buf, sizeof(self->data.reserve3));
	return 0;
}

static int PyCThostFtdcExecOrderField_set_MacAddress(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_InstrumentID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExecOrderField_set_ExchangeInstID(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
	return 0;
}

static int PyCThostFtdcExecOrderField_set_IPAddress(PyCThostFtdcExecOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExecOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcExecOrderField_get_BrokerID, (setter)PyCThostFtdcExecOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcExecOrderField_get_InvestorID, (setter)PyCThostFtdcExecOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExecOrderField_get_reserve1, (setter)PyCThostFtdcExecOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExecOrderRef", (getter)PyCThostFtdcExecOrderField_get_ExecOrderRef, (setter)PyCThostFtdcExecOrderField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcExecOrderField_get_UserID, (setter)PyCThostFtdcExecOrderField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcExecOrderField_get_Volume, (setter)PyCThostFtdcExecOrderField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcExecOrderField_get_RequestID, (setter)PyCThostFtdcExecOrderField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExecOrderField_get_BusinessUnit, (setter)PyCThostFtdcExecOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OffsetFlag", (getter)PyCThostFtdcExecOrderField_get_OffsetFlag, (setter)PyCThostFtdcExecOrderField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcExecOrderField_get_HedgeFlag, (setter)PyCThostFtdcExecOrderField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"ActionType", (getter)PyCThostFtdcExecOrderField_get_ActionType, (setter)PyCThostFtdcExecOrderField_set_ActionType, (char *)"ActionType", NULL},
	 {(char *)"PosiDirection", (getter)PyCThostFtdcExecOrderField_get_PosiDirection, (setter)PyCThostFtdcExecOrderField_set_PosiDirection, (char *)"PosiDirection", NULL},
	 {(char *)"ReservePositionFlag", (getter)PyCThostFtdcExecOrderField_get_ReservePositionFlag, (setter)PyCThostFtdcExecOrderField_set_ReservePositionFlag, (char *)"ReservePositionFlag", NULL},
	 {(char *)"CloseFlag", (getter)PyCThostFtdcExecOrderField_get_CloseFlag, (setter)PyCThostFtdcExecOrderField_set_CloseFlag, (char *)"CloseFlag", NULL},
	 {(char *)"ExecOrderLocalID", (getter)PyCThostFtdcExecOrderField_get_ExecOrderLocalID, (setter)PyCThostFtdcExecOrderField_set_ExecOrderLocalID, (char *)"ExecOrderLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExecOrderField_get_ExchangeID, (setter)PyCThostFtdcExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExecOrderField_get_ParticipantID, (setter)PyCThostFtdcExecOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExecOrderField_get_ClientID, (setter)PyCThostFtdcExecOrderField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcExecOrderField_get_reserve2, (setter)PyCThostFtdcExecOrderField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExecOrderField_get_TraderID, (setter)PyCThostFtdcExecOrderField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExecOrderField_get_InstallID, (setter)PyCThostFtdcExecOrderField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcExecOrderField_get_OrderSubmitStatus, (setter)PyCThostFtdcExecOrderField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
	 {(char *)"NotifySequence", (getter)PyCThostFtdcExecOrderField_get_NotifySequence, (setter)PyCThostFtdcExecOrderField_set_NotifySequence, (char *)"NotifySequence", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcExecOrderField_get_TradingDay, (setter)PyCThostFtdcExecOrderField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcExecOrderField_get_SettlementID, (setter)PyCThostFtdcExecOrderField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"ExecOrderSysID", (getter)PyCThostFtdcExecOrderField_get_ExecOrderSysID, (setter)PyCThostFtdcExecOrderField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcExecOrderField_get_InsertDate, (setter)PyCThostFtdcExecOrderField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcExecOrderField_get_InsertTime, (setter)PyCThostFtdcExecOrderField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"CancelTime", (getter)PyCThostFtdcExecOrderField_get_CancelTime, (setter)PyCThostFtdcExecOrderField_set_CancelTime, (char *)"CancelTime", NULL},
	 {(char *)"ExecResult", (getter)PyCThostFtdcExecOrderField_get_ExecResult, (setter)PyCThostFtdcExecOrderField_set_ExecResult, (char *)"ExecResult", NULL},
	 {(char *)"ClearingPartID", (getter)PyCThostFtdcExecOrderField_get_ClearingPartID, (setter)PyCThostFtdcExecOrderField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcExecOrderField_get_SequenceNo, (setter)PyCThostFtdcExecOrderField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcExecOrderField_get_FrontID, (setter)PyCThostFtdcExecOrderField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcExecOrderField_get_SessionID, (setter)PyCThostFtdcExecOrderField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcExecOrderField_get_UserProductInfo, (setter)PyCThostFtdcExecOrderField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcExecOrderField_get_StatusMsg, (setter)PyCThostFtdcExecOrderField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"ActiveUserID", (getter)PyCThostFtdcExecOrderField_get_ActiveUserID, (setter)PyCThostFtdcExecOrderField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
	 {(char *)"BrokerExecOrderSeq", (getter)PyCThostFtdcExecOrderField_get_BrokerExecOrderSeq, (setter)PyCThostFtdcExecOrderField_set_BrokerExecOrderSeq, (char *)"BrokerExecOrderSeq", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcExecOrderField_get_BranchID, (setter)PyCThostFtdcExecOrderField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcExecOrderField_get_InvestUnitID, (setter)PyCThostFtdcExecOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcExecOrderField_get_AccountID, (setter)PyCThostFtdcExecOrderField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcExecOrderField_get_CurrencyID, (setter)PyCThostFtdcExecOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"reserve3", (getter)PyCThostFtdcExecOrderField_get_reserve3, (setter)PyCThostFtdcExecOrderField_set_reserve3, (char *)"reserve3", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExecOrderField_get_MacAddress, (setter)PyCThostFtdcExecOrderField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcExecOrderField_get_InstrumentID, (setter)PyCThostFtdcExecOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcExecOrderField_get_ExchangeInstID, (setter)PyCThostFtdcExecOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExecOrderField_get_IPAddress, (setter)PyCThostFtdcExecOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExecOrderField", (PyObject *)&PyCThostFtdcExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExecOrderField to module");
        Py_DECREF(&PyCThostFtdcExecOrderFieldType);
		return -1;
    }

    return 0;
}
