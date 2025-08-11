
#include "PyCThostFtdcQuoteField.h"



static PyObject *PyCThostFtdcQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQuoteField *self = (PyCThostFtdcQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQuoteField_init(PyCThostFtdcQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "QuoteRef", "UserID", "AskPrice", "BidPrice", "AskVolume", "BidVolume", "RequestID", "BusinessUnit", "AskOffsetFlag", "BidOffsetFlag", "AskHedgeFlag", "BidHedgeFlag", "QuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "NotifySequence", "OrderSubmitStatus", "TradingDay", "SettlementID", "QuoteSysID", "InsertDate", "InsertTime", "CancelTime", "QuoteStatus", "ClearingPartID", "SequenceNo", "AskOrderSysID", "BidOrderSysID", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "ActiveUserID", "BrokerQuoteSeq", "AskOrderRef", "BidOrderRef", "ForQuoteSysID", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress", "ReplaceSysID", "TimeCondition", "OrderMemo", "SessionReqSeq",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQuoteField_BrokerID = NULL;
	Py_ssize_t pQuoteField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQuoteField_InvestorID = NULL;
	Py_ssize_t pQuoteField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQuoteField_reserve1 = NULL;
	Py_ssize_t pQuoteField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pQuoteField_QuoteRef = NULL;
	Py_ssize_t pQuoteField_QuoteRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pQuoteField_UserID = NULL;
	Py_ssize_t pQuoteField_UserID_len = 0;

	//TThostFtdcPriceType double
	double pQuoteField_AskPrice = 0.0;

	//TThostFtdcPriceType double
	double pQuoteField_BidPrice = 0.0;

	//TThostFtdcVolumeType int
	int pQuoteField_AskVolume = 0;

	//TThostFtdcVolumeType int
	int pQuoteField_BidVolume = 0;

	//TThostFtdcRequestIDType int
	int pQuoteField_RequestID = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pQuoteField_BusinessUnit = NULL;
	Py_ssize_t pQuoteField_BusinessUnit_len = 0;

	//TThostFtdcOffsetFlagType char
	char pQuoteField_AskOffsetFlag = 0;

	//TThostFtdcOffsetFlagType char
	char pQuoteField_BidOffsetFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pQuoteField_AskHedgeFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pQuoteField_BidHedgeFlag = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pQuoteField_QuoteLocalID = NULL;
	Py_ssize_t pQuoteField_QuoteLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQuoteField_ExchangeID = NULL;
	Py_ssize_t pQuoteField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pQuoteField_ParticipantID = NULL;
	Py_ssize_t pQuoteField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pQuoteField_ClientID = NULL;
	Py_ssize_t pQuoteField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pQuoteField_reserve2 = NULL;
	Py_ssize_t pQuoteField_reserve2_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQuoteField_TraderID = NULL;
	Py_ssize_t pQuoteField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pQuoteField_InstallID = 0;

	//TThostFtdcSequenceNoType int
	int pQuoteField_NotifySequence = 0;

	//TThostFtdcOrderSubmitStatusType char
	char pQuoteField_OrderSubmitStatus = 0;

	//TThostFtdcDateType char[9]
	const char *pQuoteField_TradingDay = NULL;
	Py_ssize_t pQuoteField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pQuoteField_SettlementID = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pQuoteField_QuoteSysID = NULL;
	Py_ssize_t pQuoteField_QuoteSysID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pQuoteField_InsertDate = NULL;
	Py_ssize_t pQuoteField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQuoteField_InsertTime = NULL;
	Py_ssize_t pQuoteField_InsertTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pQuoteField_CancelTime = NULL;
	Py_ssize_t pQuoteField_CancelTime_len = 0;

	//TThostFtdcOrderStatusType char
	char pQuoteField_QuoteStatus = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pQuoteField_ClearingPartID = NULL;
	Py_ssize_t pQuoteField_ClearingPartID_len = 0;

	//TThostFtdcSequenceNoType int
	int pQuoteField_SequenceNo = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pQuoteField_AskOrderSysID = NULL;
	Py_ssize_t pQuoteField_AskOrderSysID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pQuoteField_BidOrderSysID = NULL;
	Py_ssize_t pQuoteField_BidOrderSysID_len = 0;

	//TThostFtdcFrontIDType int
	int pQuoteField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pQuoteField_SessionID = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pQuoteField_UserProductInfo = NULL;
	Py_ssize_t pQuoteField_UserProductInfo_len = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pQuoteField_StatusMsg = NULL;
	Py_ssize_t pQuoteField_StatusMsg_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pQuoteField_ActiveUserID = NULL;
	Py_ssize_t pQuoteField_ActiveUserID_len = 0;

	//TThostFtdcSequenceNoType int
	int pQuoteField_BrokerQuoteSeq = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pQuoteField_AskOrderRef = NULL;
	Py_ssize_t pQuoteField_AskOrderRef_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pQuoteField_BidOrderRef = NULL;
	Py_ssize_t pQuoteField_BidOrderRef_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pQuoteField_ForQuoteSysID = NULL;
	Py_ssize_t pQuoteField_ForQuoteSysID_len = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pQuoteField_BranchID = NULL;
	Py_ssize_t pQuoteField_BranchID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQuoteField_InvestUnitID = NULL;
	Py_ssize_t pQuoteField_InvestUnitID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pQuoteField_AccountID = NULL;
	Py_ssize_t pQuoteField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pQuoteField_CurrencyID = NULL;
	Py_ssize_t pQuoteField_CurrencyID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pQuoteField_reserve3 = NULL;
	Py_ssize_t pQuoteField_reserve3_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pQuoteField_MacAddress = NULL;
	Py_ssize_t pQuoteField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQuoteField_InstrumentID = NULL;
	Py_ssize_t pQuoteField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pQuoteField_ExchangeInstID = NULL;
	Py_ssize_t pQuoteField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pQuoteField_IPAddress = NULL;
	Py_ssize_t pQuoteField_IPAddress_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pQuoteField_ReplaceSysID = NULL;
	Py_ssize_t pQuoteField_ReplaceSysID_len = 0;

	//TThostFtdcTimeConditionType char
	char pQuoteField_TimeCondition = 0;

	//TThostFtdcOrderMemoType char[13]
	const char *pQuoteField_OrderMemo = NULL;
	Py_ssize_t pQuoteField_OrderMemo_len = 0;

	//TThostFtdcSequenceNo12Type int
	int pQuoteField_SessionReqSeq = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ddiiiy#ccccy#y#y#y#y#y#iicy#iy#y#y#y#cy#iy#y#iiy#y#y#iy#y#y#y#y#y#y#y#y#y#y#y#y#cy#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ddiiis#ccccs#s#s#s#s#s#iics#is#s#s#s#cs#is#s#iis#s#s#is#s#s#s#s#s#s#s#s#s#s#s#s#cs#i", (char **)kwlist
#endif

		, &pQuoteField_BrokerID, &pQuoteField_BrokerID_len
		, &pQuoteField_InvestorID, &pQuoteField_InvestorID_len
		, &pQuoteField_reserve1, &pQuoteField_reserve1_len
		, &pQuoteField_QuoteRef, &pQuoteField_QuoteRef_len
		, &pQuoteField_UserID, &pQuoteField_UserID_len
		, &pQuoteField_AskPrice
		, &pQuoteField_BidPrice
		, &pQuoteField_AskVolume
		, &pQuoteField_BidVolume
		, &pQuoteField_RequestID
		, &pQuoteField_BusinessUnit, &pQuoteField_BusinessUnit_len
		, &pQuoteField_AskOffsetFlag
		, &pQuoteField_BidOffsetFlag
		, &pQuoteField_AskHedgeFlag
		, &pQuoteField_BidHedgeFlag
		, &pQuoteField_QuoteLocalID, &pQuoteField_QuoteLocalID_len
		, &pQuoteField_ExchangeID, &pQuoteField_ExchangeID_len
		, &pQuoteField_ParticipantID, &pQuoteField_ParticipantID_len
		, &pQuoteField_ClientID, &pQuoteField_ClientID_len
		, &pQuoteField_reserve2, &pQuoteField_reserve2_len
		, &pQuoteField_TraderID, &pQuoteField_TraderID_len
		, &pQuoteField_InstallID
		, &pQuoteField_NotifySequence
		, &pQuoteField_OrderSubmitStatus
		, &pQuoteField_TradingDay, &pQuoteField_TradingDay_len
		, &pQuoteField_SettlementID
		, &pQuoteField_QuoteSysID, &pQuoteField_QuoteSysID_len
		, &pQuoteField_InsertDate, &pQuoteField_InsertDate_len
		, &pQuoteField_InsertTime, &pQuoteField_InsertTime_len
		, &pQuoteField_CancelTime, &pQuoteField_CancelTime_len
		, &pQuoteField_QuoteStatus
		, &pQuoteField_ClearingPartID, &pQuoteField_ClearingPartID_len
		, &pQuoteField_SequenceNo
		, &pQuoteField_AskOrderSysID, &pQuoteField_AskOrderSysID_len
		, &pQuoteField_BidOrderSysID, &pQuoteField_BidOrderSysID_len
		, &pQuoteField_FrontID
		, &pQuoteField_SessionID
		, &pQuoteField_UserProductInfo, &pQuoteField_UserProductInfo_len
		, &pQuoteField_StatusMsg, &pQuoteField_StatusMsg_len
		, &pQuoteField_ActiveUserID, &pQuoteField_ActiveUserID_len
		, &pQuoteField_BrokerQuoteSeq
		, &pQuoteField_AskOrderRef, &pQuoteField_AskOrderRef_len
		, &pQuoteField_BidOrderRef, &pQuoteField_BidOrderRef_len
		, &pQuoteField_ForQuoteSysID, &pQuoteField_ForQuoteSysID_len
		, &pQuoteField_BranchID, &pQuoteField_BranchID_len
		, &pQuoteField_InvestUnitID, &pQuoteField_InvestUnitID_len
		, &pQuoteField_AccountID, &pQuoteField_AccountID_len
		, &pQuoteField_CurrencyID, &pQuoteField_CurrencyID_len
		, &pQuoteField_reserve3, &pQuoteField_reserve3_len
		, &pQuoteField_MacAddress, &pQuoteField_MacAddress_len
		, &pQuoteField_InstrumentID, &pQuoteField_InstrumentID_len
		, &pQuoteField_ExchangeInstID, &pQuoteField_ExchangeInstID_len
		, &pQuoteField_IPAddress, &pQuoteField_IPAddress_len
		, &pQuoteField_ReplaceSysID, &pQuoteField_ReplaceSysID_len
		, &pQuoteField_TimeCondition
		, &pQuoteField_OrderMemo, &pQuoteField_OrderMemo_len
		, &pQuoteField_SessionReqSeq


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQuoteField_BrokerID != NULL) {
		if(pQuoteField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQuoteField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQuoteField_BrokerID, sizeof(self->data.BrokerID) );
		pQuoteField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQuoteField_InvestorID != NULL) {
		if(pQuoteField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQuoteField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQuoteField_InvestorID, sizeof(self->data.InvestorID) );
		pQuoteField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQuoteField_reserve1 != NULL) {
		if(pQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQuoteField_reserve1, sizeof(self->data.reserve1) );
		pQuoteField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pQuoteField_QuoteRef != NULL) {
		if(pQuoteField_QuoteRef_len > (Py_ssize_t)sizeof(self->data.QuoteRef)) {
			PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is %zd)", pQuoteField_QuoteRef_len, (Py_ssize_t)sizeof(self->data.QuoteRef));
			return -1;
		}
		strncpy(self->data.QuoteRef, pQuoteField_QuoteRef, sizeof(self->data.QuoteRef) );
		pQuoteField_QuoteRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pQuoteField_UserID != NULL) {
		if(pQuoteField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pQuoteField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pQuoteField_UserID, sizeof(self->data.UserID) );
		pQuoteField_UserID = NULL;
	}

	//TThostFtdcPriceType double
	self->data.AskPrice = pQuoteField_AskPrice;
	//TThostFtdcPriceType double
	self->data.BidPrice = pQuoteField_BidPrice;
	//TThostFtdcVolumeType int
	self->data.AskVolume = pQuoteField_AskVolume;

	//TThostFtdcVolumeType int
	self->data.BidVolume = pQuoteField_BidVolume;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pQuoteField_RequestID;

	//TThostFtdcBusinessUnitType char[21]
	if(pQuoteField_BusinessUnit != NULL) {
		if(pQuoteField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pQuoteField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pQuoteField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pQuoteField_BusinessUnit = NULL;
	}

	//TThostFtdcOffsetFlagType char
	self->data.AskOffsetFlag = pQuoteField_AskOffsetFlag;

	//TThostFtdcOffsetFlagType char
	self->data.BidOffsetFlag = pQuoteField_BidOffsetFlag;

	//TThostFtdcHedgeFlagType char
	self->data.AskHedgeFlag = pQuoteField_AskHedgeFlag;

	//TThostFtdcHedgeFlagType char
	self->data.BidHedgeFlag = pQuoteField_BidHedgeFlag;

	//TThostFtdcOrderLocalIDType char[13]
	if(pQuoteField_QuoteLocalID != NULL) {
		if(pQuoteField_QuoteLocalID_len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
			PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is %zd)", pQuoteField_QuoteLocalID_len, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
			return -1;
		}
		strncpy(self->data.QuoteLocalID, pQuoteField_QuoteLocalID, sizeof(self->data.QuoteLocalID) );
		pQuoteField_QuoteLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQuoteField_ExchangeID != NULL) {
		if(pQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQuoteField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pQuoteField_ParticipantID != NULL) {
		if(pQuoteField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQuoteField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQuoteField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQuoteField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pQuoteField_ClientID != NULL) {
		if(pQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pQuoteField_ClientID, sizeof(self->data.ClientID) );
		pQuoteField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pQuoteField_reserve2 != NULL) {
		if(pQuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pQuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pQuoteField_reserve2, sizeof(self->data.reserve2) );
		pQuoteField_reserve2 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQuoteField_TraderID != NULL) {
		if(pQuoteField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQuoteField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQuoteField_TraderID, sizeof(self->data.TraderID) );
		pQuoteField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pQuoteField_InstallID;

	//TThostFtdcSequenceNoType int
	self->data.NotifySequence = pQuoteField_NotifySequence;

	//TThostFtdcOrderSubmitStatusType char
	self->data.OrderSubmitStatus = pQuoteField_OrderSubmitStatus;

	//TThostFtdcDateType char[9]
	if(pQuoteField_TradingDay != NULL) {
		if(pQuoteField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pQuoteField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pQuoteField_TradingDay, sizeof(self->data.TradingDay) );
		pQuoteField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pQuoteField_SettlementID;

	//TThostFtdcOrderSysIDType char[21]
	if(pQuoteField_QuoteSysID != NULL) {
		if(pQuoteField_QuoteSysID_len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
			PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is %zd)", pQuoteField_QuoteSysID_len, (Py_ssize_t)sizeof(self->data.QuoteSysID));
			return -1;
		}
		strncpy(self->data.QuoteSysID, pQuoteField_QuoteSysID, sizeof(self->data.QuoteSysID) );
		pQuoteField_QuoteSysID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pQuoteField_InsertDate != NULL) {
		if(pQuoteField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pQuoteField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pQuoteField_InsertDate, sizeof(self->data.InsertDate) );
		pQuoteField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQuoteField_InsertTime != NULL) {
		if(pQuoteField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pQuoteField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pQuoteField_InsertTime, sizeof(self->data.InsertTime) );
		pQuoteField_InsertTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pQuoteField_CancelTime != NULL) {
		if(pQuoteField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
			PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", pQuoteField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
			return -1;
		}
		strncpy(self->data.CancelTime, pQuoteField_CancelTime, sizeof(self->data.CancelTime) );
		pQuoteField_CancelTime = NULL;
	}

	//TThostFtdcOrderStatusType char
	self->data.QuoteStatus = pQuoteField_QuoteStatus;

	//TThostFtdcParticipantIDType char[11]
	if(pQuoteField_ClearingPartID != NULL) {
		if(pQuoteField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
			PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", pQuoteField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
			return -1;
		}
		strncpy(self->data.ClearingPartID, pQuoteField_ClearingPartID, sizeof(self->data.ClearingPartID) );
		pQuoteField_ClearingPartID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pQuoteField_SequenceNo;

	//TThostFtdcOrderSysIDType char[21]
	if(pQuoteField_AskOrderSysID != NULL) {
		if(pQuoteField_AskOrderSysID_len > (Py_ssize_t)sizeof(self->data.AskOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "AskOrderSysID too long: length=%zd (max allowed is %zd)", pQuoteField_AskOrderSysID_len, (Py_ssize_t)sizeof(self->data.AskOrderSysID));
			return -1;
		}
		strncpy(self->data.AskOrderSysID, pQuoteField_AskOrderSysID, sizeof(self->data.AskOrderSysID) );
		pQuoteField_AskOrderSysID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pQuoteField_BidOrderSysID != NULL) {
		if(pQuoteField_BidOrderSysID_len > (Py_ssize_t)sizeof(self->data.BidOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "BidOrderSysID too long: length=%zd (max allowed is %zd)", pQuoteField_BidOrderSysID_len, (Py_ssize_t)sizeof(self->data.BidOrderSysID));
			return -1;
		}
		strncpy(self->data.BidOrderSysID, pQuoteField_BidOrderSysID, sizeof(self->data.BidOrderSysID) );
		pQuoteField_BidOrderSysID = NULL;
	}

	//TThostFtdcFrontIDType int
	self->data.FrontID = pQuoteField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pQuoteField_SessionID;

	//TThostFtdcProductInfoType char[11]
	if(pQuoteField_UserProductInfo != NULL) {
		if(pQuoteField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pQuoteField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pQuoteField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pQuoteField_UserProductInfo = NULL;
	}

	//TThostFtdcErrorMsgType char[81]
	if(pQuoteField_StatusMsg != NULL) {
		if(pQuoteField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pQuoteField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pQuoteField_StatusMsg, sizeof(self->data.StatusMsg) );
		pQuoteField_StatusMsg = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pQuoteField_ActiveUserID != NULL) {
		if(pQuoteField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
			PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", pQuoteField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
			return -1;
		}
		strncpy(self->data.ActiveUserID, pQuoteField_ActiveUserID, sizeof(self->data.ActiveUserID) );
		pQuoteField_ActiveUserID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.BrokerQuoteSeq = pQuoteField_BrokerQuoteSeq;

	//TThostFtdcOrderRefType char[13]
	if(pQuoteField_AskOrderRef != NULL) {
		if(pQuoteField_AskOrderRef_len > (Py_ssize_t)sizeof(self->data.AskOrderRef)) {
			PyErr_Format(PyExc_ValueError, "AskOrderRef too long: length=%zd (max allowed is %zd)", pQuoteField_AskOrderRef_len, (Py_ssize_t)sizeof(self->data.AskOrderRef));
			return -1;
		}
		strncpy(self->data.AskOrderRef, pQuoteField_AskOrderRef, sizeof(self->data.AskOrderRef) );
		pQuoteField_AskOrderRef = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pQuoteField_BidOrderRef != NULL) {
		if(pQuoteField_BidOrderRef_len > (Py_ssize_t)sizeof(self->data.BidOrderRef)) {
			PyErr_Format(PyExc_ValueError, "BidOrderRef too long: length=%zd (max allowed is %zd)", pQuoteField_BidOrderRef_len, (Py_ssize_t)sizeof(self->data.BidOrderRef));
			return -1;
		}
		strncpy(self->data.BidOrderRef, pQuoteField_BidOrderRef, sizeof(self->data.BidOrderRef) );
		pQuoteField_BidOrderRef = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pQuoteField_ForQuoteSysID != NULL) {
		if(pQuoteField_ForQuoteSysID_len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
			PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is %zd)", pQuoteField_ForQuoteSysID_len, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
			return -1;
		}
		strncpy(self->data.ForQuoteSysID, pQuoteField_ForQuoteSysID, sizeof(self->data.ForQuoteSysID) );
		pQuoteField_ForQuoteSysID = NULL;
	}

	//TThostFtdcBranchIDType char[9]
	if(pQuoteField_BranchID != NULL) {
		if(pQuoteField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pQuoteField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pQuoteField_BranchID, sizeof(self->data.BranchID) );
		pQuoteField_BranchID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQuoteField_InvestUnitID != NULL) {
		if(pQuoteField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQuoteField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQuoteField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQuoteField_InvestUnitID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pQuoteField_AccountID != NULL) {
		if(pQuoteField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pQuoteField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pQuoteField_AccountID, sizeof(self->data.AccountID) );
		pQuoteField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pQuoteField_CurrencyID != NULL) {
		if(pQuoteField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pQuoteField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pQuoteField_CurrencyID, sizeof(self->data.CurrencyID) );
		pQuoteField_CurrencyID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pQuoteField_reserve3 != NULL) {
		if(pQuoteField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
			PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", pQuoteField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
			return -1;
		}
		strncpy(self->data.reserve3, pQuoteField_reserve3, sizeof(self->data.reserve3) );
		pQuoteField_reserve3 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pQuoteField_MacAddress != NULL) {
		if(pQuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pQuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pQuoteField_MacAddress, sizeof(self->data.MacAddress) );
		pQuoteField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQuoteField_InstrumentID != NULL) {
		if(pQuoteField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQuoteField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQuoteField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQuoteField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pQuoteField_ExchangeInstID != NULL) {
		if(pQuoteField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pQuoteField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pQuoteField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pQuoteField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pQuoteField_IPAddress != NULL) {
		if(pQuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pQuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pQuoteField_IPAddress, sizeof(self->data.IPAddress) );
		pQuoteField_IPAddress = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pQuoteField_ReplaceSysID != NULL) {
		if(pQuoteField_ReplaceSysID_len > (Py_ssize_t)sizeof(self->data.ReplaceSysID)) {
			PyErr_Format(PyExc_ValueError, "ReplaceSysID too long: length=%zd (max allowed is %zd)", pQuoteField_ReplaceSysID_len, (Py_ssize_t)sizeof(self->data.ReplaceSysID));
			return -1;
		}
		strncpy(self->data.ReplaceSysID, pQuoteField_ReplaceSysID, sizeof(self->data.ReplaceSysID) );
		pQuoteField_ReplaceSysID = NULL;
	}

	//TThostFtdcTimeConditionType char
	self->data.TimeCondition = pQuoteField_TimeCondition;

	//TThostFtdcOrderMemoType char[13]
	if(pQuoteField_OrderMemo != NULL) {
		if(pQuoteField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
			PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", pQuoteField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
			return -1;
		}
		strncpy(self->data.OrderMemo, pQuoteField_OrderMemo, sizeof(self->data.OrderMemo) );
		pQuoteField_OrderMemo = NULL;
	}

	//TThostFtdcSequenceNo12Type int
	self->data.SessionReqSeq = pQuoteField_SessionReqSeq;



    return 0;
}

static void PyCThostFtdcQuoteField_dealloc(PyCThostFtdcQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQuoteField_repr(PyCThostFtdcQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:d,s:d,s:i,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:i,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:d,s:d,s:i,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:i,s:i,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "QuoteRef", self->data.QuoteRef 
		, "UserID", self->data.UserID 
		, "AskPrice", self->data.AskPrice
		, "BidPrice", self->data.BidPrice
		, "AskVolume", self->data.AskVolume
		, "BidVolume", self->data.BidVolume
		, "RequestID", self->data.RequestID
		, "BusinessUnit", self->data.BusinessUnit 
		, "AskOffsetFlag", self->data.AskOffsetFlag
		, "BidOffsetFlag", self->data.BidOffsetFlag
		, "AskHedgeFlag", self->data.AskHedgeFlag
		, "BidHedgeFlag", self->data.BidHedgeFlag
		, "QuoteLocalID", self->data.QuoteLocalID 
		, "ExchangeID", self->data.ExchangeID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "reserve2", self->data.reserve2 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "NotifySequence", self->data.NotifySequence
		, "OrderSubmitStatus", self->data.OrderSubmitStatus
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "QuoteSysID", self->data.QuoteSysID 
		, "InsertDate", self->data.InsertDate 
		, "InsertTime", self->data.InsertTime 
		, "CancelTime", self->data.CancelTime 
		, "QuoteStatus", self->data.QuoteStatus
		, "ClearingPartID", self->data.ClearingPartID 
		, "SequenceNo", self->data.SequenceNo
		, "AskOrderSysID", self->data.AskOrderSysID 
		, "BidOrderSysID", self->data.BidOrderSysID 
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "UserProductInfo", self->data.UserProductInfo 
		, "StatusMsg", self->data.StatusMsg 
		, "ActiveUserID", self->data.ActiveUserID 
		, "BrokerQuoteSeq", self->data.BrokerQuoteSeq
		, "AskOrderRef", self->data.AskOrderRef 
		, "BidOrderRef", self->data.BidOrderRef 
		, "ForQuoteSysID", self->data.ForQuoteSysID 
		, "BranchID", self->data.BranchID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 
		, "reserve3", self->data.reserve3 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "IPAddress", self->data.IPAddress 
		, "ReplaceSysID", self->data.ReplaceSysID 
		, "TimeCondition", self->data.TimeCondition
		, "OrderMemo", self->data.OrderMemo 
		, "SessionReqSeq", self->data.SessionReqSeq


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQuoteField_get_BrokerID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQuoteField_get_InvestorID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQuoteField_get_reserve1(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQuoteField_get_QuoteRef(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteRef);
}

static PyObject *PyCThostFtdcQuoteField_get_UserID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcQuoteField_get_AskPrice(PyCThostFtdcQuoteField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice);
}

static PyObject *PyCThostFtdcQuoteField_get_BidPrice(PyCThostFtdcQuoteField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice);
}

static PyObject *PyCThostFtdcQuoteField_get_AskVolume(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume);
#else 
	return PyInt_FromLong(self->data.AskVolume);
#endif 
}

static PyObject *PyCThostFtdcQuoteField_get_BidVolume(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume);
#else 
	return PyInt_FromLong(self->data.BidVolume);
#endif 
}

static PyObject *PyCThostFtdcQuoteField_get_RequestID(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcQuoteField_get_BusinessUnit(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcQuoteField_get_AskOffsetFlag(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AskOffsetFlag), 1);
}

static PyObject *PyCThostFtdcQuoteField_get_BidOffsetFlag(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BidOffsetFlag), 1);
}

static PyObject *PyCThostFtdcQuoteField_get_AskHedgeFlag(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AskHedgeFlag), 1);
}

static PyObject *PyCThostFtdcQuoteField_get_BidHedgeFlag(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BidHedgeFlag), 1);
}

static PyObject *PyCThostFtdcQuoteField_get_QuoteLocalID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteLocalID);
}

static PyObject *PyCThostFtdcQuoteField_get_ExchangeID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQuoteField_get_ParticipantID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQuoteField_get_ClientID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcQuoteField_get_reserve2(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcQuoteField_get_TraderID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcQuoteField_get_InstallID(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcQuoteField_get_NotifySequence(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.NotifySequence);
#else 
	return PyInt_FromLong(self->data.NotifySequence);
#endif 
}

static PyObject *PyCThostFtdcQuoteField_get_OrderSubmitStatus(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

static PyObject *PyCThostFtdcQuoteField_get_TradingDay(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcQuoteField_get_SettlementID(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcQuoteField_get_QuoteSysID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteSysID);
}

static PyObject *PyCThostFtdcQuoteField_get_InsertDate(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcQuoteField_get_InsertTime(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcQuoteField_get_CancelTime(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.CancelTime);
}

static PyObject *PyCThostFtdcQuoteField_get_QuoteStatus(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.QuoteStatus), 1);
}

static PyObject *PyCThostFtdcQuoteField_get_ClearingPartID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ClearingPartID);
}

static PyObject *PyCThostFtdcQuoteField_get_SequenceNo(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcQuoteField_get_AskOrderSysID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.AskOrderSysID);
}

static PyObject *PyCThostFtdcQuoteField_get_BidOrderSysID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BidOrderSysID);
}

static PyObject *PyCThostFtdcQuoteField_get_FrontID(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcQuoteField_get_SessionID(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcQuoteField_get_UserProductInfo(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcQuoteField_get_StatusMsg(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcQuoteField_get_ActiveUserID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveUserID);
}

static PyObject *PyCThostFtdcQuoteField_get_BrokerQuoteSeq(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BrokerQuoteSeq);
#else 
	return PyInt_FromLong(self->data.BrokerQuoteSeq);
#endif 
}

static PyObject *PyCThostFtdcQuoteField_get_AskOrderRef(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.AskOrderRef);
}

static PyObject *PyCThostFtdcQuoteField_get_BidOrderRef(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BidOrderRef);
}

static PyObject *PyCThostFtdcQuoteField_get_ForQuoteSysID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ForQuoteSysID);
}

static PyObject *PyCThostFtdcQuoteField_get_BranchID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcQuoteField_get_InvestUnitID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQuoteField_get_AccountID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcQuoteField_get_CurrencyID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcQuoteField_get_reserve3(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve3);
}

static PyObject *PyCThostFtdcQuoteField_get_MacAddress(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcQuoteField_get_InstrumentID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcQuoteField_get_ExchangeInstID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcQuoteField_get_IPAddress(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcQuoteField_get_ReplaceSysID(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ReplaceSysID);
}

static PyObject *PyCThostFtdcQuoteField_get_TimeCondition(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

static PyObject *PyCThostFtdcQuoteField_get_OrderMemo(PyCThostFtdcQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderMemo);
}

static PyObject *PyCThostFtdcQuoteField_get_SessionReqSeq(PyCThostFtdcQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionReqSeq);
#else 
	return PyInt_FromLong(self->data.SessionReqSeq);
#endif 
}

static int PyCThostFtdcQuoteField_set_BrokerID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_InvestorID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_reserve1(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_QuoteRef(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_UserID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_AskPrice(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice = buf;
    return 0;
}

static int PyCThostFtdcQuoteField_set_BidPrice(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice = buf;
    return 0;
}

static int PyCThostFtdcQuoteField_set_AskVolume(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "AskVolume Expected int"); 
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
    self->data.AskVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcQuoteField_set_BidVolume(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BidVolume Expected int"); 
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
    self->data.BidVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcQuoteField_set_RequestID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_BusinessUnit(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_AskOffsetFlag(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AskOffsetFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AskOffsetFlag)) {
		PyErr_SetString(PyExc_ValueError, "AskOffsetFlag must be less than 1 bytes");
		return -1;
	}
	self->data.AskOffsetFlag = *buf;
	return 0;
}

static int PyCThostFtdcQuoteField_set_BidOffsetFlag(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BidOffsetFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BidOffsetFlag)) {
		PyErr_SetString(PyExc_ValueError, "BidOffsetFlag must be less than 1 bytes");
		return -1;
	}
	self->data.BidOffsetFlag = *buf;
	return 0;
}

static int PyCThostFtdcQuoteField_set_AskHedgeFlag(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AskHedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AskHedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "AskHedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.AskHedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcQuoteField_set_BidHedgeFlag(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BidHedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BidHedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "BidHedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.BidHedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcQuoteField_set_QuoteLocalID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_ExchangeID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_ParticipantID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_ClientID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_reserve2(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_TraderID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_InstallID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_NotifySequence(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_OrderSubmitStatus(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_TradingDay(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_SettlementID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_QuoteSysID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_InsertDate(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_InsertTime(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_CancelTime(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_QuoteStatus(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "QuoteStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.QuoteStatus)) {
		PyErr_SetString(PyExc_ValueError, "QuoteStatus must be less than 1 bytes");
		return -1;
	}
	self->data.QuoteStatus = *buf;
	return 0;
}

static int PyCThostFtdcQuoteField_set_ClearingPartID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_SequenceNo(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_AskOrderSysID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AskOrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AskOrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "AskOrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.AskOrderSysID, buf, sizeof(self->data.AskOrderSysID));
	return 0;
}

static int PyCThostFtdcQuoteField_set_BidOrderSysID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BidOrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BidOrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "BidOrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.BidOrderSysID, buf, sizeof(self->data.BidOrderSysID));
	return 0;
}

static int PyCThostFtdcQuoteField_set_FrontID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_SessionID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_UserProductInfo(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_StatusMsg(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_ActiveUserID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_BrokerQuoteSeq(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerQuoteSeq Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BrokerQuoteSeq Expected int"); 
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
    self->data.BrokerQuoteSeq = (int)buf; 
    return 0; 
}

static int PyCThostFtdcQuoteField_set_AskOrderRef(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AskOrderRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AskOrderRef)) {
		PyErr_SetString(PyExc_ValueError, "AskOrderRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AskOrderRef, buf, sizeof(self->data.AskOrderRef));
	return 0;
}

static int PyCThostFtdcQuoteField_set_BidOrderRef(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BidOrderRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BidOrderRef)) {
		PyErr_SetString(PyExc_ValueError, "BidOrderRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.BidOrderRef, buf, sizeof(self->data.BidOrderRef));
	return 0;
}

static int PyCThostFtdcQuoteField_set_ForQuoteSysID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ForQuoteSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
		PyErr_SetString(PyExc_ValueError, "ForQuoteSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ForQuoteSysID, buf, sizeof(self->data.ForQuoteSysID));
	return 0;
}

static int PyCThostFtdcQuoteField_set_BranchID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_InvestUnitID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_AccountID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_CurrencyID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_reserve3(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_MacAddress(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_InstrumentID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_ExchangeInstID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_IPAddress(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_ReplaceSysID(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ReplaceSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ReplaceSysID)) {
		PyErr_SetString(PyExc_ValueError, "ReplaceSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ReplaceSysID, buf, sizeof(self->data.ReplaceSysID));
	return 0;
}

static int PyCThostFtdcQuoteField_set_TimeCondition(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TimeCondition)) {
		PyErr_SetString(PyExc_ValueError, "TimeCondition must be less than 1 bytes");
		return -1;
	}
	self->data.TimeCondition = *buf;
	return 0;
}

static int PyCThostFtdcQuoteField_set_OrderMemo(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQuoteField_set_SessionReqSeq(PyCThostFtdcQuoteField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQuoteField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQuoteField_get_BrokerID, (setter)PyCThostFtdcQuoteField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQuoteField_get_InvestorID, (setter)PyCThostFtdcQuoteField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQuoteField_get_reserve1, (setter)PyCThostFtdcQuoteField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"QuoteRef", (getter)PyCThostFtdcQuoteField_get_QuoteRef, (setter)PyCThostFtdcQuoteField_set_QuoteRef, (char *)"QuoteRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcQuoteField_get_UserID, (setter)PyCThostFtdcQuoteField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"AskPrice", (getter)PyCThostFtdcQuoteField_get_AskPrice, (setter)PyCThostFtdcQuoteField_set_AskPrice, (char *)"AskPrice", NULL},
	 {(char *)"BidPrice", (getter)PyCThostFtdcQuoteField_get_BidPrice, (setter)PyCThostFtdcQuoteField_set_BidPrice, (char *)"BidPrice", NULL},
	 {(char *)"AskVolume", (getter)PyCThostFtdcQuoteField_get_AskVolume, (setter)PyCThostFtdcQuoteField_set_AskVolume, (char *)"AskVolume", NULL},
	 {(char *)"BidVolume", (getter)PyCThostFtdcQuoteField_get_BidVolume, (setter)PyCThostFtdcQuoteField_set_BidVolume, (char *)"BidVolume", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcQuoteField_get_RequestID, (setter)PyCThostFtdcQuoteField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcQuoteField_get_BusinessUnit, (setter)PyCThostFtdcQuoteField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"AskOffsetFlag", (getter)PyCThostFtdcQuoteField_get_AskOffsetFlag, (setter)PyCThostFtdcQuoteField_set_AskOffsetFlag, (char *)"AskOffsetFlag", NULL},
	 {(char *)"BidOffsetFlag", (getter)PyCThostFtdcQuoteField_get_BidOffsetFlag, (setter)PyCThostFtdcQuoteField_set_BidOffsetFlag, (char *)"BidOffsetFlag", NULL},
	 {(char *)"AskHedgeFlag", (getter)PyCThostFtdcQuoteField_get_AskHedgeFlag, (setter)PyCThostFtdcQuoteField_set_AskHedgeFlag, (char *)"AskHedgeFlag", NULL},
	 {(char *)"BidHedgeFlag", (getter)PyCThostFtdcQuoteField_get_BidHedgeFlag, (setter)PyCThostFtdcQuoteField_set_BidHedgeFlag, (char *)"BidHedgeFlag", NULL},
	 {(char *)"QuoteLocalID", (getter)PyCThostFtdcQuoteField_get_QuoteLocalID, (setter)PyCThostFtdcQuoteField_set_QuoteLocalID, (char *)"QuoteLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQuoteField_get_ExchangeID, (setter)PyCThostFtdcQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQuoteField_get_ParticipantID, (setter)PyCThostFtdcQuoteField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcQuoteField_get_ClientID, (setter)PyCThostFtdcQuoteField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcQuoteField_get_reserve2, (setter)PyCThostFtdcQuoteField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQuoteField_get_TraderID, (setter)PyCThostFtdcQuoteField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcQuoteField_get_InstallID, (setter)PyCThostFtdcQuoteField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"NotifySequence", (getter)PyCThostFtdcQuoteField_get_NotifySequence, (setter)PyCThostFtdcQuoteField_set_NotifySequence, (char *)"NotifySequence", NULL},
	 {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcQuoteField_get_OrderSubmitStatus, (setter)PyCThostFtdcQuoteField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcQuoteField_get_TradingDay, (setter)PyCThostFtdcQuoteField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcQuoteField_get_SettlementID, (setter)PyCThostFtdcQuoteField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"QuoteSysID", (getter)PyCThostFtdcQuoteField_get_QuoteSysID, (setter)PyCThostFtdcQuoteField_set_QuoteSysID, (char *)"QuoteSysID", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcQuoteField_get_InsertDate, (setter)PyCThostFtdcQuoteField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcQuoteField_get_InsertTime, (setter)PyCThostFtdcQuoteField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"CancelTime", (getter)PyCThostFtdcQuoteField_get_CancelTime, (setter)PyCThostFtdcQuoteField_set_CancelTime, (char *)"CancelTime", NULL},
	 {(char *)"QuoteStatus", (getter)PyCThostFtdcQuoteField_get_QuoteStatus, (setter)PyCThostFtdcQuoteField_set_QuoteStatus, (char *)"QuoteStatus", NULL},
	 {(char *)"ClearingPartID", (getter)PyCThostFtdcQuoteField_get_ClearingPartID, (setter)PyCThostFtdcQuoteField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcQuoteField_get_SequenceNo, (setter)PyCThostFtdcQuoteField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"AskOrderSysID", (getter)PyCThostFtdcQuoteField_get_AskOrderSysID, (setter)PyCThostFtdcQuoteField_set_AskOrderSysID, (char *)"AskOrderSysID", NULL},
	 {(char *)"BidOrderSysID", (getter)PyCThostFtdcQuoteField_get_BidOrderSysID, (setter)PyCThostFtdcQuoteField_set_BidOrderSysID, (char *)"BidOrderSysID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcQuoteField_get_FrontID, (setter)PyCThostFtdcQuoteField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcQuoteField_get_SessionID, (setter)PyCThostFtdcQuoteField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcQuoteField_get_UserProductInfo, (setter)PyCThostFtdcQuoteField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcQuoteField_get_StatusMsg, (setter)PyCThostFtdcQuoteField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"ActiveUserID", (getter)PyCThostFtdcQuoteField_get_ActiveUserID, (setter)PyCThostFtdcQuoteField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
	 {(char *)"BrokerQuoteSeq", (getter)PyCThostFtdcQuoteField_get_BrokerQuoteSeq, (setter)PyCThostFtdcQuoteField_set_BrokerQuoteSeq, (char *)"BrokerQuoteSeq", NULL},
	 {(char *)"AskOrderRef", (getter)PyCThostFtdcQuoteField_get_AskOrderRef, (setter)PyCThostFtdcQuoteField_set_AskOrderRef, (char *)"AskOrderRef", NULL},
	 {(char *)"BidOrderRef", (getter)PyCThostFtdcQuoteField_get_BidOrderRef, (setter)PyCThostFtdcQuoteField_set_BidOrderRef, (char *)"BidOrderRef", NULL},
	 {(char *)"ForQuoteSysID", (getter)PyCThostFtdcQuoteField_get_ForQuoteSysID, (setter)PyCThostFtdcQuoteField_set_ForQuoteSysID, (char *)"ForQuoteSysID", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcQuoteField_get_BranchID, (setter)PyCThostFtdcQuoteField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQuoteField_get_InvestUnitID, (setter)PyCThostFtdcQuoteField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcQuoteField_get_AccountID, (setter)PyCThostFtdcQuoteField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcQuoteField_get_CurrencyID, (setter)PyCThostFtdcQuoteField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"reserve3", (getter)PyCThostFtdcQuoteField_get_reserve3, (setter)PyCThostFtdcQuoteField_set_reserve3, (char *)"reserve3", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcQuoteField_get_MacAddress, (setter)PyCThostFtdcQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQuoteField_get_InstrumentID, (setter)PyCThostFtdcQuoteField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcQuoteField_get_ExchangeInstID, (setter)PyCThostFtdcQuoteField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcQuoteField_get_IPAddress, (setter)PyCThostFtdcQuoteField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"ReplaceSysID", (getter)PyCThostFtdcQuoteField_get_ReplaceSysID, (setter)PyCThostFtdcQuoteField_set_ReplaceSysID, (char *)"ReplaceSysID", NULL},
	 {(char *)"TimeCondition", (getter)PyCThostFtdcQuoteField_get_TimeCondition, (setter)PyCThostFtdcQuoteField_set_TimeCondition, (char *)"TimeCondition", NULL},
	 {(char *)"OrderMemo", (getter)PyCThostFtdcQuoteField_get_OrderMemo, (setter)PyCThostFtdcQuoteField_set_OrderMemo, (char *)"OrderMemo", NULL},
	 {(char *)"SessionReqSeq", (getter)PyCThostFtdcQuoteField_get_SessionReqSeq, (setter)PyCThostFtdcQuoteField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQuoteField_new,       /* tp_new */
};

int PyCThostFtdcQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQuoteField  */
	if (PyType_Ready(&PyCThostFtdcQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQuoteField", (PyObject *)&PyCThostFtdcQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQuoteField to module");
        Py_DECREF(&PyCThostFtdcQuoteFieldType);
		return -1;
    }

    return 0;
}
