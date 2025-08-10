
#include "PyCThostFtdcTradingAccountField.h"

///资金账户

static PyObject *PyCThostFtdcTradingAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountField *self = (PyCThostFtdcTradingAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountField_init(PyCThostFtdcTradingAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "PreMortgage", "PreCredit", "PreDeposit", "PreBalance", "PreMargin", "InterestBase", "Interest", "Deposit", "Withdraw", "FrozenMargin", "FrozenCash", "FrozenCommission", "CurrMargin", "CashIn", "Commission", "CloseProfit", "PositionProfit", "Balance", "Available", "WithdrawQuota", "Reserve", "TradingDay", "SettlementID", "Credit", "Mortgage", "ExchangeMargin", "DeliveryMargin", "ExchangeDeliveryMargin", "ReserveBalance", "CurrencyID", "PreFundMortgageIn", "PreFundMortgageOut", "FundMortgageIn", "FundMortgageOut", "FundMortgageAvailable", "MortgageableFund", "SpecProductMargin", "SpecProductFrozenMargin", "SpecProductCommission", "SpecProductFrozenCommission", "SpecProductPositionProfit", "SpecProductCloseProfit", "SpecProductPositionProfitByAlg", "SpecProductExchangeMargin", "BizType", "FrozenSwap", "RemainSwap",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TradingAccountField_BrokerID = NULL;
    Py_ssize_t TradingAccountField_BrokerID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *TradingAccountField_AccountID = NULL;
    Py_ssize_t TradingAccountField_AccountID_len = 0;
            
    ///上次质押金额
    // TThostFtdcMoneyType double
    double TradingAccountField_PreMortgage = 0.0;
        
    ///上次信用额度
    // TThostFtdcMoneyType double
    double TradingAccountField_PreCredit = 0.0;
        
    ///上次存款额
    // TThostFtdcMoneyType double
    double TradingAccountField_PreDeposit = 0.0;
        
    ///上次结算准备金
    // TThostFtdcMoneyType double
    double TradingAccountField_PreBalance = 0.0;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    double TradingAccountField_PreMargin = 0.0;
        
    ///利息基数
    // TThostFtdcMoneyType double
    double TradingAccountField_InterestBase = 0.0;
        
    ///利息收入
    // TThostFtdcMoneyType double
    double TradingAccountField_Interest = 0.0;
        
    ///入金金额
    // TThostFtdcMoneyType double
    double TradingAccountField_Deposit = 0.0;
        
    ///出金金额
    // TThostFtdcMoneyType double
    double TradingAccountField_Withdraw = 0.0;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    double TradingAccountField_FrozenMargin = 0.0;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    double TradingAccountField_FrozenCash = 0.0;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    double TradingAccountField_FrozenCommission = 0.0;
        
    ///当前保证金总额
    // TThostFtdcMoneyType double
    double TradingAccountField_CurrMargin = 0.0;
        
    ///资金差额
    // TThostFtdcMoneyType double
    double TradingAccountField_CashIn = 0.0;
        
    ///手续费
    // TThostFtdcMoneyType double
    double TradingAccountField_Commission = 0.0;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    double TradingAccountField_CloseProfit = 0.0;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    double TradingAccountField_PositionProfit = 0.0;
        
    ///期货结算准备金
    // TThostFtdcMoneyType double
    double TradingAccountField_Balance = 0.0;
        
    ///可用资金
    // TThostFtdcMoneyType double
    double TradingAccountField_Available = 0.0;
        
    ///可取资金
    // TThostFtdcMoneyType double
    double TradingAccountField_WithdrawQuota = 0.0;
        
    ///基本准备金
    // TThostFtdcMoneyType double
    double TradingAccountField_Reserve = 0.0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *TradingAccountField_TradingDay = NULL;
    Py_ssize_t TradingAccountField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int TradingAccountField_SettlementID = 0;
        
    ///信用额度
    // TThostFtdcMoneyType double
    double TradingAccountField_Credit = 0.0;
        
    ///质押金额
    // TThostFtdcMoneyType double
    double TradingAccountField_Mortgage = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double TradingAccountField_ExchangeMargin = 0.0;
        
    ///投资者交割保证金
    // TThostFtdcMoneyType double
    double TradingAccountField_DeliveryMargin = 0.0;
        
    ///交易所交割保证金
    // TThostFtdcMoneyType double
    double TradingAccountField_ExchangeDeliveryMargin = 0.0;
        
    ///保底期货结算准备金
    // TThostFtdcMoneyType double
    double TradingAccountField_ReserveBalance = 0.0;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *TradingAccountField_CurrencyID = NULL;
    Py_ssize_t TradingAccountField_CurrencyID_len = 0;
            
    ///上次货币质入金额
    // TThostFtdcMoneyType double
    double TradingAccountField_PreFundMortgageIn = 0.0;
        
    ///上次货币质出金额
    // TThostFtdcMoneyType double
    double TradingAccountField_PreFundMortgageOut = 0.0;
        
    ///货币质入金额
    // TThostFtdcMoneyType double
    double TradingAccountField_FundMortgageIn = 0.0;
        
    ///货币质出金额
    // TThostFtdcMoneyType double
    double TradingAccountField_FundMortgageOut = 0.0;
        
    ///货币质押余额
    // TThostFtdcMoneyType double
    double TradingAccountField_FundMortgageAvailable = 0.0;
        
    ///可质押货币金额
    // TThostFtdcMoneyType double
    double TradingAccountField_MortgageableFund = 0.0;
        
    ///特殊产品占用保证金
    // TThostFtdcMoneyType double
    double TradingAccountField_SpecProductMargin = 0.0;
        
    ///特殊产品冻结保证金
    // TThostFtdcMoneyType double
    double TradingAccountField_SpecProductFrozenMargin = 0.0;
        
    ///特殊产品手续费
    // TThostFtdcMoneyType double
    double TradingAccountField_SpecProductCommission = 0.0;
        
    ///特殊产品冻结手续费
    // TThostFtdcMoneyType double
    double TradingAccountField_SpecProductFrozenCommission = 0.0;
        
    ///特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    double TradingAccountField_SpecProductPositionProfit = 0.0;
        
    ///特殊产品平仓盈亏
    // TThostFtdcMoneyType double
    double TradingAccountField_SpecProductCloseProfit = 0.0;
        
    ///根据持仓盈亏算法计算的特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    double TradingAccountField_SpecProductPositionProfitByAlg = 0.0;
        
    ///特殊产品交易所保证金
    // TThostFtdcMoneyType double
    double TradingAccountField_SpecProductExchangeMargin = 0.0;
        
    ///业务类型
    // TThostFtdcBizTypeType char
    char TradingAccountField_BizType = 0;
            
    ///延时换汇冻结金额
    // TThostFtdcMoneyType double
    double TradingAccountField_FrozenSwap = 0.0;
        
    ///剩余换汇额度
    // TThostFtdcMoneyType double
    double TradingAccountField_RemainSwap = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dddddddddddddddddddddy#iddddddy#ddddddddddddddcdd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ddddddddddddddddddddds#idddddds#ddddddddddddddcdd", (char **)kwlist
#endif

        , &TradingAccountField_BrokerID, &TradingAccountField_BrokerID_len 
        , &TradingAccountField_AccountID, &TradingAccountField_AccountID_len 
        , &TradingAccountField_PreMortgage 
        , &TradingAccountField_PreCredit 
        , &TradingAccountField_PreDeposit 
        , &TradingAccountField_PreBalance 
        , &TradingAccountField_PreMargin 
        , &TradingAccountField_InterestBase 
        , &TradingAccountField_Interest 
        , &TradingAccountField_Deposit 
        , &TradingAccountField_Withdraw 
        , &TradingAccountField_FrozenMargin 
        , &TradingAccountField_FrozenCash 
        , &TradingAccountField_FrozenCommission 
        , &TradingAccountField_CurrMargin 
        , &TradingAccountField_CashIn 
        , &TradingAccountField_Commission 
        , &TradingAccountField_CloseProfit 
        , &TradingAccountField_PositionProfit 
        , &TradingAccountField_Balance 
        , &TradingAccountField_Available 
        , &TradingAccountField_WithdrawQuota 
        , &TradingAccountField_Reserve 
        , &TradingAccountField_TradingDay, &TradingAccountField_TradingDay_len 
        , &TradingAccountField_SettlementID 
        , &TradingAccountField_Credit 
        , &TradingAccountField_Mortgage 
        , &TradingAccountField_ExchangeMargin 
        , &TradingAccountField_DeliveryMargin 
        , &TradingAccountField_ExchangeDeliveryMargin 
        , &TradingAccountField_ReserveBalance 
        , &TradingAccountField_CurrencyID, &TradingAccountField_CurrencyID_len 
        , &TradingAccountField_PreFundMortgageIn 
        , &TradingAccountField_PreFundMortgageOut 
        , &TradingAccountField_FundMortgageIn 
        , &TradingAccountField_FundMortgageOut 
        , &TradingAccountField_FundMortgageAvailable 
        , &TradingAccountField_MortgageableFund 
        , &TradingAccountField_SpecProductMargin 
        , &TradingAccountField_SpecProductFrozenMargin 
        , &TradingAccountField_SpecProductCommission 
        , &TradingAccountField_SpecProductFrozenCommission 
        , &TradingAccountField_SpecProductPositionProfit 
        , &TradingAccountField_SpecProductCloseProfit 
        , &TradingAccountField_SpecProductPositionProfitByAlg 
        , &TradingAccountField_SpecProductExchangeMargin 
        , &TradingAccountField_BizType 
        , &TradingAccountField_FrozenSwap 
        , &TradingAccountField_RemainSwap 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TradingAccountField_BrokerID != NULL ) {
        if(TradingAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TradingAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TradingAccountField_BrokerID, TradingAccountField_BrokerID_len);        
        strncpy(self->data.BrokerID, TradingAccountField_BrokerID, sizeof(self->data.BrokerID) );
        TradingAccountField_BrokerID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( TradingAccountField_AccountID != NULL ) {
        if(TradingAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", TradingAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, TradingAccountField_AccountID, TradingAccountField_AccountID_len);        
        strncpy(self->data.AccountID, TradingAccountField_AccountID, sizeof(self->data.AccountID) );
        TradingAccountField_AccountID = NULL;
    }
            
    ///上次质押金额
    // TThostFtdcMoneyType double
    self->data.PreMortgage = TradingAccountField_PreMortgage;
        
    ///上次信用额度
    // TThostFtdcMoneyType double
    self->data.PreCredit = TradingAccountField_PreCredit;
        
    ///上次存款额
    // TThostFtdcMoneyType double
    self->data.PreDeposit = TradingAccountField_PreDeposit;
        
    ///上次结算准备金
    // TThostFtdcMoneyType double
    self->data.PreBalance = TradingAccountField_PreBalance;
        
    ///上次占用的保证金
    // TThostFtdcMoneyType double
    self->data.PreMargin = TradingAccountField_PreMargin;
        
    ///利息基数
    // TThostFtdcMoneyType double
    self->data.InterestBase = TradingAccountField_InterestBase;
        
    ///利息收入
    // TThostFtdcMoneyType double
    self->data.Interest = TradingAccountField_Interest;
        
    ///入金金额
    // TThostFtdcMoneyType double
    self->data.Deposit = TradingAccountField_Deposit;
        
    ///出金金额
    // TThostFtdcMoneyType double
    self->data.Withdraw = TradingAccountField_Withdraw;
        
    ///冻结的保证金
    // TThostFtdcMoneyType double
    self->data.FrozenMargin = TradingAccountField_FrozenMargin;
        
    ///冻结的资金
    // TThostFtdcMoneyType double
    self->data.FrozenCash = TradingAccountField_FrozenCash;
        
    ///冻结的手续费
    // TThostFtdcMoneyType double
    self->data.FrozenCommission = TradingAccountField_FrozenCommission;
        
    ///当前保证金总额
    // TThostFtdcMoneyType double
    self->data.CurrMargin = TradingAccountField_CurrMargin;
        
    ///资金差额
    // TThostFtdcMoneyType double
    self->data.CashIn = TradingAccountField_CashIn;
        
    ///手续费
    // TThostFtdcMoneyType double
    self->data.Commission = TradingAccountField_Commission;
        
    ///平仓盈亏
    // TThostFtdcMoneyType double
    self->data.CloseProfit = TradingAccountField_CloseProfit;
        
    ///持仓盈亏
    // TThostFtdcMoneyType double
    self->data.PositionProfit = TradingAccountField_PositionProfit;
        
    ///期货结算准备金
    // TThostFtdcMoneyType double
    self->data.Balance = TradingAccountField_Balance;
        
    ///可用资金
    // TThostFtdcMoneyType double
    self->data.Available = TradingAccountField_Available;
        
    ///可取资金
    // TThostFtdcMoneyType double
    self->data.WithdrawQuota = TradingAccountField_WithdrawQuota;
        
    ///基本准备金
    // TThostFtdcMoneyType double
    self->data.Reserve = TradingAccountField_Reserve;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( TradingAccountField_TradingDay != NULL ) {
        if(TradingAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", TradingAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, TradingAccountField_TradingDay, TradingAccountField_TradingDay_len);        
        strncpy(self->data.TradingDay, TradingAccountField_TradingDay, sizeof(self->data.TradingDay) );
        TradingAccountField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = TradingAccountField_SettlementID;
        
    ///信用额度
    // TThostFtdcMoneyType double
    self->data.Credit = TradingAccountField_Credit;
        
    ///质押金额
    // TThostFtdcMoneyType double
    self->data.Mortgage = TradingAccountField_Mortgage;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchangeMargin = TradingAccountField_ExchangeMargin;
        
    ///投资者交割保证金
    // TThostFtdcMoneyType double
    self->data.DeliveryMargin = TradingAccountField_DeliveryMargin;
        
    ///交易所交割保证金
    // TThostFtdcMoneyType double
    self->data.ExchangeDeliveryMargin = TradingAccountField_ExchangeDeliveryMargin;
        
    ///保底期货结算准备金
    // TThostFtdcMoneyType double
    self->data.ReserveBalance = TradingAccountField_ReserveBalance;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( TradingAccountField_CurrencyID != NULL ) {
        if(TradingAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", TradingAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, TradingAccountField_CurrencyID, TradingAccountField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, TradingAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
        TradingAccountField_CurrencyID = NULL;
    }
            
    ///上次货币质入金额
    // TThostFtdcMoneyType double
    self->data.PreFundMortgageIn = TradingAccountField_PreFundMortgageIn;
        
    ///上次货币质出金额
    // TThostFtdcMoneyType double
    self->data.PreFundMortgageOut = TradingAccountField_PreFundMortgageOut;
        
    ///货币质入金额
    // TThostFtdcMoneyType double
    self->data.FundMortgageIn = TradingAccountField_FundMortgageIn;
        
    ///货币质出金额
    // TThostFtdcMoneyType double
    self->data.FundMortgageOut = TradingAccountField_FundMortgageOut;
        
    ///货币质押余额
    // TThostFtdcMoneyType double
    self->data.FundMortgageAvailable = TradingAccountField_FundMortgageAvailable;
        
    ///可质押货币金额
    // TThostFtdcMoneyType double
    self->data.MortgageableFund = TradingAccountField_MortgageableFund;
        
    ///特殊产品占用保证金
    // TThostFtdcMoneyType double
    self->data.SpecProductMargin = TradingAccountField_SpecProductMargin;
        
    ///特殊产品冻结保证金
    // TThostFtdcMoneyType double
    self->data.SpecProductFrozenMargin = TradingAccountField_SpecProductFrozenMargin;
        
    ///特殊产品手续费
    // TThostFtdcMoneyType double
    self->data.SpecProductCommission = TradingAccountField_SpecProductCommission;
        
    ///特殊产品冻结手续费
    // TThostFtdcMoneyType double
    self->data.SpecProductFrozenCommission = TradingAccountField_SpecProductFrozenCommission;
        
    ///特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    self->data.SpecProductPositionProfit = TradingAccountField_SpecProductPositionProfit;
        
    ///特殊产品平仓盈亏
    // TThostFtdcMoneyType double
    self->data.SpecProductCloseProfit = TradingAccountField_SpecProductCloseProfit;
        
    ///根据持仓盈亏算法计算的特殊产品持仓盈亏
    // TThostFtdcMoneyType double
    self->data.SpecProductPositionProfitByAlg = TradingAccountField_SpecProductPositionProfitByAlg;
        
    ///特殊产品交易所保证金
    // TThostFtdcMoneyType double
    self->data.SpecProductExchangeMargin = TradingAccountField_SpecProductExchangeMargin;
        
    ///业务类型
    // TThostFtdcBizTypeType char
    self->data.BizType = TradingAccountField_BizType;
            
    ///延时换汇冻结金额
    // TThostFtdcMoneyType double
    self->data.FrozenSwap = TradingAccountField_FrozenSwap;
        
    ///剩余换汇额度
    // TThostFtdcMoneyType double
    self->data.RemainSwap = TradingAccountField_RemainSwap;
        

    return 0;
}

static void PyCThostFtdcTradingAccountField_dealloc(PyCThostFtdcTradingAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingAccountField_repr(PyCThostFtdcTradingAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:d,s:d}"
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
        ,"BizType", self->data.BizType 
        ,"FrozenSwap", self->data.FrozenSwap 
        ,"RemainSwap", self->data.RemainSwap 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTradingAccountField_get_BrokerID(PyCThostFtdcTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTradingAccountField_set_BrokerID(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_AccountID(PyCThostFtdcTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTradingAccountField_set_AccountID(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_PreMortgage(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreMortgage);
}

///上次质押金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_PreMortgage(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_PreCredit(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreCredit);
}

///上次信用额度
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_PreCredit(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_PreDeposit(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreDeposit);
}

///上次存款额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_PreDeposit(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_PreBalance(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreBalance);
}

///上次结算准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_PreBalance(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_PreMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreMargin);
}

///上次占用的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_PreMargin(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_InterestBase(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterestBase);
}

///利息基数
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_InterestBase(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_Interest(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Interest);
}

///利息收入
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_Interest(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_Deposit(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Deposit);
}

///入金金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_Deposit(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_Withdraw(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Withdraw);
}

///出金金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_Withdraw(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_FrozenMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenMargin);
}

///冻结的保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_FrozenMargin(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_FrozenCash(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCash);
}

///冻结的资金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_FrozenCash(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_FrozenCommission(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenCommission);
}

///冻结的手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_FrozenCommission(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_CurrMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CurrMargin);
}

///当前保证金总额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_CurrMargin(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_CashIn(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CashIn);
}

///资金差额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_CashIn(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_Commission(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Commission);
}

///手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_Commission(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_CloseProfit(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseProfit);
}

///平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_CloseProfit(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_PositionProfit(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PositionProfit);
}

///持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_PositionProfit(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_Balance(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Balance);
}

///期货结算准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_Balance(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_Available(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Available);
}

///可用资金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_Available(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_WithdrawQuota(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.WithdrawQuota);
}

///可取资金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_WithdrawQuota(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_Reserve(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Reserve);
}

///基本准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_Reserve(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_TradingDay(PyCThostFtdcTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcTradingAccountField_set_TradingDay(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_SettlementID(PyCThostFtdcTradingAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcTradingAccountField_set_SettlementID(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_Credit(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Credit);
}

///信用额度
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_Credit(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_Mortgage(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Mortgage);
}

///质押金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_Mortgage(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_ExchangeMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchangeMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_ExchangeMargin(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_DeliveryMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.DeliveryMargin);
}

///投资者交割保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_DeliveryMargin(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_ExchangeDeliveryMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchangeDeliveryMargin);
}

///交易所交割保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_ExchangeDeliveryMargin(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_ReserveBalance(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ReserveBalance);
}

///保底期货结算准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_ReserveBalance(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_CurrencyID(PyCThostFtdcTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcTradingAccountField_set_CurrencyID(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_PreFundMortgageIn(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreFundMortgageIn);
}

///上次货币质入金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_PreFundMortgageIn(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_PreFundMortgageOut(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreFundMortgageOut);
}

///上次货币质出金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_PreFundMortgageOut(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_FundMortgageIn(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FundMortgageIn);
}

///货币质入金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_FundMortgageIn(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_FundMortgageOut(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FundMortgageOut);
}

///货币质出金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_FundMortgageOut(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_FundMortgageAvailable(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FundMortgageAvailable);
}

///货币质押余额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_FundMortgageAvailable(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_MortgageableFund(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MortgageableFund);
}

///可质押货币金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_MortgageableFund(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductMargin);
}

///特殊产品占用保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_SpecProductMargin(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductFrozenMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductFrozenMargin);
}

///特殊产品冻结保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_SpecProductFrozenMargin(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductCommission(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductCommission);
}

///特殊产品手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_SpecProductCommission(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductFrozenCommission(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductFrozenCommission);
}

///特殊产品冻结手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_SpecProductFrozenCommission(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductPositionProfit(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductPositionProfit);
}

///特殊产品持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_SpecProductPositionProfit(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductCloseProfit(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductCloseProfit);
}

///特殊产品平仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_SpecProductCloseProfit(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductPositionProfitByAlg(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductPositionProfitByAlg);
}

///根据持仓盈亏算法计算的特殊产品持仓盈亏
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_SpecProductPositionProfitByAlg(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductExchangeMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SpecProductExchangeMargin);
}

///特殊产品交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_SpecProductExchangeMargin(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
        
///业务类型
// TThostFtdcBizTypeType char
static PyObject *PyCThostFtdcTradingAccountField_get_BizType(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BizType), 1);
}

///业务类型
// TThostFtdcBizTypeType char
static int PyCThostFtdcTradingAccountField_set_BizType(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BizType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BizType)) {
        PyErr_SetString(PyExc_ValueError, "BizType must be equal 1 bytes");
        return -1;
    }
    self->data.BizType = *buf;
    return 0;
}
            
///延时换汇冻结金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcTradingAccountField_get_FrozenSwap(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FrozenSwap);
}

///延时换汇冻结金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_FrozenSwap(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountField_get_RemainSwap(PyCThostFtdcTradingAccountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.RemainSwap);
}

///剩余换汇额度
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountField_set_RemainSwap(PyCThostFtdcTradingAccountField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcTradingAccountField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountField_get_BrokerID, (setter)PyCThostFtdcTradingAccountField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcTradingAccountField_get_AccountID, (setter)PyCThostFtdcTradingAccountField_set_AccountID, (char *)"AccountID", NULL},
    ///上次质押金额 
    {(char *)"PreMortgage", (getter)PyCThostFtdcTradingAccountField_get_PreMortgage, (setter)PyCThostFtdcTradingAccountField_set_PreMortgage, (char *)"PreMortgage", NULL},
    ///上次信用额度 
    {(char *)"PreCredit", (getter)PyCThostFtdcTradingAccountField_get_PreCredit, (setter)PyCThostFtdcTradingAccountField_set_PreCredit, (char *)"PreCredit", NULL},
    ///上次存款额 
    {(char *)"PreDeposit", (getter)PyCThostFtdcTradingAccountField_get_PreDeposit, (setter)PyCThostFtdcTradingAccountField_set_PreDeposit, (char *)"PreDeposit", NULL},
    ///上次结算准备金 
    {(char *)"PreBalance", (getter)PyCThostFtdcTradingAccountField_get_PreBalance, (setter)PyCThostFtdcTradingAccountField_set_PreBalance, (char *)"PreBalance", NULL},
    ///上次占用的保证金 
    {(char *)"PreMargin", (getter)PyCThostFtdcTradingAccountField_get_PreMargin, (setter)PyCThostFtdcTradingAccountField_set_PreMargin, (char *)"PreMargin", NULL},
    ///利息基数 
    {(char *)"InterestBase", (getter)PyCThostFtdcTradingAccountField_get_InterestBase, (setter)PyCThostFtdcTradingAccountField_set_InterestBase, (char *)"InterestBase", NULL},
    ///利息收入 
    {(char *)"Interest", (getter)PyCThostFtdcTradingAccountField_get_Interest, (setter)PyCThostFtdcTradingAccountField_set_Interest, (char *)"Interest", NULL},
    ///入金金额 
    {(char *)"Deposit", (getter)PyCThostFtdcTradingAccountField_get_Deposit, (setter)PyCThostFtdcTradingAccountField_set_Deposit, (char *)"Deposit", NULL},
    ///出金金额 
    {(char *)"Withdraw", (getter)PyCThostFtdcTradingAccountField_get_Withdraw, (setter)PyCThostFtdcTradingAccountField_set_Withdraw, (char *)"Withdraw", NULL},
    ///冻结的保证金 
    {(char *)"FrozenMargin", (getter)PyCThostFtdcTradingAccountField_get_FrozenMargin, (setter)PyCThostFtdcTradingAccountField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
    ///冻结的资金 
    {(char *)"FrozenCash", (getter)PyCThostFtdcTradingAccountField_get_FrozenCash, (setter)PyCThostFtdcTradingAccountField_set_FrozenCash, (char *)"FrozenCash", NULL},
    ///冻结的手续费 
    {(char *)"FrozenCommission", (getter)PyCThostFtdcTradingAccountField_get_FrozenCommission, (setter)PyCThostFtdcTradingAccountField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
    ///当前保证金总额 
    {(char *)"CurrMargin", (getter)PyCThostFtdcTradingAccountField_get_CurrMargin, (setter)PyCThostFtdcTradingAccountField_set_CurrMargin, (char *)"CurrMargin", NULL},
    ///资金差额 
    {(char *)"CashIn", (getter)PyCThostFtdcTradingAccountField_get_CashIn, (setter)PyCThostFtdcTradingAccountField_set_CashIn, (char *)"CashIn", NULL},
    ///手续费 
    {(char *)"Commission", (getter)PyCThostFtdcTradingAccountField_get_Commission, (setter)PyCThostFtdcTradingAccountField_set_Commission, (char *)"Commission", NULL},
    ///平仓盈亏 
    {(char *)"CloseProfit", (getter)PyCThostFtdcTradingAccountField_get_CloseProfit, (setter)PyCThostFtdcTradingAccountField_set_CloseProfit, (char *)"CloseProfit", NULL},
    ///持仓盈亏 
    {(char *)"PositionProfit", (getter)PyCThostFtdcTradingAccountField_get_PositionProfit, (setter)PyCThostFtdcTradingAccountField_set_PositionProfit, (char *)"PositionProfit", NULL},
    ///期货结算准备金 
    {(char *)"Balance", (getter)PyCThostFtdcTradingAccountField_get_Balance, (setter)PyCThostFtdcTradingAccountField_set_Balance, (char *)"Balance", NULL},
    ///可用资金 
    {(char *)"Available", (getter)PyCThostFtdcTradingAccountField_get_Available, (setter)PyCThostFtdcTradingAccountField_set_Available, (char *)"Available", NULL},
    ///可取资金 
    {(char *)"WithdrawQuota", (getter)PyCThostFtdcTradingAccountField_get_WithdrawQuota, (setter)PyCThostFtdcTradingAccountField_set_WithdrawQuota, (char *)"WithdrawQuota", NULL},
    ///基本准备金 
    {(char *)"Reserve", (getter)PyCThostFtdcTradingAccountField_get_Reserve, (setter)PyCThostFtdcTradingAccountField_set_Reserve, (char *)"Reserve", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcTradingAccountField_get_TradingDay, (setter)PyCThostFtdcTradingAccountField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcTradingAccountField_get_SettlementID, (setter)PyCThostFtdcTradingAccountField_set_SettlementID, (char *)"SettlementID", NULL},
    ///信用额度 
    {(char *)"Credit", (getter)PyCThostFtdcTradingAccountField_get_Credit, (setter)PyCThostFtdcTradingAccountField_set_Credit, (char *)"Credit", NULL},
    ///质押金额 
    {(char *)"Mortgage", (getter)PyCThostFtdcTradingAccountField_get_Mortgage, (setter)PyCThostFtdcTradingAccountField_set_Mortgage, (char *)"Mortgage", NULL},
    ///交易所保证金 
    {(char *)"ExchangeMargin", (getter)PyCThostFtdcTradingAccountField_get_ExchangeMargin, (setter)PyCThostFtdcTradingAccountField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
    ///投资者交割保证金 
    {(char *)"DeliveryMargin", (getter)PyCThostFtdcTradingAccountField_get_DeliveryMargin, (setter)PyCThostFtdcTradingAccountField_set_DeliveryMargin, (char *)"DeliveryMargin", NULL},
    ///交易所交割保证金 
    {(char *)"ExchangeDeliveryMargin", (getter)PyCThostFtdcTradingAccountField_get_ExchangeDeliveryMargin, (setter)PyCThostFtdcTradingAccountField_set_ExchangeDeliveryMargin, (char *)"ExchangeDeliveryMargin", NULL},
    ///保底期货结算准备金 
    {(char *)"ReserveBalance", (getter)PyCThostFtdcTradingAccountField_get_ReserveBalance, (setter)PyCThostFtdcTradingAccountField_set_ReserveBalance, (char *)"ReserveBalance", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcTradingAccountField_get_CurrencyID, (setter)PyCThostFtdcTradingAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///上次货币质入金额 
    {(char *)"PreFundMortgageIn", (getter)PyCThostFtdcTradingAccountField_get_PreFundMortgageIn, (setter)PyCThostFtdcTradingAccountField_set_PreFundMortgageIn, (char *)"PreFundMortgageIn", NULL},
    ///上次货币质出金额 
    {(char *)"PreFundMortgageOut", (getter)PyCThostFtdcTradingAccountField_get_PreFundMortgageOut, (setter)PyCThostFtdcTradingAccountField_set_PreFundMortgageOut, (char *)"PreFundMortgageOut", NULL},
    ///货币质入金额 
    {(char *)"FundMortgageIn", (getter)PyCThostFtdcTradingAccountField_get_FundMortgageIn, (setter)PyCThostFtdcTradingAccountField_set_FundMortgageIn, (char *)"FundMortgageIn", NULL},
    ///货币质出金额 
    {(char *)"FundMortgageOut", (getter)PyCThostFtdcTradingAccountField_get_FundMortgageOut, (setter)PyCThostFtdcTradingAccountField_set_FundMortgageOut, (char *)"FundMortgageOut", NULL},
    ///货币质押余额 
    {(char *)"FundMortgageAvailable", (getter)PyCThostFtdcTradingAccountField_get_FundMortgageAvailable, (setter)PyCThostFtdcTradingAccountField_set_FundMortgageAvailable, (char *)"FundMortgageAvailable", NULL},
    ///可质押货币金额 
    {(char *)"MortgageableFund", (getter)PyCThostFtdcTradingAccountField_get_MortgageableFund, (setter)PyCThostFtdcTradingAccountField_set_MortgageableFund, (char *)"MortgageableFund", NULL},
    ///特殊产品占用保证金 
    {(char *)"SpecProductMargin", (getter)PyCThostFtdcTradingAccountField_get_SpecProductMargin, (setter)PyCThostFtdcTradingAccountField_set_SpecProductMargin, (char *)"SpecProductMargin", NULL},
    ///特殊产品冻结保证金 
    {(char *)"SpecProductFrozenMargin", (getter)PyCThostFtdcTradingAccountField_get_SpecProductFrozenMargin, (setter)PyCThostFtdcTradingAccountField_set_SpecProductFrozenMargin, (char *)"SpecProductFrozenMargin", NULL},
    ///特殊产品手续费 
    {(char *)"SpecProductCommission", (getter)PyCThostFtdcTradingAccountField_get_SpecProductCommission, (setter)PyCThostFtdcTradingAccountField_set_SpecProductCommission, (char *)"SpecProductCommission", NULL},
    ///特殊产品冻结手续费 
    {(char *)"SpecProductFrozenCommission", (getter)PyCThostFtdcTradingAccountField_get_SpecProductFrozenCommission, (setter)PyCThostFtdcTradingAccountField_set_SpecProductFrozenCommission, (char *)"SpecProductFrozenCommission", NULL},
    ///特殊产品持仓盈亏 
    {(char *)"SpecProductPositionProfit", (getter)PyCThostFtdcTradingAccountField_get_SpecProductPositionProfit, (setter)PyCThostFtdcTradingAccountField_set_SpecProductPositionProfit, (char *)"SpecProductPositionProfit", NULL},
    ///特殊产品平仓盈亏 
    {(char *)"SpecProductCloseProfit", (getter)PyCThostFtdcTradingAccountField_get_SpecProductCloseProfit, (setter)PyCThostFtdcTradingAccountField_set_SpecProductCloseProfit, (char *)"SpecProductCloseProfit", NULL},
    ///根据持仓盈亏算法计算的特殊产品持仓盈亏 
    {(char *)"SpecProductPositionProfitByAlg", (getter)PyCThostFtdcTradingAccountField_get_SpecProductPositionProfitByAlg, (setter)PyCThostFtdcTradingAccountField_set_SpecProductPositionProfitByAlg, (char *)"SpecProductPositionProfitByAlg", NULL},
    ///特殊产品交易所保证金 
    {(char *)"SpecProductExchangeMargin", (getter)PyCThostFtdcTradingAccountField_get_SpecProductExchangeMargin, (setter)PyCThostFtdcTradingAccountField_set_SpecProductExchangeMargin, (char *)"SpecProductExchangeMargin", NULL},
    ///业务类型 
    {(char *)"BizType", (getter)PyCThostFtdcTradingAccountField_get_BizType, (setter)PyCThostFtdcTradingAccountField_set_BizType, (char *)"BizType", NULL},
    ///延时换汇冻结金额 
    {(char *)"FrozenSwap", (getter)PyCThostFtdcTradingAccountField_get_FrozenSwap, (setter)PyCThostFtdcTradingAccountField_set_FrozenSwap, (char *)"FrozenSwap", NULL},
    ///剩余换汇额度 
    {(char *)"RemainSwap", (getter)PyCThostFtdcTradingAccountField_get_RemainSwap, (setter)PyCThostFtdcTradingAccountField_set_RemainSwap, (char *)"RemainSwap", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingAccountField",	/* tp_name */
	sizeof(PyCThostFtdcTradingAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingAccountField_repr,   /* tp_repr */
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
	"CThostFtdcTradingAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingAccountField_new,       /* tp_new */
};

int PyCThostFtdcTradingAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingAccountField  */
	if (PyType_Ready(&PyCThostFtdcTradingAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingAccountField", (PyObject *)&PyCThostFtdcTradingAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountField to module");
        Py_DECREF(&PyCThostFtdcTradingAccountFieldType);
		return -1;
    }

    return 0;
}
