
#include "PyCThostFtdcExchangeOrderField.h"

///交易所报单

static int PyCThostFtdcExchangeOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OrderSysID", "OrderSource", "OrderStatus", "OrderType", "VolumeTraded", "VolumeTotal", "InsertDate", "InsertTime", "ActiveTime", "SuspendTime", "UpdateTime", "CancelTime", "ActiveTraderID", "ClearingPartID", "SequenceNo", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress", NULL };


    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    char CThostFtdcExchangeOrderField_OrderPriceType = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcExchangeOrderField_Direction = 0;

    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    char *CThostFtdcExchangeOrderField_CombOffsetFlag = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_CombOffsetFlag_length = 0;

    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    char *CThostFtdcExchangeOrderField_CombHedgeFlag = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_CombHedgeFlag_length = 0;

    /// 价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcExchangeOrderField_LimitPrice = 0.0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeOrderField_VolumeTotalOriginal = 0;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    char CThostFtdcExchangeOrderField_TimeCondition = 0;

    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeOrderField_GTDDate = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_GTDDate_length = 0;

    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    char CThostFtdcExchangeOrderField_VolumeCondition = 0;

    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeOrderField_MinVolume = 0;

    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    char CThostFtdcExchangeOrderField_ContingentCondition = 0;

    /// 止损价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcExchangeOrderField_StopPrice = 0.0;

    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    char CThostFtdcExchangeOrderField_ForceCloseReason = 0;

    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcExchangeOrderField_IsAutoSuspend = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExchangeOrderField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_BusinessUnit_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcExchangeOrderField_RequestID = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeOrderField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_OrderLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeOrderField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeOrderField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcExchangeOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_reserve1_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeOrderField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeOrderField_InstallID = 0;

    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcExchangeOrderField_OrderSubmitStatus = 0;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeOrderField_NotifySequence = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeOrderField_TradingDay = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcExchangeOrderField_SettlementID = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcExchangeOrderField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_OrderSysID_length = 0;

    /// 报单来源
    /// typedef char TThostFtdcOrderSourceType
    char CThostFtdcExchangeOrderField_OrderSource = 0;

    /// 报单状态
    /// typedef char TThostFtdcOrderStatusType
    char CThostFtdcExchangeOrderField_OrderStatus = 0;

    /// 报单类型
    /// typedef char TThostFtdcOrderTypeType
    char CThostFtdcExchangeOrderField_OrderType = 0;

    /// 今成交数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeOrderField_VolumeTraded = 0;

    /// 剩余数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeOrderField_VolumeTotal = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeOrderField_InsertDate = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_InsertDate_length = 0;

    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeOrderField_InsertTime = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_InsertTime_length = 0;

    /// 激活时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeOrderField_ActiveTime = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_ActiveTime_length = 0;

    /// 挂起时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeOrderField_SuspendTime = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_SuspendTime_length = 0;

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeOrderField_UpdateTime = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_UpdateTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeOrderField_CancelTime = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_CancelTime_length = 0;

    /// 最后修改交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeOrderField_ActiveTraderID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_ActiveTraderID_length = 0;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeOrderField_ClearingPartID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_ClearingPartID_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeOrderField_SequenceNo = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcExchangeOrderField_BranchID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_BranchID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExchangeOrderField_reserve2 = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExchangeOrderField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_MacAddress_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcExchangeOrderField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExchangeOrderField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExchangeOrderField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ccy#y#dicy#cicdciy#iy#y#y#y#y#y#iciy#iy#ccciiy#y#y#y#y#y#y#y#iy#y#y#y#y#", (char **)kwlist
        , &CThostFtdcExchangeOrderField_OrderPriceType
        , &CThostFtdcExchangeOrderField_Direction
        , &CThostFtdcExchangeOrderField_CombOffsetFlag, &CThostFtdcExchangeOrderField_CombOffsetFlag_length
        , &CThostFtdcExchangeOrderField_CombHedgeFlag, &CThostFtdcExchangeOrderField_CombHedgeFlag_length
        , &CThostFtdcExchangeOrderField_LimitPrice
        , &CThostFtdcExchangeOrderField_VolumeTotalOriginal
        , &CThostFtdcExchangeOrderField_TimeCondition
        , &CThostFtdcExchangeOrderField_GTDDate, &CThostFtdcExchangeOrderField_GTDDate_length
        , &CThostFtdcExchangeOrderField_VolumeCondition
        , &CThostFtdcExchangeOrderField_MinVolume
        , &CThostFtdcExchangeOrderField_ContingentCondition
        , &CThostFtdcExchangeOrderField_StopPrice
        , &CThostFtdcExchangeOrderField_ForceCloseReason
        , &CThostFtdcExchangeOrderField_IsAutoSuspend
        , &CThostFtdcExchangeOrderField_BusinessUnit, &CThostFtdcExchangeOrderField_BusinessUnit_length
        , &CThostFtdcExchangeOrderField_RequestID
        , &CThostFtdcExchangeOrderField_OrderLocalID, &CThostFtdcExchangeOrderField_OrderLocalID_length
        , &CThostFtdcExchangeOrderField_ExchangeID, &CThostFtdcExchangeOrderField_ExchangeID_length
        , &CThostFtdcExchangeOrderField_ParticipantID, &CThostFtdcExchangeOrderField_ParticipantID_length
        , &CThostFtdcExchangeOrderField_ClientID, &CThostFtdcExchangeOrderField_ClientID_length
        , &CThostFtdcExchangeOrderField_reserve1, &CThostFtdcExchangeOrderField_reserve1_length
        , &CThostFtdcExchangeOrderField_TraderID, &CThostFtdcExchangeOrderField_TraderID_length
        , &CThostFtdcExchangeOrderField_InstallID
        , &CThostFtdcExchangeOrderField_OrderSubmitStatus
        , &CThostFtdcExchangeOrderField_NotifySequence
        , &CThostFtdcExchangeOrderField_TradingDay, &CThostFtdcExchangeOrderField_TradingDay_length
        , &CThostFtdcExchangeOrderField_SettlementID
        , &CThostFtdcExchangeOrderField_OrderSysID, &CThostFtdcExchangeOrderField_OrderSysID_length
        , &CThostFtdcExchangeOrderField_OrderSource
        , &CThostFtdcExchangeOrderField_OrderStatus
        , &CThostFtdcExchangeOrderField_OrderType
        , &CThostFtdcExchangeOrderField_VolumeTraded
        , &CThostFtdcExchangeOrderField_VolumeTotal
        , &CThostFtdcExchangeOrderField_InsertDate, &CThostFtdcExchangeOrderField_InsertDate_length
        , &CThostFtdcExchangeOrderField_InsertTime, &CThostFtdcExchangeOrderField_InsertTime_length
        , &CThostFtdcExchangeOrderField_ActiveTime, &CThostFtdcExchangeOrderField_ActiveTime_length
        , &CThostFtdcExchangeOrderField_SuspendTime, &CThostFtdcExchangeOrderField_SuspendTime_length
        , &CThostFtdcExchangeOrderField_UpdateTime, &CThostFtdcExchangeOrderField_UpdateTime_length
        , &CThostFtdcExchangeOrderField_CancelTime, &CThostFtdcExchangeOrderField_CancelTime_length
        , &CThostFtdcExchangeOrderField_ActiveTraderID, &CThostFtdcExchangeOrderField_ActiveTraderID_length
        , &CThostFtdcExchangeOrderField_ClearingPartID, &CThostFtdcExchangeOrderField_ClearingPartID_length
        , &CThostFtdcExchangeOrderField_SequenceNo
        , &CThostFtdcExchangeOrderField_BranchID, &CThostFtdcExchangeOrderField_BranchID_length
        , &CThostFtdcExchangeOrderField_reserve2, &CThostFtdcExchangeOrderField_reserve2_length
        , &CThostFtdcExchangeOrderField_MacAddress, &CThostFtdcExchangeOrderField_MacAddress_length
        , &CThostFtdcExchangeOrderField_ExchangeInstID, &CThostFtdcExchangeOrderField_ExchangeInstID_length
        , &CThostFtdcExchangeOrderField_IPAddress, &CThostFtdcExchangeOrderField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);


    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    data->OrderPriceType = CThostFtdcExchangeOrderField_OrderPriceType;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcExchangeOrderField_Direction;

    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    if( CThostFtdcExchangeOrderField_CombOffsetFlag != NULL ) {
        if(CThostFtdcExchangeOrderField_CombOffsetFlag_length >= (Py_ssize_t)sizeof(data->CombOffsetFlag)) {
            PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is 4)", CThostFtdcExchangeOrderField_CombOffsetFlag_length);
            return -1;
        }
        // memset(data->CombOffsetFlag, 0, sizeof(data->CombOffsetFlag));
        // memcpy(data->CombOffsetFlag, CThostFtdcExchangeOrderField_CombOffsetFlag, CThostFtdcExchangeOrderField_CombOffsetFlag_length);
        strncpy(data->CombOffsetFlag, CThostFtdcExchangeOrderField_CombOffsetFlag, sizeof(data->CombOffsetFlag));
        CThostFtdcExchangeOrderField_CombOffsetFlag = NULL;
    }

    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    if( CThostFtdcExchangeOrderField_CombHedgeFlag != NULL ) {
        if(CThostFtdcExchangeOrderField_CombHedgeFlag_length >= (Py_ssize_t)sizeof(data->CombHedgeFlag)) {
            PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is 4)", CThostFtdcExchangeOrderField_CombHedgeFlag_length);
            return -1;
        }
        // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
        // memcpy(data->CombHedgeFlag, CThostFtdcExchangeOrderField_CombHedgeFlag, CThostFtdcExchangeOrderField_CombHedgeFlag_length);
        strncpy(data->CombHedgeFlag, CThostFtdcExchangeOrderField_CombHedgeFlag, sizeof(data->CombHedgeFlag));
        CThostFtdcExchangeOrderField_CombHedgeFlag = NULL;
    }

    /// 价格
    /// typedef double TThostFtdcPriceType
    data->LimitPrice = CThostFtdcExchangeOrderField_LimitPrice;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->VolumeTotalOriginal = CThostFtdcExchangeOrderField_VolumeTotalOriginal;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    data->TimeCondition = CThostFtdcExchangeOrderField_TimeCondition;

    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeOrderField_GTDDate != NULL ) {
        if(CThostFtdcExchangeOrderField_GTDDate_length >= (Py_ssize_t)sizeof(data->GTDDate)) {
            PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderField_GTDDate_length);
            return -1;
        }
        // memset(data->GTDDate, 0, sizeof(data->GTDDate));
        // memcpy(data->GTDDate, CThostFtdcExchangeOrderField_GTDDate, CThostFtdcExchangeOrderField_GTDDate_length);
        strncpy(data->GTDDate, CThostFtdcExchangeOrderField_GTDDate, sizeof(data->GTDDate));
        CThostFtdcExchangeOrderField_GTDDate = NULL;
    }

    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    data->VolumeCondition = CThostFtdcExchangeOrderField_VolumeCondition;

    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    data->MinVolume = CThostFtdcExchangeOrderField_MinVolume;

    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    data->ContingentCondition = CThostFtdcExchangeOrderField_ContingentCondition;

    /// 止损价
    /// typedef double TThostFtdcPriceType
    data->StopPrice = CThostFtdcExchangeOrderField_StopPrice;

    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    data->ForceCloseReason = CThostFtdcExchangeOrderField_ForceCloseReason;

    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    data->IsAutoSuspend = CThostFtdcExchangeOrderField_IsAutoSuspend;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExchangeOrderField_BusinessUnit != NULL ) {
        if(CThostFtdcExchangeOrderField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExchangeOrderField_BusinessUnit, CThostFtdcExchangeOrderField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExchangeOrderField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExchangeOrderField_BusinessUnit = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcExchangeOrderField_RequestID;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeOrderField_OrderLocalID != NULL ) {
        if(CThostFtdcExchangeOrderField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeOrderField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcExchangeOrderField_OrderLocalID, CThostFtdcExchangeOrderField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcExchangeOrderField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcExchangeOrderField_OrderLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeOrderField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeOrderField_ExchangeID, CThostFtdcExchangeOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeOrderField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeOrderField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeOrderField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeOrderField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeOrderField_ParticipantID, CThostFtdcExchangeOrderField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeOrderField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeOrderField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeOrderField_ClientID != NULL ) {
        if(CThostFtdcExchangeOrderField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeOrderField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeOrderField_ClientID, CThostFtdcExchangeOrderField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeOrderField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeOrderField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcExchangeOrderField_reserve1 != NULL ) {
        if(CThostFtdcExchangeOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcExchangeOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeOrderField_reserve1, CThostFtdcExchangeOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeOrderField_reserve1 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeOrderField_TraderID != NULL ) {
        if(CThostFtdcExchangeOrderField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeOrderField_TraderID, CThostFtdcExchangeOrderField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeOrderField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeOrderField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeOrderField_InstallID;

    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcExchangeOrderField_OrderSubmitStatus;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcExchangeOrderField_NotifySequence;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeOrderField_TradingDay != NULL ) {
        if(CThostFtdcExchangeOrderField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcExchangeOrderField_TradingDay, CThostFtdcExchangeOrderField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcExchangeOrderField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcExchangeOrderField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcExchangeOrderField_SettlementID;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcExchangeOrderField_OrderSysID != NULL ) {
        if(CThostFtdcExchangeOrderField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcExchangeOrderField_OrderSysID, CThostFtdcExchangeOrderField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcExchangeOrderField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcExchangeOrderField_OrderSysID = NULL;
    }

    /// 报单来源
    /// typedef char TThostFtdcOrderSourceType
    data->OrderSource = CThostFtdcExchangeOrderField_OrderSource;

    /// 报单状态
    /// typedef char TThostFtdcOrderStatusType
    data->OrderStatus = CThostFtdcExchangeOrderField_OrderStatus;

    /// 报单类型
    /// typedef char TThostFtdcOrderTypeType
    data->OrderType = CThostFtdcExchangeOrderField_OrderType;

    /// 今成交数量
    /// typedef int TThostFtdcVolumeType
    data->VolumeTraded = CThostFtdcExchangeOrderField_VolumeTraded;

    /// 剩余数量
    /// typedef int TThostFtdcVolumeType
    data->VolumeTotal = CThostFtdcExchangeOrderField_VolumeTotal;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeOrderField_InsertDate != NULL ) {
        if(CThostFtdcExchangeOrderField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcExchangeOrderField_InsertDate, CThostFtdcExchangeOrderField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcExchangeOrderField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcExchangeOrderField_InsertDate = NULL;
    }

    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeOrderField_InsertTime != NULL ) {
        if(CThostFtdcExchangeOrderField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcExchangeOrderField_InsertTime, CThostFtdcExchangeOrderField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcExchangeOrderField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcExchangeOrderField_InsertTime = NULL;
    }

    /// 激活时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeOrderField_ActiveTime != NULL ) {
        if(CThostFtdcExchangeOrderField_ActiveTime_length >= (Py_ssize_t)sizeof(data->ActiveTime)) {
            PyErr_Format(PyExc_ValueError, "ActiveTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderField_ActiveTime_length);
            return -1;
        }
        // memset(data->ActiveTime, 0, sizeof(data->ActiveTime));
        // memcpy(data->ActiveTime, CThostFtdcExchangeOrderField_ActiveTime, CThostFtdcExchangeOrderField_ActiveTime_length);
        strncpy(data->ActiveTime, CThostFtdcExchangeOrderField_ActiveTime, sizeof(data->ActiveTime));
        CThostFtdcExchangeOrderField_ActiveTime = NULL;
    }

    /// 挂起时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeOrderField_SuspendTime != NULL ) {
        if(CThostFtdcExchangeOrderField_SuspendTime_length >= (Py_ssize_t)sizeof(data->SuspendTime)) {
            PyErr_Format(PyExc_ValueError, "SuspendTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderField_SuspendTime_length);
            return -1;
        }
        // memset(data->SuspendTime, 0, sizeof(data->SuspendTime));
        // memcpy(data->SuspendTime, CThostFtdcExchangeOrderField_SuspendTime, CThostFtdcExchangeOrderField_SuspendTime_length);
        strncpy(data->SuspendTime, CThostFtdcExchangeOrderField_SuspendTime, sizeof(data->SuspendTime));
        CThostFtdcExchangeOrderField_SuspendTime = NULL;
    }

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeOrderField_UpdateTime != NULL ) {
        if(CThostFtdcExchangeOrderField_UpdateTime_length >= (Py_ssize_t)sizeof(data->UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderField_UpdateTime_length);
            return -1;
        }
        // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
        // memcpy(data->UpdateTime, CThostFtdcExchangeOrderField_UpdateTime, CThostFtdcExchangeOrderField_UpdateTime_length);
        strncpy(data->UpdateTime, CThostFtdcExchangeOrderField_UpdateTime, sizeof(data->UpdateTime));
        CThostFtdcExchangeOrderField_UpdateTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeOrderField_CancelTime != NULL ) {
        if(CThostFtdcExchangeOrderField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcExchangeOrderField_CancelTime, CThostFtdcExchangeOrderField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcExchangeOrderField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcExchangeOrderField_CancelTime = NULL;
    }

    /// 最后修改交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeOrderField_ActiveTraderID != NULL ) {
        if(CThostFtdcExchangeOrderField_ActiveTraderID_length >= (Py_ssize_t)sizeof(data->ActiveTraderID)) {
            PyErr_Format(PyExc_ValueError, "ActiveTraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderField_ActiveTraderID_length);
            return -1;
        }
        // memset(data->ActiveTraderID, 0, sizeof(data->ActiveTraderID));
        // memcpy(data->ActiveTraderID, CThostFtdcExchangeOrderField_ActiveTraderID, CThostFtdcExchangeOrderField_ActiveTraderID_length);
        strncpy(data->ActiveTraderID, CThostFtdcExchangeOrderField_ActiveTraderID, sizeof(data->ActiveTraderID));
        CThostFtdcExchangeOrderField_ActiveTraderID = NULL;
    }

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeOrderField_ClearingPartID != NULL ) {
        if(CThostFtdcExchangeOrderField_ClearingPartID_length >= (Py_ssize_t)sizeof(data->ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeOrderField_ClearingPartID_length);
            return -1;
        }
        // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
        // memcpy(data->ClearingPartID, CThostFtdcExchangeOrderField_ClearingPartID, CThostFtdcExchangeOrderField_ClearingPartID_length);
        strncpy(data->ClearingPartID, CThostFtdcExchangeOrderField_ClearingPartID, sizeof(data->ClearingPartID));
        CThostFtdcExchangeOrderField_ClearingPartID = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcExchangeOrderField_SequenceNo;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcExchangeOrderField_BranchID != NULL ) {
        if(CThostFtdcExchangeOrderField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcExchangeOrderField_BranchID, CThostFtdcExchangeOrderField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcExchangeOrderField_BranchID, sizeof(data->BranchID));
        CThostFtdcExchangeOrderField_BranchID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExchangeOrderField_reserve2 != NULL ) {
        if(CThostFtdcExchangeOrderField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcExchangeOrderField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcExchangeOrderField_reserve2, CThostFtdcExchangeOrderField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcExchangeOrderField_reserve2, sizeof(data->reserve2));
        CThostFtdcExchangeOrderField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExchangeOrderField_MacAddress != NULL ) {
        if(CThostFtdcExchangeOrderField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExchangeOrderField_MacAddress, CThostFtdcExchangeOrderField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExchangeOrderField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExchangeOrderField_MacAddress = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcExchangeOrderField_ExchangeInstID != NULL ) {
        if(CThostFtdcExchangeOrderField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcExchangeOrderField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcExchangeOrderField_ExchangeInstID, CThostFtdcExchangeOrderField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcExchangeOrderField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcExchangeOrderField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExchangeOrderField_IPAddress != NULL ) {
        if(CThostFtdcExchangeOrderField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExchangeOrderField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExchangeOrderField_IPAddress, CThostFtdcExchangeOrderField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExchangeOrderField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExchangeOrderField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:c,s:c,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y}"
        , "OrderPriceType", data->OrderPriceType
        , "Direction", data->Direction
        , "CombOffsetFlag", data->CombOffsetFlag//, (Py_ssize_t)sizeof(data->CombOffsetFlag)
        , "CombHedgeFlag", data->CombHedgeFlag//, (Py_ssize_t)sizeof(data->CombHedgeFlag)
        , "LimitPrice", data->LimitPrice
        , "VolumeTotalOriginal", data->VolumeTotalOriginal
        , "TimeCondition", data->TimeCondition
        , "GTDDate", data->GTDDate//, (Py_ssize_t)sizeof(data->GTDDate)
        , "VolumeCondition", data->VolumeCondition
        , "MinVolume", data->MinVolume
        , "ContingentCondition", data->ContingentCondition
        , "StopPrice", data->StopPrice
        , "ForceCloseReason", data->ForceCloseReason
        , "IsAutoSuspend", data->IsAutoSuspend
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "RequestID", data->RequestID
        , "OrderLocalID", data->OrderLocalID//, (Py_ssize_t)sizeof(data->OrderLocalID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "OrderSubmitStatus", data->OrderSubmitStatus
        , "NotifySequence", data->NotifySequence
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "OrderSource", data->OrderSource
        , "OrderStatus", data->OrderStatus
        , "OrderType", data->OrderType
        , "VolumeTraded", data->VolumeTraded
        , "VolumeTotal", data->VolumeTotal
        , "InsertDate", data->InsertDate//, (Py_ssize_t)sizeof(data->InsertDate)
        , "InsertTime", data->InsertTime//, (Py_ssize_t)sizeof(data->InsertTime)
        , "ActiveTime", data->ActiveTime//, (Py_ssize_t)sizeof(data->ActiveTime)
        , "SuspendTime", data->SuspendTime//, (Py_ssize_t)sizeof(data->SuspendTime)
        , "UpdateTime", data->UpdateTime//, (Py_ssize_t)sizeof(data->UpdateTime)
        , "CancelTime", data->CancelTime//, (Py_ssize_t)sizeof(data->CancelTime)
        , "ActiveTraderID", data->ActiveTraderID//, (Py_ssize_t)sizeof(data->ActiveTraderID)
        , "ClearingPartID", data->ClearingPartID//, (Py_ssize_t)sizeof(data->ClearingPartID)
        , "SequenceNo", data->SequenceNo
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderField repr");
        return NULL;
    }

    return repr;
}


/// 报单价格条件
/// typedef char TThostFtdcOrderPriceTypeType
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_OrderPriceType(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderPriceType), 1);
}

static int PyCThostFtdcExchangeOrderFieldType_set_OrderPriceType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderPriceType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::OrderPriceType)) {
        PyErr_SetString(PyExc_ValueError, "OrderPriceType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    data->OrderPriceType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcExchangeOrderFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合开平标志
/// typedef char TThostFtdcCombOffsetFlagType[5]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_CombOffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombOffsetFlag, (Py_ssize_t)sizeof(data->CombOffsetFlag));
    return PyBytes_FromString(data->CombOffsetFlag);
}

static int PyCThostFtdcExchangeOrderFieldType_set_CombOffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombOffsetFlag Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::CombOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombOffsetFlag must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->CombOffsetFlag, 0, sizeof(data->CombOffsetFlag));
    // memcpy(data->CombOffsetFlag, buf, len);
    strncpy(data->CombOffsetFlag, buf, sizeof(data->CombOffsetFlag));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合投机套保标志
/// typedef char TThostFtdcCombHedgeFlagType[5]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_CombHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombHedgeFlag, (Py_ssize_t)sizeof(data->CombHedgeFlag));
    return PyBytes_FromString(data->CombHedgeFlag);
}

static int PyCThostFtdcExchangeOrderFieldType_set_CombHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::CombHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
    // memcpy(data->CombHedgeFlag, buf, len);
    strncpy(data->CombHedgeFlag, buf, sizeof(data->CombHedgeFlag));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 有效期类型
/// typedef char TThostFtdcTimeConditionType
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_TimeCondition(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TimeCondition), 1);
}

static int PyCThostFtdcExchangeOrderFieldType_set_TimeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::TimeCondition)) {
        PyErr_SetString(PyExc_ValueError, "TimeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    data->TimeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// GTD日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_GTDDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->GTDDate, (Py_ssize_t)sizeof(data->GTDDate));
    return PyBytes_FromString(data->GTDDate);
}

static int PyCThostFtdcExchangeOrderFieldType_set_GTDDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "GTDDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::GTDDate)) {
        PyErr_SetString(PyExc_ValueError, "GTDDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->GTDDate, 0, sizeof(data->GTDDate));
    // memcpy(data->GTDDate, buf, len);
    strncpy(data->GTDDate, buf, sizeof(data->GTDDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交量类型
/// typedef char TThostFtdcVolumeConditionType
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_VolumeCondition(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VolumeCondition), 1);
}

static int PyCThostFtdcExchangeOrderFieldType_set_VolumeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VolumeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::VolumeCondition)) {
        PyErr_SetString(PyExc_ValueError, "VolumeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    data->VolumeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 触发条件
/// typedef char TThostFtdcContingentConditionType
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_ContingentCondition(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ContingentCondition), 1);
}

static int PyCThostFtdcExchangeOrderFieldType_set_ContingentCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ContingentCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::ContingentCondition)) {
        PyErr_SetString(PyExc_ValueError, "ContingentCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    data->ContingentCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 强平原因
/// typedef char TThostFtdcForceCloseReasonType
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_ForceCloseReason(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ForceCloseReason), 1);
}

static int PyCThostFtdcExchangeOrderFieldType_set_ForceCloseReason(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForceCloseReason Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::ForceCloseReason)) {
        PyErr_SetString(PyExc_ValueError, "ForceCloseReason must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    data->ForceCloseReason = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExchangeOrderFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcExchangeOrderFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeOrderFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeOrderFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeOrderFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcExchangeOrderFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcExchangeOrderFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcExchangeOrderFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单来源
/// typedef char TThostFtdcOrderSourceType
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_OrderSource(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSource), 1);
}

static int PyCThostFtdcExchangeOrderFieldType_set_OrderSource(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSource Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::OrderSource)) {
        PyErr_SetString(PyExc_ValueError, "OrderSource must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    data->OrderSource = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单状态
/// typedef char TThostFtdcOrderStatusType
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_OrderStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderStatus), 1);
}

static int PyCThostFtdcExchangeOrderFieldType_set_OrderStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::OrderStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    data->OrderStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单类型
/// typedef char TThostFtdcOrderTypeType
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_OrderType(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderType), 1);
}

static int PyCThostFtdcExchangeOrderFieldType_set_OrderType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::OrderType)) {
        PyErr_SetString(PyExc_ValueError, "OrderType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    data->OrderType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcExchangeOrderFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 委托时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcExchangeOrderFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 激活时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_ActiveTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveTime, (Py_ssize_t)sizeof(data->ActiveTime));
    return PyBytes_FromString(data->ActiveTime);
}

static int PyCThostFtdcExchangeOrderFieldType_set_ActiveTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::ActiveTime)) {
        PyErr_SetString(PyExc_ValueError, "ActiveTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->ActiveTime, 0, sizeof(data->ActiveTime));
    // memcpy(data->ActiveTime, buf, len);
    strncpy(data->ActiveTime, buf, sizeof(data->ActiveTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 挂起时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_SuspendTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SuspendTime, (Py_ssize_t)sizeof(data->SuspendTime));
    return PyBytes_FromString(data->SuspendTime);
}

static int PyCThostFtdcExchangeOrderFieldType_set_SuspendTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SuspendTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::SuspendTime)) {
        PyErr_SetString(PyExc_ValueError, "SuspendTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->SuspendTime, 0, sizeof(data->SuspendTime));
    // memcpy(data->SuspendTime, buf, len);
    strncpy(data->SuspendTime, buf, sizeof(data->SuspendTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后修改时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_UpdateTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UpdateTime, (Py_ssize_t)sizeof(data->UpdateTime));
    return PyBytes_FromString(data->UpdateTime);
}

static int PyCThostFtdcExchangeOrderFieldType_set_UpdateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::UpdateTime)) {
        PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
    // memcpy(data->UpdateTime, buf, len);
    strncpy(data->UpdateTime, buf, sizeof(data->UpdateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcExchangeOrderFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后修改交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_ActiveTraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveTraderID, (Py_ssize_t)sizeof(data->ActiveTraderID));
    return PyBytes_FromString(data->ActiveTraderID);
}

static int PyCThostFtdcExchangeOrderFieldType_set_ActiveTraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveTraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::ActiveTraderID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveTraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->ActiveTraderID, 0, sizeof(data->ActiveTraderID));
    // memcpy(data->ActiveTraderID, buf, len);
    strncpy(data->ActiveTraderID, buf, sizeof(data->ActiveTraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算会员编号
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_ClearingPartID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClearingPartID, (Py_ssize_t)sizeof(data->ClearingPartID));
    return PyBytes_FromString(data->ClearingPartID);
}

static int PyCThostFtdcExchangeOrderFieldType_set_ClearingPartID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
    // memcpy(data->ClearingPartID, buf, len);
    strncpy(data->ClearingPartID, buf, sizeof(data->ClearingPartID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcExchangeOrderFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcExchangeOrderFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExchangeOrderFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcExchangeOrderFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExchangeOrderFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExchangeOrderFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderFieldData>(self);
    CThostFtdcExchangeOrderField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeOrderFieldType_members[] = {
    /// 价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "LimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.LimitPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("价格")
    },
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "VolumeTotalOriginal",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.VolumeTotalOriginal),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
    },
    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "MinVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.MinVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最小成交量")
    },
    /// 止损价
    /// typedef double TThostFtdcPriceType
    {
        .name = "StopPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.StopPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("止损价")
    },
    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsAutoSuspend",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.IsAutoSuspend),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("自动挂起标志")
    },
    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    {
        .name = "RequestID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "NotifySequence",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.NotifySequence),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报单提示序号")
    },
    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    {
        .name = "SettlementID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    /// 今成交数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "VolumeTraded",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.VolumeTraded),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("今成交数量")
    },
    /// 剩余数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "VolumeTotal",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.VolumeTotal),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("剩余数量")
    },
    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeOrderFieldType_getsets[] = {
    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    {
    .name = "OrderPriceType",
    .get = PyCThostFtdcExchangeOrderFieldType_get_OrderPriceType,
    .set = PyCThostFtdcExchangeOrderFieldType_set_OrderPriceType,
    .doc = PyDoc_STR("报单价格条件"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcExchangeOrderFieldType_get_Direction,
    .set = PyCThostFtdcExchangeOrderFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    {
    .name = "CombOffsetFlag",
    .get = PyCThostFtdcExchangeOrderFieldType_get_CombOffsetFlag,
    .set = PyCThostFtdcExchangeOrderFieldType_set_CombOffsetFlag,
    .doc = PyDoc_STR("组合开平标志"),
    },
    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    {
    .name = "CombHedgeFlag",
    .get = PyCThostFtdcExchangeOrderFieldType_get_CombHedgeFlag,
    .set = PyCThostFtdcExchangeOrderFieldType_set_CombHedgeFlag,
    .doc = PyDoc_STR("组合投机套保标志"),
    },
    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    {
    .name = "TimeCondition",
    .get = PyCThostFtdcExchangeOrderFieldType_get_TimeCondition,
    .set = PyCThostFtdcExchangeOrderFieldType_set_TimeCondition,
    .doc = PyDoc_STR("有效期类型"),
    },
    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "GTDDate",
    .get = PyCThostFtdcExchangeOrderFieldType_get_GTDDate,
    .set = PyCThostFtdcExchangeOrderFieldType_set_GTDDate,
    .doc = PyDoc_STR("GTD日期"),
    },
    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    {
    .name = "VolumeCondition",
    .get = PyCThostFtdcExchangeOrderFieldType_get_VolumeCondition,
    .set = PyCThostFtdcExchangeOrderFieldType_set_VolumeCondition,
    .doc = PyDoc_STR("成交量类型"),
    },
    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    {
    .name = "ContingentCondition",
    .get = PyCThostFtdcExchangeOrderFieldType_get_ContingentCondition,
    .set = PyCThostFtdcExchangeOrderFieldType_set_ContingentCondition,
    .doc = PyDoc_STR("触发条件"),
    },
    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    {
    .name = "ForceCloseReason",
    .get = PyCThostFtdcExchangeOrderFieldType_get_ForceCloseReason,
    .set = PyCThostFtdcExchangeOrderFieldType_set_ForceCloseReason,
    .doc = PyDoc_STR("强平原因"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExchangeOrderFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExchangeOrderFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcExchangeOrderFieldType_get_OrderLocalID,
    .set = PyCThostFtdcExchangeOrderFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeOrderFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeOrderFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeOrderFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeOrderFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeOrderFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeOrderFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeOrderFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcExchangeOrderFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcExchangeOrderFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("报单提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcExchangeOrderFieldType_get_TradingDay,
    .set = PyCThostFtdcExchangeOrderFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcExchangeOrderFieldType_get_OrderSysID,
    .set = PyCThostFtdcExchangeOrderFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 报单来源
    /// typedef char TThostFtdcOrderSourceType
    {
    .name = "OrderSource",
    .get = PyCThostFtdcExchangeOrderFieldType_get_OrderSource,
    .set = PyCThostFtdcExchangeOrderFieldType_set_OrderSource,
    .doc = PyDoc_STR("报单来源"),
    },
    /// 报单状态
    /// typedef char TThostFtdcOrderStatusType
    {
    .name = "OrderStatus",
    .get = PyCThostFtdcExchangeOrderFieldType_get_OrderStatus,
    .set = PyCThostFtdcExchangeOrderFieldType_set_OrderStatus,
    .doc = PyDoc_STR("报单状态"),
    },
    /// 报单类型
    /// typedef char TThostFtdcOrderTypeType
    {
    .name = "OrderType",
    .get = PyCThostFtdcExchangeOrderFieldType_get_OrderType,
    .set = PyCThostFtdcExchangeOrderFieldType_set_OrderType,
    .doc = PyDoc_STR("报单类型"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcExchangeOrderFieldType_get_InsertDate,
    .set = PyCThostFtdcExchangeOrderFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcExchangeOrderFieldType_get_InsertTime,
    .set = PyCThostFtdcExchangeOrderFieldType_set_InsertTime,
    .doc = PyDoc_STR("委托时间"),
    },
    /// 激活时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActiveTime",
    .get = PyCThostFtdcExchangeOrderFieldType_get_ActiveTime,
    .set = PyCThostFtdcExchangeOrderFieldType_set_ActiveTime,
    .doc = PyDoc_STR("激活时间"),
    },
    /// 挂起时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "SuspendTime",
    .get = PyCThostFtdcExchangeOrderFieldType_get_SuspendTime,
    .set = PyCThostFtdcExchangeOrderFieldType_set_SuspendTime,
    .doc = PyDoc_STR("挂起时间"),
    },
    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "UpdateTime",
    .get = PyCThostFtdcExchangeOrderFieldType_get_UpdateTime,
    .set = PyCThostFtdcExchangeOrderFieldType_set_UpdateTime,
    .doc = PyDoc_STR("最后修改时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcExchangeOrderFieldType_get_CancelTime,
    .set = PyCThostFtdcExchangeOrderFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 最后修改交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "ActiveTraderID",
    .get = PyCThostFtdcExchangeOrderFieldType_get_ActiveTraderID,
    .set = PyCThostFtdcExchangeOrderFieldType_set_ActiveTraderID,
    .doc = PyDoc_STR("最后修改交易所交易员代码"),
    },
    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ClearingPartID",
    .get = PyCThostFtdcExchangeOrderFieldType_get_ClearingPartID,
    .set = PyCThostFtdcExchangeOrderFieldType_set_ClearingPartID,
    .doc = PyDoc_STR("结算会员编号"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcExchangeOrderFieldType_get_BranchID,
    .set = PyCThostFtdcExchangeOrderFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcExchangeOrderFieldType_get_reserve2,
    .set = PyCThostFtdcExchangeOrderFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExchangeOrderFieldType_get_MacAddress,
    .set = PyCThostFtdcExchangeOrderFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcExchangeOrderFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcExchangeOrderFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExchangeOrderFieldType_get_IPAddress,
    .set = PyCThostFtdcExchangeOrderFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所报单")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所报单")},
    {Py_tp_members, PyCThostFtdcExchangeOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}