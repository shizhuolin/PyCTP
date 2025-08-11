
#include "PyCThostFtdcOptionSelfCloseField.h"



static PyObject *PyCThostFtdcOptionSelfCloseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionSelfCloseField *self = (PyCThostFtdcOptionSelfCloseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcOptionSelfCloseField_init(PyCThostFtdcOptionSelfCloseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OptionSelfCloseRef", "UserID", "Volume", "RequestID", "BusinessUnit", "HedgeFlag", "OptSelfCloseFlag", "OptionSelfCloseLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OptionSelfCloseSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "ActiveUserID", "BrokerOptionSelfCloseSeq", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pOptionSelfCloseField_BrokerID = NULL;
	Py_ssize_t pOptionSelfCloseField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pOptionSelfCloseField_InvestorID = NULL;
	Py_ssize_t pOptionSelfCloseField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pOptionSelfCloseField_reserve1 = NULL;
	Py_ssize_t pOptionSelfCloseField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pOptionSelfCloseField_OptionSelfCloseRef = NULL;
	Py_ssize_t pOptionSelfCloseField_OptionSelfCloseRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pOptionSelfCloseField_UserID = NULL;
	Py_ssize_t pOptionSelfCloseField_UserID_len = 0;

	//TThostFtdcVolumeType int
	int pOptionSelfCloseField_Volume = 0;

	//TThostFtdcRequestIDType int
	int pOptionSelfCloseField_RequestID = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pOptionSelfCloseField_BusinessUnit = NULL;
	Py_ssize_t pOptionSelfCloseField_BusinessUnit_len = 0;

	//TThostFtdcHedgeFlagType char
	char pOptionSelfCloseField_HedgeFlag = 0;

	//TThostFtdcOptSelfCloseFlagType char
	char pOptionSelfCloseField_OptSelfCloseFlag = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pOptionSelfCloseField_OptionSelfCloseLocalID = NULL;
	Py_ssize_t pOptionSelfCloseField_OptionSelfCloseLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pOptionSelfCloseField_ExchangeID = NULL;
	Py_ssize_t pOptionSelfCloseField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pOptionSelfCloseField_ParticipantID = NULL;
	Py_ssize_t pOptionSelfCloseField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pOptionSelfCloseField_ClientID = NULL;
	Py_ssize_t pOptionSelfCloseField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pOptionSelfCloseField_reserve2 = NULL;
	Py_ssize_t pOptionSelfCloseField_reserve2_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pOptionSelfCloseField_TraderID = NULL;
	Py_ssize_t pOptionSelfCloseField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pOptionSelfCloseField_InstallID = 0;

	//TThostFtdcOrderSubmitStatusType char
	char pOptionSelfCloseField_OrderSubmitStatus = 0;

	//TThostFtdcSequenceNoType int
	int pOptionSelfCloseField_NotifySequence = 0;

	//TThostFtdcDateType char[9]
	const char *pOptionSelfCloseField_TradingDay = NULL;
	Py_ssize_t pOptionSelfCloseField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pOptionSelfCloseField_SettlementID = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pOptionSelfCloseField_OptionSelfCloseSysID = NULL;
	Py_ssize_t pOptionSelfCloseField_OptionSelfCloseSysID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pOptionSelfCloseField_InsertDate = NULL;
	Py_ssize_t pOptionSelfCloseField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pOptionSelfCloseField_InsertTime = NULL;
	Py_ssize_t pOptionSelfCloseField_InsertTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pOptionSelfCloseField_CancelTime = NULL;
	Py_ssize_t pOptionSelfCloseField_CancelTime_len = 0;

	//TThostFtdcExecResultType char
	char pOptionSelfCloseField_ExecResult = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pOptionSelfCloseField_ClearingPartID = NULL;
	Py_ssize_t pOptionSelfCloseField_ClearingPartID_len = 0;

	//TThostFtdcSequenceNoType int
	int pOptionSelfCloseField_SequenceNo = 0;

	//TThostFtdcFrontIDType int
	int pOptionSelfCloseField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pOptionSelfCloseField_SessionID = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pOptionSelfCloseField_UserProductInfo = NULL;
	Py_ssize_t pOptionSelfCloseField_UserProductInfo_len = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pOptionSelfCloseField_StatusMsg = NULL;
	Py_ssize_t pOptionSelfCloseField_StatusMsg_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pOptionSelfCloseField_ActiveUserID = NULL;
	Py_ssize_t pOptionSelfCloseField_ActiveUserID_len = 0;

	//TThostFtdcSequenceNoType int
	int pOptionSelfCloseField_BrokerOptionSelfCloseSeq = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pOptionSelfCloseField_BranchID = NULL;
	Py_ssize_t pOptionSelfCloseField_BranchID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pOptionSelfCloseField_InvestUnitID = NULL;
	Py_ssize_t pOptionSelfCloseField_InvestUnitID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pOptionSelfCloseField_AccountID = NULL;
	Py_ssize_t pOptionSelfCloseField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pOptionSelfCloseField_CurrencyID = NULL;
	Py_ssize_t pOptionSelfCloseField_CurrencyID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pOptionSelfCloseField_reserve3 = NULL;
	Py_ssize_t pOptionSelfCloseField_reserve3_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pOptionSelfCloseField_MacAddress = NULL;
	Py_ssize_t pOptionSelfCloseField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pOptionSelfCloseField_InstrumentID = NULL;
	Py_ssize_t pOptionSelfCloseField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pOptionSelfCloseField_ExchangeInstID = NULL;
	Py_ssize_t pOptionSelfCloseField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pOptionSelfCloseField_IPAddress = NULL;
	Py_ssize_t pOptionSelfCloseField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iiiy#y#y#iy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#ccs#s#s#s#s#s#icis#is#s#s#s#cs#iiis#s#s#is#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pOptionSelfCloseField_BrokerID, &pOptionSelfCloseField_BrokerID_len
		, &pOptionSelfCloseField_InvestorID, &pOptionSelfCloseField_InvestorID_len
		, &pOptionSelfCloseField_reserve1, &pOptionSelfCloseField_reserve1_len
		, &pOptionSelfCloseField_OptionSelfCloseRef, &pOptionSelfCloseField_OptionSelfCloseRef_len
		, &pOptionSelfCloseField_UserID, &pOptionSelfCloseField_UserID_len
		, &pOptionSelfCloseField_Volume
		, &pOptionSelfCloseField_RequestID
		, &pOptionSelfCloseField_BusinessUnit, &pOptionSelfCloseField_BusinessUnit_len
		, &pOptionSelfCloseField_HedgeFlag
		, &pOptionSelfCloseField_OptSelfCloseFlag
		, &pOptionSelfCloseField_OptionSelfCloseLocalID, &pOptionSelfCloseField_OptionSelfCloseLocalID_len
		, &pOptionSelfCloseField_ExchangeID, &pOptionSelfCloseField_ExchangeID_len
		, &pOptionSelfCloseField_ParticipantID, &pOptionSelfCloseField_ParticipantID_len
		, &pOptionSelfCloseField_ClientID, &pOptionSelfCloseField_ClientID_len
		, &pOptionSelfCloseField_reserve2, &pOptionSelfCloseField_reserve2_len
		, &pOptionSelfCloseField_TraderID, &pOptionSelfCloseField_TraderID_len
		, &pOptionSelfCloseField_InstallID
		, &pOptionSelfCloseField_OrderSubmitStatus
		, &pOptionSelfCloseField_NotifySequence
		, &pOptionSelfCloseField_TradingDay, &pOptionSelfCloseField_TradingDay_len
		, &pOptionSelfCloseField_SettlementID
		, &pOptionSelfCloseField_OptionSelfCloseSysID, &pOptionSelfCloseField_OptionSelfCloseSysID_len
		, &pOptionSelfCloseField_InsertDate, &pOptionSelfCloseField_InsertDate_len
		, &pOptionSelfCloseField_InsertTime, &pOptionSelfCloseField_InsertTime_len
		, &pOptionSelfCloseField_CancelTime, &pOptionSelfCloseField_CancelTime_len
		, &pOptionSelfCloseField_ExecResult
		, &pOptionSelfCloseField_ClearingPartID, &pOptionSelfCloseField_ClearingPartID_len
		, &pOptionSelfCloseField_SequenceNo
		, &pOptionSelfCloseField_FrontID
		, &pOptionSelfCloseField_SessionID
		, &pOptionSelfCloseField_UserProductInfo, &pOptionSelfCloseField_UserProductInfo_len
		, &pOptionSelfCloseField_StatusMsg, &pOptionSelfCloseField_StatusMsg_len
		, &pOptionSelfCloseField_ActiveUserID, &pOptionSelfCloseField_ActiveUserID_len
		, &pOptionSelfCloseField_BrokerOptionSelfCloseSeq
		, &pOptionSelfCloseField_BranchID, &pOptionSelfCloseField_BranchID_len
		, &pOptionSelfCloseField_InvestUnitID, &pOptionSelfCloseField_InvestUnitID_len
		, &pOptionSelfCloseField_AccountID, &pOptionSelfCloseField_AccountID_len
		, &pOptionSelfCloseField_CurrencyID, &pOptionSelfCloseField_CurrencyID_len
		, &pOptionSelfCloseField_reserve3, &pOptionSelfCloseField_reserve3_len
		, &pOptionSelfCloseField_MacAddress, &pOptionSelfCloseField_MacAddress_len
		, &pOptionSelfCloseField_InstrumentID, &pOptionSelfCloseField_InstrumentID_len
		, &pOptionSelfCloseField_ExchangeInstID, &pOptionSelfCloseField_ExchangeInstID_len
		, &pOptionSelfCloseField_IPAddress, &pOptionSelfCloseField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pOptionSelfCloseField_BrokerID != NULL) {
		if(pOptionSelfCloseField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pOptionSelfCloseField_BrokerID, sizeof(self->data.BrokerID) );
		pOptionSelfCloseField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pOptionSelfCloseField_InvestorID != NULL) {
		if(pOptionSelfCloseField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pOptionSelfCloseField_InvestorID, sizeof(self->data.InvestorID) );
		pOptionSelfCloseField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pOptionSelfCloseField_reserve1 != NULL) {
		if(pOptionSelfCloseField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pOptionSelfCloseField_reserve1, sizeof(self->data.reserve1) );
		pOptionSelfCloseField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pOptionSelfCloseField_OptionSelfCloseRef != NULL) {
		if(pOptionSelfCloseField_OptionSelfCloseRef_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_OptionSelfCloseRef_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseRef, pOptionSelfCloseField_OptionSelfCloseRef, sizeof(self->data.OptionSelfCloseRef) );
		pOptionSelfCloseField_OptionSelfCloseRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pOptionSelfCloseField_UserID != NULL) {
		if(pOptionSelfCloseField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pOptionSelfCloseField_UserID, sizeof(self->data.UserID) );
		pOptionSelfCloseField_UserID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.Volume = pOptionSelfCloseField_Volume;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pOptionSelfCloseField_RequestID;

	//TThostFtdcBusinessUnitType char[21]
	if(pOptionSelfCloseField_BusinessUnit != NULL) {
		if(pOptionSelfCloseField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pOptionSelfCloseField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pOptionSelfCloseField_BusinessUnit = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pOptionSelfCloseField_HedgeFlag;

	//TThostFtdcOptSelfCloseFlagType char
	self->data.OptSelfCloseFlag = pOptionSelfCloseField_OptSelfCloseFlag;

	//TThostFtdcOrderLocalIDType char[13]
	if(pOptionSelfCloseField_OptionSelfCloseLocalID != NULL) {
		if(pOptionSelfCloseField_OptionSelfCloseLocalID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_OptionSelfCloseLocalID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseLocalID, pOptionSelfCloseField_OptionSelfCloseLocalID, sizeof(self->data.OptionSelfCloseLocalID) );
		pOptionSelfCloseField_OptionSelfCloseLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pOptionSelfCloseField_ExchangeID != NULL) {
		if(pOptionSelfCloseField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pOptionSelfCloseField_ExchangeID, sizeof(self->data.ExchangeID) );
		pOptionSelfCloseField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pOptionSelfCloseField_ParticipantID != NULL) {
		if(pOptionSelfCloseField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pOptionSelfCloseField_ParticipantID, sizeof(self->data.ParticipantID) );
		pOptionSelfCloseField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pOptionSelfCloseField_ClientID != NULL) {
		if(pOptionSelfCloseField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pOptionSelfCloseField_ClientID, sizeof(self->data.ClientID) );
		pOptionSelfCloseField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pOptionSelfCloseField_reserve2 != NULL) {
		if(pOptionSelfCloseField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pOptionSelfCloseField_reserve2, sizeof(self->data.reserve2) );
		pOptionSelfCloseField_reserve2 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pOptionSelfCloseField_TraderID != NULL) {
		if(pOptionSelfCloseField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pOptionSelfCloseField_TraderID, sizeof(self->data.TraderID) );
		pOptionSelfCloseField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pOptionSelfCloseField_InstallID;

	//TThostFtdcOrderSubmitStatusType char
	self->data.OrderSubmitStatus = pOptionSelfCloseField_OrderSubmitStatus;

	//TThostFtdcSequenceNoType int
	self->data.NotifySequence = pOptionSelfCloseField_NotifySequence;

	//TThostFtdcDateType char[9]
	if(pOptionSelfCloseField_TradingDay != NULL) {
		if(pOptionSelfCloseField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pOptionSelfCloseField_TradingDay, sizeof(self->data.TradingDay) );
		pOptionSelfCloseField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pOptionSelfCloseField_SettlementID;

	//TThostFtdcOrderSysIDType char[21]
	if(pOptionSelfCloseField_OptionSelfCloseSysID != NULL) {
		if(pOptionSelfCloseField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseSysID, pOptionSelfCloseField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
		pOptionSelfCloseField_OptionSelfCloseSysID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pOptionSelfCloseField_InsertDate != NULL) {
		if(pOptionSelfCloseField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pOptionSelfCloseField_InsertDate, sizeof(self->data.InsertDate) );
		pOptionSelfCloseField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pOptionSelfCloseField_InsertTime != NULL) {
		if(pOptionSelfCloseField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pOptionSelfCloseField_InsertTime, sizeof(self->data.InsertTime) );
		pOptionSelfCloseField_InsertTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pOptionSelfCloseField_CancelTime != NULL) {
		if(pOptionSelfCloseField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
			PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
			return -1;
		}
		strncpy(self->data.CancelTime, pOptionSelfCloseField_CancelTime, sizeof(self->data.CancelTime) );
		pOptionSelfCloseField_CancelTime = NULL;
	}

	//TThostFtdcExecResultType char
	self->data.ExecResult = pOptionSelfCloseField_ExecResult;

	//TThostFtdcParticipantIDType char[11]
	if(pOptionSelfCloseField_ClearingPartID != NULL) {
		if(pOptionSelfCloseField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
			PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
			return -1;
		}
		strncpy(self->data.ClearingPartID, pOptionSelfCloseField_ClearingPartID, sizeof(self->data.ClearingPartID) );
		pOptionSelfCloseField_ClearingPartID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pOptionSelfCloseField_SequenceNo;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pOptionSelfCloseField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pOptionSelfCloseField_SessionID;

	//TThostFtdcProductInfoType char[11]
	if(pOptionSelfCloseField_UserProductInfo != NULL) {
		if(pOptionSelfCloseField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pOptionSelfCloseField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pOptionSelfCloseField_UserProductInfo = NULL;
	}

	//TThostFtdcErrorMsgType char[81]
	if(pOptionSelfCloseField_StatusMsg != NULL) {
		if(pOptionSelfCloseField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pOptionSelfCloseField_StatusMsg, sizeof(self->data.StatusMsg) );
		pOptionSelfCloseField_StatusMsg = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pOptionSelfCloseField_ActiveUserID != NULL) {
		if(pOptionSelfCloseField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
			PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
			return -1;
		}
		strncpy(self->data.ActiveUserID, pOptionSelfCloseField_ActiveUserID, sizeof(self->data.ActiveUserID) );
		pOptionSelfCloseField_ActiveUserID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.BrokerOptionSelfCloseSeq = pOptionSelfCloseField_BrokerOptionSelfCloseSeq;

	//TThostFtdcBranchIDType char[9]
	if(pOptionSelfCloseField_BranchID != NULL) {
		if(pOptionSelfCloseField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pOptionSelfCloseField_BranchID, sizeof(self->data.BranchID) );
		pOptionSelfCloseField_BranchID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pOptionSelfCloseField_InvestUnitID != NULL) {
		if(pOptionSelfCloseField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pOptionSelfCloseField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pOptionSelfCloseField_InvestUnitID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pOptionSelfCloseField_AccountID != NULL) {
		if(pOptionSelfCloseField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pOptionSelfCloseField_AccountID, sizeof(self->data.AccountID) );
		pOptionSelfCloseField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pOptionSelfCloseField_CurrencyID != NULL) {
		if(pOptionSelfCloseField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pOptionSelfCloseField_CurrencyID, sizeof(self->data.CurrencyID) );
		pOptionSelfCloseField_CurrencyID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pOptionSelfCloseField_reserve3 != NULL) {
		if(pOptionSelfCloseField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
			PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
			return -1;
		}
		strncpy(self->data.reserve3, pOptionSelfCloseField_reserve3, sizeof(self->data.reserve3) );
		pOptionSelfCloseField_reserve3 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pOptionSelfCloseField_MacAddress != NULL) {
		if(pOptionSelfCloseField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pOptionSelfCloseField_MacAddress, sizeof(self->data.MacAddress) );
		pOptionSelfCloseField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pOptionSelfCloseField_InstrumentID != NULL) {
		if(pOptionSelfCloseField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pOptionSelfCloseField_InstrumentID, sizeof(self->data.InstrumentID) );
		pOptionSelfCloseField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pOptionSelfCloseField_ExchangeInstID != NULL) {
		if(pOptionSelfCloseField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pOptionSelfCloseField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pOptionSelfCloseField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pOptionSelfCloseField_IPAddress != NULL) {
		if(pOptionSelfCloseField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pOptionSelfCloseField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pOptionSelfCloseField_IPAddress, sizeof(self->data.IPAddress) );
		pOptionSelfCloseField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcOptionSelfCloseField_dealloc(PyCThostFtdcOptionSelfCloseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_repr(PyCThostFtdcOptionSelfCloseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:i,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:i,s:i,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "OptionSelfCloseRef", self->data.OptionSelfCloseRef 
		, "UserID", self->data.UserID 
		, "Volume", self->data.Volume
		, "RequestID", self->data.RequestID
		, "BusinessUnit", self->data.BusinessUnit 
		, "HedgeFlag", self->data.HedgeFlag
		, "OptSelfCloseFlag", self->data.OptSelfCloseFlag
		, "OptionSelfCloseLocalID", self->data.OptionSelfCloseLocalID 
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
		, "OptionSelfCloseSysID", self->data.OptionSelfCloseSysID 
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
		, "BrokerOptionSelfCloseSeq", self->data.BrokerOptionSelfCloseSeq
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionSelfCloseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_BrokerID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_InvestorID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_reserve1(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseRef(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseRef);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_UserID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_Volume(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_RequestID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_BusinessUnit(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_HedgeFlag(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_OptSelfCloseFlag(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OptSelfCloseFlag), 1);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseLocalID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseLocalID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_ExchangeID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_ParticipantID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_ClientID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_reserve2(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_TraderID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_InstallID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_OrderSubmitStatus(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_NotifySequence(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.NotifySequence);
#else 
	return PyInt_FromLong(self->data.NotifySequence);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_TradingDay(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_SettlementID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseSysID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_InsertDate(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_InsertTime(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_CancelTime(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.CancelTime);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_ExecResult(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ExecResult), 1);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_ClearingPartID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ClearingPartID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_SequenceNo(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_FrontID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_SessionID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_UserProductInfo(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_StatusMsg(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_ActiveUserID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveUserID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_BrokerOptionSelfCloseSeq(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BrokerOptionSelfCloseSeq);
#else 
	return PyInt_FromLong(self->data.BrokerOptionSelfCloseSeq);
#endif 
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_BranchID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_InvestUnitID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_AccountID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_CurrencyID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_reserve3(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve3);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_MacAddress(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_InstrumentID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_ExchangeInstID(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcOptionSelfCloseField_get_IPAddress(PyCThostFtdcOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcOptionSelfCloseField_set_BrokerID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_InvestorID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_reserve1(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseRef(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_UserID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_Volume(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_RequestID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_BusinessUnit(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_HedgeFlag(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_OptSelfCloseFlag(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptSelfCloseFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptSelfCloseFlag)) {
		PyErr_SetString(PyExc_ValueError, "OptSelfCloseFlag must be less than 1 bytes");
		return -1;
	}
	self->data.OptSelfCloseFlag = *buf;
	return 0;
}

static int PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseLocalID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_ExchangeID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_ParticipantID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_ClientID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_reserve2(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_TraderID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_InstallID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_OrderSubmitStatus(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_NotifySequence(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_TradingDay(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_SettlementID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseSysID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_InsertDate(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_InsertTime(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_CancelTime(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_ExecResult(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_ClearingPartID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_SequenceNo(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_FrontID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_SessionID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_UserProductInfo(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_StatusMsg(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_ActiveUserID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_BrokerOptionSelfCloseSeq(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerOptionSelfCloseSeq Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BrokerOptionSelfCloseSeq Expected int"); 
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
    self->data.BrokerOptionSelfCloseSeq = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOptionSelfCloseField_set_BranchID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_InvestUnitID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_AccountID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_CurrencyID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_reserve3(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_MacAddress(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_InstrumentID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_ExchangeInstID(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionSelfCloseField_set_IPAddress(PyCThostFtdcOptionSelfCloseField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcOptionSelfCloseField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcOptionSelfCloseField_get_BrokerID, (setter)PyCThostFtdcOptionSelfCloseField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcOptionSelfCloseField_get_InvestorID, (setter)PyCThostFtdcOptionSelfCloseField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcOptionSelfCloseField_get_reserve1, (setter)PyCThostFtdcOptionSelfCloseField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"OptionSelfCloseRef", (getter)PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseRef, (setter)PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseRef, (char *)"OptionSelfCloseRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcOptionSelfCloseField_get_UserID, (setter)PyCThostFtdcOptionSelfCloseField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcOptionSelfCloseField_get_Volume, (setter)PyCThostFtdcOptionSelfCloseField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcOptionSelfCloseField_get_RequestID, (setter)PyCThostFtdcOptionSelfCloseField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcOptionSelfCloseField_get_BusinessUnit, (setter)PyCThostFtdcOptionSelfCloseField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcOptionSelfCloseField_get_HedgeFlag, (setter)PyCThostFtdcOptionSelfCloseField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"OptSelfCloseFlag", (getter)PyCThostFtdcOptionSelfCloseField_get_OptSelfCloseFlag, (setter)PyCThostFtdcOptionSelfCloseField_set_OptSelfCloseFlag, (char *)"OptSelfCloseFlag", NULL},
	 {(char *)"OptionSelfCloseLocalID", (getter)PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseLocalID, (setter)PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseLocalID, (char *)"OptionSelfCloseLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcOptionSelfCloseField_get_ExchangeID, (setter)PyCThostFtdcOptionSelfCloseField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcOptionSelfCloseField_get_ParticipantID, (setter)PyCThostFtdcOptionSelfCloseField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcOptionSelfCloseField_get_ClientID, (setter)PyCThostFtdcOptionSelfCloseField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcOptionSelfCloseField_get_reserve2, (setter)PyCThostFtdcOptionSelfCloseField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcOptionSelfCloseField_get_TraderID, (setter)PyCThostFtdcOptionSelfCloseField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcOptionSelfCloseField_get_InstallID, (setter)PyCThostFtdcOptionSelfCloseField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcOptionSelfCloseField_get_OrderSubmitStatus, (setter)PyCThostFtdcOptionSelfCloseField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
	 {(char *)"NotifySequence", (getter)PyCThostFtdcOptionSelfCloseField_get_NotifySequence, (setter)PyCThostFtdcOptionSelfCloseField_set_NotifySequence, (char *)"NotifySequence", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcOptionSelfCloseField_get_TradingDay, (setter)PyCThostFtdcOptionSelfCloseField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcOptionSelfCloseField_get_SettlementID, (setter)PyCThostFtdcOptionSelfCloseField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcOptionSelfCloseField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcOptionSelfCloseField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcOptionSelfCloseField_get_InsertDate, (setter)PyCThostFtdcOptionSelfCloseField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcOptionSelfCloseField_get_InsertTime, (setter)PyCThostFtdcOptionSelfCloseField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"CancelTime", (getter)PyCThostFtdcOptionSelfCloseField_get_CancelTime, (setter)PyCThostFtdcOptionSelfCloseField_set_CancelTime, (char *)"CancelTime", NULL},
	 {(char *)"ExecResult", (getter)PyCThostFtdcOptionSelfCloseField_get_ExecResult, (setter)PyCThostFtdcOptionSelfCloseField_set_ExecResult, (char *)"ExecResult", NULL},
	 {(char *)"ClearingPartID", (getter)PyCThostFtdcOptionSelfCloseField_get_ClearingPartID, (setter)PyCThostFtdcOptionSelfCloseField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcOptionSelfCloseField_get_SequenceNo, (setter)PyCThostFtdcOptionSelfCloseField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcOptionSelfCloseField_get_FrontID, (setter)PyCThostFtdcOptionSelfCloseField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcOptionSelfCloseField_get_SessionID, (setter)PyCThostFtdcOptionSelfCloseField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcOptionSelfCloseField_get_UserProductInfo, (setter)PyCThostFtdcOptionSelfCloseField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcOptionSelfCloseField_get_StatusMsg, (setter)PyCThostFtdcOptionSelfCloseField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"ActiveUserID", (getter)PyCThostFtdcOptionSelfCloseField_get_ActiveUserID, (setter)PyCThostFtdcOptionSelfCloseField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
	 {(char *)"BrokerOptionSelfCloseSeq", (getter)PyCThostFtdcOptionSelfCloseField_get_BrokerOptionSelfCloseSeq, (setter)PyCThostFtdcOptionSelfCloseField_set_BrokerOptionSelfCloseSeq, (char *)"BrokerOptionSelfCloseSeq", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcOptionSelfCloseField_get_BranchID, (setter)PyCThostFtdcOptionSelfCloseField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcOptionSelfCloseField_get_InvestUnitID, (setter)PyCThostFtdcOptionSelfCloseField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcOptionSelfCloseField_get_AccountID, (setter)PyCThostFtdcOptionSelfCloseField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcOptionSelfCloseField_get_CurrencyID, (setter)PyCThostFtdcOptionSelfCloseField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"reserve3", (getter)PyCThostFtdcOptionSelfCloseField_get_reserve3, (setter)PyCThostFtdcOptionSelfCloseField_set_reserve3, (char *)"reserve3", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcOptionSelfCloseField_get_MacAddress, (setter)PyCThostFtdcOptionSelfCloseField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcOptionSelfCloseField_get_InstrumentID, (setter)PyCThostFtdcOptionSelfCloseField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcOptionSelfCloseField_get_ExchangeInstID, (setter)PyCThostFtdcOptionSelfCloseField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcOptionSelfCloseField_get_IPAddress, (setter)PyCThostFtdcOptionSelfCloseField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionSelfCloseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionSelfCloseField",	/* tp_name */
	sizeof(PyCThostFtdcOptionSelfCloseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionSelfCloseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionSelfCloseField_repr,   /* tp_repr */
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
	"CThostFtdcOptionSelfCloseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionSelfCloseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionSelfCloseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionSelfCloseField_new,       /* tp_new */
};

int PyCThostFtdcOptionSelfCloseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionSelfCloseField  */
	if (PyType_Ready(&PyCThostFtdcOptionSelfCloseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionSelfCloseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionSelfCloseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionSelfCloseField", (PyObject *)&PyCThostFtdcOptionSelfCloseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionSelfCloseField to module");
        Py_DECREF(&PyCThostFtdcOptionSelfCloseFieldType);
		return -1;
    }

    return 0;
}
