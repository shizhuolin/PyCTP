
#include "PyCThostFtdcSyncingInvestorPositionField.h"

///正在同步中的投资者持仓

static PyObject *PyCThostFtdcSyncingInvestorPositionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingInvestorPositionField *self = (PyCThostFtdcSyncingInvestorPositionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingInvestorPositionField_init(PyCThostFtdcSyncingInvestorPositionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "BrokerID", "InvestorID", "PosiDirection", "HedgeFlag", "PositionDate", "YdPosition", "Position", "LongFrozen", "ShortFrozen", "LongFrozenAmount", "ShortFrozenAmount", "OpenVolume", "CloseVolume", "OpenAmount", "CloseAmount", "PositionCost", "PreMargin", "UseMargin", "FrozenMargin", "FrozenCash", "FrozenCommission", "CashIn", "Commission", "CloseProfit", "PositionProfit", "PreSettlementPrice", "SettlementPrice", "TradingDay", "SettlementID", "OpenCost", "ExchangeMargin", "CombPosition", "CombLongFrozen", "CombShortFrozen", "CloseProfitByDate", "CloseProfitByTrade", "TodayPosition", "MarginRateByMoney", "MarginRateByVolume", "StrikeFrozen", "StrikeFrozenAmount", "AbandonFrozen", "ExchangeID", "YdStrikeFrozen", "InvestUnitID", "PositionCostOffset", "TasPosition", "TasPositionCost", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *SyncingInvestorPositionField_reserve1 = NULL;
    Py_ssize_t SyncingInvestorPositionField_reserve1_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncingInvestorPositionField_BrokerID = NULL;
    Py_ssize_t SyncingInvestorPositionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncingInvestorPositionField_InvestorID = NULL;
    Py_ssize_t SyncingInvestorPositionField_InvestorID_len = 0;
            
    ///持仓多空方向
    // TThostFtdcPosiDirectionType char
    char SyncingInvestorPositionField_PosiDirection = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char SyncingInvestorPositionField_HedgeFlag = 0;
            
    ///持仓日期
    // TThostFtdcPositionDateType char
    char SyncingInvestorPositionField_PositionDate = 0;
            
    ///上日持仓
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_YdPosition = 0;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_Position = 0;
        
    ///多头冻结
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_LongFrozen = 0;
        
    ///空头冻结
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_ShortFrozen = 0;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_LongFrozenAmount = 0.0;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_ShortFrozenAmount = 0.0;
        
    ///开仓量
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_OpenVolume = 0;
        
    ///平仓量
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_CloseVolume = 0;
        
    ///开仓金额
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_OpenAmount = 0.0;
        
    ///平仓金额
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_CloseAmount = 0.0;
        
    ///持仓成本
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_PositionCost = 0.0;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_PreMargin = 0.0;
        
    ///占用的保证金
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_UseMargin = 0.0;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_FrozenMargin = 0.0;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_FrozenCash = 0.0;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_FrozenCommission = 0.0;
        
    ///资金差额
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_CashIn = 0.0;
        
    ///手续费
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_Commission = 0.0;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_CloseProfit = 0.0;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_PositionProfit = 0.0;
        
    ///上次结算价
    // TThostFtdcPriceType double
    double SyncingInvestorPositionField_PreSettlementPrice = 0.0;
        
    ///本次结算价
    // TThostFtdcPriceType double
    double SyncingInvestorPositionField_SettlementPrice = 0.0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncingInvestorPositionField_TradingDay = NULL;
    Py_ssize_t SyncingInvestorPositionField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int SyncingInvestorPositionField_SettlementID = 0;
        
    ///开仓成本
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_OpenCost = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_ExchangeMargin = 0.0;
        
    ///组合成交形成的持仓
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_CombPosition = 0;
        
    ///组合多头冻结
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_CombLongFrozen = 0;
        
    ///组合空头冻结
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_CombShortFrozen = 0;
        
    ///逐日盯市平仓盈亏
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_CloseProfitByDate = 0.0;
        
    ///逐笔对冲平仓盈亏
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_CloseProfitByTrade = 0.0;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_TodayPosition = 0;
        
    ///保证金率
    // TThostFtdcRatioType double
    double SyncingInvestorPositionField_MarginRateByMoney = 0.0;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    double SyncingInvestorPositionField_MarginRateByVolume = 0.0;
        
    ///执行冻结
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_StrikeFrozen = 0;
        
    ///执行冻结金额
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_StrikeFrozenAmount = 0.0;
        
    ///放弃执行冻结
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_AbandonFrozen = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncingInvestorPositionField_ExchangeID = NULL;
    Py_ssize_t SyncingInvestorPositionField_ExchangeID_len = 0;
            
    ///执行冻结的昨仓
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_YdStrikeFrozen = 0;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *SyncingInvestorPositionField_InvestUnitID = NULL;
    Py_ssize_t SyncingInvestorPositionField_InvestUnitID_len = 0;
            
    ///持仓成本差值
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_PositionCostOffset = 0.0;
        
    ///tas持仓手数
    // TThostFtdcVolumeType int
    int SyncingInvestorPositionField_TasPosition = 0;
        
    ///tas持仓成本
    // TThostFtdcMoneyType double
    double SyncingInvestorPositionField_TasPositionCost = 0.0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncingInvestorPositionField_InstrumentID = NULL;
    Py_ssize_t SyncingInvestorPositionField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccciiiiddiiddddddddddddddy#iddiiiddiddidiy#iy#didy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ccciiiiddiidddddddddddddds#iddiiiddiddidis#is#dids#", (char **)kwlist
#endif

        , &SyncingInvestorPositionField_reserve1, &SyncingInvestorPositionField_reserve1_len 
        , &SyncingInvestorPositionField_BrokerID, &SyncingInvestorPositionField_BrokerID_len 
        , &SyncingInvestorPositionField_InvestorID, &SyncingInvestorPositionField_InvestorID_len 
        , &SyncingInvestorPositionField_PosiDirection 
        , &SyncingInvestorPositionField_HedgeFlag 
        , &SyncingInvestorPositionField_PositionDate 
        , &SyncingInvestorPositionField_YdPosition 
        , &SyncingInvestorPositionField_Position 
        , &SyncingInvestorPositionField_LongFrozen 
        , &SyncingInvestorPositionField_ShortFrozen 
        , &SyncingInvestorPositionField_LongFrozenAmount 
        , &SyncingInvestorPositionField_ShortFrozenAmount 
        , &SyncingInvestorPositionField_OpenVolume 
        , &SyncingInvestorPositionField_CloseVolume 
        , &SyncingInvestorPositionField_OpenAmount 
        , &SyncingInvestorPositionField_CloseAmount 
        , &SyncingInvestorPositionField_PositionCost 
        , &SyncingInvestorPositionField_PreMargin 
        , &SyncingInvestorPositionField_UseMargin 
        , &SyncingInvestorPositionField_FrozenMargin 
        , &SyncingInvestorPositionField_FrozenCash 
        , &SyncingInvestorPositionField_FrozenCommission 
        , &SyncingInvestorPositionField_CashIn 
        , &SyncingInvestorPositionField_Commission 
        , &SyncingInvestorPositionField_CloseProfit 
        , &SyncingInvestorPositionField_PositionProfit 
        , &SyncingInvestorPositionField_PreSettlementPrice 
        , &SyncingInvestorPositionField_SettlementPrice 
        , &SyncingInvestorPositionField_TradingDay, &SyncingInvestorPositionField_TradingDay_len 
        , &SyncingInvestorPositionField_SettlementID 
        , &SyncingInvestorPositionField_OpenCost 
        , &SyncingInvestorPositionField_ExchangeMargin 
        , &SyncingInvestorPositionField_CombPosition 
        , &SyncingInvestorPositionField_CombLongFrozen 
        , &SyncingInvestorPositionField_CombShortFrozen 
        , &SyncingInvestorPositionField_CloseProfitByDate 
        , &SyncingInvestorPositionField_CloseProfitByTrade 
        , &SyncingInvestorPositionField_TodayPosition 
        , &SyncingInvestorPositionField_MarginRateByMoney 
        , &SyncingInvestorPositionField_MarginRateByVolume 
        , &SyncingInvestorPositionField_StrikeFrozen 
        , &SyncingInvestorPositionField_StrikeFrozenAmount 
        , &SyncingInvestorPositionField_AbandonFrozen 
        , &SyncingInvestorPositionField_ExchangeID, &SyncingInvestorPositionField_ExchangeID_len 
        , &SyncingInvestorPositionField_YdStrikeFrozen 
        , &SyncingInvestorPositionField_InvestUnitID, &SyncingInvestorPositionField_InvestUnitID_len 
        , &SyncingInvestorPositionField_PositionCostOffset 
        , &SyncingInvestorPositionField_TasPosition 
        , &SyncingInvestorPositionField_TasPositionCost 
        , &SyncingInvestorPositionField_InstrumentID, &SyncingInvestorPositionField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( SyncingInvestorPositionField_reserve1 != NULL ) {
        if(SyncingInvestorPositionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", SyncingInvestorPositionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, SyncingInvestorPositionField_reserve1, SyncingInvestorPositionField_reserve1_len);        
        strncpy(self->data.reserve1, SyncingInvestorPositionField_reserve1, sizeof(self->data.reserve1) );
        SyncingInvestorPositionField_reserve1 = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncingInvestorPositionField_BrokerID != NULL ) {
        if(SyncingInvestorPositionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncingInvestorPositionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncingInvestorPositionField_BrokerID, SyncingInvestorPositionField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncingInvestorPositionField_BrokerID, sizeof(self->data.BrokerID) );
        SyncingInvestorPositionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncingInvestorPositionField_InvestorID != NULL ) {
        if(SyncingInvestorPositionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncingInvestorPositionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncingInvestorPositionField_InvestorID, SyncingInvestorPositionField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncingInvestorPositionField_InvestorID, sizeof(self->data.InvestorID) );
        SyncingInvestorPositionField_InvestorID = NULL;
    }
            
    ///持仓多空方向
    // TThostFtdcPosiDirectionType char
    self->data.PosiDirection = SyncingInvestorPositionField_PosiDirection;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = SyncingInvestorPositionField_HedgeFlag;
            
    ///持仓日期
    // TThostFtdcPositionDateType char
    self->data.PositionDate = SyncingInvestorPositionField_PositionDate;
            
    ///上日持仓
    // TThostFtdcVolumeType int
    self->data.YdPosition = SyncingInvestorPositionField_YdPosition;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    self->data.Position = SyncingInvestorPositionField_Position;
        
    ///多头冻结
    // TThostFtdcVolumeType int
    self->data.LongFrozen = SyncingInvestorPositionField_LongFrozen;
        
    ///空头冻结
    // TThostFtdcVolumeType int
    self->data.ShortFrozen = SyncingInvestorPositionField_ShortFrozen;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    self->data.LongFrozenAmount = SyncingInvestorPositionField_LongFrozenAmount;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    self->data.ShortFrozenAmount = SyncingInvestorPositionField_ShortFrozenAmount;
        
    ///开仓量
    // TThostFtdcVolumeType int
    self->data.OpenVolume = SyncingInvestorPositionField_OpenVolume;
        
    ///平仓量
    // TThostFtdcVolumeType int
    self->data.CloseVolume = SyncingInvestorPositionField_CloseVolume;
        
    ///开仓金额
    // TThostFtdcMoneyType double
    self->data.OpenAmount = SyncingInvestorPositionField_OpenAmount;
        
    ///平仓金额
    // TThostFtdcMoneyType double
    self->data.CloseAmount = SyncingInvestorPositionField_CloseAmount;
        
    ///持仓成本
    // TThostFtdcMoneyType double
    self->data.PositionCost = SyncingInvestorPositionField_PositionCost;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    self->data.PreMargin = SyncingInvestorPositionField_PreMargin;
        
    ///占用的保证金
    // TThostFtdcMoneyType double
    self->data.UseMargin = SyncingInvestorPositionField_UseMargin;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    self->data.FrozenMargin = SyncingInvestorPositionField_FrozenMargin;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    self->data.FrozenCash = SyncingInvestorPositionField_FrozenCash;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    self->data.FrozenCommission = SyncingInvestorPositionField_FrozenCommission;
        
    ///资金差额
    // TThostFtdcMoneyType double
    self->data.CashIn = SyncingInvestorPositionField_CashIn;
        
    ///手续费
    // TThostFtdcMoneyType double
    self->data.Commission = SyncingInvestorPositionField_Commission;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfit = SyncingInvestorPositionField_CloseProfit;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    self->data.PositionProfit = SyncingInvestorPositionField_PositionProfit;
        
    ///上次结算价
    // TThostFtdcPriceType double
    self->data.PreSettlementPrice = SyncingInvestorPositionField_PreSettlementPrice;
        
    ///本次结算价
    // TThostFtdcPriceType double
    self->data.SettlementPrice = SyncingInvestorPositionField_SettlementPrice;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncingInvestorPositionField_TradingDay != NULL ) {
        if(SyncingInvestorPositionField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncingInvestorPositionField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncingInvestorPositionField_TradingDay, SyncingInvestorPositionField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncingInvestorPositionField_TradingDay, sizeof(self->data.TradingDay) );
        SyncingInvestorPositionField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = SyncingInvestorPositionField_SettlementID;
        
    ///开仓成本
    // TThostFtdcMoneyType double
    self->data.OpenCost = SyncingInvestorPositionField_OpenCost;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchangeMargin = SyncingInvestorPositionField_ExchangeMargin;
        
    ///组合成交形成的持仓
    // TThostFtdcVolumeType int
    self->data.CombPosition = SyncingInvestorPositionField_CombPosition;
        
    ///组合多头冻结
    // TThostFtdcVolumeType int
    self->data.CombLongFrozen = SyncingInvestorPositionField_CombLongFrozen;
        
    ///组合空头冻结
    // TThostFtdcVolumeType int
    self->data.CombShortFrozen = SyncingInvestorPositionField_CombShortFrozen;
        
    ///逐日盯市平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfitByDate = SyncingInvestorPositionField_CloseProfitByDate;
        
    ///逐笔对冲平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfitByTrade = SyncingInvestorPositionField_CloseProfitByTrade;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    self->data.TodayPosition = SyncingInvestorPositionField_TodayPosition;
        
    ///保证金率
    // TThostFtdcRatioType double
    self->data.MarginRateByMoney = SyncingInvestorPositionField_MarginRateByMoney;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    self->data.MarginRateByVolume = SyncingInvestorPositionField_MarginRateByVolume;
        
    ///执行冻结
    // TThostFtdcVolumeType int
    self->data.StrikeFrozen = SyncingInvestorPositionField_StrikeFrozen;
        
    ///执行冻结金额
    // TThostFtdcMoneyType double
    self->data.StrikeFrozenAmount = SyncingInvestorPositionField_StrikeFrozenAmount;
        
    ///放弃执行冻结
    // TThostFtdcVolumeType int
    self->data.AbandonFrozen = SyncingInvestorPositionField_AbandonFrozen;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncingInvestorPositionField_ExchangeID != NULL ) {
        if(SyncingInvestorPositionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncingInvestorPositionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncingInvestorPositionField_ExchangeID, SyncingInvestorPositionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncingInvestorPositionField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncingInvestorPositionField_ExchangeID = NULL;
    }
            
    ///执行冻结的昨仓
    // TThostFtdcVolumeType int
    self->data.YdStrikeFrozen = SyncingInvestorPositionField_YdStrikeFrozen;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( SyncingInvestorPositionField_InvestUnitID != NULL ) {
        if(SyncingInvestorPositionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", SyncingInvestorPositionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, SyncingInvestorPositionField_InvestUnitID, SyncingInvestorPositionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, SyncingInvestorPositionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        SyncingInvestorPositionField_InvestUnitID = NULL;
    }
            
    ///持仓成本差值
    // TThostFtdcMoneyType double
    self->data.PositionCostOffset = SyncingInvestorPositionField_PositionCostOffset;
        
    ///tas持仓手数
    // TThostFtdcVolumeType int
    self->data.TasPosition = SyncingInvestorPositionField_TasPosition;
        
    ///tas持仓成本
    // TThostFtdcMoneyType double
    self->data.TasPositionCost = SyncingInvestorPositionField_TasPositionCost;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncingInvestorPositionField_InstrumentID != NULL ) {
        if(SyncingInvestorPositionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncingInvestorPositionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncingInvestorPositionField_InstrumentID, SyncingInvestorPositionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncingInvestorPositionField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncingInvestorPositionField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSyncingInvestorPositionField_dealloc(PyCThostFtdcSyncingInvestorPositionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_repr(PyCThostFtdcSyncingInvestorPositionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:y,s:i,s:y,s:d,s:i,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:s,s:i,s:s,s:d,s:i,s:d,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
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
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorPositionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_reserve1(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcSyncingInvestorPositionField_set_reserve1(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_BrokerID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncingInvestorPositionField_set_BrokerID(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_InvestorID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncingInvestorPositionField_set_InvestorID(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PosiDirection(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

///持仓多空方向
// TThostFtdcPosiDirectionType char
static int PyCThostFtdcSyncingInvestorPositionField_set_PosiDirection(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_HedgeFlag(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcSyncingInvestorPositionField_set_HedgeFlag(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PositionDate(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PositionDate), 1);
}

///持仓日期
// TThostFtdcPositionDateType char
static int PyCThostFtdcSyncingInvestorPositionField_set_PositionDate(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_YdPosition(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.YdPosition);
#else
    return PyInt_FromLong(self->data.YdPosition);
#endif
}

///上日持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_YdPosition(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_Position(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Position);
#else
    return PyInt_FromLong(self->data.Position);
#endif
}

///今日持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_Position(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_LongFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LongFrozen);
#else
    return PyInt_FromLong(self->data.LongFrozen);
#endif
}

///多头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_LongFrozen(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_ShortFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ShortFrozen);
#else
    return PyInt_FromLong(self->data.ShortFrozen);
#endif
}

///空头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_ShortFrozen(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_LongFrozenAmount(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongFrozenAmount);
}

///开仓冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_LongFrozenAmount(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_ShortFrozenAmount(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortFrozenAmount);
}

///开仓冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_ShortFrozenAmount(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_OpenVolume(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OpenVolume);
#else
    return PyInt_FromLong(self->data.OpenVolume);
#endif
}

///开仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_OpenVolume(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CloseVolume(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CloseVolume);
#else
    return PyInt_FromLong(self->data.CloseVolume);
#endif
}

///平仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_CloseVolume(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_OpenAmount(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenAmount);
}

///开仓金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_OpenAmount(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CloseAmount(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseAmount);
}

///平仓金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_CloseAmount(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PositionCost(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionCost);
}

///持仓成本
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_PositionCost(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PreMargin(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreMargin);
}

///上次占用的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_PreMargin(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_UseMargin(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UseMargin);
}

///占用的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_UseMargin(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_FrozenMargin(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenMargin);
}

///冻结的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_FrozenMargin(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_FrozenCash(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCash);
}

///冻结的资金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_FrozenCash(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_FrozenCommission(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCommission);
}

///冻结的手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_FrozenCommission(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CashIn(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CashIn);
}

///资金差额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_CashIn(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_Commission(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Commission);
}

///手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_Commission(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CloseProfit(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfit);
}

///平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_CloseProfit(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PositionProfit(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionProfit);
}

///持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_PositionProfit(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PreSettlementPrice(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

///上次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncingInvestorPositionField_set_PreSettlementPrice(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_SettlementPrice(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SettlementPrice);
}

///本次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncingInvestorPositionField_set_SettlementPrice(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_TradingDay(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncingInvestorPositionField_set_TradingDay(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_SettlementID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcSyncingInvestorPositionField_set_SettlementID(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_OpenCost(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenCost);
}

///开仓成本
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_OpenCost(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_ExchangeMargin(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchangeMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_ExchangeMargin(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CombPosition(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CombPosition);
#else
    return PyInt_FromLong(self->data.CombPosition);
#endif
}

///组合成交形成的持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_CombPosition(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CombLongFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CombLongFrozen);
#else
    return PyInt_FromLong(self->data.CombLongFrozen);
#endif
}

///组合多头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_CombLongFrozen(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CombShortFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CombShortFrozen);
#else
    return PyInt_FromLong(self->data.CombShortFrozen);
#endif
}

///组合空头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_CombShortFrozen(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CloseProfitByDate(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfitByDate);
}

///逐日盯市平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_CloseProfitByDate(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CloseProfitByTrade(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfitByTrade);
}

///逐笔对冲平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_CloseProfitByTrade(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_TodayPosition(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TodayPosition);
#else
    return PyInt_FromLong(self->data.TodayPosition);
#endif
}

///今日持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_TodayPosition(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_MarginRateByMoney(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

///保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncingInvestorPositionField_set_MarginRateByMoney(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_MarginRateByVolume(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

///保证金率(按手数)
// TThostFtdcRatioType double
static int PyCThostFtdcSyncingInvestorPositionField_set_MarginRateByVolume(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_StrikeFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.StrikeFrozen);
#else
    return PyInt_FromLong(self->data.StrikeFrozen);
#endif
}

///执行冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_StrikeFrozen(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_StrikeFrozenAmount(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StrikeFrozenAmount);
}

///执行冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_StrikeFrozenAmount(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_AbandonFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AbandonFrozen);
#else
    return PyInt_FromLong(self->data.AbandonFrozen);
#endif
}

///放弃执行冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_AbandonFrozen(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_ExchangeID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncingInvestorPositionField_set_ExchangeID(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_YdStrikeFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.YdStrikeFrozen);
#else
    return PyInt_FromLong(self->data.YdStrikeFrozen);
#endif
}

///执行冻结的昨仓
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_YdStrikeFrozen(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_InvestUnitID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcSyncingInvestorPositionField_set_InvestUnitID(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PositionCostOffset(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionCostOffset);
}

///持仓成本差值
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_PositionCostOffset(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_TasPosition(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TasPosition);
#else
    return PyInt_FromLong(self->data.TasPosition);
#endif
}

///tas持仓手数
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncingInvestorPositionField_set_TasPosition(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_TasPositionCost(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TasPositionCost);
}

///tas持仓成本
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInvestorPositionField_set_TasPositionCost(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_InstrumentID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncingInvestorPositionField_set_InstrumentID(PyCThostFtdcSyncingInvestorPositionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcSyncingInvestorPositionField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcSyncingInvestorPositionField_get_reserve1, (setter)PyCThostFtdcSyncingInvestorPositionField_set_reserve1, (char *)"reserve1", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_BrokerID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_InvestorID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///持仓多空方向 
    {(char *)"PosiDirection", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PosiDirection, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PosiDirection, (char *)"PosiDirection", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncingInvestorPositionField_get_HedgeFlag, (setter)PyCThostFtdcSyncingInvestorPositionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///持仓日期 
    {(char *)"PositionDate", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PositionDate, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PositionDate, (char *)"PositionDate", NULL},
    ///上日持仓 
    {(char *)"YdPosition", (getter)PyCThostFtdcSyncingInvestorPositionField_get_YdPosition, (setter)PyCThostFtdcSyncingInvestorPositionField_set_YdPosition, (char *)"YdPosition", NULL},
    ///今日持仓 
    {(char *)"Position", (getter)PyCThostFtdcSyncingInvestorPositionField_get_Position, (setter)PyCThostFtdcSyncingInvestorPositionField_set_Position, (char *)"Position", NULL},
    ///多头冻结 
    {(char *)"LongFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_LongFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_LongFrozen, (char *)"LongFrozen", NULL},
    ///空头冻结 
    {(char *)"ShortFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_ShortFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_ShortFrozen, (char *)"ShortFrozen", NULL},
    ///开仓冻结金额 
    {(char *)"LongFrozenAmount", (getter)PyCThostFtdcSyncingInvestorPositionField_get_LongFrozenAmount, (setter)PyCThostFtdcSyncingInvestorPositionField_set_LongFrozenAmount, (char *)"LongFrozenAmount", NULL},
    ///开仓冻结金额 
    {(char *)"ShortFrozenAmount", (getter)PyCThostFtdcSyncingInvestorPositionField_get_ShortFrozenAmount, (setter)PyCThostFtdcSyncingInvestorPositionField_set_ShortFrozenAmount, (char *)"ShortFrozenAmount", NULL},
    ///开仓量 
    {(char *)"OpenVolume", (getter)PyCThostFtdcSyncingInvestorPositionField_get_OpenVolume, (setter)PyCThostFtdcSyncingInvestorPositionField_set_OpenVolume, (char *)"OpenVolume", NULL},
    ///平仓量 
    {(char *)"CloseVolume", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CloseVolume, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CloseVolume, (char *)"CloseVolume", NULL},
    ///开仓金额 
    {(char *)"OpenAmount", (getter)PyCThostFtdcSyncingInvestorPositionField_get_OpenAmount, (setter)PyCThostFtdcSyncingInvestorPositionField_set_OpenAmount, (char *)"OpenAmount", NULL},
    ///平仓金额 
    {(char *)"CloseAmount", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CloseAmount, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CloseAmount, (char *)"CloseAmount", NULL},
    ///持仓成本 
    {(char *)"PositionCost", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PositionCost, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PositionCost, (char *)"PositionCost", NULL},
    ///上次占用的保证金 
    {(char *)"PreMargin", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PreMargin, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PreMargin, (char *)"PreMargin", NULL},
    ///占用的保证金 
    {(char *)"UseMargin", (getter)PyCThostFtdcSyncingInvestorPositionField_get_UseMargin, (setter)PyCThostFtdcSyncingInvestorPositionField_set_UseMargin, (char *)"UseMargin", NULL},
    ///冻结的保证金 
    {(char *)"FrozenMargin", (getter)PyCThostFtdcSyncingInvestorPositionField_get_FrozenMargin, (setter)PyCThostFtdcSyncingInvestorPositionField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
    ///冻结的资金 
    {(char *)"FrozenCash", (getter)PyCThostFtdcSyncingInvestorPositionField_get_FrozenCash, (setter)PyCThostFtdcSyncingInvestorPositionField_set_FrozenCash, (char *)"FrozenCash", NULL},
    ///冻结的手续费 
    {(char *)"FrozenCommission", (getter)PyCThostFtdcSyncingInvestorPositionField_get_FrozenCommission, (setter)PyCThostFtdcSyncingInvestorPositionField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
    ///资金差额 
    {(char *)"CashIn", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CashIn, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CashIn, (char *)"CashIn", NULL},
    ///手续费 
    {(char *)"Commission", (getter)PyCThostFtdcSyncingInvestorPositionField_get_Commission, (setter)PyCThostFtdcSyncingInvestorPositionField_set_Commission, (char *)"Commission", NULL},
    ///平仓盈亏 
    {(char *)"CloseProfit", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CloseProfit, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CloseProfit, (char *)"CloseProfit", NULL},
    ///持仓盈亏 
    {(char *)"PositionProfit", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PositionProfit, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PositionProfit, (char *)"PositionProfit", NULL},
    ///上次结算价 
    {(char *)"PreSettlementPrice", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PreSettlementPrice, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
    ///本次结算价 
    {(char *)"SettlementPrice", (getter)PyCThostFtdcSyncingInvestorPositionField_get_SettlementPrice, (setter)PyCThostFtdcSyncingInvestorPositionField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncingInvestorPositionField_get_TradingDay, (setter)PyCThostFtdcSyncingInvestorPositionField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_SettlementID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_SettlementID, (char *)"SettlementID", NULL},
    ///开仓成本 
    {(char *)"OpenCost", (getter)PyCThostFtdcSyncingInvestorPositionField_get_OpenCost, (setter)PyCThostFtdcSyncingInvestorPositionField_set_OpenCost, (char *)"OpenCost", NULL},
    ///交易所保证金 
    {(char *)"ExchangeMargin", (getter)PyCThostFtdcSyncingInvestorPositionField_get_ExchangeMargin, (setter)PyCThostFtdcSyncingInvestorPositionField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
    ///组合成交形成的持仓 
    {(char *)"CombPosition", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CombPosition, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CombPosition, (char *)"CombPosition", NULL},
    ///组合多头冻结 
    {(char *)"CombLongFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CombLongFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CombLongFrozen, (char *)"CombLongFrozen", NULL},
    ///组合空头冻结 
    {(char *)"CombShortFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CombShortFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CombShortFrozen, (char *)"CombShortFrozen", NULL},
    ///逐日盯市平仓盈亏 
    {(char *)"CloseProfitByDate", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CloseProfitByDate, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CloseProfitByDate, (char *)"CloseProfitByDate", NULL},
    ///逐笔对冲平仓盈亏 
    {(char *)"CloseProfitByTrade", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CloseProfitByTrade, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CloseProfitByTrade, (char *)"CloseProfitByTrade", NULL},
    ///今日持仓 
    {(char *)"TodayPosition", (getter)PyCThostFtdcSyncingInvestorPositionField_get_TodayPosition, (setter)PyCThostFtdcSyncingInvestorPositionField_set_TodayPosition, (char *)"TodayPosition", NULL},
    ///保证金率 
    {(char *)"MarginRateByMoney", (getter)PyCThostFtdcSyncingInvestorPositionField_get_MarginRateByMoney, (setter)PyCThostFtdcSyncingInvestorPositionField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
    ///保证金率(按手数) 
    {(char *)"MarginRateByVolume", (getter)PyCThostFtdcSyncingInvestorPositionField_get_MarginRateByVolume, (setter)PyCThostFtdcSyncingInvestorPositionField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
    ///执行冻结 
    {(char *)"StrikeFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_StrikeFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_StrikeFrozen, (char *)"StrikeFrozen", NULL},
    ///执行冻结金额 
    {(char *)"StrikeFrozenAmount", (getter)PyCThostFtdcSyncingInvestorPositionField_get_StrikeFrozenAmount, (setter)PyCThostFtdcSyncingInvestorPositionField_set_StrikeFrozenAmount, (char *)"StrikeFrozenAmount", NULL},
    ///放弃执行冻结 
    {(char *)"AbandonFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_AbandonFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_AbandonFrozen, (char *)"AbandonFrozen", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_ExchangeID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///执行冻结的昨仓 
    {(char *)"YdStrikeFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_YdStrikeFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_YdStrikeFrozen, (char *)"YdStrikeFrozen", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_InvestUnitID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///持仓成本差值 
    {(char *)"PositionCostOffset", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PositionCostOffset, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PositionCostOffset, (char *)"PositionCostOffset", NULL},
    ///tas持仓手数 
    {(char *)"TasPosition", (getter)PyCThostFtdcSyncingInvestorPositionField_get_TasPosition, (setter)PyCThostFtdcSyncingInvestorPositionField_set_TasPosition, (char *)"TasPosition", NULL},
    ///tas持仓成本 
    {(char *)"TasPositionCost", (getter)PyCThostFtdcSyncingInvestorPositionField_get_TasPositionCost, (setter)PyCThostFtdcSyncingInvestorPositionField_set_TasPositionCost, (char *)"TasPositionCost", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_InstrumentID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingInvestorPositionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingInvestorPositionField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingInvestorPositionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingInvestorPositionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingInvestorPositionField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingInvestorPositionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingInvestorPositionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingInvestorPositionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingInvestorPositionField_new,       /* tp_new */
};

int PyCThostFtdcSyncingInvestorPositionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingInvestorPositionField  */
	if (PyType_Ready(&PyCThostFtdcSyncingInvestorPositionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingInvestorPositionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingInvestorPositionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingInvestorPositionField", (PyObject *)&PyCThostFtdcSyncingInvestorPositionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInvestorPositionField to module");
        Py_DECREF(&PyCThostFtdcSyncingInvestorPositionFieldType);
		return -1;
    }

    return 0;
}
