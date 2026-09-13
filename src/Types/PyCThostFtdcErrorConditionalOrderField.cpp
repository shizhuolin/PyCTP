
#include "PyCThostFtdcErrorConditionalOrderField.h"

///查询错误报单操作

static int PyCThostFtdcErrorConditionalOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OrderSysID", "OrderSource", "OrderStatus", "OrderType", "VolumeTraded", "VolumeTotal", "InsertDate", "InsertTime", "ActiveTime", "SuspendTime", "UpdateTime", "CancelTime", "ActiveTraderID", "ClearingPartID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "UserForceClose", "ActiveUserID", "BrokerOrderSeq", "RelativeOrderSysID", "ZCETotalTradedVolume", "ErrorID", "ErrorMsg", "IsSwapOrder", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcErrorConditionalOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcErrorConditionalOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcErrorConditionalOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_reserve1_length = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcErrorConditionalOrderField_OrderRef = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_OrderRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcErrorConditionalOrderField_UserID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_UserID_length = 0;

    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    char CThostFtdcErrorConditionalOrderField_OrderPriceType = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcErrorConditionalOrderField_Direction = 0;

    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    char *CThostFtdcErrorConditionalOrderField_CombOffsetFlag = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_CombOffsetFlag_length = 0;

    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    char *CThostFtdcErrorConditionalOrderField_CombHedgeFlag = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_CombHedgeFlag_length = 0;

    /// 价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcErrorConditionalOrderField_LimitPrice = 0.0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcErrorConditionalOrderField_VolumeTotalOriginal = 0;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    char CThostFtdcErrorConditionalOrderField_TimeCondition = 0;

    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcErrorConditionalOrderField_GTDDate = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_GTDDate_length = 0;

    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    char CThostFtdcErrorConditionalOrderField_VolumeCondition = 0;

    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcErrorConditionalOrderField_MinVolume = 0;

    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    char CThostFtdcErrorConditionalOrderField_ContingentCondition = 0;

    /// 止损价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcErrorConditionalOrderField_StopPrice = 0.0;

    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    char CThostFtdcErrorConditionalOrderField_ForceCloseReason = 0;

    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcErrorConditionalOrderField_IsAutoSuspend = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcErrorConditionalOrderField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_BusinessUnit_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcErrorConditionalOrderField_RequestID = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcErrorConditionalOrderField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_OrderLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcErrorConditionalOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcErrorConditionalOrderField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcErrorConditionalOrderField_ClientID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcErrorConditionalOrderField_reserve2 = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_reserve2_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcErrorConditionalOrderField_TraderID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcErrorConditionalOrderField_InstallID = 0;

    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcErrorConditionalOrderField_OrderSubmitStatus = 0;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcErrorConditionalOrderField_NotifySequence = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcErrorConditionalOrderField_TradingDay = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcErrorConditionalOrderField_SettlementID = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcErrorConditionalOrderField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_OrderSysID_length = 0;

    /// 报单来源
    /// typedef char TThostFtdcOrderSourceType
    char CThostFtdcErrorConditionalOrderField_OrderSource = 0;

    /// 报单状态
    /// typedef char TThostFtdcOrderStatusType
    char CThostFtdcErrorConditionalOrderField_OrderStatus = 0;

    /// 报单类型
    /// typedef char TThostFtdcOrderTypeType
    char CThostFtdcErrorConditionalOrderField_OrderType = 0;

    /// 今成交数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcErrorConditionalOrderField_VolumeTraded = 0;

    /// 剩余数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcErrorConditionalOrderField_VolumeTotal = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcErrorConditionalOrderField_InsertDate = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_InsertDate_length = 0;

    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcErrorConditionalOrderField_InsertTime = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_InsertTime_length = 0;

    /// 激活时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcErrorConditionalOrderField_ActiveTime = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_ActiveTime_length = 0;

    /// 挂起时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcErrorConditionalOrderField_SuspendTime = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_SuspendTime_length = 0;

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcErrorConditionalOrderField_UpdateTime = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_UpdateTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcErrorConditionalOrderField_CancelTime = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_CancelTime_length = 0;

    /// 最后修改交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcErrorConditionalOrderField_ActiveTraderID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_ActiveTraderID_length = 0;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcErrorConditionalOrderField_ClearingPartID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_ClearingPartID_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcErrorConditionalOrderField_SequenceNo = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcErrorConditionalOrderField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcErrorConditionalOrderField_SessionID = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcErrorConditionalOrderField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_UserProductInfo_length = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcErrorConditionalOrderField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_StatusMsg_length = 0;

    /// 用户强平标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcErrorConditionalOrderField_UserForceClose = 0;

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcErrorConditionalOrderField_ActiveUserID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_ActiveUserID_length = 0;

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcErrorConditionalOrderField_BrokerOrderSeq = 0;

    /// 相关报单
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcErrorConditionalOrderField_RelativeOrderSysID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_RelativeOrderSysID_length = 0;

    /// 郑商所成交数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcErrorConditionalOrderField_ZCETotalTradedVolume = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcErrorConditionalOrderField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcErrorConditionalOrderField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_ErrorMsg_length = 0;

    /// 互换单标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcErrorConditionalOrderField_IsSwapOrder = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcErrorConditionalOrderField_BranchID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_BranchID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcErrorConditionalOrderField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_InvestUnitID_length = 0;

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcErrorConditionalOrderField_AccountID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcErrorConditionalOrderField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_CurrencyID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcErrorConditionalOrderField_reserve3 = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_reserve3_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcErrorConditionalOrderField_MacAddress = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcErrorConditionalOrderField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcErrorConditionalOrderField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcErrorConditionalOrderField_IPAddress = NULL;
    Py_ssize_t CThostFtdcErrorConditionalOrderField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iy#y#y#y#y#y#iciy#iy#ccciiy#y#y#y#y#y#y#y#iiiy#y#iy#iy#iiy#iy#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcErrorConditionalOrderField_BrokerID, &CThostFtdcErrorConditionalOrderField_BrokerID_length
        , &CThostFtdcErrorConditionalOrderField_InvestorID, &CThostFtdcErrorConditionalOrderField_InvestorID_length
        , &CThostFtdcErrorConditionalOrderField_reserve1, &CThostFtdcErrorConditionalOrderField_reserve1_length
        , &CThostFtdcErrorConditionalOrderField_OrderRef, &CThostFtdcErrorConditionalOrderField_OrderRef_length
        , &CThostFtdcErrorConditionalOrderField_UserID, &CThostFtdcErrorConditionalOrderField_UserID_length
        , &CThostFtdcErrorConditionalOrderField_OrderPriceType
        , &CThostFtdcErrorConditionalOrderField_Direction
        , &CThostFtdcErrorConditionalOrderField_CombOffsetFlag, &CThostFtdcErrorConditionalOrderField_CombOffsetFlag_length
        , &CThostFtdcErrorConditionalOrderField_CombHedgeFlag, &CThostFtdcErrorConditionalOrderField_CombHedgeFlag_length
        , &CThostFtdcErrorConditionalOrderField_LimitPrice
        , &CThostFtdcErrorConditionalOrderField_VolumeTotalOriginal
        , &CThostFtdcErrorConditionalOrderField_TimeCondition
        , &CThostFtdcErrorConditionalOrderField_GTDDate, &CThostFtdcErrorConditionalOrderField_GTDDate_length
        , &CThostFtdcErrorConditionalOrderField_VolumeCondition
        , &CThostFtdcErrorConditionalOrderField_MinVolume
        , &CThostFtdcErrorConditionalOrderField_ContingentCondition
        , &CThostFtdcErrorConditionalOrderField_StopPrice
        , &CThostFtdcErrorConditionalOrderField_ForceCloseReason
        , &CThostFtdcErrorConditionalOrderField_IsAutoSuspend
        , &CThostFtdcErrorConditionalOrderField_BusinessUnit, &CThostFtdcErrorConditionalOrderField_BusinessUnit_length
        , &CThostFtdcErrorConditionalOrderField_RequestID
        , &CThostFtdcErrorConditionalOrderField_OrderLocalID, &CThostFtdcErrorConditionalOrderField_OrderLocalID_length
        , &CThostFtdcErrorConditionalOrderField_ExchangeID, &CThostFtdcErrorConditionalOrderField_ExchangeID_length
        , &CThostFtdcErrorConditionalOrderField_ParticipantID, &CThostFtdcErrorConditionalOrderField_ParticipantID_length
        , &CThostFtdcErrorConditionalOrderField_ClientID, &CThostFtdcErrorConditionalOrderField_ClientID_length
        , &CThostFtdcErrorConditionalOrderField_reserve2, &CThostFtdcErrorConditionalOrderField_reserve2_length
        , &CThostFtdcErrorConditionalOrderField_TraderID, &CThostFtdcErrorConditionalOrderField_TraderID_length
        , &CThostFtdcErrorConditionalOrderField_InstallID
        , &CThostFtdcErrorConditionalOrderField_OrderSubmitStatus
        , &CThostFtdcErrorConditionalOrderField_NotifySequence
        , &CThostFtdcErrorConditionalOrderField_TradingDay, &CThostFtdcErrorConditionalOrderField_TradingDay_length
        , &CThostFtdcErrorConditionalOrderField_SettlementID
        , &CThostFtdcErrorConditionalOrderField_OrderSysID, &CThostFtdcErrorConditionalOrderField_OrderSysID_length
        , &CThostFtdcErrorConditionalOrderField_OrderSource
        , &CThostFtdcErrorConditionalOrderField_OrderStatus
        , &CThostFtdcErrorConditionalOrderField_OrderType
        , &CThostFtdcErrorConditionalOrderField_VolumeTraded
        , &CThostFtdcErrorConditionalOrderField_VolumeTotal
        , &CThostFtdcErrorConditionalOrderField_InsertDate, &CThostFtdcErrorConditionalOrderField_InsertDate_length
        , &CThostFtdcErrorConditionalOrderField_InsertTime, &CThostFtdcErrorConditionalOrderField_InsertTime_length
        , &CThostFtdcErrorConditionalOrderField_ActiveTime, &CThostFtdcErrorConditionalOrderField_ActiveTime_length
        , &CThostFtdcErrorConditionalOrderField_SuspendTime, &CThostFtdcErrorConditionalOrderField_SuspendTime_length
        , &CThostFtdcErrorConditionalOrderField_UpdateTime, &CThostFtdcErrorConditionalOrderField_UpdateTime_length
        , &CThostFtdcErrorConditionalOrderField_CancelTime, &CThostFtdcErrorConditionalOrderField_CancelTime_length
        , &CThostFtdcErrorConditionalOrderField_ActiveTraderID, &CThostFtdcErrorConditionalOrderField_ActiveTraderID_length
        , &CThostFtdcErrorConditionalOrderField_ClearingPartID, &CThostFtdcErrorConditionalOrderField_ClearingPartID_length
        , &CThostFtdcErrorConditionalOrderField_SequenceNo
        , &CThostFtdcErrorConditionalOrderField_FrontID
        , &CThostFtdcErrorConditionalOrderField_SessionID
        , &CThostFtdcErrorConditionalOrderField_UserProductInfo, &CThostFtdcErrorConditionalOrderField_UserProductInfo_length
        , &CThostFtdcErrorConditionalOrderField_StatusMsg, &CThostFtdcErrorConditionalOrderField_StatusMsg_length
        , &CThostFtdcErrorConditionalOrderField_UserForceClose
        , &CThostFtdcErrorConditionalOrderField_ActiveUserID, &CThostFtdcErrorConditionalOrderField_ActiveUserID_length
        , &CThostFtdcErrorConditionalOrderField_BrokerOrderSeq
        , &CThostFtdcErrorConditionalOrderField_RelativeOrderSysID, &CThostFtdcErrorConditionalOrderField_RelativeOrderSysID_length
        , &CThostFtdcErrorConditionalOrderField_ZCETotalTradedVolume
        , &CThostFtdcErrorConditionalOrderField_ErrorID
        , &CThostFtdcErrorConditionalOrderField_ErrorMsg, &CThostFtdcErrorConditionalOrderField_ErrorMsg_length
        , &CThostFtdcErrorConditionalOrderField_IsSwapOrder
        , &CThostFtdcErrorConditionalOrderField_BranchID, &CThostFtdcErrorConditionalOrderField_BranchID_length
        , &CThostFtdcErrorConditionalOrderField_InvestUnitID, &CThostFtdcErrorConditionalOrderField_InvestUnitID_length
        , &CThostFtdcErrorConditionalOrderField_AccountID, &CThostFtdcErrorConditionalOrderField_AccountID_length
        , &CThostFtdcErrorConditionalOrderField_CurrencyID, &CThostFtdcErrorConditionalOrderField_CurrencyID_length
        , &CThostFtdcErrorConditionalOrderField_reserve3, &CThostFtdcErrorConditionalOrderField_reserve3_length
        , &CThostFtdcErrorConditionalOrderField_MacAddress, &CThostFtdcErrorConditionalOrderField_MacAddress_length
        , &CThostFtdcErrorConditionalOrderField_InstrumentID, &CThostFtdcErrorConditionalOrderField_InstrumentID_length
        , &CThostFtdcErrorConditionalOrderField_ExchangeInstID, &CThostFtdcErrorConditionalOrderField_ExchangeInstID_length
        , &CThostFtdcErrorConditionalOrderField_IPAddress, &CThostFtdcErrorConditionalOrderField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcErrorConditionalOrderField_BrokerID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcErrorConditionalOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcErrorConditionalOrderField_BrokerID, CThostFtdcErrorConditionalOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcErrorConditionalOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcErrorConditionalOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcErrorConditionalOrderField_InvestorID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcErrorConditionalOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcErrorConditionalOrderField_InvestorID, CThostFtdcErrorConditionalOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcErrorConditionalOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcErrorConditionalOrderField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcErrorConditionalOrderField_reserve1 != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcErrorConditionalOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcErrorConditionalOrderField_reserve1, CThostFtdcErrorConditionalOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcErrorConditionalOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcErrorConditionalOrderField_reserve1 = NULL;
    }

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcErrorConditionalOrderField_OrderRef != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcErrorConditionalOrderField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcErrorConditionalOrderField_OrderRef, CThostFtdcErrorConditionalOrderField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcErrorConditionalOrderField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcErrorConditionalOrderField_OrderRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcErrorConditionalOrderField_UserID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcErrorConditionalOrderField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcErrorConditionalOrderField_UserID, CThostFtdcErrorConditionalOrderField_UserID_length);
        strncpy(data->UserID, CThostFtdcErrorConditionalOrderField_UserID, sizeof(data->UserID));
        CThostFtdcErrorConditionalOrderField_UserID = NULL;
    }

    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    data->OrderPriceType = CThostFtdcErrorConditionalOrderField_OrderPriceType;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcErrorConditionalOrderField_Direction;

    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    if( CThostFtdcErrorConditionalOrderField_CombOffsetFlag != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_CombOffsetFlag_length >= (Py_ssize_t)sizeof(data->CombOffsetFlag)) {
            PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is 4)", CThostFtdcErrorConditionalOrderField_CombOffsetFlag_length);
            return -1;
        }
        // memset(data->CombOffsetFlag, 0, sizeof(data->CombOffsetFlag));
        // memcpy(data->CombOffsetFlag, CThostFtdcErrorConditionalOrderField_CombOffsetFlag, CThostFtdcErrorConditionalOrderField_CombOffsetFlag_length);
        strncpy(data->CombOffsetFlag, CThostFtdcErrorConditionalOrderField_CombOffsetFlag, sizeof(data->CombOffsetFlag));
        CThostFtdcErrorConditionalOrderField_CombOffsetFlag = NULL;
    }

    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    if( CThostFtdcErrorConditionalOrderField_CombHedgeFlag != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_CombHedgeFlag_length >= (Py_ssize_t)sizeof(data->CombHedgeFlag)) {
            PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is 4)", CThostFtdcErrorConditionalOrderField_CombHedgeFlag_length);
            return -1;
        }
        // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
        // memcpy(data->CombHedgeFlag, CThostFtdcErrorConditionalOrderField_CombHedgeFlag, CThostFtdcErrorConditionalOrderField_CombHedgeFlag_length);
        strncpy(data->CombHedgeFlag, CThostFtdcErrorConditionalOrderField_CombHedgeFlag, sizeof(data->CombHedgeFlag));
        CThostFtdcErrorConditionalOrderField_CombHedgeFlag = NULL;
    }

    /// 价格
    /// typedef double TThostFtdcPriceType
    data->LimitPrice = CThostFtdcErrorConditionalOrderField_LimitPrice;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->VolumeTotalOriginal = CThostFtdcErrorConditionalOrderField_VolumeTotalOriginal;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    data->TimeCondition = CThostFtdcErrorConditionalOrderField_TimeCondition;

    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcErrorConditionalOrderField_GTDDate != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_GTDDate_length >= (Py_ssize_t)sizeof(data->GTDDate)) {
            PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is 8)", CThostFtdcErrorConditionalOrderField_GTDDate_length);
            return -1;
        }
        // memset(data->GTDDate, 0, sizeof(data->GTDDate));
        // memcpy(data->GTDDate, CThostFtdcErrorConditionalOrderField_GTDDate, CThostFtdcErrorConditionalOrderField_GTDDate_length);
        strncpy(data->GTDDate, CThostFtdcErrorConditionalOrderField_GTDDate, sizeof(data->GTDDate));
        CThostFtdcErrorConditionalOrderField_GTDDate = NULL;
    }

    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    data->VolumeCondition = CThostFtdcErrorConditionalOrderField_VolumeCondition;

    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    data->MinVolume = CThostFtdcErrorConditionalOrderField_MinVolume;

    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    data->ContingentCondition = CThostFtdcErrorConditionalOrderField_ContingentCondition;

    /// 止损价
    /// typedef double TThostFtdcPriceType
    data->StopPrice = CThostFtdcErrorConditionalOrderField_StopPrice;

    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    data->ForceCloseReason = CThostFtdcErrorConditionalOrderField_ForceCloseReason;

    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    data->IsAutoSuspend = CThostFtdcErrorConditionalOrderField_IsAutoSuspend;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcErrorConditionalOrderField_BusinessUnit != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcErrorConditionalOrderField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcErrorConditionalOrderField_BusinessUnit, CThostFtdcErrorConditionalOrderField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcErrorConditionalOrderField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcErrorConditionalOrderField_BusinessUnit = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcErrorConditionalOrderField_RequestID;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcErrorConditionalOrderField_OrderLocalID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcErrorConditionalOrderField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcErrorConditionalOrderField_OrderLocalID, CThostFtdcErrorConditionalOrderField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcErrorConditionalOrderField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcErrorConditionalOrderField_OrderLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcErrorConditionalOrderField_ExchangeID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcErrorConditionalOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcErrorConditionalOrderField_ExchangeID, CThostFtdcErrorConditionalOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcErrorConditionalOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcErrorConditionalOrderField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcErrorConditionalOrderField_ParticipantID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcErrorConditionalOrderField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcErrorConditionalOrderField_ParticipantID, CThostFtdcErrorConditionalOrderField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcErrorConditionalOrderField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcErrorConditionalOrderField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcErrorConditionalOrderField_ClientID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcErrorConditionalOrderField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcErrorConditionalOrderField_ClientID, CThostFtdcErrorConditionalOrderField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcErrorConditionalOrderField_ClientID, sizeof(data->ClientID));
        CThostFtdcErrorConditionalOrderField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcErrorConditionalOrderField_reserve2 != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcErrorConditionalOrderField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcErrorConditionalOrderField_reserve2, CThostFtdcErrorConditionalOrderField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcErrorConditionalOrderField_reserve2, sizeof(data->reserve2));
        CThostFtdcErrorConditionalOrderField_reserve2 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcErrorConditionalOrderField_TraderID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcErrorConditionalOrderField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcErrorConditionalOrderField_TraderID, CThostFtdcErrorConditionalOrderField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcErrorConditionalOrderField_TraderID, sizeof(data->TraderID));
        CThostFtdcErrorConditionalOrderField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcErrorConditionalOrderField_InstallID;

    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcErrorConditionalOrderField_OrderSubmitStatus;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcErrorConditionalOrderField_NotifySequence;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcErrorConditionalOrderField_TradingDay != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcErrorConditionalOrderField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcErrorConditionalOrderField_TradingDay, CThostFtdcErrorConditionalOrderField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcErrorConditionalOrderField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcErrorConditionalOrderField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcErrorConditionalOrderField_SettlementID;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcErrorConditionalOrderField_OrderSysID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcErrorConditionalOrderField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcErrorConditionalOrderField_OrderSysID, CThostFtdcErrorConditionalOrderField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcErrorConditionalOrderField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcErrorConditionalOrderField_OrderSysID = NULL;
    }

    /// 报单来源
    /// typedef char TThostFtdcOrderSourceType
    data->OrderSource = CThostFtdcErrorConditionalOrderField_OrderSource;

    /// 报单状态
    /// typedef char TThostFtdcOrderStatusType
    data->OrderStatus = CThostFtdcErrorConditionalOrderField_OrderStatus;

    /// 报单类型
    /// typedef char TThostFtdcOrderTypeType
    data->OrderType = CThostFtdcErrorConditionalOrderField_OrderType;

    /// 今成交数量
    /// typedef int TThostFtdcVolumeType
    data->VolumeTraded = CThostFtdcErrorConditionalOrderField_VolumeTraded;

    /// 剩余数量
    /// typedef int TThostFtdcVolumeType
    data->VolumeTotal = CThostFtdcErrorConditionalOrderField_VolumeTotal;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcErrorConditionalOrderField_InsertDate != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcErrorConditionalOrderField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcErrorConditionalOrderField_InsertDate, CThostFtdcErrorConditionalOrderField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcErrorConditionalOrderField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcErrorConditionalOrderField_InsertDate = NULL;
    }

    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcErrorConditionalOrderField_InsertTime != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcErrorConditionalOrderField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcErrorConditionalOrderField_InsertTime, CThostFtdcErrorConditionalOrderField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcErrorConditionalOrderField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcErrorConditionalOrderField_InsertTime = NULL;
    }

    /// 激活时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcErrorConditionalOrderField_ActiveTime != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_ActiveTime_length >= (Py_ssize_t)sizeof(data->ActiveTime)) {
            PyErr_Format(PyExc_ValueError, "ActiveTime too long: length=%zd (max allowed is 8)", CThostFtdcErrorConditionalOrderField_ActiveTime_length);
            return -1;
        }
        // memset(data->ActiveTime, 0, sizeof(data->ActiveTime));
        // memcpy(data->ActiveTime, CThostFtdcErrorConditionalOrderField_ActiveTime, CThostFtdcErrorConditionalOrderField_ActiveTime_length);
        strncpy(data->ActiveTime, CThostFtdcErrorConditionalOrderField_ActiveTime, sizeof(data->ActiveTime));
        CThostFtdcErrorConditionalOrderField_ActiveTime = NULL;
    }

    /// 挂起时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcErrorConditionalOrderField_SuspendTime != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_SuspendTime_length >= (Py_ssize_t)sizeof(data->SuspendTime)) {
            PyErr_Format(PyExc_ValueError, "SuspendTime too long: length=%zd (max allowed is 8)", CThostFtdcErrorConditionalOrderField_SuspendTime_length);
            return -1;
        }
        // memset(data->SuspendTime, 0, sizeof(data->SuspendTime));
        // memcpy(data->SuspendTime, CThostFtdcErrorConditionalOrderField_SuspendTime, CThostFtdcErrorConditionalOrderField_SuspendTime_length);
        strncpy(data->SuspendTime, CThostFtdcErrorConditionalOrderField_SuspendTime, sizeof(data->SuspendTime));
        CThostFtdcErrorConditionalOrderField_SuspendTime = NULL;
    }

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcErrorConditionalOrderField_UpdateTime != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_UpdateTime_length >= (Py_ssize_t)sizeof(data->UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is 8)", CThostFtdcErrorConditionalOrderField_UpdateTime_length);
            return -1;
        }
        // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
        // memcpy(data->UpdateTime, CThostFtdcErrorConditionalOrderField_UpdateTime, CThostFtdcErrorConditionalOrderField_UpdateTime_length);
        strncpy(data->UpdateTime, CThostFtdcErrorConditionalOrderField_UpdateTime, sizeof(data->UpdateTime));
        CThostFtdcErrorConditionalOrderField_UpdateTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcErrorConditionalOrderField_CancelTime != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcErrorConditionalOrderField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcErrorConditionalOrderField_CancelTime, CThostFtdcErrorConditionalOrderField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcErrorConditionalOrderField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcErrorConditionalOrderField_CancelTime = NULL;
    }

    /// 最后修改交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcErrorConditionalOrderField_ActiveTraderID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_ActiveTraderID_length >= (Py_ssize_t)sizeof(data->ActiveTraderID)) {
            PyErr_Format(PyExc_ValueError, "ActiveTraderID too long: length=%zd (max allowed is 20)", CThostFtdcErrorConditionalOrderField_ActiveTraderID_length);
            return -1;
        }
        // memset(data->ActiveTraderID, 0, sizeof(data->ActiveTraderID));
        // memcpy(data->ActiveTraderID, CThostFtdcErrorConditionalOrderField_ActiveTraderID, CThostFtdcErrorConditionalOrderField_ActiveTraderID_length);
        strncpy(data->ActiveTraderID, CThostFtdcErrorConditionalOrderField_ActiveTraderID, sizeof(data->ActiveTraderID));
        CThostFtdcErrorConditionalOrderField_ActiveTraderID = NULL;
    }

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcErrorConditionalOrderField_ClearingPartID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_ClearingPartID_length >= (Py_ssize_t)sizeof(data->ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is 10)", CThostFtdcErrorConditionalOrderField_ClearingPartID_length);
            return -1;
        }
        // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
        // memcpy(data->ClearingPartID, CThostFtdcErrorConditionalOrderField_ClearingPartID, CThostFtdcErrorConditionalOrderField_ClearingPartID_length);
        strncpy(data->ClearingPartID, CThostFtdcErrorConditionalOrderField_ClearingPartID, sizeof(data->ClearingPartID));
        CThostFtdcErrorConditionalOrderField_ClearingPartID = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcErrorConditionalOrderField_SequenceNo;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcErrorConditionalOrderField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcErrorConditionalOrderField_SessionID;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcErrorConditionalOrderField_UserProductInfo != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcErrorConditionalOrderField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcErrorConditionalOrderField_UserProductInfo, CThostFtdcErrorConditionalOrderField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcErrorConditionalOrderField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcErrorConditionalOrderField_UserProductInfo = NULL;
    }

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcErrorConditionalOrderField_StatusMsg != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcErrorConditionalOrderField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcErrorConditionalOrderField_StatusMsg, CThostFtdcErrorConditionalOrderField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcErrorConditionalOrderField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcErrorConditionalOrderField_StatusMsg = NULL;
    }

    /// 用户强平标志
    /// typedef int TThostFtdcBoolType
    data->UserForceClose = CThostFtdcErrorConditionalOrderField_UserForceClose;

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcErrorConditionalOrderField_ActiveUserID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_ActiveUserID_length >= (Py_ssize_t)sizeof(data->ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is 15)", CThostFtdcErrorConditionalOrderField_ActiveUserID_length);
            return -1;
        }
        // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
        // memcpy(data->ActiveUserID, CThostFtdcErrorConditionalOrderField_ActiveUserID, CThostFtdcErrorConditionalOrderField_ActiveUserID_length);
        strncpy(data->ActiveUserID, CThostFtdcErrorConditionalOrderField_ActiveUserID, sizeof(data->ActiveUserID));
        CThostFtdcErrorConditionalOrderField_ActiveUserID = NULL;
    }

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    data->BrokerOrderSeq = CThostFtdcErrorConditionalOrderField_BrokerOrderSeq;

    /// 相关报单
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcErrorConditionalOrderField_RelativeOrderSysID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_RelativeOrderSysID_length >= (Py_ssize_t)sizeof(data->RelativeOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "RelativeOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcErrorConditionalOrderField_RelativeOrderSysID_length);
            return -1;
        }
        // memset(data->RelativeOrderSysID, 0, sizeof(data->RelativeOrderSysID));
        // memcpy(data->RelativeOrderSysID, CThostFtdcErrorConditionalOrderField_RelativeOrderSysID, CThostFtdcErrorConditionalOrderField_RelativeOrderSysID_length);
        strncpy(data->RelativeOrderSysID, CThostFtdcErrorConditionalOrderField_RelativeOrderSysID, sizeof(data->RelativeOrderSysID));
        CThostFtdcErrorConditionalOrderField_RelativeOrderSysID = NULL;
    }

    /// 郑商所成交数量
    /// typedef int TThostFtdcVolumeType
    data->ZCETotalTradedVolume = CThostFtdcErrorConditionalOrderField_ZCETotalTradedVolume;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcErrorConditionalOrderField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcErrorConditionalOrderField_ErrorMsg != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcErrorConditionalOrderField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcErrorConditionalOrderField_ErrorMsg, CThostFtdcErrorConditionalOrderField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcErrorConditionalOrderField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcErrorConditionalOrderField_ErrorMsg = NULL;
    }

    /// 互换单标志
    /// typedef int TThostFtdcBoolType
    data->IsSwapOrder = CThostFtdcErrorConditionalOrderField_IsSwapOrder;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcErrorConditionalOrderField_BranchID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcErrorConditionalOrderField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcErrorConditionalOrderField_BranchID, CThostFtdcErrorConditionalOrderField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcErrorConditionalOrderField_BranchID, sizeof(data->BranchID));
        CThostFtdcErrorConditionalOrderField_BranchID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcErrorConditionalOrderField_InvestUnitID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcErrorConditionalOrderField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcErrorConditionalOrderField_InvestUnitID, CThostFtdcErrorConditionalOrderField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcErrorConditionalOrderField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcErrorConditionalOrderField_InvestUnitID = NULL;
    }

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcErrorConditionalOrderField_AccountID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcErrorConditionalOrderField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcErrorConditionalOrderField_AccountID, CThostFtdcErrorConditionalOrderField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcErrorConditionalOrderField_AccountID, sizeof(data->AccountID));
        CThostFtdcErrorConditionalOrderField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcErrorConditionalOrderField_CurrencyID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcErrorConditionalOrderField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcErrorConditionalOrderField_CurrencyID, CThostFtdcErrorConditionalOrderField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcErrorConditionalOrderField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcErrorConditionalOrderField_CurrencyID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcErrorConditionalOrderField_reserve3 != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_reserve3_length >= (Py_ssize_t)sizeof(data->reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is 15)", CThostFtdcErrorConditionalOrderField_reserve3_length);
            return -1;
        }
        // memset(data->reserve3, 0, sizeof(data->reserve3));
        // memcpy(data->reserve3, CThostFtdcErrorConditionalOrderField_reserve3, CThostFtdcErrorConditionalOrderField_reserve3_length);
        strncpy(data->reserve3, CThostFtdcErrorConditionalOrderField_reserve3, sizeof(data->reserve3));
        CThostFtdcErrorConditionalOrderField_reserve3 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcErrorConditionalOrderField_MacAddress != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcErrorConditionalOrderField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcErrorConditionalOrderField_MacAddress, CThostFtdcErrorConditionalOrderField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcErrorConditionalOrderField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcErrorConditionalOrderField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcErrorConditionalOrderField_InstrumentID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcErrorConditionalOrderField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcErrorConditionalOrderField_InstrumentID, CThostFtdcErrorConditionalOrderField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcErrorConditionalOrderField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcErrorConditionalOrderField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcErrorConditionalOrderField_ExchangeInstID != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcErrorConditionalOrderField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcErrorConditionalOrderField_ExchangeInstID, CThostFtdcErrorConditionalOrderField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcErrorConditionalOrderField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcErrorConditionalOrderField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcErrorConditionalOrderField_IPAddress != NULL ) {
        if(CThostFtdcErrorConditionalOrderField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcErrorConditionalOrderField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcErrorConditionalOrderField_IPAddress, CThostFtdcErrorConditionalOrderField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcErrorConditionalOrderField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcErrorConditionalOrderField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:c,s:c,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y,s:y,s:i,s:y,s:i,s:y,s:i,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
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
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
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
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrorConditionalOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrorConditionalOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单价格条件
/// typedef char TThostFtdcOrderPriceTypeType
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_OrderPriceType(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderPriceType), 1);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_OrderPriceType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderPriceType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::OrderPriceType)) {
        PyErr_SetString(PyExc_ValueError, "OrderPriceType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    data->OrderPriceType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合开平标志
/// typedef char TThostFtdcCombOffsetFlagType[5]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_CombOffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombOffsetFlag, (Py_ssize_t)sizeof(data->CombOffsetFlag));
    return PyBytes_FromString(data->CombOffsetFlag);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_CombOffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombOffsetFlag Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::CombOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombOffsetFlag must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->CombOffsetFlag, 0, sizeof(data->CombOffsetFlag));
    // memcpy(data->CombOffsetFlag, buf, len);
    strncpy(data->CombOffsetFlag, buf, sizeof(data->CombOffsetFlag));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合投机套保标志
/// typedef char TThostFtdcCombHedgeFlagType[5]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_CombHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombHedgeFlag, (Py_ssize_t)sizeof(data->CombHedgeFlag));
    return PyBytes_FromString(data->CombHedgeFlag);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_CombHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::CombHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
    // memcpy(data->CombHedgeFlag, buf, len);
    strncpy(data->CombHedgeFlag, buf, sizeof(data->CombHedgeFlag));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 有效期类型
/// typedef char TThostFtdcTimeConditionType
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_TimeCondition(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TimeCondition), 1);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_TimeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::TimeCondition)) {
        PyErr_SetString(PyExc_ValueError, "TimeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    data->TimeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// GTD日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_GTDDate(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->GTDDate, (Py_ssize_t)sizeof(data->GTDDate));
    return PyBytes_FromString(data->GTDDate);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_GTDDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "GTDDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::GTDDate)) {
        PyErr_SetString(PyExc_ValueError, "GTDDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->GTDDate, 0, sizeof(data->GTDDate));
    // memcpy(data->GTDDate, buf, len);
    strncpy(data->GTDDate, buf, sizeof(data->GTDDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交量类型
/// typedef char TThostFtdcVolumeConditionType
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_VolumeCondition(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VolumeCondition), 1);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_VolumeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VolumeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::VolumeCondition)) {
        PyErr_SetString(PyExc_ValueError, "VolumeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    data->VolumeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 触发条件
/// typedef char TThostFtdcContingentConditionType
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_ContingentCondition(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ContingentCondition), 1);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_ContingentCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ContingentCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::ContingentCondition)) {
        PyErr_SetString(PyExc_ValueError, "ContingentCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    data->ContingentCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 强平原因
/// typedef char TThostFtdcForceCloseReasonType
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_ForceCloseReason(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ForceCloseReason), 1);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_ForceCloseReason(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForceCloseReason Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::ForceCloseReason)) {
        PyErr_SetString(PyExc_ValueError, "ForceCloseReason must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    data->ForceCloseReason = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单来源
/// typedef char TThostFtdcOrderSourceType
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_OrderSource(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSource), 1);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_OrderSource(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSource Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::OrderSource)) {
        PyErr_SetString(PyExc_ValueError, "OrderSource must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    data->OrderSource = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单状态
/// typedef char TThostFtdcOrderStatusType
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_OrderStatus(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderStatus), 1);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_OrderStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::OrderStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    data->OrderStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单类型
/// typedef char TThostFtdcOrderTypeType
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_OrderType(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderType), 1);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_OrderType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::OrderType)) {
        PyErr_SetString(PyExc_ValueError, "OrderType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    data->OrderType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 委托时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 激活时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_ActiveTime(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveTime, (Py_ssize_t)sizeof(data->ActiveTime));
    return PyBytes_FromString(data->ActiveTime);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_ActiveTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::ActiveTime)) {
        PyErr_SetString(PyExc_ValueError, "ActiveTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->ActiveTime, 0, sizeof(data->ActiveTime));
    // memcpy(data->ActiveTime, buf, len);
    strncpy(data->ActiveTime, buf, sizeof(data->ActiveTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 挂起时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_SuspendTime(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SuspendTime, (Py_ssize_t)sizeof(data->SuspendTime));
    return PyBytes_FromString(data->SuspendTime);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_SuspendTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SuspendTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::SuspendTime)) {
        PyErr_SetString(PyExc_ValueError, "SuspendTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->SuspendTime, 0, sizeof(data->SuspendTime));
    // memcpy(data->SuspendTime, buf, len);
    strncpy(data->SuspendTime, buf, sizeof(data->SuspendTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后修改时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_UpdateTime(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UpdateTime, (Py_ssize_t)sizeof(data->UpdateTime));
    return PyBytes_FromString(data->UpdateTime);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_UpdateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::UpdateTime)) {
        PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
    // memcpy(data->UpdateTime, buf, len);
    strncpy(data->UpdateTime, buf, sizeof(data->UpdateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后修改交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_ActiveTraderID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveTraderID, (Py_ssize_t)sizeof(data->ActiveTraderID));
    return PyBytes_FromString(data->ActiveTraderID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_ActiveTraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveTraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::ActiveTraderID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveTraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->ActiveTraderID, 0, sizeof(data->ActiveTraderID));
    // memcpy(data->ActiveTraderID, buf, len);
    strncpy(data->ActiveTraderID, buf, sizeof(data->ActiveTraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算会员编号
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_ClearingPartID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClearingPartID, (Py_ssize_t)sizeof(data->ClearingPartID));
    return PyBytes_FromString(data->ClearingPartID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_ClearingPartID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
    // memcpy(data->ClearingPartID, buf, len);
    strncpy(data->ClearingPartID, buf, sizeof(data->ClearingPartID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_ActiveUserID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveUserID, (Py_ssize_t)sizeof(data->ActiveUserID));
    return PyBytes_FromString(data->ActiveUserID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_ActiveUserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::ActiveUserID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
    // memcpy(data->ActiveUserID, buf, len);
    strncpy(data->ActiveUserID, buf, sizeof(data->ActiveUserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 相关报单
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_RelativeOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RelativeOrderSysID, (Py_ssize_t)sizeof(data->RelativeOrderSysID));
    return PyBytes_FromString(data->RelativeOrderSysID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_RelativeOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RelativeOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::RelativeOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "RelativeOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->RelativeOrderSysID, 0, sizeof(data->RelativeOrderSysID));
    // memcpy(data->RelativeOrderSysID, buf, len);
    strncpy(data->RelativeOrderSysID, buf, sizeof(data->RelativeOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_reserve3(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve3, (Py_ssize_t)sizeof(data->reserve3));
    return PyBytes_FromString(data->reserve3);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_reserve3(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->reserve3, 0, sizeof(data->reserve3));
    // memcpy(data->reserve3, buf, len);
    strncpy(data->reserve3, buf, sizeof(data->reserve3));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcErrorConditionalOrderFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcErrorConditionalOrderFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrorConditionalOrderField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrorConditionalOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(self);
    CThostFtdcErrorConditionalOrderField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcErrorConditionalOrderFieldType_members[] = {
    /// 价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "LimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.LimitPrice),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.VolumeTotalOriginal),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.MinVolume),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.StopPrice),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.IsAutoSuspend),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.NotifySequence),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.VolumeTraded),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.VolumeTotal),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.SequenceNo),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.UserForceClose),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.BrokerOrderSeq),
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.ZCETotalTradedVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("郑商所成交数量")
    },
    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    {
        .name = "ErrorID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
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
        .offset = offsetof(PyCThostFtdcErrorConditionalOrderFieldData, data.IsSwapOrder),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("互换单标志")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcErrorConditionalOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_reserve1,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_OrderRef,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_UserID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    {
    .name = "OrderPriceType",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_OrderPriceType,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_OrderPriceType,
    .doc = PyDoc_STR("报单价格条件"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_Direction,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    {
    .name = "CombOffsetFlag",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_CombOffsetFlag,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_CombOffsetFlag,
    .doc = PyDoc_STR("组合开平标志"),
    },
    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    {
    .name = "CombHedgeFlag",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_CombHedgeFlag,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_CombHedgeFlag,
    .doc = PyDoc_STR("组合投机套保标志"),
    },
    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    {
    .name = "TimeCondition",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_TimeCondition,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_TimeCondition,
    .doc = PyDoc_STR("有效期类型"),
    },
    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "GTDDate",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_GTDDate,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_GTDDate,
    .doc = PyDoc_STR("GTD日期"),
    },
    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    {
    .name = "VolumeCondition",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_VolumeCondition,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_VolumeCondition,
    .doc = PyDoc_STR("成交量类型"),
    },
    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    {
    .name = "ContingentCondition",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_ContingentCondition,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_ContingentCondition,
    .doc = PyDoc_STR("触发条件"),
    },
    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    {
    .name = "ForceCloseReason",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_ForceCloseReason,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_ForceCloseReason,
    .doc = PyDoc_STR("强平原因"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_BusinessUnit,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_OrderLocalID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_ParticipantID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_ClientID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_reserve2,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_TraderID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 报单提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("报单提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_TradingDay,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_OrderSysID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 报单来源
    /// typedef char TThostFtdcOrderSourceType
    {
    .name = "OrderSource",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_OrderSource,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_OrderSource,
    .doc = PyDoc_STR("报单来源"),
    },
    /// 报单状态
    /// typedef char TThostFtdcOrderStatusType
    {
    .name = "OrderStatus",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_OrderStatus,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_OrderStatus,
    .doc = PyDoc_STR("报单状态"),
    },
    /// 报单类型
    /// typedef char TThostFtdcOrderTypeType
    {
    .name = "OrderType",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_OrderType,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_OrderType,
    .doc = PyDoc_STR("报单类型"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_InsertDate,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 委托时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_InsertTime,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_InsertTime,
    .doc = PyDoc_STR("委托时间"),
    },
    /// 激活时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActiveTime",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_ActiveTime,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_ActiveTime,
    .doc = PyDoc_STR("激活时间"),
    },
    /// 挂起时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "SuspendTime",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_SuspendTime,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_SuspendTime,
    .doc = PyDoc_STR("挂起时间"),
    },
    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "UpdateTime",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_UpdateTime,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_UpdateTime,
    .doc = PyDoc_STR("最后修改时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_CancelTime,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 最后修改交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "ActiveTraderID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_ActiveTraderID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_ActiveTraderID,
    .doc = PyDoc_STR("最后修改交易所交易员代码"),
    },
    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ClearingPartID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_ClearingPartID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_ClearingPartID,
    .doc = PyDoc_STR("结算会员编号"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_UserProductInfo,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_StatusMsg,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "ActiveUserID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_ActiveUserID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_ActiveUserID,
    .doc = PyDoc_STR("操作用户代码"),
    },
    /// 相关报单
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "RelativeOrderSysID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_RelativeOrderSysID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_RelativeOrderSysID,
    .doc = PyDoc_STR("相关报单"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_ErrorMsg,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_BranchID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_InvestUnitID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_AccountID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_CurrencyID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve3",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_reserve3,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_reserve3,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_MacAddress,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_InstrumentID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcErrorConditionalOrderFieldType_get_IPAddress,
    .set = PyCThostFtdcErrorConditionalOrderFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcErrorConditionalOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcErrorConditionalOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询错误报单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcErrorConditionalOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcErrorConditionalOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcErrorConditionalOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcErrorConditionalOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcErrorConditionalOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcErrorConditionalOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询错误报单操作")},
    {Py_tp_members, PyCThostFtdcErrorConditionalOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcErrorConditionalOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcErrorConditionalOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcErrorConditionalOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcErrorConditionalOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcErrorConditionalOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcErrorConditionalOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcErrorConditionalOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcErrorConditionalOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcErrorConditionalOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcErrorConditionalOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcErrorConditionalOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcErrorConditionalOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcErrorConditionalOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcErrorConditionalOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcErrorConditionalOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}