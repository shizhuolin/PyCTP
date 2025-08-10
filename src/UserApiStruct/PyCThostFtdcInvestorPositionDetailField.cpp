
#include "PyCThostFtdcInvestorPositionDetailField.h"

///投资者持仓明细

static PyObject *PyCThostFtdcInvestorPositionDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorPositionDetailField *self = (PyCThostFtdcInvestorPositionDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorPositionDetailField_init(PyCThostFtdcInvestorPositionDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "BrokerID", "InvestorID", "HedgeFlag", "Direction", "OpenDate", "TradeID", "Volume", "OpenPrice", "TradingDay", "SettlementID", "TradeType", "reserve2", "ExchangeID", "CloseProfitByDate", "CloseProfitByTrade", "PositionProfitByDate", "PositionProfitByTrade", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LastSettlementPrice", "SettlementPrice", "CloseVolume", "CloseAmount", "TimeFirstVolume", "InvestUnitID", "SpecPosiType", "InstrumentID", "CombInstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InvestorPositionDetailField_reserve1 = NULL;
    Py_ssize_t InvestorPositionDetailField_reserve1_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorPositionDetailField_BrokerID = NULL;
    Py_ssize_t InvestorPositionDetailField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorPositionDetailField_InvestorID = NULL;
    Py_ssize_t InvestorPositionDetailField_InvestorID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InvestorPositionDetailField_HedgeFlag = 0;
            
    ///买卖
    // TThostFtdcDirectionType char
    char InvestorPositionDetailField_Direction = 0;
            
    ///开仓日期
    // TThostFtdcDateType char[9]
    const char *InvestorPositionDetailField_OpenDate = NULL;
    Py_ssize_t InvestorPositionDetailField_OpenDate_len = 0;
            
    ///成交编号
    // TThostFtdcTradeIDType char[21]
    const char *InvestorPositionDetailField_TradeID = NULL;
    Py_ssize_t InvestorPositionDetailField_TradeID_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int InvestorPositionDetailField_Volume = 0;
        
    ///开仓价
    // TThostFtdcPriceType double
    double InvestorPositionDetailField_OpenPrice = 0.0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *InvestorPositionDetailField_TradingDay = NULL;
    Py_ssize_t InvestorPositionDetailField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int InvestorPositionDetailField_SettlementID = 0;
        
    ///成交类型
    // TThostFtdcTradeTypeType char
    char InvestorPositionDetailField_TradeType = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InvestorPositionDetailField_reserve2 = NULL;
    Py_ssize_t InvestorPositionDetailField_reserve2_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorPositionDetailField_ExchangeID = NULL;
    Py_ssize_t InvestorPositionDetailField_ExchangeID_len = 0;
            
    ///逐日盯市平仓盈亏
    // TThostFtdcMoneyType double
    double InvestorPositionDetailField_CloseProfitByDate = 0.0;
        
    ///逐笔对冲平仓盈亏
    // TThostFtdcMoneyType double
    double InvestorPositionDetailField_CloseProfitByTrade = 0.0;
        
    ///逐日盯市持仓盈亏
    // TThostFtdcMoneyType double
    double InvestorPositionDetailField_PositionProfitByDate = 0.0;
        
    ///逐笔对冲持仓盈亏
    // TThostFtdcMoneyType double
    double InvestorPositionDetailField_PositionProfitByTrade = 0.0;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    double InvestorPositionDetailField_Margin = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double InvestorPositionDetailField_ExchMargin = 0.0;
        
    ///保证金率
    // TThostFtdcRatioType double
    double InvestorPositionDetailField_MarginRateByMoney = 0.0;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    double InvestorPositionDetailField_MarginRateByVolume = 0.0;
        
    ///昨结算价
    // TThostFtdcPriceType double
    double InvestorPositionDetailField_LastSettlementPrice = 0.0;
        
    ///结算价
    // TThostFtdcPriceType double
    double InvestorPositionDetailField_SettlementPrice = 0.0;
        
    ///平仓量
    // TThostFtdcVolumeType int
    int InvestorPositionDetailField_CloseVolume = 0;
        
    ///平仓金额
    // TThostFtdcMoneyType double
    double InvestorPositionDetailField_CloseAmount = 0.0;
        
    ///先开先平剩余数量
    // TThostFtdcVolumeType int
    int InvestorPositionDetailField_TimeFirstVolume = 0;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InvestorPositionDetailField_InvestUnitID = NULL;
    Py_ssize_t InvestorPositionDetailField_InvestUnitID_len = 0;
            
    ///特殊持仓标志
    // TThostFtdcSpecPosiTypeType char
    char InvestorPositionDetailField_SpecPosiType = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InvestorPositionDetailField_InstrumentID = NULL;
    Py_ssize_t InvestorPositionDetailField_InstrumentID_len = 0;
            
    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InvestorPositionDetailField_CombInstrumentID = NULL;
    Py_ssize_t InvestorPositionDetailField_CombInstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccy#y#idy#icy#y#ddddddddddidiy#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ccs#s#ids#ics#s#ddddddddddidis#cs#s#", (char **)kwlist
#endif

        , &InvestorPositionDetailField_reserve1, &InvestorPositionDetailField_reserve1_len 
        , &InvestorPositionDetailField_BrokerID, &InvestorPositionDetailField_BrokerID_len 
        , &InvestorPositionDetailField_InvestorID, &InvestorPositionDetailField_InvestorID_len 
        , &InvestorPositionDetailField_HedgeFlag 
        , &InvestorPositionDetailField_Direction 
        , &InvestorPositionDetailField_OpenDate, &InvestorPositionDetailField_OpenDate_len 
        , &InvestorPositionDetailField_TradeID, &InvestorPositionDetailField_TradeID_len 
        , &InvestorPositionDetailField_Volume 
        , &InvestorPositionDetailField_OpenPrice 
        , &InvestorPositionDetailField_TradingDay, &InvestorPositionDetailField_TradingDay_len 
        , &InvestorPositionDetailField_SettlementID 
        , &InvestorPositionDetailField_TradeType 
        , &InvestorPositionDetailField_reserve2, &InvestorPositionDetailField_reserve2_len 
        , &InvestorPositionDetailField_ExchangeID, &InvestorPositionDetailField_ExchangeID_len 
        , &InvestorPositionDetailField_CloseProfitByDate 
        , &InvestorPositionDetailField_CloseProfitByTrade 
        , &InvestorPositionDetailField_PositionProfitByDate 
        , &InvestorPositionDetailField_PositionProfitByTrade 
        , &InvestorPositionDetailField_Margin 
        , &InvestorPositionDetailField_ExchMargin 
        , &InvestorPositionDetailField_MarginRateByMoney 
        , &InvestorPositionDetailField_MarginRateByVolume 
        , &InvestorPositionDetailField_LastSettlementPrice 
        , &InvestorPositionDetailField_SettlementPrice 
        , &InvestorPositionDetailField_CloseVolume 
        , &InvestorPositionDetailField_CloseAmount 
        , &InvestorPositionDetailField_TimeFirstVolume 
        , &InvestorPositionDetailField_InvestUnitID, &InvestorPositionDetailField_InvestUnitID_len 
        , &InvestorPositionDetailField_SpecPosiType 
        , &InvestorPositionDetailField_InstrumentID, &InvestorPositionDetailField_InstrumentID_len 
        , &InvestorPositionDetailField_CombInstrumentID, &InvestorPositionDetailField_CombInstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InvestorPositionDetailField_reserve1 != NULL ) {
        if(InvestorPositionDetailField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InvestorPositionDetailField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InvestorPositionDetailField_reserve1, InvestorPositionDetailField_reserve1_len);        
        strncpy(self->data.reserve1, InvestorPositionDetailField_reserve1, sizeof(self->data.reserve1) );
        InvestorPositionDetailField_reserve1 = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorPositionDetailField_BrokerID != NULL ) {
        if(InvestorPositionDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorPositionDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorPositionDetailField_BrokerID, InvestorPositionDetailField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorPositionDetailField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorPositionDetailField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorPositionDetailField_InvestorID != NULL ) {
        if(InvestorPositionDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorPositionDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorPositionDetailField_InvestorID, InvestorPositionDetailField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorPositionDetailField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorPositionDetailField_InvestorID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InvestorPositionDetailField_HedgeFlag;
            
    ///买卖
    // TThostFtdcDirectionType char
    self->data.Direction = InvestorPositionDetailField_Direction;
            
    ///开仓日期
    // TThostFtdcDateType char[9]
    if( InvestorPositionDetailField_OpenDate != NULL ) {
        if(InvestorPositionDetailField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", InvestorPositionDetailField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
            return -1;
        }
        // memset(self->data.OpenDate, 0, sizeof(self->data.OpenDate));
        // memcpy(self->data.OpenDate, InvestorPositionDetailField_OpenDate, InvestorPositionDetailField_OpenDate_len);        
        strncpy(self->data.OpenDate, InvestorPositionDetailField_OpenDate, sizeof(self->data.OpenDate) );
        InvestorPositionDetailField_OpenDate = NULL;
    }
            
    ///成交编号
    // TThostFtdcTradeIDType char[21]
    if( InvestorPositionDetailField_TradeID != NULL ) {
        if(InvestorPositionDetailField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", InvestorPositionDetailField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
            return -1;
        }
        // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
        // memcpy(self->data.TradeID, InvestorPositionDetailField_TradeID, InvestorPositionDetailField_TradeID_len);        
        strncpy(self->data.TradeID, InvestorPositionDetailField_TradeID, sizeof(self->data.TradeID) );
        InvestorPositionDetailField_TradeID = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = InvestorPositionDetailField_Volume;
        
    ///开仓价
    // TThostFtdcPriceType double
    self->data.OpenPrice = InvestorPositionDetailField_OpenPrice;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( InvestorPositionDetailField_TradingDay != NULL ) {
        if(InvestorPositionDetailField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", InvestorPositionDetailField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, InvestorPositionDetailField_TradingDay, InvestorPositionDetailField_TradingDay_len);        
        strncpy(self->data.TradingDay, InvestorPositionDetailField_TradingDay, sizeof(self->data.TradingDay) );
        InvestorPositionDetailField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = InvestorPositionDetailField_SettlementID;
        
    ///成交类型
    // TThostFtdcTradeTypeType char
    self->data.TradeType = InvestorPositionDetailField_TradeType;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InvestorPositionDetailField_reserve2 != NULL ) {
        if(InvestorPositionDetailField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InvestorPositionDetailField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InvestorPositionDetailField_reserve2, InvestorPositionDetailField_reserve2_len);        
        strncpy(self->data.reserve2, InvestorPositionDetailField_reserve2, sizeof(self->data.reserve2) );
        InvestorPositionDetailField_reserve2 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorPositionDetailField_ExchangeID != NULL ) {
        if(InvestorPositionDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorPositionDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorPositionDetailField_ExchangeID, InvestorPositionDetailField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorPositionDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorPositionDetailField_ExchangeID = NULL;
    }
            
    ///逐日盯市平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfitByDate = InvestorPositionDetailField_CloseProfitByDate;
        
    ///逐笔对冲平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfitByTrade = InvestorPositionDetailField_CloseProfitByTrade;
        
    ///逐日盯市持仓盈亏
    // TThostFtdcMoneyType double
    self->data.PositionProfitByDate = InvestorPositionDetailField_PositionProfitByDate;
        
    ///逐笔对冲持仓盈亏
    // TThostFtdcMoneyType double
    self->data.PositionProfitByTrade = InvestorPositionDetailField_PositionProfitByTrade;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    self->data.Margin = InvestorPositionDetailField_Margin;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchMargin = InvestorPositionDetailField_ExchMargin;
        
    ///保证金率
    // TThostFtdcRatioType double
    self->data.MarginRateByMoney = InvestorPositionDetailField_MarginRateByMoney;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    self->data.MarginRateByVolume = InvestorPositionDetailField_MarginRateByVolume;
        
    ///昨结算价
    // TThostFtdcPriceType double
    self->data.LastSettlementPrice = InvestorPositionDetailField_LastSettlementPrice;
        
    ///结算价
    // TThostFtdcPriceType double
    self->data.SettlementPrice = InvestorPositionDetailField_SettlementPrice;
        
    ///平仓量
    // TThostFtdcVolumeType int
    self->data.CloseVolume = InvestorPositionDetailField_CloseVolume;
        
    ///平仓金额
    // TThostFtdcMoneyType double
    self->data.CloseAmount = InvestorPositionDetailField_CloseAmount;
        
    ///先开先平剩余数量
    // TThostFtdcVolumeType int
    self->data.TimeFirstVolume = InvestorPositionDetailField_TimeFirstVolume;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InvestorPositionDetailField_InvestUnitID != NULL ) {
        if(InvestorPositionDetailField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InvestorPositionDetailField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InvestorPositionDetailField_InvestUnitID, InvestorPositionDetailField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InvestorPositionDetailField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InvestorPositionDetailField_InvestUnitID = NULL;
    }
            
    ///特殊持仓标志
    // TThostFtdcSpecPosiTypeType char
    self->data.SpecPosiType = InvestorPositionDetailField_SpecPosiType;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InvestorPositionDetailField_InstrumentID != NULL ) {
        if(InvestorPositionDetailField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InvestorPositionDetailField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InvestorPositionDetailField_InstrumentID, InvestorPositionDetailField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InvestorPositionDetailField_InstrumentID, sizeof(self->data.InstrumentID) );
        InvestorPositionDetailField_InstrumentID = NULL;
    }
            
    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InvestorPositionDetailField_CombInstrumentID != NULL ) {
        if(InvestorPositionDetailField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", InvestorPositionDetailField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
            return -1;
        }
        // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
        // memcpy(self->data.CombInstrumentID, InvestorPositionDetailField_CombInstrumentID, InvestorPositionDetailField_CombInstrumentID_len);        
        strncpy(self->data.CombInstrumentID, InvestorPositionDetailField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
        InvestorPositionDetailField_CombInstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInvestorPositionDetailField_dealloc(PyCThostFtdcInvestorPositionDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_repr(PyCThostFtdcInvestorPositionDetailField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:i,s:d,s:y,s:i,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:i,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:s,s:s,s:i,s:d,s:s,s:i,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:i,s:s,s:c,s:s,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"Direction", self->data.Direction 
        ,"OpenDate", self->data.OpenDate//, (Py_ssize_t)sizeof(self->data.OpenDate) 
        ,"TradeID", self->data.TradeID//, (Py_ssize_t)sizeof(self->data.TradeID) 
        ,"Volume", self->data.Volume 
        ,"OpenPrice", self->data.OpenPrice 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"TradeType", self->data.TradeType 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"CloseProfitByDate", self->data.CloseProfitByDate 
        ,"CloseProfitByTrade", self->data.CloseProfitByTrade 
        ,"PositionProfitByDate", self->data.PositionProfitByDate 
        ,"PositionProfitByTrade", self->data.PositionProfitByTrade 
        ,"Margin", self->data.Margin 
        ,"ExchMargin", self->data.ExchMargin 
        ,"MarginRateByMoney", self->data.MarginRateByMoney 
        ,"MarginRateByVolume", self->data.MarginRateByVolume 
        ,"LastSettlementPrice", self->data.LastSettlementPrice 
        ,"SettlementPrice", self->data.SettlementPrice 
        ,"CloseVolume", self->data.CloseVolume 
        ,"CloseAmount", self->data.CloseAmount 
        ,"TimeFirstVolume", self->data.TimeFirstVolume 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"SpecPosiType", self->data.SpecPosiType 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"CombInstrumentID", self->data.CombInstrumentID//, (Py_ssize_t)sizeof(self->data.CombInstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_reserve1(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInvestorPositionDetailField_set_reserve1(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_BrokerID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorPositionDetailField_set_BrokerID(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_InvestorID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorPositionDetailField_set_InvestorID(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_HedgeFlag(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInvestorPositionDetailField_set_HedgeFlag(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///买卖
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_Direction(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖
// TThostFtdcDirectionType char
static int PyCThostFtdcInvestorPositionDetailField_set_Direction(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///开仓日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_OpenDate(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OpenDate, (Py_ssize_t)sizeof(self->data.OpenDate));
    return PyBytes_FromString(self->data.OpenDate);
}

///开仓日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcInvestorPositionDetailField_set_OpenDate(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.OpenDate, 0, sizeof(self->data.OpenDate));
    // memcpy(self->data.OpenDate, buf, len);
    strncpy(self->data.OpenDate, buf, sizeof(self->data.OpenDate));
    return 0;
}
            
///成交编号
// TThostFtdcTradeIDType char[21]
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_TradeID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeID, (Py_ssize_t)sizeof(self->data.TradeID));
    return PyBytes_FromString(self->data.TradeID);
}

///成交编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcInvestorPositionDetailField_set_TradeID(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_Volume(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionDetailField_set_Volume(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
        
///开仓价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_OpenPrice(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenPrice);
}

///开仓价
// TThostFtdcPriceType double
static int PyCThostFtdcInvestorPositionDetailField_set_OpenPrice(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenPrice = buf;
    return 0;
}
        
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_TradingDay(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcInvestorPositionDetailField_set_TradingDay(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_SettlementID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcInvestorPositionDetailField_set_SettlementID(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
        
///成交类型
// TThostFtdcTradeTypeType char
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_TradeType(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TradeType), 1);
}

///成交类型
// TThostFtdcTradeTypeType char
static int PyCThostFtdcInvestorPositionDetailField_set_TradeType(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_reserve2(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInvestorPositionDetailField_set_reserve2(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_ExchangeID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorPositionDetailField_set_ExchangeID(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///逐日盯市平仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_CloseProfitByDate(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfitByDate);
}

///逐日盯市平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionDetailField_set_CloseProfitByDate(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseProfitByDate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseProfitByDate = buf;
    return 0;
}
        
///逐笔对冲平仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_CloseProfitByTrade(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfitByTrade);
}

///逐笔对冲平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionDetailField_set_CloseProfitByTrade(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseProfitByTrade Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseProfitByTrade = buf;
    return 0;
}
        
///逐日盯市持仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_PositionProfitByDate(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionProfitByDate);
}

///逐日盯市持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionDetailField_set_PositionProfitByDate(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionProfitByDate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PositionProfitByDate = buf;
    return 0;
}
        
///逐笔对冲持仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_PositionProfitByTrade(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionProfitByTrade);
}

///逐笔对冲持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionDetailField_set_PositionProfitByTrade(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionProfitByTrade Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PositionProfitByTrade = buf;
    return 0;
}
        
///投资者保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_Margin(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Margin);
}

///投资者保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionDetailField_set_Margin(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Margin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Margin = buf;
    return 0;
}
        
///交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_ExchMargin(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionDetailField_set_ExchMargin(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchMargin = buf;
    return 0;
}
        
///保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_MarginRateByMoney(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

///保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcInvestorPositionDetailField_set_MarginRateByMoney(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRateByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRateByMoney = buf;
    return 0;
}
        
///保证金率(按手数)
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_MarginRateByVolume(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

///保证金率(按手数)
// TThostFtdcRatioType double
static int PyCThostFtdcInvestorPositionDetailField_set_MarginRateByVolume(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRateByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRateByVolume = buf;
    return 0;
}
        
///昨结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_LastSettlementPrice(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LastSettlementPrice);
}

///昨结算价
// TThostFtdcPriceType double
static int PyCThostFtdcInvestorPositionDetailField_set_LastSettlementPrice(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastSettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LastSettlementPrice = buf;
    return 0;
}
        
///结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_SettlementPrice(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SettlementPrice);
}

///结算价
// TThostFtdcPriceType double
static int PyCThostFtdcInvestorPositionDetailField_set_SettlementPrice(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SettlementPrice = buf;
    return 0;
}
        
///平仓量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_CloseVolume(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CloseVolume);
#else
    return PyInt_FromLong(self->data.CloseVolume);
#endif
}

///平仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionDetailField_set_CloseVolume(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the CloseVolume value out of range for C int");
        return -1;
    }
    self->data.CloseVolume = (int)buf;
    return 0;
}
        
///平仓金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_CloseAmount(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseAmount);
}

///平仓金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionDetailField_set_CloseAmount(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseAmount = buf;
    return 0;
}
        
///先开先平剩余数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_TimeFirstVolume(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TimeFirstVolume);
#else
    return PyInt_FromLong(self->data.TimeFirstVolume);
#endif
}

///先开先平剩余数量
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionDetailField_set_TimeFirstVolume(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TimeFirstVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TimeFirstVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TimeFirstVolume value out of range for C int");
        return -1;
    }
    self->data.TimeFirstVolume = (int)buf;
    return 0;
}
        
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_InvestUnitID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInvestorPositionDetailField_set_InvestUnitID(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///特殊持仓标志
// TThostFtdcSpecPosiTypeType char
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_SpecPosiType(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SpecPosiType), 1);
}

///特殊持仓标志
// TThostFtdcSpecPosiTypeType char
static int PyCThostFtdcInvestorPositionDetailField_set_SpecPosiType(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecPosiType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SpecPosiType)) {
        PyErr_SetString(PyExc_ValueError, "SpecPosiType must be equal 1 bytes");
        return -1;
    }
    self->data.SpecPosiType = *buf;
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_InstrumentID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInvestorPositionDetailField_set_InstrumentID(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///组合合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInvestorPositionDetailField_get_CombInstrumentID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombInstrumentID, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
    return PyBytes_FromString(self->data.CombInstrumentID);
}

///组合合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInvestorPositionDetailField_set_CombInstrumentID(PyCThostFtdcInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
    // memcpy(self->data.CombInstrumentID, buf, len);
    strncpy(self->data.CombInstrumentID, buf, sizeof(self->data.CombInstrumentID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcInvestorPositionDetailField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInvestorPositionDetailField_get_reserve1, (setter)PyCThostFtdcInvestorPositionDetailField_set_reserve1, (char *)"reserve1", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorPositionDetailField_get_BrokerID, (setter)PyCThostFtdcInvestorPositionDetailField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorPositionDetailField_get_InvestorID, (setter)PyCThostFtdcInvestorPositionDetailField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorPositionDetailField_get_HedgeFlag, (setter)PyCThostFtdcInvestorPositionDetailField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///买卖 
    {(char *)"Direction", (getter)PyCThostFtdcInvestorPositionDetailField_get_Direction, (setter)PyCThostFtdcInvestorPositionDetailField_set_Direction, (char *)"Direction", NULL},
    ///开仓日期 
    {(char *)"OpenDate", (getter)PyCThostFtdcInvestorPositionDetailField_get_OpenDate, (setter)PyCThostFtdcInvestorPositionDetailField_set_OpenDate, (char *)"OpenDate", NULL},
    ///成交编号 
    {(char *)"TradeID", (getter)PyCThostFtdcInvestorPositionDetailField_get_TradeID, (setter)PyCThostFtdcInvestorPositionDetailField_set_TradeID, (char *)"TradeID", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcInvestorPositionDetailField_get_Volume, (setter)PyCThostFtdcInvestorPositionDetailField_set_Volume, (char *)"Volume", NULL},
    ///开仓价 
    {(char *)"OpenPrice", (getter)PyCThostFtdcInvestorPositionDetailField_get_OpenPrice, (setter)PyCThostFtdcInvestorPositionDetailField_set_OpenPrice, (char *)"OpenPrice", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcInvestorPositionDetailField_get_TradingDay, (setter)PyCThostFtdcInvestorPositionDetailField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcInvestorPositionDetailField_get_SettlementID, (setter)PyCThostFtdcInvestorPositionDetailField_set_SettlementID, (char *)"SettlementID", NULL},
    ///成交类型 
    {(char *)"TradeType", (getter)PyCThostFtdcInvestorPositionDetailField_get_TradeType, (setter)PyCThostFtdcInvestorPositionDetailField_set_TradeType, (char *)"TradeType", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInvestorPositionDetailField_get_reserve2, (setter)PyCThostFtdcInvestorPositionDetailField_set_reserve2, (char *)"reserve2", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorPositionDetailField_get_ExchangeID, (setter)PyCThostFtdcInvestorPositionDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///逐日盯市平仓盈亏 
    {(char *)"CloseProfitByDate", (getter)PyCThostFtdcInvestorPositionDetailField_get_CloseProfitByDate, (setter)PyCThostFtdcInvestorPositionDetailField_set_CloseProfitByDate, (char *)"CloseProfitByDate", NULL},
    ///逐笔对冲平仓盈亏 
    {(char *)"CloseProfitByTrade", (getter)PyCThostFtdcInvestorPositionDetailField_get_CloseProfitByTrade, (setter)PyCThostFtdcInvestorPositionDetailField_set_CloseProfitByTrade, (char *)"CloseProfitByTrade", NULL},
    ///逐日盯市持仓盈亏 
    {(char *)"PositionProfitByDate", (getter)PyCThostFtdcInvestorPositionDetailField_get_PositionProfitByDate, (setter)PyCThostFtdcInvestorPositionDetailField_set_PositionProfitByDate, (char *)"PositionProfitByDate", NULL},
    ///逐笔对冲持仓盈亏 
    {(char *)"PositionProfitByTrade", (getter)PyCThostFtdcInvestorPositionDetailField_get_PositionProfitByTrade, (setter)PyCThostFtdcInvestorPositionDetailField_set_PositionProfitByTrade, (char *)"PositionProfitByTrade", NULL},
    ///投资者保证金 
    {(char *)"Margin", (getter)PyCThostFtdcInvestorPositionDetailField_get_Margin, (setter)PyCThostFtdcInvestorPositionDetailField_set_Margin, (char *)"Margin", NULL},
    ///交易所保证金 
    {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorPositionDetailField_get_ExchMargin, (setter)PyCThostFtdcInvestorPositionDetailField_set_ExchMargin, (char *)"ExchMargin", NULL},
    ///保证金率 
    {(char *)"MarginRateByMoney", (getter)PyCThostFtdcInvestorPositionDetailField_get_MarginRateByMoney, (setter)PyCThostFtdcInvestorPositionDetailField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
    ///保证金率(按手数) 
    {(char *)"MarginRateByVolume", (getter)PyCThostFtdcInvestorPositionDetailField_get_MarginRateByVolume, (setter)PyCThostFtdcInvestorPositionDetailField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
    ///昨结算价 
    {(char *)"LastSettlementPrice", (getter)PyCThostFtdcInvestorPositionDetailField_get_LastSettlementPrice, (setter)PyCThostFtdcInvestorPositionDetailField_set_LastSettlementPrice, (char *)"LastSettlementPrice", NULL},
    ///结算价 
    {(char *)"SettlementPrice", (getter)PyCThostFtdcInvestorPositionDetailField_get_SettlementPrice, (setter)PyCThostFtdcInvestorPositionDetailField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
    ///平仓量 
    {(char *)"CloseVolume", (getter)PyCThostFtdcInvestorPositionDetailField_get_CloseVolume, (setter)PyCThostFtdcInvestorPositionDetailField_set_CloseVolume, (char *)"CloseVolume", NULL},
    ///平仓金额 
    {(char *)"CloseAmount", (getter)PyCThostFtdcInvestorPositionDetailField_get_CloseAmount, (setter)PyCThostFtdcInvestorPositionDetailField_set_CloseAmount, (char *)"CloseAmount", NULL},
    ///先开先平剩余数量 
    {(char *)"TimeFirstVolume", (getter)PyCThostFtdcInvestorPositionDetailField_get_TimeFirstVolume, (setter)PyCThostFtdcInvestorPositionDetailField_set_TimeFirstVolume, (char *)"TimeFirstVolume", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInvestorPositionDetailField_get_InvestUnitID, (setter)PyCThostFtdcInvestorPositionDetailField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///特殊持仓标志 
    {(char *)"SpecPosiType", (getter)PyCThostFtdcInvestorPositionDetailField_get_SpecPosiType, (setter)PyCThostFtdcInvestorPositionDetailField_set_SpecPosiType, (char *)"SpecPosiType", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInvestorPositionDetailField_get_InstrumentID, (setter)PyCThostFtdcInvestorPositionDetailField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///组合合约代码 
    {(char *)"CombInstrumentID", (getter)PyCThostFtdcInvestorPositionDetailField_get_CombInstrumentID, (setter)PyCThostFtdcInvestorPositionDetailField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorPositionDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorPositionDetailField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorPositionDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorPositionDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorPositionDetailField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorPositionDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorPositionDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorPositionDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorPositionDetailField_new,       /* tp_new */
};

int PyCThostFtdcInvestorPositionDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorPositionDetailField  */
	if (PyType_Ready(&PyCThostFtdcInvestorPositionDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorPositionDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorPositionDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorPositionDetailField", (PyObject *)&PyCThostFtdcInvestorPositionDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPositionDetailField to module");
        Py_DECREF(&PyCThostFtdcInvestorPositionDetailFieldType);
		return -1;
    }

    return 0;
}
