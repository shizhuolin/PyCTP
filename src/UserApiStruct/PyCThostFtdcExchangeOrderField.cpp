
#include "PyCThostFtdcExchangeOrderField.h"



static PyObject *PyCThostFtdcExchangeOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeOrderField *self = (PyCThostFtdcExchangeOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeOrderField_init(PyCThostFtdcExchangeOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OrderSysID", "OrderSource", "OrderStatus", "OrderType", "VolumeTraded", "VolumeTotal", "InsertDate", "InsertTime", "ActiveTime", "SuspendTime", "UpdateTime", "CancelTime", "ActiveTraderID", "ClearingPartID", "SequenceNo", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress",  NULL};

	//TThostFtdcOrderPriceTypeType char
	char pExchangeOrderField_OrderPriceType = 0;

	//TThostFtdcDirectionType char
	char pExchangeOrderField_Direction = 0;

	//TThostFtdcCombOffsetFlagType char[5]
	const char *pExchangeOrderField_CombOffsetFlag = NULL;
	Py_ssize_t pExchangeOrderField_CombOffsetFlag_len = 0;

	//TThostFtdcCombHedgeFlagType char[5]
	const char *pExchangeOrderField_CombHedgeFlag = NULL;
	Py_ssize_t pExchangeOrderField_CombHedgeFlag_len = 0;

	//TThostFtdcPriceType double
	double pExchangeOrderField_LimitPrice = 0.0;

	//TThostFtdcVolumeType int
	int pExchangeOrderField_VolumeTotalOriginal = 0;

	//TThostFtdcTimeConditionType char
	char pExchangeOrderField_TimeCondition = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeOrderField_GTDDate = NULL;
	Py_ssize_t pExchangeOrderField_GTDDate_len = 0;

	//TThostFtdcVolumeConditionType char
	char pExchangeOrderField_VolumeCondition = 0;

	//TThostFtdcVolumeType int
	int pExchangeOrderField_MinVolume = 0;

	//TThostFtdcContingentConditionType char
	char pExchangeOrderField_ContingentCondition = 0;

	//TThostFtdcPriceType double
	double pExchangeOrderField_StopPrice = 0.0;

	//TThostFtdcForceCloseReasonType char
	char pExchangeOrderField_ForceCloseReason = 0;

	//TThostFtdcBoolType int
	int pExchangeOrderField_IsAutoSuspend = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExchangeOrderField_BusinessUnit = NULL;
	Py_ssize_t pExchangeOrderField_BusinessUnit_len = 0;

	//TThostFtdcRequestIDType int
	int pExchangeOrderField_RequestID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeOrderField_OrderLocalID = NULL;
	Py_ssize_t pExchangeOrderField_OrderLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeOrderField_ExchangeID = NULL;
	Py_ssize_t pExchangeOrderField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeOrderField_ParticipantID = NULL;
	Py_ssize_t pExchangeOrderField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeOrderField_ClientID = NULL;
	Py_ssize_t pExchangeOrderField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pExchangeOrderField_reserve1 = NULL;
	Py_ssize_t pExchangeOrderField_reserve1_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeOrderField_TraderID = NULL;
	Py_ssize_t pExchangeOrderField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeOrderField_InstallID = 0;

	//TThostFtdcOrderSubmitStatusType char
	char pExchangeOrderField_OrderSubmitStatus = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeOrderField_NotifySequence = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeOrderField_TradingDay = NULL;
	Py_ssize_t pExchangeOrderField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pExchangeOrderField_SettlementID = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pExchangeOrderField_OrderSysID = NULL;
	Py_ssize_t pExchangeOrderField_OrderSysID_len = 0;

	//TThostFtdcOrderSourceType char
	char pExchangeOrderField_OrderSource = 0;

	//TThostFtdcOrderStatusType char
	char pExchangeOrderField_OrderStatus = 0;

	//TThostFtdcOrderTypeType char
	char pExchangeOrderField_OrderType = 0;

	//TThostFtdcVolumeType int
	int pExchangeOrderField_VolumeTraded = 0;

	//TThostFtdcVolumeType int
	int pExchangeOrderField_VolumeTotal = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeOrderField_InsertDate = NULL;
	Py_ssize_t pExchangeOrderField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeOrderField_InsertTime = NULL;
	Py_ssize_t pExchangeOrderField_InsertTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeOrderField_ActiveTime = NULL;
	Py_ssize_t pExchangeOrderField_ActiveTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeOrderField_SuspendTime = NULL;
	Py_ssize_t pExchangeOrderField_SuspendTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeOrderField_UpdateTime = NULL;
	Py_ssize_t pExchangeOrderField_UpdateTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeOrderField_CancelTime = NULL;
	Py_ssize_t pExchangeOrderField_CancelTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeOrderField_ActiveTraderID = NULL;
	Py_ssize_t pExchangeOrderField_ActiveTraderID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeOrderField_ClearingPartID = NULL;
	Py_ssize_t pExchangeOrderField_ClearingPartID_len = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeOrderField_SequenceNo = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pExchangeOrderField_BranchID = NULL;
	Py_ssize_t pExchangeOrderField_BranchID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExchangeOrderField_reserve2 = NULL;
	Py_ssize_t pExchangeOrderField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExchangeOrderField_MacAddress = NULL;
	Py_ssize_t pExchangeOrderField_MacAddress_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pExchangeOrderField_ExchangeInstID = NULL;
	Py_ssize_t pExchangeOrderField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExchangeOrderField_IPAddress = NULL;
	Py_ssize_t pExchangeOrderField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ccy#y#dicy#cicdciy#iy#y#y#y#y#y#iciy#iy#ccciiy#y#y#y#y#y#y#y#iy#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ccs#s#dics#cicdcis#is#s#s#s#s#s#icis#is#ccciis#s#s#s#s#s#s#s#is#s#s#s#s#", (char **)kwlist
#endif

		, &pExchangeOrderField_OrderPriceType
		, &pExchangeOrderField_Direction
		, &pExchangeOrderField_CombOffsetFlag, &pExchangeOrderField_CombOffsetFlag_len
		, &pExchangeOrderField_CombHedgeFlag, &pExchangeOrderField_CombHedgeFlag_len
		, &pExchangeOrderField_LimitPrice
		, &pExchangeOrderField_VolumeTotalOriginal
		, &pExchangeOrderField_TimeCondition
		, &pExchangeOrderField_GTDDate, &pExchangeOrderField_GTDDate_len
		, &pExchangeOrderField_VolumeCondition
		, &pExchangeOrderField_MinVolume
		, &pExchangeOrderField_ContingentCondition
		, &pExchangeOrderField_StopPrice
		, &pExchangeOrderField_ForceCloseReason
		, &pExchangeOrderField_IsAutoSuspend
		, &pExchangeOrderField_BusinessUnit, &pExchangeOrderField_BusinessUnit_len
		, &pExchangeOrderField_RequestID
		, &pExchangeOrderField_OrderLocalID, &pExchangeOrderField_OrderLocalID_len
		, &pExchangeOrderField_ExchangeID, &pExchangeOrderField_ExchangeID_len
		, &pExchangeOrderField_ParticipantID, &pExchangeOrderField_ParticipantID_len
		, &pExchangeOrderField_ClientID, &pExchangeOrderField_ClientID_len
		, &pExchangeOrderField_reserve1, &pExchangeOrderField_reserve1_len
		, &pExchangeOrderField_TraderID, &pExchangeOrderField_TraderID_len
		, &pExchangeOrderField_InstallID
		, &pExchangeOrderField_OrderSubmitStatus
		, &pExchangeOrderField_NotifySequence
		, &pExchangeOrderField_TradingDay, &pExchangeOrderField_TradingDay_len
		, &pExchangeOrderField_SettlementID
		, &pExchangeOrderField_OrderSysID, &pExchangeOrderField_OrderSysID_len
		, &pExchangeOrderField_OrderSource
		, &pExchangeOrderField_OrderStatus
		, &pExchangeOrderField_OrderType
		, &pExchangeOrderField_VolumeTraded
		, &pExchangeOrderField_VolumeTotal
		, &pExchangeOrderField_InsertDate, &pExchangeOrderField_InsertDate_len
		, &pExchangeOrderField_InsertTime, &pExchangeOrderField_InsertTime_len
		, &pExchangeOrderField_ActiveTime, &pExchangeOrderField_ActiveTime_len
		, &pExchangeOrderField_SuspendTime, &pExchangeOrderField_SuspendTime_len
		, &pExchangeOrderField_UpdateTime, &pExchangeOrderField_UpdateTime_len
		, &pExchangeOrderField_CancelTime, &pExchangeOrderField_CancelTime_len
		, &pExchangeOrderField_ActiveTraderID, &pExchangeOrderField_ActiveTraderID_len
		, &pExchangeOrderField_ClearingPartID, &pExchangeOrderField_ClearingPartID_len
		, &pExchangeOrderField_SequenceNo
		, &pExchangeOrderField_BranchID, &pExchangeOrderField_BranchID_len
		, &pExchangeOrderField_reserve2, &pExchangeOrderField_reserve2_len
		, &pExchangeOrderField_MacAddress, &pExchangeOrderField_MacAddress_len
		, &pExchangeOrderField_ExchangeInstID, &pExchangeOrderField_ExchangeInstID_len
		, &pExchangeOrderField_IPAddress, &pExchangeOrderField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcOrderPriceTypeType char
	self->data.OrderPriceType = pExchangeOrderField_OrderPriceType;

	//TThostFtdcDirectionType char
	self->data.Direction = pExchangeOrderField_Direction;

	//TThostFtdcCombOffsetFlagType char[5]
	if(pExchangeOrderField_CombOffsetFlag != NULL) {
		if(pExchangeOrderField_CombOffsetFlag_len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
			PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is %zd)", pExchangeOrderField_CombOffsetFlag_len, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
			return -1;
		}
		strncpy(self->data.CombOffsetFlag, pExchangeOrderField_CombOffsetFlag, sizeof(self->data.CombOffsetFlag) );
		pExchangeOrderField_CombOffsetFlag = NULL;
	}

	//TThostFtdcCombHedgeFlagType char[5]
	if(pExchangeOrderField_CombHedgeFlag != NULL) {
		if(pExchangeOrderField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
			PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", pExchangeOrderField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
			return -1;
		}
		strncpy(self->data.CombHedgeFlag, pExchangeOrderField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
		pExchangeOrderField_CombHedgeFlag = NULL;
	}

	//TThostFtdcPriceType double
	self->data.LimitPrice = pExchangeOrderField_LimitPrice;
	//TThostFtdcVolumeType int
	self->data.VolumeTotalOriginal = pExchangeOrderField_VolumeTotalOriginal;

	//TThostFtdcTimeConditionType char
	self->data.TimeCondition = pExchangeOrderField_TimeCondition;

	//TThostFtdcDateType char[9]
	if(pExchangeOrderField_GTDDate != NULL) {
		if(pExchangeOrderField_GTDDate_len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
			PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is %zd)", pExchangeOrderField_GTDDate_len, (Py_ssize_t)sizeof(self->data.GTDDate));
			return -1;
		}
		strncpy(self->data.GTDDate, pExchangeOrderField_GTDDate, sizeof(self->data.GTDDate) );
		pExchangeOrderField_GTDDate = NULL;
	}

	//TThostFtdcVolumeConditionType char
	self->data.VolumeCondition = pExchangeOrderField_VolumeCondition;

	//TThostFtdcVolumeType int
	self->data.MinVolume = pExchangeOrderField_MinVolume;

	//TThostFtdcContingentConditionType char
	self->data.ContingentCondition = pExchangeOrderField_ContingentCondition;

	//TThostFtdcPriceType double
	self->data.StopPrice = pExchangeOrderField_StopPrice;
	//TThostFtdcForceCloseReasonType char
	self->data.ForceCloseReason = pExchangeOrderField_ForceCloseReason;

	//TThostFtdcBoolType int
	self->data.IsAutoSuspend = pExchangeOrderField_IsAutoSuspend;

	//TThostFtdcBusinessUnitType char[21]
	if(pExchangeOrderField_BusinessUnit != NULL) {
		if(pExchangeOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExchangeOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExchangeOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExchangeOrderField_BusinessUnit = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pExchangeOrderField_RequestID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeOrderField_OrderLocalID != NULL) {
		if(pExchangeOrderField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", pExchangeOrderField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
			return -1;
		}
		strncpy(self->data.OrderLocalID, pExchangeOrderField_OrderLocalID, sizeof(self->data.OrderLocalID) );
		pExchangeOrderField_OrderLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeOrderField_ExchangeID != NULL) {
		if(pExchangeOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeOrderField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeOrderField_ParticipantID != NULL) {
		if(pExchangeOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeOrderField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeOrderField_ClientID != NULL) {
		if(pExchangeOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeOrderField_ClientID, sizeof(self->data.ClientID) );
		pExchangeOrderField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pExchangeOrderField_reserve1 != NULL) {
		if(pExchangeOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeOrderField_reserve1, sizeof(self->data.reserve1) );
		pExchangeOrderField_reserve1 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeOrderField_TraderID != NULL) {
		if(pExchangeOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeOrderField_TraderID, sizeof(self->data.TraderID) );
		pExchangeOrderField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeOrderField_InstallID;

	//TThostFtdcOrderSubmitStatusType char
	self->data.OrderSubmitStatus = pExchangeOrderField_OrderSubmitStatus;

	//TThostFtdcSequenceNoType int
	self->data.NotifySequence = pExchangeOrderField_NotifySequence;

	//TThostFtdcDateType char[9]
	if(pExchangeOrderField_TradingDay != NULL) {
		if(pExchangeOrderField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pExchangeOrderField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pExchangeOrderField_TradingDay, sizeof(self->data.TradingDay) );
		pExchangeOrderField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pExchangeOrderField_SettlementID;

	//TThostFtdcOrderSysIDType char[21]
	if(pExchangeOrderField_OrderSysID != NULL) {
		if(pExchangeOrderField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pExchangeOrderField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pExchangeOrderField_OrderSysID, sizeof(self->data.OrderSysID) );
		pExchangeOrderField_OrderSysID = NULL;
	}

	//TThostFtdcOrderSourceType char
	self->data.OrderSource = pExchangeOrderField_OrderSource;

	//TThostFtdcOrderStatusType char
	self->data.OrderStatus = pExchangeOrderField_OrderStatus;

	//TThostFtdcOrderTypeType char
	self->data.OrderType = pExchangeOrderField_OrderType;

	//TThostFtdcVolumeType int
	self->data.VolumeTraded = pExchangeOrderField_VolumeTraded;

	//TThostFtdcVolumeType int
	self->data.VolumeTotal = pExchangeOrderField_VolumeTotal;

	//TThostFtdcDateType char[9]
	if(pExchangeOrderField_InsertDate != NULL) {
		if(pExchangeOrderField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pExchangeOrderField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pExchangeOrderField_InsertDate, sizeof(self->data.InsertDate) );
		pExchangeOrderField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeOrderField_InsertTime != NULL) {
		if(pExchangeOrderField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pExchangeOrderField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pExchangeOrderField_InsertTime, sizeof(self->data.InsertTime) );
		pExchangeOrderField_InsertTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeOrderField_ActiveTime != NULL) {
		if(pExchangeOrderField_ActiveTime_len > (Py_ssize_t)sizeof(self->data.ActiveTime)) {
			PyErr_Format(PyExc_ValueError, "ActiveTime too long: length=%zd (max allowed is %zd)", pExchangeOrderField_ActiveTime_len, (Py_ssize_t)sizeof(self->data.ActiveTime));
			return -1;
		}
		strncpy(self->data.ActiveTime, pExchangeOrderField_ActiveTime, sizeof(self->data.ActiveTime) );
		pExchangeOrderField_ActiveTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeOrderField_SuspendTime != NULL) {
		if(pExchangeOrderField_SuspendTime_len > (Py_ssize_t)sizeof(self->data.SuspendTime)) {
			PyErr_Format(PyExc_ValueError, "SuspendTime too long: length=%zd (max allowed is %zd)", pExchangeOrderField_SuspendTime_len, (Py_ssize_t)sizeof(self->data.SuspendTime));
			return -1;
		}
		strncpy(self->data.SuspendTime, pExchangeOrderField_SuspendTime, sizeof(self->data.SuspendTime) );
		pExchangeOrderField_SuspendTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeOrderField_UpdateTime != NULL) {
		if(pExchangeOrderField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
			PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", pExchangeOrderField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
			return -1;
		}
		strncpy(self->data.UpdateTime, pExchangeOrderField_UpdateTime, sizeof(self->data.UpdateTime) );
		pExchangeOrderField_UpdateTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeOrderField_CancelTime != NULL) {
		if(pExchangeOrderField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
			PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", pExchangeOrderField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
			return -1;
		}
		strncpy(self->data.CancelTime, pExchangeOrderField_CancelTime, sizeof(self->data.CancelTime) );
		pExchangeOrderField_CancelTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeOrderField_ActiveTraderID != NULL) {
		if(pExchangeOrderField_ActiveTraderID_len > (Py_ssize_t)sizeof(self->data.ActiveTraderID)) {
			PyErr_Format(PyExc_ValueError, "ActiveTraderID too long: length=%zd (max allowed is %zd)", pExchangeOrderField_ActiveTraderID_len, (Py_ssize_t)sizeof(self->data.ActiveTraderID));
			return -1;
		}
		strncpy(self->data.ActiveTraderID, pExchangeOrderField_ActiveTraderID, sizeof(self->data.ActiveTraderID) );
		pExchangeOrderField_ActiveTraderID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeOrderField_ClearingPartID != NULL) {
		if(pExchangeOrderField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
			PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", pExchangeOrderField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
			return -1;
		}
		strncpy(self->data.ClearingPartID, pExchangeOrderField_ClearingPartID, sizeof(self->data.ClearingPartID) );
		pExchangeOrderField_ClearingPartID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pExchangeOrderField_SequenceNo;

	//TThostFtdcBranchIDType char[9]
	if(pExchangeOrderField_BranchID != NULL) {
		if(pExchangeOrderField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pExchangeOrderField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pExchangeOrderField_BranchID, sizeof(self->data.BranchID) );
		pExchangeOrderField_BranchID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pExchangeOrderField_reserve2 != NULL) {
		if(pExchangeOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pExchangeOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pExchangeOrderField_reserve2, sizeof(self->data.reserve2) );
		pExchangeOrderField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExchangeOrderField_MacAddress != NULL) {
		if(pExchangeOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExchangeOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExchangeOrderField_MacAddress, sizeof(self->data.MacAddress) );
		pExchangeOrderField_MacAddress = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pExchangeOrderField_ExchangeInstID != NULL) {
		if(pExchangeOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pExchangeOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pExchangeOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pExchangeOrderField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pExchangeOrderField_IPAddress != NULL) {
		if(pExchangeOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExchangeOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExchangeOrderField_IPAddress, sizeof(self->data.IPAddress) );
		pExchangeOrderField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeOrderField_dealloc(PyCThostFtdcExchangeOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeOrderField_repr(PyCThostFtdcExchangeOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:c,s:c,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:c,s:c,s:s,s:s,s:d,s:i,s:c,s:s,s:c,s:i,s:c,s:d,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:c,s:c,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s}"
#endif

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
		, "reserve1", self->data.reserve1 
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
		, "BranchID", self->data.BranchID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_OrderPriceType(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderPriceType), 1);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_Direction(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_CombOffsetFlag(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombOffsetFlag);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_CombHedgeFlag(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombHedgeFlag);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_LimitPrice(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LimitPrice);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_VolumeTotalOriginal(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTotalOriginal);
#else 
	return PyInt_FromLong(self->data.VolumeTotalOriginal);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderField_get_TimeCondition(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_GTDDate(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.GTDDate);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_VolumeCondition(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VolumeCondition), 1);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_MinVolume(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MinVolume);
#else 
	return PyInt_FromLong(self->data.MinVolume);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderField_get_ContingentCondition(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ContingentCondition), 1);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_StopPrice(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StopPrice);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_ForceCloseReason(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ForceCloseReason), 1);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_IsAutoSuspend(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsAutoSuspend);
#else 
	return PyInt_FromLong(self->data.IsAutoSuspend);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderField_get_BusinessUnit(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_RequestID(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderField_get_OrderLocalID(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderLocalID);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_ExchangeID(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_ParticipantID(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_ClientID(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_reserve1(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_TraderID(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_InstallID(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderField_get_OrderSubmitStatus(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_NotifySequence(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.NotifySequence);
#else 
	return PyInt_FromLong(self->data.NotifySequence);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderField_get_TradingDay(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_SettlementID(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderField_get_OrderSysID(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_OrderSource(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSource), 1);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_OrderStatus(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderStatus), 1);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_OrderType(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderType), 1);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_VolumeTraded(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTraded);
#else 
	return PyInt_FromLong(self->data.VolumeTraded);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderField_get_VolumeTotal(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTotal);
#else 
	return PyInt_FromLong(self->data.VolumeTotal);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderField_get_InsertDate(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_InsertTime(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_ActiveTime(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveTime);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_SuspendTime(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.SuspendTime);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_UpdateTime(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UpdateTime);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_CancelTime(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CancelTime);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_ActiveTraderID(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveTraderID);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_ClearingPartID(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClearingPartID);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_SequenceNo(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderField_get_BranchID(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_reserve2(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_MacAddress(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_ExchangeInstID(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcExchangeOrderField_get_IPAddress(PyCThostFtdcExchangeOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcExchangeOrderField_set_OrderPriceType(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_Direction(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_CombOffsetFlag(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_CombHedgeFlag(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_LimitPrice(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_VolumeTotalOriginal(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_TimeCondition(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_GTDDate(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_VolumeCondition(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_MinVolume(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_ContingentCondition(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_StopPrice(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_ForceCloseReason(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_IsAutoSuspend(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_BusinessUnit(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_RequestID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_OrderLocalID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_ExchangeID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_ParticipantID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_ClientID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_reserve1(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_TraderID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_InstallID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_OrderSubmitStatus(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_NotifySequence(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_TradingDay(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_SettlementID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_OrderSysID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_OrderSource(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_OrderStatus(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_OrderType(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_VolumeTraded(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_VolumeTotal(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_InsertDate(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_InsertTime(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_ActiveTime(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_SuspendTime(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_UpdateTime(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_CancelTime(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_ActiveTraderID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_ClearingPartID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_SequenceNo(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_BranchID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_reserve2(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_MacAddress(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_ExchangeInstID(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderField_set_IPAddress(PyCThostFtdcExchangeOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeOrderField_getset[] = {
	 {(char *)"OrderPriceType", (getter)PyCThostFtdcExchangeOrderField_get_OrderPriceType, (setter)PyCThostFtdcExchangeOrderField_set_OrderPriceType, (char *)"OrderPriceType", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcExchangeOrderField_get_Direction, (setter)PyCThostFtdcExchangeOrderField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"CombOffsetFlag", (getter)PyCThostFtdcExchangeOrderField_get_CombOffsetFlag, (setter)PyCThostFtdcExchangeOrderField_set_CombOffsetFlag, (char *)"CombOffsetFlag", NULL},
	 {(char *)"CombHedgeFlag", (getter)PyCThostFtdcExchangeOrderField_get_CombHedgeFlag, (setter)PyCThostFtdcExchangeOrderField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
	 {(char *)"LimitPrice", (getter)PyCThostFtdcExchangeOrderField_get_LimitPrice, (setter)PyCThostFtdcExchangeOrderField_set_LimitPrice, (char *)"LimitPrice", NULL},
	 {(char *)"VolumeTotalOriginal", (getter)PyCThostFtdcExchangeOrderField_get_VolumeTotalOriginal, (setter)PyCThostFtdcExchangeOrderField_set_VolumeTotalOriginal, (char *)"VolumeTotalOriginal", NULL},
	 {(char *)"TimeCondition", (getter)PyCThostFtdcExchangeOrderField_get_TimeCondition, (setter)PyCThostFtdcExchangeOrderField_set_TimeCondition, (char *)"TimeCondition", NULL},
	 {(char *)"GTDDate", (getter)PyCThostFtdcExchangeOrderField_get_GTDDate, (setter)PyCThostFtdcExchangeOrderField_set_GTDDate, (char *)"GTDDate", NULL},
	 {(char *)"VolumeCondition", (getter)PyCThostFtdcExchangeOrderField_get_VolumeCondition, (setter)PyCThostFtdcExchangeOrderField_set_VolumeCondition, (char *)"VolumeCondition", NULL},
	 {(char *)"MinVolume", (getter)PyCThostFtdcExchangeOrderField_get_MinVolume, (setter)PyCThostFtdcExchangeOrderField_set_MinVolume, (char *)"MinVolume", NULL},
	 {(char *)"ContingentCondition", (getter)PyCThostFtdcExchangeOrderField_get_ContingentCondition, (setter)PyCThostFtdcExchangeOrderField_set_ContingentCondition, (char *)"ContingentCondition", NULL},
	 {(char *)"StopPrice", (getter)PyCThostFtdcExchangeOrderField_get_StopPrice, (setter)PyCThostFtdcExchangeOrderField_set_StopPrice, (char *)"StopPrice", NULL},
	 {(char *)"ForceCloseReason", (getter)PyCThostFtdcExchangeOrderField_get_ForceCloseReason, (setter)PyCThostFtdcExchangeOrderField_set_ForceCloseReason, (char *)"ForceCloseReason", NULL},
	 {(char *)"IsAutoSuspend", (getter)PyCThostFtdcExchangeOrderField_get_IsAutoSuspend, (setter)PyCThostFtdcExchangeOrderField_set_IsAutoSuspend, (char *)"IsAutoSuspend", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeOrderField_get_BusinessUnit, (setter)PyCThostFtdcExchangeOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcExchangeOrderField_get_RequestID, (setter)PyCThostFtdcExchangeOrderField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"OrderLocalID", (getter)PyCThostFtdcExchangeOrderField_get_OrderLocalID, (setter)PyCThostFtdcExchangeOrderField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeOrderField_get_ExchangeID, (setter)PyCThostFtdcExchangeOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeOrderField_get_ParticipantID, (setter)PyCThostFtdcExchangeOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeOrderField_get_ClientID, (setter)PyCThostFtdcExchangeOrderField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeOrderField_get_reserve1, (setter)PyCThostFtdcExchangeOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeOrderField_get_TraderID, (setter)PyCThostFtdcExchangeOrderField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeOrderField_get_InstallID, (setter)PyCThostFtdcExchangeOrderField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcExchangeOrderField_get_OrderSubmitStatus, (setter)PyCThostFtdcExchangeOrderField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
	 {(char *)"NotifySequence", (getter)PyCThostFtdcExchangeOrderField_get_NotifySequence, (setter)PyCThostFtdcExchangeOrderField_set_NotifySequence, (char *)"NotifySequence", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcExchangeOrderField_get_TradingDay, (setter)PyCThostFtdcExchangeOrderField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcExchangeOrderField_get_SettlementID, (setter)PyCThostFtdcExchangeOrderField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcExchangeOrderField_get_OrderSysID, (setter)PyCThostFtdcExchangeOrderField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"OrderSource", (getter)PyCThostFtdcExchangeOrderField_get_OrderSource, (setter)PyCThostFtdcExchangeOrderField_set_OrderSource, (char *)"OrderSource", NULL},
	 {(char *)"OrderStatus", (getter)PyCThostFtdcExchangeOrderField_get_OrderStatus, (setter)PyCThostFtdcExchangeOrderField_set_OrderStatus, (char *)"OrderStatus", NULL},
	 {(char *)"OrderType", (getter)PyCThostFtdcExchangeOrderField_get_OrderType, (setter)PyCThostFtdcExchangeOrderField_set_OrderType, (char *)"OrderType", NULL},
	 {(char *)"VolumeTraded", (getter)PyCThostFtdcExchangeOrderField_get_VolumeTraded, (setter)PyCThostFtdcExchangeOrderField_set_VolumeTraded, (char *)"VolumeTraded", NULL},
	 {(char *)"VolumeTotal", (getter)PyCThostFtdcExchangeOrderField_get_VolumeTotal, (setter)PyCThostFtdcExchangeOrderField_set_VolumeTotal, (char *)"VolumeTotal", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcExchangeOrderField_get_InsertDate, (setter)PyCThostFtdcExchangeOrderField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcExchangeOrderField_get_InsertTime, (setter)PyCThostFtdcExchangeOrderField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"ActiveTime", (getter)PyCThostFtdcExchangeOrderField_get_ActiveTime, (setter)PyCThostFtdcExchangeOrderField_set_ActiveTime, (char *)"ActiveTime", NULL},
	 {(char *)"SuspendTime", (getter)PyCThostFtdcExchangeOrderField_get_SuspendTime, (setter)PyCThostFtdcExchangeOrderField_set_SuspendTime, (char *)"SuspendTime", NULL},
	 {(char *)"UpdateTime", (getter)PyCThostFtdcExchangeOrderField_get_UpdateTime, (setter)PyCThostFtdcExchangeOrderField_set_UpdateTime, (char *)"UpdateTime", NULL},
	 {(char *)"CancelTime", (getter)PyCThostFtdcExchangeOrderField_get_CancelTime, (setter)PyCThostFtdcExchangeOrderField_set_CancelTime, (char *)"CancelTime", NULL},
	 {(char *)"ActiveTraderID", (getter)PyCThostFtdcExchangeOrderField_get_ActiveTraderID, (setter)PyCThostFtdcExchangeOrderField_set_ActiveTraderID, (char *)"ActiveTraderID", NULL},
	 {(char *)"ClearingPartID", (getter)PyCThostFtdcExchangeOrderField_get_ClearingPartID, (setter)PyCThostFtdcExchangeOrderField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeOrderField_get_SequenceNo, (setter)PyCThostFtdcExchangeOrderField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcExchangeOrderField_get_BranchID, (setter)PyCThostFtdcExchangeOrderField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcExchangeOrderField_get_reserve2, (setter)PyCThostFtdcExchangeOrderField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExchangeOrderField_get_MacAddress, (setter)PyCThostFtdcExchangeOrderField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeOrderField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExchangeOrderField_get_IPAddress, (setter)PyCThostFtdcExchangeOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeOrderField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeOrderField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeOrderField_new,       /* tp_new */
};

int PyCThostFtdcExchangeOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeOrderField  */
	if (PyType_Ready(&PyCThostFtdcExchangeOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeOrderField", (PyObject *)&PyCThostFtdcExchangeOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOrderField to module");
        Py_DECREF(&PyCThostFtdcExchangeOrderFieldType);
		return -1;
    }

    return 0;
}
