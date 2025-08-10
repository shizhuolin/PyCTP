
#include "PyCThostFtdcInvestorPositionField.h"

///投资者持仓

static PyObject *PyCThostFtdcInvestorPositionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorPositionField *self = (PyCThostFtdcInvestorPositionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorPositionField_init(PyCThostFtdcInvestorPositionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "BrokerID", "InvestorID", "PosiDirection", "HedgeFlag", "PositionDate", "YdPosition", "Position", "LongFrozen", "ShortFrozen", "LongFrozenAmount", "ShortFrozenAmount", "OpenVolume", "CloseVolume", "OpenAmount", "CloseAmount", "PositionCost", "PreMargin", "UseMargin", "FrozenMargin", "FrozenCash", "FrozenCommission", "CashIn", "Commission", "CloseProfit", "PositionProfit", "PreSettlementPrice", "SettlementPrice", "TradingDay", "SettlementID", "OpenCost", "ExchangeMargin", "CombPosition", "CombLongFrozen", "CombShortFrozen", "CloseProfitByDate", "CloseProfitByTrade", "TodayPosition", "MarginRateByMoney", "MarginRateByVolume", "StrikeFrozen", "StrikeFrozenAmount", "AbandonFrozen", "ExchangeID", "YdStrikeFrozen", "InvestUnitID", "PositionCostOffset", "TasPosition", "TasPositionCost", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InvestorPositionField_reserve1 = NULL;
    Py_ssize_t InvestorPositionField_reserve1_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorPositionField_BrokerID = NULL;
    Py_ssize_t InvestorPositionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorPositionField_InvestorID = NULL;
    Py_ssize_t InvestorPositionField_InvestorID_len = 0;
            
    ///持仓多空方向
    // TThostFtdcPosiDirectionType char
    char InvestorPositionField_PosiDirection = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InvestorPositionField_HedgeFlag = 0;
            
    ///持仓日期
    // TThostFtdcPositionDateType char
    char InvestorPositionField_PositionDate = 0;
            
    ///上日持仓
    // TThostFtdcVolumeType int
    int InvestorPositionField_YdPosition = 0;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    int InvestorPositionField_Position = 0;
        
    ///多头冻结
    // TThostFtdcVolumeType int
    int InvestorPositionField_LongFrozen = 0;
        
    ///空头冻结
    // TThostFtdcVolumeType int
    int InvestorPositionField_ShortFrozen = 0;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    double InvestorPositionField_LongFrozenAmount = 0.0;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    double InvestorPositionField_ShortFrozenAmount = 0.0;
        
    ///开仓量
    // TThostFtdcVolumeType int
    int InvestorPositionField_OpenVolume = 0;
        
    ///平仓量
    // TThostFtdcVolumeType int
    int InvestorPositionField_CloseVolume = 0;
        
    ///开仓金额
    // TThostFtdcMoneyType double
    double InvestorPositionField_OpenAmount = 0.0;
        
    ///平仓金额
    // TThostFtdcMoneyType double
    double InvestorPositionField_CloseAmount = 0.0;
        
    ///持仓成本
    // TThostFtdcMoneyType double
    double InvestorPositionField_PositionCost = 0.0;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    double InvestorPositionField_PreMargin = 0.0;
        
    ///占用的保证金
    // TThostFtdcMoneyType double
    double InvestorPositionField_UseMargin = 0.0;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    double InvestorPositionField_FrozenMargin = 0.0;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    double InvestorPositionField_FrozenCash = 0.0;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    double InvestorPositionField_FrozenCommission = 0.0;
        
    ///资金差额
    // TThostFtdcMoneyType double
    double InvestorPositionField_CashIn = 0.0;
        
    ///手续费
    // TThostFtdcMoneyType double
    double InvestorPositionField_Commission = 0.0;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    double InvestorPositionField_CloseProfit = 0.0;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    double InvestorPositionField_PositionProfit = 0.0;
        
    ///上次结算价
    // TThostFtdcPriceType double
    double InvestorPositionField_PreSettlementPrice = 0.0;
        
    ///本次结算价
    // TThostFtdcPriceType double
    double InvestorPositionField_SettlementPrice = 0.0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *InvestorPositionField_TradingDay = NULL;
    Py_ssize_t InvestorPositionField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int InvestorPositionField_SettlementID = 0;
        
    ///开仓成本
    // TThostFtdcMoneyType double
    double InvestorPositionField_OpenCost = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double InvestorPositionField_ExchangeMargin = 0.0;
        
    ///组合成交形成的持仓
    // TThostFtdcVolumeType int
    int InvestorPositionField_CombPosition = 0;
        
    ///组合多头冻结
    // TThostFtdcVolumeType int
    int InvestorPositionField_CombLongFrozen = 0;
        
    ///组合空头冻结
    // TThostFtdcVolumeType int
    int InvestorPositionField_CombShortFrozen = 0;
        
    ///逐日盯市平仓盈亏
    // TThostFtdcMoneyType double
    double InvestorPositionField_CloseProfitByDate = 0.0;
        
    ///逐笔对冲平仓盈亏
    // TThostFtdcMoneyType double
    double InvestorPositionField_CloseProfitByTrade = 0.0;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    int InvestorPositionField_TodayPosition = 0;
        
    ///保证金率
    // TThostFtdcRatioType double
    double InvestorPositionField_MarginRateByMoney = 0.0;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    double InvestorPositionField_MarginRateByVolume = 0.0;
        
    ///执行冻结
    // TThostFtdcVolumeType int
    int InvestorPositionField_StrikeFrozen = 0;
        
    ///执行冻结金额
    // TThostFtdcMoneyType double
    double InvestorPositionField_StrikeFrozenAmount = 0.0;
        
    ///放弃执行冻结
    // TThostFtdcVolumeType int
    int InvestorPositionField_AbandonFrozen = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorPositionField_ExchangeID = NULL;
    Py_ssize_t InvestorPositionField_ExchangeID_len = 0;
            
    ///执行冻结的昨仓
    // TThostFtdcVolumeType int
    int InvestorPositionField_YdStrikeFrozen = 0;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InvestorPositionField_InvestUnitID = NULL;
    Py_ssize_t InvestorPositionField_InvestUnitID_len = 0;
            
    ///持仓成本差值
    // TThostFtdcMoneyType double
    double InvestorPositionField_PositionCostOffset = 0.0;
        
    ///tas持仓手数
    // TThostFtdcVolumeType int
    int InvestorPositionField_TasPosition = 0;
        
    ///tas持仓成本
    // TThostFtdcMoneyType double
    double InvestorPositionField_TasPositionCost = 0.0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InvestorPositionField_InstrumentID = NULL;
    Py_ssize_t InvestorPositionField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccciiiiddiiddddddddddddddy#iddiiiddiddidiy#iy#didy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ccciiiiddiidddddddddddddds#iddiiiddiddidis#is#dids#", (char **)kwlist
#endif

        , &InvestorPositionField_reserve1, &InvestorPositionField_reserve1_len 
        , &InvestorPositionField_BrokerID, &InvestorPositionField_BrokerID_len 
        , &InvestorPositionField_InvestorID, &InvestorPositionField_InvestorID_len 
        , &InvestorPositionField_PosiDirection 
        , &InvestorPositionField_HedgeFlag 
        , &InvestorPositionField_PositionDate 
        , &InvestorPositionField_YdPosition 
        , &InvestorPositionField_Position 
        , &InvestorPositionField_LongFrozen 
        , &InvestorPositionField_ShortFrozen 
        , &InvestorPositionField_LongFrozenAmount 
        , &InvestorPositionField_ShortFrozenAmount 
        , &InvestorPositionField_OpenVolume 
        , &InvestorPositionField_CloseVolume 
        , &InvestorPositionField_OpenAmount 
        , &InvestorPositionField_CloseAmount 
        , &InvestorPositionField_PositionCost 
        , &InvestorPositionField_PreMargin 
        , &InvestorPositionField_UseMargin 
        , &InvestorPositionField_FrozenMargin 
        , &InvestorPositionField_FrozenCash 
        , &InvestorPositionField_FrozenCommission 
        , &InvestorPositionField_CashIn 
        , &InvestorPositionField_Commission 
        , &InvestorPositionField_CloseProfit 
        , &InvestorPositionField_PositionProfit 
        , &InvestorPositionField_PreSettlementPrice 
        , &InvestorPositionField_SettlementPrice 
        , &InvestorPositionField_TradingDay, &InvestorPositionField_TradingDay_len 
        , &InvestorPositionField_SettlementID 
        , &InvestorPositionField_OpenCost 
        , &InvestorPositionField_ExchangeMargin 
        , &InvestorPositionField_CombPosition 
        , &InvestorPositionField_CombLongFrozen 
        , &InvestorPositionField_CombShortFrozen 
        , &InvestorPositionField_CloseProfitByDate 
        , &InvestorPositionField_CloseProfitByTrade 
        , &InvestorPositionField_TodayPosition 
        , &InvestorPositionField_MarginRateByMoney 
        , &InvestorPositionField_MarginRateByVolume 
        , &InvestorPositionField_StrikeFrozen 
        , &InvestorPositionField_StrikeFrozenAmount 
        , &InvestorPositionField_AbandonFrozen 
        , &InvestorPositionField_ExchangeID, &InvestorPositionField_ExchangeID_len 
        , &InvestorPositionField_YdStrikeFrozen 
        , &InvestorPositionField_InvestUnitID, &InvestorPositionField_InvestUnitID_len 
        , &InvestorPositionField_PositionCostOffset 
        , &InvestorPositionField_TasPosition 
        , &InvestorPositionField_TasPositionCost 
        , &InvestorPositionField_InstrumentID, &InvestorPositionField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InvestorPositionField_reserve1 != NULL ) {
        if(InvestorPositionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InvestorPositionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InvestorPositionField_reserve1, InvestorPositionField_reserve1_len);        
        strncpy(self->data.reserve1, InvestorPositionField_reserve1, sizeof(self->data.reserve1) );
        InvestorPositionField_reserve1 = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorPositionField_BrokerID != NULL ) {
        if(InvestorPositionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorPositionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorPositionField_BrokerID, InvestorPositionField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorPositionField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorPositionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorPositionField_InvestorID != NULL ) {
        if(InvestorPositionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorPositionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorPositionField_InvestorID, InvestorPositionField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorPositionField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorPositionField_InvestorID = NULL;
    }
            
    ///持仓多空方向
    // TThostFtdcPosiDirectionType char
    self->data.PosiDirection = InvestorPositionField_PosiDirection;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InvestorPositionField_HedgeFlag;
            
    ///持仓日期
    // TThostFtdcPositionDateType char
    self->data.PositionDate = InvestorPositionField_PositionDate;
            
    ///上日持仓
    // TThostFtdcVolumeType int
    self->data.YdPosition = InvestorPositionField_YdPosition;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    self->data.Position = InvestorPositionField_Position;
        
    ///多头冻结
    // TThostFtdcVolumeType int
    self->data.LongFrozen = InvestorPositionField_LongFrozen;
        
    ///空头冻结
    // TThostFtdcVolumeType int
    self->data.ShortFrozen = InvestorPositionField_ShortFrozen;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    self->data.LongFrozenAmount = InvestorPositionField_LongFrozenAmount;
        
    ///开仓冻结金额
    // TThostFtdcMoneyType double
    self->data.ShortFrozenAmount = InvestorPositionField_ShortFrozenAmount;
        
    ///开仓量
    // TThostFtdcVolumeType int
    self->data.OpenVolume = InvestorPositionField_OpenVolume;
        
    ///平仓量
    // TThostFtdcVolumeType int
    self->data.CloseVolume = InvestorPositionField_CloseVolume;
        
    ///开仓金额
    // TThostFtdcMoneyType double
    self->data.OpenAmount = InvestorPositionField_OpenAmount;
        
    ///平仓金额
    // TThostFtdcMoneyType double
    self->data.CloseAmount = InvestorPositionField_CloseAmount;
        
    ///持仓成本
    // TThostFtdcMoneyType double
    self->data.PositionCost = InvestorPositionField_PositionCost;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    self->data.PreMargin = InvestorPositionField_PreMargin;
        
    ///占用的保证金
    // TThostFtdcMoneyType double
    self->data.UseMargin = InvestorPositionField_UseMargin;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    self->data.FrozenMargin = InvestorPositionField_FrozenMargin;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    self->data.FrozenCash = InvestorPositionField_FrozenCash;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    self->data.FrozenCommission = InvestorPositionField_FrozenCommission;
        
    ///资金差额
    // TThostFtdcMoneyType double
    self->data.CashIn = InvestorPositionField_CashIn;
        
    ///手续费
    // TThostFtdcMoneyType double
    self->data.Commission = InvestorPositionField_Commission;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfit = InvestorPositionField_CloseProfit;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    self->data.PositionProfit = InvestorPositionField_PositionProfit;
        
    ///上次结算价
    // TThostFtdcPriceType double
    self->data.PreSettlementPrice = InvestorPositionField_PreSettlementPrice;
        
    ///本次结算价
    // TThostFtdcPriceType double
    self->data.SettlementPrice = InvestorPositionField_SettlementPrice;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( InvestorPositionField_TradingDay != NULL ) {
        if(InvestorPositionField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", InvestorPositionField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, InvestorPositionField_TradingDay, InvestorPositionField_TradingDay_len);        
        strncpy(self->data.TradingDay, InvestorPositionField_TradingDay, sizeof(self->data.TradingDay) );
        InvestorPositionField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = InvestorPositionField_SettlementID;
        
    ///开仓成本
    // TThostFtdcMoneyType double
    self->data.OpenCost = InvestorPositionField_OpenCost;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchangeMargin = InvestorPositionField_ExchangeMargin;
        
    ///组合成交形成的持仓
    // TThostFtdcVolumeType int
    self->data.CombPosition = InvestorPositionField_CombPosition;
        
    ///组合多头冻结
    // TThostFtdcVolumeType int
    self->data.CombLongFrozen = InvestorPositionField_CombLongFrozen;
        
    ///组合空头冻结
    // TThostFtdcVolumeType int
    self->data.CombShortFrozen = InvestorPositionField_CombShortFrozen;
        
    ///逐日盯市平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfitByDate = InvestorPositionField_CloseProfitByDate;
        
    ///逐笔对冲平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfitByTrade = InvestorPositionField_CloseProfitByTrade;
        
    ///今日持仓
    // TThostFtdcVolumeType int
    self->data.TodayPosition = InvestorPositionField_TodayPosition;
        
    ///保证金率
    // TThostFtdcRatioType double
    self->data.MarginRateByMoney = InvestorPositionField_MarginRateByMoney;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    self->data.MarginRateByVolume = InvestorPositionField_MarginRateByVolume;
        
    ///执行冻结
    // TThostFtdcVolumeType int
    self->data.StrikeFrozen = InvestorPositionField_StrikeFrozen;
        
    ///执行冻结金额
    // TThostFtdcMoneyType double
    self->data.StrikeFrozenAmount = InvestorPositionField_StrikeFrozenAmount;
        
    ///放弃执行冻结
    // TThostFtdcVolumeType int
    self->data.AbandonFrozen = InvestorPositionField_AbandonFrozen;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorPositionField_ExchangeID != NULL ) {
        if(InvestorPositionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorPositionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorPositionField_ExchangeID, InvestorPositionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorPositionField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorPositionField_ExchangeID = NULL;
    }
            
    ///执行冻结的昨仓
    // TThostFtdcVolumeType int
    self->data.YdStrikeFrozen = InvestorPositionField_YdStrikeFrozen;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InvestorPositionField_InvestUnitID != NULL ) {
        if(InvestorPositionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InvestorPositionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InvestorPositionField_InvestUnitID, InvestorPositionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InvestorPositionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InvestorPositionField_InvestUnitID = NULL;
    }
            
    ///持仓成本差值
    // TThostFtdcMoneyType double
    self->data.PositionCostOffset = InvestorPositionField_PositionCostOffset;
        
    ///tas持仓手数
    // TThostFtdcVolumeType int
    self->data.TasPosition = InvestorPositionField_TasPosition;
        
    ///tas持仓成本
    // TThostFtdcMoneyType double
    self->data.TasPositionCost = InvestorPositionField_TasPositionCost;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InvestorPositionField_InstrumentID != NULL ) {
        if(InvestorPositionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InvestorPositionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InvestorPositionField_InstrumentID, InvestorPositionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InvestorPositionField_InstrumentID, sizeof(self->data.InstrumentID) );
        InvestorPositionField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInvestorPositionField_dealloc(PyCThostFtdcInvestorPositionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorPositionField_repr(PyCThostFtdcInvestorPositionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInvestorPositionField_get_reserve1(PyCThostFtdcInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInvestorPositionField_set_reserve1(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_BrokerID(PyCThostFtdcInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorPositionField_set_BrokerID(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_InvestorID(PyCThostFtdcInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorPositionField_set_InvestorID(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_PosiDirection(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

///持仓多空方向
// TThostFtdcPosiDirectionType char
static int PyCThostFtdcInvestorPositionField_set_PosiDirection(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_HedgeFlag(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInvestorPositionField_set_HedgeFlag(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_PositionDate(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PositionDate), 1);
}

///持仓日期
// TThostFtdcPositionDateType char
static int PyCThostFtdcInvestorPositionField_set_PositionDate(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_YdPosition(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.YdPosition);
#else
    return PyInt_FromLong(self->data.YdPosition);
#endif
}

///上日持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_YdPosition(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_Position(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Position);
#else
    return PyInt_FromLong(self->data.Position);
#endif
}

///今日持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_Position(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_LongFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LongFrozen);
#else
    return PyInt_FromLong(self->data.LongFrozen);
#endif
}

///多头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_LongFrozen(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_ShortFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ShortFrozen);
#else
    return PyInt_FromLong(self->data.ShortFrozen);
#endif
}

///空头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_ShortFrozen(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_LongFrozenAmount(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongFrozenAmount);
}

///开仓冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_LongFrozenAmount(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_ShortFrozenAmount(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortFrozenAmount);
}

///开仓冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_ShortFrozenAmount(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_OpenVolume(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OpenVolume);
#else
    return PyInt_FromLong(self->data.OpenVolume);
#endif
}

///开仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_OpenVolume(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_CloseVolume(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CloseVolume);
#else
    return PyInt_FromLong(self->data.CloseVolume);
#endif
}

///平仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_CloseVolume(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_OpenAmount(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenAmount);
}

///开仓金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_OpenAmount(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_CloseAmount(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseAmount);
}

///平仓金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_CloseAmount(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_PositionCost(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionCost);
}

///持仓成本
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_PositionCost(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_PreMargin(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreMargin);
}

///上次占用的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_PreMargin(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_UseMargin(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UseMargin);
}

///占用的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_UseMargin(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_FrozenMargin(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenMargin);
}

///冻结的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_FrozenMargin(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_FrozenCash(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCash);
}

///冻结的资金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_FrozenCash(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_FrozenCommission(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCommission);
}

///冻结的手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_FrozenCommission(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_CashIn(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CashIn);
}

///资金差额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_CashIn(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_Commission(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Commission);
}

///手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_Commission(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_CloseProfit(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfit);
}

///平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_CloseProfit(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_PositionProfit(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionProfit);
}

///持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_PositionProfit(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_PreSettlementPrice(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

///上次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcInvestorPositionField_set_PreSettlementPrice(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_SettlementPrice(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SettlementPrice);
}

///本次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcInvestorPositionField_set_SettlementPrice(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_TradingDay(PyCThostFtdcInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcInvestorPositionField_set_TradingDay(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_SettlementID(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcInvestorPositionField_set_SettlementID(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_OpenCost(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenCost);
}

///开仓成本
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_OpenCost(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_ExchangeMargin(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchangeMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_ExchangeMargin(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_CombPosition(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CombPosition);
#else
    return PyInt_FromLong(self->data.CombPosition);
#endif
}

///组合成交形成的持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_CombPosition(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_CombLongFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CombLongFrozen);
#else
    return PyInt_FromLong(self->data.CombLongFrozen);
#endif
}

///组合多头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_CombLongFrozen(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_CombShortFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CombShortFrozen);
#else
    return PyInt_FromLong(self->data.CombShortFrozen);
#endif
}

///组合空头冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_CombShortFrozen(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_CloseProfitByDate(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfitByDate);
}

///逐日盯市平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_CloseProfitByDate(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_CloseProfitByTrade(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfitByTrade);
}

///逐笔对冲平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_CloseProfitByTrade(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_TodayPosition(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TodayPosition);
#else
    return PyInt_FromLong(self->data.TodayPosition);
#endif
}

///今日持仓
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_TodayPosition(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_MarginRateByMoney(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

///保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcInvestorPositionField_set_MarginRateByMoney(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_MarginRateByVolume(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

///保证金率(按手数)
// TThostFtdcRatioType double
static int PyCThostFtdcInvestorPositionField_set_MarginRateByVolume(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_StrikeFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.StrikeFrozen);
#else
    return PyInt_FromLong(self->data.StrikeFrozen);
#endif
}

///执行冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_StrikeFrozen(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_StrikeFrozenAmount(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StrikeFrozenAmount);
}

///执行冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_StrikeFrozenAmount(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_AbandonFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AbandonFrozen);
#else
    return PyInt_FromLong(self->data.AbandonFrozen);
#endif
}

///放弃执行冻结
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_AbandonFrozen(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_ExchangeID(PyCThostFtdcInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorPositionField_set_ExchangeID(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_YdStrikeFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.YdStrikeFrozen);
#else
    return PyInt_FromLong(self->data.YdStrikeFrozen);
#endif
}

///执行冻结的昨仓
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_YdStrikeFrozen(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_InvestUnitID(PyCThostFtdcInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInvestorPositionField_set_InvestUnitID(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_PositionCostOffset(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionCostOffset);
}

///持仓成本差值
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_PositionCostOffset(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_TasPosition(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TasPosition);
#else
    return PyInt_FromLong(self->data.TasPosition);
#endif
}

///tas持仓手数
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorPositionField_set_TasPosition(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_TasPositionCost(PyCThostFtdcInvestorPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TasPositionCost);
}

///tas持仓成本
// TThostFtdcMoneyType double
static int PyCThostFtdcInvestorPositionField_set_TasPositionCost(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPositionField_get_InstrumentID(PyCThostFtdcInvestorPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInvestorPositionField_set_InstrumentID(PyCThostFtdcInvestorPositionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInvestorPositionField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInvestorPositionField_get_reserve1, (setter)PyCThostFtdcInvestorPositionField_set_reserve1, (char *)"reserve1", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorPositionField_get_BrokerID, (setter)PyCThostFtdcInvestorPositionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorPositionField_get_InvestorID, (setter)PyCThostFtdcInvestorPositionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///持仓多空方向 
    {(char *)"PosiDirection", (getter)PyCThostFtdcInvestorPositionField_get_PosiDirection, (setter)PyCThostFtdcInvestorPositionField_set_PosiDirection, (char *)"PosiDirection", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorPositionField_get_HedgeFlag, (setter)PyCThostFtdcInvestorPositionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///持仓日期 
    {(char *)"PositionDate", (getter)PyCThostFtdcInvestorPositionField_get_PositionDate, (setter)PyCThostFtdcInvestorPositionField_set_PositionDate, (char *)"PositionDate", NULL},
    ///上日持仓 
    {(char *)"YdPosition", (getter)PyCThostFtdcInvestorPositionField_get_YdPosition, (setter)PyCThostFtdcInvestorPositionField_set_YdPosition, (char *)"YdPosition", NULL},
    ///今日持仓 
    {(char *)"Position", (getter)PyCThostFtdcInvestorPositionField_get_Position, (setter)PyCThostFtdcInvestorPositionField_set_Position, (char *)"Position", NULL},
    ///多头冻结 
    {(char *)"LongFrozen", (getter)PyCThostFtdcInvestorPositionField_get_LongFrozen, (setter)PyCThostFtdcInvestorPositionField_set_LongFrozen, (char *)"LongFrozen", NULL},
    ///空头冻结 
    {(char *)"ShortFrozen", (getter)PyCThostFtdcInvestorPositionField_get_ShortFrozen, (setter)PyCThostFtdcInvestorPositionField_set_ShortFrozen, (char *)"ShortFrozen", NULL},
    ///开仓冻结金额 
    {(char *)"LongFrozenAmount", (getter)PyCThostFtdcInvestorPositionField_get_LongFrozenAmount, (setter)PyCThostFtdcInvestorPositionField_set_LongFrozenAmount, (char *)"LongFrozenAmount", NULL},
    ///开仓冻结金额 
    {(char *)"ShortFrozenAmount", (getter)PyCThostFtdcInvestorPositionField_get_ShortFrozenAmount, (setter)PyCThostFtdcInvestorPositionField_set_ShortFrozenAmount, (char *)"ShortFrozenAmount", NULL},
    ///开仓量 
    {(char *)"OpenVolume", (getter)PyCThostFtdcInvestorPositionField_get_OpenVolume, (setter)PyCThostFtdcInvestorPositionField_set_OpenVolume, (char *)"OpenVolume", NULL},
    ///平仓量 
    {(char *)"CloseVolume", (getter)PyCThostFtdcInvestorPositionField_get_CloseVolume, (setter)PyCThostFtdcInvestorPositionField_set_CloseVolume, (char *)"CloseVolume", NULL},
    ///开仓金额 
    {(char *)"OpenAmount", (getter)PyCThostFtdcInvestorPositionField_get_OpenAmount, (setter)PyCThostFtdcInvestorPositionField_set_OpenAmount, (char *)"OpenAmount", NULL},
    ///平仓金额 
    {(char *)"CloseAmount", (getter)PyCThostFtdcInvestorPositionField_get_CloseAmount, (setter)PyCThostFtdcInvestorPositionField_set_CloseAmount, (char *)"CloseAmount", NULL},
    ///持仓成本 
    {(char *)"PositionCost", (getter)PyCThostFtdcInvestorPositionField_get_PositionCost, (setter)PyCThostFtdcInvestorPositionField_set_PositionCost, (char *)"PositionCost", NULL},
    ///上次占用的保证金 
    {(char *)"PreMargin", (getter)PyCThostFtdcInvestorPositionField_get_PreMargin, (setter)PyCThostFtdcInvestorPositionField_set_PreMargin, (char *)"PreMargin", NULL},
    ///占用的保证金 
    {(char *)"UseMargin", (getter)PyCThostFtdcInvestorPositionField_get_UseMargin, (setter)PyCThostFtdcInvestorPositionField_set_UseMargin, (char *)"UseMargin", NULL},
    ///冻结的保证金 
    {(char *)"FrozenMargin", (getter)PyCThostFtdcInvestorPositionField_get_FrozenMargin, (setter)PyCThostFtdcInvestorPositionField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
    ///冻结的资金 
    {(char *)"FrozenCash", (getter)PyCThostFtdcInvestorPositionField_get_FrozenCash, (setter)PyCThostFtdcInvestorPositionField_set_FrozenCash, (char *)"FrozenCash", NULL},
    ///冻结的手续费 
    {(char *)"FrozenCommission", (getter)PyCThostFtdcInvestorPositionField_get_FrozenCommission, (setter)PyCThostFtdcInvestorPositionField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
    ///资金差额 
    {(char *)"CashIn", (getter)PyCThostFtdcInvestorPositionField_get_CashIn, (setter)PyCThostFtdcInvestorPositionField_set_CashIn, (char *)"CashIn", NULL},
    ///手续费 
    {(char *)"Commission", (getter)PyCThostFtdcInvestorPositionField_get_Commission, (setter)PyCThostFtdcInvestorPositionField_set_Commission, (char *)"Commission", NULL},
    ///平仓盈亏 
    {(char *)"CloseProfit", (getter)PyCThostFtdcInvestorPositionField_get_CloseProfit, (setter)PyCThostFtdcInvestorPositionField_set_CloseProfit, (char *)"CloseProfit", NULL},
    ///持仓盈亏 
    {(char *)"PositionProfit", (getter)PyCThostFtdcInvestorPositionField_get_PositionProfit, (setter)PyCThostFtdcInvestorPositionField_set_PositionProfit, (char *)"PositionProfit", NULL},
    ///上次结算价 
    {(char *)"PreSettlementPrice", (getter)PyCThostFtdcInvestorPositionField_get_PreSettlementPrice, (setter)PyCThostFtdcInvestorPositionField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
    ///本次结算价 
    {(char *)"SettlementPrice", (getter)PyCThostFtdcInvestorPositionField_get_SettlementPrice, (setter)PyCThostFtdcInvestorPositionField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcInvestorPositionField_get_TradingDay, (setter)PyCThostFtdcInvestorPositionField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcInvestorPositionField_get_SettlementID, (setter)PyCThostFtdcInvestorPositionField_set_SettlementID, (char *)"SettlementID", NULL},
    ///开仓成本 
    {(char *)"OpenCost", (getter)PyCThostFtdcInvestorPositionField_get_OpenCost, (setter)PyCThostFtdcInvestorPositionField_set_OpenCost, (char *)"OpenCost", NULL},
    ///交易所保证金 
    {(char *)"ExchangeMargin", (getter)PyCThostFtdcInvestorPositionField_get_ExchangeMargin, (setter)PyCThostFtdcInvestorPositionField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
    ///组合成交形成的持仓 
    {(char *)"CombPosition", (getter)PyCThostFtdcInvestorPositionField_get_CombPosition, (setter)PyCThostFtdcInvestorPositionField_set_CombPosition, (char *)"CombPosition", NULL},
    ///组合多头冻结 
    {(char *)"CombLongFrozen", (getter)PyCThostFtdcInvestorPositionField_get_CombLongFrozen, (setter)PyCThostFtdcInvestorPositionField_set_CombLongFrozen, (char *)"CombLongFrozen", NULL},
    ///组合空头冻结 
    {(char *)"CombShortFrozen", (getter)PyCThostFtdcInvestorPositionField_get_CombShortFrozen, (setter)PyCThostFtdcInvestorPositionField_set_CombShortFrozen, (char *)"CombShortFrozen", NULL},
    ///逐日盯市平仓盈亏 
    {(char *)"CloseProfitByDate", (getter)PyCThostFtdcInvestorPositionField_get_CloseProfitByDate, (setter)PyCThostFtdcInvestorPositionField_set_CloseProfitByDate, (char *)"CloseProfitByDate", NULL},
    ///逐笔对冲平仓盈亏 
    {(char *)"CloseProfitByTrade", (getter)PyCThostFtdcInvestorPositionField_get_CloseProfitByTrade, (setter)PyCThostFtdcInvestorPositionField_set_CloseProfitByTrade, (char *)"CloseProfitByTrade", NULL},
    ///今日持仓 
    {(char *)"TodayPosition", (getter)PyCThostFtdcInvestorPositionField_get_TodayPosition, (setter)PyCThostFtdcInvestorPositionField_set_TodayPosition, (char *)"TodayPosition", NULL},
    ///保证金率 
    {(char *)"MarginRateByMoney", (getter)PyCThostFtdcInvestorPositionField_get_MarginRateByMoney, (setter)PyCThostFtdcInvestorPositionField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
    ///保证金率(按手数) 
    {(char *)"MarginRateByVolume", (getter)PyCThostFtdcInvestorPositionField_get_MarginRateByVolume, (setter)PyCThostFtdcInvestorPositionField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
    ///执行冻结 
    {(char *)"StrikeFrozen", (getter)PyCThostFtdcInvestorPositionField_get_StrikeFrozen, (setter)PyCThostFtdcInvestorPositionField_set_StrikeFrozen, (char *)"StrikeFrozen", NULL},
    ///执行冻结金额 
    {(char *)"StrikeFrozenAmount", (getter)PyCThostFtdcInvestorPositionField_get_StrikeFrozenAmount, (setter)PyCThostFtdcInvestorPositionField_set_StrikeFrozenAmount, (char *)"StrikeFrozenAmount", NULL},
    ///放弃执行冻结 
    {(char *)"AbandonFrozen", (getter)PyCThostFtdcInvestorPositionField_get_AbandonFrozen, (setter)PyCThostFtdcInvestorPositionField_set_AbandonFrozen, (char *)"AbandonFrozen", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorPositionField_get_ExchangeID, (setter)PyCThostFtdcInvestorPositionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///执行冻结的昨仓 
    {(char *)"YdStrikeFrozen", (getter)PyCThostFtdcInvestorPositionField_get_YdStrikeFrozen, (setter)PyCThostFtdcInvestorPositionField_set_YdStrikeFrozen, (char *)"YdStrikeFrozen", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInvestorPositionField_get_InvestUnitID, (setter)PyCThostFtdcInvestorPositionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///持仓成本差值 
    {(char *)"PositionCostOffset", (getter)PyCThostFtdcInvestorPositionField_get_PositionCostOffset, (setter)PyCThostFtdcInvestorPositionField_set_PositionCostOffset, (char *)"PositionCostOffset", NULL},
    ///tas持仓手数 
    {(char *)"TasPosition", (getter)PyCThostFtdcInvestorPositionField_get_TasPosition, (setter)PyCThostFtdcInvestorPositionField_set_TasPosition, (char *)"TasPosition", NULL},
    ///tas持仓成本 
    {(char *)"TasPositionCost", (getter)PyCThostFtdcInvestorPositionField_get_TasPositionCost, (setter)PyCThostFtdcInvestorPositionField_set_TasPositionCost, (char *)"TasPositionCost", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInvestorPositionField_get_InstrumentID, (setter)PyCThostFtdcInvestorPositionField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorPositionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorPositionField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorPositionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorPositionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorPositionField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorPositionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorPositionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorPositionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorPositionField_new,       /* tp_new */
};

int PyCThostFtdcInvestorPositionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorPositionField  */
	if (PyType_Ready(&PyCThostFtdcInvestorPositionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorPositionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorPositionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorPositionField", (PyObject *)&PyCThostFtdcInvestorPositionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPositionField to module");
        Py_DECREF(&PyCThostFtdcInvestorPositionFieldType);
		return -1;
    }

    return 0;
}
