
#include "PyCThostFtdcSyncDeltaInvstPosDtlField.h"

///风险结算追平持仓明细

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInvstPosDtlField *self = (PyCThostFtdcSyncDeltaInvstPosDtlField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_init(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "BrokerID", "InvestorID", "HedgeFlag", "Direction", "OpenDate", "TradeID", "Volume", "OpenPrice", "TradingDay", "SettlementID", "TradeType", "CombInstrumentID", "ExchangeID", "CloseProfitByDate", "CloseProfitByTrade", "PositionProfitByDate", "PositionProfitByTrade", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LastSettlementPrice", "SettlementPrice", "CloseVolume", "CloseAmount", "TimeFirstVolume", "SpecPosiType", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaInvstPosDtlField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaInvstPosDtlField_InstrumentID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaInvstPosDtlField_BrokerID = NULL;
    Py_ssize_t SyncDeltaInvstPosDtlField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDeltaInvstPosDtlField_InvestorID = NULL;
    Py_ssize_t SyncDeltaInvstPosDtlField_InvestorID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char SyncDeltaInvstPosDtlField_HedgeFlag = 0;
            
    ///买卖
    // TThostFtdcDirectionType char
    char SyncDeltaInvstPosDtlField_Direction = 0;
            
    ///开仓日期
    // TThostFtdcDateType char[9]
    const char *SyncDeltaInvstPosDtlField_OpenDate = NULL;
    Py_ssize_t SyncDeltaInvstPosDtlField_OpenDate_len = 0;
            
    ///成交编号
    // TThostFtdcTradeIDType char[21]
    const char *SyncDeltaInvstPosDtlField_TradeID = NULL;
    Py_ssize_t SyncDeltaInvstPosDtlField_TradeID_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int SyncDeltaInvstPosDtlField_Volume = 0;
        
    ///开仓价
    // TThostFtdcPriceType double
    double SyncDeltaInvstPosDtlField_OpenPrice = 0.0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaInvstPosDtlField_TradingDay = NULL;
    Py_ssize_t SyncDeltaInvstPosDtlField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int SyncDeltaInvstPosDtlField_SettlementID = 0;
        
    ///成交类型
    // TThostFtdcTradeTypeType char
    char SyncDeltaInvstPosDtlField_TradeType = 0;
            
    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaInvstPosDtlField_CombInstrumentID = NULL;
    Py_ssize_t SyncDeltaInvstPosDtlField_CombInstrumentID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaInvstPosDtlField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaInvstPosDtlField_ExchangeID_len = 0;
            
    ///逐日盯市平仓盈亏
    // TThostFtdcMoneyType double
    double SyncDeltaInvstPosDtlField_CloseProfitByDate = 0.0;
        
    ///逐笔对冲平仓盈亏
    // TThostFtdcMoneyType double
    double SyncDeltaInvstPosDtlField_CloseProfitByTrade = 0.0;
        
    ///逐日盯市持仓盈亏
    // TThostFtdcMoneyType double
    double SyncDeltaInvstPosDtlField_PositionProfitByDate = 0.0;
        
    ///逐笔对冲持仓盈亏
    // TThostFtdcMoneyType double
    double SyncDeltaInvstPosDtlField_PositionProfitByTrade = 0.0;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    double SyncDeltaInvstPosDtlField_Margin = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double SyncDeltaInvstPosDtlField_ExchMargin = 0.0;
        
    ///保证金率
    // TThostFtdcRatioType double
    double SyncDeltaInvstPosDtlField_MarginRateByMoney = 0.0;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    double SyncDeltaInvstPosDtlField_MarginRateByVolume = 0.0;
        
    ///昨结算价
    // TThostFtdcPriceType double
    double SyncDeltaInvstPosDtlField_LastSettlementPrice = 0.0;
        
    ///结算价
    // TThostFtdcPriceType double
    double SyncDeltaInvstPosDtlField_SettlementPrice = 0.0;
        
    ///平仓量
    // TThostFtdcVolumeType int
    int SyncDeltaInvstPosDtlField_CloseVolume = 0;
        
    ///平仓金额
    // TThostFtdcMoneyType double
    double SyncDeltaInvstPosDtlField_CloseAmount = 0.0;
        
    ///先开先平剩余数量
    // TThostFtdcVolumeType int
    int SyncDeltaInvstPosDtlField_TimeFirstVolume = 0;
        
    ///特殊持仓标志
    // TThostFtdcSpecPosiTypeType char
    char SyncDeltaInvstPosDtlField_SpecPosiType = 0;
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaInvstPosDtlField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaInvstPosDtlField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccy#y#idy#icy#y#ddddddddddidicci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ccs#s#ids#ics#s#ddddddddddidicci", (char **)kwlist
#endif

        , &SyncDeltaInvstPosDtlField_InstrumentID, &SyncDeltaInvstPosDtlField_InstrumentID_len 
        , &SyncDeltaInvstPosDtlField_BrokerID, &SyncDeltaInvstPosDtlField_BrokerID_len 
        , &SyncDeltaInvstPosDtlField_InvestorID, &SyncDeltaInvstPosDtlField_InvestorID_len 
        , &SyncDeltaInvstPosDtlField_HedgeFlag 
        , &SyncDeltaInvstPosDtlField_Direction 
        , &SyncDeltaInvstPosDtlField_OpenDate, &SyncDeltaInvstPosDtlField_OpenDate_len 
        , &SyncDeltaInvstPosDtlField_TradeID, &SyncDeltaInvstPosDtlField_TradeID_len 
        , &SyncDeltaInvstPosDtlField_Volume 
        , &SyncDeltaInvstPosDtlField_OpenPrice 
        , &SyncDeltaInvstPosDtlField_TradingDay, &SyncDeltaInvstPosDtlField_TradingDay_len 
        , &SyncDeltaInvstPosDtlField_SettlementID 
        , &SyncDeltaInvstPosDtlField_TradeType 
        , &SyncDeltaInvstPosDtlField_CombInstrumentID, &SyncDeltaInvstPosDtlField_CombInstrumentID_len 
        , &SyncDeltaInvstPosDtlField_ExchangeID, &SyncDeltaInvstPosDtlField_ExchangeID_len 
        , &SyncDeltaInvstPosDtlField_CloseProfitByDate 
        , &SyncDeltaInvstPosDtlField_CloseProfitByTrade 
        , &SyncDeltaInvstPosDtlField_PositionProfitByDate 
        , &SyncDeltaInvstPosDtlField_PositionProfitByTrade 
        , &SyncDeltaInvstPosDtlField_Margin 
        , &SyncDeltaInvstPosDtlField_ExchMargin 
        , &SyncDeltaInvstPosDtlField_MarginRateByMoney 
        , &SyncDeltaInvstPosDtlField_MarginRateByVolume 
        , &SyncDeltaInvstPosDtlField_LastSettlementPrice 
        , &SyncDeltaInvstPosDtlField_SettlementPrice 
        , &SyncDeltaInvstPosDtlField_CloseVolume 
        , &SyncDeltaInvstPosDtlField_CloseAmount 
        , &SyncDeltaInvstPosDtlField_TimeFirstVolume 
        , &SyncDeltaInvstPosDtlField_SpecPosiType 
        , &SyncDeltaInvstPosDtlField_ActionDirection 
        , &SyncDeltaInvstPosDtlField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaInvstPosDtlField_InstrumentID != NULL ) {
        if(SyncDeltaInvstPosDtlField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosDtlField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaInvstPosDtlField_InstrumentID, SyncDeltaInvstPosDtlField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaInvstPosDtlField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaInvstPosDtlField_InstrumentID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaInvstPosDtlField_BrokerID != NULL ) {
        if(SyncDeltaInvstPosDtlField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosDtlField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaInvstPosDtlField_BrokerID, SyncDeltaInvstPosDtlField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaInvstPosDtlField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaInvstPosDtlField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDeltaInvstPosDtlField_InvestorID != NULL ) {
        if(SyncDeltaInvstPosDtlField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosDtlField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDeltaInvstPosDtlField_InvestorID, SyncDeltaInvstPosDtlField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDeltaInvstPosDtlField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDeltaInvstPosDtlField_InvestorID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = SyncDeltaInvstPosDtlField_HedgeFlag;
            
    ///买卖
    // TThostFtdcDirectionType char
    self->data.Direction = SyncDeltaInvstPosDtlField_Direction;
            
    ///开仓日期
    // TThostFtdcDateType char[9]
    if( SyncDeltaInvstPosDtlField_OpenDate != NULL ) {
        if(SyncDeltaInvstPosDtlField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosDtlField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
            return -1;
        }
        // memset(self->data.OpenDate, 0, sizeof(self->data.OpenDate));
        // memcpy(self->data.OpenDate, SyncDeltaInvstPosDtlField_OpenDate, SyncDeltaInvstPosDtlField_OpenDate_len);        
        strncpy(self->data.OpenDate, SyncDeltaInvstPosDtlField_OpenDate, sizeof(self->data.OpenDate) );
        SyncDeltaInvstPosDtlField_OpenDate = NULL;
    }
            
    ///成交编号
    // TThostFtdcTradeIDType char[21]
    if( SyncDeltaInvstPosDtlField_TradeID != NULL ) {
        if(SyncDeltaInvstPosDtlField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosDtlField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
            return -1;
        }
        // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
        // memcpy(self->data.TradeID, SyncDeltaInvstPosDtlField_TradeID, SyncDeltaInvstPosDtlField_TradeID_len);        
        strncpy(self->data.TradeID, SyncDeltaInvstPosDtlField_TradeID, sizeof(self->data.TradeID) );
        SyncDeltaInvstPosDtlField_TradeID = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = SyncDeltaInvstPosDtlField_Volume;
        
    ///开仓价
    // TThostFtdcPriceType double
    self->data.OpenPrice = SyncDeltaInvstPosDtlField_OpenPrice;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaInvstPosDtlField_TradingDay != NULL ) {
        if(SyncDeltaInvstPosDtlField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosDtlField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaInvstPosDtlField_TradingDay, SyncDeltaInvstPosDtlField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaInvstPosDtlField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaInvstPosDtlField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = SyncDeltaInvstPosDtlField_SettlementID;
        
    ///成交类型
    // TThostFtdcTradeTypeType char
    self->data.TradeType = SyncDeltaInvstPosDtlField_TradeType;
            
    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaInvstPosDtlField_CombInstrumentID != NULL ) {
        if(SyncDeltaInvstPosDtlField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosDtlField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
            return -1;
        }
        // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
        // memcpy(self->data.CombInstrumentID, SyncDeltaInvstPosDtlField_CombInstrumentID, SyncDeltaInvstPosDtlField_CombInstrumentID_len);        
        strncpy(self->data.CombInstrumentID, SyncDeltaInvstPosDtlField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
        SyncDeltaInvstPosDtlField_CombInstrumentID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaInvstPosDtlField_ExchangeID != NULL ) {
        if(SyncDeltaInvstPosDtlField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosDtlField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaInvstPosDtlField_ExchangeID, SyncDeltaInvstPosDtlField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaInvstPosDtlField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaInvstPosDtlField_ExchangeID = NULL;
    }
            
    ///逐日盯市平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfitByDate = SyncDeltaInvstPosDtlField_CloseProfitByDate;
        
    ///逐笔对冲平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfitByTrade = SyncDeltaInvstPosDtlField_CloseProfitByTrade;
        
    ///逐日盯市持仓盈亏
    // TThostFtdcMoneyType double
    self->data.PositionProfitByDate = SyncDeltaInvstPosDtlField_PositionProfitByDate;
        
    ///逐笔对冲持仓盈亏
    // TThostFtdcMoneyType double
    self->data.PositionProfitByTrade = SyncDeltaInvstPosDtlField_PositionProfitByTrade;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    self->data.Margin = SyncDeltaInvstPosDtlField_Margin;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchMargin = SyncDeltaInvstPosDtlField_ExchMargin;
        
    ///保证金率
    // TThostFtdcRatioType double
    self->data.MarginRateByMoney = SyncDeltaInvstPosDtlField_MarginRateByMoney;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    self->data.MarginRateByVolume = SyncDeltaInvstPosDtlField_MarginRateByVolume;
        
    ///昨结算价
    // TThostFtdcPriceType double
    self->data.LastSettlementPrice = SyncDeltaInvstPosDtlField_LastSettlementPrice;
        
    ///结算价
    // TThostFtdcPriceType double
    self->data.SettlementPrice = SyncDeltaInvstPosDtlField_SettlementPrice;
        
    ///平仓量
    // TThostFtdcVolumeType int
    self->data.CloseVolume = SyncDeltaInvstPosDtlField_CloseVolume;
        
    ///平仓金额
    // TThostFtdcMoneyType double
    self->data.CloseAmount = SyncDeltaInvstPosDtlField_CloseAmount;
        
    ///先开先平剩余数量
    // TThostFtdcVolumeType int
    self->data.TimeFirstVolume = SyncDeltaInvstPosDtlField_TimeFirstVolume;
        
    ///特殊持仓标志
    // TThostFtdcSpecPosiTypeType char
    self->data.SpecPosiType = SyncDeltaInvstPosDtlField_SpecPosiType;
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaInvstPosDtlField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaInvstPosDtlField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaInvstPosDtlField_dealloc(PyCThostFtdcSyncDeltaInvstPosDtlField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_repr(PyCThostFtdcSyncDeltaInvstPosDtlField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:i,s:d,s:y,s:i,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:i,s:c,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:s,s:s,s:i,s:d,s:s,s:i,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:i,s:c,s:c,s:i}"
#endif

        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
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
        ,"CombInstrumentID", self->data.CombInstrumentID//, (Py_ssize_t)sizeof(self->data.CombInstrumentID) 
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
        ,"SpecPosiType", self->data.SpecPosiType 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstPosDtlField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_InstrumentID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_InstrumentID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_BrokerID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_BrokerID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_InvestorID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_InvestorID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_HedgeFlag(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_HedgeFlag(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_Direction(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖
// TThostFtdcDirectionType char
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_Direction(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_OpenDate(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OpenDate, (Py_ssize_t)sizeof(self->data.OpenDate));
    return PyBytes_FromString(self->data.OpenDate);
}

///开仓日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_OpenDate(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradeID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeID, (Py_ssize_t)sizeof(self->data.TradeID));
    return PyBytes_FromString(self->data.TradeID);
}

///成交编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradeID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_Volume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_Volume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_OpenPrice(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenPrice);
}

///开仓价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_OpenPrice(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradingDay(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradingDay(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_SettlementID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_SettlementID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradeType(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TradeType), 1);
}

///成交类型
// TThostFtdcTradeTypeType char
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradeType(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
            
///组合合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_CombInstrumentID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombInstrumentID, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
    return PyBytes_FromString(self->data.CombInstrumentID);
}

///组合合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_CombInstrumentID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_ExchangeID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_ExchangeID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseProfitByDate(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfitByDate);
}

///逐日盯市平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseProfitByDate(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseProfitByTrade(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfitByTrade);
}

///逐笔对冲平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseProfitByTrade(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_PositionProfitByDate(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionProfitByDate);
}

///逐日盯市持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_PositionProfitByDate(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_PositionProfitByTrade(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionProfitByTrade);
}

///逐笔对冲持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_PositionProfitByTrade(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_Margin(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Margin);
}

///投资者保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_Margin(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_ExchMargin(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_ExchMargin(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_MarginRateByMoney(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

///保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_MarginRateByMoney(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_MarginRateByVolume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

///保证金率(按手数)
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_MarginRateByVolume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_LastSettlementPrice(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LastSettlementPrice);
}

///昨结算价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_LastSettlementPrice(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_SettlementPrice(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SettlementPrice);
}

///结算价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_SettlementPrice(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseVolume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CloseVolume);
#else
    return PyInt_FromLong(self->data.CloseVolume);
#endif
}

///平仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseVolume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseAmount(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseAmount);
}

///平仓金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseAmount(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_TimeFirstVolume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TimeFirstVolume);
#else
    return PyInt_FromLong(self->data.TimeFirstVolume);
#endif
}

///先开先平剩余数量
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_TimeFirstVolume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
        
///特殊持仓标志
// TThostFtdcSpecPosiTypeType char
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_SpecPosiType(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SpecPosiType), 1);
}

///特殊持仓标志
// TThostFtdcSpecPosiTypeType char
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_SpecPosiType(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
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
            
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_ActionDirection(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_ActionDirection(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    self->data.ActionDirection = *buf;
    return 0;
}
            
///追平序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SyncDeltaSequenceNo value out of range for C int");
        return -1;
    }
    self->data.SyncDeltaSequenceNo = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSyncDeltaInvstPosDtlField_getset[] = {
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///买卖 
    {(char *)"Direction", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_Direction, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_Direction, (char *)"Direction", NULL},
    ///开仓日期 
    {(char *)"OpenDate", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_OpenDate, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_OpenDate, (char *)"OpenDate", NULL},
    ///成交编号 
    {(char *)"TradeID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradeID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradeID, (char *)"TradeID", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_Volume, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_Volume, (char *)"Volume", NULL},
    ///开仓价 
    {(char *)"OpenPrice", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_OpenPrice, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_OpenPrice, (char *)"OpenPrice", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_SettlementID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_SettlementID, (char *)"SettlementID", NULL},
    ///成交类型 
    {(char *)"TradeType", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradeType, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradeType, (char *)"TradeType", NULL},
    ///组合合约代码 
    {(char *)"CombInstrumentID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_CombInstrumentID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///逐日盯市平仓盈亏 
    {(char *)"CloseProfitByDate", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseProfitByDate, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseProfitByDate, (char *)"CloseProfitByDate", NULL},
    ///逐笔对冲平仓盈亏 
    {(char *)"CloseProfitByTrade", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseProfitByTrade, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseProfitByTrade, (char *)"CloseProfitByTrade", NULL},
    ///逐日盯市持仓盈亏 
    {(char *)"PositionProfitByDate", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_PositionProfitByDate, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_PositionProfitByDate, (char *)"PositionProfitByDate", NULL},
    ///逐笔对冲持仓盈亏 
    {(char *)"PositionProfitByTrade", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_PositionProfitByTrade, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_PositionProfitByTrade, (char *)"PositionProfitByTrade", NULL},
    ///投资者保证金 
    {(char *)"Margin", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_Margin, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_Margin, (char *)"Margin", NULL},
    ///交易所保证金 
    {(char *)"ExchMargin", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_ExchMargin, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_ExchMargin, (char *)"ExchMargin", NULL},
    ///保证金率 
    {(char *)"MarginRateByMoney", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_MarginRateByMoney, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
    ///保证金率(按手数) 
    {(char *)"MarginRateByVolume", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_MarginRateByVolume, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
    ///昨结算价 
    {(char *)"LastSettlementPrice", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_LastSettlementPrice, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_LastSettlementPrice, (char *)"LastSettlementPrice", NULL},
    ///结算价 
    {(char *)"SettlementPrice", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_SettlementPrice, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
    ///平仓量 
    {(char *)"CloseVolume", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseVolume, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseVolume, (char *)"CloseVolume", NULL},
    ///平仓金额 
    {(char *)"CloseAmount", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseAmount, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseAmount, (char *)"CloseAmount", NULL},
    ///先开先平剩余数量 
    {(char *)"TimeFirstVolume", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_TimeFirstVolume, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_TimeFirstVolume, (char *)"TimeFirstVolume", NULL},
    ///特殊持仓标志 
    {(char *)"SpecPosiType", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_SpecPosiType, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_SpecPosiType, (char *)"SpecPosiType", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInvstPosDtlFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInvstPosDtlField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInvstPosDtlField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInvstPosDtlField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInvstPosDtlField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInvstPosDtlField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInvstPosDtlField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInvstPosDtlField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInvstPosDtlField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInvstPosDtlField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInvstPosDtlFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInvstPosDtlField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInvstPosDtlFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstPosDtlField", (PyObject *)&PyCThostFtdcSyncDeltaInvstPosDtlFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstPosDtlField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInvstPosDtlFieldType);
		return -1;
    }

    return 0;
}
