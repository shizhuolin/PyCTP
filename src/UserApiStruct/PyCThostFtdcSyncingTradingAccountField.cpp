
#include "PyCThostFtdcSyncingTradingAccountField.h"

///正在同步中的交易账号

static PyObject *PyCThostFtdcSyncingTradingAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingTradingAccountField *self = (PyCThostFtdcSyncingTradingAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingTradingAccountField_init(PyCThostFtdcSyncingTradingAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "PreMortgage", "PreCredit", "PreDeposit", "PreBalance", "PreMargin", "InterestBase", "Interest", "Deposit", "Withdraw", "FrozenMargin", "FrozenCash", "FrozenCommission", "CurrMargin", "CashIn", "Commission", "CloseProfit", "PositionProfit", "Balance", "Available", "WithdrawQuota", "Reserve", "TradingDay", "SettlementID", "Credit", "Mortgage", "ExchangeMargin", "DeliveryMargin", "ExchangeDeliveryMargin", "ReserveBalance", "CurrencyID", "PreFundMortgageIn", "PreFundMortgageOut", "FundMortgageIn", "FundMortgageOut", "FundMortgageAvailable", "MortgageableFund", "SpecProductMargin", "SpecProductFrozenMargin", "SpecProductCommission", "SpecProductFrozenCommission", "SpecProductPositionProfit", "SpecProductCloseProfit", "SpecProductPositionProfitByAlg", "SpecProductExchangeMargin", "FrozenSwap", "RemainSwap",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncingTradingAccountField_BrokerID = NULL;
    Py_ssize_t SyncingTradingAccountField_BrokerID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *SyncingTradingAccountField_AccountID = NULL;
    Py_ssize_t SyncingTradingAccountField_AccountID_len = 0;
            
    ///上次质押金额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_PreMortgage = 0.0;
        
    ///上次信用额度
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_PreCredit = 0.0;
        
    ///上次存款额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_PreDeposit = 0.0;
        
    ///上次结算准备金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_PreBalance = 0.0;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_PreMargin = 0.0;
        
    ///利息基数
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_InterestBase = 0.0;
        
    ///利息收入
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_Interest = 0.0;
        
    ///入金金额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_Deposit = 0.0;
        
    ///出金金额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_Withdraw = 0.0;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_FrozenMargin = 0.0;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_FrozenCash = 0.0;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_FrozenCommission = 0.0;
        
    ///当前保证金总额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_CurrMargin = 0.0;
        
    ///资金差额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_CashIn = 0.0;
        
    ///手续费
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_Commission = 0.0;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_CloseProfit = 0.0;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_PositionProfit = 0.0;
        
    ///期货结算准备金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_Balance = 0.0;
        
    ///可用资金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_Available = 0.0;
        
    ///可取资金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_WithdrawQuota = 0.0;
        
    ///基本准备金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_Reserve = 0.0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncingTradingAccountField_TradingDay = NULL;
    Py_ssize_t SyncingTradingAccountField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int SyncingTradingAccountField_SettlementID = 0;
        
    ///信用额度
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_Credit = 0.0;
        
    ///质押金额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_Mortgage = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_ExchangeMargin = 0.0;
        
    ///投资者交割保证金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_DeliveryMargin = 0.0;
        
    ///交易所交割保证金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_ExchangeDeliveryMargin = 0.0;
        
    ///保底期货结算准备金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_ReserveBalance = 0.0;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *SyncingTradingAccountField_CurrencyID = NULL;
    Py_ssize_t SyncingTradingAccountField_CurrencyID_len = 0;
            
    ///上次货币质入金额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_PreFundMortgageIn = 0.0;
        
    ///上次货币质出金额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_PreFundMortgageOut = 0.0;
        
    ///货币质入金额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_FundMortgageIn = 0.0;
        
    ///货币质出金额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_FundMortgageOut = 0.0;
        
    ///货币质押余额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_FundMortgageAvailable = 0.0;
        
    ///可质押货币金额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_MortgageableFund = 0.0;
        
    ///特殊产品占用保证金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_SpecProductMargin = 0.0;
        
    ///特殊产品冻结保证金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_SpecProductFrozenMargin = 0.0;
        
    ///特殊产品手续费
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_SpecProductCommission = 0.0;
        
    ///特殊产品冻结手续费
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_SpecProductFrozenCommission = 0.0;
        
    ///特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_SpecProductPositionProfit = 0.0;
        
    ///特殊产品平仓盈亏
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_SpecProductCloseProfit = 0.0;
        
    ///根据持仓盈亏算法计算的特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_SpecProductPositionProfitByAlg = 0.0;
        
    ///特殊产品交易所保证金
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_SpecProductExchangeMargin = 0.0;
        
    ///延时换汇冻结金额
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_FrozenSwap = 0.0;
        
    ///剩余换汇额度
    // TThostFtdcMoneyType double
    double SyncingTradingAccountField_RemainSwap = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dddddddddddddddddddddy#iddddddy#dddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ddddddddddddddddddddds#idddddds#dddddddddddddddd", (char **)kwlist
#endif

        , &SyncingTradingAccountField_BrokerID, &SyncingTradingAccountField_BrokerID_len 
        , &SyncingTradingAccountField_AccountID, &SyncingTradingAccountField_AccountID_len 
        , &SyncingTradingAccountField_PreMortgage 
        , &SyncingTradingAccountField_PreCredit 
        , &SyncingTradingAccountField_PreDeposit 
        , &SyncingTradingAccountField_PreBalance 
        , &SyncingTradingAccountField_PreMargin 
        , &SyncingTradingAccountField_InterestBase 
        , &SyncingTradingAccountField_Interest 
        , &SyncingTradingAccountField_Deposit 
        , &SyncingTradingAccountField_Withdraw 
        , &SyncingTradingAccountField_FrozenMargin 
        , &SyncingTradingAccountField_FrozenCash 
        , &SyncingTradingAccountField_FrozenCommission 
        , &SyncingTradingAccountField_CurrMargin 
        , &SyncingTradingAccountField_CashIn 
        , &SyncingTradingAccountField_Commission 
        , &SyncingTradingAccountField_CloseProfit 
        , &SyncingTradingAccountField_PositionProfit 
        , &SyncingTradingAccountField_Balance 
        , &SyncingTradingAccountField_Available 
        , &SyncingTradingAccountField_WithdrawQuota 
        , &SyncingTradingAccountField_Reserve 
        , &SyncingTradingAccountField_TradingDay, &SyncingTradingAccountField_TradingDay_len 
        , &SyncingTradingAccountField_SettlementID 
        , &SyncingTradingAccountField_Credit 
        , &SyncingTradingAccountField_Mortgage 
        , &SyncingTradingAccountField_ExchangeMargin 
        , &SyncingTradingAccountField_DeliveryMargin 
        , &SyncingTradingAccountField_ExchangeDeliveryMargin 
        , &SyncingTradingAccountField_ReserveBalance 
        , &SyncingTradingAccountField_CurrencyID, &SyncingTradingAccountField_CurrencyID_len 
        , &SyncingTradingAccountField_PreFundMortgageIn 
        , &SyncingTradingAccountField_PreFundMortgageOut 
        , &SyncingTradingAccountField_FundMortgageIn 
        , &SyncingTradingAccountField_FundMortgageOut 
        , &SyncingTradingAccountField_FundMortgageAvailable 
        , &SyncingTradingAccountField_MortgageableFund 
        , &SyncingTradingAccountField_SpecProductMargin 
        , &SyncingTradingAccountField_SpecProductFrozenMargin 
        , &SyncingTradingAccountField_SpecProductCommission 
        , &SyncingTradingAccountField_SpecProductFrozenCommission 
        , &SyncingTradingAccountField_SpecProductPositionProfit 
        , &SyncingTradingAccountField_SpecProductCloseProfit 
        , &SyncingTradingAccountField_SpecProductPositionProfitByAlg 
        , &SyncingTradingAccountField_SpecProductExchangeMargin 
        , &SyncingTradingAccountField_FrozenSwap 
        , &SyncingTradingAccountField_RemainSwap 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncingTradingAccountField_BrokerID != NULL ) {
        if(SyncingTradingAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncingTradingAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncingTradingAccountField_BrokerID, SyncingTradingAccountField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncingTradingAccountField_BrokerID, sizeof(self->data.BrokerID) );
        SyncingTradingAccountField_BrokerID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( SyncingTradingAccountField_AccountID != NULL ) {
        if(SyncingTradingAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", SyncingTradingAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, SyncingTradingAccountField_AccountID, SyncingTradingAccountField_AccountID_len);        
        strncpy(self->data.AccountID, SyncingTradingAccountField_AccountID, sizeof(self->data.AccountID) );
        SyncingTradingAccountField_AccountID = NULL;
    }
            
    ///上次质押金额
    // TThostFtdcMoneyType double
    self->data.PreMortgage = SyncingTradingAccountField_PreMortgage;
        
    ///上次信用额度
    // TThostFtdcMoneyType double
    self->data.PreCredit = SyncingTradingAccountField_PreCredit;
        
    ///上次存款额
    // TThostFtdcMoneyType double
    self->data.PreDeposit = SyncingTradingAccountField_PreDeposit;
        
    ///上次结算准备金
    // TThostFtdcMoneyType double
    self->data.PreBalance = SyncingTradingAccountField_PreBalance;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    self->data.PreMargin = SyncingTradingAccountField_PreMargin;
        
    ///利息基数
    // TThostFtdcMoneyType double
    self->data.InterestBase = SyncingTradingAccountField_InterestBase;
        
    ///利息收入
    // TThostFtdcMoneyType double
    self->data.Interest = SyncingTradingAccountField_Interest;
        
    ///入金金额
    // TThostFtdcMoneyType double
    self->data.Deposit = SyncingTradingAccountField_Deposit;
        
    ///出金金额
    // TThostFtdcMoneyType double
    self->data.Withdraw = SyncingTradingAccountField_Withdraw;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    self->data.FrozenMargin = SyncingTradingAccountField_FrozenMargin;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    self->data.FrozenCash = SyncingTradingAccountField_FrozenCash;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    self->data.FrozenCommission = SyncingTradingAccountField_FrozenCommission;
        
    ///当前保证金总额
    // TThostFtdcMoneyType double
    self->data.CurrMargin = SyncingTradingAccountField_CurrMargin;
        
    ///资金差额
    // TThostFtdcMoneyType double
    self->data.CashIn = SyncingTradingAccountField_CashIn;
        
    ///手续费
    // TThostFtdcMoneyType double
    self->data.Commission = SyncingTradingAccountField_Commission;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfit = SyncingTradingAccountField_CloseProfit;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    self->data.PositionProfit = SyncingTradingAccountField_PositionProfit;
        
    ///期货结算准备金
    // TThostFtdcMoneyType double
    self->data.Balance = SyncingTradingAccountField_Balance;
        
    ///可用资金
    // TThostFtdcMoneyType double
    self->data.Available = SyncingTradingAccountField_Available;
        
    ///可取资金
    // TThostFtdcMoneyType double
    self->data.WithdrawQuota = SyncingTradingAccountField_WithdrawQuota;
        
    ///基本准备金
    // TThostFtdcMoneyType double
    self->data.Reserve = SyncingTradingAccountField_Reserve;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncingTradingAccountField_TradingDay != NULL ) {
        if(SyncingTradingAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncingTradingAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncingTradingAccountField_TradingDay, SyncingTradingAccountField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncingTradingAccountField_TradingDay, sizeof(self->data.TradingDay) );
        SyncingTradingAccountField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = SyncingTradingAccountField_SettlementID;
        
    ///信用额度
    // TThostFtdcMoneyType double
    self->data.Credit = SyncingTradingAccountField_Credit;
        
    ///质押金额
    // TThostFtdcMoneyType double
    self->data.Mortgage = SyncingTradingAccountField_Mortgage;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchangeMargin = SyncingTradingAccountField_ExchangeMargin;
        
    ///投资者交割保证金
    // TThostFtdcMoneyType double
    self->data.DeliveryMargin = SyncingTradingAccountField_DeliveryMargin;
        
    ///交易所交割保证金
    // TThostFtdcMoneyType double
    self->data.ExchangeDeliveryMargin = SyncingTradingAccountField_ExchangeDeliveryMargin;
        
    ///保底期货结算准备金
    // TThostFtdcMoneyType double
    self->data.ReserveBalance = SyncingTradingAccountField_ReserveBalance;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( SyncingTradingAccountField_CurrencyID != NULL ) {
        if(SyncingTradingAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", SyncingTradingAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, SyncingTradingAccountField_CurrencyID, SyncingTradingAccountField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, SyncingTradingAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
        SyncingTradingAccountField_CurrencyID = NULL;
    }
            
    ///上次货币质入金额
    // TThostFtdcMoneyType double
    self->data.PreFundMortgageIn = SyncingTradingAccountField_PreFundMortgageIn;
        
    ///上次货币质出金额
    // TThostFtdcMoneyType double
    self->data.PreFundMortgageOut = SyncingTradingAccountField_PreFundMortgageOut;
        
    ///货币质入金额
    // TThostFtdcMoneyType double
    self->data.FundMortgageIn = SyncingTradingAccountField_FundMortgageIn;
        
    ///货币质出金额
    // TThostFtdcMoneyType double
    self->data.FundMortgageOut = SyncingTradingAccountField_FundMortgageOut;
        
    ///货币质押余额
    // TThostFtdcMoneyType double
    self->data.FundMortgageAvailable = SyncingTradingAccountField_FundMortgageAvailable;
        
    ///可质押货币金额
    // TThostFtdcMoneyType double
    self->data.MortgageableFund = SyncingTradingAccountField_MortgageableFund;
        
    ///特殊产品占用保证金
    // TThostFtdcMoneyType double
    self->data.SpecProductMargin = SyncingTradingAccountField_SpecProductMargin;
        
    ///特殊产品冻结保证金
    // TThostFtdcMoneyType double
    self->data.SpecProductFrozenMargin = SyncingTradingAccountField_SpecProductFrozenMargin;
        
    ///特殊产品手续费
    // TThostFtdcMoneyType double
    self->data.SpecProductCommission = SyncingTradingAccountField_SpecProductCommission;
        
    ///特殊产品冻结手续费
    // TThostFtdcMoneyType double
    self->data.SpecProductFrozenCommission = SyncingTradingAccountField_SpecProductFrozenCommission;
        
    ///特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    self->data.SpecProductPositionProfit = SyncingTradingAccountField_SpecProductPositionProfit;
        
    ///特殊产品平仓盈亏
    // TThostFtdcMoneyType double
    self->data.SpecProductCloseProfit = SyncingTradingAccountField_SpecProductCloseProfit;
        
    ///根据持仓盈亏算法计算的特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    self->data.SpecProductPositionProfitByAlg = SyncingTradingAccountField_SpecProductPositionProfitByAlg;
        
    ///特殊产品交易所保证金
    // TThostFtdcMoneyType double
    self->data.SpecProductExchangeMargin = SyncingTradingAccountField_SpecProductExchangeMargin;
        
    ///延时换汇冻结金额
    // TThostFtdcMoneyType double
    self->data.FrozenSwap = SyncingTradingAccountField_FrozenSwap;
        
    ///剩余换汇额度
    // TThostFtdcMoneyType double
    self->data.RemainSwap = SyncingTradingAccountField_RemainSwap;
        

    return 0;
}

static void PyCThostFtdcSyncingTradingAccountField_dealloc(PyCThostFtdcSyncingTradingAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_repr(PyCThostFtdcSyncingTradingAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingTradingAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_BrokerID(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncingTradingAccountField_set_BrokerID(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_AccountID(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcSyncingTradingAccountField_set_AccountID(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreMortgage(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreMortgage);
}

///上次质押金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_PreMortgage(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreCredit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreCredit);
}

///上次信用额度
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_PreCredit(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreDeposit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreDeposit);
}

///上次存款额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_PreDeposit(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreBalance(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreBalance);
}

///上次结算准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_PreBalance(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreMargin);
}

///上次占用的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_PreMargin(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_InterestBase(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterestBase);
}

///利息基数
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_InterestBase(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Interest(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Interest);
}

///利息收入
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_Interest(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Deposit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Deposit);
}

///入金金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_Deposit(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Withdraw(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Withdraw);
}

///出金金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_Withdraw(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FrozenMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenMargin);
}

///冻结的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_FrozenMargin(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FrozenCash(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCash);
}

///冻结的资金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_FrozenCash(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FrozenCommission(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCommission);
}

///冻结的手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_FrozenCommission(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_CurrMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CurrMargin);
}

///当前保证金总额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_CurrMargin(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_CashIn(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CashIn);
}

///资金差额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_CashIn(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Commission(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Commission);
}

///手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_Commission(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_CloseProfit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfit);
}

///平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_CloseProfit(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PositionProfit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionProfit);
}

///持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_PositionProfit(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Balance(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Balance);
}

///期货结算准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_Balance(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Available(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Available);
}

///可用资金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_Available(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_WithdrawQuota(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.WithdrawQuota);
}

///可取资金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_WithdrawQuota(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Reserve(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Reserve);
}

///基本准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_Reserve(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_TradingDay(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncingTradingAccountField_set_TradingDay(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SettlementID(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcSyncingTradingAccountField_set_SettlementID(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Credit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Credit);
}

///信用额度
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_Credit(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Mortgage(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Mortgage);
}

///质押金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_Mortgage(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_ExchangeMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchangeMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_ExchangeMargin(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_DeliveryMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.DeliveryMargin);
}

///投资者交割保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_DeliveryMargin(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_ExchangeDeliveryMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchangeDeliveryMargin);
}

///交易所交割保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_ExchangeDeliveryMargin(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_ReserveBalance(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ReserveBalance);
}

///保底期货结算准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_ReserveBalance(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_CurrencyID(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSyncingTradingAccountField_set_CurrencyID(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreFundMortgageIn(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreFundMortgageIn);
}

///上次货币质入金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_PreFundMortgageIn(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreFundMortgageOut(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreFundMortgageOut);
}

///上次货币质出金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_PreFundMortgageOut(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FundMortgageIn(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FundMortgageIn);
}

///货币质入金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_FundMortgageIn(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FundMortgageOut(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FundMortgageOut);
}

///货币质出金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_FundMortgageOut(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FundMortgageAvailable(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FundMortgageAvailable);
}

///货币质押余额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_FundMortgageAvailable(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_MortgageableFund(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MortgageableFund);
}

///可质押货币金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_MortgageableFund(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductMargin);
}

///特殊产品占用保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductMargin(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductFrozenMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductFrozenMargin);
}

///特殊产品冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductFrozenMargin(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductCommission(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductCommission);
}

///特殊产品手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductCommission(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductFrozenCommission(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductFrozenCommission);
}

///特殊产品冻结手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductFrozenCommission(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductPositionProfit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductPositionProfit);
}

///特殊产品持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductPositionProfit(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductCloseProfit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductCloseProfit);
}

///特殊产品平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductCloseProfit(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductPositionProfitByAlg(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductPositionProfitByAlg);
}

///根据持仓盈亏算法计算的特殊产品持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductPositionProfitByAlg(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductExchangeMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductExchangeMargin);
}

///特殊产品交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductExchangeMargin(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FrozenSwap(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenSwap);
}

///延时换汇冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_FrozenSwap(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingAccountField_get_RemainSwap(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.RemainSwap);
}

///剩余换汇额度
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingTradingAccountField_set_RemainSwap(PyCThostFtdcSyncingTradingAccountField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncingTradingAccountField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncingTradingAccountField_get_BrokerID, (setter)PyCThostFtdcSyncingTradingAccountField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcSyncingTradingAccountField_get_AccountID, (setter)PyCThostFtdcSyncingTradingAccountField_set_AccountID, (char *)"AccountID", NULL},
    ///上次质押金额 
    {(char *)"PreMortgage", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreMortgage, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreMortgage, (char *)"PreMortgage", NULL},
    ///上次信用额度 
    {(char *)"PreCredit", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreCredit, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreCredit, (char *)"PreCredit", NULL},
    ///上次存款额 
    {(char *)"PreDeposit", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreDeposit, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreDeposit, (char *)"PreDeposit", NULL},
    ///上次结算准备金 
    {(char *)"PreBalance", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreBalance, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreBalance, (char *)"PreBalance", NULL},
    ///上次占用的保证金 
    {(char *)"PreMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreMargin, (char *)"PreMargin", NULL},
    ///利息基数 
    {(char *)"InterestBase", (getter)PyCThostFtdcSyncingTradingAccountField_get_InterestBase, (setter)PyCThostFtdcSyncingTradingAccountField_set_InterestBase, (char *)"InterestBase", NULL},
    ///利息收入 
    {(char *)"Interest", (getter)PyCThostFtdcSyncingTradingAccountField_get_Interest, (setter)PyCThostFtdcSyncingTradingAccountField_set_Interest, (char *)"Interest", NULL},
    ///入金金额 
    {(char *)"Deposit", (getter)PyCThostFtdcSyncingTradingAccountField_get_Deposit, (setter)PyCThostFtdcSyncingTradingAccountField_set_Deposit, (char *)"Deposit", NULL},
    ///出金金额 
    {(char *)"Withdraw", (getter)PyCThostFtdcSyncingTradingAccountField_get_Withdraw, (setter)PyCThostFtdcSyncingTradingAccountField_set_Withdraw, (char *)"Withdraw", NULL},
    ///冻结的保证金 
    {(char *)"FrozenMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_FrozenMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
    ///冻结的资金 
    {(char *)"FrozenCash", (getter)PyCThostFtdcSyncingTradingAccountField_get_FrozenCash, (setter)PyCThostFtdcSyncingTradingAccountField_set_FrozenCash, (char *)"FrozenCash", NULL},
    ///冻结的手续费 
    {(char *)"FrozenCommission", (getter)PyCThostFtdcSyncingTradingAccountField_get_FrozenCommission, (setter)PyCThostFtdcSyncingTradingAccountField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
    ///当前保证金总额 
    {(char *)"CurrMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_CurrMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_CurrMargin, (char *)"CurrMargin", NULL},
    ///资金差额 
    {(char *)"CashIn", (getter)PyCThostFtdcSyncingTradingAccountField_get_CashIn, (setter)PyCThostFtdcSyncingTradingAccountField_set_CashIn, (char *)"CashIn", NULL},
    ///手续费 
    {(char *)"Commission", (getter)PyCThostFtdcSyncingTradingAccountField_get_Commission, (setter)PyCThostFtdcSyncingTradingAccountField_set_Commission, (char *)"Commission", NULL},
    ///平仓盈亏 
    {(char *)"CloseProfit", (getter)PyCThostFtdcSyncingTradingAccountField_get_CloseProfit, (setter)PyCThostFtdcSyncingTradingAccountField_set_CloseProfit, (char *)"CloseProfit", NULL},
    ///持仓盈亏 
    {(char *)"PositionProfit", (getter)PyCThostFtdcSyncingTradingAccountField_get_PositionProfit, (setter)PyCThostFtdcSyncingTradingAccountField_set_PositionProfit, (char *)"PositionProfit", NULL},
    ///期货结算准备金 
    {(char *)"Balance", (getter)PyCThostFtdcSyncingTradingAccountField_get_Balance, (setter)PyCThostFtdcSyncingTradingAccountField_set_Balance, (char *)"Balance", NULL},
    ///可用资金 
    {(char *)"Available", (getter)PyCThostFtdcSyncingTradingAccountField_get_Available, (setter)PyCThostFtdcSyncingTradingAccountField_set_Available, (char *)"Available", NULL},
    ///可取资金 
    {(char *)"WithdrawQuota", (getter)PyCThostFtdcSyncingTradingAccountField_get_WithdrawQuota, (setter)PyCThostFtdcSyncingTradingAccountField_set_WithdrawQuota, (char *)"WithdrawQuota", NULL},
    ///基本准备金 
    {(char *)"Reserve", (getter)PyCThostFtdcSyncingTradingAccountField_get_Reserve, (setter)PyCThostFtdcSyncingTradingAccountField_set_Reserve, (char *)"Reserve", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncingTradingAccountField_get_TradingDay, (setter)PyCThostFtdcSyncingTradingAccountField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcSyncingTradingAccountField_get_SettlementID, (setter)PyCThostFtdcSyncingTradingAccountField_set_SettlementID, (char *)"SettlementID", NULL},
    ///信用额度 
    {(char *)"Credit", (getter)PyCThostFtdcSyncingTradingAccountField_get_Credit, (setter)PyCThostFtdcSyncingTradingAccountField_set_Credit, (char *)"Credit", NULL},
    ///质押金额 
    {(char *)"Mortgage", (getter)PyCThostFtdcSyncingTradingAccountField_get_Mortgage, (setter)PyCThostFtdcSyncingTradingAccountField_set_Mortgage, (char *)"Mortgage", NULL},
    ///交易所保证金 
    {(char *)"ExchangeMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_ExchangeMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
    ///投资者交割保证金 
    {(char *)"DeliveryMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_DeliveryMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_DeliveryMargin, (char *)"DeliveryMargin", NULL},
    ///交易所交割保证金 
    {(char *)"ExchangeDeliveryMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_ExchangeDeliveryMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_ExchangeDeliveryMargin, (char *)"ExchangeDeliveryMargin", NULL},
    ///保底期货结算准备金 
    {(char *)"ReserveBalance", (getter)PyCThostFtdcSyncingTradingAccountField_get_ReserveBalance, (setter)PyCThostFtdcSyncingTradingAccountField_set_ReserveBalance, (char *)"ReserveBalance", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcSyncingTradingAccountField_get_CurrencyID, (setter)PyCThostFtdcSyncingTradingAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///上次货币质入金额 
    {(char *)"PreFundMortgageIn", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreFundMortgageIn, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreFundMortgageIn, (char *)"PreFundMortgageIn", NULL},
    ///上次货币质出金额 
    {(char *)"PreFundMortgageOut", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreFundMortgageOut, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreFundMortgageOut, (char *)"PreFundMortgageOut", NULL},
    ///货币质入金额 
    {(char *)"FundMortgageIn", (getter)PyCThostFtdcSyncingTradingAccountField_get_FundMortgageIn, (setter)PyCThostFtdcSyncingTradingAccountField_set_FundMortgageIn, (char *)"FundMortgageIn", NULL},
    ///货币质出金额 
    {(char *)"FundMortgageOut", (getter)PyCThostFtdcSyncingTradingAccountField_get_FundMortgageOut, (setter)PyCThostFtdcSyncingTradingAccountField_set_FundMortgageOut, (char *)"FundMortgageOut", NULL},
    ///货币质押余额 
    {(char *)"FundMortgageAvailable", (getter)PyCThostFtdcSyncingTradingAccountField_get_FundMortgageAvailable, (setter)PyCThostFtdcSyncingTradingAccountField_set_FundMortgageAvailable, (char *)"FundMortgageAvailable", NULL},
    ///可质押货币金额 
    {(char *)"MortgageableFund", (getter)PyCThostFtdcSyncingTradingAccountField_get_MortgageableFund, (setter)PyCThostFtdcSyncingTradingAccountField_set_MortgageableFund, (char *)"MortgageableFund", NULL},
    ///特殊产品占用保证金 
    {(char *)"SpecProductMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductMargin, (char *)"SpecProductMargin", NULL},
    ///特殊产品冻结保证金 
    {(char *)"SpecProductFrozenMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductFrozenMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductFrozenMargin, (char *)"SpecProductFrozenMargin", NULL},
    ///特殊产品手续费 
    {(char *)"SpecProductCommission", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductCommission, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductCommission, (char *)"SpecProductCommission", NULL},
    ///特殊产品冻结手续费 
    {(char *)"SpecProductFrozenCommission", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductFrozenCommission, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductFrozenCommission, (char *)"SpecProductFrozenCommission", NULL},
    ///特殊产品持仓盈亏 
    {(char *)"SpecProductPositionProfit", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductPositionProfit, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductPositionProfit, (char *)"SpecProductPositionProfit", NULL},
    ///特殊产品平仓盈亏 
    {(char *)"SpecProductCloseProfit", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductCloseProfit, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductCloseProfit, (char *)"SpecProductCloseProfit", NULL},
    ///根据持仓盈亏算法计算的特殊产品持仓盈亏 
    {(char *)"SpecProductPositionProfitByAlg", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductPositionProfitByAlg, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductPositionProfitByAlg, (char *)"SpecProductPositionProfitByAlg", NULL},
    ///特殊产品交易所保证金 
    {(char *)"SpecProductExchangeMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductExchangeMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductExchangeMargin, (char *)"SpecProductExchangeMargin", NULL},
    ///延时换汇冻结金额 
    {(char *)"FrozenSwap", (getter)PyCThostFtdcSyncingTradingAccountField_get_FrozenSwap, (setter)PyCThostFtdcSyncingTradingAccountField_set_FrozenSwap, (char *)"FrozenSwap", NULL},
    ///剩余换汇额度 
    {(char *)"RemainSwap", (getter)PyCThostFtdcSyncingTradingAccountField_get_RemainSwap, (setter)PyCThostFtdcSyncingTradingAccountField_set_RemainSwap, (char *)"RemainSwap", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingTradingAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingTradingAccountField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingTradingAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingTradingAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingTradingAccountField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingTradingAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingTradingAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingTradingAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingTradingAccountField_new,       /* tp_new */
};

int PyCThostFtdcSyncingTradingAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingTradingAccountField  */
	if (PyType_Ready(&PyCThostFtdcSyncingTradingAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingTradingAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingTradingAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingTradingAccountField", (PyObject *)&PyCThostFtdcSyncingTradingAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingTradingAccountField to module");
        Py_DECREF(&PyCThostFtdcSyncingTradingAccountFieldType);
		return -1;
    }

    return 0;
}
