
#include "PyCThostFtdcRiskSettleInvstPositionField.h"

///投资者风险结算持仓

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRiskSettleInvstPositionField *self = (PyCThostFtdcRiskSettleInvstPositionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRiskSettleInvstPositionField_init(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "BrokerID", "InvestorID", "PosiDirection", "HedgeFlag", "PositionDate", "YdPosition", "Position", "LongFrozen", "ShortFrozen", "LongFrozenAmount", "ShortFrozenAmount", "OpenVolume", "CloseVolume", "OpenAmount", "CloseAmount", "PositionCost", "PreMargin", "UseMargin", "FrozenMargin", "FrozenCash", "FrozenCommission", "CashIn", "Commission", "CloseProfit", "PositionProfit", "PreSettlementPrice", "SettlementPrice", "TradingDay", "SettlementID", "OpenCost", "ExchangeMargin", "CombPosition", "CombLongFrozen", "CombShortFrozen", "CloseProfitByDate", "CloseProfitByTrade", "TodayPosition", "MarginRateByMoney", "MarginRateByVolume", "StrikeFrozen", "StrikeFrozenAmount", "AbandonFrozen", "ExchangeID", "YdStrikeFrozen", "InvestUnitID", "PositionCostOffset", "TasPosition", "TasPositionCost",  NULL};


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *RiskSettleInvstPositionField_InstrumentID = NULL;
    Py_ssize_t RiskSettleInvstPositionField_InstrumentID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *RiskSettleInvstPositionField_BrokerID = NULL;
    Py_ssize_t RiskSettleInvstPositionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *RiskSettleInvstPositionField_InvestorID = NULL;
    Py_ssize_t RiskSettleInvstPositionField_InvestorID_len = 0;
            
    ///持仓多空方向
    // TThostFtdcPosiDirectionType char
    char RiskSettleInvstPositionField_PosiDirection = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char RiskSettleInvstPositionField_HedgeFlag = 0;
            
    ///持仓日期
    // TThostFtdcPositionDateType char
    char RiskSettleInvstPositionField_PositionDate = 0;
            
    ///上日持仓
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_YdPosition = 0;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_Position = 0;
        
    ///多头冻结
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_LongFrozen = 0;
        
    ///空头冻结
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_ShortFrozen = 0;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_LongFrozenAmount = 0.0;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_ShortFrozenAmount = 0.0;
        
    ///开仓量
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_OpenVolume = 0;
        
    ///平仓量
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_CloseVolume = 0;
        
    ///开仓金额
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_OpenAmount = 0.0;
        
    ///平仓金额
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_CloseAmount = 0.0;
        
    ///持仓成本
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_PositionCost = 0.0;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_PreMargin = 0.0;
        
    ///占用的保证金
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_UseMargin = 0.0;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_FrozenMargin = 0.0;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_FrozenCash = 0.0;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_FrozenCommission = 0.0;
        
    ///资金差额
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_CashIn = 0.0;
        
    ///手续费
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_Commission = 0.0;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_CloseProfit = 0.0;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_PositionProfit = 0.0;
        
    ///上次结算价
    // TThostFtdcPriceType double
    double RiskSettleInvstPositionField_PreSettlementPrice = 0.0;
        
    ///本次结算价
    // TThostFtdcPriceType double
    double RiskSettleInvstPositionField_SettlementPrice = 0.0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *RiskSettleInvstPositionField_TradingDay = NULL;
    Py_ssize_t RiskSettleInvstPositionField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int RiskSettleInvstPositionField_SettlementID = 0;
        
    ///开仓成本
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_OpenCost = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_ExchangeMargin = 0.0;
        
    ///组合成交形成的持仓
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_CombPosition = 0;
        
    ///组合多头冻结
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_CombLongFrozen = 0;
        
    ///组合空头冻结
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_CombShortFrozen = 0;
        
    ///逐日盯市平仓盈亏
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_CloseProfitByDate = 0.0;
        
    ///逐笔对冲平仓盈亏
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_CloseProfitByTrade = 0.0;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_TodayPosition = 0;
        
    ///保证金率
    // TThostFtdcRatioType double
    double RiskSettleInvstPositionField_MarginRateByMoney = 0.0;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    double RiskSettleInvstPositionField_MarginRateByVolume = 0.0;
        
    ///执行冻结
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_StrikeFrozen = 0;
        
    ///执行冻结金额
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_StrikeFrozenAmount = 0.0;
        
    ///放弃执行冻结
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_AbandonFrozen = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *RiskSettleInvstPositionField_ExchangeID = NULL;
    Py_ssize_t RiskSettleInvstPositionField_ExchangeID_len = 0;
            
    ///执行冻结的昨仓
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_YdStrikeFrozen = 0;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *RiskSettleInvstPositionField_InvestUnitID = NULL;
    Py_ssize_t RiskSettleInvstPositionField_InvestUnitID_len = 0;
            
    ///持仓成本差值
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_PositionCostOffset = 0.0;
        
    ///tas持仓手数
    // TThostFtdcVolumeType int
    int RiskSettleInvstPositionField_TasPosition = 0;
        
    ///tas持仓成本
    // TThostFtdcMoneyType double
    double RiskSettleInvstPositionField_TasPositionCost = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccciiiiddiiddddddddddddddy#iddiiiddiddidiy#iy#did", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ccciiiiddiidddddddddddddds#iddiiiddiddidis#is#did", (char **)kwlist
#endif

        , &RiskSettleInvstPositionField_InstrumentID, &RiskSettleInvstPositionField_InstrumentID_len 
        , &RiskSettleInvstPositionField_BrokerID, &RiskSettleInvstPositionField_BrokerID_len 
        , &RiskSettleInvstPositionField_InvestorID, &RiskSettleInvstPositionField_InvestorID_len 
        , &RiskSettleInvstPositionField_PosiDirection 
        , &RiskSettleInvstPositionField_HedgeFlag 
        , &RiskSettleInvstPositionField_PositionDate 
        , &RiskSettleInvstPositionField_YdPosition 
        , &RiskSettleInvstPositionField_Position 
        , &RiskSettleInvstPositionField_LongFrozen 
        , &RiskSettleInvstPositionField_ShortFrozen 
        , &RiskSettleInvstPositionField_LongFrozenAmount 
        , &RiskSettleInvstPositionField_ShortFrozenAmount 
        , &RiskSettleInvstPositionField_OpenVolume 
        , &RiskSettleInvstPositionField_CloseVolume 
        , &RiskSettleInvstPositionField_OpenAmount 
        , &RiskSettleInvstPositionField_CloseAmount 
        , &RiskSettleInvstPositionField_PositionCost 
        , &RiskSettleInvstPositionField_PreMargin 
        , &RiskSettleInvstPositionField_UseMargin 
        , &RiskSettleInvstPositionField_FrozenMargin 
        , &RiskSettleInvstPositionField_FrozenCash 
        , &RiskSettleInvstPositionField_FrozenCommission 
        , &RiskSettleInvstPositionField_CashIn 
        , &RiskSettleInvstPositionField_Commission 
        , &RiskSettleInvstPositionField_CloseProfit 
        , &RiskSettleInvstPositionField_PositionProfit 
        , &RiskSettleInvstPositionField_PreSettlementPrice 
        , &RiskSettleInvstPositionField_SettlementPrice 
        , &RiskSettleInvstPositionField_TradingDay, &RiskSettleInvstPositionField_TradingDay_len 
        , &RiskSettleInvstPositionField_SettlementID 
        , &RiskSettleInvstPositionField_OpenCost 
        , &RiskSettleInvstPositionField_ExchangeMargin 
        , &RiskSettleInvstPositionField_CombPosition 
        , &RiskSettleInvstPositionField_CombLongFrozen 
        , &RiskSettleInvstPositionField_CombShortFrozen 
        , &RiskSettleInvstPositionField_CloseProfitByDate 
        , &RiskSettleInvstPositionField_CloseProfitByTrade 
        , &RiskSettleInvstPositionField_TodayPosition 
        , &RiskSettleInvstPositionField_MarginRateByMoney 
        , &RiskSettleInvstPositionField_MarginRateByVolume 
        , &RiskSettleInvstPositionField_StrikeFrozen 
        , &RiskSettleInvstPositionField_StrikeFrozenAmount 
        , &RiskSettleInvstPositionField_AbandonFrozen 
        , &RiskSettleInvstPositionField_ExchangeID, &RiskSettleInvstPositionField_ExchangeID_len 
        , &RiskSettleInvstPositionField_YdStrikeFrozen 
        , &RiskSettleInvstPositionField_InvestUnitID, &RiskSettleInvstPositionField_InvestUnitID_len 
        , &RiskSettleInvstPositionField_PositionCostOffset 
        , &RiskSettleInvstPositionField_TasPosition 
        , &RiskSettleInvstPositionField_TasPositionCost 


    )) {
        return -1;
    }


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( RiskSettleInvstPositionField_InstrumentID != NULL ) {
        if(RiskSettleInvstPositionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", RiskSettleInvstPositionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, RiskSettleInvstPositionField_InstrumentID, RiskSettleInvstPositionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, RiskSettleInvstPositionField_InstrumentID, sizeof(self->data.InstrumentID) );
        RiskSettleInvstPositionField_InstrumentID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( RiskSettleInvstPositionField_BrokerID != NULL ) {
        if(RiskSettleInvstPositionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RiskSettleInvstPositionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RiskSettleInvstPositionField_BrokerID, RiskSettleInvstPositionField_BrokerID_len);        
        strncpy(self->data.BrokerID, RiskSettleInvstPositionField_BrokerID, sizeof(self->data.BrokerID) );
        RiskSettleInvstPositionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( RiskSettleInvstPositionField_InvestorID != NULL ) {
        if(RiskSettleInvstPositionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", RiskSettleInvstPositionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, RiskSettleInvstPositionField_InvestorID, RiskSettleInvstPositionField_InvestorID_len);        
        strncpy(self->data.InvestorID, RiskSettleInvstPositionField_InvestorID, sizeof(self->data.InvestorID) );
        RiskSettleInvstPositionField_InvestorID = NULL;
    }
            
    ///持仓多空方向
    // TThostFtdcPosiDirectionType char
    self->data.PosiDirection = RiskSettleInvstPositionField_PosiDirection;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = RiskSettleInvstPositionField_HedgeFlag;
            
    ///持仓日期
    // TThostFtdcPositionDateType char
    self->data.PositionDate = RiskSettleInvstPositionField_PositionDate;
            
    ///上日持仓
    // TThostFtdcVolumeType int
    self->data.YdPosition = RiskSettleInvstPositionField_YdPosition;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    self->data.Position = RiskSettleInvstPositionField_Position;
        
    ///多头冻结
    // TThostFtdcVolumeType int
    self->data.LongFrozen = RiskSettleInvstPositionField_LongFrozen;
        
    ///空头冻结
    // TThostFtdcVolumeType int
    self->data.ShortFrozen = RiskSettleInvstPositionField_ShortFrozen;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    self->data.LongFrozenAmount = RiskSettleInvstPositionField_LongFrozenAmount;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    self->data.ShortFrozenAmount = RiskSettleInvstPositionField_ShortFrozenAmount;
        
    ///开仓量
    // TThostFtdcVolumeType int
    self->data.OpenVolume = RiskSettleInvstPositionField_OpenVolume;
        
    ///平仓量
    // TThostFtdcVolumeType int
    self->data.CloseVolume = RiskSettleInvstPositionField_CloseVolume;
        
    ///开仓金额
    // TThostFtdcMoneyType double
    self->data.OpenAmount = RiskSettleInvstPositionField_OpenAmount;
        
    ///平仓金额
    // TThostFtdcMoneyType double
    self->data.CloseAmount = RiskSettleInvstPositionField_CloseAmount;
        
    ///持仓成本
    // TThostFtdcMoneyType double
    self->data.PositionCost = RiskSettleInvstPositionField_PositionCost;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    self->data.PreMargin = RiskSettleInvstPositionField_PreMargin;
        
    ///占用的保证金
    // TThostFtdcMoneyType double
    self->data.UseMargin = RiskSettleInvstPositionField_UseMargin;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    self->data.FrozenMargin = RiskSettleInvstPositionField_FrozenMargin;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    self->data.FrozenCash = RiskSettleInvstPositionField_FrozenCash;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    self->data.FrozenCommission = RiskSettleInvstPositionField_FrozenCommission;
        
    ///资金差额
    // TThostFtdcMoneyType double
    self->data.CashIn = RiskSettleInvstPositionField_CashIn;
        
    ///手续费
    // TThostFtdcMoneyType double
    self->data.Commission = RiskSettleInvstPositionField_Commission;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfit = RiskSettleInvstPositionField_CloseProfit;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    self->data.PositionProfit = RiskSettleInvstPositionField_PositionProfit;
        
    ///上次结算价
    // TThostFtdcPriceType double
    self->data.PreSettlementPrice = RiskSettleInvstPositionField_PreSettlementPrice;
        
    ///本次结算价
    // TThostFtdcPriceType double
    self->data.SettlementPrice = RiskSettleInvstPositionField_SettlementPrice;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( RiskSettleInvstPositionField_TradingDay != NULL ) {
        if(RiskSettleInvstPositionField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RiskSettleInvstPositionField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RiskSettleInvstPositionField_TradingDay, RiskSettleInvstPositionField_TradingDay_len);        
        strncpy(self->data.TradingDay, RiskSettleInvstPositionField_TradingDay, sizeof(self->data.TradingDay) );
        RiskSettleInvstPositionField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = RiskSettleInvstPositionField_SettlementID;
        
    ///开仓成本
    // TThostFtdcMoneyType double
    self->data.OpenCost = RiskSettleInvstPositionField_OpenCost;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchangeMargin = RiskSettleInvstPositionField_ExchangeMargin;
        
    ///组合成交形成的持仓
    // TThostFtdcVolumeType int
    self->data.CombPosition = RiskSettleInvstPositionField_CombPosition;
        
    ///组合多头冻结
    // TThostFtdcVolumeType int
    self->data.CombLongFrozen = RiskSettleInvstPositionField_CombLongFrozen;
        
    ///组合空头冻结
    // TThostFtdcVolumeType int
    self->data.CombShortFrozen = RiskSettleInvstPositionField_CombShortFrozen;
        
    ///逐日盯市平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfitByDate = RiskSettleInvstPositionField_CloseProfitByDate;
        
    ///逐笔对冲平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfitByTrade = RiskSettleInvstPositionField_CloseProfitByTrade;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    self->data.TodayPosition = RiskSettleInvstPositionField_TodayPosition;
        
    ///保证金率
    // TThostFtdcRatioType double
    self->data.MarginRateByMoney = RiskSettleInvstPositionField_MarginRateByMoney;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    self->data.MarginRateByVolume = RiskSettleInvstPositionField_MarginRateByVolume;
        
    ///执行冻结
    // TThostFtdcVolumeType int
    self->data.StrikeFrozen = RiskSettleInvstPositionField_StrikeFrozen;
        
    ///执行冻结金额
    // TThostFtdcMoneyType double
    self->data.StrikeFrozenAmount = RiskSettleInvstPositionField_StrikeFrozenAmount;
        
    ///放弃执行冻结
    // TThostFtdcVolumeType int
    self->data.AbandonFrozen = RiskSettleInvstPositionField_AbandonFrozen;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( RiskSettleInvstPositionField_ExchangeID != NULL ) {
        if(RiskSettleInvstPositionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", RiskSettleInvstPositionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, RiskSettleInvstPositionField_ExchangeID, RiskSettleInvstPositionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, RiskSettleInvstPositionField_ExchangeID, sizeof(self->data.ExchangeID) );
        RiskSettleInvstPositionField_ExchangeID = NULL;
    }
            
    ///执行冻结的昨仓
    // TThostFtdcVolumeType int
    self->data.YdStrikeFrozen = RiskSettleInvstPositionField_YdStrikeFrozen;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( RiskSettleInvstPositionField_InvestUnitID != NULL ) {
        if(RiskSettleInvstPositionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", RiskSettleInvstPositionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, RiskSettleInvstPositionField_InvestUnitID, RiskSettleInvstPositionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, RiskSettleInvstPositionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        RiskSettleInvstPositionField_InvestUnitID = NULL;
    }
            
    ///持仓成本差值
    // TThostFtdcMoneyType double
    self->data.PositionCostOffset = RiskSettleInvstPositionField_PositionCostOffset;
        
    ///tas持仓手数
    // TThostFtdcVolumeType int
    self->data.TasPosition = RiskSettleInvstPositionField_TasPosition;
        
    ///tas持仓成本
    // TThostFtdcMoneyType double
    self->data.TasPositionCost = RiskSettleInvstPositionField_TasPositionCost;
        

    return 0;
}

static void PyCThostFtdcRiskSettleInvstPositionField_dealloc(PyCThostFtdcRiskSettleInvstPositionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_repr(PyCThostFtdcRiskSettleInvstPositionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:y,s:i,s:y,s:d,s:i,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:s,s:i,s:s,s:d,s:i,s:d}"
#endif

        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"PosiDirection", self->data.PosiDirection 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"PositionDate", self->data.PositionDate 
        ,"YdPosition", self->data.YdPosition 
        ,"Position", self->data.Position 
        ,"LongFrozen", self->data.LongFrozen 
        ,"ShortFrozen", self->data.ShortFrozen 
        ,"LongFrozenAmount", self->data.LongFrozenAmount 
        ,"ShortFrozenAmount", self->data.ShortFrozenAmount 
        ,"OpenVolume", self->data.OpenVolume 
        ,"CloseVolume", self->data.CloseVolume 
        ,"OpenAmount", self->data.OpenAmount 
        ,"CloseAmount", self->data.CloseAmount 
        ,"PositionCost", self->data.PositionCost 
        ,"PreMargin", self->data.PreMargin 
        ,"UseMargin", self->data.UseMargin 
        ,"FrozenMargin", self->data.FrozenMargin 
        ,"FrozenCash", self->data.FrozenCash 
        ,"FrozenCommission", self->data.FrozenCommission 
        ,"CashIn", self->data.CashIn 
        ,"Commission", self->data.Commission 
        ,"CloseProfit", self->data.CloseProfit 
        ,"PositionProfit", self->data.PositionProfit 
        ,"PreSettlementPrice", self->data.PreSettlementPrice 
        ,"SettlementPrice", self->data.SettlementPrice 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"OpenCost", self->data.OpenCost 
        ,"ExchangeMargin", self->data.ExchangeMargin 
        ,"CombPosition", self->data.CombPosition 
        ,"CombLongFrozen", self->data.CombLongFrozen 
        ,"CombShortFrozen", self->data.CombShortFrozen 
        ,"CloseProfitByDate", self->data.CloseProfitByDate 
        ,"CloseProfitByTrade", self->data.CloseProfitByTrade 
        ,"TodayPosition", self->data.TodayPosition 
        ,"MarginRateByMoney", self->data.MarginRateByMoney 
        ,"MarginRateByVolume", self->data.MarginRateByVolume 
        ,"StrikeFrozen", self->data.StrikeFrozen 
        ,"StrikeFrozenAmount", self->data.StrikeFrozenAmount 
        ,"AbandonFrozen", self->data.AbandonFrozen 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"YdStrikeFrozen", self->data.YdStrikeFrozen 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"PositionCostOffset", self->data.PositionCostOffset 
        ,"TasPosition", self->data.TasPosition 
        ,"TasPositionCost", self->data.TasPositionCost 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRiskSettleInvstPositionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_InstrumentID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcRiskSettleInvstPositionField_set_InstrumentID(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_BrokerID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRiskSettleInvstPositionField_set_BrokerID(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_InvestorID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcRiskSettleInvstPositionField_set_InvestorID(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
            
///持仓多空方向
// TThostFtdcPosiDirectionType char
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PosiDirection(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

///持仓多空方向
// TThostFtdcPosiDirectionType char
static int PyCThostFtdcRiskSettleInvstPositionField_set_PosiDirection(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    self->data.PosiDirection = *buf;
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_HedgeFlag(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcRiskSettleInvstPositionField_set_HedgeFlag(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
            
///持仓日期
// TThostFtdcPositionDateType char
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PositionDate(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PositionDate), 1);
}

///持仓日期
// TThostFtdcPositionDateType char
static int PyCThostFtdcRiskSettleInvstPositionField_set_PositionDate(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PositionDate)) {
        PyErr_SetString(PyExc_ValueError, "PositionDate must be equal 1 bytes");
        return -1;
    }
    self->data.PositionDate = *buf;
    return 0;
}
            
///上日持仓
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_YdPosition(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.YdPosition);
#else
    return PyInt_FromLong(self->data.YdPosition);
#endif
}

///上日持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_YdPosition(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "YdPosition Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "YdPosition Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the YdPosition value out of range for C int");
        return -1;
    }
    self->data.YdPosition = (int)buf;
    return 0;
}
        
///今日持仓
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_Position(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Position);
#else
    return PyInt_FromLong(self->data.Position);
#endif
}

///今日持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_Position(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Position Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Position Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Position value out of range for C int");
        return -1;
    }
    self->data.Position = (int)buf;
    return 0;
}
        
///多头冻结
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_LongFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LongFrozen);
#else
    return PyInt_FromLong(self->data.LongFrozen);
#endif
}

///多头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_LongFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongFrozen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongFrozen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LongFrozen value out of range for C int");
        return -1;
    }
    self->data.LongFrozen = (int)buf;
    return 0;
}
        
///空头冻结
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_ShortFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ShortFrozen);
#else
    return PyInt_FromLong(self->data.ShortFrozen);
#endif
}

///空头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_ShortFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortFrozen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortFrozen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ShortFrozen value out of range for C int");
        return -1;
    }
    self->data.ShortFrozen = (int)buf;
    return 0;
}
        
///开仓冻结金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_LongFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongFrozenAmount);
}

///开仓冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_LongFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongFrozenAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongFrozenAmount = buf;
    return 0;
}
        
///开仓冻结金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_ShortFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortFrozenAmount);
}

///开仓冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_ShortFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortFrozenAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortFrozenAmount = buf;
    return 0;
}
        
///开仓量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_OpenVolume(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OpenVolume);
#else
    return PyInt_FromLong(self->data.OpenVolume);
#endif
}

///开仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_OpenVolume(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the OpenVolume value out of range for C int");
        return -1;
    }
    self->data.OpenVolume = (int)buf;
    return 0;
}
        
///平仓量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CloseVolume(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CloseVolume);
#else
    return PyInt_FromLong(self->data.CloseVolume);
#endif
}

///平仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_CloseVolume(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
        
///开仓金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_OpenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenAmount);
}

///开仓金额
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_OpenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenAmount = buf;
    return 0;
}
        
///平仓金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CloseAmount(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseAmount);
}

///平仓金额
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_CloseAmount(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
        
///持仓成本
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PositionCost(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionCost);
}

///持仓成本
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_PositionCost(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionCost Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PositionCost = buf;
    return 0;
}
        
///上次占用的保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PreMargin(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreMargin);
}

///上次占用的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_PreMargin(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreMargin = buf;
    return 0;
}
        
///占用的保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_UseMargin(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UseMargin);
}

///占用的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_UseMargin(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UseMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UseMargin = buf;
    return 0;
}
        
///冻结的保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_FrozenMargin(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenMargin);
}

///冻结的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_FrozenMargin(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenMargin = buf;
    return 0;
}
        
///冻结的资金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_FrozenCash(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCash);
}

///冻结的资金
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_FrozenCash(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenCash Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenCash = buf;
    return 0;
}
        
///冻结的手续费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_FrozenCommission(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCommission);
}

///冻结的手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_FrozenCommission(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenCommission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenCommission = buf;
    return 0;
}
        
///资金差额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CashIn(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CashIn);
}

///资金差额
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_CashIn(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CashIn Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CashIn = buf;
    return 0;
}
        
///手续费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_Commission(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Commission);
}

///手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_Commission(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Commission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Commission = buf;
    return 0;
}
        
///平仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfit(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfit);
}

///平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfit(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseProfit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseProfit = buf;
    return 0;
}
        
///持仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PositionProfit(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionProfit);
}

///持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_PositionProfit(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionProfit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PositionProfit = buf;
    return 0;
}
        
///上次结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PreSettlementPrice(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

///上次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_PreSettlementPrice(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreSettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreSettlementPrice = buf;
    return 0;
}
        
///本次结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_SettlementPrice(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SettlementPrice);
}

///本次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_SettlementPrice(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
        
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_TradingDay(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcRiskSettleInvstPositionField_set_TradingDay(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_SettlementID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_SettlementID(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
        
///开仓成本
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_OpenCost(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenCost);
}

///开仓成本
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_OpenCost(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenCost Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenCost = buf;
    return 0;
}
        
///交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_ExchangeMargin(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchangeMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_ExchangeMargin(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchangeMargin = buf;
    return 0;
}
        
///组合成交形成的持仓
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CombPosition(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CombPosition);
#else
    return PyInt_FromLong(self->data.CombPosition);
#endif
}

///组合成交形成的持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_CombPosition(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombPosition Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombPosition Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the CombPosition value out of range for C int");
        return -1;
    }
    self->data.CombPosition = (int)buf;
    return 0;
}
        
///组合多头冻结
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CombLongFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CombLongFrozen);
#else
    return PyInt_FromLong(self->data.CombLongFrozen);
#endif
}

///组合多头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_CombLongFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombLongFrozen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombLongFrozen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the CombLongFrozen value out of range for C int");
        return -1;
    }
    self->data.CombLongFrozen = (int)buf;
    return 0;
}
        
///组合空头冻结
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CombShortFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CombShortFrozen);
#else
    return PyInt_FromLong(self->data.CombShortFrozen);
#endif
}

///组合空头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_CombShortFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombShortFrozen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombShortFrozen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the CombShortFrozen value out of range for C int");
        return -1;
    }
    self->data.CombShortFrozen = (int)buf;
    return 0;
}
        
///逐日盯市平仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfitByDate(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfitByDate);
}

///逐日盯市平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfitByDate(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfitByTrade(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfitByTrade);
}

///逐笔对冲平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfitByTrade(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
        
///今日持仓
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_TodayPosition(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TodayPosition);
#else
    return PyInt_FromLong(self->data.TodayPosition);
#endif
}

///今日持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_TodayPosition(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TodayPosition Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TodayPosition Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TodayPosition value out of range for C int");
        return -1;
    }
    self->data.TodayPosition = (int)buf;
    return 0;
}
        
///保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_MarginRateByMoney(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

///保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_MarginRateByMoney(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_MarginRateByVolume(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

///保证金率(按手数)
// TThostFtdcRatioType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_MarginRateByVolume(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
        
///执行冻结
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_StrikeFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.StrikeFrozen);
#else
    return PyInt_FromLong(self->data.StrikeFrozen);
#endif
}

///执行冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_StrikeFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeFrozen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeFrozen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the StrikeFrozen value out of range for C int");
        return -1;
    }
    self->data.StrikeFrozen = (int)buf;
    return 0;
}
        
///执行冻结金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_StrikeFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StrikeFrozenAmount);
}

///执行冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_StrikeFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeFrozenAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeFrozenAmount = buf;
    return 0;
}
        
///放弃执行冻结
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_AbandonFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AbandonFrozen);
#else
    return PyInt_FromLong(self->data.AbandonFrozen);
#endif
}

///放弃执行冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_AbandonFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AbandonFrozen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AbandonFrozen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the AbandonFrozen value out of range for C int");
        return -1;
    }
    self->data.AbandonFrozen = (int)buf;
    return 0;
}
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_ExchangeID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcRiskSettleInvstPositionField_set_ExchangeID(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
            
///执行冻结的昨仓
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_YdStrikeFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.YdStrikeFrozen);
#else
    return PyInt_FromLong(self->data.YdStrikeFrozen);
#endif
}

///执行冻结的昨仓
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_YdStrikeFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "YdStrikeFrozen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "YdStrikeFrozen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the YdStrikeFrozen value out of range for C int");
        return -1;
    }
    self->data.YdStrikeFrozen = (int)buf;
    return 0;
}
        
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_InvestUnitID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcRiskSettleInvstPositionField_set_InvestUnitID(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
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
            
///持仓成本差值
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PositionCostOffset(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionCostOffset);
}

///持仓成本差值
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_PositionCostOffset(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionCostOffset Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PositionCostOffset = buf;
    return 0;
}
        
///tas持仓手数
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_TasPosition(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TasPosition);
#else
    return PyInt_FromLong(self->data.TasPosition);
#endif
}

///tas持仓手数
// TThostFtdcVolumeType int
static int PyCThostFtdcRiskSettleInvstPositionField_set_TasPosition(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TasPosition Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TasPosition Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TasPosition value out of range for C int");
        return -1;
    }
    self->data.TasPosition = (int)buf;
    return 0;
}
        
///tas持仓成本
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_TasPositionCost(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TasPositionCost);
}

///tas持仓成本
// TThostFtdcMoneyType double
static int PyCThostFtdcRiskSettleInvstPositionField_set_TasPositionCost(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TasPositionCost Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.TasPositionCost = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcRiskSettleInvstPositionField_getset[] = {
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_InstrumentID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_BrokerID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_InvestorID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///持仓多空方向 
    {(char *)"PosiDirection", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PosiDirection, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PosiDirection, (char *)"PosiDirection", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_HedgeFlag, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///持仓日期 
    {(char *)"PositionDate", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PositionDate, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PositionDate, (char *)"PositionDate", NULL},
    ///上日持仓 
    {(char *)"YdPosition", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_YdPosition, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_YdPosition, (char *)"YdPosition", NULL},
    ///今日持仓 
    {(char *)"Position", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_Position, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_Position, (char *)"Position", NULL},
    ///多头冻结 
    {(char *)"LongFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_LongFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_LongFrozen, (char *)"LongFrozen", NULL},
    ///空头冻结 
    {(char *)"ShortFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_ShortFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_ShortFrozen, (char *)"ShortFrozen", NULL},
    ///开仓冻结金额 
    {(char *)"LongFrozenAmount", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_LongFrozenAmount, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_LongFrozenAmount, (char *)"LongFrozenAmount", NULL},
    ///开仓冻结金额 
    {(char *)"ShortFrozenAmount", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_ShortFrozenAmount, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_ShortFrozenAmount, (char *)"ShortFrozenAmount", NULL},
    ///开仓量 
    {(char *)"OpenVolume", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_OpenVolume, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_OpenVolume, (char *)"OpenVolume", NULL},
    ///平仓量 
    {(char *)"CloseVolume", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CloseVolume, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CloseVolume, (char *)"CloseVolume", NULL},
    ///开仓金额 
    {(char *)"OpenAmount", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_OpenAmount, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_OpenAmount, (char *)"OpenAmount", NULL},
    ///平仓金额 
    {(char *)"CloseAmount", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CloseAmount, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CloseAmount, (char *)"CloseAmount", NULL},
    ///持仓成本 
    {(char *)"PositionCost", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PositionCost, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PositionCost, (char *)"PositionCost", NULL},
    ///上次占用的保证金 
    {(char *)"PreMargin", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PreMargin, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PreMargin, (char *)"PreMargin", NULL},
    ///占用的保证金 
    {(char *)"UseMargin", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_UseMargin, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_UseMargin, (char *)"UseMargin", NULL},
    ///冻结的保证金 
    {(char *)"FrozenMargin", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_FrozenMargin, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
    ///冻结的资金 
    {(char *)"FrozenCash", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_FrozenCash, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_FrozenCash, (char *)"FrozenCash", NULL},
    ///冻结的手续费 
    {(char *)"FrozenCommission", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_FrozenCommission, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
    ///资金差额 
    {(char *)"CashIn", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CashIn, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CashIn, (char *)"CashIn", NULL},
    ///手续费 
    {(char *)"Commission", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_Commission, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_Commission, (char *)"Commission", NULL},
    ///平仓盈亏 
    {(char *)"CloseProfit", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfit, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfit, (char *)"CloseProfit", NULL},
    ///持仓盈亏 
    {(char *)"PositionProfit", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PositionProfit, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PositionProfit, (char *)"PositionProfit", NULL},
    ///上次结算价 
    {(char *)"PreSettlementPrice", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PreSettlementPrice, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
    ///本次结算价 
    {(char *)"SettlementPrice", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_SettlementPrice, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_TradingDay, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_SettlementID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_SettlementID, (char *)"SettlementID", NULL},
    ///开仓成本 
    {(char *)"OpenCost", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_OpenCost, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_OpenCost, (char *)"OpenCost", NULL},
    ///交易所保证金 
    {(char *)"ExchangeMargin", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_ExchangeMargin, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
    ///组合成交形成的持仓 
    {(char *)"CombPosition", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CombPosition, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CombPosition, (char *)"CombPosition", NULL},
    ///组合多头冻结 
    {(char *)"CombLongFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CombLongFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CombLongFrozen, (char *)"CombLongFrozen", NULL},
    ///组合空头冻结 
    {(char *)"CombShortFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CombShortFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CombShortFrozen, (char *)"CombShortFrozen", NULL},
    ///逐日盯市平仓盈亏 
    {(char *)"CloseProfitByDate", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfitByDate, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfitByDate, (char *)"CloseProfitByDate", NULL},
    ///逐笔对冲平仓盈亏 
    {(char *)"CloseProfitByTrade", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfitByTrade, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfitByTrade, (char *)"CloseProfitByTrade", NULL},
    ///今日持仓 
    {(char *)"TodayPosition", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_TodayPosition, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_TodayPosition, (char *)"TodayPosition", NULL},
    ///保证金率 
    {(char *)"MarginRateByMoney", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_MarginRateByMoney, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
    ///保证金率(按手数) 
    {(char *)"MarginRateByVolume", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_MarginRateByVolume, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
    ///执行冻结 
    {(char *)"StrikeFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_StrikeFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_StrikeFrozen, (char *)"StrikeFrozen", NULL},
    ///执行冻结金额 
    {(char *)"StrikeFrozenAmount", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_StrikeFrozenAmount, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_StrikeFrozenAmount, (char *)"StrikeFrozenAmount", NULL},
    ///放弃执行冻结 
    {(char *)"AbandonFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_AbandonFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_AbandonFrozen, (char *)"AbandonFrozen", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_ExchangeID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///执行冻结的昨仓 
    {(char *)"YdStrikeFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_YdStrikeFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_YdStrikeFrozen, (char *)"YdStrikeFrozen", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_InvestUnitID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///持仓成本差值 
    {(char *)"PositionCostOffset", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PositionCostOffset, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PositionCostOffset, (char *)"PositionCostOffset", NULL},
    ///tas持仓手数 
    {(char *)"TasPosition", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_TasPosition, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_TasPosition, (char *)"TasPosition", NULL},
    ///tas持仓成本 
    {(char *)"TasPositionCost", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_TasPositionCost, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_TasPositionCost, (char *)"TasPositionCost", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRiskSettleInvstPositionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRiskSettleInvstPositionField",	/* tp_name */
	sizeof(PyCThostFtdcRiskSettleInvstPositionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRiskSettleInvstPositionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRiskSettleInvstPositionField_repr,   /* tp_repr */
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
	"CThostFtdcRiskSettleInvstPositionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRiskSettleInvstPositionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRiskSettleInvstPositionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRiskSettleInvstPositionField_new,       /* tp_new */
};

int PyCThostFtdcRiskSettleInvstPositionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRiskSettleInvstPositionField  */
	if (PyType_Ready(&PyCThostFtdcRiskSettleInvstPositionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRiskSettleInvstPositionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRiskSettleInvstPositionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRiskSettleInvstPositionField", (PyObject *)&PyCThostFtdcRiskSettleInvstPositionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRiskSettleInvstPositionField to module");
        Py_DECREF(&PyCThostFtdcRiskSettleInvstPositionFieldType);
		return -1;
    }

    return 0;
}
