
#include "PyCThostFtdcOrderField.h"



static PyObject *PyCThostFtdcOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOrderField *self = (PyCThostFtdcOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcOrderField_init(PyCThostFtdcOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OrderSysID", "OrderSource", "OrderStatus", "OrderType", "VolumeTraded", "VolumeTotal", "InsertDate", "InsertTime", "ActiveTime", "SuspendTime", "UpdateTime", "CancelTime", "ActiveTraderID", "ClearingPartID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "UserForceClose", "ActiveUserID", "BrokerOrderSeq", "RelativeOrderSysID", "ZCETotalTradedVolume", "IsSwapOrder", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pOrderField_BrokerID = NULL;
	Py_ssize_t pOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pOrderField_InvestorID = NULL;
	Py_ssize_t pOrderField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pOrderField_reserve1 = NULL;
	Py_ssize_t pOrderField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pOrderField_OrderRef = NULL;
	Py_ssize_t pOrderField_OrderRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pOrderField_UserID = NULL;
	Py_ssize_t pOrderField_UserID_len = 0;

	//TThostFtdcOrderPriceTypeType char
	char pOrderField_OrderPriceType = 0;

	//TThostFtdcDirectionType char
	char pOrderField_Direction = 0;

	//TThostFtdcCombOffsetFlagType char[5]
	const char *pOrderField_CombOffsetFlag = NULL;
	Py_ssize_t pOrderField_CombOffsetFlag_len = 0;

	//TThostFtdcCombHedgeFlagType char[5]
	const char *pOrderField_CombHedgeFlag = NULL;
	Py_ssize_t pOrderField_CombHedgeFlag_len = 0;

	//TThostFtdcPriceType double
	double pOrderField_LimitPrice = 0.0;

	//TThostFtdcVolumeType int
	int pOrderField_VolumeTotalOriginal = 0;

	//TThostFtdcTimeConditionType char
	char pOrderField_TimeCondition = 0;

	//TThostFtdcDateType char[9]
	const char *pOrderField_GTDDate = NULL;
	Py_ssize_t pOrderField_GTDDate_len = 0;

	//TThostFtdcVolumeConditionType char
	char pOrderField_VolumeCondition = 0;

	//TThostFtdcVolumeType int
	int pOrderField_MinVolume = 0;

	//TThostFtdcContingentConditionType char
	char pOrderField_ContingentCondition = 0;

	//TThostFtdcPriceType double
	double pOrderField_StopPrice = 0.0;

	//TThostFtdcForceCloseReasonType char
	char pOrderField_ForceCloseReason = 0;

	//TThostFtdcBoolType int
	int pOrderField_IsAutoSuspend = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pOrderField_BusinessUnit = NULL;
	Py_ssize_t pOrderField_BusinessUnit_len = 0;

	//TThostFtdcRequestIDType int
	int pOrderField_RequestID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pOrderField_OrderLocalID = NULL;
	Py_ssize_t pOrderField_OrderLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pOrderField_ExchangeID = NULL;
	Py_ssize_t pOrderField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pOrderField_ParticipantID = NULL;
	Py_ssize_t pOrderField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pOrderField_ClientID = NULL;
	Py_ssize_t pOrderField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pOrderField_reserve2 = NULL;
	Py_ssize_t pOrderField_reserve2_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pOrderField_TraderID = NULL;
	Py_ssize_t pOrderField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pOrderField_InstallID = 0;

	//TThostFtdcOrderSubmitStatusType char
	char pOrderField_OrderSubmitStatus = 0;

	//TThostFtdcSequenceNoType int
	int pOrderField_NotifySequence = 0;

	//TThostFtdcDateType char[9]
	const char *pOrderField_TradingDay = NULL;
	Py_ssize_t pOrderField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pOrderField_SettlementID = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pOrderField_OrderSysID = NULL;
	Py_ssize_t pOrderField_OrderSysID_len = 0;

	//TThostFtdcOrderSourceType char
	char pOrderField_OrderSource = 0;

	//TThostFtdcOrderStatusType char
	char pOrderField_OrderStatus = 0;

	//TThostFtdcOrderTypeType char
	char pOrderField_OrderType = 0;

	//TThostFtdcVolumeType int
	int pOrderField_VolumeTraded = 0;

	//TThostFtdcVolumeType int
	int pOrderField_VolumeTotal = 0;

	//TThostFtdcDateType char[9]
	const char *pOrderField_InsertDate = NULL;
	Py_ssize_t pOrderField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pOrderField_InsertTime = NULL;
	Py_ssize_t pOrderField_InsertTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pOrderField_ActiveTime = NULL;
	Py_ssize_t pOrderField_ActiveTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pOrderField_SuspendTime = NULL;
	Py_ssize_t pOrderField_SuspendTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pOrderField_UpdateTime = NULL;
	Py_ssize_t pOrderField_UpdateTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pOrderField_CancelTime = NULL;
	Py_ssize_t pOrderField_CancelTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pOrderField_ActiveTraderID = NULL;
	Py_ssize_t pOrderField_ActiveTraderID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pOrderField_ClearingPartID = NULL;
	Py_ssize_t pOrderField_ClearingPartID_len = 0;

	//TThostFtdcSequenceNoType int
	int pOrderField_SequenceNo = 0;

	//TThostFtdcFrontIDType int
	int pOrderField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pOrderField_SessionID = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pOrderField_UserProductInfo = NULL;
	Py_ssize_t pOrderField_UserProductInfo_len = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pOrderField_StatusMsg = NULL;
	Py_ssize_t pOrderField_StatusMsg_len = 0;

	//TThostFtdcBoolType int
	int pOrderField_UserForceClose = 0;

	//TThostFtdcUserIDType char[16]
	const char *pOrderField_ActiveUserID = NULL;
	Py_ssize_t pOrderField_ActiveUserID_len = 0;

	//TThostFtdcSequenceNoType int
	int pOrderField_BrokerOrderSeq = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pOrderField_RelativeOrderSysID = NULL;
	Py_ssize_t pOrderField_RelativeOrderSysID_len = 0;

	//TThostFtdcVolumeType int
	int pOrderField_ZCETotalTradedVolume = 0;

	//TThostFtdcBoolType int
	int pOrderField_IsSwapOrder = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pOrderField_BranchID = NULL;
	Py_ssize_t pOrderField_BranchID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pOrderField_InvestUnitID = NULL;
	Py_ssize_t pOrderField_InvestUnitID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pOrderField_AccountID = NULL;
	Py_ssize_t pOrderField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pOrderField_CurrencyID = NULL;
	Py_ssize_t pOrderField_CurrencyID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pOrderField_reserve3 = NULL;
	Py_ssize_t pOrderField_reserve3_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pOrderField_MacAddress = NULL;
	Py_ssize_t pOrderField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pOrderField_InstrumentID = NULL;
	Py_ssize_t pOrderField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pOrderField_ExchangeInstID = NULL;
	Py_ssize_t pOrderField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pOrderField_IPAddress = NULL;
	Py_ssize_t pOrderField_IPAddress_len = 0;

	//TThostFtdcOrderMemoType char[13]
	const char *pOrderField_OrderMemo = NULL;
	Py_ssize_t pOrderField_OrderMemo_len = 0;

	//TThostFtdcSequenceNo12Type int
	int pOrderField_SessionReqSeq = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iy#y#y#y#y#y#iciy#iy#ccciiy#y#y#y#y#y#y#y#iiiy#y#iy#iy#iiy#y#y#y#y#y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccs#s#dics#cicdcis#is#s#s#s#s#s#icis#is#ccciis#s#s#s#s#s#s#s#iiis#s#is#is#iis#s#s#s#s#s#s#s#s#s#i", (char **)kwlist
#endif

		, &pOrderField_BrokerID, &pOrderField_BrokerID_len
		, &pOrderField_InvestorID, &pOrderField_InvestorID_len
		, &pOrderField_reserve1, &pOrderField_reserve1_len
		, &pOrderField_OrderRef, &pOrderField_OrderRef_len
		, &pOrderField_UserID, &pOrderField_UserID_len
		, &pOrderField_OrderPriceType
		, &pOrderField_Direction
		, &pOrderField_CombOffsetFlag, &pOrderField_CombOffsetFlag_len
		, &pOrderField_CombHedgeFlag, &pOrderField_CombHedgeFlag_len
		, &pOrderField_LimitPrice
		, &pOrderField_VolumeTotalOriginal
		, &pOrderField_TimeCondition
		, &pOrderField_GTDDate, &pOrderField_GTDDate_len
		, &pOrderField_VolumeCondition
		, &pOrderField_MinVolume
		, &pOrderField_ContingentCondition
		, &pOrderField_StopPrice
		, &pOrderField_ForceCloseReason
		, &pOrderField_IsAutoSuspend
		, &pOrderField_BusinessUnit, &pOrderField_BusinessUnit_len
		, &pOrderField_RequestID
		, &pOrderField_OrderLocalID, &pOrderField_OrderLocalID_len
		, &pOrderField_ExchangeID, &pOrderField_ExchangeID_len
		, &pOrderField_ParticipantID, &pOrderField_ParticipantID_len
		, &pOrderField_ClientID, &pOrderField_ClientID_len
		, &pOrderField_reserve2, &pOrderField_reserve2_len
		, &pOrderField_TraderID, &pOrderField_TraderID_len
		, &pOrderField_InstallID
		, &pOrderField_OrderSubmitStatus
		, &pOrderField_NotifySequence
		, &pOrderField_TradingDay, &pOrderField_TradingDay_len
		, &pOrderField_SettlementID
		, &pOrderField_OrderSysID, &pOrderField_OrderSysID_len
		, &pOrderField_OrderSource
		, &pOrderField_OrderStatus
		, &pOrderField_OrderType
		, &pOrderField_VolumeTraded
		, &pOrderField_VolumeTotal
		, &pOrderField_InsertDate, &pOrderField_InsertDate_len
		, &pOrderField_InsertTime, &pOrderField_InsertTime_len
		, &pOrderField_ActiveTime, &pOrderField_ActiveTime_len
		, &pOrderField_SuspendTime, &pOrderField_SuspendTime_len
		, &pOrderField_UpdateTime, &pOrderField_UpdateTime_len
		, &pOrderField_CancelTime, &pOrderField_CancelTime_len
		, &pOrderField_ActiveTraderID, &pOrderField_ActiveTraderID_len
		, &pOrderField_ClearingPartID, &pOrderField_ClearingPartID_len
		, &pOrderField_SequenceNo
		, &pOrderField_FrontID
		, &pOrderField_SessionID
		, &pOrderField_UserProductInfo, &pOrderField_UserProductInfo_len
		, &pOrderField_StatusMsg, &pOrderField_StatusMsg_len
		, &pOrderField_UserForceClose
		, &pOrderField_ActiveUserID, &pOrderField_ActiveUserID_len
		, &pOrderField_BrokerOrderSeq
		, &pOrderField_RelativeOrderSysID, &pOrderField_RelativeOrderSysID_len
		, &pOrderField_ZCETotalTradedVolume
		, &pOrderField_IsSwapOrder
		, &pOrderField_BranchID, &pOrderField_BranchID_len
		, &pOrderField_InvestUnitID, &pOrderField_InvestUnitID_len
		, &pOrderField_AccountID, &pOrderField_AccountID_len
		, &pOrderField_CurrencyID, &pOrderField_CurrencyID_len
		, &pOrderField_reserve3, &pOrderField_reserve3_len
		, &pOrderField_MacAddress, &pOrderField_MacAddress_len
		, &pOrderField_InstrumentID, &pOrderField_InstrumentID_len
		, &pOrderField_ExchangeInstID, &pOrderField_ExchangeInstID_len
		, &pOrderField_IPAddress, &pOrderField_IPAddress_len
		, &pOrderField_OrderMemo, &pOrderField_OrderMemo_len
		, &pOrderField_SessionReqSeq


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pOrderField_BrokerID != NULL) {
		if(pOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pOrderField_InvestorID != NULL) {
		if(pOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pOrderField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pOrderField_reserve1 != NULL) {
		if(pOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pOrderField_reserve1, sizeof(self->data.reserve1) );
		pOrderField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pOrderField_OrderRef != NULL) {
		if(pOrderField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
			PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", pOrderField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
			return -1;
		}
		strncpy(self->data.OrderRef, pOrderField_OrderRef, sizeof(self->data.OrderRef) );
		pOrderField_OrderRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pOrderField_UserID != NULL) {
		if(pOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pOrderField_UserID, sizeof(self->data.UserID) );
		pOrderField_UserID = NULL;
	}

	//TThostFtdcOrderPriceTypeType char
	self->data.OrderPriceType = pOrderField_OrderPriceType;

	//TThostFtdcDirectionType char
	self->data.Direction = pOrderField_Direction;

	//TThostFtdcCombOffsetFlagType char[5]
	if(pOrderField_CombOffsetFlag != NULL) {
		if(pOrderField_CombOffsetFlag_len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
			PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is %zd)", pOrderField_CombOffsetFlag_len, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
			return -1;
		}
		strncpy(self->data.CombOffsetFlag, pOrderField_CombOffsetFlag, sizeof(self->data.CombOffsetFlag) );
		pOrderField_CombOffsetFlag = NULL;
	}

	//TThostFtdcCombHedgeFlagType char[5]
	if(pOrderField_CombHedgeFlag != NULL) {
		if(pOrderField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
			PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", pOrderField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
			return -1;
		}
		strncpy(self->data.CombHedgeFlag, pOrderField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
		pOrderField_CombHedgeFlag = NULL;
	}

	//TThostFtdcPriceType double
	self->data.LimitPrice = pOrderField_LimitPrice;
	//TThostFtdcVolumeType int
	self->data.VolumeTotalOriginal = pOrderField_VolumeTotalOriginal;

	//TThostFtdcTimeConditionType char
	self->data.TimeCondition = pOrderField_TimeCondition;

	//TThostFtdcDateType char[9]
	if(pOrderField_GTDDate != NULL) {
		if(pOrderField_GTDDate_len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
			PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is %zd)", pOrderField_GTDDate_len, (Py_ssize_t)sizeof(self->data.GTDDate));
			return -1;
		}
		strncpy(self->data.GTDDate, pOrderField_GTDDate, sizeof(self->data.GTDDate) );
		pOrderField_GTDDate = NULL;
	}

	//TThostFtdcVolumeConditionType char
	self->data.VolumeCondition = pOrderField_VolumeCondition;

	//TThostFtdcVolumeType int
	self->data.MinVolume = pOrderField_MinVolume;

	//TThostFtdcContingentConditionType char
	self->data.ContingentCondition = pOrderField_ContingentCondition;

	//TThostFtdcPriceType double
	self->data.StopPrice = pOrderField_StopPrice;
	//TThostFtdcForceCloseReasonType char
	self->data.ForceCloseReason = pOrderField_ForceCloseReason;

	//TThostFtdcBoolType int
	self->data.IsAutoSuspend = pOrderField_IsAutoSuspend;

	//TThostFtdcBusinessUnitType char[21]
	if(pOrderField_BusinessUnit != NULL) {
		if(pOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pOrderField_BusinessUnit = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pOrderField_RequestID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pOrderField_OrderLocalID != NULL) {
		if(pOrderField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", pOrderField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
			return -1;
		}
		strncpy(self->data.OrderLocalID, pOrderField_OrderLocalID, sizeof(self->data.OrderLocalID) );
		pOrderField_OrderLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pOrderField_ExchangeID != NULL) {
		if(pOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pOrderField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pOrderField_ParticipantID != NULL) {
		if(pOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
		pOrderField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pOrderField_ClientID != NULL) {
		if(pOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pOrderField_ClientID, sizeof(self->data.ClientID) );
		pOrderField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pOrderField_reserve2 != NULL) {
		if(pOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pOrderField_reserve2, sizeof(self->data.reserve2) );
		pOrderField_reserve2 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pOrderField_TraderID != NULL) {
		if(pOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pOrderField_TraderID, sizeof(self->data.TraderID) );
		pOrderField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pOrderField_InstallID;

	//TThostFtdcOrderSubmitStatusType char
	self->data.OrderSubmitStatus = pOrderField_OrderSubmitStatus;

	//TThostFtdcSequenceNoType int
	self->data.NotifySequence = pOrderField_NotifySequence;

	//TThostFtdcDateType char[9]
	if(pOrderField_TradingDay != NULL) {
		if(pOrderField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pOrderField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pOrderField_TradingDay, sizeof(self->data.TradingDay) );
		pOrderField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pOrderField_SettlementID;

	//TThostFtdcOrderSysIDType char[21]
	if(pOrderField_OrderSysID != NULL) {
		if(pOrderField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pOrderField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pOrderField_OrderSysID, sizeof(self->data.OrderSysID) );
		pOrderField_OrderSysID = NULL;
	}

	//TThostFtdcOrderSourceType char
	self->data.OrderSource = pOrderField_OrderSource;

	//TThostFtdcOrderStatusType char
	self->data.OrderStatus = pOrderField_OrderStatus;

	//TThostFtdcOrderTypeType char
	self->data.OrderType = pOrderField_OrderType;

	//TThostFtdcVolumeType int
	self->data.VolumeTraded = pOrderField_VolumeTraded;

	//TThostFtdcVolumeType int
	self->data.VolumeTotal = pOrderField_VolumeTotal;

	//TThostFtdcDateType char[9]
	if(pOrderField_InsertDate != NULL) {
		if(pOrderField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pOrderField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pOrderField_InsertDate, sizeof(self->data.InsertDate) );
		pOrderField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pOrderField_InsertTime != NULL) {
		if(pOrderField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pOrderField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pOrderField_InsertTime, sizeof(self->data.InsertTime) );
		pOrderField_InsertTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pOrderField_ActiveTime != NULL) {
		if(pOrderField_ActiveTime_len > (Py_ssize_t)sizeof(self->data.ActiveTime)) {
			PyErr_Format(PyExc_ValueError, "ActiveTime too long: length=%zd (max allowed is %zd)", pOrderField_ActiveTime_len, (Py_ssize_t)sizeof(self->data.ActiveTime));
			return -1;
		}
		strncpy(self->data.ActiveTime, pOrderField_ActiveTime, sizeof(self->data.ActiveTime) );
		pOrderField_ActiveTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pOrderField_SuspendTime != NULL) {
		if(pOrderField_SuspendTime_len > (Py_ssize_t)sizeof(self->data.SuspendTime)) {
			PyErr_Format(PyExc_ValueError, "SuspendTime too long: length=%zd (max allowed is %zd)", pOrderField_SuspendTime_len, (Py_ssize_t)sizeof(self->data.SuspendTime));
			return -1;
		}
		strncpy(self->data.SuspendTime, pOrderField_SuspendTime, sizeof(self->data.SuspendTime) );
		pOrderField_SuspendTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pOrderField_UpdateTime != NULL) {
		if(pOrderField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
			PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", pOrderField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
			return -1;
		}
		strncpy(self->data.UpdateTime, pOrderField_UpdateTime, sizeof(self->data.UpdateTime) );
		pOrderField_UpdateTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pOrderField_CancelTime != NULL) {
		if(pOrderField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
			PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", pOrderField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
			return -1;
		}
		strncpy(self->data.CancelTime, pOrderField_CancelTime, sizeof(self->data.CancelTime) );
		pOrderField_CancelTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pOrderField_ActiveTraderID != NULL) {
		if(pOrderField_ActiveTraderID_len > (Py_ssize_t)sizeof(self->data.ActiveTraderID)) {
			PyErr_Format(PyExc_ValueError, "ActiveTraderID too long: length=%zd (max allowed is %zd)", pOrderField_ActiveTraderID_len, (Py_ssize_t)sizeof(self->data.ActiveTraderID));
			return -1;
		}
		strncpy(self->data.ActiveTraderID, pOrderField_ActiveTraderID, sizeof(self->data.ActiveTraderID) );
		pOrderField_ActiveTraderID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pOrderField_ClearingPartID != NULL) {
		if(pOrderField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
			PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", pOrderField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
			return -1;
		}
		strncpy(self->data.ClearingPartID, pOrderField_ClearingPartID, sizeof(self->data.ClearingPartID) );
		pOrderField_ClearingPartID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pOrderField_SequenceNo;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pOrderField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pOrderField_SessionID;

	//TThostFtdcProductInfoType char[11]
	if(pOrderField_UserProductInfo != NULL) {
		if(pOrderField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pOrderField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pOrderField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pOrderField_UserProductInfo = NULL;
	}

	//TThostFtdcErrorMsgType char[81]
	if(pOrderField_StatusMsg != NULL) {
		if(pOrderField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pOrderField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pOrderField_StatusMsg, sizeof(self->data.StatusMsg) );
		pOrderField_StatusMsg = NULL;
	}

	//TThostFtdcBoolType int
	self->data.UserForceClose = pOrderField_UserForceClose;

	//TThostFtdcUserIDType char[16]
	if(pOrderField_ActiveUserID != NULL) {
		if(pOrderField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
			PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", pOrderField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
			return -1;
		}
		strncpy(self->data.ActiveUserID, pOrderField_ActiveUserID, sizeof(self->data.ActiveUserID) );
		pOrderField_ActiveUserID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.BrokerOrderSeq = pOrderField_BrokerOrderSeq;

	//TThostFtdcOrderSysIDType char[21]
	if(pOrderField_RelativeOrderSysID != NULL) {
		if(pOrderField_RelativeOrderSysID_len > (Py_ssize_t)sizeof(self->data.RelativeOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "RelativeOrderSysID too long: length=%zd (max allowed is %zd)", pOrderField_RelativeOrderSysID_len, (Py_ssize_t)sizeof(self->data.RelativeOrderSysID));
			return -1;
		}
		strncpy(self->data.RelativeOrderSysID, pOrderField_RelativeOrderSysID, sizeof(self->data.RelativeOrderSysID) );
		pOrderField_RelativeOrderSysID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.ZCETotalTradedVolume = pOrderField_ZCETotalTradedVolume;

	//TThostFtdcBoolType int
	self->data.IsSwapOrder = pOrderField_IsSwapOrder;

	//TThostFtdcBranchIDType char[9]
	if(pOrderField_BranchID != NULL) {
		if(pOrderField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pOrderField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pOrderField_BranchID, sizeof(self->data.BranchID) );
		pOrderField_BranchID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pOrderField_InvestUnitID != NULL) {
		if(pOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pOrderField_InvestUnitID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pOrderField_AccountID != NULL) {
		if(pOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pOrderField_AccountID, sizeof(self->data.AccountID) );
		pOrderField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pOrderField_CurrencyID != NULL) {
		if(pOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
		pOrderField_CurrencyID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pOrderField_reserve3 != NULL) {
		if(pOrderField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
			PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", pOrderField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
			return -1;
		}
		strncpy(self->data.reserve3, pOrderField_reserve3, sizeof(self->data.reserve3) );
		pOrderField_reserve3 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pOrderField_MacAddress != NULL) {
		if(pOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pOrderField_MacAddress, sizeof(self->data.MacAddress) );
		pOrderField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pOrderField_InstrumentID != NULL) {
		if(pOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
		pOrderField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pOrderField_ExchangeInstID != NULL) {
		if(pOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pOrderField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pOrderField_IPAddress != NULL) {
		if(pOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pOrderField_IPAddress, sizeof(self->data.IPAddress) );
		pOrderField_IPAddress = NULL;
	}

	//TThostFtdcOrderMemoType char[13]
	if(pOrderField_OrderMemo != NULL) {
		if(pOrderField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
			PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", pOrderField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
			return -1;
		}
		strncpy(self->data.OrderMemo, pOrderField_OrderMemo, sizeof(self->data.OrderMemo) );
		pOrderField_OrderMemo = NULL;
	}

	//TThostFtdcSequenceNo12Type int
	self->data.SessionReqSeq = pOrderField_SessionReqSeq;



    return 0;
}

static void PyCThostFtdcOrderField_dealloc(PyCThostFtdcOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOrderField_repr(PyCThostFtdcOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:c,s:c,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y,s:y,s:i,s:y,s:i,s:y,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:s,s:s,s:d,s:i,s:c,s:s,s:c,s:i,s:c,s:d,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:c,s:c,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:i,s:s,s:s,s:i,s:s,s:i,s:s,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "OrderRef", self->data.OrderRef 
		, "UserID", self->data.UserID 
		, "OrderPriceType", self->data.OrderPriceType
		, "Direction", self->data.Direction
		, "CombOffsetFlag", self->data.CombOffsetFlag 
		, "CombHedgeFlag", self->data.CombHedgeFlag 
		, "LimitPrice", self->data.LimitPrice
		, "VolumeTotalOriginal", self->data.VolumeTotalOriginal
		, "TimeCondition", self->data.TimeCondition
		, "GTDDate", self->data.GTDDate 
		, "VolumeCondition", self->data.VolumeCondition
		, "MinVolume", self->data.MinVolume
		, "ContingentCondition", self->data.ContingentCondition
		, "StopPrice", self->data.StopPrice
		, "ForceCloseReason", self->data.ForceCloseReason
		, "IsAutoSuspend", self->data.IsAutoSuspend
		, "BusinessUnit", self->data.BusinessUnit 
		, "RequestID", self->data.RequestID
		, "OrderLocalID", self->data.OrderLocalID 
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
		, "OrderSysID", self->data.OrderSysID 
		, "OrderSource", self->data.OrderSource
		, "OrderStatus", self->data.OrderStatus
		, "OrderType", self->data.OrderType
		, "VolumeTraded", self->data.VolumeTraded
		, "VolumeTotal", self->data.VolumeTotal
		, "InsertDate", self->data.InsertDate 
		, "InsertTime", self->data.InsertTime 
		, "ActiveTime", self->data.ActiveTime 
		, "SuspendTime", self->data.SuspendTime 
		, "UpdateTime", self->data.UpdateTime 
		, "CancelTime", self->data.CancelTime 
		, "ActiveTraderID", self->data.ActiveTraderID 
		, "ClearingPartID", self->data.ClearingPartID 
		, "SequenceNo", self->data.SequenceNo
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "UserProductInfo", self->data.UserProductInfo 
		, "StatusMsg", self->data.StatusMsg 
		, "UserForceClose", self->data.UserForceClose
		, "ActiveUserID", self->data.ActiveUserID 
		, "BrokerOrderSeq", self->data.BrokerOrderSeq
		, "RelativeOrderSysID", self->data.RelativeOrderSysID 
		, "ZCETotalTradedVolume", self->data.ZCETotalTradedVolume
		, "IsSwapOrder", self->data.IsSwapOrder
		, "BranchID", self->data.BranchID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 
		, "reserve3", self->data.reserve3 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "IPAddress", self->data.IPAddress 
		, "OrderMemo", self->data.OrderMemo 
		, "SessionReqSeq", self->data.SessionReqSeq


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcOrderField_get_BrokerID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcOrderField_get_InvestorID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcOrderField_get_reserve1(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcOrderField_get_OrderRef(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderRef);
}

static PyObject *PyCThostFtdcOrderField_get_UserID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcOrderField_get_OrderPriceType(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderPriceType), 1);
}

static PyObject *PyCThostFtdcOrderField_get_Direction(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcOrderField_get_CombOffsetFlag(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombOffsetFlag);
}

static PyObject *PyCThostFtdcOrderField_get_CombHedgeFlag(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombHedgeFlag);
}

static PyObject *PyCThostFtdcOrderField_get_LimitPrice(PyCThostFtdcOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LimitPrice);
}

static PyObject *PyCThostFtdcOrderField_get_VolumeTotalOriginal(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTotalOriginal);
#else 
	return PyInt_FromLong(self->data.VolumeTotalOriginal);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_TimeCondition(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

static PyObject *PyCThostFtdcOrderField_get_GTDDate(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.GTDDate);
}

static PyObject *PyCThostFtdcOrderField_get_VolumeCondition(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VolumeCondition), 1);
}

static PyObject *PyCThostFtdcOrderField_get_MinVolume(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MinVolume);
#else 
	return PyInt_FromLong(self->data.MinVolume);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_ContingentCondition(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ContingentCondition), 1);
}

static PyObject *PyCThostFtdcOrderField_get_StopPrice(PyCThostFtdcOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StopPrice);
}

static PyObject *PyCThostFtdcOrderField_get_ForceCloseReason(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ForceCloseReason), 1);
}

static PyObject *PyCThostFtdcOrderField_get_IsAutoSuspend(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsAutoSuspend);
#else 
	return PyInt_FromLong(self->data.IsAutoSuspend);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_BusinessUnit(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcOrderField_get_RequestID(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_OrderLocalID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderLocalID);
}

static PyObject *PyCThostFtdcOrderField_get_ExchangeID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcOrderField_get_ParticipantID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcOrderField_get_ClientID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcOrderField_get_reserve2(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcOrderField_get_TraderID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcOrderField_get_InstallID(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_OrderSubmitStatus(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

static PyObject *PyCThostFtdcOrderField_get_NotifySequence(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.NotifySequence);
#else 
	return PyInt_FromLong(self->data.NotifySequence);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_TradingDay(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcOrderField_get_SettlementID(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_OrderSysID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcOrderField_get_OrderSource(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSource), 1);
}

static PyObject *PyCThostFtdcOrderField_get_OrderStatus(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderStatus), 1);
}

static PyObject *PyCThostFtdcOrderField_get_OrderType(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderType), 1);
}

static PyObject *PyCThostFtdcOrderField_get_VolumeTraded(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTraded);
#else 
	return PyInt_FromLong(self->data.VolumeTraded);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_VolumeTotal(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTotal);
#else 
	return PyInt_FromLong(self->data.VolumeTotal);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_InsertDate(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcOrderField_get_InsertTime(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcOrderField_get_ActiveTime(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveTime);
}

static PyObject *PyCThostFtdcOrderField_get_SuspendTime(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.SuspendTime);
}

static PyObject *PyCThostFtdcOrderField_get_UpdateTime(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UpdateTime);
}

static PyObject *PyCThostFtdcOrderField_get_CancelTime(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CancelTime);
}

static PyObject *PyCThostFtdcOrderField_get_ActiveTraderID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveTraderID);
}

static PyObject *PyCThostFtdcOrderField_get_ClearingPartID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClearingPartID);
}

static PyObject *PyCThostFtdcOrderField_get_SequenceNo(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_FrontID(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_SessionID(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_UserProductInfo(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcOrderField_get_StatusMsg(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcOrderField_get_UserForceClose(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.UserForceClose);
#else 
	return PyInt_FromLong(self->data.UserForceClose);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_ActiveUserID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveUserID);
}

static PyObject *PyCThostFtdcOrderField_get_BrokerOrderSeq(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BrokerOrderSeq);
#else 
	return PyInt_FromLong(self->data.BrokerOrderSeq);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_RelativeOrderSysID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.RelativeOrderSysID);
}

static PyObject *PyCThostFtdcOrderField_get_ZCETotalTradedVolume(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ZCETotalTradedVolume);
#else 
	return PyInt_FromLong(self->data.ZCETotalTradedVolume);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_IsSwapOrder(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsSwapOrder);
#else 
	return PyInt_FromLong(self->data.IsSwapOrder);
#endif 
}

static PyObject *PyCThostFtdcOrderField_get_BranchID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcOrderField_get_InvestUnitID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcOrderField_get_AccountID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcOrderField_get_CurrencyID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcOrderField_get_reserve3(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve3);
}

static PyObject *PyCThostFtdcOrderField_get_MacAddress(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcOrderField_get_InstrumentID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcOrderField_get_ExchangeInstID(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcOrderField_get_IPAddress(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcOrderField_get_OrderMemo(PyCThostFtdcOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderMemo);
}

static PyObject *PyCThostFtdcOrderField_get_SessionReqSeq(PyCThostFtdcOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionReqSeq);
#else 
	return PyInt_FromLong(self->data.SessionReqSeq);
#endif 
}

static int PyCThostFtdcOrderField_set_BrokerID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_InvestorID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_reserve1(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_OrderRef(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_UserID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_OrderPriceType(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderPriceType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderPriceType)) {
		PyErr_SetString(PyExc_ValueError, "OrderPriceType must be less than 1 bytes");
		return -1;
	}
	self->data.OrderPriceType = *buf;
	return 0;
}

static int PyCThostFtdcOrderField_set_Direction(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
		PyErr_SetString(PyExc_ValueError, "Direction must be less than 1 bytes");
		return -1;
	}
	self->data.Direction = *buf;
	return 0;
}

static int PyCThostFtdcOrderField_set_CombOffsetFlag(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombOffsetFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
		PyErr_SetString(PyExc_ValueError, "CombOffsetFlag must be less than 5 bytes");
		return -1;
	}
	strncpy(self->data.CombOffsetFlag, buf, sizeof(self->data.CombOffsetFlag));
	return 0;
}

static int PyCThostFtdcOrderField_set_CombHedgeFlag(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 5 bytes");
		return -1;
	}
	strncpy(self->data.CombHedgeFlag, buf, sizeof(self->data.CombHedgeFlag));
	return 0;
}

static int PyCThostFtdcOrderField_set_LimitPrice(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_VolumeTotalOriginal(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeTotalOriginal Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "VolumeTotalOriginal Expected int"); 
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
    self->data.VolumeTotalOriginal = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOrderField_set_TimeCondition(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_GTDDate(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "GTDDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
		PyErr_SetString(PyExc_ValueError, "GTDDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.GTDDate, buf, sizeof(self->data.GTDDate));
	return 0;
}

static int PyCThostFtdcOrderField_set_VolumeCondition(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "VolumeCondition Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.VolumeCondition)) {
		PyErr_SetString(PyExc_ValueError, "VolumeCondition must be less than 1 bytes");
		return -1;
	}
	self->data.VolumeCondition = *buf;
	return 0;
}

static int PyCThostFtdcOrderField_set_MinVolume(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MinVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "MinVolume Expected int"); 
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
    self->data.MinVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOrderField_set_ContingentCondition(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ContingentCondition Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ContingentCondition)) {
		PyErr_SetString(PyExc_ValueError, "ContingentCondition must be less than 1 bytes");
		return -1;
	}
	self->data.ContingentCondition = *buf;
	return 0;
}

static int PyCThostFtdcOrderField_set_StopPrice(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StopPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StopPrice = buf;
    return 0;
}

static int PyCThostFtdcOrderField_set_ForceCloseReason(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ForceCloseReason Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ForceCloseReason)) {
		PyErr_SetString(PyExc_ValueError, "ForceCloseReason must be less than 1 bytes");
		return -1;
	}
	self->data.ForceCloseReason = *buf;
	return 0;
}

static int PyCThostFtdcOrderField_set_IsAutoSuspend(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsAutoSuspend Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsAutoSuspend Expected int"); 
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
    self->data.IsAutoSuspend = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOrderField_set_BusinessUnit(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_RequestID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_OrderLocalID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_ExchangeID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_ParticipantID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_ClientID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_reserve2(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_TraderID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_InstallID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_OrderSubmitStatus(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_NotifySequence(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_TradingDay(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_SettlementID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_OrderSysID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_OrderSource(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderSource Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderSource)) {
		PyErr_SetString(PyExc_ValueError, "OrderSource must be less than 1 bytes");
		return -1;
	}
	self->data.OrderSource = *buf;
	return 0;
}

static int PyCThostFtdcOrderField_set_OrderStatus(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderStatus)) {
		PyErr_SetString(PyExc_ValueError, "OrderStatus must be less than 1 bytes");
		return -1;
	}
	self->data.OrderStatus = *buf;
	return 0;
}

static int PyCThostFtdcOrderField_set_OrderType(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderType)) {
		PyErr_SetString(PyExc_ValueError, "OrderType must be less than 1 bytes");
		return -1;
	}
	self->data.OrderType = *buf;
	return 0;
}

static int PyCThostFtdcOrderField_set_VolumeTraded(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeTraded Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "VolumeTraded Expected int"); 
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
    self->data.VolumeTraded = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOrderField_set_VolumeTotal(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeTotal Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "VolumeTotal Expected int"); 
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
    self->data.VolumeTotal = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOrderField_set_InsertDate(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_InsertTime(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_ActiveTime(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActiveTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActiveTime)) {
		PyErr_SetString(PyExc_ValueError, "ActiveTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ActiveTime, buf, sizeof(self->data.ActiveTime));
	return 0;
}

static int PyCThostFtdcOrderField_set_SuspendTime(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SuspendTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SuspendTime)) {
		PyErr_SetString(PyExc_ValueError, "SuspendTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.SuspendTime, buf, sizeof(self->data.SuspendTime));
	return 0;
}

static int PyCThostFtdcOrderField_set_UpdateTime(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
		PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.UpdateTime, buf, sizeof(self->data.UpdateTime));
	return 0;
}

static int PyCThostFtdcOrderField_set_CancelTime(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_ActiveTraderID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActiveTraderID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActiveTraderID)) {
		PyErr_SetString(PyExc_ValueError, "ActiveTraderID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ActiveTraderID, buf, sizeof(self->data.ActiveTraderID));
	return 0;
}

static int PyCThostFtdcOrderField_set_ClearingPartID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_SequenceNo(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_FrontID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_SessionID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_UserProductInfo(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_StatusMsg(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_UserForceClose(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserForceClose Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "UserForceClose Expected int"); 
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
    self->data.UserForceClose = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOrderField_set_ActiveUserID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_BrokerOrderSeq(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerOrderSeq Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BrokerOrderSeq Expected int"); 
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
    self->data.BrokerOrderSeq = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOrderField_set_RelativeOrderSysID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "RelativeOrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.RelativeOrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "RelativeOrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.RelativeOrderSysID, buf, sizeof(self->data.RelativeOrderSysID));
	return 0;
}

static int PyCThostFtdcOrderField_set_ZCETotalTradedVolume(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ZCETotalTradedVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ZCETotalTradedVolume Expected int"); 
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
    self->data.ZCETotalTradedVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOrderField_set_IsSwapOrder(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSwapOrder Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsSwapOrder Expected int"); 
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
    self->data.IsSwapOrder = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOrderField_set_BranchID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_InvestUnitID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_AccountID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_CurrencyID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_reserve3(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_MacAddress(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_InstrumentID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_ExchangeInstID(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_IPAddress(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_OrderMemo(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOrderField_set_SessionReqSeq(PyCThostFtdcOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcOrderField_get_BrokerID, (setter)PyCThostFtdcOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcOrderField_get_InvestorID, (setter)PyCThostFtdcOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcOrderField_get_reserve1, (setter)PyCThostFtdcOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"OrderRef", (getter)PyCThostFtdcOrderField_get_OrderRef, (setter)PyCThostFtdcOrderField_set_OrderRef, (char *)"OrderRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcOrderField_get_UserID, (setter)PyCThostFtdcOrderField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"OrderPriceType", (getter)PyCThostFtdcOrderField_get_OrderPriceType, (setter)PyCThostFtdcOrderField_set_OrderPriceType, (char *)"OrderPriceType", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcOrderField_get_Direction, (setter)PyCThostFtdcOrderField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"CombOffsetFlag", (getter)PyCThostFtdcOrderField_get_CombOffsetFlag, (setter)PyCThostFtdcOrderField_set_CombOffsetFlag, (char *)"CombOffsetFlag", NULL},
	 {(char *)"CombHedgeFlag", (getter)PyCThostFtdcOrderField_get_CombHedgeFlag, (setter)PyCThostFtdcOrderField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
	 {(char *)"LimitPrice", (getter)PyCThostFtdcOrderField_get_LimitPrice, (setter)PyCThostFtdcOrderField_set_LimitPrice, (char *)"LimitPrice", NULL},
	 {(char *)"VolumeTotalOriginal", (getter)PyCThostFtdcOrderField_get_VolumeTotalOriginal, (setter)PyCThostFtdcOrderField_set_VolumeTotalOriginal, (char *)"VolumeTotalOriginal", NULL},
	 {(char *)"TimeCondition", (getter)PyCThostFtdcOrderField_get_TimeCondition, (setter)PyCThostFtdcOrderField_set_TimeCondition, (char *)"TimeCondition", NULL},
	 {(char *)"GTDDate", (getter)PyCThostFtdcOrderField_get_GTDDate, (setter)PyCThostFtdcOrderField_set_GTDDate, (char *)"GTDDate", NULL},
	 {(char *)"VolumeCondition", (getter)PyCThostFtdcOrderField_get_VolumeCondition, (setter)PyCThostFtdcOrderField_set_VolumeCondition, (char *)"VolumeCondition", NULL},
	 {(char *)"MinVolume", (getter)PyCThostFtdcOrderField_get_MinVolume, (setter)PyCThostFtdcOrderField_set_MinVolume, (char *)"MinVolume", NULL},
	 {(char *)"ContingentCondition", (getter)PyCThostFtdcOrderField_get_ContingentCondition, (setter)PyCThostFtdcOrderField_set_ContingentCondition, (char *)"ContingentCondition", NULL},
	 {(char *)"StopPrice", (getter)PyCThostFtdcOrderField_get_StopPrice, (setter)PyCThostFtdcOrderField_set_StopPrice, (char *)"StopPrice", NULL},
	 {(char *)"ForceCloseReason", (getter)PyCThostFtdcOrderField_get_ForceCloseReason, (setter)PyCThostFtdcOrderField_set_ForceCloseReason, (char *)"ForceCloseReason", NULL},
	 {(char *)"IsAutoSuspend", (getter)PyCThostFtdcOrderField_get_IsAutoSuspend, (setter)PyCThostFtdcOrderField_set_IsAutoSuspend, (char *)"IsAutoSuspend", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcOrderField_get_BusinessUnit, (setter)PyCThostFtdcOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcOrderField_get_RequestID, (setter)PyCThostFtdcOrderField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"OrderLocalID", (getter)PyCThostFtdcOrderField_get_OrderLocalID, (setter)PyCThostFtdcOrderField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcOrderField_get_ExchangeID, (setter)PyCThostFtdcOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcOrderField_get_ParticipantID, (setter)PyCThostFtdcOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcOrderField_get_ClientID, (setter)PyCThostFtdcOrderField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcOrderField_get_reserve2, (setter)PyCThostFtdcOrderField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcOrderField_get_TraderID, (setter)PyCThostFtdcOrderField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcOrderField_get_InstallID, (setter)PyCThostFtdcOrderField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcOrderField_get_OrderSubmitStatus, (setter)PyCThostFtdcOrderField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
	 {(char *)"NotifySequence", (getter)PyCThostFtdcOrderField_get_NotifySequence, (setter)PyCThostFtdcOrderField_set_NotifySequence, (char *)"NotifySequence", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcOrderField_get_TradingDay, (setter)PyCThostFtdcOrderField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcOrderField_get_SettlementID, (setter)PyCThostFtdcOrderField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcOrderField_get_OrderSysID, (setter)PyCThostFtdcOrderField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"OrderSource", (getter)PyCThostFtdcOrderField_get_OrderSource, (setter)PyCThostFtdcOrderField_set_OrderSource, (char *)"OrderSource", NULL},
	 {(char *)"OrderStatus", (getter)PyCThostFtdcOrderField_get_OrderStatus, (setter)PyCThostFtdcOrderField_set_OrderStatus, (char *)"OrderStatus", NULL},
	 {(char *)"OrderType", (getter)PyCThostFtdcOrderField_get_OrderType, (setter)PyCThostFtdcOrderField_set_OrderType, (char *)"OrderType", NULL},
	 {(char *)"VolumeTraded", (getter)PyCThostFtdcOrderField_get_VolumeTraded, (setter)PyCThostFtdcOrderField_set_VolumeTraded, (char *)"VolumeTraded", NULL},
	 {(char *)"VolumeTotal", (getter)PyCThostFtdcOrderField_get_VolumeTotal, (setter)PyCThostFtdcOrderField_set_VolumeTotal, (char *)"VolumeTotal", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcOrderField_get_InsertDate, (setter)PyCThostFtdcOrderField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcOrderField_get_InsertTime, (setter)PyCThostFtdcOrderField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"ActiveTime", (getter)PyCThostFtdcOrderField_get_ActiveTime, (setter)PyCThostFtdcOrderField_set_ActiveTime, (char *)"ActiveTime", NULL},
	 {(char *)"SuspendTime", (getter)PyCThostFtdcOrderField_get_SuspendTime, (setter)PyCThostFtdcOrderField_set_SuspendTime, (char *)"SuspendTime", NULL},
	 {(char *)"UpdateTime", (getter)PyCThostFtdcOrderField_get_UpdateTime, (setter)PyCThostFtdcOrderField_set_UpdateTime, (char *)"UpdateTime", NULL},
	 {(char *)"CancelTime", (getter)PyCThostFtdcOrderField_get_CancelTime, (setter)PyCThostFtdcOrderField_set_CancelTime, (char *)"CancelTime", NULL},
	 {(char *)"ActiveTraderID", (getter)PyCThostFtdcOrderField_get_ActiveTraderID, (setter)PyCThostFtdcOrderField_set_ActiveTraderID, (char *)"ActiveTraderID", NULL},
	 {(char *)"ClearingPartID", (getter)PyCThostFtdcOrderField_get_ClearingPartID, (setter)PyCThostFtdcOrderField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcOrderField_get_SequenceNo, (setter)PyCThostFtdcOrderField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcOrderField_get_FrontID, (setter)PyCThostFtdcOrderField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcOrderField_get_SessionID, (setter)PyCThostFtdcOrderField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcOrderField_get_UserProductInfo, (setter)PyCThostFtdcOrderField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcOrderField_get_StatusMsg, (setter)PyCThostFtdcOrderField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"UserForceClose", (getter)PyCThostFtdcOrderField_get_UserForceClose, (setter)PyCThostFtdcOrderField_set_UserForceClose, (char *)"UserForceClose", NULL},
	 {(char *)"ActiveUserID", (getter)PyCThostFtdcOrderField_get_ActiveUserID, (setter)PyCThostFtdcOrderField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
	 {(char *)"BrokerOrderSeq", (getter)PyCThostFtdcOrderField_get_BrokerOrderSeq, (setter)PyCThostFtdcOrderField_set_BrokerOrderSeq, (char *)"BrokerOrderSeq", NULL},
	 {(char *)"RelativeOrderSysID", (getter)PyCThostFtdcOrderField_get_RelativeOrderSysID, (setter)PyCThostFtdcOrderField_set_RelativeOrderSysID, (char *)"RelativeOrderSysID", NULL},
	 {(char *)"ZCETotalTradedVolume", (getter)PyCThostFtdcOrderField_get_ZCETotalTradedVolume, (setter)PyCThostFtdcOrderField_set_ZCETotalTradedVolume, (char *)"ZCETotalTradedVolume", NULL},
	 {(char *)"IsSwapOrder", (getter)PyCThostFtdcOrderField_get_IsSwapOrder, (setter)PyCThostFtdcOrderField_set_IsSwapOrder, (char *)"IsSwapOrder", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcOrderField_get_BranchID, (setter)PyCThostFtdcOrderField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcOrderField_get_InvestUnitID, (setter)PyCThostFtdcOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcOrderField_get_AccountID, (setter)PyCThostFtdcOrderField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcOrderField_get_CurrencyID, (setter)PyCThostFtdcOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"reserve3", (getter)PyCThostFtdcOrderField_get_reserve3, (setter)PyCThostFtdcOrderField_set_reserve3, (char *)"reserve3", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcOrderField_get_MacAddress, (setter)PyCThostFtdcOrderField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcOrderField_get_InstrumentID, (setter)PyCThostFtdcOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcOrderField_get_ExchangeInstID, (setter)PyCThostFtdcOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcOrderField_get_IPAddress, (setter)PyCThostFtdcOrderField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"OrderMemo", (getter)PyCThostFtdcOrderField_get_OrderMemo, (setter)PyCThostFtdcOrderField_set_OrderMemo, (char *)"OrderMemo", NULL},
	 {(char *)"SessionReqSeq", (getter)PyCThostFtdcOrderField_get_SessionReqSeq, (setter)PyCThostFtdcOrderField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOrderField",	/* tp_name */
	sizeof(PyCThostFtdcOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOrderField_repr,   /* tp_repr */
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
	"CThostFtdcOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOrderField_new,       /* tp_new */
};

int PyCThostFtdcOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOrderField  */
	if (PyType_Ready(&PyCThostFtdcOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOrderField", (PyObject *)&PyCThostFtdcOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOrderField to module");
        Py_DECREF(&PyCThostFtdcOrderFieldType);
		return -1;
    }

    return 0;
}
