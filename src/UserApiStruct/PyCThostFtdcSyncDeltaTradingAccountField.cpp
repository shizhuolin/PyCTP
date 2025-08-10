
#include "PyCThostFtdcSyncDeltaTradingAccountField.h"

///风险结算追平资金

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaTradingAccountField *self = (PyCThostFtdcSyncDeltaTradingAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaTradingAccountField_init(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "PreMortgage", "PreCredit", "PreDeposit", "PreBalance", "PreMargin", "InterestBase", "Interest", "Deposit", "Withdraw", "FrozenMargin", "FrozenCash", "FrozenCommission", "CurrMargin", "CashIn", "Commission", "CloseProfit", "PositionProfit", "Balance", "Available", "WithdrawQuota", "Reserve", "TradingDay", "SettlementID", "Credit", "Mortgage", "ExchangeMargin", "DeliveryMargin", "ExchangeDeliveryMargin", "ReserveBalance", "CurrencyID", "PreFundMortgageIn", "PreFundMortgageOut", "FundMortgageIn", "FundMortgageOut", "FundMortgageAvailable", "MortgageableFund", "SpecProductMargin", "SpecProductFrozenMargin", "SpecProductCommission", "SpecProductFrozenCommission", "SpecProductPositionProfit", "SpecProductCloseProfit", "SpecProductPositionProfitByAlg", "SpecProductExchangeMargin", "FrozenSwap", "RemainSwap", "SyncDeltaSequenceNo",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaTradingAccountField_BrokerID = NULL;
    Py_ssize_t SyncDeltaTradingAccountField_BrokerID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *SyncDeltaTradingAccountField_AccountID = NULL;
    Py_ssize_t SyncDeltaTradingAccountField_AccountID_len = 0;
            
    ///上次质押金额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_PreMortgage = 0.0;
        
    ///上次信用额度
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_PreCredit = 0.0;
        
    ///上次存款额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_PreDeposit = 0.0;
        
    ///上次结算准备金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_PreBalance = 0.0;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_PreMargin = 0.0;
        
    ///利息基数
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_InterestBase = 0.0;
        
    ///利息收入
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_Interest = 0.0;
        
    ///入金金额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_Deposit = 0.0;
        
    ///出金金额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_Withdraw = 0.0;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_FrozenMargin = 0.0;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_FrozenCash = 0.0;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_FrozenCommission = 0.0;
        
    ///当前保证金总额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_CurrMargin = 0.0;
        
    ///资金差额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_CashIn = 0.0;
        
    ///手续费
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_Commission = 0.0;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_CloseProfit = 0.0;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_PositionProfit = 0.0;
        
    ///期货结算准备金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_Balance = 0.0;
        
    ///可用资金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_Available = 0.0;
        
    ///可取资金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_WithdrawQuota = 0.0;
        
    ///基本准备金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_Reserve = 0.0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaTradingAccountField_TradingDay = NULL;
    Py_ssize_t SyncDeltaTradingAccountField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int SyncDeltaTradingAccountField_SettlementID = 0;
        
    ///信用额度
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_Credit = 0.0;
        
    ///质押金额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_Mortgage = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_ExchangeMargin = 0.0;
        
    ///投资者交割保证金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_DeliveryMargin = 0.0;
        
    ///交易所交割保证金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_ExchangeDeliveryMargin = 0.0;
        
    ///保底期货结算准备金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_ReserveBalance = 0.0;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *SyncDeltaTradingAccountField_CurrencyID = NULL;
    Py_ssize_t SyncDeltaTradingAccountField_CurrencyID_len = 0;
            
    ///上次货币质入金额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_PreFundMortgageIn = 0.0;
        
    ///上次货币质出金额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_PreFundMortgageOut = 0.0;
        
    ///货币质入金额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_FundMortgageIn = 0.0;
        
    ///货币质出金额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_FundMortgageOut = 0.0;
        
    ///货币质押余额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_FundMortgageAvailable = 0.0;
        
    ///可质押货币金额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_MortgageableFund = 0.0;
        
    ///特殊产品占用保证金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_SpecProductMargin = 0.0;
        
    ///特殊产品冻结保证金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_SpecProductFrozenMargin = 0.0;
        
    ///特殊产品手续费
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_SpecProductCommission = 0.0;
        
    ///特殊产品冻结手续费
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_SpecProductFrozenCommission = 0.0;
        
    ///特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_SpecProductPositionProfit = 0.0;
        
    ///特殊产品平仓盈亏
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_SpecProductCloseProfit = 0.0;
        
    ///根据持仓盈亏算法计算的特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_SpecProductPositionProfitByAlg = 0.0;
        
    ///特殊产品交易所保证金
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_SpecProductExchangeMargin = 0.0;
        
    ///延时换汇冻结金额
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_FrozenSwap = 0.0;
        
    ///剩余换汇额度
    // TThostFtdcMoneyType double
    double SyncDeltaTradingAccountField_RemainSwap = 0.0;
        
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaTradingAccountField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dddddddddddddddddddddy#iddddddy#ddddddddddddddddi", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ddddddddddddddddddddds#idddddds#ddddddddddddddddi", (char **)kwlist
#endif

        , &SyncDeltaTradingAccountField_BrokerID, &SyncDeltaTradingAccountField_BrokerID_len 
        , &SyncDeltaTradingAccountField_AccountID, &SyncDeltaTradingAccountField_AccountID_len 
        , &SyncDeltaTradingAccountField_PreMortgage 
        , &SyncDeltaTradingAccountField_PreCredit 
        , &SyncDeltaTradingAccountField_PreDeposit 
        , &SyncDeltaTradingAccountField_PreBalance 
        , &SyncDeltaTradingAccountField_PreMargin 
        , &SyncDeltaTradingAccountField_InterestBase 
        , &SyncDeltaTradingAccountField_Interest 
        , &SyncDeltaTradingAccountField_Deposit 
        , &SyncDeltaTradingAccountField_Withdraw 
        , &SyncDeltaTradingAccountField_FrozenMargin 
        , &SyncDeltaTradingAccountField_FrozenCash 
        , &SyncDeltaTradingAccountField_FrozenCommission 
        , &SyncDeltaTradingAccountField_CurrMargin 
        , &SyncDeltaTradingAccountField_CashIn 
        , &SyncDeltaTradingAccountField_Commission 
        , &SyncDeltaTradingAccountField_CloseProfit 
        , &SyncDeltaTradingAccountField_PositionProfit 
        , &SyncDeltaTradingAccountField_Balance 
        , &SyncDeltaTradingAccountField_Available 
        , &SyncDeltaTradingAccountField_WithdrawQuota 
        , &SyncDeltaTradingAccountField_Reserve 
        , &SyncDeltaTradingAccountField_TradingDay, &SyncDeltaTradingAccountField_TradingDay_len 
        , &SyncDeltaTradingAccountField_SettlementID 
        , &SyncDeltaTradingAccountField_Credit 
        , &SyncDeltaTradingAccountField_Mortgage 
        , &SyncDeltaTradingAccountField_ExchangeMargin 
        , &SyncDeltaTradingAccountField_DeliveryMargin 
        , &SyncDeltaTradingAccountField_ExchangeDeliveryMargin 
        , &SyncDeltaTradingAccountField_ReserveBalance 
        , &SyncDeltaTradingAccountField_CurrencyID, &SyncDeltaTradingAccountField_CurrencyID_len 
        , &SyncDeltaTradingAccountField_PreFundMortgageIn 
        , &SyncDeltaTradingAccountField_PreFundMortgageOut 
        , &SyncDeltaTradingAccountField_FundMortgageIn 
        , &SyncDeltaTradingAccountField_FundMortgageOut 
        , &SyncDeltaTradingAccountField_FundMortgageAvailable 
        , &SyncDeltaTradingAccountField_MortgageableFund 
        , &SyncDeltaTradingAccountField_SpecProductMargin 
        , &SyncDeltaTradingAccountField_SpecProductFrozenMargin 
        , &SyncDeltaTradingAccountField_SpecProductCommission 
        , &SyncDeltaTradingAccountField_SpecProductFrozenCommission 
        , &SyncDeltaTradingAccountField_SpecProductPositionProfit 
        , &SyncDeltaTradingAccountField_SpecProductCloseProfit 
        , &SyncDeltaTradingAccountField_SpecProductPositionProfitByAlg 
        , &SyncDeltaTradingAccountField_SpecProductExchangeMargin 
        , &SyncDeltaTradingAccountField_FrozenSwap 
        , &SyncDeltaTradingAccountField_RemainSwap 
        , &SyncDeltaTradingAccountField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaTradingAccountField_BrokerID != NULL ) {
        if(SyncDeltaTradingAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaTradingAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaTradingAccountField_BrokerID, SyncDeltaTradingAccountField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaTradingAccountField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaTradingAccountField_BrokerID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( SyncDeltaTradingAccountField_AccountID != NULL ) {
        if(SyncDeltaTradingAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", SyncDeltaTradingAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, SyncDeltaTradingAccountField_AccountID, SyncDeltaTradingAccountField_AccountID_len);        
        strncpy(self->data.AccountID, SyncDeltaTradingAccountField_AccountID, sizeof(self->data.AccountID) );
        SyncDeltaTradingAccountField_AccountID = NULL;
    }
            
    ///上次质押金额
    // TThostFtdcMoneyType double
    self->data.PreMortgage = SyncDeltaTradingAccountField_PreMortgage;
        
    ///上次信用额度
    // TThostFtdcMoneyType double
    self->data.PreCredit = SyncDeltaTradingAccountField_PreCredit;
        
    ///上次存款额
    // TThostFtdcMoneyType double
    self->data.PreDeposit = SyncDeltaTradingAccountField_PreDeposit;
        
    ///上次结算准备金
    // TThostFtdcMoneyType double
    self->data.PreBalance = SyncDeltaTradingAccountField_PreBalance;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    self->data.PreMargin = SyncDeltaTradingAccountField_PreMargin;
        
    ///利息基数
    // TThostFtdcMoneyType double
    self->data.InterestBase = SyncDeltaTradingAccountField_InterestBase;
        
    ///利息收入
    // TThostFtdcMoneyType double
    self->data.Interest = SyncDeltaTradingAccountField_Interest;
        
    ///入金金额
    // TThostFtdcMoneyType double
    self->data.Deposit = SyncDeltaTradingAccountField_Deposit;
        
    ///出金金额
    // TThostFtdcMoneyType double
    self->data.Withdraw = SyncDeltaTradingAccountField_Withdraw;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    self->data.FrozenMargin = SyncDeltaTradingAccountField_FrozenMargin;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    self->data.FrozenCash = SyncDeltaTradingAccountField_FrozenCash;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    self->data.FrozenCommission = SyncDeltaTradingAccountField_FrozenCommission;
        
    ///当前保证金总额
    // TThostFtdcMoneyType double
    self->data.CurrMargin = SyncDeltaTradingAccountField_CurrMargin;
        
    ///资金差额
    // TThostFtdcMoneyType double
    self->data.CashIn = SyncDeltaTradingAccountField_CashIn;
        
    ///手续费
    // TThostFtdcMoneyType double
    self->data.Commission = SyncDeltaTradingAccountField_Commission;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfit = SyncDeltaTradingAccountField_CloseProfit;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    self->data.PositionProfit = SyncDeltaTradingAccountField_PositionProfit;
        
    ///期货结算准备金
    // TThostFtdcMoneyType double
    self->data.Balance = SyncDeltaTradingAccountField_Balance;
        
    ///可用资金
    // TThostFtdcMoneyType double
    self->data.Available = SyncDeltaTradingAccountField_Available;
        
    ///可取资金
    // TThostFtdcMoneyType double
    self->data.WithdrawQuota = SyncDeltaTradingAccountField_WithdrawQuota;
        
    ///基本准备金
    // TThostFtdcMoneyType double
    self->data.Reserve = SyncDeltaTradingAccountField_Reserve;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaTradingAccountField_TradingDay != NULL ) {
        if(SyncDeltaTradingAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaTradingAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaTradingAccountField_TradingDay, SyncDeltaTradingAccountField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaTradingAccountField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaTradingAccountField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = SyncDeltaTradingAccountField_SettlementID;
        
    ///信用额度
    // TThostFtdcMoneyType double
    self->data.Credit = SyncDeltaTradingAccountField_Credit;
        
    ///质押金额
    // TThostFtdcMoneyType double
    self->data.Mortgage = SyncDeltaTradingAccountField_Mortgage;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchangeMargin = SyncDeltaTradingAccountField_ExchangeMargin;
        
    ///投资者交割保证金
    // TThostFtdcMoneyType double
    self->data.DeliveryMargin = SyncDeltaTradingAccountField_DeliveryMargin;
        
    ///交易所交割保证金
    // TThostFtdcMoneyType double
    self->data.ExchangeDeliveryMargin = SyncDeltaTradingAccountField_ExchangeDeliveryMargin;
        
    ///保底期货结算准备金
    // TThostFtdcMoneyType double
    self->data.ReserveBalance = SyncDeltaTradingAccountField_ReserveBalance;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( SyncDeltaTradingAccountField_CurrencyID != NULL ) {
        if(SyncDeltaTradingAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", SyncDeltaTradingAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, SyncDeltaTradingAccountField_CurrencyID, SyncDeltaTradingAccountField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, SyncDeltaTradingAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
        SyncDeltaTradingAccountField_CurrencyID = NULL;
    }
            
    ///上次货币质入金额
    // TThostFtdcMoneyType double
    self->data.PreFundMortgageIn = SyncDeltaTradingAccountField_PreFundMortgageIn;
        
    ///上次货币质出金额
    // TThostFtdcMoneyType double
    self->data.PreFundMortgageOut = SyncDeltaTradingAccountField_PreFundMortgageOut;
        
    ///货币质入金额
    // TThostFtdcMoneyType double
    self->data.FundMortgageIn = SyncDeltaTradingAccountField_FundMortgageIn;
        
    ///货币质出金额
    // TThostFtdcMoneyType double
    self->data.FundMortgageOut = SyncDeltaTradingAccountField_FundMortgageOut;
        
    ///货币质押余额
    // TThostFtdcMoneyType double
    self->data.FundMortgageAvailable = SyncDeltaTradingAccountField_FundMortgageAvailable;
        
    ///可质押货币金额
    // TThostFtdcMoneyType double
    self->data.MortgageableFund = SyncDeltaTradingAccountField_MortgageableFund;
        
    ///特殊产品占用保证金
    // TThostFtdcMoneyType double
    self->data.SpecProductMargin = SyncDeltaTradingAccountField_SpecProductMargin;
        
    ///特殊产品冻结保证金
    // TThostFtdcMoneyType double
    self->data.SpecProductFrozenMargin = SyncDeltaTradingAccountField_SpecProductFrozenMargin;
        
    ///特殊产品手续费
    // TThostFtdcMoneyType double
    self->data.SpecProductCommission = SyncDeltaTradingAccountField_SpecProductCommission;
        
    ///特殊产品冻结手续费
    // TThostFtdcMoneyType double
    self->data.SpecProductFrozenCommission = SyncDeltaTradingAccountField_SpecProductFrozenCommission;
        
    ///特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    self->data.SpecProductPositionProfit = SyncDeltaTradingAccountField_SpecProductPositionProfit;
        
    ///特殊产品平仓盈亏
    // TThostFtdcMoneyType double
    self->data.SpecProductCloseProfit = SyncDeltaTradingAccountField_SpecProductCloseProfit;
        
    ///根据持仓盈亏算法计算的特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    self->data.SpecProductPositionProfitByAlg = SyncDeltaTradingAccountField_SpecProductPositionProfitByAlg;
        
    ///特殊产品交易所保证金
    // TThostFtdcMoneyType double
    self->data.SpecProductExchangeMargin = SyncDeltaTradingAccountField_SpecProductExchangeMargin;
        
    ///延时换汇冻结金额
    // TThostFtdcMoneyType double
    self->data.FrozenSwap = SyncDeltaTradingAccountField_FrozenSwap;
        
    ///剩余换汇额度
    // TThostFtdcMoneyType double
    self->data.RemainSwap = SyncDeltaTradingAccountField_RemainSwap;
        
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaTradingAccountField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaTradingAccountField_dealloc(PyCThostFtdcSyncDeltaTradingAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_repr(PyCThostFtdcSyncDeltaTradingAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"PreMortgage", self->data.PreMortgage 
        ,"PreCredit", self->data.PreCredit 
        ,"PreDeposit", self->data.PreDeposit 
        ,"PreBalance", self->data.PreBalance 
        ,"PreMargin", self->data.PreMargin 
        ,"InterestBase", self->data.InterestBase 
        ,"Interest", self->data.Interest 
        ,"Deposit", self->data.Deposit 
        ,"Withdraw", self->data.Withdraw 
        ,"FrozenMargin", self->data.FrozenMargin 
        ,"FrozenCash", self->data.FrozenCash 
        ,"FrozenCommission", self->data.FrozenCommission 
        ,"CurrMargin", self->data.CurrMargin 
        ,"CashIn", self->data.CashIn 
        ,"Commission", self->data.Commission 
        ,"CloseProfit", self->data.CloseProfit 
        ,"PositionProfit", self->data.PositionProfit 
        ,"Balance", self->data.Balance 
        ,"Available", self->data.Available 
        ,"WithdrawQuota", self->data.WithdrawQuota 
        ,"Reserve", self->data.Reserve 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"Credit", self->data.Credit 
        ,"Mortgage", self->data.Mortgage 
        ,"ExchangeMargin", self->data.ExchangeMargin 
        ,"DeliveryMargin", self->data.DeliveryMargin 
        ,"ExchangeDeliveryMargin", self->data.ExchangeDeliveryMargin 
        ,"ReserveBalance", self->data.ReserveBalance 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"PreFundMortgageIn", self->data.PreFundMortgageIn 
        ,"PreFundMortgageOut", self->data.PreFundMortgageOut 
        ,"FundMortgageIn", self->data.FundMortgageIn 
        ,"FundMortgageOut", self->data.FundMortgageOut 
        ,"FundMortgageAvailable", self->data.FundMortgageAvailable 
        ,"MortgageableFund", self->data.MortgageableFund 
        ,"SpecProductMargin", self->data.SpecProductMargin 
        ,"SpecProductFrozenMargin", self->data.SpecProductFrozenMargin 
        ,"SpecProductCommission", self->data.SpecProductCommission 
        ,"SpecProductFrozenCommission", self->data.SpecProductFrozenCommission 
        ,"SpecProductPositionProfit", self->data.SpecProductPositionProfit 
        ,"SpecProductCloseProfit", self->data.SpecProductCloseProfit 
        ,"SpecProductPositionProfitByAlg", self->data.SpecProductPositionProfitByAlg 
        ,"SpecProductExchangeMargin", self->data.SpecProductExchangeMargin 
        ,"FrozenSwap", self->data.FrozenSwap 
        ,"RemainSwap", self->data.RemainSwap 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaTradingAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_BrokerID(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaTradingAccountField_set_BrokerID(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_AccountID(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcSyncDeltaTradingAccountField_set_AccountID(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
            
///上次质押金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreMortgage(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreMortgage);
}

///上次质押金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreMortgage(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreMortgage Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreMortgage = buf;
    return 0;
}
        
///上次信用额度
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreCredit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreCredit);
}

///上次信用额度
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreCredit(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreCredit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreCredit = buf;
    return 0;
}
        
///上次存款额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreDeposit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreDeposit);
}

///上次存款额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreDeposit(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreDeposit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreDeposit = buf;
    return 0;
}
        
///上次结算准备金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreBalance(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreBalance);
}

///上次结算准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreBalance(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreBalance Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreBalance = buf;
    return 0;
}
        
///上次占用的保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreMargin);
}

///上次占用的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
        
///利息基数
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_InterestBase(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterestBase);
}

///利息基数
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_InterestBase(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterestBase Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterestBase = buf;
    return 0;
}
        
///利息收入
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Interest(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Interest);
}

///利息收入
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_Interest(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Interest Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Interest = buf;
    return 0;
}
        
///入金金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Deposit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Deposit);
}

///入金金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_Deposit(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Deposit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Deposit = buf;
    return 0;
}
        
///出金金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Withdraw(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Withdraw);
}

///出金金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_Withdraw(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Withdraw Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Withdraw = buf;
    return 0;
}
        
///冻结的保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenMargin);
}

///冻结的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenCash(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCash);
}

///冻结的资金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenCash(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenCommission(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCommission);
}

///冻结的手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenCommission(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
        
///当前保证金总额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_CurrMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CurrMargin);
}

///当前保证金总额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_CurrMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CurrMargin = buf;
    return 0;
}
        
///资金差额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_CashIn(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CashIn);
}

///资金差额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_CashIn(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Commission(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Commission);
}

///手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_Commission(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_CloseProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfit);
}

///平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_CloseProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PositionProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionProfit);
}

///持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_PositionProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
        
///期货结算准备金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Balance(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Balance);
}

///期货结算准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_Balance(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Balance Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Balance = buf;
    return 0;
}
        
///可用资金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Available(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Available);
}

///可用资金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_Available(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Available Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Available = buf;
    return 0;
}
        
///可取资金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_WithdrawQuota(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.WithdrawQuota);
}

///可取资金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_WithdrawQuota(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "WithdrawQuota Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.WithdrawQuota = buf;
    return 0;
}
        
///基本准备金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Reserve(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Reserve);
}

///基本准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_Reserve(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Reserve Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Reserve = buf;
    return 0;
}
        
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_TradingDay(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaTradingAccountField_set_TradingDay(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SettlementID(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcSyncDeltaTradingAccountField_set_SettlementID(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
        
///信用额度
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Credit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Credit);
}

///信用额度
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_Credit(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Credit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Credit = buf;
    return 0;
}
        
///质押金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Mortgage(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Mortgage);
}

///质押金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_Mortgage(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Mortgage Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Mortgage = buf;
    return 0;
}
        
///交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_ExchangeMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchangeMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_ExchangeMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
        
///投资者交割保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_DeliveryMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.DeliveryMargin);
}

///投资者交割保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_DeliveryMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryMargin = buf;
    return 0;
}
        
///交易所交割保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_ExchangeDeliveryMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchangeDeliveryMargin);
}

///交易所交割保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_ExchangeDeliveryMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeDeliveryMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchangeDeliveryMargin = buf;
    return 0;
}
        
///保底期货结算准备金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_ReserveBalance(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ReserveBalance);
}

///保底期货结算准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_ReserveBalance(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ReserveBalance Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ReserveBalance = buf;
    return 0;
}
        
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_CurrencyID(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSyncDeltaTradingAccountField_set_CurrencyID(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
            
///上次货币质入金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreFundMortgageIn(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreFundMortgageIn);
}

///上次货币质入金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreFundMortgageIn(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreFundMortgageIn Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreFundMortgageIn = buf;
    return 0;
}
        
///上次货币质出金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreFundMortgageOut(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreFundMortgageOut);
}

///上次货币质出金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreFundMortgageOut(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreFundMortgageOut Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreFundMortgageOut = buf;
    return 0;
}
        
///货币质入金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageIn(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FundMortgageIn);
}

///货币质入金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageIn(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FundMortgageIn Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FundMortgageIn = buf;
    return 0;
}
        
///货币质出金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageOut(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FundMortgageOut);
}

///货币质出金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageOut(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FundMortgageOut Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FundMortgageOut = buf;
    return 0;
}
        
///货币质押余额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageAvailable(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FundMortgageAvailable);
}

///货币质押余额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageAvailable(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FundMortgageAvailable Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FundMortgageAvailable = buf;
    return 0;
}
        
///可质押货币金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_MortgageableFund(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MortgageableFund);
}

///可质押货币金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_MortgageableFund(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MortgageableFund Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MortgageableFund = buf;
    return 0;
}
        
///特殊产品占用保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductMargin);
}

///特殊产品占用保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductMargin = buf;
    return 0;
}
        
///特殊产品冻结保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductFrozenMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductFrozenMargin);
}

///特殊产品冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductFrozenMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductFrozenMargin = buf;
    return 0;
}
        
///特殊产品手续费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductCommission(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductCommission);
}

///特殊产品手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductCommission(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductCommission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductCommission = buf;
    return 0;
}
        
///特殊产品冻结手续费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductFrozenCommission(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductFrozenCommission);
}

///特殊产品冻结手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductFrozenCommission(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductFrozenCommission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductFrozenCommission = buf;
    return 0;
}
        
///特殊产品持仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductPositionProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductPositionProfit);
}

///特殊产品持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductPositionProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductPositionProfit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductPositionProfit = buf;
    return 0;
}
        
///特殊产品平仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductCloseProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductCloseProfit);
}

///特殊产品平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductCloseProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductCloseProfit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductCloseProfit = buf;
    return 0;
}
        
///根据持仓盈亏算法计算的特殊产品持仓盈亏
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductPositionProfitByAlg(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductPositionProfitByAlg);
}

///根据持仓盈亏算法计算的特殊产品持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductPositionProfitByAlg(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductPositionProfitByAlg Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductPositionProfitByAlg = buf;
    return 0;
}
        
///特殊产品交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductExchangeMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductExchangeMargin);
}

///特殊产品交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductExchangeMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductExchangeMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductExchangeMargin = buf;
    return 0;
}
        
///延时换汇冻结金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenSwap(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenSwap);
}

///延时换汇冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenSwap(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenSwap Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenSwap = buf;
    return 0;
}
        
///剩余换汇额度
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_RemainSwap(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.RemainSwap);
}

///剩余换汇额度
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaTradingAccountField_set_RemainSwap(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RemainSwap Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.RemainSwap = buf;
    return 0;
}
        
///追平序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaTradingAccountField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaTradingAccountField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_AccountID, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_AccountID, (char *)"AccountID", NULL},
    ///上次质押金额 
    {(char *)"PreMortgage", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreMortgage, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreMortgage, (char *)"PreMortgage", NULL},
    ///上次信用额度 
    {(char *)"PreCredit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreCredit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreCredit, (char *)"PreCredit", NULL},
    ///上次存款额 
    {(char *)"PreDeposit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreDeposit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreDeposit, (char *)"PreDeposit", NULL},
    ///上次结算准备金 
    {(char *)"PreBalance", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreBalance, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreBalance, (char *)"PreBalance", NULL},
    ///上次占用的保证金 
    {(char *)"PreMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreMargin, (char *)"PreMargin", NULL},
    ///利息基数 
    {(char *)"InterestBase", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_InterestBase, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_InterestBase, (char *)"InterestBase", NULL},
    ///利息收入 
    {(char *)"Interest", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Interest, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Interest, (char *)"Interest", NULL},
    ///入金金额 
    {(char *)"Deposit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Deposit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Deposit, (char *)"Deposit", NULL},
    ///出金金额 
    {(char *)"Withdraw", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Withdraw, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Withdraw, (char *)"Withdraw", NULL},
    ///冻结的保证金 
    {(char *)"FrozenMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
    ///冻结的资金 
    {(char *)"FrozenCash", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenCash, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenCash, (char *)"FrozenCash", NULL},
    ///冻结的手续费 
    {(char *)"FrozenCommission", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenCommission, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
    ///当前保证金总额 
    {(char *)"CurrMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_CurrMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_CurrMargin, (char *)"CurrMargin", NULL},
    ///资金差额 
    {(char *)"CashIn", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_CashIn, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_CashIn, (char *)"CashIn", NULL},
    ///手续费 
    {(char *)"Commission", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Commission, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Commission, (char *)"Commission", NULL},
    ///平仓盈亏 
    {(char *)"CloseProfit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_CloseProfit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_CloseProfit, (char *)"CloseProfit", NULL},
    ///持仓盈亏 
    {(char *)"PositionProfit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PositionProfit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PositionProfit, (char *)"PositionProfit", NULL},
    ///期货结算准备金 
    {(char *)"Balance", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Balance, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Balance, (char *)"Balance", NULL},
    ///可用资金 
    {(char *)"Available", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Available, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Available, (char *)"Available", NULL},
    ///可取资金 
    {(char *)"WithdrawQuota", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_WithdrawQuota, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_WithdrawQuota, (char *)"WithdrawQuota", NULL},
    ///基本准备金 
    {(char *)"Reserve", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Reserve, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Reserve, (char *)"Reserve", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SettlementID, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SettlementID, (char *)"SettlementID", NULL},
    ///信用额度 
    {(char *)"Credit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Credit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Credit, (char *)"Credit", NULL},
    ///质押金额 
    {(char *)"Mortgage", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Mortgage, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Mortgage, (char *)"Mortgage", NULL},
    ///交易所保证金 
    {(char *)"ExchangeMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_ExchangeMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
    ///投资者交割保证金 
    {(char *)"DeliveryMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_DeliveryMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_DeliveryMargin, (char *)"DeliveryMargin", NULL},
    ///交易所交割保证金 
    {(char *)"ExchangeDeliveryMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_ExchangeDeliveryMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_ExchangeDeliveryMargin, (char *)"ExchangeDeliveryMargin", NULL},
    ///保底期货结算准备金 
    {(char *)"ReserveBalance", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_ReserveBalance, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_ReserveBalance, (char *)"ReserveBalance", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_CurrencyID, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///上次货币质入金额 
    {(char *)"PreFundMortgageIn", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreFundMortgageIn, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreFundMortgageIn, (char *)"PreFundMortgageIn", NULL},
    ///上次货币质出金额 
    {(char *)"PreFundMortgageOut", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreFundMortgageOut, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreFundMortgageOut, (char *)"PreFundMortgageOut", NULL},
    ///货币质入金额 
    {(char *)"FundMortgageIn", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageIn, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageIn, (char *)"FundMortgageIn", NULL},
    ///货币质出金额 
    {(char *)"FundMortgageOut", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageOut, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageOut, (char *)"FundMortgageOut", NULL},
    ///货币质押余额 
    {(char *)"FundMortgageAvailable", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageAvailable, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageAvailable, (char *)"FundMortgageAvailable", NULL},
    ///可质押货币金额 
    {(char *)"MortgageableFund", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_MortgageableFund, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_MortgageableFund, (char *)"MortgageableFund", NULL},
    ///特殊产品占用保证金 
    {(char *)"SpecProductMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductMargin, (char *)"SpecProductMargin", NULL},
    ///特殊产品冻结保证金 
    {(char *)"SpecProductFrozenMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductFrozenMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductFrozenMargin, (char *)"SpecProductFrozenMargin", NULL},
    ///特殊产品手续费 
    {(char *)"SpecProductCommission", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductCommission, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductCommission, (char *)"SpecProductCommission", NULL},
    ///特殊产品冻结手续费 
    {(char *)"SpecProductFrozenCommission", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductFrozenCommission, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductFrozenCommission, (char *)"SpecProductFrozenCommission", NULL},
    ///特殊产品持仓盈亏 
    {(char *)"SpecProductPositionProfit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductPositionProfit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductPositionProfit, (char *)"SpecProductPositionProfit", NULL},
    ///特殊产品平仓盈亏 
    {(char *)"SpecProductCloseProfit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductCloseProfit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductCloseProfit, (char *)"SpecProductCloseProfit", NULL},
    ///根据持仓盈亏算法计算的特殊产品持仓盈亏 
    {(char *)"SpecProductPositionProfitByAlg", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductPositionProfitByAlg, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductPositionProfitByAlg, (char *)"SpecProductPositionProfitByAlg", NULL},
    ///特殊产品交易所保证金 
    {(char *)"SpecProductExchangeMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductExchangeMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductExchangeMargin, (char *)"SpecProductExchangeMargin", NULL},
    ///延时换汇冻结金额 
    {(char *)"FrozenSwap", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenSwap, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenSwap, (char *)"FrozenSwap", NULL},
    ///剩余换汇额度 
    {(char *)"RemainSwap", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_RemainSwap, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_RemainSwap, (char *)"RemainSwap", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaTradingAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaTradingAccountField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaTradingAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaTradingAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaTradingAccountField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaTradingAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaTradingAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaTradingAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaTradingAccountField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaTradingAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaTradingAccountField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaTradingAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaTradingAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaTradingAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaTradingAccountField", (PyObject *)&PyCThostFtdcSyncDeltaTradingAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaTradingAccountField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaTradingAccountFieldType);
		return -1;
    }

    return 0;
}
