
#include "PyCThostFtdcOrderField.h"

///报单

static int PyCThostFtdcOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OrderSysID", "OrderSource", "OrderStatus", "OrderType", "VolumeTraded", "VolumeTotal", "InsertDate", "InsertTime", "ActiveTime", "SuspendTime", "UpdateTime", "CancelTime", "ActiveTraderID", "ClearingPartID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "UserForceClose", "ActiveUserID", "BrokerOrderSeq", "RelativeOrderSysID", "ZCETotalTradedVolume", "IsSwapOrder", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress", "OrderMemo", "SessionReqSeq", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcOrderField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcOrderField_reserve1_length = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcOrderField_OrderRef = NULL;
    Py_ssize_t CThostFtdcOrderField_OrderRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcOrderField_UserID = NULL;
    Py_ssize_t CThostFtdcOrderField_UserID_length = 0;

    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    char CThostFtdcOrderField_OrderPriceType = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcOrderField_Direction = 0;

    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    char *CThostFtdcOrderField_CombOffsetFlag = NULL;
    Py_ssize_t CThostFtdcOrderField_CombOffsetFlag_length = 0;

    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    char *CThostFtdcOrderField_CombHedgeFlag = NULL;
    Py_ssize_t CThostFtdcOrderField_CombHedgeFlag_length = 0;

    /// 价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcOrderField_LimitPrice = 0.0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcOrderField_VolumeTotalOriginal = 0;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    char CThostFtdcOrderField_TimeCondition = 0;

    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcOrderField_GTDDate = NULL;
    Py_ssize_t CThostFtdcOrderField_GTDDate_length = 0;

    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    char CThostFtdcOrderField_VolumeCondition = 0;

    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcOrderField_MinVolume = 0;

    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    char CThostFtdcOrderField_ContingentCondition = 0;

    /// 止损价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcOrderField_StopPrice = 0.0;

    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    char CThostFtdcOrderField_ForceCloseReason = 0;

    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcOrderField_IsAutoSuspend = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcOrderField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcOrderField_BusinessUnit_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcOrderField_RequestID = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcOrderField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcOrderField_OrderLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcOrderField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcOrderField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcOrderField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcOrderField_ClientID = NULL;
    Py_ssize_t CThostFtdcOrderField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcOrderField_reserve2 = NULL;
    Py_ssize_t CThostFtdcOrderField_reserve2_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcOrderField_TraderID = NULL;
    Py_ssize_t CThostFtdcOrderField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcOrderField_InstallID = 0;

    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcOrderField_OrderSubmitStatus = 0;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcOrderField_NotifySequence = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcOrderField_TradingDay = NULL;
    Py_ssize_t CThostFtdcOrderField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcOrderField_SettlementID = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcOrderField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcOrderField_OrderSysID_length = 0;

    /// 报单来源
    /// typedef char TThostFtdcOrderSourceType
    char CThostFtdcOrderField_OrderSource = 0;

    /// 报单状态
    /// typedef char TThostFtdcOrderStatusType
    char CThostFtdcOrderField_OrderStatus = 0;

    /// 报单类型
    /// typedef char TThostFtdcOrderTypeType
    char CThostFtdcOrderField_OrderType = 0;

    /// 今成交数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcOrderField_VolumeTraded = 0;

    /// 剩余数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcOrderField_VolumeTotal = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcOrderField_InsertDate = NULL;
    Py_ssize_t CThostFtdcOrderField_InsertDate_length = 0;

    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcOrderField_InsertTime = NULL;
    Py_ssize_t CThostFtdcOrderField_InsertTime_length = 0;

    /// 激活时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcOrderField_ActiveTime = NULL;
    Py_ssize_t CThostFtdcOrderField_ActiveTime_length = 0;

    /// 挂起时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcOrderField_SuspendTime = NULL;
    Py_ssize_t CThostFtdcOrderField_SuspendTime_length = 0;

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcOrderField_UpdateTime = NULL;
    Py_ssize_t CThostFtdcOrderField_UpdateTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcOrderField_CancelTime = NULL;
    Py_ssize_t CThostFtdcOrderField_CancelTime_length = 0;

    /// 最后修改交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcOrderField_ActiveTraderID = NULL;
    Py_ssize_t CThostFtdcOrderField_ActiveTraderID_length = 0;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcOrderField_ClearingPartID = NULL;
    Py_ssize_t CThostFtdcOrderField_ClearingPartID_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcOrderField_SequenceNo = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcOrderField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcOrderField_SessionID = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcOrderField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcOrderField_UserProductInfo_length = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcOrderField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcOrderField_StatusMsg_length = 0;

    /// 用户强平标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcOrderField_UserForceClose = 0;

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcOrderField_ActiveUserID = NULL;
    Py_ssize_t CThostFtdcOrderField_ActiveUserID_length = 0;

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcOrderField_BrokerOrderSeq = 0;

    /// 相关报单
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcOrderField_RelativeOrderSysID = NULL;
    Py_ssize_t CThostFtdcOrderField_RelativeOrderSysID_length = 0;

    /// 郑商所成交数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcOrderField_ZCETotalTradedVolume = 0;

    /// 互换单标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcOrderField_IsSwapOrder = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcOrderField_BranchID = NULL;
    Py_ssize_t CThostFtdcOrderField_BranchID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcOrderField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcOrderField_InvestUnitID_length = 0;

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcOrderField_AccountID = NULL;
    Py_ssize_t CThostFtdcOrderField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcOrderField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcOrderField_CurrencyID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcOrderField_reserve3 = NULL;
    Py_ssize_t CThostFtdcOrderField_reserve3_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcOrderField_MacAddress = NULL;
    Py_ssize_t CThostFtdcOrderField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcOrderField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcOrderField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcOrderField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcOrderField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcOrderField_IPAddress = NULL;
    Py_ssize_t CThostFtdcOrderField_IPAddress_length = 0;

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    char *CThostFtdcOrderField_OrderMemo = NULL;
    Py_ssize_t CThostFtdcOrderField_OrderMemo_length = 0;

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    int CThostFtdcOrderField_SessionReqSeq = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iy#y#y#y#y#y#iciy#iy#ccciiy#y#y#y#y#y#y#y#iiiy#y#iy#iy#iiy#y#y#y#y#y#y#y#y#y#i", (char **)kwlist
        , &CThostFtdcOrderField_BrokerID, &CThostFtdcOrderField_BrokerID_length
        , &CThostFtdcOrderField_InvestorID, &CThostFtdcOrderField_InvestorID_length
        , &CThostFtdcOrderField_reserve1, &CThostFtdcOrderField_reserve1_length
        , &CThostFtdcOrderField_OrderRef, &CThostFtdcOrderField_OrderRef_length
        , &CThostFtdcOrderField_UserID, &CThostFtdcOrderField_UserID_length
        , &CThostFtdcOrderField_OrderPriceType
        , &CThostFtdcOrderField_Direction
        , &CThostFtdcOrderField_CombOffsetFlag, &CThostFtdcOrderField_CombOffsetFlag_length
        , &CThostFtdcOrderField_CombHedgeFlag, &CThostFtdcOrderField_CombHedgeFlag_length
        , &CThostFtdcOrderField_LimitPrice
        , &CThostFtdcOrderField_VolumeTotalOriginal
        , &CThostFtdcOrderField_TimeCondition
        , &CThostFtdcOrderField_GTDDate, &CThostFtdcOrderField_GTDDate_length
        , &CThostFtdcOrderField_VolumeCondition
        , &CThostFtdcOrderField_MinVolume
        , &CThostFtdcOrderField_ContingentCondition
        , &CThostFtdcOrderField_StopPrice
        , &CThostFtdcOrderField_ForceCloseReason
        , &CThostFtdcOrderField_IsAutoSuspend
        , &CThostFtdcOrderField_BusinessUnit, &CThostFtdcOrderField_BusinessUnit_length
        , &CThostFtdcOrderField_RequestID
        , &CThostFtdcOrderField_OrderLocalID, &CThostFtdcOrderField_OrderLocalID_length
        , &CThostFtdcOrderField_ExchangeID, &CThostFtdcOrderField_ExchangeID_length
        , &CThostFtdcOrderField_ParticipantID, &CThostFtdcOrderField_ParticipantID_length
        , &CThostFtdcOrderField_ClientID, &CThostFtdcOrderField_ClientID_length
        , &CThostFtdcOrderField_reserve2, &CThostFtdcOrderField_reserve2_length
        , &CThostFtdcOrderField_TraderID, &CThostFtdcOrderField_TraderID_length
        , &CThostFtdcOrderField_InstallID
        , &CThostFtdcOrderField_OrderSubmitStatus
        , &CThostFtdcOrderField_NotifySequence
        , &CThostFtdcOrderField_TradingDay, &CThostFtdcOrderField_TradingDay_length
        , &CThostFtdcOrderField_SettlementID
        , &CThostFtdcOrderField_OrderSysID, &CThostFtdcOrderField_OrderSysID_length
        , &CThostFtdcOrderField_OrderSource
        , &CThostFtdcOrderField_OrderStatus
        , &CThostFtdcOrderField_OrderType
        , &CThostFtdcOrderField_VolumeTraded
        , &CThostFtdcOrderField_VolumeTotal
        , &CThostFtdcOrderField_InsertDate, &CThostFtdcOrderField_InsertDate_length
        , &CThostFtdcOrderField_InsertTime, &CThostFtdcOrderField_InsertTime_length
        , &CThostFtdcOrderField_ActiveTime, &CThostFtdcOrderField_ActiveTime_length
        , &CThostFtdcOrderField_SuspendTime, &CThostFtdcOrderField_SuspendTime_length
        , &CThostFtdcOrderField_UpdateTime, &CThostFtdcOrderField_UpdateTime_length
        , &CThostFtdcOrderField_CancelTime, &CThostFtdcOrderField_CancelTime_length
        , &CThostFtdcOrderField_ActiveTraderID, &CThostFtdcOrderField_ActiveTraderID_length
        , &CThostFtdcOrderField_ClearingPartID, &CThostFtdcOrderField_ClearingPartID_length
        , &CThostFtdcOrderField_SequenceNo
        , &CThostFtdcOrderField_FrontID
        , &CThostFtdcOrderField_SessionID
        , &CThostFtdcOrderField_UserProductInfo, &CThostFtdcOrderField_UserProductInfo_length
        , &CThostFtdcOrderField_StatusMsg, &CThostFtdcOrderField_StatusMsg_length
        , &CThostFtdcOrderField_UserForceClose
        , &CThostFtdcOrderField_ActiveUserID, &CThostFtdcOrderField_ActiveUserID_length
        , &CThostFtdcOrderField_BrokerOrderSeq
        , &CThostFtdcOrderField_RelativeOrderSysID, &CThostFtdcOrderField_RelativeOrderSysID_length
        , &CThostFtdcOrderField_ZCETotalTradedVolume
        , &CThostFtdcOrderField_IsSwapOrder
        , &CThostFtdcOrderField_BranchID, &CThostFtdcOrderField_BranchID_length
        , &CThostFtdcOrderField_InvestUnitID, &CThostFtdcOrderField_InvestUnitID_length
        , &CThostFtdcOrderField_AccountID, &CThostFtdcOrderField_AccountID_length
        , &CThostFtdcOrderField_CurrencyID, &CThostFtdcOrderField_CurrencyID_length
        , &CThostFtdcOrderField_reserve3, &CThostFtdcOrderField_reserve3_length
        , &CThostFtdcOrderField_MacAddress, &CThostFtdcOrderField_MacAddress_length
        , &CThostFtdcOrderField_InstrumentID, &CThostFtdcOrderField_InstrumentID_length
        , &CThostFtdcOrderField_ExchangeInstID, &CThostFtdcOrderField_ExchangeInstID_length
        , &CThostFtdcOrderField_IPAddress, &CThostFtdcOrderField_IPAddress_length
        , &CThostFtdcOrderField_OrderMemo, &CThostFtdcOrderField_OrderMemo_length
        , &CThostFtdcOrderField_SessionReqSeq
    )) {
        return -1;
    }

    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcOrderField_BrokerID != NULL ) {
        if(CThostFtdcOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcOrderField_BrokerID, CThostFtdcOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcOrderField_InvestorID != NULL ) {
        if(CThostFtdcOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcOrderField_InvestorID, CThostFtdcOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcOrderField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcOrderField_reserve1 != NULL ) {
        if(CThostFtdcOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcOrderField_reserve1, CThostFtdcOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcOrderField_reserve1 = NULL;
    }

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcOrderField_OrderRef != NULL ) {
        if(CThostFtdcOrderField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcOrderField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcOrderField_OrderRef, CThostFtdcOrderField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcOrderField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcOrderField_OrderRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcOrderField_UserID != NULL ) {
        if(CThostFtdcOrderField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcOrderField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcOrderField_UserID, CThostFtdcOrderField_UserID_length);
        strncpy(data->UserID, CThostFtdcOrderField_UserID, sizeof(data->UserID));
        CThostFtdcOrderField_UserID = NULL;
    }

    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    data->OrderPriceType = CThostFtdcOrderField_OrderPriceType;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcOrderField_Direction;

    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    if( CThostFtdcOrderField_CombOffsetFlag != NULL ) {
        if(CThostFtdcOrderField_CombOffsetFlag_length >= (Py_ssize_t)sizeof(data->CombOffsetFlag)) {
            PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is 4)", CThostFtdcOrderField_CombOffsetFlag_length);
            return -1;
        }
        // memset(data->CombOffsetFlag, 0, sizeof(data->CombOffsetFlag));
        // memcpy(data->CombOffsetFlag, CThostFtdcOrderField_CombOffsetFlag, CThostFtdcOrderField_CombOffsetFlag_length);
        strncpy(data->CombOffsetFlag, CThostFtdcOrderField_CombOffsetFlag, sizeof(data->CombOffsetFlag));
        CThostFtdcOrderField_CombOffsetFlag = NULL;
    }

    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    if( CThostFtdcOrderField_CombHedgeFlag != NULL ) {
        if(CThostFtdcOrderField_CombHedgeFlag_length >= (Py_ssize_t)sizeof(data->CombHedgeFlag)) {
            PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is 4)", CThostFtdcOrderField_CombHedgeFlag_length);
            return -1;
        }
        // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
        // memcpy(data->CombHedgeFlag, CThostFtdcOrderField_CombHedgeFlag, CThostFtdcOrderField_CombHedgeFlag_length);
        strncpy(data->CombHedgeFlag, CThostFtdcOrderField_CombHedgeFlag, sizeof(data->CombHedgeFlag));
        CThostFtdcOrderField_CombHedgeFlag = NULL;
    }

    /// 价格
    /// typedef double TThostFtdcPriceType
    data->LimitPrice = CThostFtdcOrderField_LimitPrice;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->VolumeTotalOriginal = CThostFtdcOrderField_VolumeTotalOriginal;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    data->TimeCondition = CThostFtdcOrderField_TimeCondition;

    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcOrderField_GTDDate != NULL ) {
        if(CThostFtdcOrderField_GTDDate_length >= (Py_ssize_t)sizeof(data->GTDDate)) {
            PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is 8)", CThostFtdcOrderField_GTDDate_length);
            return -1;
        }
        // memset(data->GTDDate, 0, sizeof(data->GTDDate));
        // memcpy(data->GTDDate, CThostFtdcOrderField_GTDDate, CThostFtdcOrderField_GTDDate_length);
        strncpy(data->GTDDate, CThostFtdcOrderField_GTDDate, sizeof(data->GTDDate));
        CThostFtdcOrderField_GTDDate = NULL;
    }

    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    data->VolumeCondition = CThostFtdcOrderField_VolumeCondition;

    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    data->MinVolume = CThostFtdcOrderField_MinVolume;

    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    data->ContingentCondition = CThostFtdcOrderField_ContingentCondition;

    /// 止损价
    /// typedef double TThostFtdcPriceType
    data->StopPrice = CThostFtdcOrderField_StopPrice;

    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    data->ForceCloseReason = CThostFtdcOrderField_ForceCloseReason;

    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    data->IsAutoSuspend = CThostFtdcOrderField_IsAutoSuspend;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcOrderField_BusinessUnit != NULL ) {
        if(CThostFtdcOrderField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcOrderField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcOrderField_BusinessUnit, CThostFtdcOrderField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcOrderField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcOrderField_BusinessUnit = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcOrderField_RequestID;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcOrderField_OrderLocalID != NULL ) {
        if(CThostFtdcOrderField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcOrderField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcOrderField_OrderLocalID, CThostFtdcOrderField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcOrderField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcOrderField_OrderLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcOrderField_ExchangeID != NULL ) {
        if(CThostFtdcOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcOrderField_ExchangeID, CThostFtdcOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcOrderField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcOrderField_ParticipantID != NULL ) {
        if(CThostFtdcOrderField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcOrderField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcOrderField_ParticipantID, CThostFtdcOrderField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcOrderField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcOrderField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcOrderField_ClientID != NULL ) {
        if(CThostFtdcOrderField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcOrderField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcOrderField_ClientID, CThostFtdcOrderField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcOrderField_ClientID, sizeof(data->ClientID));
        CThostFtdcOrderField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcOrderField_reserve2 != NULL ) {
        if(CThostFtdcOrderField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcOrderField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcOrderField_reserve2, CThostFtdcOrderField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcOrderField_reserve2, sizeof(data->reserve2));
        CThostFtdcOrderField_reserve2 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcOrderField_TraderID != NULL ) {
        if(CThostFtdcOrderField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcOrderField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcOrderField_TraderID, CThostFtdcOrderField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcOrderField_TraderID, sizeof(data->TraderID));
        CThostFtdcOrderField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcOrderField_InstallID;

    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcOrderField_OrderSubmitStatus;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcOrderField_NotifySequence;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcOrderField_TradingDay != NULL ) {
        if(CThostFtdcOrderField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcOrderField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcOrderField_TradingDay, CThostFtdcOrderField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcOrderField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcOrderField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcOrderField_SettlementID;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcOrderField_OrderSysID != NULL ) {
        if(CThostFtdcOrderField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcOrderField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcOrderField_OrderSysID, CThostFtdcOrderField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcOrderField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcOrderField_OrderSysID = NULL;
    }

    /// 报单来源
    /// typedef char TThostFtdcOrderSourceType
    data->OrderSource = CThostFtdcOrderField_OrderSource;

    /// 报单状态
    /// typedef char TThostFtdcOrderStatusType
    data->OrderStatus = CThostFtdcOrderField_OrderStatus;

    /// 报单类型
    /// typedef char TThostFtdcOrderTypeType
    data->OrderType = CThostFtdcOrderField_OrderType;

    /// 今成交数量
    /// typedef int TThostFtdcVolumeType
    data->VolumeTraded = CThostFtdcOrderField_VolumeTraded;

    /// 剩余数量
    /// typedef int TThostFtdcVolumeType
    data->VolumeTotal = CThostFtdcOrderField_VolumeTotal;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcOrderField_InsertDate != NULL ) {
        if(CThostFtdcOrderField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcOrderField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcOrderField_InsertDate, CThostFtdcOrderField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcOrderField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcOrderField_InsertDate = NULL;
    }

    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcOrderField_InsertTime != NULL ) {
        if(CThostFtdcOrderField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcOrderField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcOrderField_InsertTime, CThostFtdcOrderField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcOrderField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcOrderField_InsertTime = NULL;
    }

    /// 激活时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcOrderField_ActiveTime != NULL ) {
        if(CThostFtdcOrderField_ActiveTime_length >= (Py_ssize_t)sizeof(data->ActiveTime)) {
            PyErr_Format(PyExc_ValueError, "ActiveTime too long: length=%zd (max allowed is 8)", CThostFtdcOrderField_ActiveTime_length);
            return -1;
        }
        // memset(data->ActiveTime, 0, sizeof(data->ActiveTime));
        // memcpy(data->ActiveTime, CThostFtdcOrderField_ActiveTime, CThostFtdcOrderField_ActiveTime_length);
        strncpy(data->ActiveTime, CThostFtdcOrderField_ActiveTime, sizeof(data->ActiveTime));
        CThostFtdcOrderField_ActiveTime = NULL;
    }

    /// 挂起时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcOrderField_SuspendTime != NULL ) {
        if(CThostFtdcOrderField_SuspendTime_length >= (Py_ssize_t)sizeof(data->SuspendTime)) {
            PyErr_Format(PyExc_ValueError, "SuspendTime too long: length=%zd (max allowed is 8)", CThostFtdcOrderField_SuspendTime_length);
            return -1;
        }
        // memset(data->SuspendTime, 0, sizeof(data->SuspendTime));
        // memcpy(data->SuspendTime, CThostFtdcOrderField_SuspendTime, CThostFtdcOrderField_SuspendTime_length);
        strncpy(data->SuspendTime, CThostFtdcOrderField_SuspendTime, sizeof(data->SuspendTime));
        CThostFtdcOrderField_SuspendTime = NULL;
    }

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcOrderField_UpdateTime != NULL ) {
        if(CThostFtdcOrderField_UpdateTime_length >= (Py_ssize_t)sizeof(data->UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is 8)", CThostFtdcOrderField_UpdateTime_length);
            return -1;
        }
        // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
        // memcpy(data->UpdateTime, CThostFtdcOrderField_UpdateTime, CThostFtdcOrderField_UpdateTime_length);
        strncpy(data->UpdateTime, CThostFtdcOrderField_UpdateTime, sizeof(data->UpdateTime));
        CThostFtdcOrderField_UpdateTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcOrderField_CancelTime != NULL ) {
        if(CThostFtdcOrderField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcOrderField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcOrderField_CancelTime, CThostFtdcOrderField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcOrderField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcOrderField_CancelTime = NULL;
    }

    /// 最后修改交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcOrderField_ActiveTraderID != NULL ) {
        if(CThostFtdcOrderField_ActiveTraderID_length >= (Py_ssize_t)sizeof(data->ActiveTraderID)) {
            PyErr_Format(PyExc_ValueError, "ActiveTraderID too long: length=%zd (max allowed is 20)", CThostFtdcOrderField_ActiveTraderID_length);
            return -1;
        }
        // memset(data->ActiveTraderID, 0, sizeof(data->ActiveTraderID));
        // memcpy(data->ActiveTraderID, CThostFtdcOrderField_ActiveTraderID, CThostFtdcOrderField_ActiveTraderID_length);
        strncpy(data->ActiveTraderID, CThostFtdcOrderField_ActiveTraderID, sizeof(data->ActiveTraderID));
        CThostFtdcOrderField_ActiveTraderID = NULL;
    }

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcOrderField_ClearingPartID != NULL ) {
        if(CThostFtdcOrderField_ClearingPartID_length >= (Py_ssize_t)sizeof(data->ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is 10)", CThostFtdcOrderField_ClearingPartID_length);
            return -1;
        }
        // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
        // memcpy(data->ClearingPartID, CThostFtdcOrderField_ClearingPartID, CThostFtdcOrderField_ClearingPartID_length);
        strncpy(data->ClearingPartID, CThostFtdcOrderField_ClearingPartID, sizeof(data->ClearingPartID));
        CThostFtdcOrderField_ClearingPartID = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcOrderField_SequenceNo;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcOrderField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcOrderField_SessionID;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcOrderField_UserProductInfo != NULL ) {
        if(CThostFtdcOrderField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcOrderField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcOrderField_UserProductInfo, CThostFtdcOrderField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcOrderField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcOrderField_UserProductInfo = NULL;
    }

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcOrderField_StatusMsg != NULL ) {
        if(CThostFtdcOrderField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcOrderField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcOrderField_StatusMsg, CThostFtdcOrderField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcOrderField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcOrderField_StatusMsg = NULL;
    }

    /// 用户强平标志
    /// typedef int TThostFtdcBoolType
    data->UserForceClose = CThostFtdcOrderField_UserForceClose;

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcOrderField_ActiveUserID != NULL ) {
        if(CThostFtdcOrderField_ActiveUserID_length >= (Py_ssize_t)sizeof(data->ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is 15)", CThostFtdcOrderField_ActiveUserID_length);
            return -1;
        }
        // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
        // memcpy(data->ActiveUserID, CThostFtdcOrderField_ActiveUserID, CThostFtdcOrderField_ActiveUserID_length);
        strncpy(data->ActiveUserID, CThostFtdcOrderField_ActiveUserID, sizeof(data->ActiveUserID));
        CThostFtdcOrderField_ActiveUserID = NULL;
    }

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    data->BrokerOrderSeq = CThostFtdcOrderField_BrokerOrderSeq;

    /// 相关报单
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcOrderField_RelativeOrderSysID != NULL ) {
        if(CThostFtdcOrderField_RelativeOrderSysID_length >= (Py_ssize_t)sizeof(data->RelativeOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "RelativeOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcOrderField_RelativeOrderSysID_length);
            return -1;
        }
        // memset(data->RelativeOrderSysID, 0, sizeof(data->RelativeOrderSysID));
        // memcpy(data->RelativeOrderSysID, CThostFtdcOrderField_RelativeOrderSysID, CThostFtdcOrderField_RelativeOrderSysID_length);
        strncpy(data->RelativeOrderSysID, CThostFtdcOrderField_RelativeOrderSysID, sizeof(data->RelativeOrderSysID));
        CThostFtdcOrderField_RelativeOrderSysID = NULL;
    }

    /// 郑商所成交数量
    /// typedef int TThostFtdcVolumeType
    data->ZCETotalTradedVolume = CThostFtdcOrderField_ZCETotalTradedVolume;

    /// 互换单标志
    /// typedef int TThostFtdcBoolType
    data->IsSwapOrder = CThostFtdcOrderField_IsSwapOrder;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcOrderField_BranchID != NULL ) {
        if(CThostFtdcOrderField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcOrderField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcOrderField_BranchID, CThostFtdcOrderField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcOrderField_BranchID, sizeof(data->BranchID));
        CThostFtdcOrderField_BranchID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcOrderField_InvestUnitID != NULL ) {
        if(CThostFtdcOrderField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcOrderField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcOrderField_InvestUnitID, CThostFtdcOrderField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcOrderField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcOrderField_InvestUnitID = NULL;
    }

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcOrderField_AccountID != NULL ) {
        if(CThostFtdcOrderField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcOrderField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcOrderField_AccountID, CThostFtdcOrderField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcOrderField_AccountID, sizeof(data->AccountID));
        CThostFtdcOrderField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcOrderField_CurrencyID != NULL ) {
        if(CThostFtdcOrderField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcOrderField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcOrderField_CurrencyID, CThostFtdcOrderField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcOrderField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcOrderField_CurrencyID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcOrderField_reserve3 != NULL ) {
        if(CThostFtdcOrderField_reserve3_length >= (Py_ssize_t)sizeof(data->reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is 15)", CThostFtdcOrderField_reserve3_length);
            return -1;
        }
        // memset(data->reserve3, 0, sizeof(data->reserve3));
        // memcpy(data->reserve3, CThostFtdcOrderField_reserve3, CThostFtdcOrderField_reserve3_length);
        strncpy(data->reserve3, CThostFtdcOrderField_reserve3, sizeof(data->reserve3));
        CThostFtdcOrderField_reserve3 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcOrderField_MacAddress != NULL ) {
        if(CThostFtdcOrderField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcOrderField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcOrderField_MacAddress, CThostFtdcOrderField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcOrderField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcOrderField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcOrderField_InstrumentID != NULL ) {
        if(CThostFtdcOrderField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcOrderField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcOrderField_InstrumentID, CThostFtdcOrderField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcOrderField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcOrderField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcOrderField_ExchangeInstID != NULL ) {
        if(CThostFtdcOrderField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcOrderField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcOrderField_ExchangeInstID, CThostFtdcOrderField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcOrderField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcOrderField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcOrderField_IPAddress != NULL ) {
        if(CThostFtdcOrderField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcOrderField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcOrderField_IPAddress, CThostFtdcOrderField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcOrderField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcOrderField_IPAddress = NULL;
    }

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    if( CThostFtdcOrderField_OrderMemo != NULL ) {
        if(CThostFtdcOrderField_OrderMemo_length >= (Py_ssize_t)sizeof(data->OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is 12)", CThostFtdcOrderField_OrderMemo_length);
            return -1;
        }
        // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
        // memcpy(data->OrderMemo, CThostFtdcOrderField_OrderMemo, CThostFtdcOrderField_OrderMemo_length);
        strncpy(data->OrderMemo, CThostFtdcOrderField_OrderMemo, sizeof(data->OrderMemo));
        CThostFtdcOrderField_OrderMemo = NULL;
    }

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    data->SessionReqSeq = CThostFtdcOrderField_SessionReqSeq;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:c,s:c,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y,s:y,s:i,s:y,s:i,s:y,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "OrderRef", data->OrderRef//, (Py_ssize_t)sizeof(data->OrderRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
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
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
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
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "UserForceClose", data->UserForceClose
        , "ActiveUserID", data->ActiveUserID//, (Py_ssize_t)sizeof(data->ActiveUserID)
        , "BrokerOrderSeq", data->BrokerOrderSeq
        , "RelativeOrderSysID", data->RelativeOrderSysID//, (Py_ssize_t)sizeof(data->RelativeOrderSysID)
        , "ZCETotalTradedVolume", data->ZCETotalTradedVolume
        , "IsSwapOrder", data->IsSwapOrder
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "reserve3", data->reserve3//, (Py_ssize_t)sizeof(data->reserve3)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "OrderMemo", data->OrderMemo//, (Py_ssize_t)sizeof(data->OrderMemo)
        , "SessionReqSeq", data->SessionReqSeq
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcOrderFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcOrderFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcOrderFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcOrderFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单价格条件
/// typedef char TThostFtdcOrderPriceTypeType
static PyObject *PyCThostFtdcOrderFieldType_get_OrderPriceType(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderPriceType), 1);
}

static int PyCThostFtdcOrderFieldType_set_OrderPriceType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderPriceType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOrderField::OrderPriceType)) {
        PyErr_SetString(PyExc_ValueError, "OrderPriceType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    data->OrderPriceType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcOrderFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcOrderFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOrderField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合开平标志
/// typedef char TThostFtdcCombOffsetFlagType[5]
static PyObject *PyCThostFtdcOrderFieldType_get_CombOffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombOffsetFlag, (Py_ssize_t)sizeof(data->CombOffsetFlag));
    return PyBytes_FromString(data->CombOffsetFlag);
}

static int PyCThostFtdcOrderFieldType_set_CombOffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombOffsetFlag Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::CombOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombOffsetFlag must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->CombOffsetFlag, 0, sizeof(data->CombOffsetFlag));
    // memcpy(data->CombOffsetFlag, buf, len);
    strncpy(data->CombOffsetFlag, buf, sizeof(data->CombOffsetFlag));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合投机套保标志
/// typedef char TThostFtdcCombHedgeFlagType[5]
static PyObject *PyCThostFtdcOrderFieldType_get_CombHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombHedgeFlag, (Py_ssize_t)sizeof(data->CombHedgeFlag));
    return PyBytes_FromString(data->CombHedgeFlag);
}

static int PyCThostFtdcOrderFieldType_set_CombHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::CombHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
    // memcpy(data->CombHedgeFlag, buf, len);
    strncpy(data->CombHedgeFlag, buf, sizeof(data->CombHedgeFlag));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 有效期类型
/// typedef char TThostFtdcTimeConditionType
static PyObject *PyCThostFtdcOrderFieldType_get_TimeCondition(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TimeCondition), 1);
}

static int PyCThostFtdcOrderFieldType_set_TimeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOrderField::TimeCondition)) {
        PyErr_SetString(PyExc_ValueError, "TimeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    data->TimeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// GTD日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcOrderFieldType_get_GTDDate(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->GTDDate, (Py_ssize_t)sizeof(data->GTDDate));
    return PyBytes_FromString(data->GTDDate);
}

static int PyCThostFtdcOrderFieldType_set_GTDDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "GTDDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::GTDDate)) {
        PyErr_SetString(PyExc_ValueError, "GTDDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->GTDDate, 0, sizeof(data->GTDDate));
    // memcpy(data->GTDDate, buf, len);
    strncpy(data->GTDDate, buf, sizeof(data->GTDDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交量类型
/// typedef char TThostFtdcVolumeConditionType
static PyObject *PyCThostFtdcOrderFieldType_get_VolumeCondition(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VolumeCondition), 1);
}

static int PyCThostFtdcOrderFieldType_set_VolumeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VolumeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOrderField::VolumeCondition)) {
        PyErr_SetString(PyExc_ValueError, "VolumeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    data->VolumeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 触发条件
/// typedef char TThostFtdcContingentConditionType
static PyObject *PyCThostFtdcOrderFieldType_get_ContingentCondition(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ContingentCondition), 1);
}

static int PyCThostFtdcOrderFieldType_set_ContingentCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ContingentCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOrderField::ContingentCondition)) {
        PyErr_SetString(PyExc_ValueError, "ContingentCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    data->ContingentCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 强平原因
/// typedef char TThostFtdcForceCloseReasonType
static PyObject *PyCThostFtdcOrderFieldType_get_ForceCloseReason(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ForceCloseReason), 1);
}

static int PyCThostFtdcOrderFieldType_set_ForceCloseReason(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForceCloseReason Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOrderField::ForceCloseReason)) {
        PyErr_SetString(PyExc_ValueError, "ForceCloseReason must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    data->ForceCloseReason = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcOrderFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcOrderFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcOrderFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcOrderFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcOrderFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcOrderFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcOrderFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcOrderFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcOrderFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcOrderFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcOrderFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcOrderFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcOrderFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcOrderFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOrderField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcOrderFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcOrderFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcOrderFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcOrderFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单来源
/// typedef char TThostFtdcOrderSourceType
static PyObject *PyCThostFtdcOrderFieldType_get_OrderSource(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSource), 1);
}

static int PyCThostFtdcOrderFieldType_set_OrderSource(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSource Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOrderField::OrderSource)) {
        PyErr_SetString(PyExc_ValueError, "OrderSource must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    data->OrderSource = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单状态
/// typedef char TThostFtdcOrderStatusType
static PyObject *PyCThostFtdcOrderFieldType_get_OrderStatus(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderStatus), 1);
}

static int PyCThostFtdcOrderFieldType_set_OrderStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOrderField::OrderStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    data->OrderStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单类型
/// typedef char TThostFtdcOrderTypeType
static PyObject *PyCThostFtdcOrderFieldType_get_OrderType(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderType), 1);
}

static int PyCThostFtdcOrderFieldType_set_OrderType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOrderField::OrderType)) {
        PyErr_SetString(PyExc_ValueError, "OrderType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    data->OrderType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcOrderFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcOrderFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 委托时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcOrderFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcOrderFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 激活时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcOrderFieldType_get_ActiveTime(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveTime, (Py_ssize_t)sizeof(data->ActiveTime));
    return PyBytes_FromString(data->ActiveTime);
}

static int PyCThostFtdcOrderFieldType_set_ActiveTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::ActiveTime)) {
        PyErr_SetString(PyExc_ValueError, "ActiveTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->ActiveTime, 0, sizeof(data->ActiveTime));
    // memcpy(data->ActiveTime, buf, len);
    strncpy(data->ActiveTime, buf, sizeof(data->ActiveTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 挂起时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcOrderFieldType_get_SuspendTime(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SuspendTime, (Py_ssize_t)sizeof(data->SuspendTime));
    return PyBytes_FromString(data->SuspendTime);
}

static int PyCThostFtdcOrderFieldType_set_SuspendTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SuspendTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::SuspendTime)) {
        PyErr_SetString(PyExc_ValueError, "SuspendTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->SuspendTime, 0, sizeof(data->SuspendTime));
    // memcpy(data->SuspendTime, buf, len);
    strncpy(data->SuspendTime, buf, sizeof(data->SuspendTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后修改时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcOrderFieldType_get_UpdateTime(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UpdateTime, (Py_ssize_t)sizeof(data->UpdateTime));
    return PyBytes_FromString(data->UpdateTime);
}

static int PyCThostFtdcOrderFieldType_set_UpdateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::UpdateTime)) {
        PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
    // memcpy(data->UpdateTime, buf, len);
    strncpy(data->UpdateTime, buf, sizeof(data->UpdateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcOrderFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcOrderFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后修改交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcOrderFieldType_get_ActiveTraderID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveTraderID, (Py_ssize_t)sizeof(data->ActiveTraderID));
    return PyBytes_FromString(data->ActiveTraderID);
}

static int PyCThostFtdcOrderFieldType_set_ActiveTraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveTraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::ActiveTraderID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveTraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->ActiveTraderID, 0, sizeof(data->ActiveTraderID));
    // memcpy(data->ActiveTraderID, buf, len);
    strncpy(data->ActiveTraderID, buf, sizeof(data->ActiveTraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算会员编号
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcOrderFieldType_get_ClearingPartID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClearingPartID, (Py_ssize_t)sizeof(data->ClearingPartID));
    return PyBytes_FromString(data->ClearingPartID);
}

static int PyCThostFtdcOrderFieldType_set_ClearingPartID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
    // memcpy(data->ClearingPartID, buf, len);
    strncpy(data->ClearingPartID, buf, sizeof(data->ClearingPartID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcOrderFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcOrderFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcOrderFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcOrderFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcOrderFieldType_get_ActiveUserID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveUserID, (Py_ssize_t)sizeof(data->ActiveUserID));
    return PyBytes_FromString(data->ActiveUserID);
}

static int PyCThostFtdcOrderFieldType_set_ActiveUserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::ActiveUserID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
    // memcpy(data->ActiveUserID, buf, len);
    strncpy(data->ActiveUserID, buf, sizeof(data->ActiveUserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 相关报单
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcOrderFieldType_get_RelativeOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RelativeOrderSysID, (Py_ssize_t)sizeof(data->RelativeOrderSysID));
    return PyBytes_FromString(data->RelativeOrderSysID);
}

static int PyCThostFtdcOrderFieldType_set_RelativeOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RelativeOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::RelativeOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "RelativeOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->RelativeOrderSysID, 0, sizeof(data->RelativeOrderSysID));
    // memcpy(data->RelativeOrderSysID, buf, len);
    strncpy(data->RelativeOrderSysID, buf, sizeof(data->RelativeOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcOrderFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcOrderFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcOrderFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcOrderFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcOrderFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcOrderFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcOrderFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcOrderFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcOrderFieldType_get_reserve3(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve3, (Py_ssize_t)sizeof(data->reserve3));
    return PyBytes_FromString(data->reserve3);
}

static int PyCThostFtdcOrderFieldType_set_reserve3(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->reserve3, 0, sizeof(data->reserve3));
    // memcpy(data->reserve3, buf, len);
    strncpy(data->reserve3, buf, sizeof(data->reserve3));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcOrderFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcOrderFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcOrderFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcOrderFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcOrderFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcOrderFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcOrderFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcOrderFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单回显字段
/// typedef char TThostFtdcOrderMemoType[13]
static PyObject *PyCThostFtdcOrderFieldType_get_OrderMemo(PyObject *self, void *closure) {
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderMemo, (Py_ssize_t)sizeof(data->OrderMemo));
    return PyBytes_FromString(data->OrderMemo);
}

static int PyCThostFtdcOrderFieldType_set_OrderMemo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOrderField::OrderMemo)) {
        PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(self);
    CThostFtdcOrderField *data = &(extra->data);
    // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
    // memcpy(data->OrderMemo, buf, len);
    strncpy(data->OrderMemo, buf, sizeof(data->OrderMemo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcOrderFieldType_members[] = {
    /// 价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "LimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.LimitPrice),
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
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.VolumeTotalOriginal),
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
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.MinVolume),
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
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.StopPrice),
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
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.IsAutoSuspend),
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
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.NotifySequence),
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
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.VolumeTraded),
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
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.VolumeTotal),
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
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
    },
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.FrontID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("前置编号")
    },
    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    {
        .name = "SessionID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 用户强平标志
    /// typedef int TThostFtdcBoolType
    {
        .name = "UserForceClose",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.UserForceClose),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("用户强平标志")
    },
    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "BrokerOrderSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.BrokerOrderSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("经纪公司报单编号")
    },
    /// 郑商所成交数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "ZCETotalTradedVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.ZCETotalTradedVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("郑商所成交数量")
    },
    /// 互换单标志
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsSwapOrder",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.IsSwapOrder),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("互换单标志")
    },
    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    {
        .name = "SessionReqSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOrderFieldData, data.SessionReqSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("session上请求计数 api自动维护")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcOrderFieldType_get_reserve1,
    .set = PyCThostFtdcOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcOrderFieldType_get_OrderRef,
    .set = PyCThostFtdcOrderFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcOrderFieldType_get_UserID,
    .set = PyCThostFtdcOrderFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    {
    .name = "OrderPriceType",
    .get = PyCThostFtdcOrderFieldType_get_OrderPriceType,
    .set = PyCThostFtdcOrderFieldType_set_OrderPriceType,
    .doc = PyDoc_STR("报单价格条件"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcOrderFieldType_get_Direction,
    .set = PyCThostFtdcOrderFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    {
    .name = "CombOffsetFlag",
    .get = PyCThostFtdcOrderFieldType_get_CombOffsetFlag,
    .set = PyCThostFtdcOrderFieldType_set_CombOffsetFlag,
    .doc = PyDoc_STR("组合开平标志"),
    },
    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    {
    .name = "CombHedgeFlag",
    .get = PyCThostFtdcOrderFieldType_get_CombHedgeFlag,
    .set = PyCThostFtdcOrderFieldType_set_CombHedgeFlag,
    .doc = PyDoc_STR("组合投机套保标志"),
    },
    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    {
    .name = "TimeCondition",
    .get = PyCThostFtdcOrderFieldType_get_TimeCondition,
    .set = PyCThostFtdcOrderFieldType_set_TimeCondition,
    .doc = PyDoc_STR("有效期类型"),
    },
    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "GTDDate",
    .get = PyCThostFtdcOrderFieldType_get_GTDDate,
    .set = PyCThostFtdcOrderFieldType_set_GTDDate,
    .doc = PyDoc_STR("GTD日期"),
    },
    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    {
    .name = "VolumeCondition",
    .get = PyCThostFtdcOrderFieldType_get_VolumeCondition,
    .set = PyCThostFtdcOrderFieldType_set_VolumeCondition,
    .doc = PyDoc_STR("成交量类型"),
    },
    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    {
    .name = "ContingentCondition",
    .get = PyCThostFtdcOrderFieldType_get_ContingentCondition,
    .set = PyCThostFtdcOrderFieldType_set_ContingentCondition,
    .doc = PyDoc_STR("触发条件"),
    },
    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    {
    .name = "ForceCloseReason",
    .get = PyCThostFtdcOrderFieldType_get_ForceCloseReason,
    .set = PyCThostFtdcOrderFieldType_set_ForceCloseReason,
    .doc = PyDoc_STR("强平原因"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcOrderFieldType_get_BusinessUnit,
    .set = PyCThostFtdcOrderFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcOrderFieldType_get_OrderLocalID,
    .set = PyCThostFtdcOrderFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcOrderFieldType_get_ParticipantID,
    .set = PyCThostFtdcOrderFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcOrderFieldType_get_ClientID,
    .set = PyCThostFtdcOrderFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcOrderFieldType_get_reserve2,
    .set = PyCThostFtdcOrderFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcOrderFieldType_get_TraderID,
    .set = PyCThostFtdcOrderFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcOrderFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcOrderFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("报单提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcOrderFieldType_get_TradingDay,
    .set = PyCThostFtdcOrderFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcOrderFieldType_get_OrderSysID,
    .set = PyCThostFtdcOrderFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 报单来源
    /// typedef char TThostFtdcOrderSourceType
    {
    .name = "OrderSource",
    .get = PyCThostFtdcOrderFieldType_get_OrderSource,
    .set = PyCThostFtdcOrderFieldType_set_OrderSource,
    .doc = PyDoc_STR("报单来源"),
    },
    /// 报单状态
    /// typedef char TThostFtdcOrderStatusType
    {
    .name = "OrderStatus",
    .get = PyCThostFtdcOrderFieldType_get_OrderStatus,
    .set = PyCThostFtdcOrderFieldType_set_OrderStatus,
    .doc = PyDoc_STR("报单状态"),
    },
    /// 报单类型
    /// typedef char TThostFtdcOrderTypeType
    {
    .name = "OrderType",
    .get = PyCThostFtdcOrderFieldType_get_OrderType,
    .set = PyCThostFtdcOrderFieldType_set_OrderType,
    .doc = PyDoc_STR("报单类型"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcOrderFieldType_get_InsertDate,
    .set = PyCThostFtdcOrderFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcOrderFieldType_get_InsertTime,
    .set = PyCThostFtdcOrderFieldType_set_InsertTime,
    .doc = PyDoc_STR("委托时间"),
    },
    /// 激活时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActiveTime",
    .get = PyCThostFtdcOrderFieldType_get_ActiveTime,
    .set = PyCThostFtdcOrderFieldType_set_ActiveTime,
    .doc = PyDoc_STR("激活时间"),
    },
    /// 挂起时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "SuspendTime",
    .get = PyCThostFtdcOrderFieldType_get_SuspendTime,
    .set = PyCThostFtdcOrderFieldType_set_SuspendTime,
    .doc = PyDoc_STR("挂起时间"),
    },
    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "UpdateTime",
    .get = PyCThostFtdcOrderFieldType_get_UpdateTime,
    .set = PyCThostFtdcOrderFieldType_set_UpdateTime,
    .doc = PyDoc_STR("最后修改时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcOrderFieldType_get_CancelTime,
    .set = PyCThostFtdcOrderFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 最后修改交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "ActiveTraderID",
    .get = PyCThostFtdcOrderFieldType_get_ActiveTraderID,
    .set = PyCThostFtdcOrderFieldType_set_ActiveTraderID,
    .doc = PyDoc_STR("最后修改交易所交易员代码"),
    },
    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ClearingPartID",
    .get = PyCThostFtdcOrderFieldType_get_ClearingPartID,
    .set = PyCThostFtdcOrderFieldType_set_ClearingPartID,
    .doc = PyDoc_STR("结算会员编号"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcOrderFieldType_get_UserProductInfo,
    .set = PyCThostFtdcOrderFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcOrderFieldType_get_StatusMsg,
    .set = PyCThostFtdcOrderFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "ActiveUserID",
    .get = PyCThostFtdcOrderFieldType_get_ActiveUserID,
    .set = PyCThostFtdcOrderFieldType_set_ActiveUserID,
    .doc = PyDoc_STR("操作用户代码"),
    },
    /// 相关报单
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "RelativeOrderSysID",
    .get = PyCThostFtdcOrderFieldType_get_RelativeOrderSysID,
    .set = PyCThostFtdcOrderFieldType_set_RelativeOrderSysID,
    .doc = PyDoc_STR("相关报单"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcOrderFieldType_get_BranchID,
    .set = PyCThostFtdcOrderFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcOrderFieldType_get_InvestUnitID,
    .set = PyCThostFtdcOrderFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcOrderFieldType_get_AccountID,
    .set = PyCThostFtdcOrderFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcOrderFieldType_get_CurrencyID,
    .set = PyCThostFtdcOrderFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve3",
    .get = PyCThostFtdcOrderFieldType_get_reserve3,
    .set = PyCThostFtdcOrderFieldType_set_reserve3,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcOrderFieldType_get_MacAddress,
    .set = PyCThostFtdcOrderFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcOrderFieldType_get_InstrumentID,
    .set = PyCThostFtdcOrderFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcOrderFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcOrderFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcOrderFieldType_get_IPAddress,
    .set = PyCThostFtdcOrderFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    {
    .name = "OrderMemo",
    .get = PyCThostFtdcOrderFieldType_get_OrderMemo,
    .set = PyCThostFtdcOrderFieldType_set_OrderMemo,
    .doc = PyDoc_STR("报单回显字段"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("报单")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("报单")},
    {Py_tp_members, PyCThostFtdcOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}