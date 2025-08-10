
#include "PyCThostFtdcErrorConditionalOrderField.h"

///查询错误报单操作

static PyObject *PyCThostFtdcErrorConditionalOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcErrorConditionalOrderField *self = (PyCThostFtdcErrorConditionalOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcErrorConditionalOrderField_init(PyCThostFtdcErrorConditionalOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OrderSysID", "OrderSource", "OrderStatus", "OrderType", "VolumeTraded", "VolumeTotal", "InsertDate", "InsertTime", "ActiveTime", "SuspendTime", "UpdateTime", "CancelTime", "ActiveTraderID", "ClearingPartID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "UserForceClose", "ActiveUserID", "BrokerOrderSeq", "RelativeOrderSysID", "ZCETotalTradedVolume", "ErrorID", "ErrorMsg", "IsSwapOrder", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ErrorConditionalOrderField_BrokerID = NULL;
    Py_ssize_t ErrorConditionalOrderField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *ErrorConditionalOrderField_InvestorID = NULL;
    Py_ssize_t ErrorConditionalOrderField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ErrorConditionalOrderField_reserve1 = NULL;
    Py_ssize_t ErrorConditionalOrderField_reserve1_len = 0;
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *ErrorConditionalOrderField_OrderRef = NULL;
    Py_ssize_t ErrorConditionalOrderField_OrderRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ErrorConditionalOrderField_UserID = NULL;
    Py_ssize_t ErrorConditionalOrderField_UserID_len = 0;
            
    ///报单价格条件
    // TThostFtdcOrderPriceTypeType char
    char ErrorConditionalOrderField_OrderPriceType = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char ErrorConditionalOrderField_Direction = 0;
            
    ///组合开平标志
    // TThostFtdcCombOffsetFlagType char[5]
    const char *ErrorConditionalOrderField_CombOffsetFlag = NULL;
    Py_ssize_t ErrorConditionalOrderField_CombOffsetFlag_len = 0;
            
    ///组合投机套保标志
    // TThostFtdcCombHedgeFlagType char[5]
    const char *ErrorConditionalOrderField_CombHedgeFlag = NULL;
    Py_ssize_t ErrorConditionalOrderField_CombHedgeFlag_len = 0;
            
    ///价格
    // TThostFtdcPriceType double
    double ErrorConditionalOrderField_LimitPrice = 0.0;
        
    ///数量
    // TThostFtdcVolumeType int
    int ErrorConditionalOrderField_VolumeTotalOriginal = 0;
        
    ///有效期类型
    // TThostFtdcTimeConditionType char
    char ErrorConditionalOrderField_TimeCondition = 0;
            
    ///GTD日期
    // TThostFtdcDateType char[9]
    const char *ErrorConditionalOrderField_GTDDate = NULL;
    Py_ssize_t ErrorConditionalOrderField_GTDDate_len = 0;
            
    ///成交量类型
    // TThostFtdcVolumeConditionType char
    char ErrorConditionalOrderField_VolumeCondition = 0;
            
    ///最小成交量
    // TThostFtdcVolumeType int
    int ErrorConditionalOrderField_MinVolume = 0;
        
    ///触发条件
    // TThostFtdcContingentConditionType char
    char ErrorConditionalOrderField_ContingentCondition = 0;
            
    ///止损价
    // TThostFtdcPriceType double
    double ErrorConditionalOrderField_StopPrice = 0.0;
        
    ///强平原因
    // TThostFtdcForceCloseReasonType char
    char ErrorConditionalOrderField_ForceCloseReason = 0;
            
    ///自动挂起标志
    // TThostFtdcBoolType int
    int ErrorConditionalOrderField_IsAutoSuspend = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ErrorConditionalOrderField_BusinessUnit = NULL;
    Py_ssize_t ErrorConditionalOrderField_BusinessUnit_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int ErrorConditionalOrderField_RequestID = 0;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ErrorConditionalOrderField_OrderLocalID = NULL;
    Py_ssize_t ErrorConditionalOrderField_OrderLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ErrorConditionalOrderField_ExchangeID = NULL;
    Py_ssize_t ErrorConditionalOrderField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ErrorConditionalOrderField_ParticipantID = NULL;
    Py_ssize_t ErrorConditionalOrderField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ErrorConditionalOrderField_ClientID = NULL;
    Py_ssize_t ErrorConditionalOrderField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ErrorConditionalOrderField_reserve2 = NULL;
    Py_ssize_t ErrorConditionalOrderField_reserve2_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ErrorConditionalOrderField_TraderID = NULL;
    Py_ssize_t ErrorConditionalOrderField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ErrorConditionalOrderField_InstallID = 0;
        
    ///报单提交状态
    // TThostFtdcOrderSubmitStatusType char
    char ErrorConditionalOrderField_OrderSubmitStatus = 0;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    int ErrorConditionalOrderField_NotifySequence = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *ErrorConditionalOrderField_TradingDay = NULL;
    Py_ssize_t ErrorConditionalOrderField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int ErrorConditionalOrderField_SettlementID = 0;
        
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ErrorConditionalOrderField_OrderSysID = NULL;
    Py_ssize_t ErrorConditionalOrderField_OrderSysID_len = 0;
            
    ///报单来源
    // TThostFtdcOrderSourceType char
    char ErrorConditionalOrderField_OrderSource = 0;
            
    ///报单状态
    // TThostFtdcOrderStatusType char
    char ErrorConditionalOrderField_OrderStatus = 0;
            
    ///报单类型
    // TThostFtdcOrderTypeType char
    char ErrorConditionalOrderField_OrderType = 0;
            
    ///今成交数量
    // TThostFtdcVolumeType int
    int ErrorConditionalOrderField_VolumeTraded = 0;
        
    ///剩余数量
    // TThostFtdcVolumeType int
    int ErrorConditionalOrderField_VolumeTotal = 0;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *ErrorConditionalOrderField_InsertDate = NULL;
    Py_ssize_t ErrorConditionalOrderField_InsertDate_len = 0;
            
    ///委托时间
    // TThostFtdcTimeType char[9]
    const char *ErrorConditionalOrderField_InsertTime = NULL;
    Py_ssize_t ErrorConditionalOrderField_InsertTime_len = 0;
            
    ///激活时间
    // TThostFtdcTimeType char[9]
    const char *ErrorConditionalOrderField_ActiveTime = NULL;
    Py_ssize_t ErrorConditionalOrderField_ActiveTime_len = 0;
            
    ///挂起时间
    // TThostFtdcTimeType char[9]
    const char *ErrorConditionalOrderField_SuspendTime = NULL;
    Py_ssize_t ErrorConditionalOrderField_SuspendTime_len = 0;
            
    ///最后修改时间
    // TThostFtdcTimeType char[9]
    const char *ErrorConditionalOrderField_UpdateTime = NULL;
    Py_ssize_t ErrorConditionalOrderField_UpdateTime_len = 0;
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    const char *ErrorConditionalOrderField_CancelTime = NULL;
    Py_ssize_t ErrorConditionalOrderField_CancelTime_len = 0;
            
    ///最后修改交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ErrorConditionalOrderField_ActiveTraderID = NULL;
    Py_ssize_t ErrorConditionalOrderField_ActiveTraderID_len = 0;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    const char *ErrorConditionalOrderField_ClearingPartID = NULL;
    Py_ssize_t ErrorConditionalOrderField_ClearingPartID_len = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int ErrorConditionalOrderField_SequenceNo = 0;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    int ErrorConditionalOrderField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int ErrorConditionalOrderField_SessionID = 0;
        
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *ErrorConditionalOrderField_UserProductInfo = NULL;
    Py_ssize_t ErrorConditionalOrderField_UserProductInfo_len = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *ErrorConditionalOrderField_StatusMsg = NULL;
    Py_ssize_t ErrorConditionalOrderField_StatusMsg_len = 0;
            
    ///用户强平标志
    // TThostFtdcBoolType int
    int ErrorConditionalOrderField_UserForceClose = 0;
        
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    const char *ErrorConditionalOrderField_ActiveUserID = NULL;
    Py_ssize_t ErrorConditionalOrderField_ActiveUserID_len = 0;
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    int ErrorConditionalOrderField_BrokerOrderSeq = 0;
        
    ///相关报单
    // TThostFtdcOrderSysIDType char[21]
    const char *ErrorConditionalOrderField_RelativeOrderSysID = NULL;
    Py_ssize_t ErrorConditionalOrderField_RelativeOrderSysID_len = 0;
            
    ///郑商所成交数量
    // TThostFtdcVolumeType int
    int ErrorConditionalOrderField_ZCETotalTradedVolume = 0;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    int ErrorConditionalOrderField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *ErrorConditionalOrderField_ErrorMsg = NULL;
    Py_ssize_t ErrorConditionalOrderField_ErrorMsg_len = 0;
            
    ///互换单标志
    // TThostFtdcBoolType int
    int ErrorConditionalOrderField_IsSwapOrder = 0;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *ErrorConditionalOrderField_BranchID = NULL;
    Py_ssize_t ErrorConditionalOrderField_BranchID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *ErrorConditionalOrderField_InvestUnitID = NULL;
    Py_ssize_t ErrorConditionalOrderField_InvestUnitID_len = 0;
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    const char *ErrorConditionalOrderField_AccountID = NULL;
    Py_ssize_t ErrorConditionalOrderField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *ErrorConditionalOrderField_CurrencyID = NULL;
    Py_ssize_t ErrorConditionalOrderField_CurrencyID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ErrorConditionalOrderField_reserve3 = NULL;
    Py_ssize_t ErrorConditionalOrderField_reserve3_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ErrorConditionalOrderField_MacAddress = NULL;
    Py_ssize_t ErrorConditionalOrderField_MacAddress_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ErrorConditionalOrderField_InstrumentID = NULL;
    Py_ssize_t ErrorConditionalOrderField_InstrumentID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ErrorConditionalOrderField_ExchangeInstID = NULL;
    Py_ssize_t ErrorConditionalOrderField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ErrorConditionalOrderField_IPAddress = NULL;
    Py_ssize_t ErrorConditionalOrderField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iy#y#y#y#y#y#iciy#iy#ccciiy#y#y#y#y#y#y#y#iiiy#y#iy#iy#iiy#iy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccs#s#dics#cicdcis#is#s#s#s#s#s#icis#is#ccciis#s#s#s#s#s#s#s#iiis#s#is#is#iis#is#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &ErrorConditionalOrderField_BrokerID, &ErrorConditionalOrderField_BrokerID_len 
        , &ErrorConditionalOrderField_InvestorID, &ErrorConditionalOrderField_InvestorID_len 
        , &ErrorConditionalOrderField_reserve1, &ErrorConditionalOrderField_reserve1_len 
        , &ErrorConditionalOrderField_OrderRef, &ErrorConditionalOrderField_OrderRef_len 
        , &ErrorConditionalOrderField_UserID, &ErrorConditionalOrderField_UserID_len 
        , &ErrorConditionalOrderField_OrderPriceType 
        , &ErrorConditionalOrderField_Direction 
        , &ErrorConditionalOrderField_CombOffsetFlag, &ErrorConditionalOrderField_CombOffsetFlag_len 
        , &ErrorConditionalOrderField_CombHedgeFlag, &ErrorConditionalOrderField_CombHedgeFlag_len 
        , &ErrorConditionalOrderField_LimitPrice 
        , &ErrorConditionalOrderField_VolumeTotalOriginal 
        , &ErrorConditionalOrderField_TimeCondition 
        , &ErrorConditionalOrderField_GTDDate, &ErrorConditionalOrderField_GTDDate_len 
        , &ErrorConditionalOrderField_VolumeCondition 
        , &ErrorConditionalOrderField_MinVolume 
        , &ErrorConditionalOrderField_ContingentCondition 
        , &ErrorConditionalOrderField_StopPrice 
        , &ErrorConditionalOrderField_ForceCloseReason 
        , &ErrorConditionalOrderField_IsAutoSuspend 
        , &ErrorConditionalOrderField_BusinessUnit, &ErrorConditionalOrderField_BusinessUnit_len 
        , &ErrorConditionalOrderField_RequestID 
        , &ErrorConditionalOrderField_OrderLocalID, &ErrorConditionalOrderField_OrderLocalID_len 
        , &ErrorConditionalOrderField_ExchangeID, &ErrorConditionalOrderField_ExchangeID_len 
        , &ErrorConditionalOrderField_ParticipantID, &ErrorConditionalOrderField_ParticipantID_len 
        , &ErrorConditionalOrderField_ClientID, &ErrorConditionalOrderField_ClientID_len 
        , &ErrorConditionalOrderField_reserve2, &ErrorConditionalOrderField_reserve2_len 
        , &ErrorConditionalOrderField_TraderID, &ErrorConditionalOrderField_TraderID_len 
        , &ErrorConditionalOrderField_InstallID 
        , &ErrorConditionalOrderField_OrderSubmitStatus 
        , &ErrorConditionalOrderField_NotifySequence 
        , &ErrorConditionalOrderField_TradingDay, &ErrorConditionalOrderField_TradingDay_len 
        , &ErrorConditionalOrderField_SettlementID 
        , &ErrorConditionalOrderField_OrderSysID, &ErrorConditionalOrderField_OrderSysID_len 
        , &ErrorConditionalOrderField_OrderSource 
        , &ErrorConditionalOrderField_OrderStatus 
        , &ErrorConditionalOrderField_OrderType 
        , &ErrorConditionalOrderField_VolumeTraded 
        , &ErrorConditionalOrderField_VolumeTotal 
        , &ErrorConditionalOrderField_InsertDate, &ErrorConditionalOrderField_InsertDate_len 
        , &ErrorConditionalOrderField_InsertTime, &ErrorConditionalOrderField_InsertTime_len 
        , &ErrorConditionalOrderField_ActiveTime, &ErrorConditionalOrderField_ActiveTime_len 
        , &ErrorConditionalOrderField_SuspendTime, &ErrorConditionalOrderField_SuspendTime_len 
        , &ErrorConditionalOrderField_UpdateTime, &ErrorConditionalOrderField_UpdateTime_len 
        , &ErrorConditionalOrderField_CancelTime, &ErrorConditionalOrderField_CancelTime_len 
        , &ErrorConditionalOrderField_ActiveTraderID, &ErrorConditionalOrderField_ActiveTraderID_len 
        , &ErrorConditionalOrderField_ClearingPartID, &ErrorConditionalOrderField_ClearingPartID_len 
        , &ErrorConditionalOrderField_SequenceNo 
        , &ErrorConditionalOrderField_FrontID 
        , &ErrorConditionalOrderField_SessionID 
        , &ErrorConditionalOrderField_UserProductInfo, &ErrorConditionalOrderField_UserProductInfo_len 
        , &ErrorConditionalOrderField_StatusMsg, &ErrorConditionalOrderField_StatusMsg_len 
        , &ErrorConditionalOrderField_UserForceClose 
        , &ErrorConditionalOrderField_ActiveUserID, &ErrorConditionalOrderField_ActiveUserID_len 
        , &ErrorConditionalOrderField_BrokerOrderSeq 
        , &ErrorConditionalOrderField_RelativeOrderSysID, &ErrorConditionalOrderField_RelativeOrderSysID_len 
        , &ErrorConditionalOrderField_ZCETotalTradedVolume 
        , &ErrorConditionalOrderField_ErrorID 
        , &ErrorConditionalOrderField_ErrorMsg, &ErrorConditionalOrderField_ErrorMsg_len 
        , &ErrorConditionalOrderField_IsSwapOrder 
        , &ErrorConditionalOrderField_BranchID, &ErrorConditionalOrderField_BranchID_len 
        , &ErrorConditionalOrderField_InvestUnitID, &ErrorConditionalOrderField_InvestUnitID_len 
        , &ErrorConditionalOrderField_AccountID, &ErrorConditionalOrderField_AccountID_len 
        , &ErrorConditionalOrderField_CurrencyID, &ErrorConditionalOrderField_CurrencyID_len 
        , &ErrorConditionalOrderField_reserve3, &ErrorConditionalOrderField_reserve3_len 
        , &ErrorConditionalOrderField_MacAddress, &ErrorConditionalOrderField_MacAddress_len 
        , &ErrorConditionalOrderField_InstrumentID, &ErrorConditionalOrderField_InstrumentID_len 
        , &ErrorConditionalOrderField_ExchangeInstID, &ErrorConditionalOrderField_ExchangeInstID_len 
        , &ErrorConditionalOrderField_IPAddress, &ErrorConditionalOrderField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ErrorConditionalOrderField_BrokerID != NULL ) {
        if(ErrorConditionalOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ErrorConditionalOrderField_BrokerID, ErrorConditionalOrderField_BrokerID_len);        
        strncpy(self->data.BrokerID, ErrorConditionalOrderField_BrokerID, sizeof(self->data.BrokerID) );
        ErrorConditionalOrderField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( ErrorConditionalOrderField_InvestorID != NULL ) {
        if(ErrorConditionalOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, ErrorConditionalOrderField_InvestorID, ErrorConditionalOrderField_InvestorID_len);        
        strncpy(self->data.InvestorID, ErrorConditionalOrderField_InvestorID, sizeof(self->data.InvestorID) );
        ErrorConditionalOrderField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ErrorConditionalOrderField_reserve1 != NULL ) {
        if(ErrorConditionalOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ErrorConditionalOrderField_reserve1, ErrorConditionalOrderField_reserve1_len);        
        strncpy(self->data.reserve1, ErrorConditionalOrderField_reserve1, sizeof(self->data.reserve1) );
        ErrorConditionalOrderField_reserve1 = NULL;
    }
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( ErrorConditionalOrderField_OrderRef != NULL ) {
        if(ErrorConditionalOrderField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, ErrorConditionalOrderField_OrderRef, ErrorConditionalOrderField_OrderRef_len);        
        strncpy(self->data.OrderRef, ErrorConditionalOrderField_OrderRef, sizeof(self->data.OrderRef) );
        ErrorConditionalOrderField_OrderRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ErrorConditionalOrderField_UserID != NULL ) {
        if(ErrorConditionalOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ErrorConditionalOrderField_UserID, ErrorConditionalOrderField_UserID_len);        
        strncpy(self->data.UserID, ErrorConditionalOrderField_UserID, sizeof(self->data.UserID) );
        ErrorConditionalOrderField_UserID = NULL;
    }
            
    ///报单价格条件
    // TThostFtdcOrderPriceTypeType char
    self->data.OrderPriceType = ErrorConditionalOrderField_OrderPriceType;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = ErrorConditionalOrderField_Direction;
            
    ///组合开平标志
    // TThostFtdcCombOffsetFlagType char[5]
    if( ErrorConditionalOrderField_CombOffsetFlag != NULL ) {
        if(ErrorConditionalOrderField_CombOffsetFlag_len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
            PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_CombOffsetFlag_len, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
            return -1;
        }
        // memset(self->data.CombOffsetFlag, 0, sizeof(self->data.CombOffsetFlag));
        // memcpy(self->data.CombOffsetFlag, ErrorConditionalOrderField_CombOffsetFlag, ErrorConditionalOrderField_CombOffsetFlag_len);        
        strncpy(self->data.CombOffsetFlag, ErrorConditionalOrderField_CombOffsetFlag, sizeof(self->data.CombOffsetFlag) );
        ErrorConditionalOrderField_CombOffsetFlag = NULL;
    }
            
    ///组合投机套保标志
    // TThostFtdcCombHedgeFlagType char[5]
    if( ErrorConditionalOrderField_CombHedgeFlag != NULL ) {
        if(ErrorConditionalOrderField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
            PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
            return -1;
        }
        // memset(self->data.CombHedgeFlag, 0, sizeof(self->data.CombHedgeFlag));
        // memcpy(self->data.CombHedgeFlag, ErrorConditionalOrderField_CombHedgeFlag, ErrorConditionalOrderField_CombHedgeFlag_len);        
        strncpy(self->data.CombHedgeFlag, ErrorConditionalOrderField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
        ErrorConditionalOrderField_CombHedgeFlag = NULL;
    }
            
    ///价格
    // TThostFtdcPriceType double
    self->data.LimitPrice = ErrorConditionalOrderField_LimitPrice;
        
    ///数量
    // TThostFtdcVolumeType int
    self->data.VolumeTotalOriginal = ErrorConditionalOrderField_VolumeTotalOriginal;
        
    ///有效期类型
    // TThostFtdcTimeConditionType char
    self->data.TimeCondition = ErrorConditionalOrderField_TimeCondition;
            
    ///GTD日期
    // TThostFtdcDateType char[9]
    if( ErrorConditionalOrderField_GTDDate != NULL ) {
        if(ErrorConditionalOrderField_GTDDate_len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
            PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_GTDDate_len, (Py_ssize_t)sizeof(self->data.GTDDate));
            return -1;
        }
        // memset(self->data.GTDDate, 0, sizeof(self->data.GTDDate));
        // memcpy(self->data.GTDDate, ErrorConditionalOrderField_GTDDate, ErrorConditionalOrderField_GTDDate_len);        
        strncpy(self->data.GTDDate, ErrorConditionalOrderField_GTDDate, sizeof(self->data.GTDDate) );
        ErrorConditionalOrderField_GTDDate = NULL;
    }
            
    ///成交量类型
    // TThostFtdcVolumeConditionType char
    self->data.VolumeCondition = ErrorConditionalOrderField_VolumeCondition;
            
    ///最小成交量
    // TThostFtdcVolumeType int
    self->data.MinVolume = ErrorConditionalOrderField_MinVolume;
        
    ///触发条件
    // TThostFtdcContingentConditionType char
    self->data.ContingentCondition = ErrorConditionalOrderField_ContingentCondition;
            
    ///止损价
    // TThostFtdcPriceType double
    self->data.StopPrice = ErrorConditionalOrderField_StopPrice;
        
    ///强平原因
    // TThostFtdcForceCloseReasonType char
    self->data.ForceCloseReason = ErrorConditionalOrderField_ForceCloseReason;
            
    ///自动挂起标志
    // TThostFtdcBoolType int
    self->data.IsAutoSuspend = ErrorConditionalOrderField_IsAutoSuspend;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ErrorConditionalOrderField_BusinessUnit != NULL ) {
        if(ErrorConditionalOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ErrorConditionalOrderField_BusinessUnit, ErrorConditionalOrderField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ErrorConditionalOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ErrorConditionalOrderField_BusinessUnit = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ErrorConditionalOrderField_RequestID;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ErrorConditionalOrderField_OrderLocalID != NULL ) {
        if(ErrorConditionalOrderField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, ErrorConditionalOrderField_OrderLocalID, ErrorConditionalOrderField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, ErrorConditionalOrderField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        ErrorConditionalOrderField_OrderLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ErrorConditionalOrderField_ExchangeID != NULL ) {
        if(ErrorConditionalOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ErrorConditionalOrderField_ExchangeID, ErrorConditionalOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ErrorConditionalOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        ErrorConditionalOrderField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ErrorConditionalOrderField_ParticipantID != NULL ) {
        if(ErrorConditionalOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ErrorConditionalOrderField_ParticipantID, ErrorConditionalOrderField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ErrorConditionalOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
        ErrorConditionalOrderField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ErrorConditionalOrderField_ClientID != NULL ) {
        if(ErrorConditionalOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ErrorConditionalOrderField_ClientID, ErrorConditionalOrderField_ClientID_len);        
        strncpy(self->data.ClientID, ErrorConditionalOrderField_ClientID, sizeof(self->data.ClientID) );
        ErrorConditionalOrderField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ErrorConditionalOrderField_reserve2 != NULL ) {
        if(ErrorConditionalOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ErrorConditionalOrderField_reserve2, ErrorConditionalOrderField_reserve2_len);        
        strncpy(self->data.reserve2, ErrorConditionalOrderField_reserve2, sizeof(self->data.reserve2) );
        ErrorConditionalOrderField_reserve2 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ErrorConditionalOrderField_TraderID != NULL ) {
        if(ErrorConditionalOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ErrorConditionalOrderField_TraderID, ErrorConditionalOrderField_TraderID_len);        
        strncpy(self->data.TraderID, ErrorConditionalOrderField_TraderID, sizeof(self->data.TraderID) );
        ErrorConditionalOrderField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ErrorConditionalOrderField_InstallID;
        
    ///报单提交状态
    // TThostFtdcOrderSubmitStatusType char
    self->data.OrderSubmitStatus = ErrorConditionalOrderField_OrderSubmitStatus;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = ErrorConditionalOrderField_NotifySequence;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( ErrorConditionalOrderField_TradingDay != NULL ) {
        if(ErrorConditionalOrderField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ErrorConditionalOrderField_TradingDay, ErrorConditionalOrderField_TradingDay_len);        
        strncpy(self->data.TradingDay, ErrorConditionalOrderField_TradingDay, sizeof(self->data.TradingDay) );
        ErrorConditionalOrderField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = ErrorConditionalOrderField_SettlementID;
        
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( ErrorConditionalOrderField_OrderSysID != NULL ) {
        if(ErrorConditionalOrderField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, ErrorConditionalOrderField_OrderSysID, ErrorConditionalOrderField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, ErrorConditionalOrderField_OrderSysID, sizeof(self->data.OrderSysID) );
        ErrorConditionalOrderField_OrderSysID = NULL;
    }
            
    ///报单来源
    // TThostFtdcOrderSourceType char
    self->data.OrderSource = ErrorConditionalOrderField_OrderSource;
            
    ///报单状态
    // TThostFtdcOrderStatusType char
    self->data.OrderStatus = ErrorConditionalOrderField_OrderStatus;
            
    ///报单类型
    // TThostFtdcOrderTypeType char
    self->data.OrderType = ErrorConditionalOrderField_OrderType;
            
    ///今成交数量
    // TThostFtdcVolumeType int
    self->data.VolumeTraded = ErrorConditionalOrderField_VolumeTraded;
        
    ///剩余数量
    // TThostFtdcVolumeType int
    self->data.VolumeTotal = ErrorConditionalOrderField_VolumeTotal;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    if( ErrorConditionalOrderField_InsertDate != NULL ) {
        if(ErrorConditionalOrderField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, ErrorConditionalOrderField_InsertDate, ErrorConditionalOrderField_InsertDate_len);        
        strncpy(self->data.InsertDate, ErrorConditionalOrderField_InsertDate, sizeof(self->data.InsertDate) );
        ErrorConditionalOrderField_InsertDate = NULL;
    }
            
    ///委托时间
    // TThostFtdcTimeType char[9]
    if( ErrorConditionalOrderField_InsertTime != NULL ) {
        if(ErrorConditionalOrderField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, ErrorConditionalOrderField_InsertTime, ErrorConditionalOrderField_InsertTime_len);        
        strncpy(self->data.InsertTime, ErrorConditionalOrderField_InsertTime, sizeof(self->data.InsertTime) );
        ErrorConditionalOrderField_InsertTime = NULL;
    }
            
    ///激活时间
    // TThostFtdcTimeType char[9]
    if( ErrorConditionalOrderField_ActiveTime != NULL ) {
        if(ErrorConditionalOrderField_ActiveTime_len > (Py_ssize_t)sizeof(self->data.ActiveTime)) {
            PyErr_Format(PyExc_ValueError, "ActiveTime too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_ActiveTime_len, (Py_ssize_t)sizeof(self->data.ActiveTime));
            return -1;
        }
        // memset(self->data.ActiveTime, 0, sizeof(self->data.ActiveTime));
        // memcpy(self->data.ActiveTime, ErrorConditionalOrderField_ActiveTime, ErrorConditionalOrderField_ActiveTime_len);        
        strncpy(self->data.ActiveTime, ErrorConditionalOrderField_ActiveTime, sizeof(self->data.ActiveTime) );
        ErrorConditionalOrderField_ActiveTime = NULL;
    }
            
    ///挂起时间
    // TThostFtdcTimeType char[9]
    if( ErrorConditionalOrderField_SuspendTime != NULL ) {
        if(ErrorConditionalOrderField_SuspendTime_len > (Py_ssize_t)sizeof(self->data.SuspendTime)) {
            PyErr_Format(PyExc_ValueError, "SuspendTime too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_SuspendTime_len, (Py_ssize_t)sizeof(self->data.SuspendTime));
            return -1;
        }
        // memset(self->data.SuspendTime, 0, sizeof(self->data.SuspendTime));
        // memcpy(self->data.SuspendTime, ErrorConditionalOrderField_SuspendTime, ErrorConditionalOrderField_SuspendTime_len);        
        strncpy(self->data.SuspendTime, ErrorConditionalOrderField_SuspendTime, sizeof(self->data.SuspendTime) );
        ErrorConditionalOrderField_SuspendTime = NULL;
    }
            
    ///最后修改时间
    // TThostFtdcTimeType char[9]
    if( ErrorConditionalOrderField_UpdateTime != NULL ) {
        if(ErrorConditionalOrderField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
            return -1;
        }
        // memset(self->data.UpdateTime, 0, sizeof(self->data.UpdateTime));
        // memcpy(self->data.UpdateTime, ErrorConditionalOrderField_UpdateTime, ErrorConditionalOrderField_UpdateTime_len);        
        strncpy(self->data.UpdateTime, ErrorConditionalOrderField_UpdateTime, sizeof(self->data.UpdateTime) );
        ErrorConditionalOrderField_UpdateTime = NULL;
    }
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    if( ErrorConditionalOrderField_CancelTime != NULL ) {
        if(ErrorConditionalOrderField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
            return -1;
        }
        // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
        // memcpy(self->data.CancelTime, ErrorConditionalOrderField_CancelTime, ErrorConditionalOrderField_CancelTime_len);        
        strncpy(self->data.CancelTime, ErrorConditionalOrderField_CancelTime, sizeof(self->data.CancelTime) );
        ErrorConditionalOrderField_CancelTime = NULL;
    }
            
    ///最后修改交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ErrorConditionalOrderField_ActiveTraderID != NULL ) {
        if(ErrorConditionalOrderField_ActiveTraderID_len > (Py_ssize_t)sizeof(self->data.ActiveTraderID)) {
            PyErr_Format(PyExc_ValueError, "ActiveTraderID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_ActiveTraderID_len, (Py_ssize_t)sizeof(self->data.ActiveTraderID));
            return -1;
        }
        // memset(self->data.ActiveTraderID, 0, sizeof(self->data.ActiveTraderID));
        // memcpy(self->data.ActiveTraderID, ErrorConditionalOrderField_ActiveTraderID, ErrorConditionalOrderField_ActiveTraderID_len);        
        strncpy(self->data.ActiveTraderID, ErrorConditionalOrderField_ActiveTraderID, sizeof(self->data.ActiveTraderID) );
        ErrorConditionalOrderField_ActiveTraderID = NULL;
    }
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    if( ErrorConditionalOrderField_ClearingPartID != NULL ) {
        if(ErrorConditionalOrderField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
            return -1;
        }
        // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
        // memcpy(self->data.ClearingPartID, ErrorConditionalOrderField_ClearingPartID, ErrorConditionalOrderField_ClearingPartID_len);        
        strncpy(self->data.ClearingPartID, ErrorConditionalOrderField_ClearingPartID, sizeof(self->data.ClearingPartID) );
        ErrorConditionalOrderField_ClearingPartID = NULL;
    }
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = ErrorConditionalOrderField_SequenceNo;
        
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = ErrorConditionalOrderField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = ErrorConditionalOrderField_SessionID;
        
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( ErrorConditionalOrderField_UserProductInfo != NULL ) {
        if(ErrorConditionalOrderField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, ErrorConditionalOrderField_UserProductInfo, ErrorConditionalOrderField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, ErrorConditionalOrderField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        ErrorConditionalOrderField_UserProductInfo = NULL;
    }
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( ErrorConditionalOrderField_StatusMsg != NULL ) {
        if(ErrorConditionalOrderField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, ErrorConditionalOrderField_StatusMsg, ErrorConditionalOrderField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, ErrorConditionalOrderField_StatusMsg, sizeof(self->data.StatusMsg) );
        ErrorConditionalOrderField_StatusMsg = NULL;
    }
            
    ///用户强平标志
    // TThostFtdcBoolType int
    self->data.UserForceClose = ErrorConditionalOrderField_UserForceClose;
        
    ///操作用户代码
    // TThostFtdcUserIDType char[16]
    if( ErrorConditionalOrderField_ActiveUserID != NULL ) {
        if(ErrorConditionalOrderField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
            return -1;
        }
        // memset(self->data.ActiveUserID, 0, sizeof(self->data.ActiveUserID));
        // memcpy(self->data.ActiveUserID, ErrorConditionalOrderField_ActiveUserID, ErrorConditionalOrderField_ActiveUserID_len);        
        strncpy(self->data.ActiveUserID, ErrorConditionalOrderField_ActiveUserID, sizeof(self->data.ActiveUserID) );
        ErrorConditionalOrderField_ActiveUserID = NULL;
    }
            
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    self->data.BrokerOrderSeq = ErrorConditionalOrderField_BrokerOrderSeq;
        
    ///相关报单
    // TThostFtdcOrderSysIDType char[21]
    if( ErrorConditionalOrderField_RelativeOrderSysID != NULL ) {
        if(ErrorConditionalOrderField_RelativeOrderSysID_len > (Py_ssize_t)sizeof(self->data.RelativeOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "RelativeOrderSysID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_RelativeOrderSysID_len, (Py_ssize_t)sizeof(self->data.RelativeOrderSysID));
            return -1;
        }
        // memset(self->data.RelativeOrderSysID, 0, sizeof(self->data.RelativeOrderSysID));
        // memcpy(self->data.RelativeOrderSysID, ErrorConditionalOrderField_RelativeOrderSysID, ErrorConditionalOrderField_RelativeOrderSysID_len);        
        strncpy(self->data.RelativeOrderSysID, ErrorConditionalOrderField_RelativeOrderSysID, sizeof(self->data.RelativeOrderSysID) );
        ErrorConditionalOrderField_RelativeOrderSysID = NULL;
    }
            
    ///郑商所成交数量
    // TThostFtdcVolumeType int
    self->data.ZCETotalTradedVolume = ErrorConditionalOrderField_ZCETotalTradedVolume;
        
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = ErrorConditionalOrderField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( ErrorConditionalOrderField_ErrorMsg != NULL ) {
        if(ErrorConditionalOrderField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, ErrorConditionalOrderField_ErrorMsg, ErrorConditionalOrderField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, ErrorConditionalOrderField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        ErrorConditionalOrderField_ErrorMsg = NULL;
    }
            
    ///互换单标志
    // TThostFtdcBoolType int
    self->data.IsSwapOrder = ErrorConditionalOrderField_IsSwapOrder;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( ErrorConditionalOrderField_BranchID != NULL ) {
        if(ErrorConditionalOrderField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, ErrorConditionalOrderField_BranchID, ErrorConditionalOrderField_BranchID_len);        
        strncpy(self->data.BranchID, ErrorConditionalOrderField_BranchID, sizeof(self->data.BranchID) );
        ErrorConditionalOrderField_BranchID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( ErrorConditionalOrderField_InvestUnitID != NULL ) {
        if(ErrorConditionalOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, ErrorConditionalOrderField_InvestUnitID, ErrorConditionalOrderField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, ErrorConditionalOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        ErrorConditionalOrderField_InvestUnitID = NULL;
    }
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    if( ErrorConditionalOrderField_AccountID != NULL ) {
        if(ErrorConditionalOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, ErrorConditionalOrderField_AccountID, ErrorConditionalOrderField_AccountID_len);        
        strncpy(self->data.AccountID, ErrorConditionalOrderField_AccountID, sizeof(self->data.AccountID) );
        ErrorConditionalOrderField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( ErrorConditionalOrderField_CurrencyID != NULL ) {
        if(ErrorConditionalOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, ErrorConditionalOrderField_CurrencyID, ErrorConditionalOrderField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, ErrorConditionalOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
        ErrorConditionalOrderField_CurrencyID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ErrorConditionalOrderField_reserve3 != NULL ) {
        if(ErrorConditionalOrderField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
            return -1;
        }
        // memset(self->data.reserve3, 0, sizeof(self->data.reserve3));
        // memcpy(self->data.reserve3, ErrorConditionalOrderField_reserve3, ErrorConditionalOrderField_reserve3_len);        
        strncpy(self->data.reserve3, ErrorConditionalOrderField_reserve3, sizeof(self->data.reserve3) );
        ErrorConditionalOrderField_reserve3 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ErrorConditionalOrderField_MacAddress != NULL ) {
        if(ErrorConditionalOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ErrorConditionalOrderField_MacAddress, ErrorConditionalOrderField_MacAddress_len);        
        strncpy(self->data.MacAddress, ErrorConditionalOrderField_MacAddress, sizeof(self->data.MacAddress) );
        ErrorConditionalOrderField_MacAddress = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( ErrorConditionalOrderField_InstrumentID != NULL ) {
        if(ErrorConditionalOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, ErrorConditionalOrderField_InstrumentID, ErrorConditionalOrderField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, ErrorConditionalOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
        ErrorConditionalOrderField_InstrumentID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ErrorConditionalOrderField_ExchangeInstID != NULL ) {
        if(ErrorConditionalOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ErrorConditionalOrderField_ExchangeInstID, ErrorConditionalOrderField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ErrorConditionalOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ErrorConditionalOrderField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ErrorConditionalOrderField_IPAddress != NULL ) {
        if(ErrorConditionalOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ErrorConditionalOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ErrorConditionalOrderField_IPAddress, ErrorConditionalOrderField_IPAddress_len);        
        strncpy(self->data.IPAddress, ErrorConditionalOrderField_IPAddress, sizeof(self->data.IPAddress) );
        ErrorConditionalOrderField_IPAddress = NULL;
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

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"OrderRef", self->data.OrderRef//, (Py_ssize_t)sizeof(self->data.OrderRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"OrderPriceType", self->data.OrderPriceType 
        ,"Direction", self->data.Direction 
        ,"CombOffsetFlag", self->data.CombOffsetFlag//, (Py_ssize_t)sizeof(self->data.CombOffsetFlag) 
        ,"CombHedgeFlag", self->data.CombHedgeFlag//, (Py_ssize_t)sizeof(self->data.CombHedgeFlag) 
        ,"LimitPrice", self->data.LimitPrice 
        ,"VolumeTotalOriginal", self->data.VolumeTotalOriginal 
        ,"TimeCondition", self->data.TimeCondition 
        ,"GTDDate", self->data.GTDDate//, (Py_ssize_t)sizeof(self->data.GTDDate) 
        ,"VolumeCondition", self->data.VolumeCondition 
        ,"MinVolume", self->data.MinVolume 
        ,"ContingentCondition", self->data.ContingentCondition 
        ,"StopPrice", self->data.StopPrice 
        ,"ForceCloseReason", self->data.ForceCloseReason 
        ,"IsAutoSuspend", self->data.IsAutoSuspend 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"RequestID", self->data.RequestID 
        ,"OrderLocalID", self->data.OrderLocalID//, (Py_ssize_t)sizeof(self->data.OrderLocalID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"OrderSubmitStatus", self->data.OrderSubmitStatus 
        ,"NotifySequence", self->data.NotifySequence 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"OrderSysID", self->data.OrderSysID//, (Py_ssize_t)sizeof(self->data.OrderSysID) 
        ,"OrderSource", self->data.OrderSource 
        ,"OrderStatus", self->data.OrderStatus 
        ,"OrderType", self->data.OrderType 
        ,"VolumeTraded", self->data.VolumeTraded 
        ,"VolumeTotal", self->data.VolumeTotal 
        ,"InsertDate", self->data.InsertDate//, (Py_ssize_t)sizeof(self->data.InsertDate) 
        ,"InsertTime", self->data.InsertTime//, (Py_ssize_t)sizeof(self->data.InsertTime) 
        ,"ActiveTime", self->data.ActiveTime//, (Py_ssize_t)sizeof(self->data.ActiveTime) 
        ,"SuspendTime", self->data.SuspendTime//, (Py_ssize_t)sizeof(self->data.SuspendTime) 
        ,"UpdateTime", self->data.UpdateTime//, (Py_ssize_t)sizeof(self->data.UpdateTime) 
        ,"CancelTime", self->data.CancelTime//, (Py_ssize_t)sizeof(self->data.CancelTime) 
        ,"ActiveTraderID", self->data.ActiveTraderID//, (Py_ssize_t)sizeof(self->data.ActiveTraderID) 
        ,"ClearingPartID", self->data.ClearingPartID//, (Py_ssize_t)sizeof(self->data.ClearingPartID) 
        ,"SequenceNo", self->data.SequenceNo 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"UserProductInfo", self->data.UserProductInfo//, (Py_ssize_t)sizeof(self->data.UserProductInfo) 
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 
        ,"UserForceClose", self->data.UserForceClose 
        ,"ActiveUserID", self->data.ActiveUserID//, (Py_ssize_t)sizeof(self->data.ActiveUserID) 
        ,"BrokerOrderSeq", self->data.BrokerOrderSeq 
        ,"RelativeOrderSysID", self->data.RelativeOrderSysID//, (Py_ssize_t)sizeof(self->data.RelativeOrderSysID) 
        ,"ZCETotalTradedVolume", self->data.ZCETotalTradedVolume 
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 
        ,"IsSwapOrder", self->data.IsSwapOrder 
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"reserve3", self->data.reserve3//, (Py_ssize_t)sizeof(self->data.reserve3) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrorConditionalOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_BrokerID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcErrorConditionalOrderField_set_BrokerID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
    // memcpy(self->data.BrokerID, buf, len);
    strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
    return 0;
}
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InvestorID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcErrorConditionalOrderField_set_InvestorID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_reserve1(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcErrorConditionalOrderField_set_reserve1(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderRef(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcErrorConditionalOrderField_set_OrderRef(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
    // memcpy(self->data.OrderRef, buf, len);
    strncpy(self->data.OrderRef, buf, sizeof(self->data.OrderRef));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_UserID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcErrorConditionalOrderField_set_UserID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            
///报单价格条件
// TThostFtdcOrderPriceTypeType char
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderPriceType(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderPriceType), 1);
}

///报单价格条件
// TThostFtdcOrderPriceTypeType char
static int PyCThostFtdcErrorConditionalOrderField_set_OrderPriceType(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderPriceType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderPriceType)) {
        PyErr_SetString(PyExc_ValueError, "OrderPriceType must be equal 1 bytes");
        return -1;
    }
    self->data.OrderPriceType = *buf;
    return 0;
}
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_Direction(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcErrorConditionalOrderField_set_Direction(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    self->data.Direction = *buf;
    return 0;
}
            
///组合开平标志
// TThostFtdcCombOffsetFlagType char[5]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_CombOffsetFlag(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombOffsetFlag, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
    return PyBytes_FromString(self->data.CombOffsetFlag);
}

///组合开平标志
// TThostFtdcCombOffsetFlagType char[5]
static int PyCThostFtdcErrorConditionalOrderField_set_CombOffsetFlag(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.CombOffsetFlag, 0, sizeof(self->data.CombOffsetFlag));
    // memcpy(self->data.CombOffsetFlag, buf, len);
    strncpy(self->data.CombOffsetFlag, buf, sizeof(self->data.CombOffsetFlag));
    return 0;
}
            
///组合投机套保标志
// TThostFtdcCombHedgeFlagType char[5]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_CombHedgeFlag(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombHedgeFlag, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
    return PyBytes_FromString(self->data.CombHedgeFlag);
}

///组合投机套保标志
// TThostFtdcCombHedgeFlagType char[5]
static int PyCThostFtdcErrorConditionalOrderField_set_CombHedgeFlag(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.CombHedgeFlag, 0, sizeof(self->data.CombHedgeFlag));
    // memcpy(self->data.CombHedgeFlag, buf, len);
    strncpy(self->data.CombHedgeFlag, buf, sizeof(self->data.CombHedgeFlag));
    return 0;
}
            
///价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_LimitPrice(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LimitPrice);
}

///价格
// TThostFtdcPriceType double
static int PyCThostFtdcErrorConditionalOrderField_set_LimitPrice(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_VolumeTotalOriginal(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeTotalOriginal);
#else
    return PyInt_FromLong(self->data.VolumeTotalOriginal);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcErrorConditionalOrderField_set_VolumeTotalOriginal(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the VolumeTotalOriginal value out of range for C int");
        return -1;
    }
    self->data.VolumeTotalOriginal = (int)buf;
    return 0;
}
        
///有效期类型
// TThostFtdcTimeConditionType char
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_TimeCondition(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

///有效期类型
// TThostFtdcTimeConditionType char
static int PyCThostFtdcErrorConditionalOrderField_set_TimeCondition(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TimeCondition)) {
        PyErr_SetString(PyExc_ValueError, "TimeCondition must be equal 1 bytes");
        return -1;
    }
    self->data.TimeCondition = *buf;
    return 0;
}
            
///GTD日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_GTDDate(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.GTDDate, (Py_ssize_t)sizeof(self->data.GTDDate));
    return PyBytes_FromString(self->data.GTDDate);
}

///GTD日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcErrorConditionalOrderField_set_GTDDate(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.GTDDate, 0, sizeof(self->data.GTDDate));
    // memcpy(self->data.GTDDate, buf, len);
    strncpy(self->data.GTDDate, buf, sizeof(self->data.GTDDate));
    return 0;
}
            
///成交量类型
// TThostFtdcVolumeConditionType char
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_VolumeCondition(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VolumeCondition), 1);
}

///成交量类型
// TThostFtdcVolumeConditionType char
static int PyCThostFtdcErrorConditionalOrderField_set_VolumeCondition(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeCondition Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.VolumeCondition)) {
        PyErr_SetString(PyExc_ValueError, "VolumeCondition must be equal 1 bytes");
        return -1;
    }
    self->data.VolumeCondition = *buf;
    return 0;
}
            
///最小成交量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_MinVolume(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MinVolume);
#else
    return PyInt_FromLong(self->data.MinVolume);
#endif
}

///最小成交量
// TThostFtdcVolumeType int
static int PyCThostFtdcErrorConditionalOrderField_set_MinVolume(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the MinVolume value out of range for C int");
        return -1;
    }
    self->data.MinVolume = (int)buf;
    return 0;
}
        
///触发条件
// TThostFtdcContingentConditionType char
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ContingentCondition(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ContingentCondition), 1);
}

///触发条件
// TThostFtdcContingentConditionType char
static int PyCThostFtdcErrorConditionalOrderField_set_ContingentCondition(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ContingentCondition Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ContingentCondition)) {
        PyErr_SetString(PyExc_ValueError, "ContingentCondition must be equal 1 bytes");
        return -1;
    }
    self->data.ContingentCondition = *buf;
    return 0;
}
            
///止损价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_StopPrice(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StopPrice);
}

///止损价
// TThostFtdcPriceType double
static int PyCThostFtdcErrorConditionalOrderField_set_StopPrice(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        
///强平原因
// TThostFtdcForceCloseReasonType char
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ForceCloseReason(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ForceCloseReason), 1);
}

///强平原因
// TThostFtdcForceCloseReasonType char
static int PyCThostFtdcErrorConditionalOrderField_set_ForceCloseReason(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForceCloseReason Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForceCloseReason)) {
        PyErr_SetString(PyExc_ValueError, "ForceCloseReason must be equal 1 bytes");
        return -1;
    }
    self->data.ForceCloseReason = *buf;
    return 0;
}
            
///自动挂起标志
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_IsAutoSuspend(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsAutoSuspend);
#else
    return PyInt_FromLong(self->data.IsAutoSuspend);
#endif
}

///自动挂起标志
// TThostFtdcBoolType int
static int PyCThostFtdcErrorConditionalOrderField_set_IsAutoSuspend(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the IsAutoSuspend value out of range for C int");
        return -1;
    }
    self->data.IsAutoSuspend = (int)buf;
    return 0;
}
        
///业务单元
// TThostFtdcBusinessUnitType char[21]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_BusinessUnit(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcErrorConditionalOrderField_set_BusinessUnit(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
    // memcpy(self->data.BusinessUnit, buf, len);
    strncpy(self->data.BusinessUnit, buf, sizeof(self->data.BusinessUnit));
    return 0;
}
            
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_RequestID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcErrorConditionalOrderField_set_RequestID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the RequestID value out of range for C int");
        return -1;
    }
    self->data.RequestID = (int)buf;
    return 0;
}
        
///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderLocalID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcErrorConditionalOrderField_set_OrderLocalID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
    // memcpy(self->data.OrderLocalID, buf, len);
    strncpy(self->data.OrderLocalID, buf, sizeof(self->data.OrderLocalID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ExchangeID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcErrorConditionalOrderField_set_ExchangeID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ParticipantID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcErrorConditionalOrderField_set_ParticipantID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
    // memcpy(self->data.ParticipantID, buf, len);
    strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
    return 0;
}
            
///客户代码
// TThostFtdcClientIDType char[11]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ClientID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcErrorConditionalOrderField_set_ClientID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
    // memcpy(self->data.ClientID, buf, len);
    strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_reserve2(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcErrorConditionalOrderField_set_reserve2(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
    // memcpy(self->data.reserve2, buf, len);
    strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_TraderID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcErrorConditionalOrderField_set_TraderID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
    // memcpy(self->data.TraderID, buf, len);
    strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
    return 0;
}
            
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InstallID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcErrorConditionalOrderField_set_InstallID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the InstallID value out of range for C int");
        return -1;
    }
    self->data.InstallID = (int)buf;
    return 0;
}
        
///报单提交状态
// TThostFtdcOrderSubmitStatusType char
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderSubmitStatus(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

///报单提交状态
// TThostFtdcOrderSubmitStatusType char
static int PyCThostFtdcErrorConditionalOrderField_set_OrderSubmitStatus(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    self->data.OrderSubmitStatus = *buf;
    return 0;
}
            
///报单提示序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_NotifySequence(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报单提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcErrorConditionalOrderField_set_NotifySequence(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the NotifySequence value out of range for C int");
        return -1;
    }
    self->data.NotifySequence = (int)buf;
    return 0;
}
        
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_TradingDay(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcErrorConditionalOrderField_set_TradingDay(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///结算编号
// TThostFtdcSettlementIDType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_SettlementID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcErrorConditionalOrderField_set_SettlementID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the SettlementID value out of range for C int");
        return -1;
    }
    self->data.SettlementID = (int)buf;
    return 0;
}
        
///报单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderSysID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcErrorConditionalOrderField_set_OrderSysID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
    // memcpy(self->data.OrderSysID, buf, len);
    strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
    return 0;
}
            
///报单来源
// TThostFtdcOrderSourceType char
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderSource(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSource), 1);
}

///报单来源
// TThostFtdcOrderSourceType char
static int PyCThostFtdcErrorConditionalOrderField_set_OrderSource(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSource Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderSource)) {
        PyErr_SetString(PyExc_ValueError, "OrderSource must be equal 1 bytes");
        return -1;
    }
    self->data.OrderSource = *buf;
    return 0;
}
            
///报单状态
// TThostFtdcOrderStatusType char
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderStatus(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderStatus), 1);
}

///报单状态
// TThostFtdcOrderStatusType char
static int PyCThostFtdcErrorConditionalOrderField_set_OrderStatus(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderStatus must be equal 1 bytes");
        return -1;
    }
    self->data.OrderStatus = *buf;
    return 0;
}
            
///报单类型
// TThostFtdcOrderTypeType char
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_OrderType(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderType), 1);
}

///报单类型
// TThostFtdcOrderTypeType char
static int PyCThostFtdcErrorConditionalOrderField_set_OrderType(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderType)) {
        PyErr_SetString(PyExc_ValueError, "OrderType must be equal 1 bytes");
        return -1;
    }
    self->data.OrderType = *buf;
    return 0;
}
            
///今成交数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_VolumeTraded(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeTraded);
#else
    return PyInt_FromLong(self->data.VolumeTraded);
#endif
}

///今成交数量
// TThostFtdcVolumeType int
static int PyCThostFtdcErrorConditionalOrderField_set_VolumeTraded(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the VolumeTraded value out of range for C int");
        return -1;
    }
    self->data.VolumeTraded = (int)buf;
    return 0;
}
        
///剩余数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_VolumeTotal(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeTotal);
#else
    return PyInt_FromLong(self->data.VolumeTotal);
#endif
}

///剩余数量
// TThostFtdcVolumeType int
static int PyCThostFtdcErrorConditionalOrderField_set_VolumeTotal(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the VolumeTotal value out of range for C int");
        return -1;
    }
    self->data.VolumeTotal = (int)buf;
    return 0;
}
        
///报单日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InsertDate(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcErrorConditionalOrderField_set_InsertDate(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
    // memcpy(self->data.InsertDate, buf, len);
    strncpy(self->data.InsertDate, buf, sizeof(self->data.InsertDate));
    return 0;
}
            
///委托时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InsertTime(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///委托时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcErrorConditionalOrderField_set_InsertTime(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
    // memcpy(self->data.InsertTime, buf, len);
    strncpy(self->data.InsertTime, buf, sizeof(self->data.InsertTime));
    return 0;
}
            
///激活时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ActiveTime(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveTime, (Py_ssize_t)sizeof(self->data.ActiveTime));
    return PyBytes_FromString(self->data.ActiveTime);
}

///激活时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcErrorConditionalOrderField_set_ActiveTime(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.ActiveTime, 0, sizeof(self->data.ActiveTime));
    // memcpy(self->data.ActiveTime, buf, len);
    strncpy(self->data.ActiveTime, buf, sizeof(self->data.ActiveTime));
    return 0;
}
            
///挂起时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_SuspendTime(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SuspendTime, (Py_ssize_t)sizeof(self->data.SuspendTime));
    return PyBytes_FromString(self->data.SuspendTime);
}

///挂起时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcErrorConditionalOrderField_set_SuspendTime(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.SuspendTime, 0, sizeof(self->data.SuspendTime));
    // memcpy(self->data.SuspendTime, buf, len);
    strncpy(self->data.SuspendTime, buf, sizeof(self->data.SuspendTime));
    return 0;
}
            
///最后修改时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_UpdateTime(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UpdateTime, (Py_ssize_t)sizeof(self->data.UpdateTime));
    return PyBytes_FromString(self->data.UpdateTime);
}

///最后修改时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcErrorConditionalOrderField_set_UpdateTime(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.UpdateTime, 0, sizeof(self->data.UpdateTime));
    // memcpy(self->data.UpdateTime, buf, len);
    strncpy(self->data.UpdateTime, buf, sizeof(self->data.UpdateTime));
    return 0;
}
            
///撤销时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_CancelTime(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelTime, (Py_ssize_t)sizeof(self->data.CancelTime));
    return PyBytes_FromString(self->data.CancelTime);
}

///撤销时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcErrorConditionalOrderField_set_CancelTime(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
    // memcpy(self->data.CancelTime, buf, len);
    strncpy(self->data.CancelTime, buf, sizeof(self->data.CancelTime));
    return 0;
}
            
///最后修改交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ActiveTraderID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveTraderID, (Py_ssize_t)sizeof(self->data.ActiveTraderID));
    return PyBytes_FromString(self->data.ActiveTraderID);
}

///最后修改交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcErrorConditionalOrderField_set_ActiveTraderID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.ActiveTraderID, 0, sizeof(self->data.ActiveTraderID));
    // memcpy(self->data.ActiveTraderID, buf, len);
    strncpy(self->data.ActiveTraderID, buf, sizeof(self->data.ActiveTraderID));
    return 0;
}
            
///结算会员编号
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ClearingPartID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClearingPartID, (Py_ssize_t)sizeof(self->data.ClearingPartID));
    return PyBytes_FromString(self->data.ClearingPartID);
}

///结算会员编号
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcErrorConditionalOrderField_set_ClearingPartID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
    // memcpy(self->data.ClearingPartID, buf, len);
    strncpy(self->data.ClearingPartID, buf, sizeof(self->data.ClearingPartID));
    return 0;
}
            
///序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_SequenceNo(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcErrorConditionalOrderField_set_SequenceNo(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the SequenceNo value out of range for C int");
        return -1;
    }
    self->data.SequenceNo = (int)buf;
    return 0;
}
        
///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_FrontID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcErrorConditionalOrderField_set_FrontID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the FrontID value out of range for C int");
        return -1;
    }
    self->data.FrontID = (int)buf;
    return 0;
}
        
///会话编号
// TThostFtdcSessionIDType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_SessionID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcErrorConditionalOrderField_set_SessionID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the SessionID value out of range for C int");
        return -1;
    }
    self->data.SessionID = (int)buf;
    return 0;
}
        
///用户端产品信息
// TThostFtdcProductInfoType char[11]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_UserProductInfo(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcErrorConditionalOrderField_set_UserProductInfo(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
    // memcpy(self->data.UserProductInfo, buf, len);
    strncpy(self->data.UserProductInfo, buf, sizeof(self->data.UserProductInfo));
    return 0;
}
            
///状态信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_StatusMsg(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcErrorConditionalOrderField_set_StatusMsg(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
    // memcpy(self->data.StatusMsg, buf, len);
    strncpy(self->data.StatusMsg, buf, sizeof(self->data.StatusMsg));
    return 0;
}
            
///用户强平标志
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_UserForceClose(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.UserForceClose);
#else
    return PyInt_FromLong(self->data.UserForceClose);
#endif
}

///用户强平标志
// TThostFtdcBoolType int
static int PyCThostFtdcErrorConditionalOrderField_set_UserForceClose(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the UserForceClose value out of range for C int");
        return -1;
    }
    self->data.UserForceClose = (int)buf;
    return 0;
}
        
///操作用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ActiveUserID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveUserID, (Py_ssize_t)sizeof(self->data.ActiveUserID));
    return PyBytes_FromString(self->data.ActiveUserID);
}

///操作用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcErrorConditionalOrderField_set_ActiveUserID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.ActiveUserID, 0, sizeof(self->data.ActiveUserID));
    // memcpy(self->data.ActiveUserID, buf, len);
    strncpy(self->data.ActiveUserID, buf, sizeof(self->data.ActiveUserID));
    return 0;
}
            
///经纪公司报单编号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_BrokerOrderSeq(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BrokerOrderSeq);
#else
    return PyInt_FromLong(self->data.BrokerOrderSeq);
#endif
}

///经纪公司报单编号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcErrorConditionalOrderField_set_BrokerOrderSeq(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the BrokerOrderSeq value out of range for C int");
        return -1;
    }
    self->data.BrokerOrderSeq = (int)buf;
    return 0;
}
        
///相关报单
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_RelativeOrderSysID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RelativeOrderSysID, (Py_ssize_t)sizeof(self->data.RelativeOrderSysID));
    return PyBytes_FromString(self->data.RelativeOrderSysID);
}

///相关报单
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcErrorConditionalOrderField_set_RelativeOrderSysID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.RelativeOrderSysID, 0, sizeof(self->data.RelativeOrderSysID));
    // memcpy(self->data.RelativeOrderSysID, buf, len);
    strncpy(self->data.RelativeOrderSysID, buf, sizeof(self->data.RelativeOrderSysID));
    return 0;
}
            
///郑商所成交数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ZCETotalTradedVolume(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ZCETotalTradedVolume);
#else
    return PyInt_FromLong(self->data.ZCETotalTradedVolume);
#endif
}

///郑商所成交数量
// TThostFtdcVolumeType int
static int PyCThostFtdcErrorConditionalOrderField_set_ZCETotalTradedVolume(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the ZCETotalTradedVolume value out of range for C int");
        return -1;
    }
    self->data.ZCETotalTradedVolume = (int)buf;
    return 0;
}
        
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ErrorID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcErrorConditionalOrderField_set_ErrorID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the ErrorID value out of range for C int");
        return -1;
    }
    self->data.ErrorID = (int)buf;
    return 0;
}
        
///错误信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ErrorMsg(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcErrorConditionalOrderField_set_ErrorMsg(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
    // memcpy(self->data.ErrorMsg, buf, len);
    strncpy(self->data.ErrorMsg, buf, sizeof(self->data.ErrorMsg));
    return 0;
}
            
///互换单标志
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_IsSwapOrder(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsSwapOrder);
#else
    return PyInt_FromLong(self->data.IsSwapOrder);
#endif
}

///互换单标志
// TThostFtdcBoolType int
static int PyCThostFtdcErrorConditionalOrderField_set_IsSwapOrder(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the IsSwapOrder value out of range for C int");
        return -1;
    }
    self->data.IsSwapOrder = (int)buf;
    return 0;
}
        
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_BranchID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcErrorConditionalOrderField_set_BranchID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
    // memcpy(self->data.BranchID, buf, len);
    strncpy(self->data.BranchID, buf, sizeof(self->data.BranchID));
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InvestUnitID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcErrorConditionalOrderField_set_InvestUnitID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
    // memcpy(self->data.InvestUnitID, buf, len);
    strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
    return 0;
}
            
///资金账号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_AccountID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcErrorConditionalOrderField_set_AccountID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
    // memcpy(self->data.AccountID, buf, len);
    strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_CurrencyID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcErrorConditionalOrderField_set_CurrencyID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
    // memcpy(self->data.CurrencyID, buf, len);
    strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_reserve3(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve3, (Py_ssize_t)sizeof(self->data.reserve3));
    return PyBytes_FromString(self->data.reserve3);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcErrorConditionalOrderField_set_reserve3(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.reserve3, 0, sizeof(self->data.reserve3));
    // memcpy(self->data.reserve3, buf, len);
    strncpy(self->data.reserve3, buf, sizeof(self->data.reserve3));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_MacAddress(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcErrorConditionalOrderField_set_MacAddress(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
    // memcpy(self->data.MacAddress, buf, len);
    strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_InstrumentID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcErrorConditionalOrderField_set_InstrumentID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_ExchangeInstID(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcErrorConditionalOrderField_set_ExchangeInstID(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
    // memcpy(self->data.ExchangeInstID, buf, len);
    strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
    return 0;
}
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcErrorConditionalOrderField_get_IPAddress(PyCThostFtdcErrorConditionalOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcErrorConditionalOrderField_set_IPAddress(PyCThostFtdcErrorConditionalOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
    // memcpy(self->data.IPAddress, buf, len);
    strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcErrorConditionalOrderField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcErrorConditionalOrderField_get_BrokerID, (setter)PyCThostFtdcErrorConditionalOrderField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcErrorConditionalOrderField_get_InvestorID, (setter)PyCThostFtdcErrorConditionalOrderField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcErrorConditionalOrderField_get_reserve1, (setter)PyCThostFtdcErrorConditionalOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderRef, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderRef, (char *)"OrderRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcErrorConditionalOrderField_get_UserID, (setter)PyCThostFtdcErrorConditionalOrderField_set_UserID, (char *)"UserID", NULL},
    ///报单价格条件 
    {(char *)"OrderPriceType", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderPriceType, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderPriceType, (char *)"OrderPriceType", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcErrorConditionalOrderField_get_Direction, (setter)PyCThostFtdcErrorConditionalOrderField_set_Direction, (char *)"Direction", NULL},
    ///组合开平标志 
    {(char *)"CombOffsetFlag", (getter)PyCThostFtdcErrorConditionalOrderField_get_CombOffsetFlag, (setter)PyCThostFtdcErrorConditionalOrderField_set_CombOffsetFlag, (char *)"CombOffsetFlag", NULL},
    ///组合投机套保标志 
    {(char *)"CombHedgeFlag", (getter)PyCThostFtdcErrorConditionalOrderField_get_CombHedgeFlag, (setter)PyCThostFtdcErrorConditionalOrderField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
    ///价格 
    {(char *)"LimitPrice", (getter)PyCThostFtdcErrorConditionalOrderField_get_LimitPrice, (setter)PyCThostFtdcErrorConditionalOrderField_set_LimitPrice, (char *)"LimitPrice", NULL},
    ///数量 
    {(char *)"VolumeTotalOriginal", (getter)PyCThostFtdcErrorConditionalOrderField_get_VolumeTotalOriginal, (setter)PyCThostFtdcErrorConditionalOrderField_set_VolumeTotalOriginal, (char *)"VolumeTotalOriginal", NULL},
    ///有效期类型 
    {(char *)"TimeCondition", (getter)PyCThostFtdcErrorConditionalOrderField_get_TimeCondition, (setter)PyCThostFtdcErrorConditionalOrderField_set_TimeCondition, (char *)"TimeCondition", NULL},
    ///GTD日期 
    {(char *)"GTDDate", (getter)PyCThostFtdcErrorConditionalOrderField_get_GTDDate, (setter)PyCThostFtdcErrorConditionalOrderField_set_GTDDate, (char *)"GTDDate", NULL},
    ///成交量类型 
    {(char *)"VolumeCondition", (getter)PyCThostFtdcErrorConditionalOrderField_get_VolumeCondition, (setter)PyCThostFtdcErrorConditionalOrderField_set_VolumeCondition, (char *)"VolumeCondition", NULL},
    ///最小成交量 
    {(char *)"MinVolume", (getter)PyCThostFtdcErrorConditionalOrderField_get_MinVolume, (setter)PyCThostFtdcErrorConditionalOrderField_set_MinVolume, (char *)"MinVolume", NULL},
    ///触发条件 
    {(char *)"ContingentCondition", (getter)PyCThostFtdcErrorConditionalOrderField_get_ContingentCondition, (setter)PyCThostFtdcErrorConditionalOrderField_set_ContingentCondition, (char *)"ContingentCondition", NULL},
    ///止损价 
    {(char *)"StopPrice", (getter)PyCThostFtdcErrorConditionalOrderField_get_StopPrice, (setter)PyCThostFtdcErrorConditionalOrderField_set_StopPrice, (char *)"StopPrice", NULL},
    ///强平原因 
    {(char *)"ForceCloseReason", (getter)PyCThostFtdcErrorConditionalOrderField_get_ForceCloseReason, (setter)PyCThostFtdcErrorConditionalOrderField_set_ForceCloseReason, (char *)"ForceCloseReason", NULL},
    ///自动挂起标志 
    {(char *)"IsAutoSuspend", (getter)PyCThostFtdcErrorConditionalOrderField_get_IsAutoSuspend, (setter)PyCThostFtdcErrorConditionalOrderField_set_IsAutoSuspend, (char *)"IsAutoSuspend", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcErrorConditionalOrderField_get_BusinessUnit, (setter)PyCThostFtdcErrorConditionalOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcErrorConditionalOrderField_get_RequestID, (setter)PyCThostFtdcErrorConditionalOrderField_set_RequestID, (char *)"RequestID", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderLocalID, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ExchangeID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ParticipantID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ClientID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcErrorConditionalOrderField_get_reserve2, (setter)PyCThostFtdcErrorConditionalOrderField_set_reserve2, (char *)"reserve2", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcErrorConditionalOrderField_get_TraderID, (setter)PyCThostFtdcErrorConditionalOrderField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcErrorConditionalOrderField_get_InstallID, (setter)PyCThostFtdcErrorConditionalOrderField_set_InstallID, (char *)"InstallID", NULL},
    ///报单提交状态 
    {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderSubmitStatus, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
    ///报单提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcErrorConditionalOrderField_get_NotifySequence, (setter)PyCThostFtdcErrorConditionalOrderField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcErrorConditionalOrderField_get_TradingDay, (setter)PyCThostFtdcErrorConditionalOrderField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcErrorConditionalOrderField_get_SettlementID, (setter)PyCThostFtdcErrorConditionalOrderField_set_SettlementID, (char *)"SettlementID", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderSysID, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///报单来源 
    {(char *)"OrderSource", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderSource, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderSource, (char *)"OrderSource", NULL},
    ///报单状态 
    {(char *)"OrderStatus", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderStatus, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderStatus, (char *)"OrderStatus", NULL},
    ///报单类型 
    {(char *)"OrderType", (getter)PyCThostFtdcErrorConditionalOrderField_get_OrderType, (setter)PyCThostFtdcErrorConditionalOrderField_set_OrderType, (char *)"OrderType", NULL},
    ///今成交数量 
    {(char *)"VolumeTraded", (getter)PyCThostFtdcErrorConditionalOrderField_get_VolumeTraded, (setter)PyCThostFtdcErrorConditionalOrderField_set_VolumeTraded, (char *)"VolumeTraded", NULL},
    ///剩余数量 
    {(char *)"VolumeTotal", (getter)PyCThostFtdcErrorConditionalOrderField_get_VolumeTotal, (setter)PyCThostFtdcErrorConditionalOrderField_set_VolumeTotal, (char *)"VolumeTotal", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcErrorConditionalOrderField_get_InsertDate, (setter)PyCThostFtdcErrorConditionalOrderField_set_InsertDate, (char *)"InsertDate", NULL},
    ///委托时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcErrorConditionalOrderField_get_InsertTime, (setter)PyCThostFtdcErrorConditionalOrderField_set_InsertTime, (char *)"InsertTime", NULL},
    ///激活时间 
    {(char *)"ActiveTime", (getter)PyCThostFtdcErrorConditionalOrderField_get_ActiveTime, (setter)PyCThostFtdcErrorConditionalOrderField_set_ActiveTime, (char *)"ActiveTime", NULL},
    ///挂起时间 
    {(char *)"SuspendTime", (getter)PyCThostFtdcErrorConditionalOrderField_get_SuspendTime, (setter)PyCThostFtdcErrorConditionalOrderField_set_SuspendTime, (char *)"SuspendTime", NULL},
    ///最后修改时间 
    {(char *)"UpdateTime", (getter)PyCThostFtdcErrorConditionalOrderField_get_UpdateTime, (setter)PyCThostFtdcErrorConditionalOrderField_set_UpdateTime, (char *)"UpdateTime", NULL},
    ///撤销时间 
    {(char *)"CancelTime", (getter)PyCThostFtdcErrorConditionalOrderField_get_CancelTime, (setter)PyCThostFtdcErrorConditionalOrderField_set_CancelTime, (char *)"CancelTime", NULL},
    ///最后修改交易所交易员代码 
    {(char *)"ActiveTraderID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ActiveTraderID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ActiveTraderID, (char *)"ActiveTraderID", NULL},
    ///结算会员编号 
    {(char *)"ClearingPartID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ClearingPartID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcErrorConditionalOrderField_get_SequenceNo, (setter)PyCThostFtdcErrorConditionalOrderField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcErrorConditionalOrderField_get_FrontID, (setter)PyCThostFtdcErrorConditionalOrderField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcErrorConditionalOrderField_get_SessionID, (setter)PyCThostFtdcErrorConditionalOrderField_set_SessionID, (char *)"SessionID", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcErrorConditionalOrderField_get_UserProductInfo, (setter)PyCThostFtdcErrorConditionalOrderField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcErrorConditionalOrderField_get_StatusMsg, (setter)PyCThostFtdcErrorConditionalOrderField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///用户强平标志 
    {(char *)"UserForceClose", (getter)PyCThostFtdcErrorConditionalOrderField_get_UserForceClose, (setter)PyCThostFtdcErrorConditionalOrderField_set_UserForceClose, (char *)"UserForceClose", NULL},
    ///操作用户代码 
    {(char *)"ActiveUserID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ActiveUserID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
    ///经纪公司报单编号 
    {(char *)"BrokerOrderSeq", (getter)PyCThostFtdcErrorConditionalOrderField_get_BrokerOrderSeq, (setter)PyCThostFtdcErrorConditionalOrderField_set_BrokerOrderSeq, (char *)"BrokerOrderSeq", NULL},
    ///相关报单 
    {(char *)"RelativeOrderSysID", (getter)PyCThostFtdcErrorConditionalOrderField_get_RelativeOrderSysID, (setter)PyCThostFtdcErrorConditionalOrderField_set_RelativeOrderSysID, (char *)"RelativeOrderSysID", NULL},
    ///郑商所成交数量 
    {(char *)"ZCETotalTradedVolume", (getter)PyCThostFtdcErrorConditionalOrderField_get_ZCETotalTradedVolume, (setter)PyCThostFtdcErrorConditionalOrderField_set_ZCETotalTradedVolume, (char *)"ZCETotalTradedVolume", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ErrorID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcErrorConditionalOrderField_get_ErrorMsg, (setter)PyCThostFtdcErrorConditionalOrderField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
    ///互换单标志 
    {(char *)"IsSwapOrder", (getter)PyCThostFtdcErrorConditionalOrderField_get_IsSwapOrder, (setter)PyCThostFtdcErrorConditionalOrderField_set_IsSwapOrder, (char *)"IsSwapOrder", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcErrorConditionalOrderField_get_BranchID, (setter)PyCThostFtdcErrorConditionalOrderField_set_BranchID, (char *)"BranchID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcErrorConditionalOrderField_get_InvestUnitID, (setter)PyCThostFtdcErrorConditionalOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///资金账号 
    {(char *)"AccountID", (getter)PyCThostFtdcErrorConditionalOrderField_get_AccountID, (setter)PyCThostFtdcErrorConditionalOrderField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcErrorConditionalOrderField_get_CurrencyID, (setter)PyCThostFtdcErrorConditionalOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///保留的无效字段 
    {(char *)"reserve3", (getter)PyCThostFtdcErrorConditionalOrderField_get_reserve3, (setter)PyCThostFtdcErrorConditionalOrderField_set_reserve3, (char *)"reserve3", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcErrorConditionalOrderField_get_MacAddress, (setter)PyCThostFtdcErrorConditionalOrderField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcErrorConditionalOrderField_get_InstrumentID, (setter)PyCThostFtdcErrorConditionalOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcErrorConditionalOrderField_get_ExchangeInstID, (setter)PyCThostFtdcErrorConditionalOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
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
