
#include "PyCThostFtdcExchangeOrderField.h"

///交易所报单

static PyObject *PyCThostFtdcExchangeOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeOrderField *self = (PyCThostFtdcExchangeOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeOrderField_init(PyCThostFtdcExchangeOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "OrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OrderSysID", "OrderSource", "OrderStatus", "OrderType", "VolumeTraded", "VolumeTotal", "InsertDate", "InsertTime", "ActiveTime", "SuspendTime", "UpdateTime", "CancelTime", "ActiveTraderID", "ClearingPartID", "SequenceNo", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress",  NULL};


    ///报单价格条件
    // TThostFtdcOrderPriceTypeType char
    char ExchangeOrderField_OrderPriceType = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char ExchangeOrderField_Direction = 0;
            
    ///组合开平标志
    // TThostFtdcCombOffsetFlagType char[5]
    const char *ExchangeOrderField_CombOffsetFlag = NULL;
    Py_ssize_t ExchangeOrderField_CombOffsetFlag_len = 0;
            
    ///组合投机套保标志
    // TThostFtdcCombHedgeFlagType char[5]
    const char *ExchangeOrderField_CombHedgeFlag = NULL;
    Py_ssize_t ExchangeOrderField_CombHedgeFlag_len = 0;
            
    ///价格
    // TThostFtdcPriceType double
    double ExchangeOrderField_LimitPrice = 0.0;
        
    ///数量
    // TThostFtdcVolumeType int
    int ExchangeOrderField_VolumeTotalOriginal = 0;
        
    ///有效期类型
    // TThostFtdcTimeConditionType char
    char ExchangeOrderField_TimeCondition = 0;
            
    ///GTD日期
    // TThostFtdcDateType char[9]
    const char *ExchangeOrderField_GTDDate = NULL;
    Py_ssize_t ExchangeOrderField_GTDDate_len = 0;
            
    ///成交量类型
    // TThostFtdcVolumeConditionType char
    char ExchangeOrderField_VolumeCondition = 0;
            
    ///最小成交量
    // TThostFtdcVolumeType int
    int ExchangeOrderField_MinVolume = 0;
        
    ///触发条件
    // TThostFtdcContingentConditionType char
    char ExchangeOrderField_ContingentCondition = 0;
            
    ///止损价
    // TThostFtdcPriceType double
    double ExchangeOrderField_StopPrice = 0.0;
        
    ///强平原因
    // TThostFtdcForceCloseReasonType char
    char ExchangeOrderField_ForceCloseReason = 0;
            
    ///自动挂起标志
    // TThostFtdcBoolType int
    int ExchangeOrderField_IsAutoSuspend = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExchangeOrderField_BusinessUnit = NULL;
    Py_ssize_t ExchangeOrderField_BusinessUnit_len = 0;
            
    ///请求编号
    // TThostFtdcRequestIDType int
    int ExchangeOrderField_RequestID = 0;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeOrderField_OrderLocalID = NULL;
    Py_ssize_t ExchangeOrderField_OrderLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeOrderField_ExchangeID = NULL;
    Py_ssize_t ExchangeOrderField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeOrderField_ParticipantID = NULL;
    Py_ssize_t ExchangeOrderField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeOrderField_ClientID = NULL;
    Py_ssize_t ExchangeOrderField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ExchangeOrderField_reserve1 = NULL;
    Py_ssize_t ExchangeOrderField_reserve1_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeOrderField_TraderID = NULL;
    Py_ssize_t ExchangeOrderField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeOrderField_InstallID = 0;
        
    ///报单提交状态
    // TThostFtdcOrderSubmitStatusType char
    char ExchangeOrderField_OrderSubmitStatus = 0;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    int ExchangeOrderField_NotifySequence = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *ExchangeOrderField_TradingDay = NULL;
    Py_ssize_t ExchangeOrderField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int ExchangeOrderField_SettlementID = 0;
        
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ExchangeOrderField_OrderSysID = NULL;
    Py_ssize_t ExchangeOrderField_OrderSysID_len = 0;
            
    ///报单来源
    // TThostFtdcOrderSourceType char
    char ExchangeOrderField_OrderSource = 0;
            
    ///报单状态
    // TThostFtdcOrderStatusType char
    char ExchangeOrderField_OrderStatus = 0;
            
    ///报单类型
    // TThostFtdcOrderTypeType char
    char ExchangeOrderField_OrderType = 0;
            
    ///今成交数量
    // TThostFtdcVolumeType int
    int ExchangeOrderField_VolumeTraded = 0;
        
    ///剩余数量
    // TThostFtdcVolumeType int
    int ExchangeOrderField_VolumeTotal = 0;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *ExchangeOrderField_InsertDate = NULL;
    Py_ssize_t ExchangeOrderField_InsertDate_len = 0;
            
    ///委托时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeOrderField_InsertTime = NULL;
    Py_ssize_t ExchangeOrderField_InsertTime_len = 0;
            
    ///激活时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeOrderField_ActiveTime = NULL;
    Py_ssize_t ExchangeOrderField_ActiveTime_len = 0;
            
    ///挂起时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeOrderField_SuspendTime = NULL;
    Py_ssize_t ExchangeOrderField_SuspendTime_len = 0;
            
    ///最后修改时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeOrderField_UpdateTime = NULL;
    Py_ssize_t ExchangeOrderField_UpdateTime_len = 0;
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeOrderField_CancelTime = NULL;
    Py_ssize_t ExchangeOrderField_CancelTime_len = 0;
            
    ///最后修改交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeOrderField_ActiveTraderID = NULL;
    Py_ssize_t ExchangeOrderField_ActiveTraderID_len = 0;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeOrderField_ClearingPartID = NULL;
    Py_ssize_t ExchangeOrderField_ClearingPartID_len = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int ExchangeOrderField_SequenceNo = 0;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *ExchangeOrderField_BranchID = NULL;
    Py_ssize_t ExchangeOrderField_BranchID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExchangeOrderField_reserve2 = NULL;
    Py_ssize_t ExchangeOrderField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExchangeOrderField_MacAddress = NULL;
    Py_ssize_t ExchangeOrderField_MacAddress_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ExchangeOrderField_ExchangeInstID = NULL;
    Py_ssize_t ExchangeOrderField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExchangeOrderField_IPAddress = NULL;
    Py_ssize_t ExchangeOrderField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ccy#y#dicy#cicdciy#iy#y#y#y#y#y#iciy#iy#ccciiy#y#y#y#y#y#y#y#iy#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ccs#s#dics#cicdcis#is#s#s#s#s#s#icis#is#ccciis#s#s#s#s#s#s#s#is#s#s#s#s#", (char **)kwlist
#endif

        , &ExchangeOrderField_OrderPriceType 
        , &ExchangeOrderField_Direction 
        , &ExchangeOrderField_CombOffsetFlag, &ExchangeOrderField_CombOffsetFlag_len 
        , &ExchangeOrderField_CombHedgeFlag, &ExchangeOrderField_CombHedgeFlag_len 
        , &ExchangeOrderField_LimitPrice 
        , &ExchangeOrderField_VolumeTotalOriginal 
        , &ExchangeOrderField_TimeCondition 
        , &ExchangeOrderField_GTDDate, &ExchangeOrderField_GTDDate_len 
        , &ExchangeOrderField_VolumeCondition 
        , &ExchangeOrderField_MinVolume 
        , &ExchangeOrderField_ContingentCondition 
        , &ExchangeOrderField_StopPrice 
        , &ExchangeOrderField_ForceCloseReason 
        , &ExchangeOrderField_IsAutoSuspend 
        , &ExchangeOrderField_BusinessUnit, &ExchangeOrderField_BusinessUnit_len 
        , &ExchangeOrderField_RequestID 
        , &ExchangeOrderField_OrderLocalID, &ExchangeOrderField_OrderLocalID_len 
        , &ExchangeOrderField_ExchangeID, &ExchangeOrderField_ExchangeID_len 
        , &ExchangeOrderField_ParticipantID, &ExchangeOrderField_ParticipantID_len 
        , &ExchangeOrderField_ClientID, &ExchangeOrderField_ClientID_len 
        , &ExchangeOrderField_reserve1, &ExchangeOrderField_reserve1_len 
        , &ExchangeOrderField_TraderID, &ExchangeOrderField_TraderID_len 
        , &ExchangeOrderField_InstallID 
        , &ExchangeOrderField_OrderSubmitStatus 
        , &ExchangeOrderField_NotifySequence 
        , &ExchangeOrderField_TradingDay, &ExchangeOrderField_TradingDay_len 
        , &ExchangeOrderField_SettlementID 
        , &ExchangeOrderField_OrderSysID, &ExchangeOrderField_OrderSysID_len 
        , &ExchangeOrderField_OrderSource 
        , &ExchangeOrderField_OrderStatus 
        , &ExchangeOrderField_OrderType 
        , &ExchangeOrderField_VolumeTraded 
        , &ExchangeOrderField_VolumeTotal 
        , &ExchangeOrderField_InsertDate, &ExchangeOrderField_InsertDate_len 
        , &ExchangeOrderField_InsertTime, &ExchangeOrderField_InsertTime_len 
        , &ExchangeOrderField_ActiveTime, &ExchangeOrderField_ActiveTime_len 
        , &ExchangeOrderField_SuspendTime, &ExchangeOrderField_SuspendTime_len 
        , &ExchangeOrderField_UpdateTime, &ExchangeOrderField_UpdateTime_len 
        , &ExchangeOrderField_CancelTime, &ExchangeOrderField_CancelTime_len 
        , &ExchangeOrderField_ActiveTraderID, &ExchangeOrderField_ActiveTraderID_len 
        , &ExchangeOrderField_ClearingPartID, &ExchangeOrderField_ClearingPartID_len 
        , &ExchangeOrderField_SequenceNo 
        , &ExchangeOrderField_BranchID, &ExchangeOrderField_BranchID_len 
        , &ExchangeOrderField_reserve2, &ExchangeOrderField_reserve2_len 
        , &ExchangeOrderField_MacAddress, &ExchangeOrderField_MacAddress_len 
        , &ExchangeOrderField_ExchangeInstID, &ExchangeOrderField_ExchangeInstID_len 
        , &ExchangeOrderField_IPAddress, &ExchangeOrderField_IPAddress_len 


    )) {
        return -1;
    }


    ///报单价格条件
    // TThostFtdcOrderPriceTypeType char
    self->data.OrderPriceType = ExchangeOrderField_OrderPriceType;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = ExchangeOrderField_Direction;
            
    ///组合开平标志
    // TThostFtdcCombOffsetFlagType char[5]
    if( ExchangeOrderField_CombOffsetFlag != NULL ) {
        if(ExchangeOrderField_CombOffsetFlag_len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
            PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is %zd)", ExchangeOrderField_CombOffsetFlag_len, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
            return -1;
        }
        // memset(self->data.CombOffsetFlag, 0, sizeof(self->data.CombOffsetFlag));
        // memcpy(self->data.CombOffsetFlag, ExchangeOrderField_CombOffsetFlag, ExchangeOrderField_CombOffsetFlag_len);        
        strncpy(self->data.CombOffsetFlag, ExchangeOrderField_CombOffsetFlag, sizeof(self->data.CombOffsetFlag) );
        ExchangeOrderField_CombOffsetFlag = NULL;
    }
            
    ///组合投机套保标志
    // TThostFtdcCombHedgeFlagType char[5]
    if( ExchangeOrderField_CombHedgeFlag != NULL ) {
        if(ExchangeOrderField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
            PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", ExchangeOrderField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
            return -1;
        }
        // memset(self->data.CombHedgeFlag, 0, sizeof(self->data.CombHedgeFlag));
        // memcpy(self->data.CombHedgeFlag, ExchangeOrderField_CombHedgeFlag, ExchangeOrderField_CombHedgeFlag_len);        
        strncpy(self->data.CombHedgeFlag, ExchangeOrderField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
        ExchangeOrderField_CombHedgeFlag = NULL;
    }
            
    ///价格
    // TThostFtdcPriceType double
    self->data.LimitPrice = ExchangeOrderField_LimitPrice;
        
    ///数量
    // TThostFtdcVolumeType int
    self->data.VolumeTotalOriginal = ExchangeOrderField_VolumeTotalOriginal;
        
    ///有效期类型
    // TThostFtdcTimeConditionType char
    self->data.TimeCondition = ExchangeOrderField_TimeCondition;
            
    ///GTD日期
    // TThostFtdcDateType char[9]
    if( ExchangeOrderField_GTDDate != NULL ) {
        if(ExchangeOrderField_GTDDate_len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
            PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is %zd)", ExchangeOrderField_GTDDate_len, (Py_ssize_t)sizeof(self->data.GTDDate));
            return -1;
        }
        // memset(self->data.GTDDate, 0, sizeof(self->data.GTDDate));
        // memcpy(self->data.GTDDate, ExchangeOrderField_GTDDate, ExchangeOrderField_GTDDate_len);        
        strncpy(self->data.GTDDate, ExchangeOrderField_GTDDate, sizeof(self->data.GTDDate) );
        ExchangeOrderField_GTDDate = NULL;
    }
            
    ///成交量类型
    // TThostFtdcVolumeConditionType char
    self->data.VolumeCondition = ExchangeOrderField_VolumeCondition;
            
    ///最小成交量
    // TThostFtdcVolumeType int
    self->data.MinVolume = ExchangeOrderField_MinVolume;
        
    ///触发条件
    // TThostFtdcContingentConditionType char
    self->data.ContingentCondition = ExchangeOrderField_ContingentCondition;
            
    ///止损价
    // TThostFtdcPriceType double
    self->data.StopPrice = ExchangeOrderField_StopPrice;
        
    ///强平原因
    // TThostFtdcForceCloseReasonType char
    self->data.ForceCloseReason = ExchangeOrderField_ForceCloseReason;
            
    ///自动挂起标志
    // TThostFtdcBoolType int
    self->data.IsAutoSuspend = ExchangeOrderField_IsAutoSuspend;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExchangeOrderField_BusinessUnit != NULL ) {
        if(ExchangeOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExchangeOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExchangeOrderField_BusinessUnit, ExchangeOrderField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExchangeOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExchangeOrderField_BusinessUnit = NULL;
    }
            
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ExchangeOrderField_RequestID;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeOrderField_OrderLocalID != NULL ) {
        if(ExchangeOrderField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", ExchangeOrderField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, ExchangeOrderField_OrderLocalID, ExchangeOrderField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, ExchangeOrderField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        ExchangeOrderField_OrderLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeOrderField_ExchangeID != NULL ) {
        if(ExchangeOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeOrderField_ExchangeID, ExchangeOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeOrderField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeOrderField_ParticipantID != NULL ) {
        if(ExchangeOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeOrderField_ParticipantID, ExchangeOrderField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeOrderField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeOrderField_ClientID != NULL ) {
        if(ExchangeOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeOrderField_ClientID, ExchangeOrderField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeOrderField_ClientID, sizeof(self->data.ClientID) );
        ExchangeOrderField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ExchangeOrderField_reserve1 != NULL ) {
        if(ExchangeOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeOrderField_reserve1, ExchangeOrderField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeOrderField_reserve1, sizeof(self->data.reserve1) );
        ExchangeOrderField_reserve1 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeOrderField_TraderID != NULL ) {
        if(ExchangeOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeOrderField_TraderID, ExchangeOrderField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeOrderField_TraderID, sizeof(self->data.TraderID) );
        ExchangeOrderField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeOrderField_InstallID;
        
    ///报单提交状态
    // TThostFtdcOrderSubmitStatusType char
    self->data.OrderSubmitStatus = ExchangeOrderField_OrderSubmitStatus;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = ExchangeOrderField_NotifySequence;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( ExchangeOrderField_TradingDay != NULL ) {
        if(ExchangeOrderField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ExchangeOrderField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ExchangeOrderField_TradingDay, ExchangeOrderField_TradingDay_len);        
        strncpy(self->data.TradingDay, ExchangeOrderField_TradingDay, sizeof(self->data.TradingDay) );
        ExchangeOrderField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = ExchangeOrderField_SettlementID;
        
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( ExchangeOrderField_OrderSysID != NULL ) {
        if(ExchangeOrderField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", ExchangeOrderField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, ExchangeOrderField_OrderSysID, ExchangeOrderField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, ExchangeOrderField_OrderSysID, sizeof(self->data.OrderSysID) );
        ExchangeOrderField_OrderSysID = NULL;
    }
            
    ///报单来源
    // TThostFtdcOrderSourceType char
    self->data.OrderSource = ExchangeOrderField_OrderSource;
            
    ///报单状态
    // TThostFtdcOrderStatusType char
    self->data.OrderStatus = ExchangeOrderField_OrderStatus;
            
    ///报单类型
    // TThostFtdcOrderTypeType char
    self->data.OrderType = ExchangeOrderField_OrderType;
            
    ///今成交数量
    // TThostFtdcVolumeType int
    self->data.VolumeTraded = ExchangeOrderField_VolumeTraded;
        
    ///剩余数量
    // TThostFtdcVolumeType int
    self->data.VolumeTotal = ExchangeOrderField_VolumeTotal;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    if( ExchangeOrderField_InsertDate != NULL ) {
        if(ExchangeOrderField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", ExchangeOrderField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, ExchangeOrderField_InsertDate, ExchangeOrderField_InsertDate_len);        
        strncpy(self->data.InsertDate, ExchangeOrderField_InsertDate, sizeof(self->data.InsertDate) );
        ExchangeOrderField_InsertDate = NULL;
    }
            
    ///委托时间
    // TThostFtdcTimeType char[9]
    if( ExchangeOrderField_InsertTime != NULL ) {
        if(ExchangeOrderField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", ExchangeOrderField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, ExchangeOrderField_InsertTime, ExchangeOrderField_InsertTime_len);        
        strncpy(self->data.InsertTime, ExchangeOrderField_InsertTime, sizeof(self->data.InsertTime) );
        ExchangeOrderField_InsertTime = NULL;
    }
            
    ///激活时间
    // TThostFtdcTimeType char[9]
    if( ExchangeOrderField_ActiveTime != NULL ) {
        if(ExchangeOrderField_ActiveTime_len > (Py_ssize_t)sizeof(self->data.ActiveTime)) {
            PyErr_Format(PyExc_ValueError, "ActiveTime too long: length=%zd (max allowed is %zd)", ExchangeOrderField_ActiveTime_len, (Py_ssize_t)sizeof(self->data.ActiveTime));
            return -1;
        }
        // memset(self->data.ActiveTime, 0, sizeof(self->data.ActiveTime));
        // memcpy(self->data.ActiveTime, ExchangeOrderField_ActiveTime, ExchangeOrderField_ActiveTime_len);        
        strncpy(self->data.ActiveTime, ExchangeOrderField_ActiveTime, sizeof(self->data.ActiveTime) );
        ExchangeOrderField_ActiveTime = NULL;
    }
            
    ///挂起时间
    // TThostFtdcTimeType char[9]
    if( ExchangeOrderField_SuspendTime != NULL ) {
        if(ExchangeOrderField_SuspendTime_len > (Py_ssize_t)sizeof(self->data.SuspendTime)) {
            PyErr_Format(PyExc_ValueError, "SuspendTime too long: length=%zd (max allowed is %zd)", ExchangeOrderField_SuspendTime_len, (Py_ssize_t)sizeof(self->data.SuspendTime));
            return -1;
        }
        // memset(self->data.SuspendTime, 0, sizeof(self->data.SuspendTime));
        // memcpy(self->data.SuspendTime, ExchangeOrderField_SuspendTime, ExchangeOrderField_SuspendTime_len);        
        strncpy(self->data.SuspendTime, ExchangeOrderField_SuspendTime, sizeof(self->data.SuspendTime) );
        ExchangeOrderField_SuspendTime = NULL;
    }
            
    ///最后修改时间
    // TThostFtdcTimeType char[9]
    if( ExchangeOrderField_UpdateTime != NULL ) {
        if(ExchangeOrderField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", ExchangeOrderField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
            return -1;
        }
        // memset(self->data.UpdateTime, 0, sizeof(self->data.UpdateTime));
        // memcpy(self->data.UpdateTime, ExchangeOrderField_UpdateTime, ExchangeOrderField_UpdateTime_len);        
        strncpy(self->data.UpdateTime, ExchangeOrderField_UpdateTime, sizeof(self->data.UpdateTime) );
        ExchangeOrderField_UpdateTime = NULL;
    }
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    if( ExchangeOrderField_CancelTime != NULL ) {
        if(ExchangeOrderField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", ExchangeOrderField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
            return -1;
        }
        // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
        // memcpy(self->data.CancelTime, ExchangeOrderField_CancelTime, ExchangeOrderField_CancelTime_len);        
        strncpy(self->data.CancelTime, ExchangeOrderField_CancelTime, sizeof(self->data.CancelTime) );
        ExchangeOrderField_CancelTime = NULL;
    }
            
    ///最后修改交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeOrderField_ActiveTraderID != NULL ) {
        if(ExchangeOrderField_ActiveTraderID_len > (Py_ssize_t)sizeof(self->data.ActiveTraderID)) {
            PyErr_Format(PyExc_ValueError, "ActiveTraderID too long: length=%zd (max allowed is %zd)", ExchangeOrderField_ActiveTraderID_len, (Py_ssize_t)sizeof(self->data.ActiveTraderID));
            return -1;
        }
        // memset(self->data.ActiveTraderID, 0, sizeof(self->data.ActiveTraderID));
        // memcpy(self->data.ActiveTraderID, ExchangeOrderField_ActiveTraderID, ExchangeOrderField_ActiveTraderID_len);        
        strncpy(self->data.ActiveTraderID, ExchangeOrderField_ActiveTraderID, sizeof(self->data.ActiveTraderID) );
        ExchangeOrderField_ActiveTraderID = NULL;
    }
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeOrderField_ClearingPartID != NULL ) {
        if(ExchangeOrderField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", ExchangeOrderField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
            return -1;
        }
        // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
        // memcpy(self->data.ClearingPartID, ExchangeOrderField_ClearingPartID, ExchangeOrderField_ClearingPartID_len);        
        strncpy(self->data.ClearingPartID, ExchangeOrderField_ClearingPartID, sizeof(self->data.ClearingPartID) );
        ExchangeOrderField_ClearingPartID = NULL;
    }
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = ExchangeOrderField_SequenceNo;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( ExchangeOrderField_BranchID != NULL ) {
        if(ExchangeOrderField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", ExchangeOrderField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, ExchangeOrderField_BranchID, ExchangeOrderField_BranchID_len);        
        strncpy(self->data.BranchID, ExchangeOrderField_BranchID, sizeof(self->data.BranchID) );
        ExchangeOrderField_BranchID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExchangeOrderField_reserve2 != NULL ) {
        if(ExchangeOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ExchangeOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ExchangeOrderField_reserve2, ExchangeOrderField_reserve2_len);        
        strncpy(self->data.reserve2, ExchangeOrderField_reserve2, sizeof(self->data.reserve2) );
        ExchangeOrderField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExchangeOrderField_MacAddress != NULL ) {
        if(ExchangeOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExchangeOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExchangeOrderField_MacAddress, ExchangeOrderField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExchangeOrderField_MacAddress, sizeof(self->data.MacAddress) );
        ExchangeOrderField_MacAddress = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ExchangeOrderField_ExchangeInstID != NULL ) {
        if(ExchangeOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ExchangeOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ExchangeOrderField_ExchangeInstID, ExchangeOrderField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ExchangeOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ExchangeOrderField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExchangeOrderField_IPAddress != NULL ) {
        if(ExchangeOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExchangeOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExchangeOrderField_IPAddress, ExchangeOrderField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExchangeOrderField_IPAddress, sizeof(self->data.IPAddress) );
        ExchangeOrderField_IPAddress = NULL;
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
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
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
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///报单价格条件
// TThostFtdcOrderPriceTypeType char
static PyObject *PyCThostFtdcExchangeOrderField_get_OrderPriceType(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderPriceType), 1);
}

///报单价格条件
// TThostFtdcOrderPriceTypeType char
static int PyCThostFtdcExchangeOrderField_set_OrderPriceType(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_Direction(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcExchangeOrderField_set_Direction(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_CombOffsetFlag(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombOffsetFlag, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
    return PyBytes_FromString(self->data.CombOffsetFlag);
}

///组合开平标志
// TThostFtdcCombOffsetFlagType char[5]
static int PyCThostFtdcExchangeOrderField_set_CombOffsetFlag(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_CombHedgeFlag(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombHedgeFlag, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
    return PyBytes_FromString(self->data.CombHedgeFlag);
}

///组合投机套保标志
// TThostFtdcCombHedgeFlagType char[5]
static int PyCThostFtdcExchangeOrderField_set_CombHedgeFlag(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_LimitPrice(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LimitPrice);
}

///价格
// TThostFtdcPriceType double
static int PyCThostFtdcExchangeOrderField_set_LimitPrice(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_VolumeTotalOriginal(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeTotalOriginal);
#else
    return PyInt_FromLong(self->data.VolumeTotalOriginal);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeOrderField_set_VolumeTotalOriginal(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_TimeCondition(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

///有效期类型
// TThostFtdcTimeConditionType char
static int PyCThostFtdcExchangeOrderField_set_TimeCondition(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_GTDDate(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.GTDDate, (Py_ssize_t)sizeof(self->data.GTDDate));
    return PyBytes_FromString(self->data.GTDDate);
}

///GTD日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeOrderField_set_GTDDate(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_VolumeCondition(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.VolumeCondition), 1);
}

///成交量类型
// TThostFtdcVolumeConditionType char
static int PyCThostFtdcExchangeOrderField_set_VolumeCondition(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_MinVolume(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MinVolume);
#else
    return PyInt_FromLong(self->data.MinVolume);
#endif
}

///最小成交量
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeOrderField_set_MinVolume(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_ContingentCondition(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ContingentCondition), 1);
}

///触发条件
// TThostFtdcContingentConditionType char
static int PyCThostFtdcExchangeOrderField_set_ContingentCondition(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_StopPrice(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StopPrice);
}

///止损价
// TThostFtdcPriceType double
static int PyCThostFtdcExchangeOrderField_set_StopPrice(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_ForceCloseReason(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ForceCloseReason), 1);
}

///强平原因
// TThostFtdcForceCloseReasonType char
static int PyCThostFtdcExchangeOrderField_set_ForceCloseReason(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_IsAutoSuspend(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsAutoSuspend);
#else
    return PyInt_FromLong(self->data.IsAutoSuspend);
#endif
}

///自动挂起标志
// TThostFtdcBoolType int
static int PyCThostFtdcExchangeOrderField_set_IsAutoSuspend(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_BusinessUnit(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExchangeOrderField_set_BusinessUnit(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_RequestID(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcExchangeOrderField_set_RequestID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_OrderLocalID(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeOrderField_set_OrderLocalID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_ExchangeID(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeOrderField_set_ExchangeID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_ParticipantID(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeOrderField_set_ParticipantID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_ClientID(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeOrderField_set_ClientID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_reserve1(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcExchangeOrderField_set_reserve1(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcExchangeOrderField_get_TraderID(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeOrderField_set_TraderID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_InstallID(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeOrderField_set_InstallID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_OrderSubmitStatus(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

///报单提交状态
// TThostFtdcOrderSubmitStatusType char
static int PyCThostFtdcExchangeOrderField_set_OrderSubmitStatus(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_NotifySequence(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报单提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExchangeOrderField_set_NotifySequence(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_TradingDay(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeOrderField_set_TradingDay(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_SettlementID(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcExchangeOrderField_set_SettlementID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_OrderSysID(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcExchangeOrderField_set_OrderSysID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_OrderSource(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSource), 1);
}

///报单来源
// TThostFtdcOrderSourceType char
static int PyCThostFtdcExchangeOrderField_set_OrderSource(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_OrderStatus(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderStatus), 1);
}

///报单状态
// TThostFtdcOrderStatusType char
static int PyCThostFtdcExchangeOrderField_set_OrderStatus(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_OrderType(PyCThostFtdcExchangeOrderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderType), 1);
}

///报单类型
// TThostFtdcOrderTypeType char
static int PyCThostFtdcExchangeOrderField_set_OrderType(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_VolumeTraded(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeTraded);
#else
    return PyInt_FromLong(self->data.VolumeTraded);
#endif
}

///今成交数量
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeOrderField_set_VolumeTraded(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_VolumeTotal(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeTotal);
#else
    return PyInt_FromLong(self->data.VolumeTotal);
#endif
}

///剩余数量
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeOrderField_set_VolumeTotal(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_InsertDate(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeOrderField_set_InsertDate(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_InsertTime(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///委托时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeOrderField_set_InsertTime(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_ActiveTime(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveTime, (Py_ssize_t)sizeof(self->data.ActiveTime));
    return PyBytes_FromString(self->data.ActiveTime);
}

///激活时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeOrderField_set_ActiveTime(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_SuspendTime(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SuspendTime, (Py_ssize_t)sizeof(self->data.SuspendTime));
    return PyBytes_FromString(self->data.SuspendTime);
}

///挂起时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeOrderField_set_SuspendTime(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_UpdateTime(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UpdateTime, (Py_ssize_t)sizeof(self->data.UpdateTime));
    return PyBytes_FromString(self->data.UpdateTime);
}

///最后修改时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeOrderField_set_UpdateTime(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_CancelTime(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelTime, (Py_ssize_t)sizeof(self->data.CancelTime));
    return PyBytes_FromString(self->data.CancelTime);
}

///撤销时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeOrderField_set_CancelTime(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_ActiveTraderID(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActiveTraderID, (Py_ssize_t)sizeof(self->data.ActiveTraderID));
    return PyBytes_FromString(self->data.ActiveTraderID);
}

///最后修改交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeOrderField_set_ActiveTraderID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_ClearingPartID(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClearingPartID, (Py_ssize_t)sizeof(self->data.ClearingPartID));
    return PyBytes_FromString(self->data.ClearingPartID);
}

///结算会员编号
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeOrderField_set_ClearingPartID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_SequenceNo(PyCThostFtdcExchangeOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExchangeOrderField_set_SequenceNo(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
        
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcExchangeOrderField_get_BranchID(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcExchangeOrderField_set_BranchID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcExchangeOrderField_get_reserve2(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExchangeOrderField_set_reserve2(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
    // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
    // memcpy(self->data.reserve2, buf, len);
    strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcExchangeOrderField_get_MacAddress(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExchangeOrderField_set_MacAddress(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcExchangeOrderField_get_ExchangeInstID(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcExchangeOrderField_set_ExchangeInstID(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderField_get_IPAddress(PyCThostFtdcExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExchangeOrderField_set_IPAddress(PyCThostFtdcExchangeOrderField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExchangeOrderField_getset[] = {
    ///报单价格条件 
    {(char *)"OrderPriceType", (getter)PyCThostFtdcExchangeOrderField_get_OrderPriceType, (setter)PyCThostFtdcExchangeOrderField_set_OrderPriceType, (char *)"OrderPriceType", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcExchangeOrderField_get_Direction, (setter)PyCThostFtdcExchangeOrderField_set_Direction, (char *)"Direction", NULL},
    ///组合开平标志 
    {(char *)"CombOffsetFlag", (getter)PyCThostFtdcExchangeOrderField_get_CombOffsetFlag, (setter)PyCThostFtdcExchangeOrderField_set_CombOffsetFlag, (char *)"CombOffsetFlag", NULL},
    ///组合投机套保标志 
    {(char *)"CombHedgeFlag", (getter)PyCThostFtdcExchangeOrderField_get_CombHedgeFlag, (setter)PyCThostFtdcExchangeOrderField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
    ///价格 
    {(char *)"LimitPrice", (getter)PyCThostFtdcExchangeOrderField_get_LimitPrice, (setter)PyCThostFtdcExchangeOrderField_set_LimitPrice, (char *)"LimitPrice", NULL},
    ///数量 
    {(char *)"VolumeTotalOriginal", (getter)PyCThostFtdcExchangeOrderField_get_VolumeTotalOriginal, (setter)PyCThostFtdcExchangeOrderField_set_VolumeTotalOriginal, (char *)"VolumeTotalOriginal", NULL},
    ///有效期类型 
    {(char *)"TimeCondition", (getter)PyCThostFtdcExchangeOrderField_get_TimeCondition, (setter)PyCThostFtdcExchangeOrderField_set_TimeCondition, (char *)"TimeCondition", NULL},
    ///GTD日期 
    {(char *)"GTDDate", (getter)PyCThostFtdcExchangeOrderField_get_GTDDate, (setter)PyCThostFtdcExchangeOrderField_set_GTDDate, (char *)"GTDDate", NULL},
    ///成交量类型 
    {(char *)"VolumeCondition", (getter)PyCThostFtdcExchangeOrderField_get_VolumeCondition, (setter)PyCThostFtdcExchangeOrderField_set_VolumeCondition, (char *)"VolumeCondition", NULL},
    ///最小成交量 
    {(char *)"MinVolume", (getter)PyCThostFtdcExchangeOrderField_get_MinVolume, (setter)PyCThostFtdcExchangeOrderField_set_MinVolume, (char *)"MinVolume", NULL},
    ///触发条件 
    {(char *)"ContingentCondition", (getter)PyCThostFtdcExchangeOrderField_get_ContingentCondition, (setter)PyCThostFtdcExchangeOrderField_set_ContingentCondition, (char *)"ContingentCondition", NULL},
    ///止损价 
    {(char *)"StopPrice", (getter)PyCThostFtdcExchangeOrderField_get_StopPrice, (setter)PyCThostFtdcExchangeOrderField_set_StopPrice, (char *)"StopPrice", NULL},
    ///强平原因 
    {(char *)"ForceCloseReason", (getter)PyCThostFtdcExchangeOrderField_get_ForceCloseReason, (setter)PyCThostFtdcExchangeOrderField_set_ForceCloseReason, (char *)"ForceCloseReason", NULL},
    ///自动挂起标志 
    {(char *)"IsAutoSuspend", (getter)PyCThostFtdcExchangeOrderField_get_IsAutoSuspend, (setter)PyCThostFtdcExchangeOrderField_set_IsAutoSuspend, (char *)"IsAutoSuspend", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeOrderField_get_BusinessUnit, (setter)PyCThostFtdcExchangeOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcExchangeOrderField_get_RequestID, (setter)PyCThostFtdcExchangeOrderField_set_RequestID, (char *)"RequestID", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcExchangeOrderField_get_OrderLocalID, (setter)PyCThostFtdcExchangeOrderField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeOrderField_get_ExchangeID, (setter)PyCThostFtdcExchangeOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeOrderField_get_ParticipantID, (setter)PyCThostFtdcExchangeOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeOrderField_get_ClientID, (setter)PyCThostFtdcExchangeOrderField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeOrderField_get_reserve1, (setter)PyCThostFtdcExchangeOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeOrderField_get_TraderID, (setter)PyCThostFtdcExchangeOrderField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeOrderField_get_InstallID, (setter)PyCThostFtdcExchangeOrderField_set_InstallID, (char *)"InstallID", NULL},
    ///报单提交状态 
    {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcExchangeOrderField_get_OrderSubmitStatus, (setter)PyCThostFtdcExchangeOrderField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
    ///报单提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcExchangeOrderField_get_NotifySequence, (setter)PyCThostFtdcExchangeOrderField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcExchangeOrderField_get_TradingDay, (setter)PyCThostFtdcExchangeOrderField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcExchangeOrderField_get_SettlementID, (setter)PyCThostFtdcExchangeOrderField_set_SettlementID, (char *)"SettlementID", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcExchangeOrderField_get_OrderSysID, (setter)PyCThostFtdcExchangeOrderField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///报单来源 
    {(char *)"OrderSource", (getter)PyCThostFtdcExchangeOrderField_get_OrderSource, (setter)PyCThostFtdcExchangeOrderField_set_OrderSource, (char *)"OrderSource", NULL},
    ///报单状态 
    {(char *)"OrderStatus", (getter)PyCThostFtdcExchangeOrderField_get_OrderStatus, (setter)PyCThostFtdcExchangeOrderField_set_OrderStatus, (char *)"OrderStatus", NULL},
    ///报单类型 
    {(char *)"OrderType", (getter)PyCThostFtdcExchangeOrderField_get_OrderType, (setter)PyCThostFtdcExchangeOrderField_set_OrderType, (char *)"OrderType", NULL},
    ///今成交数量 
    {(char *)"VolumeTraded", (getter)PyCThostFtdcExchangeOrderField_get_VolumeTraded, (setter)PyCThostFtdcExchangeOrderField_set_VolumeTraded, (char *)"VolumeTraded", NULL},
    ///剩余数量 
    {(char *)"VolumeTotal", (getter)PyCThostFtdcExchangeOrderField_get_VolumeTotal, (setter)PyCThostFtdcExchangeOrderField_set_VolumeTotal, (char *)"VolumeTotal", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcExchangeOrderField_get_InsertDate, (setter)PyCThostFtdcExchangeOrderField_set_InsertDate, (char *)"InsertDate", NULL},
    ///委托时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcExchangeOrderField_get_InsertTime, (setter)PyCThostFtdcExchangeOrderField_set_InsertTime, (char *)"InsertTime", NULL},
    ///激活时间 
    {(char *)"ActiveTime", (getter)PyCThostFtdcExchangeOrderField_get_ActiveTime, (setter)PyCThostFtdcExchangeOrderField_set_ActiveTime, (char *)"ActiveTime", NULL},
    ///挂起时间 
    {(char *)"SuspendTime", (getter)PyCThostFtdcExchangeOrderField_get_SuspendTime, (setter)PyCThostFtdcExchangeOrderField_set_SuspendTime, (char *)"SuspendTime", NULL},
    ///最后修改时间 
    {(char *)"UpdateTime", (getter)PyCThostFtdcExchangeOrderField_get_UpdateTime, (setter)PyCThostFtdcExchangeOrderField_set_UpdateTime, (char *)"UpdateTime", NULL},
    ///撤销时间 
    {(char *)"CancelTime", (getter)PyCThostFtdcExchangeOrderField_get_CancelTime, (setter)PyCThostFtdcExchangeOrderField_set_CancelTime, (char *)"CancelTime", NULL},
    ///最后修改交易所交易员代码 
    {(char *)"ActiveTraderID", (getter)PyCThostFtdcExchangeOrderField_get_ActiveTraderID, (setter)PyCThostFtdcExchangeOrderField_set_ActiveTraderID, (char *)"ActiveTraderID", NULL},
    ///结算会员编号 
    {(char *)"ClearingPartID", (getter)PyCThostFtdcExchangeOrderField_get_ClearingPartID, (setter)PyCThostFtdcExchangeOrderField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeOrderField_get_SequenceNo, (setter)PyCThostFtdcExchangeOrderField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcExchangeOrderField_get_BranchID, (setter)PyCThostFtdcExchangeOrderField_set_BranchID, (char *)"BranchID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcExchangeOrderField_get_reserve2, (setter)PyCThostFtdcExchangeOrderField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExchangeOrderField_get_MacAddress, (setter)PyCThostFtdcExchangeOrderField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeOrderField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
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
