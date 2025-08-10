
#include "PyCThostFtdcTradeField.h"

///成交

static PyObject *PyCThostFtdcTradeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradeField *self = (PyCThostFtdcTradeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTradeField_init(PyCThostFtdcTradeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "ExchangeID", "TradeID", "Direction", "OrderSysID", "ParticipantID", "ClientID", "TradingRole", "reserve2", "OffsetFlag", "HedgeFlag", "Price", "Volume", "TradeDate", "TradeTime", "TradeType", "PriceSource", "TraderID", "OrderLocalID", "ClearingPartID", "BusinessUnit", "SequenceNo", "TradingDay", "SettlementID", "BrokerOrderSeq", "TradeSource", "InvestUnitID", "InstrumentID", "ExchangeInstID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TradeField_BrokerID = NULL;
    Py_ssize_t TradeField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *TradeField_InvestorID = NULL;
    Py_ssize_t TradeField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *TradeField_reserve1 = NULL;
    Py_ssize_t TradeField_reserve1_len = 0;
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    const char *TradeField_OrderRef = NULL;
    Py_ssize_t TradeField_OrderRef_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *TradeField_UserID = NULL;
    Py_ssize_t TradeField_UserID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *TradeField_ExchangeID = NULL;
    Py_ssize_t TradeField_ExchangeID_len = 0;
            
    ///成交编号
    // TThostFtdcTradeIDType char[21]
    const char *TradeField_TradeID = NULL;
    Py_ssize_t TradeField_TradeID_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char TradeField_Direction = 0;
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *TradeField_OrderSysID = NULL;
    Py_ssize_t TradeField_OrderSysID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *TradeField_ParticipantID = NULL;
    Py_ssize_t TradeField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *TradeField_ClientID = NULL;
    Py_ssize_t TradeField_ClientID_len = 0;
            
    ///交易角色
    // TThostFtdcTradingRoleType char
    char TradeField_TradingRole = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *TradeField_reserve2 = NULL;
    Py_ssize_t TradeField_reserve2_len = 0;
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    char TradeField_OffsetFlag = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char TradeField_HedgeFlag = 0;
            
    ///价格
    // TThostFtdcPriceType double
    double TradeField_Price = 0.0;
        
    ///数量
    // TThostFtdcVolumeType int
    int TradeField_Volume = 0;
        
    ///成交时期
    // TThostFtdcDateType char[9]
    const char *TradeField_TradeDate = NULL;
    Py_ssize_t TradeField_TradeDate_len = 0;
            
    ///成交时间
    // TThostFtdcTimeType char[9]
    const char *TradeField_TradeTime = NULL;
    Py_ssize_t TradeField_TradeTime_len = 0;
            
    ///成交类型
    // TThostFtdcTradeTypeType char
    char TradeField_TradeType = 0;
            
    ///成交价来源
    // TThostFtdcPriceSourceType char
    char TradeField_PriceSource = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *TradeField_TraderID = NULL;
    Py_ssize_t TradeField_TraderID_len = 0;
            
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *TradeField_OrderLocalID = NULL;
    Py_ssize_t TradeField_OrderLocalID_len = 0;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    const char *TradeField_ClearingPartID = NULL;
    Py_ssize_t TradeField_ClearingPartID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *TradeField_BusinessUnit = NULL;
    Py_ssize_t TradeField_BusinessUnit_len = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int TradeField_SequenceNo = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *TradeField_TradingDay = NULL;
    Py_ssize_t TradeField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int TradeField_SettlementID = 0;
        
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    int TradeField_BrokerOrderSeq = 0;
        
    ///成交来源
    // TThostFtdcTradeSourceType char
    char TradeField_TradeSource = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *TradeField_InvestUnitID = NULL;
    Py_ssize_t TradeField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *TradeField_InstrumentID = NULL;
    Py_ssize_t TradeField_InstrumentID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *TradeField_ExchangeInstID = NULL;
    Py_ssize_t TradeField_ExchangeInstID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#cy#y#y#cy#ccdiy#y#ccy#y#y#y#iy#iicy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#cs#s#s#cs#ccdis#s#ccs#s#s#s#is#iics#s#s#", (char **)kwlist
#endif

        , &TradeField_BrokerID, &TradeField_BrokerID_len 
        , &TradeField_InvestorID, &TradeField_InvestorID_len 
        , &TradeField_reserve1, &TradeField_reserve1_len 
        , &TradeField_OrderRef, &TradeField_OrderRef_len 
        , &TradeField_UserID, &TradeField_UserID_len 
        , &TradeField_ExchangeID, &TradeField_ExchangeID_len 
        , &TradeField_TradeID, &TradeField_TradeID_len 
        , &TradeField_Direction 
        , &TradeField_OrderSysID, &TradeField_OrderSysID_len 
        , &TradeField_ParticipantID, &TradeField_ParticipantID_len 
        , &TradeField_ClientID, &TradeField_ClientID_len 
        , &TradeField_TradingRole 
        , &TradeField_reserve2, &TradeField_reserve2_len 
        , &TradeField_OffsetFlag 
        , &TradeField_HedgeFlag 
        , &TradeField_Price 
        , &TradeField_Volume 
        , &TradeField_TradeDate, &TradeField_TradeDate_len 
        , &TradeField_TradeTime, &TradeField_TradeTime_len 
        , &TradeField_TradeType 
        , &TradeField_PriceSource 
        , &TradeField_TraderID, &TradeField_TraderID_len 
        , &TradeField_OrderLocalID, &TradeField_OrderLocalID_len 
        , &TradeField_ClearingPartID, &TradeField_ClearingPartID_len 
        , &TradeField_BusinessUnit, &TradeField_BusinessUnit_len 
        , &TradeField_SequenceNo 
        , &TradeField_TradingDay, &TradeField_TradingDay_len 
        , &TradeField_SettlementID 
        , &TradeField_BrokerOrderSeq 
        , &TradeField_TradeSource 
        , &TradeField_InvestUnitID, &TradeField_InvestUnitID_len 
        , &TradeField_InstrumentID, &TradeField_InstrumentID_len 
        , &TradeField_ExchangeInstID, &TradeField_ExchangeInstID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TradeField_BrokerID != NULL ) {
        if(TradeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TradeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TradeField_BrokerID, TradeField_BrokerID_len);        
        strncpy(self->data.BrokerID, TradeField_BrokerID, sizeof(self->data.BrokerID) );
        TradeField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( TradeField_InvestorID != NULL ) {
        if(TradeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", TradeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, TradeField_InvestorID, TradeField_InvestorID_len);        
        strncpy(self->data.InvestorID, TradeField_InvestorID, sizeof(self->data.InvestorID) );
        TradeField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( TradeField_reserve1 != NULL ) {
        if(TradeField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", TradeField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, TradeField_reserve1, TradeField_reserve1_len);        
        strncpy(self->data.reserve1, TradeField_reserve1, sizeof(self->data.reserve1) );
        TradeField_reserve1 = NULL;
    }
            
    ///报单引用
    // TThostFtdcOrderRefType char[13]
    if( TradeField_OrderRef != NULL ) {
        if(TradeField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", TradeField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
            return -1;
        }
        // memset(self->data.OrderRef, 0, sizeof(self->data.OrderRef));
        // memcpy(self->data.OrderRef, TradeField_OrderRef, TradeField_OrderRef_len);        
        strncpy(self->data.OrderRef, TradeField_OrderRef, sizeof(self->data.OrderRef) );
        TradeField_OrderRef = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( TradeField_UserID != NULL ) {
        if(TradeField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", TradeField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, TradeField_UserID, TradeField_UserID_len);        
        strncpy(self->data.UserID, TradeField_UserID, sizeof(self->data.UserID) );
        TradeField_UserID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( TradeField_ExchangeID != NULL ) {
        if(TradeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", TradeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, TradeField_ExchangeID, TradeField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, TradeField_ExchangeID, sizeof(self->data.ExchangeID) );
        TradeField_ExchangeID = NULL;
    }
            
    ///成交编号
    // TThostFtdcTradeIDType char[21]
    if( TradeField_TradeID != NULL ) {
        if(TradeField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", TradeField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
            return -1;
        }
        // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
        // memcpy(self->data.TradeID, TradeField_TradeID, TradeField_TradeID_len);        
        strncpy(self->data.TradeID, TradeField_TradeID, sizeof(self->data.TradeID) );
        TradeField_TradeID = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = TradeField_Direction;
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( TradeField_OrderSysID != NULL ) {
        if(TradeField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", TradeField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, TradeField_OrderSysID, TradeField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, TradeField_OrderSysID, sizeof(self->data.OrderSysID) );
        TradeField_OrderSysID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( TradeField_ParticipantID != NULL ) {
        if(TradeField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", TradeField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, TradeField_ParticipantID, TradeField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, TradeField_ParticipantID, sizeof(self->data.ParticipantID) );
        TradeField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( TradeField_ClientID != NULL ) {
        if(TradeField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", TradeField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, TradeField_ClientID, TradeField_ClientID_len);        
        strncpy(self->data.ClientID, TradeField_ClientID, sizeof(self->data.ClientID) );
        TradeField_ClientID = NULL;
    }
            
    ///交易角色
    // TThostFtdcTradingRoleType char
    self->data.TradingRole = TradeField_TradingRole;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( TradeField_reserve2 != NULL ) {
        if(TradeField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", TradeField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, TradeField_reserve2, TradeField_reserve2_len);        
        strncpy(self->data.reserve2, TradeField_reserve2, sizeof(self->data.reserve2) );
        TradeField_reserve2 = NULL;
    }
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    self->data.OffsetFlag = TradeField_OffsetFlag;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = TradeField_HedgeFlag;
            
    ///价格
    // TThostFtdcPriceType double
    self->data.Price = TradeField_Price;
        
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = TradeField_Volume;
        
    ///成交时期
    // TThostFtdcDateType char[9]
    if( TradeField_TradeDate != NULL ) {
        if(TradeField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", TradeField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, TradeField_TradeDate, TradeField_TradeDate_len);        
        strncpy(self->data.TradeDate, TradeField_TradeDate, sizeof(self->data.TradeDate) );
        TradeField_TradeDate = NULL;
    }
            
    ///成交时间
    // TThostFtdcTimeType char[9]
    if( TradeField_TradeTime != NULL ) {
        if(TradeField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", TradeField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, TradeField_TradeTime, TradeField_TradeTime_len);        
        strncpy(self->data.TradeTime, TradeField_TradeTime, sizeof(self->data.TradeTime) );
        TradeField_TradeTime = NULL;
    }
            
    ///成交类型
    // TThostFtdcTradeTypeType char
    self->data.TradeType = TradeField_TradeType;
            
    ///成交价来源
    // TThostFtdcPriceSourceType char
    self->data.PriceSource = TradeField_PriceSource;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( TradeField_TraderID != NULL ) {
        if(TradeField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", TradeField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, TradeField_TraderID, TradeField_TraderID_len);        
        strncpy(self->data.TraderID, TradeField_TraderID, sizeof(self->data.TraderID) );
        TradeField_TraderID = NULL;
    }
            
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( TradeField_OrderLocalID != NULL ) {
        if(TradeField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", TradeField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, TradeField_OrderLocalID, TradeField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, TradeField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        TradeField_OrderLocalID = NULL;
    }
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    if( TradeField_ClearingPartID != NULL ) {
        if(TradeField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", TradeField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
            return -1;
        }
        // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
        // memcpy(self->data.ClearingPartID, TradeField_ClearingPartID, TradeField_ClearingPartID_len);        
        strncpy(self->data.ClearingPartID, TradeField_ClearingPartID, sizeof(self->data.ClearingPartID) );
        TradeField_ClearingPartID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( TradeField_BusinessUnit != NULL ) {
        if(TradeField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", TradeField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, TradeField_BusinessUnit, TradeField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, TradeField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        TradeField_BusinessUnit = NULL;
    }
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = TradeField_SequenceNo;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( TradeField_TradingDay != NULL ) {
        if(TradeField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", TradeField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, TradeField_TradingDay, TradeField_TradingDay_len);        
        strncpy(self->data.TradingDay, TradeField_TradingDay, sizeof(self->data.TradingDay) );
        TradeField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = TradeField_SettlementID;
        
    ///经纪公司报单编号
    // TThostFtdcSequenceNoType int
    self->data.BrokerOrderSeq = TradeField_BrokerOrderSeq;
        
    ///成交来源
    // TThostFtdcTradeSourceType char
    self->data.TradeSource = TradeField_TradeSource;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( TradeField_InvestUnitID != NULL ) {
        if(TradeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", TradeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, TradeField_InvestUnitID, TradeField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, TradeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        TradeField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( TradeField_InstrumentID != NULL ) {
        if(TradeField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", TradeField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, TradeField_InstrumentID, TradeField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, TradeField_InstrumentID, sizeof(self->data.InstrumentID) );
        TradeField_InstrumentID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( TradeField_ExchangeInstID != NULL ) {
        if(TradeField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", TradeField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, TradeField_ExchangeInstID, TradeField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, TradeField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        TradeField_ExchangeInstID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTradeField_dealloc(PyCThostFtdcTradeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradeField_repr(PyCThostFtdcTradeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:c,s:y,s:c,s:c,s:d,s:i,s:y,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:i,s:y,s:i,s:i,s:c,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:c,s:s,s:c,s:c,s:d,s:i,s:s,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:i,s:s,s:i,s:i,s:c,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"OrderRef", self->data.OrderRef//, (Py_ssize_t)sizeof(self->data.OrderRef) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"TradeID", self->data.TradeID//, (Py_ssize_t)sizeof(self->data.TradeID) 
        ,"Direction", self->data.Direction 
        ,"OrderSysID", self->data.OrderSysID//, (Py_ssize_t)sizeof(self->data.OrderSysID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"TradingRole", self->data.TradingRole 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"OffsetFlag", self->data.OffsetFlag 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"Price", self->data.Price 
        ,"Volume", self->data.Volume 
        ,"TradeDate", self->data.TradeDate//, (Py_ssize_t)sizeof(self->data.TradeDate) 
        ,"TradeTime", self->data.TradeTime//, (Py_ssize_t)sizeof(self->data.TradeTime) 
        ,"TradeType", self->data.TradeType 
        ,"PriceSource", self->data.PriceSource 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"OrderLocalID", self->data.OrderLocalID//, (Py_ssize_t)sizeof(self->data.OrderLocalID) 
        ,"ClearingPartID", self->data.ClearingPartID//, (Py_ssize_t)sizeof(self->data.ClearingPartID) 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"SequenceNo", self->data.SequenceNo 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"BrokerOrderSeq", self->data.BrokerOrderSeq 
        ,"TradeSource", self->data.TradeSource 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTradeField_get_BrokerID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTradeField_set_BrokerID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradeField_get_InvestorID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcTradeField_set_InvestorID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradeField_get_reserve1(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcTradeField_set_reserve1(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradeField_get_OrderRef(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderRef, (Py_ssize_t)sizeof(self->data.OrderRef));
    return PyBytes_FromString(self->data.OrderRef);
}

///报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcTradeField_set_OrderRef(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradeField_get_UserID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcTradeField_set_UserID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcTradeField_get_ExchangeID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcTradeField_set_ExchangeID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            
///成交编号
// TThostFtdcTradeIDType char[21]
static PyObject *PyCThostFtdcTradeField_get_TradeID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeID, (Py_ssize_t)sizeof(self->data.TradeID));
    return PyBytes_FromString(self->data.TradeID);
}

///成交编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcTradeField_set_TradeID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
    // memcpy(self->data.TradeID, buf, len);
    strncpy(self->data.TradeID, buf, sizeof(self->data.TradeID));
    return 0;
}
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcTradeField_get_Direction(PyCThostFtdcTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcTradeField_set_Direction(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            
///报单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcTradeField_get_OrderSysID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcTradeField_set_OrderSysID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcTradeField_get_ParticipantID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcTradeField_set_ParticipantID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradeField_get_ClientID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcTradeField_set_ClientID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            
///交易角色
// TThostFtdcTradingRoleType char
static PyObject *PyCThostFtdcTradeField_get_TradingRole(PyCThostFtdcTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TradingRole), 1);
}

///交易角色
// TThostFtdcTradingRoleType char
static int PyCThostFtdcTradeField_set_TradingRole(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingRole Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingRole)) {
        PyErr_SetString(PyExc_ValueError, "TradingRole must be equal 1 bytes");
        return -1;
    }
    self->data.TradingRole = *buf;
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcTradeField_get_reserve2(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcTradeField_set_reserve2(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            
///开平标志
// TThostFtdcOffsetFlagType char
static PyObject *PyCThostFtdcTradeField_get_OffsetFlag(PyCThostFtdcTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

///开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcTradeField_set_OffsetFlag(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "OffsetFlag must be equal 1 bytes");
        return -1;
    }
    self->data.OffsetFlag = *buf;
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcTradeField_get_HedgeFlag(PyCThostFtdcTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcTradeField_set_HedgeFlag(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.HedgeFlag = *buf;
    return 0;
}
            
///价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcTradeField_get_Price(PyCThostFtdcTradeField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Price);
}

///价格
// TThostFtdcPriceType double
static int PyCThostFtdcTradeField_set_Price(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Price Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Price = buf;
    return 0;
}
        
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcTradeField_get_Volume(PyCThostFtdcTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcTradeField_set_Volume(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the Volume value out of range for C int");
        return -1;
    }
    self->data.Volume = (int)buf;
    return 0;
}
        
///成交时期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcTradeField_get_TradeDate(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///成交时期
// TThostFtdcDateType char[9]
static int PyCThostFtdcTradeField_set_TradeDate(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
    // memcpy(self->data.TradeDate, buf, len);
    strncpy(self->data.TradeDate, buf, sizeof(self->data.TradeDate));
    return 0;
}
            
///成交时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcTradeField_get_TradeTime(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///成交时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcTradeField_set_TradeTime(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
    // memcpy(self->data.TradeTime, buf, len);
    strncpy(self->data.TradeTime, buf, sizeof(self->data.TradeTime));
    return 0;
}
            
///成交类型
// TThostFtdcTradeTypeType char
static PyObject *PyCThostFtdcTradeField_get_TradeType(PyCThostFtdcTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TradeType), 1);
}

///成交类型
// TThostFtdcTradeTypeType char
static int PyCThostFtdcTradeField_set_TradeType(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeType)) {
        PyErr_SetString(PyExc_ValueError, "TradeType must be equal 1 bytes");
        return -1;
    }
    self->data.TradeType = *buf;
    return 0;
}
            
///成交价来源
// TThostFtdcPriceSourceType char
static PyObject *PyCThostFtdcTradeField_get_PriceSource(PyCThostFtdcTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PriceSource), 1);
}

///成交价来源
// TThostFtdcPriceSourceType char
static int PyCThostFtdcTradeField_set_PriceSource(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PriceSource Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PriceSource)) {
        PyErr_SetString(PyExc_ValueError, "PriceSource must be equal 1 bytes");
        return -1;
    }
    self->data.PriceSource = *buf;
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcTradeField_get_TraderID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcTradeField_set_TraderID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            
///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcTradeField_get_OrderLocalID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcTradeField_set_OrderLocalID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            
///结算会员编号
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcTradeField_get_ClearingPartID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClearingPartID, (Py_ssize_t)sizeof(self->data.ClearingPartID));
    return PyBytes_FromString(self->data.ClearingPartID);
}

///结算会员编号
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcTradeField_set_ClearingPartID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            
///业务单元
// TThostFtdcBusinessUnitType char[21]
static PyObject *PyCThostFtdcTradeField_get_BusinessUnit(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcTradeField_set_BusinessUnit(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            
///序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcTradeField_get_SequenceNo(PyCThostFtdcTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcTradeField_set_SequenceNo(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
        
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcTradeField_get_TradingDay(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcTradeField_set_TradingDay(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradeField_get_SettlementID(PyCThostFtdcTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcTradeField_set_SettlementID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
        
///经纪公司报单编号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcTradeField_get_BrokerOrderSeq(PyCThostFtdcTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BrokerOrderSeq);
#else
    return PyInt_FromLong(self->data.BrokerOrderSeq);
#endif
}

///经纪公司报单编号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcTradeField_set_BrokerOrderSeq(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
        
///成交来源
// TThostFtdcTradeSourceType char
static PyObject *PyCThostFtdcTradeField_get_TradeSource(PyCThostFtdcTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TradeSource), 1);
}

///成交来源
// TThostFtdcTradeSourceType char
static int PyCThostFtdcTradeField_set_TradeSource(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeSource Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeSource)) {
        PyErr_SetString(PyExc_ValueError, "TradeSource must be equal 1 bytes");
        return -1;
    }
    self->data.TradeSource = *buf;
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcTradeField_get_InvestUnitID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcTradeField_set_InvestUnitID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcTradeField_get_InstrumentID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcTradeField_set_InstrumentID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradeField_get_ExchangeInstID(PyCThostFtdcTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcTradeField_set_ExchangeInstID(PyCThostFtdcTradeField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTradeField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTradeField_get_BrokerID, (setter)PyCThostFtdcTradeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcTradeField_get_InvestorID, (setter)PyCThostFtdcTradeField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcTradeField_get_reserve1, (setter)PyCThostFtdcTradeField_set_reserve1, (char *)"reserve1", NULL},
    ///报单引用 
    {(char *)"OrderRef", (getter)PyCThostFtdcTradeField_get_OrderRef, (setter)PyCThostFtdcTradeField_set_OrderRef, (char *)"OrderRef", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcTradeField_get_UserID, (setter)PyCThostFtdcTradeField_set_UserID, (char *)"UserID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcTradeField_get_ExchangeID, (setter)PyCThostFtdcTradeField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///成交编号 
    {(char *)"TradeID", (getter)PyCThostFtdcTradeField_get_TradeID, (setter)PyCThostFtdcTradeField_set_TradeID, (char *)"TradeID", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcTradeField_get_Direction, (setter)PyCThostFtdcTradeField_set_Direction, (char *)"Direction", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcTradeField_get_OrderSysID, (setter)PyCThostFtdcTradeField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcTradeField_get_ParticipantID, (setter)PyCThostFtdcTradeField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcTradeField_get_ClientID, (setter)PyCThostFtdcTradeField_set_ClientID, (char *)"ClientID", NULL},
    ///交易角色 
    {(char *)"TradingRole", (getter)PyCThostFtdcTradeField_get_TradingRole, (setter)PyCThostFtdcTradeField_set_TradingRole, (char *)"TradingRole", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcTradeField_get_reserve2, (setter)PyCThostFtdcTradeField_set_reserve2, (char *)"reserve2", NULL},
    ///开平标志 
    {(char *)"OffsetFlag", (getter)PyCThostFtdcTradeField_get_OffsetFlag, (setter)PyCThostFtdcTradeField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcTradeField_get_HedgeFlag, (setter)PyCThostFtdcTradeField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///价格 
    {(char *)"Price", (getter)PyCThostFtdcTradeField_get_Price, (setter)PyCThostFtdcTradeField_set_Price, (char *)"Price", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcTradeField_get_Volume, (setter)PyCThostFtdcTradeField_set_Volume, (char *)"Volume", NULL},
    ///成交时期 
    {(char *)"TradeDate", (getter)PyCThostFtdcTradeField_get_TradeDate, (setter)PyCThostFtdcTradeField_set_TradeDate, (char *)"TradeDate", NULL},
    ///成交时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcTradeField_get_TradeTime, (setter)PyCThostFtdcTradeField_set_TradeTime, (char *)"TradeTime", NULL},
    ///成交类型 
    {(char *)"TradeType", (getter)PyCThostFtdcTradeField_get_TradeType, (setter)PyCThostFtdcTradeField_set_TradeType, (char *)"TradeType", NULL},
    ///成交价来源 
    {(char *)"PriceSource", (getter)PyCThostFtdcTradeField_get_PriceSource, (setter)PyCThostFtdcTradeField_set_PriceSource, (char *)"PriceSource", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcTradeField_get_TraderID, (setter)PyCThostFtdcTradeField_set_TraderID, (char *)"TraderID", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcTradeField_get_OrderLocalID, (setter)PyCThostFtdcTradeField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///结算会员编号 
    {(char *)"ClearingPartID", (getter)PyCThostFtdcTradeField_get_ClearingPartID, (setter)PyCThostFtdcTradeField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcTradeField_get_BusinessUnit, (setter)PyCThostFtdcTradeField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcTradeField_get_SequenceNo, (setter)PyCThostFtdcTradeField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcTradeField_get_TradingDay, (setter)PyCThostFtdcTradeField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcTradeField_get_SettlementID, (setter)PyCThostFtdcTradeField_set_SettlementID, (char *)"SettlementID", NULL},
    ///经纪公司报单编号 
    {(char *)"BrokerOrderSeq", (getter)PyCThostFtdcTradeField_get_BrokerOrderSeq, (setter)PyCThostFtdcTradeField_set_BrokerOrderSeq, (char *)"BrokerOrderSeq", NULL},
    ///成交来源 
    {(char *)"TradeSource", (getter)PyCThostFtdcTradeField_get_TradeSource, (setter)PyCThostFtdcTradeField_set_TradeSource, (char *)"TradeSource", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcTradeField_get_InvestUnitID, (setter)PyCThostFtdcTradeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcTradeField_get_InstrumentID, (setter)PyCThostFtdcTradeField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcTradeField_get_ExchangeInstID, (setter)PyCThostFtdcTradeField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradeField",	/* tp_name */
	sizeof(PyCThostFtdcTradeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradeField_repr,   /* tp_repr */
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
	"CThostFtdcTradeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradeField_new,       /* tp_new */
};

int PyCThostFtdcTradeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradeField  */
	if (PyType_Ready(&PyCThostFtdcTradeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradeField", (PyObject *)&PyCThostFtdcTradeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradeField to module");
        Py_DECREF(&PyCThostFtdcTradeFieldType);
		return -1;
    }

    return 0;
}
