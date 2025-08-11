
#include "PyCThostFtdcExchangeQuoteField.h"



static PyObject *PyCThostFtdcExchangeQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeQuoteField *self = (PyCThostFtdcExchangeQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeQuoteField_init(PyCThostFtdcExchangeQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"AskPrice", "BidPrice", "AskVolume", "BidVolume", "RequestID", "BusinessUnit", "AskOffsetFlag", "BidOffsetFlag", "AskHedgeFlag", "BidHedgeFlag", "QuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "NotifySequence", "OrderSubmitStatus", "TradingDay", "SettlementID", "QuoteSysID", "InsertDate", "InsertTime", "CancelTime", "QuoteStatus", "ClearingPartID", "SequenceNo", "AskOrderSysID", "BidOrderSysID", "ForQuoteSysID", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress", "TimeCondition",  NULL};

	//TThostFtdcPriceType double
	double pExchangeQuoteField_AskPrice = 0.0;

	//TThostFtdcPriceType double
	double pExchangeQuoteField_BidPrice = 0.0;

	//TThostFtdcVolumeType int
	int pExchangeQuoteField_AskVolume = 0;

	//TThostFtdcVolumeType int
	int pExchangeQuoteField_BidVolume = 0;

	//TThostFtdcRequestIDType int
	int pExchangeQuoteField_RequestID = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExchangeQuoteField_BusinessUnit = NULL;
	Py_ssize_t pExchangeQuoteField_BusinessUnit_len = 0;

	//TThostFtdcOffsetFlagType char
	char pExchangeQuoteField_AskOffsetFlag = 0;

	//TThostFtdcOffsetFlagType char
	char pExchangeQuoteField_BidOffsetFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pExchangeQuoteField_AskHedgeFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pExchangeQuoteField_BidHedgeFlag = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeQuoteField_QuoteLocalID = NULL;
	Py_ssize_t pExchangeQuoteField_QuoteLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeQuoteField_ExchangeID = NULL;
	Py_ssize_t pExchangeQuoteField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeQuoteField_ParticipantID = NULL;
	Py_ssize_t pExchangeQuoteField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeQuoteField_ClientID = NULL;
	Py_ssize_t pExchangeQuoteField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pExchangeQuoteField_reserve1 = NULL;
	Py_ssize_t pExchangeQuoteField_reserve1_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeQuoteField_TraderID = NULL;
	Py_ssize_t pExchangeQuoteField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeQuoteField_InstallID = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeQuoteField_NotifySequence = 0;

	//TThostFtdcOrderSubmitStatusType char
	char pExchangeQuoteField_OrderSubmitStatus = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeQuoteField_TradingDay = NULL;
	Py_ssize_t pExchangeQuoteField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pExchangeQuoteField_SettlementID = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pExchangeQuoteField_QuoteSysID = NULL;
	Py_ssize_t pExchangeQuoteField_QuoteSysID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeQuoteField_InsertDate = NULL;
	Py_ssize_t pExchangeQuoteField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeQuoteField_InsertTime = NULL;
	Py_ssize_t pExchangeQuoteField_InsertTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeQuoteField_CancelTime = NULL;
	Py_ssize_t pExchangeQuoteField_CancelTime_len = 0;

	//TThostFtdcOrderStatusType char
	char pExchangeQuoteField_QuoteStatus = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeQuoteField_ClearingPartID = NULL;
	Py_ssize_t pExchangeQuoteField_ClearingPartID_len = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeQuoteField_SequenceNo = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pExchangeQuoteField_AskOrderSysID = NULL;
	Py_ssize_t pExchangeQuoteField_AskOrderSysID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pExchangeQuoteField_BidOrderSysID = NULL;
	Py_ssize_t pExchangeQuoteField_BidOrderSysID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pExchangeQuoteField_ForQuoteSysID = NULL;
	Py_ssize_t pExchangeQuoteField_ForQuoteSysID_len = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pExchangeQuoteField_BranchID = NULL;
	Py_ssize_t pExchangeQuoteField_BranchID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExchangeQuoteField_reserve2 = NULL;
	Py_ssize_t pExchangeQuoteField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExchangeQuoteField_MacAddress = NULL;
	Py_ssize_t pExchangeQuoteField_MacAddress_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pExchangeQuoteField_ExchangeInstID = NULL;
	Py_ssize_t pExchangeQuoteField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExchangeQuoteField_IPAddress = NULL;
	Py_ssize_t pExchangeQuoteField_IPAddress_len = 0;

	//TThostFtdcTimeConditionType char
	char pExchangeQuoteField_TimeCondition = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ddiiiy#ccccy#y#y#y#y#y#iicy#iy#y#y#y#cy#iy#y#y#y#y#y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ddiiis#ccccs#s#s#s#s#s#iics#is#s#s#s#cs#is#s#s#s#s#s#s#s#c", (char **)kwlist
#endif

		, &pExchangeQuoteField_AskPrice
		, &pExchangeQuoteField_BidPrice
		, &pExchangeQuoteField_AskVolume
		, &pExchangeQuoteField_BidVolume
		, &pExchangeQuoteField_RequestID
		, &pExchangeQuoteField_BusinessUnit, &pExchangeQuoteField_BusinessUnit_len
		, &pExchangeQuoteField_AskOffsetFlag
		, &pExchangeQuoteField_BidOffsetFlag
		, &pExchangeQuoteField_AskHedgeFlag
		, &pExchangeQuoteField_BidHedgeFlag
		, &pExchangeQuoteField_QuoteLocalID, &pExchangeQuoteField_QuoteLocalID_len
		, &pExchangeQuoteField_ExchangeID, &pExchangeQuoteField_ExchangeID_len
		, &pExchangeQuoteField_ParticipantID, &pExchangeQuoteField_ParticipantID_len
		, &pExchangeQuoteField_ClientID, &pExchangeQuoteField_ClientID_len
		, &pExchangeQuoteField_reserve1, &pExchangeQuoteField_reserve1_len
		, &pExchangeQuoteField_TraderID, &pExchangeQuoteField_TraderID_len
		, &pExchangeQuoteField_InstallID
		, &pExchangeQuoteField_NotifySequence
		, &pExchangeQuoteField_OrderSubmitStatus
		, &pExchangeQuoteField_TradingDay, &pExchangeQuoteField_TradingDay_len
		, &pExchangeQuoteField_SettlementID
		, &pExchangeQuoteField_QuoteSysID, &pExchangeQuoteField_QuoteSysID_len
		, &pExchangeQuoteField_InsertDate, &pExchangeQuoteField_InsertDate_len
		, &pExchangeQuoteField_InsertTime, &pExchangeQuoteField_InsertTime_len
		, &pExchangeQuoteField_CancelTime, &pExchangeQuoteField_CancelTime_len
		, &pExchangeQuoteField_QuoteStatus
		, &pExchangeQuoteField_ClearingPartID, &pExchangeQuoteField_ClearingPartID_len
		, &pExchangeQuoteField_SequenceNo
		, &pExchangeQuoteField_AskOrderSysID, &pExchangeQuoteField_AskOrderSysID_len
		, &pExchangeQuoteField_BidOrderSysID, &pExchangeQuoteField_BidOrderSysID_len
		, &pExchangeQuoteField_ForQuoteSysID, &pExchangeQuoteField_ForQuoteSysID_len
		, &pExchangeQuoteField_BranchID, &pExchangeQuoteField_BranchID_len
		, &pExchangeQuoteField_reserve2, &pExchangeQuoteField_reserve2_len
		, &pExchangeQuoteField_MacAddress, &pExchangeQuoteField_MacAddress_len
		, &pExchangeQuoteField_ExchangeInstID, &pExchangeQuoteField_ExchangeInstID_len
		, &pExchangeQuoteField_IPAddress, &pExchangeQuoteField_IPAddress_len
		, &pExchangeQuoteField_TimeCondition


    )) {
        return -1;
    }

	//TThostFtdcPriceType double
	self->data.AskPrice = pExchangeQuoteField_AskPrice;
	//TThostFtdcPriceType double
	self->data.BidPrice = pExchangeQuoteField_BidPrice;
	//TThostFtdcVolumeType int
	self->data.AskVolume = pExchangeQuoteField_AskVolume;

	//TThostFtdcVolumeType int
	self->data.BidVolume = pExchangeQuoteField_BidVolume;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pExchangeQuoteField_RequestID;

	//TThostFtdcBusinessUnitType char[21]
	if(pExchangeQuoteField_BusinessUnit != NULL) {
		if(pExchangeQuoteField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExchangeQuoteField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExchangeQuoteField_BusinessUnit = NULL;
	}

	//TThostFtdcOffsetFlagType char
	self->data.AskOffsetFlag = pExchangeQuoteField_AskOffsetFlag;

	//TThostFtdcOffsetFlagType char
	self->data.BidOffsetFlag = pExchangeQuoteField_BidOffsetFlag;

	//TThostFtdcHedgeFlagType char
	self->data.AskHedgeFlag = pExchangeQuoteField_AskHedgeFlag;

	//TThostFtdcHedgeFlagType char
	self->data.BidHedgeFlag = pExchangeQuoteField_BidHedgeFlag;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeQuoteField_QuoteLocalID != NULL) {
		if(pExchangeQuoteField_QuoteLocalID_len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
			PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_QuoteLocalID_len, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
			return -1;
		}
		strncpy(self->data.QuoteLocalID, pExchangeQuoteField_QuoteLocalID, sizeof(self->data.QuoteLocalID) );
		pExchangeQuoteField_QuoteLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeQuoteField_ExchangeID != NULL) {
		if(pExchangeQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeQuoteField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeQuoteField_ParticipantID != NULL) {
		if(pExchangeQuoteField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeQuoteField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeQuoteField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeQuoteField_ClientID != NULL) {
		if(pExchangeQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeQuoteField_ClientID, sizeof(self->data.ClientID) );
		pExchangeQuoteField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pExchangeQuoteField_reserve1 != NULL) {
		if(pExchangeQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeQuoteField_reserve1, sizeof(self->data.reserve1) );
		pExchangeQuoteField_reserve1 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeQuoteField_TraderID != NULL) {
		if(pExchangeQuoteField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeQuoteField_TraderID, sizeof(self->data.TraderID) );
		pExchangeQuoteField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeQuoteField_InstallID;

	//TThostFtdcSequenceNoType int
	self->data.NotifySequence = pExchangeQuoteField_NotifySequence;

	//TThostFtdcOrderSubmitStatusType char
	self->data.OrderSubmitStatus = pExchangeQuoteField_OrderSubmitStatus;

	//TThostFtdcDateType char[9]
	if(pExchangeQuoteField_TradingDay != NULL) {
		if(pExchangeQuoteField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pExchangeQuoteField_TradingDay, sizeof(self->data.TradingDay) );
		pExchangeQuoteField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pExchangeQuoteField_SettlementID;

	//TThostFtdcOrderSysIDType char[21]
	if(pExchangeQuoteField_QuoteSysID != NULL) {
		if(pExchangeQuoteField_QuoteSysID_len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
			PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_QuoteSysID_len, (Py_ssize_t)sizeof(self->data.QuoteSysID));
			return -1;
		}
		strncpy(self->data.QuoteSysID, pExchangeQuoteField_QuoteSysID, sizeof(self->data.QuoteSysID) );
		pExchangeQuoteField_QuoteSysID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pExchangeQuoteField_InsertDate != NULL) {
		if(pExchangeQuoteField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pExchangeQuoteField_InsertDate, sizeof(self->data.InsertDate) );
		pExchangeQuoteField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeQuoteField_InsertTime != NULL) {
		if(pExchangeQuoteField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pExchangeQuoteField_InsertTime, sizeof(self->data.InsertTime) );
		pExchangeQuoteField_InsertTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeQuoteField_CancelTime != NULL) {
		if(pExchangeQuoteField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
			PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
			return -1;
		}
		strncpy(self->data.CancelTime, pExchangeQuoteField_CancelTime, sizeof(self->data.CancelTime) );
		pExchangeQuoteField_CancelTime = NULL;
	}

	//TThostFtdcOrderStatusType char
	self->data.QuoteStatus = pExchangeQuoteField_QuoteStatus;

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeQuoteField_ClearingPartID != NULL) {
		if(pExchangeQuoteField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
			PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
			return -1;
		}
		strncpy(self->data.ClearingPartID, pExchangeQuoteField_ClearingPartID, sizeof(self->data.ClearingPartID) );
		pExchangeQuoteField_ClearingPartID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pExchangeQuoteField_SequenceNo;

	//TThostFtdcOrderSysIDType char[21]
	if(pExchangeQuoteField_AskOrderSysID != NULL) {
		if(pExchangeQuoteField_AskOrderSysID_len > (Py_ssize_t)sizeof(self->data.AskOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "AskOrderSysID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_AskOrderSysID_len, (Py_ssize_t)sizeof(self->data.AskOrderSysID));
			return -1;
		}
		strncpy(self->data.AskOrderSysID, pExchangeQuoteField_AskOrderSysID, sizeof(self->data.AskOrderSysID) );
		pExchangeQuoteField_AskOrderSysID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pExchangeQuoteField_BidOrderSysID != NULL) {
		if(pExchangeQuoteField_BidOrderSysID_len > (Py_ssize_t)sizeof(self->data.BidOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "BidOrderSysID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_BidOrderSysID_len, (Py_ssize_t)sizeof(self->data.BidOrderSysID));
			return -1;
		}
		strncpy(self->data.BidOrderSysID, pExchangeQuoteField_BidOrderSysID, sizeof(self->data.BidOrderSysID) );
		pExchangeQuoteField_BidOrderSysID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pExchangeQuoteField_ForQuoteSysID != NULL) {
		if(pExchangeQuoteField_ForQuoteSysID_len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
			PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_ForQuoteSysID_len, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
			return -1;
		}
		strncpy(self->data.ForQuoteSysID, pExchangeQuoteField_ForQuoteSysID, sizeof(self->data.ForQuoteSysID) );
		pExchangeQuoteField_ForQuoteSysID = NULL;
	}

	//TThostFtdcBranchIDType char[9]
	if(pExchangeQuoteField_BranchID != NULL) {
		if(pExchangeQuoteField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pExchangeQuoteField_BranchID, sizeof(self->data.BranchID) );
		pExchangeQuoteField_BranchID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pExchangeQuoteField_reserve2 != NULL) {
		if(pExchangeQuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pExchangeQuoteField_reserve2, sizeof(self->data.reserve2) );
		pExchangeQuoteField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExchangeQuoteField_MacAddress != NULL) {
		if(pExchangeQuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExchangeQuoteField_MacAddress, sizeof(self->data.MacAddress) );
		pExchangeQuoteField_MacAddress = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pExchangeQuoteField_ExchangeInstID != NULL) {
		if(pExchangeQuoteField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pExchangeQuoteField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pExchangeQuoteField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pExchangeQuoteField_IPAddress != NULL) {
		if(pExchangeQuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExchangeQuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExchangeQuoteField_IPAddress, sizeof(self->data.IPAddress) );
		pExchangeQuoteField_IPAddress = NULL;
	}

	//TThostFtdcTimeConditionType char
	self->data.TimeCondition = pExchangeQuoteField_TimeCondition;



    return 0;
}

static void PyCThostFtdcExchangeQuoteField_dealloc(PyCThostFtdcExchangeQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeQuoteField_repr(PyCThostFtdcExchangeQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:d,s:d,s:i,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:d,s:d,s:i,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c}"
#endif

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
		, "reserve1", self->data.reserve1 
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
		, "ForQuoteSysID", self->data.ForQuoteSysID 
		, "BranchID", self->data.BranchID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "IPAddress", self->data.IPAddress 
		, "TimeCondition", self->data.TimeCondition


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_AskPrice(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_BidPrice(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_AskVolume(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume);
#else 
	return PyInt_FromLong(self->data.AskVolume);
#endif 
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_BidVolume(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume);
#else 
	return PyInt_FromLong(self->data.BidVolume);
#endif 
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_RequestID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_BusinessUnit(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_AskOffsetFlag(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AskOffsetFlag), 1);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_BidOffsetFlag(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BidOffsetFlag), 1);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_AskHedgeFlag(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AskHedgeFlag), 1);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_BidHedgeFlag(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BidHedgeFlag), 1);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_QuoteLocalID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteLocalID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_ExchangeID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_ParticipantID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_ClientID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_reserve1(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_TraderID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_InstallID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_NotifySequence(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.NotifySequence);
#else 
	return PyInt_FromLong(self->data.NotifySequence);
#endif 
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_OrderSubmitStatus(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_TradingDay(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_SettlementID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_QuoteSysID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteSysID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_InsertDate(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_InsertTime(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_CancelTime(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.CancelTime);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_QuoteStatus(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.QuoteStatus), 1);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_ClearingPartID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ClearingPartID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_SequenceNo(PyCThostFtdcExchangeQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_AskOrderSysID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.AskOrderSysID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_BidOrderSysID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BidOrderSysID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_ForQuoteSysID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ForQuoteSysID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_BranchID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_reserve2(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_MacAddress(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_ExchangeInstID(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_IPAddress(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcExchangeQuoteField_get_TimeCondition(PyCThostFtdcExchangeQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

static int PyCThostFtdcExchangeQuoteField_set_AskPrice(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_BidPrice(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_AskVolume(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_BidVolume(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_RequestID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_BusinessUnit(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_AskOffsetFlag(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_BidOffsetFlag(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_AskHedgeFlag(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_BidHedgeFlag(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_QuoteLocalID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_ExchangeID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_ParticipantID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_ClientID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_reserve1(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_TraderID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_InstallID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_NotifySequence(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_OrderSubmitStatus(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_TradingDay(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_SettlementID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_QuoteSysID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_InsertDate(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_InsertTime(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_CancelTime(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_QuoteStatus(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_ClearingPartID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_SequenceNo(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_AskOrderSysID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_BidOrderSysID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_ForQuoteSysID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_BranchID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_reserve2(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_MacAddress(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_ExchangeInstID(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_IPAddress(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteField_set_TimeCondition(PyCThostFtdcExchangeQuoteField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeQuoteField_getset[] = {
	 {(char *)"AskPrice", (getter)PyCThostFtdcExchangeQuoteField_get_AskPrice, (setter)PyCThostFtdcExchangeQuoteField_set_AskPrice, (char *)"AskPrice", NULL},
	 {(char *)"BidPrice", (getter)PyCThostFtdcExchangeQuoteField_get_BidPrice, (setter)PyCThostFtdcExchangeQuoteField_set_BidPrice, (char *)"BidPrice", NULL},
	 {(char *)"AskVolume", (getter)PyCThostFtdcExchangeQuoteField_get_AskVolume, (setter)PyCThostFtdcExchangeQuoteField_set_AskVolume, (char *)"AskVolume", NULL},
	 {(char *)"BidVolume", (getter)PyCThostFtdcExchangeQuoteField_get_BidVolume, (setter)PyCThostFtdcExchangeQuoteField_set_BidVolume, (char *)"BidVolume", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcExchangeQuoteField_get_RequestID, (setter)PyCThostFtdcExchangeQuoteField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeQuoteField_get_BusinessUnit, (setter)PyCThostFtdcExchangeQuoteField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"AskOffsetFlag", (getter)PyCThostFtdcExchangeQuoteField_get_AskOffsetFlag, (setter)PyCThostFtdcExchangeQuoteField_set_AskOffsetFlag, (char *)"AskOffsetFlag", NULL},
	 {(char *)"BidOffsetFlag", (getter)PyCThostFtdcExchangeQuoteField_get_BidOffsetFlag, (setter)PyCThostFtdcExchangeQuoteField_set_BidOffsetFlag, (char *)"BidOffsetFlag", NULL},
	 {(char *)"AskHedgeFlag", (getter)PyCThostFtdcExchangeQuoteField_get_AskHedgeFlag, (setter)PyCThostFtdcExchangeQuoteField_set_AskHedgeFlag, (char *)"AskHedgeFlag", NULL},
	 {(char *)"BidHedgeFlag", (getter)PyCThostFtdcExchangeQuoteField_get_BidHedgeFlag, (setter)PyCThostFtdcExchangeQuoteField_set_BidHedgeFlag, (char *)"BidHedgeFlag", NULL},
	 {(char *)"QuoteLocalID", (getter)PyCThostFtdcExchangeQuoteField_get_QuoteLocalID, (setter)PyCThostFtdcExchangeQuoteField_set_QuoteLocalID, (char *)"QuoteLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeQuoteField_get_ExchangeID, (setter)PyCThostFtdcExchangeQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeQuoteField_get_ParticipantID, (setter)PyCThostFtdcExchangeQuoteField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeQuoteField_get_ClientID, (setter)PyCThostFtdcExchangeQuoteField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeQuoteField_get_reserve1, (setter)PyCThostFtdcExchangeQuoteField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeQuoteField_get_TraderID, (setter)PyCThostFtdcExchangeQuoteField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeQuoteField_get_InstallID, (setter)PyCThostFtdcExchangeQuoteField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"NotifySequence", (getter)PyCThostFtdcExchangeQuoteField_get_NotifySequence, (setter)PyCThostFtdcExchangeQuoteField_set_NotifySequence, (char *)"NotifySequence", NULL},
	 {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcExchangeQuoteField_get_OrderSubmitStatus, (setter)PyCThostFtdcExchangeQuoteField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcExchangeQuoteField_get_TradingDay, (setter)PyCThostFtdcExchangeQuoteField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcExchangeQuoteField_get_SettlementID, (setter)PyCThostFtdcExchangeQuoteField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"QuoteSysID", (getter)PyCThostFtdcExchangeQuoteField_get_QuoteSysID, (setter)PyCThostFtdcExchangeQuoteField_set_QuoteSysID, (char *)"QuoteSysID", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcExchangeQuoteField_get_InsertDate, (setter)PyCThostFtdcExchangeQuoteField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcExchangeQuoteField_get_InsertTime, (setter)PyCThostFtdcExchangeQuoteField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"CancelTime", (getter)PyCThostFtdcExchangeQuoteField_get_CancelTime, (setter)PyCThostFtdcExchangeQuoteField_set_CancelTime, (char *)"CancelTime", NULL},
	 {(char *)"QuoteStatus", (getter)PyCThostFtdcExchangeQuoteField_get_QuoteStatus, (setter)PyCThostFtdcExchangeQuoteField_set_QuoteStatus, (char *)"QuoteStatus", NULL},
	 {(char *)"ClearingPartID", (getter)PyCThostFtdcExchangeQuoteField_get_ClearingPartID, (setter)PyCThostFtdcExchangeQuoteField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeQuoteField_get_SequenceNo, (setter)PyCThostFtdcExchangeQuoteField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"AskOrderSysID", (getter)PyCThostFtdcExchangeQuoteField_get_AskOrderSysID, (setter)PyCThostFtdcExchangeQuoteField_set_AskOrderSysID, (char *)"AskOrderSysID", NULL},
	 {(char *)"BidOrderSysID", (getter)PyCThostFtdcExchangeQuoteField_get_BidOrderSysID, (setter)PyCThostFtdcExchangeQuoteField_set_BidOrderSysID, (char *)"BidOrderSysID", NULL},
	 {(char *)"ForQuoteSysID", (getter)PyCThostFtdcExchangeQuoteField_get_ForQuoteSysID, (setter)PyCThostFtdcExchangeQuoteField_set_ForQuoteSysID, (char *)"ForQuoteSysID", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcExchangeQuoteField_get_BranchID, (setter)PyCThostFtdcExchangeQuoteField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcExchangeQuoteField_get_reserve2, (setter)PyCThostFtdcExchangeQuoteField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExchangeQuoteField_get_MacAddress, (setter)PyCThostFtdcExchangeQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeQuoteField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeQuoteField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExchangeQuoteField_get_IPAddress, (setter)PyCThostFtdcExchangeQuoteField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"TimeCondition", (getter)PyCThostFtdcExchangeQuoteField_get_TimeCondition, (setter)PyCThostFtdcExchangeQuoteField_set_TimeCondition, (char *)"TimeCondition", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeQuoteField_new,       /* tp_new */
};

int PyCThostFtdcExchangeQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeQuoteField  */
	if (PyType_Ready(&PyCThostFtdcExchangeQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeQuoteField", (PyObject *)&PyCThostFtdcExchangeQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeQuoteField to module");
        Py_DECREF(&PyCThostFtdcExchangeQuoteFieldType);
		return -1;
    }

    return 0;
}
