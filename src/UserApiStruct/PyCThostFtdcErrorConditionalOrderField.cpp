
#include "PyCThostFtdcErrorConditionalOrderField.h"



static PyObject *PyCThostFtdcErrorConditionalOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcErrorConditionalOrderField *self = (PyCThostFtdcErrorConditionalOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcErrorConditionalOrderField_init(PyCThostFtdcErrorConditionalOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OrderSysID", "OrderSource", "OrderStatus", "OrderType", "VolumeTraded", "VolumeTotal", "InsertDate", "InsertTime", "ActiveTime", "SuspendTime", "UpdateTime", "CancelTime", "ActiveTraderID", "ClearingPartID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "UserForceClose", "ActiveUserID", "BrokerOrderSeq", "RelativeOrderSysID", "ZCETotalTradedVolume", "ErrorID", "ErrorMsg", "IsSwapOrder", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pErrorConditionalOrderField_BrokerID = NULL;
	Py_ssize_t pErrorConditionalOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pErrorConditionalOrderField_InvestorID = NULL;
	Py_ssize_t pErrorConditionalOrderField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pErrorConditionalOrderField_reserve1 = NULL;
	Py_ssize_t pErrorConditionalOrderField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pErrorConditionalOrderField_OrderRef = NULL;
	Py_ssize_t pErrorConditionalOrderField_OrderRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pErrorConditionalOrderField_UserID = NULL;
	Py_ssize_t pErrorConditionalOrderField_UserID_len = 0;

	//TThostFtdcOrderPriceTypeType char
	char pErrorConditionalOrderField_OrderPriceType = 0;

	//TThostFtdcDirectionType char
	char pErrorConditionalOrderField_Direction = 0;

	//TThostFtdcCombOffsetFlagType char[5]
	const char *pErrorConditionalOrderField_CombOffsetFlag = NULL;
	Py_ssize_t pErrorConditionalOrderField_CombOffsetFlag_len = 0;

	//TThostFtdcCombHedgeFlagType char[5]
	const char *pErrorConditionalOrderField_CombHedgeFlag = NULL;
	Py_ssize_t pErrorConditionalOrderField_CombHedgeFlag_len = 0;

	//TThostFtdcPriceType double
	double pErrorConditionalOrderField_LimitPrice = 0.0;

	//TThostFtdcVolumeType int
	int pErrorConditionalOrderField_VolumeTotalOriginal = 0;

	//TThostFtdcTimeConditionType char
	char pErrorConditionalOrderField_TimeCondition = 0;

	//TThostFtdcDateType char[9]
	const char *pErrorConditionalOrderField_GTDDate = NULL;
	Py_ssize_t pErrorConditionalOrderField_GTDDate_len = 0;

	//TThostFtdcVolumeConditionType char
	char pErrorConditionalOrderField_VolumeCondition = 0;

	//TThostFtdcVolumeType int
	int pErrorConditionalOrderField_MinVolume = 0;

	//TThostFtdcContingentConditionType char
	char pErrorConditionalOrderField_ContingentCondition = 0;

	//TThostFtdcPriceType double
	double pErrorConditionalOrderField_StopPrice = 0.0;

	//TThostFtdcForceCloseReasonType char
	char pErrorConditionalOrderField_ForceCloseReason = 0;

	//TThostFtdcBoolType int
	int pErrorConditionalOrderField_IsAutoSuspend = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pErrorConditionalOrderField_BusinessUnit = NULL;
	Py_ssize_t pErrorConditionalOrderField_BusinessUnit_len = 0;

	//TThostFtdcRequestIDType int
	int pErrorConditionalOrderField_RequestID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pErrorConditionalOrderField_OrderLocalID = NULL;
	Py_ssize_t pErrorConditionalOrderField_OrderLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pErrorConditionalOrderField_ExchangeID = NULL;
	Py_ssize_t pErrorConditionalOrderField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pErrorConditionalOrderField_ParticipantID = NULL;
	Py_ssize_t pErrorConditionalOrderField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pErrorConditionalOrderField_ClientID = NULL;
	Py_ssize_t pErrorConditionalOrderField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pErrorConditionalOrderField_reserve2 = NULL;
	Py_ssize_t pErrorConditionalOrderField_reserve2_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pErrorConditionalOrderField_TraderID = NULL;
	Py_ssize_t pErrorConditionalOrderField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pErrorConditionalOrderField_InstallID = 0;

	//TThostFtdcOrderSubmitStatusType char
	char pErrorConditionalOrderField_OrderSubmitStatus = 0;

	//TThostFtdcSequenceNoType int
	int pErrorConditionalOrderField_NotifySequence = 0;

	//TThostFtdcDateType char[9]
	const char *pErrorConditionalOrderField_TradingDay = NULL;
	Py_ssize_t pErrorConditionalOrderField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pErrorConditionalOrderField_SettlementID = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pErrorConditionalOrderField_OrderSysID = NULL;
	Py_ssize_t pErrorConditionalOrderField_OrderSysID_len = 0;

	//TThostFtdcOrderSourceType char
	char pErrorConditionalOrderField_OrderSource = 0;

	//TThostFtdcOrderStatusType char
	char pErrorConditionalOrderField_OrderStatus = 0;

	//TThostFtdcOrderTypeType char
	char pErrorConditionalOrderField_OrderType = 0;

	//TThostFtdcVolumeType int
	int pErrorConditionalOrderField_VolumeTraded = 0;

	//TThostFtdcVolumeType int
	int pErrorConditionalOrderField_VolumeTotal = 0;

	//TThostFtdcDateType char[9]
	const char *pErrorConditionalOrderField_InsertDate = NULL;
	Py_ssize_t pErrorConditionalOrderField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pErrorConditionalOrderField_InsertTime = NULL;
	Py_ssize_t pErrorConditionalOrderField_InsertTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pErrorConditionalOrderField_ActiveTime = NULL;
	Py_ssize_t pErrorConditionalOrderField_ActiveTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pErrorConditionalOrderField_SuspendTime = NULL;
	Py_ssize_t pErrorConditionalOrderField_SuspendTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pErrorConditionalOrderField_UpdateTime = NULL;
	Py_ssize_t pErrorConditionalOrderField_UpdateTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pErrorConditionalOrderField_CancelTime = NULL;
	Py_ssize_t pErrorConditionalOrderField_CancelTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pErrorConditionalOrderField_ActiveTraderID = NULL;
	Py_ssize_t pErrorConditionalOrderField_ActiveTraderID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pErrorConditionalOrderField_ClearingPartID = NULL;
	Py_ssize_t pErrorConditionalOrderField_ClearingPartID_len = 0;

	//TThostFtdcSequenceNoType int
	int pErrorConditionalOrderField_SequenceNo = 0;

	//TThostFtdcFrontIDType int
	int pErrorConditionalOrderField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pErrorConditionalOrderField_SessionID = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pErrorConditionalOrderField_UserProductInfo = NULL;
	Py_ssize_t pErrorConditionalOrderField_UserProductInfo_len = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pErrorConditionalOrderField_StatusMsg = NULL;
	Py_ssize_t pErrorConditionalOrderField_StatusMsg_len = 0;

	//TThostFtdcBoolType int
	int pErrorConditionalOrderField_UserForceClose = 0;

	//TThostFtdcUserIDType char[16]
	const char *pErrorConditionalOrderField_ActiveUserID = NULL;
	Py_ssize_t pErrorConditionalOrderField_ActiveUserID_len = 0;

	//TThostFtdcSequenceNoType int
	int pErrorConditionalOrderField_BrokerOrderSeq = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pErrorConditionalOrderField_RelativeOrderSysID = NULL;
	Py_ssize_t pErrorConditionalOrderField_RelativeOrderSysID_len = 0;

	//TThostFtdcVolumeType int
	int pErrorConditionalOrderField_ZCETotalTradedVolume = 0;

	//TThostFtdcErrorIDType int
	int pErrorConditionalOrderField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pErrorConditionalOrderField_ErrorMsg = NULL;
	Py_ssize_t pErrorConditionalOrderField_ErrorMsg_len = 0;

	//TThostFtdcBoolType int
	int pErrorConditionalOrderField_IsSwapOrder = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pErrorConditionalOrderField_BranchID = NULL;
	Py_ssize_t pErrorConditionalOrderField_BranchID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pErrorConditionalOrderField_InvestUnitID = NULL;
	Py_ssize_t pErrorConditionalOrderField_InvestUnitID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pErrorConditionalOrderField_AccountID = NULL;
	Py_ssize_t pErrorConditionalOrderField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pErrorConditionalOrderField_CurrencyID = NULL;
	Py_ssize_t pErrorConditionalOrderField_CurrencyID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pErrorConditionalOrderField_reserve3 = NULL;
	Py_ssize_t pErrorConditionalOrderField_reserve3_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pErrorConditionalOrderField_MacAddress = NULL;
	Py_ssize_t pErrorConditionalOrderField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pErrorConditionalOrderField_InstrumentID = NULL;
	Py_ssize_t pErrorConditionalOrderField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pErrorConditionalOrderField_ExchangeInstID = NULL;
	Py_ssize_t pErrorConditionalOrderField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pErrorConditionalOrderField_IPAddress = NULL;
	Py_ssize_t pErrorConditionalOrderField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iy#y#y#y#y#y#iciy#iy#ccciiy#y#y#y#y#y#y#y#iiiy#y#iy#iy#iiy#iy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccs#s#dics#cicdcis#is#s#s#s#s#s#icis#is#ccciis#s#s#s#s#s#s#s#iiis#s#is#is#iis#is#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pErrorConditionalOrderField_BrokerID, &pErrorConditionalOrderField_BrokerID_len
		, &pErrorConditionalOrderField_InvestorID, &pErrorConditionalOrderField_InvestorID_len
		, &pErrorConditionalOrderField_reserve1, &pErrorConditionalOrderField_reserve1_len
		, &pErrorConditionalOrderField_OrderRef, &pErrorConditionalOrderField_OrderRef_len
		, &pErrorConditionalOrderField_UserID, &pErrorConditionalOrderField_UserID_len
		, &pErrorConditionalOrderField_OrderPriceType
		, &pErrorConditionalOrderField_Direction
		, &pErrorConditionalOrderField_CombOffsetFlag, &pErrorConditionalOrderField_CombOffsetFlag_len
		, &pErrorConditionalOrderField_CombHedgeFlag, &pErrorConditionalOrderField_CombHedgeFlag_len
		, &pErrorConditionalOrderField_LimitPrice
		, &pErrorConditionalOrderField_VolumeTotalOriginal
		, &pErrorConditionalOrderField_TimeCondition
		, &pErrorConditionalOrderField_GTDDate, &pErrorConditionalOrderField_GTDDate_len
		, &pErrorConditionalOrderField_VolumeCondition
		, &pErrorConditionalOrderField_MinVolume
		, &pErrorConditionalOrderField_ContingentCondition
		, &pErrorConditionalOrderField_StopPrice
		, &pErrorConditionalOrderField_ForceCloseReason
		, &pErrorConditionalOrderField_IsAutoSuspend
		, &pErrorConditionalOrderField_BusinessUnit, &pErrorConditionalOrderField_BusinessUnit_len
		, &pErrorConditionalOrderField_RequestID
		, &pErrorConditionalOrderField_OrderLocalID, &pErrorConditionalOrderField_OrderLocalID_len
		, &pErrorConditionalOrderField_ExchangeID, &pErrorConditionalOrderField_ExchangeID_len
		, &pErrorConditionalOrderField_ParticipantID, &pErrorConditionalOrderField_ParticipantID_len
		, &pErrorConditionalOrderField_ClientID, &pErrorConditionalOrderField_ClientID_len
		, &pErrorConditionalOrderField_reserve2, &pErrorConditionalOrderField_reserve2_len
		, &pErrorConditionalOrderField_TraderID, &pErrorConditionalOrderField_TraderID_len
		, &pErrorConditionalOrderField_InstallID
		, &pErrorConditionalOrderField_OrderSubmitStatus
		, &pErrorConditionalOrderField_NotifySequence
		, &pErrorConditionalOrderField_TradingDay, &pErrorConditionalOrderField_TradingDay_len
		, &pErrorConditionalOrderField_SettlementID
		, &pErrorConditionalOrderField_OrderSysID, &pErrorConditionalOrderField_OrderSysID_len
		, &pErrorConditionalOrderField_OrderSource
		, &pErrorConditionalOrderField_OrderStatus
		, &pErrorConditionalOrderField_OrderType
		, &pErrorConditionalOrderField_VolumeTraded
		, &pErrorConditionalOrderField_VolumeTotal
		, &pErrorConditionalOrderField_InsertDate, &pErrorConditionalOrderField_InsertDate_len
		, &pErrorConditionalOrderField_InsertTime, &pErrorConditionalOrderField_InsertTime_len
		, &pErrorConditionalOrderField_ActiveTime, &pErrorConditionalOrderField_ActiveTime_len
		, &pErrorConditionalOrderField_SuspendTime, &pErrorConditionalOrderField_SuspendTime_len
		, &pErrorConditionalOrderField_UpdateTime, &pErrorConditionalOrderField_UpdateTime_len
		, &pErrorConditionalOrderField_CancelTime, &pErrorConditionalOrderField_CancelTime_len
		, &pErrorConditionalOrderField_ActiveTraderID, &pErrorConditionalOrderField_ActiveTraderID_len
		, &pErrorConditionalOrderField_ClearingPartID, &pErrorConditionalOrderField_ClearingPartID_len
		, &pErrorConditionalOrderField_SequenceNo
		, &pErrorConditionalOrderField_FrontID
		, &pErrorConditionalOrderField_SessionID
		, &pErrorConditionalOrderField_UserProductInfo, &pErrorConditionalOrderField_UserProductInfo_len
		, &pErrorConditionalOrderField_StatusMsg, &pErrorConditionalOrderField_StatusMsg_len
		, &pErrorConditionalOrderField_UserForceClose
		, &pErrorConditionalOrderField_ActiveUserID, &pErrorConditionalOrderField_ActiveUserID_len
		, &pErrorConditionalOrderField_BrokerOrderSeq
		, &pErrorConditionalOrderField_RelativeOrderSysID, &pErrorConditionalOrderField_RelativeOrderSysID_len
		, &pErrorConditionalOrderField_ZCETotalTradedVolume
		, &pErrorConditionalOrderField_ErrorID
		, &pErrorConditionalOrderField_ErrorMsg, &pErrorConditionalOrderField_ErrorMsg_len
		, &pErrorConditionalOrderField_IsSwapOrder
		, &pErrorConditionalOrderField_BranchID, &pErrorConditionalOrderField_BranchID_len
		, &pErrorConditionalOrderField_InvestUnitID, &pErrorConditionalOrderField_InvestUnitID_len
		, &pErrorConditionalOrderField_AccountID, &pErrorConditionalOrderField_AccountID_len
		, &pErrorConditionalOrderField_CurrencyID, &pErrorConditionalOrderField_CurrencyID_len
		, &pErrorConditionalOrderField_reserve3, &pErrorConditionalOrderField_reserve3_len
		, &pErrorConditionalOrderField_MacAddress, &pErrorConditionalOrderField_MacAddress_len
		, &pErrorConditionalOrderField_InstrumentID, &pErrorConditionalOrderField_InstrumentID_len
		, &pErrorConditionalOrderField_ExchangeInstID, &pErrorConditionalOrderField_ExchangeInstID_len
		, &pErrorConditionalOrderField_IPAddress, &pErrorConditionalOrderField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pErrorConditionalOrderField_BrokerID != NULL) {
		if(pErrorConditionalOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pErrorConditionalOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pErrorConditionalOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pErrorConditionalOrderField_InvestorID != NULL) {
		if(pErrorConditionalOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pErrorConditionalOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pErrorConditionalOrderField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pErrorConditionalOrderField_reserve1 != NULL) {
		if(pErrorConditionalOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pErrorConditionalOrderField_reserve1, sizeof(self->data.reserve1) );
		pErrorConditionalOrderField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pErrorConditionalOrderField_OrderRef != NULL) {
		if(pErrorConditionalOrderField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
			PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
			return -1;
		}
		strncpy(self->data.OrderRef, pErrorConditionalOrderField_OrderRef, sizeof(self->data.OrderRef) );
		pErrorConditionalOrderField_OrderRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pErrorConditionalOrderField_UserID != NULL) {
		if(pErrorConditionalOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pErrorConditionalOrderField_UserID, sizeof(self->data.UserID) );
		pErrorConditionalOrderField_UserID = NULL;
	}

	//TThostFtdcOrderPriceTypeType char
	self->data.OrderPriceType = pErrorConditionalOrderField_OrderPriceType;

	//TThostFtdcDirectionType char
	self->data.Direction = pErrorConditionalOrderField_Direction;

	//TThostFtdcCombOffsetFlagType char[5]
	if(pErrorConditionalOrderField_CombOffsetFlag != NULL) {
		if(pErrorConditionalOrderField_CombOffsetFlag_len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
			PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_CombOffsetFlag_len, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
			return -1;
		}
		strncpy(self->data.CombOffsetFlag, pErrorConditionalOrderField_CombOffsetFlag, sizeof(self->data.CombOffsetFlag) );
		pErrorConditionalOrderField_CombOffsetFlag = NULL;
	}

	//TThostFtdcCombHedgeFlagType char[5]
	if(pErrorConditionalOrderField_CombHedgeFlag != NULL) {
		if(pErrorConditionalOrderField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
			PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
			return -1;
		}
		strncpy(self->data.CombHedgeFlag, pErrorConditionalOrderField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
		pErrorConditionalOrderField_CombHedgeFlag = NULL;
	}

	//TThostFtdcPriceType double
	self->data.LimitPrice = pErrorConditionalOrderField_LimitPrice;
	//TThostFtdcVolumeType int
	self->data.VolumeTotalOriginal = pErrorConditionalOrderField_VolumeTotalOriginal;

	//TThostFtdcTimeConditionType char
	self->data.TimeCondition = pErrorConditionalOrderField_TimeCondition;

	//TThostFtdcDateType char[9]
	if(pErrorConditionalOrderField_GTDDate != NULL) {
		if(pErrorConditionalOrderField_GTDDate_len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
			PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_GTDDate_len, (Py_ssize_t)sizeof(self->data.GTDDate));
			return -1;
		}
		strncpy(self->data.GTDDate, pErrorConditionalOrderField_GTDDate, sizeof(self->data.GTDDate) );
		pErrorConditionalOrderField_GTDDate = NULL;
	}

	//TThostFtdcVolumeConditionType char
	self->data.VolumeCondition = pErrorConditionalOrderField_VolumeCondition;

	//TThostFtdcVolumeType int
	self->data.MinVolume = pErrorConditionalOrderField_MinVolume;

	//TThostFtdcContingentConditionType char
	self->data.ContingentCondition = pErrorConditionalOrderField_ContingentCondition;

	//TThostFtdcPriceType double
	self->data.StopPrice = pErrorConditionalOrderField_StopPrice;
	//TThostFtdcForceCloseReasonType char
	self->data.ForceCloseReason = pErrorConditionalOrderField_ForceCloseReason;

	//TThostFtdcBoolType int
	self->data.IsAutoSuspend = pErrorConditionalOrderField_IsAutoSuspend;

	//TThostFtdcBusinessUnitType char[21]
	if(pErrorConditionalOrderField_BusinessUnit != NULL) {
		if(pErrorConditionalOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pErrorConditionalOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pErrorConditionalOrderField_BusinessUnit = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pErrorConditionalOrderField_RequestID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pErrorConditionalOrderField_OrderLocalID != NULL) {
		if(pErrorConditionalOrderField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
			return -1;
		}
		strncpy(self->data.OrderLocalID, pErrorConditionalOrderField_OrderLocalID, sizeof(self->data.OrderLocalID) );
		pErrorConditionalOrderField_OrderLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pErrorConditionalOrderField_ExchangeID != NULL) {
		if(pErrorConditionalOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pErrorConditionalOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pErrorConditionalOrderField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pErrorConditionalOrderField_ParticipantID != NULL) {
		if(pErrorConditionalOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pErrorConditionalOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
		pErrorConditionalOrderField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pErrorConditionalOrderField_ClientID != NULL) {
		if(pErrorConditionalOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pErrorConditionalOrderField_ClientID, sizeof(self->data.ClientID) );
		pErrorConditionalOrderField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pErrorConditionalOrderField_reserve2 != NULL) {
		if(pErrorConditionalOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pErrorConditionalOrderField_reserve2, sizeof(self->data.reserve2) );
		pErrorConditionalOrderField_reserve2 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pErrorConditionalOrderField_TraderID != NULL) {
		if(pErrorConditionalOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pErrorConditionalOrderField_TraderID, sizeof(self->data.TraderID) );
		pErrorConditionalOrderField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pErrorConditionalOrderField_InstallID;

	//TThostFtdcOrderSubmitStatusType char
	self->data.OrderSubmitStatus = pErrorConditionalOrderField_OrderSubmitStatus;

	//TThostFtdcSequenceNoType int
	self->data.NotifySequence = pErrorConditionalOrderField_NotifySequence;

	//TThostFtdcDateType char[9]
	if(pErrorConditionalOrderField_TradingDay != NULL) {
		if(pErrorConditionalOrderField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pErrorConditionalOrderField_TradingDay, sizeof(self->data.TradingDay) );
		pErrorConditionalOrderField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pErrorConditionalOrderField_SettlementID;

	//TThostFtdcOrderSysIDType char[21]
	if(pErrorConditionalOrderField_OrderSysID != NULL) {
		if(pErrorConditionalOrderField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pErrorConditionalOrderField_OrderSysID, sizeof(self->data.OrderSysID) );
		pErrorConditionalOrderField_OrderSysID = NULL;
	}

	//TThostFtdcOrderSourceType char
	self->data.OrderSource = pErrorConditionalOrderField_OrderSource;

	//TThostFtdcOrderStatusType char
	self->data.OrderStatus = pErrorConditionalOrderField_OrderStatus;

	//TThostFtdcOrderTypeType char
	self->data.OrderType = pErrorConditionalOrderField_OrderType;

	//TThostFtdcVolumeType int
	self->data.VolumeTraded = pErrorConditionalOrderField_VolumeTraded;

	//TThostFtdcVolumeType int
	self->data.VolumeTotal = pErrorConditionalOrderField_VolumeTotal;

	//TThostFtdcDateType char[9]
	if(pErrorConditionalOrderField_InsertDate != NULL) {
		if(pErrorConditionalOrderField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pErrorConditionalOrderField_InsertDate, sizeof(self->data.InsertDate) );
		pErrorConditionalOrderField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pErrorConditionalOrderField_InsertTime != NULL) {
		if(pErrorConditionalOrderField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pErrorConditionalOrderField_InsertTime, sizeof(self->data.InsertTime) );
		pErrorConditionalOrderField_InsertTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pErrorConditionalOrderField_ActiveTime != NULL) {
		if(pErrorConditionalOrderField_ActiveTime_len > (Py_ssize_t)sizeof(self->data.ActiveTime)) {
			PyErr_Format(PyExc_ValueError, "ActiveTime too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_ActiveTime_len, (Py_ssize_t)sizeof(self->data.ActiveTime));
			return -1;
		}
		strncpy(self->data.ActiveTime, pErrorConditionalOrderField_ActiveTime, sizeof(self->data.ActiveTime) );
		pErrorConditionalOrderField_ActiveTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pErrorConditionalOrderField_SuspendTime != NULL) {
		if(pErrorConditionalOrderField_SuspendTime_len > (Py_ssize_t)sizeof(self->data.SuspendTime)) {
			PyErr_Format(PyExc_ValueError, "SuspendTime too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_SuspendTime_len, (Py_ssize_t)sizeof(self->data.SuspendTime));
			return -1;
		}
		strncpy(self->data.SuspendTime, pErrorConditionalOrderField_SuspendTime, sizeof(self->data.SuspendTime) );
		pErrorConditionalOrderField_SuspendTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pErrorConditionalOrderField_UpdateTime != NULL) {
		if(pErrorConditionalOrderField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
			PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
			return -1;
		}
		strncpy(self->data.UpdateTime, pErrorConditionalOrderField_UpdateTime, sizeof(self->data.UpdateTime) );
		pErrorConditionalOrderField_UpdateTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pErrorConditionalOrderField_CancelTime != NULL) {
		if(pErrorConditionalOrderField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
			PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
			return -1;
		}
		strncpy(self->data.CancelTime, pErrorConditionalOrderField_CancelTime, sizeof(self->data.CancelTime) );
		pErrorConditionalOrderField_CancelTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pErrorConditionalOrderField_ActiveTraderID != NULL) {
		if(pErrorConditionalOrderField_ActiveTraderID_len > (Py_ssize_t)sizeof(self->data.ActiveTraderID)) {
			PyErr_Format(PyExc_ValueError, "ActiveTraderID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_ActiveTraderID_len, (Py_ssize_t)sizeof(self->data.ActiveTraderID));
			return -1;
		}
		strncpy(self->data.ActiveTraderID, pErrorConditionalOrderField_ActiveTraderID, sizeof(self->data.ActiveTraderID) );
		pErrorConditionalOrderField_ActiveTraderID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pErrorConditionalOrderField_ClearingPartID != NULL) {
		if(pErrorConditionalOrderField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
			PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
			return -1;
		}
		strncpy(self->data.ClearingPartID, pErrorConditionalOrderField_ClearingPartID, sizeof(self->data.ClearingPartID) );
		pErrorConditionalOrderField_ClearingPartID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pErrorConditionalOrderField_SequenceNo;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pErrorConditionalOrderField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pErrorConditionalOrderField_SessionID;

	//TThostFtdcProductInfoType char[11]
	if(pErrorConditionalOrderField_UserProductInfo != NULL) {
		if(pErrorConditionalOrderField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pErrorConditionalOrderField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pErrorConditionalOrderField_UserProductInfo = NULL;
	}

	//TThostFtdcErrorMsgType char[81]
	if(pErrorConditionalOrderField_StatusMsg != NULL) {
		if(pErrorConditionalOrderField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pErrorConditionalOrderField_StatusMsg, sizeof(self->data.StatusMsg) );
		pErrorConditionalOrderField_StatusMsg = NULL;
	}

	//TThostFtdcBoolType int
	self->data.UserForceClose = pErrorConditionalOrderField_UserForceClose;

	//TThostFtdcUserIDType char[16]
	if(pErrorConditionalOrderField_ActiveUserID != NULL) {
		if(pErrorConditionalOrderField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
			PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
			return -1;
		}
		strncpy(self->data.ActiveUserID, pErrorConditionalOrderField_ActiveUserID, sizeof(self->data.ActiveUserID) );
		pErrorConditionalOrderField_ActiveUserID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.BrokerOrderSeq = pErrorConditionalOrderField_BrokerOrderSeq;

	//TThostFtdcOrderSysIDType char[21]
	if(pErrorConditionalOrderField_RelativeOrderSysID != NULL) {
		if(pErrorConditionalOrderField_RelativeOrderSysID_len > (Py_ssize_t)sizeof(self->data.RelativeOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "RelativeOrderSysID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_RelativeOrderSysID_len, (Py_ssize_t)sizeof(self->data.RelativeOrderSysID));
			return -1;
		}
		strncpy(self->data.RelativeOrderSysID, pErrorConditionalOrderField_RelativeOrderSysID, sizeof(self->data.RelativeOrderSysID) );
		pErrorConditionalOrderField_RelativeOrderSysID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.ZCETotalTradedVolume = pErrorConditionalOrderField_ZCETotalTradedVolume;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pErrorConditionalOrderField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pErrorConditionalOrderField_ErrorMsg != NULL) {
		if(pErrorConditionalOrderField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pErrorConditionalOrderField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pErrorConditionalOrderField_ErrorMsg = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsSwapOrder = pErrorConditionalOrderField_IsSwapOrder;

	//TThostFtdcBranchIDType char[9]
	if(pErrorConditionalOrderField_BranchID != NULL) {
		if(pErrorConditionalOrderField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pErrorConditionalOrderField_BranchID, sizeof(self->data.BranchID) );
		pErrorConditionalOrderField_BranchID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pErrorConditionalOrderField_InvestUnitID != NULL) {
		if(pErrorConditionalOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pErrorConditionalOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pErrorConditionalOrderField_InvestUnitID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pErrorConditionalOrderField_AccountID != NULL) {
		if(pErrorConditionalOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pErrorConditionalOrderField_AccountID, sizeof(self->data.AccountID) );
		pErrorConditionalOrderField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pErrorConditionalOrderField_CurrencyID != NULL) {
		if(pErrorConditionalOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pErrorConditionalOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
		pErrorConditionalOrderField_CurrencyID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pErrorConditionalOrderField_reserve3 != NULL) {
		if(pErrorConditionalOrderField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
			PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
			return -1;
		}
		strncpy(self->data.reserve3, pErrorConditionalOrderField_reserve3, sizeof(self->data.reserve3) );
		pErrorConditionalOrderField_reserve3 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pErrorConditionalOrderField_MacAddress != NULL) {
		if(pErrorConditionalOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pErrorConditionalOrderField_MacAddress, sizeof(self->data.MacAddress) );
		pErrorConditionalOrderField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pErrorConditionalOrderField_InstrumentID != NULL) {
		if(pErrorConditionalOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pErrorConditionalOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
		pErrorConditionalOrderField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pErrorConditionalOrderField_ExchangeInstID != NULL) {
		if(pErrorConditionalOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pErrorConditionalOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pErrorConditionalOrderField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pErrorConditionalOrderField_IPAddress != NULL) {
		if(pErrorConditionalOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pErrorConditionalOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pErrorConditionalOrderField_IPAddress, sizeof(self->data.IPAddress) );
		pErrorConditionalOrderField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcErrorConditionalOrderField_dealloc(PyCThostFtdcErrorConditionalOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_repr(PyCThostFtdcErrorConditionalOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:c,s:c,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y,s:y,s:i,s:y,s:i,s:y,s:i,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:s,s:s,s:d,s:i,s:c,s:s,s:c,s:i,s:c,s:d,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:c,s:c,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:i,s:s,s:s,s:i,s:s,s:i,s:s,s:i,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
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
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrorConditionalOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_BrokerID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InvestorID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_reserve1(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderRef(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderRef);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_UserID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderPriceType(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderPriceType), 1);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_Direction(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_CombOffsetFlag(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombOffsetFlag);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_CombHedgeFlag(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombHedgeFlag);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_LimitPrice(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LimitPrice);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_VolumeTotalOriginal(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTotalOriginal);
#else 
	return PyInt_FromLong(self->data.VolumeTotalOriginal);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_TimeCondition(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_GTDDate(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.GTDDate);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_VolumeCondition(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VolumeCondition), 1);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_MinVolume(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MinVolume);
#else 
	return PyInt_FromLong(self->data.MinVolume);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ContingentCondition(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ContingentCondition), 1);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_StopPrice(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StopPrice);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ForceCloseReason(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ForceCloseReason), 1);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_IsAutoSuspend(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsAutoSuspend);
#else 
	return PyInt_FromLong(self->data.IsAutoSuspend);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_BusinessUnit(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_RequestID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderLocalID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderLocalID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ExchangeID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ParticipantID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ClientID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_reserve2(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_TraderID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InstallID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderSubmitStatus(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_NotifySequence(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.NotifySequence);
#else 
	return PyInt_FromLong(self->data.NotifySequence);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_TradingDay(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_SettlementID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderSysID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderSource(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSource), 1);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderStatus(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderStatus), 1);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderType(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderType), 1);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_VolumeTraded(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTraded);
#else 
	return PyInt_FromLong(self->data.VolumeTraded);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_VolumeTotal(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTotal);
#else 
	return PyInt_FromLong(self->data.VolumeTotal);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InsertDate(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InsertTime(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ActiveTime(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveTime);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_SuspendTime(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.SuspendTime);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_UpdateTime(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UpdateTime);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_CancelTime(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CancelTime);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ActiveTraderID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveTraderID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ClearingPartID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClearingPartID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_SequenceNo(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_FrontID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_SessionID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_UserProductInfo(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_StatusMsg(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_UserForceClose(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.UserForceClose);
#else 
	return PyInt_FromLong(self->data.UserForceClose);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ActiveUserID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveUserID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_BrokerOrderSeq(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BrokerOrderSeq);
#else 
	return PyInt_FromLong(self->data.BrokerOrderSeq);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_RelativeOrderSysID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.RelativeOrderSysID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ZCETotalTradedVolume(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ZCETotalTradedVolume);
#else 
	return PyInt_FromLong(self->data.ZCETotalTradedVolume);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ErrorID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ErrorMsg(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_IsSwapOrder(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsSwapOrder);
#else 
	return PyInt_FromLong(self->data.IsSwapOrder);
#endif 
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_BranchID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InvestUnitID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_AccountID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_CurrencyID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_reserve3(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve3);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_MacAddress(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InstrumentID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ExchangeInstID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcErrorConditionalOrderField_get_IPAddress(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcErrorConditionalOrderField_set_BrokerID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_InvestorID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_reserve1(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_OrderRef(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_UserID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_OrderPriceType(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_Direction(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_CombOffsetFlag(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_CombHedgeFlag(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_LimitPrice(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_VolumeTotalOriginal(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_TimeCondition(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_GTDDate(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_VolumeCondition(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_MinVolume(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ContingentCondition(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_StopPrice(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ForceCloseReason(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_IsAutoSuspend(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_BusinessUnit(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_RequestID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_OrderLocalID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ExchangeID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ParticipantID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ClientID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_reserve2(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_TraderID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_InstallID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_OrderSubmitStatus(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_NotifySequence(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_TradingDay(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_SettlementID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_OrderSysID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_OrderSource(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_OrderStatus(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_OrderType(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_VolumeTraded(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_VolumeTotal(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_InsertDate(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_InsertTime(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ActiveTime(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_SuspendTime(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_UpdateTime(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_CancelTime(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ActiveTraderID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ClearingPartID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_SequenceNo(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_FrontID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_SessionID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_UserProductInfo(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_StatusMsg(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_UserForceClose(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ActiveUserID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_BrokerOrderSeq(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_RelativeOrderSysID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ZCETotalTradedVolume(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ErrorID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ErrorMsg(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_IsSwapOrder(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_BranchID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_InvestUnitID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_AccountID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_CurrencyID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_reserve3(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_MacAddress(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_InstrumentID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_ExchangeInstID(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrorConditionalOrderField_set_IPAddress(PyCThostFtdcErrorConditionalOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcErrorConditionalOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcErrorConditionalOrderField_get_BrokerID, (setter)PyCThostFtdcErrorConditionalOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcErrorConditionalOrderField_get_InvestorID, (setter)PyCThostFtdcErrorConditionalOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcErrorConditionalOrderField_get_reserve1, (setter)PyCThostFtdcErrorConditionalOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"OrderRef", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderRef, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderRef, (char *)"OrderRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcErrorConditionalOrderField_get_UserID, (setter)PyCThostFtdcErrorConditionalOrderField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"OrderPriceType", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderPriceType, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderPriceType, (char *)"OrderPriceType", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcErrorConditionalOrderField_get_Direction, (setter)PyCThostFtdcErrorConditionalOrderField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"CombOffsetFlag", (getter)PyCThostFtdcErrorConditionalOrderField_get_CombOffsetFlag, (setter)PyCThostFtdcErrorConditionalOrderField_set_CombOffsetFlag, (char *)"CombOffsetFlag", NULL},
	 {(char *)"CombHedgeFlag", (getter)PyCThostFtdcErrorConditionalOrderField_get_CombHedgeFlag, (setter)PyCThostFtdcErrorConditionalOrderField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
	 {(char *)"LimitPrice", (getter)PyCThostFtdcErrorConditionalOrderField_get_LimitPrice, (setter)PyCThostFtdcErrorConditionalOrderField_set_LimitPrice, (char *)"LimitPrice", NULL},
	 {(char *)"VolumeTotalOriginal", (getter)PyCThostFtdcErrorConditionalOrderField_get_VolumeTotalOriginal, (setter)PyCThostFtdcErrorConditionalOrderField_set_VolumeTotalOriginal, (char *)"VolumeTotalOriginal", NULL},
	 {(char *)"TimeCondition", (getter)PyCThostFtdcErrorConditionalOrderField_get_TimeCondition, (setter)PyCThostFtdcErrorConditionalOrderField_set_TimeCondition, (char *)"TimeCondition", NULL},
	 {(char *)"GTDDate", (getter)PyCThostFtdcErrorConditionalOrderField_get_GTDDate, (setter)PyCThostFtdcErrorConditionalOrderField_set_GTDDate, (char *)"GTDDate", NULL},
	 {(char *)"VolumeCondition", (getter)PyCThostFtdcErrorConditionalOrderField_get_VolumeCondition, (setter)PyCThostFtdcErrorConditionalOrderField_set_VolumeCondition, (char *)"VolumeCondition", NULL},
	 {(char *)"MinVolume", (getter)PyCThostFtdcErrorConditionalOrderField_get_MinVolume, (setter)PyCThostFtdcErrorConditionalOrderField_set_MinVolume, (char *)"MinVolume", NULL},
	 {(char *)"ContingentCondition", (getter)PyCThostFtdcErrorConditionalOrderField_get_ContingentCondition, (setter)PyCThostFtdcErrorConditionalOrderField_set_ContingentCondition, (char *)"ContingentCondition", NULL},
	 {(char *)"StopPrice", (getter)PyCThostFtdcErrorConditionalOrderField_get_StopPrice, (setter)PyCThostFtdcErrorConditionalOrderField_set_StopPrice, (char *)"StopPrice", NULL},
	 {(char *)"ForceCloseReason", (getter)PyCThostFtdcErrorConditionalOrderField_get_ForceCloseReason, (setter)PyCThostFtdcErrorConditionalOrderField_set_ForceCloseReason, (char *)"ForceCloseReason", NULL},
	 {(char *)"IsAutoSuspend", (getter)PyCThostFtdcErrorConditionalOrderField_get_IsAutoSuspend, (setter)PyCThostFtdcErrorConditionalOrderField_set_IsAutoSuspend, (char *)"IsAutoSuspend", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcErrorConditionalOrderField_get_BusinessUnit, (setter)PyCThostFtdcErrorConditionalOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcErrorConditionalOrderField_get_RequestID, (setter)PyCThostFtdcErrorConditionalOrderField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"OrderLocalID", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderLocalID, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ExchangeID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ParticipantID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ClientID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcErrorConditionalOrderField_get_reserve2, (setter)PyCThostFtdcErrorConditionalOrderField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcErrorConditionalOrderField_get_TraderID, (setter)PyCThostFtdcErrorConditionalOrderField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcErrorConditionalOrderField_get_InstallID, (setter)PyCThostFtdcErrorConditionalOrderField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderSubmitStatus, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
	 {(char *)"NotifySequence", (getter)PyCThostFtdcErrorConditionalOrderField_get_NotifySequence, (setter)PyCThostFtdcErrorConditionalOrderField_set_NotifySequence, (char *)"NotifySequence", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcErrorConditionalOrderField_get_TradingDay, (setter)PyCThostFtdcErrorConditionalOrderField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcErrorConditionalOrderField_get_SettlementID, (setter)PyCThostFtdcErrorConditionalOrderField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderSysID, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"OrderSource", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderSource, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderSource, (char *)"OrderSource", NULL},
	 {(char *)"OrderStatus", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderStatus, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderStatus, (char *)"OrderStatus", NULL},
	 {(char *)"OrderType", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderType, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderType, (char *)"OrderType", NULL},
	 {(char *)"VolumeTraded", (getter)PyCThostFtdcErrorConditionalOrderField_get_VolumeTraded, (setter)PyCThostFtdcErrorConditionalOrderField_set_VolumeTraded, (char *)"VolumeTraded", NULL},
	 {(char *)"VolumeTotal", (getter)PyCThostFtdcErrorConditionalOrderField_get_VolumeTotal, (setter)PyCThostFtdcErrorConditionalOrderField_set_VolumeTotal, (char *)"VolumeTotal", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcErrorConditionalOrderField_get_InsertDate, (setter)PyCThostFtdcErrorConditionalOrderField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcErrorConditionalOrderField_get_InsertTime, (setter)PyCThostFtdcErrorConditionalOrderField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"ActiveTime", (getter)PyCThostFtdcErrorConditionalOrderField_get_ActiveTime, (setter)PyCThostFtdcErrorConditionalOrderField_set_ActiveTime, (char *)"ActiveTime", NULL},
	 {(char *)"SuspendTime", (getter)PyCThostFtdcErrorConditionalOrderField_get_SuspendTime, (setter)PyCThostFtdcErrorConditionalOrderField_set_SuspendTime, (char *)"SuspendTime", NULL},
	 {(char *)"UpdateTime", (getter)PyCThostFtdcErrorConditionalOrderField_get_UpdateTime, (setter)PyCThostFtdcErrorConditionalOrderField_set_UpdateTime, (char *)"UpdateTime", NULL},
	 {(char *)"CancelTime", (getter)PyCThostFtdcErrorConditionalOrderField_get_CancelTime, (setter)PyCThostFtdcErrorConditionalOrderField_set_CancelTime, (char *)"CancelTime", NULL},
	 {(char *)"ActiveTraderID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ActiveTraderID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ActiveTraderID, (char *)"ActiveTraderID", NULL},
	 {(char *)"ClearingPartID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ClearingPartID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcErrorConditionalOrderField_get_SequenceNo, (setter)PyCThostFtdcErrorConditionalOrderField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcErrorConditionalOrderField_get_FrontID, (setter)PyCThostFtdcErrorConditionalOrderField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcErrorConditionalOrderField_get_SessionID, (setter)PyCThostFtdcErrorConditionalOrderField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcErrorConditionalOrderField_get_UserProductInfo, (setter)PyCThostFtdcErrorConditionalOrderField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcErrorConditionalOrderField_get_StatusMsg, (setter)PyCThostFtdcErrorConditionalOrderField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"UserForceClose", (getter)PyCThostFtdcErrorConditionalOrderField_get_UserForceClose, (setter)PyCThostFtdcErrorConditionalOrderField_set_UserForceClose, (char *)"UserForceClose", NULL},
	 {(char *)"ActiveUserID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ActiveUserID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
	 {(char *)"BrokerOrderSeq", (getter)PyCThostFtdcErrorConditionalOrderField_get_BrokerOrderSeq, (setter)PyCThostFtdcErrorConditionalOrderField_set_BrokerOrderSeq, (char *)"BrokerOrderSeq", NULL},
	 {(char *)"RelativeOrderSysID", (getter)PyCThostFtdcErrorConditionalOrderField_get_RelativeOrderSysID, (setter)PyCThostFtdcErrorConditionalOrderField_set_RelativeOrderSysID, (char *)"RelativeOrderSysID", NULL},
	 {(char *)"ZCETotalTradedVolume", (getter)PyCThostFtdcErrorConditionalOrderField_get_ZCETotalTradedVolume, (setter)PyCThostFtdcErrorConditionalOrderField_set_ZCETotalTradedVolume, (char *)"ZCETotalTradedVolume", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ErrorID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcErrorConditionalOrderField_get_ErrorMsg, (setter)PyCThostFtdcErrorConditionalOrderField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"IsSwapOrder", (getter)PyCThostFtdcErrorConditionalOrderField_get_IsSwapOrder, (setter)PyCThostFtdcErrorConditionalOrderField_set_IsSwapOrder, (char *)"IsSwapOrder", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcErrorConditionalOrderField_get_BranchID, (setter)PyCThostFtdcErrorConditionalOrderField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcErrorConditionalOrderField_get_InvestUnitID, (setter)PyCThostFtdcErrorConditionalOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcErrorConditionalOrderField_get_AccountID, (setter)PyCThostFtdcErrorConditionalOrderField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcErrorConditionalOrderField_get_CurrencyID, (setter)PyCThostFtdcErrorConditionalOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"reserve3", (getter)PyCThostFtdcErrorConditionalOrderField_get_reserve3, (setter)PyCThostFtdcErrorConditionalOrderField_set_reserve3, (char *)"reserve3", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcErrorConditionalOrderField_get_MacAddress, (setter)PyCThostFtdcErrorConditionalOrderField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcErrorConditionalOrderField_get_InstrumentID, (setter)PyCThostFtdcErrorConditionalOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ExchangeInstID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcErrorConditionalOrderField_get_IPAddress, (setter)PyCThostFtdcErrorConditionalOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcErrorConditionalOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcErrorConditionalOrderField",	/* tp_name */
	sizeof(PyCThostFtdcErrorConditionalOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcErrorConditionalOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcErrorConditionalOrderField_repr,   /* tp_repr */
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
	"CThostFtdcErrorConditionalOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcErrorConditionalOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcErrorConditionalOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcErrorConditionalOrderField_new,       /* tp_new */
};

int PyCThostFtdcErrorConditionalOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcErrorConditionalOrderField  */
	if (PyType_Ready(&PyCThostFtdcErrorConditionalOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcErrorConditionalOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcErrorConditionalOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcErrorConditionalOrderField", (PyObject *)&PyCThostFtdcErrorConditionalOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcErrorConditionalOrderField to module");
        Py_DECREF(&PyCThostFtdcErrorConditionalOrderFieldType);
		return -1;
    }

    return 0;
}
