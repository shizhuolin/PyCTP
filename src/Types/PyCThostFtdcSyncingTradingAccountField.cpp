
#include "PyCThostFtdcSyncingTradingAccountField.h"

///正在同步中的交易账号

static int PyCThostFtdcSyncingTradingAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "PreMortgage", "PreCredit", "PreDeposit", "PreBalance", "PreMargin", "InterestBase", "Interest", "Deposit", "Withdraw", "FrozenMargin", "FrozenCash", "FrozenCommission", "CurrMargin", "CashIn", "Commission", "CloseProfit", "PositionProfit", "Balance", "Available", "WithdrawQuota", "Reserve", "TradingDay", "SettlementID", "Credit", "Mortgage", "ExchangeMargin", "DeliveryMargin", "ExchangeDeliveryMargin", "ReserveBalance", "CurrencyID", "PreFundMortgageIn", "PreFundMortgageOut", "FundMortgageIn", "FundMortgageOut", "FundMortgageAvailable", "MortgageableFund", "SpecProductMargin", "SpecProductFrozenMargin", "SpecProductCommission", "SpecProductFrozenCommission", "SpecProductPositionProfit", "SpecProductCloseProfit", "SpecProductPositionProfitByAlg", "SpecProductExchangeMargin", "FrozenSwap", "RemainSwap", "OptionValue", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncingTradingAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncingTradingAccountField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcSyncingTradingAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcSyncingTradingAccountField_AccountID_length = 0;

    /// 上次质押金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_PreMortgage = 0.0;

    /// 上次信用额度
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_PreCredit = 0.0;

    /// 上次存款额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_PreDeposit = 0.0;

    /// 上次结算准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_PreBalance = 0.0;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_PreMargin = 0.0;

    /// 利息基数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_InterestBase = 0.0;

    /// 利息收入
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_Interest = 0.0;

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_Deposit = 0.0;

    /// 出金金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_Withdraw = 0.0;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_FrozenMargin = 0.0;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_FrozenCash = 0.0;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_FrozenCommission = 0.0;

    /// 当前保证金总额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_CurrMargin = 0.0;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_CashIn = 0.0;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_Commission = 0.0;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_CloseProfit = 0.0;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_PositionProfit = 0.0;

    /// 期货结算准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_Balance = 0.0;

    /// 可用资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_Available = 0.0;

    /// 可取资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_WithdrawQuota = 0.0;

    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_Reserve = 0.0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncingTradingAccountField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncingTradingAccountField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcSyncingTradingAccountField_SettlementID = 0;

    /// 信用额度
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_Credit = 0.0;

    /// 质押金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_Mortgage = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_ExchangeMargin = 0.0;

    /// 投资者交割保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_DeliveryMargin = 0.0;

    /// 交易所交割保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_ExchangeDeliveryMargin = 0.0;

    /// 保底期货结算准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_ReserveBalance = 0.0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSyncingTradingAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcSyncingTradingAccountField_CurrencyID_length = 0;

    /// 上次货币质入金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_PreFundMortgageIn = 0.0;

    /// 上次货币质出金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_PreFundMortgageOut = 0.0;

    /// 货币质入金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_FundMortgageIn = 0.0;

    /// 货币质出金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_FundMortgageOut = 0.0;

    /// 货币质押余额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_FundMortgageAvailable = 0.0;

    /// 可质押货币金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_MortgageableFund = 0.0;

    /// 特殊产品占用保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_SpecProductMargin = 0.0;

    /// 特殊产品冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_SpecProductFrozenMargin = 0.0;

    /// 特殊产品手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_SpecProductCommission = 0.0;

    /// 特殊产品冻结手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_SpecProductFrozenCommission = 0.0;

    /// 特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_SpecProductPositionProfit = 0.0;

    /// 特殊产品平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_SpecProductCloseProfit = 0.0;

    /// 根据持仓盈亏算法计算的特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_SpecProductPositionProfitByAlg = 0.0;

    /// 特殊产品交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_SpecProductExchangeMargin = 0.0;

    /// 延时换汇冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_FrozenSwap = 0.0;

    /// 剩余换汇额度
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_RemainSwap = 0.0;

    /// 期权市值
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingTradingAccountField_OptionValue = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dddddddddddddddddddddy#iddddddy#ddddddddddddddddd", (char **)kwlist
        , &CThostFtdcSyncingTradingAccountField_BrokerID, &CThostFtdcSyncingTradingAccountField_BrokerID_length
        , &CThostFtdcSyncingTradingAccountField_AccountID, &CThostFtdcSyncingTradingAccountField_AccountID_length
        , &CThostFtdcSyncingTradingAccountField_PreMortgage
        , &CThostFtdcSyncingTradingAccountField_PreCredit
        , &CThostFtdcSyncingTradingAccountField_PreDeposit
        , &CThostFtdcSyncingTradingAccountField_PreBalance
        , &CThostFtdcSyncingTradingAccountField_PreMargin
        , &CThostFtdcSyncingTradingAccountField_InterestBase
        , &CThostFtdcSyncingTradingAccountField_Interest
        , &CThostFtdcSyncingTradingAccountField_Deposit
        , &CThostFtdcSyncingTradingAccountField_Withdraw
        , &CThostFtdcSyncingTradingAccountField_FrozenMargin
        , &CThostFtdcSyncingTradingAccountField_FrozenCash
        , &CThostFtdcSyncingTradingAccountField_FrozenCommission
        , &CThostFtdcSyncingTradingAccountField_CurrMargin
        , &CThostFtdcSyncingTradingAccountField_CashIn
        , &CThostFtdcSyncingTradingAccountField_Commission
        , &CThostFtdcSyncingTradingAccountField_CloseProfit
        , &CThostFtdcSyncingTradingAccountField_PositionProfit
        , &CThostFtdcSyncingTradingAccountField_Balance
        , &CThostFtdcSyncingTradingAccountField_Available
        , &CThostFtdcSyncingTradingAccountField_WithdrawQuota
        , &CThostFtdcSyncingTradingAccountField_Reserve
        , &CThostFtdcSyncingTradingAccountField_TradingDay, &CThostFtdcSyncingTradingAccountField_TradingDay_length
        , &CThostFtdcSyncingTradingAccountField_SettlementID
        , &CThostFtdcSyncingTradingAccountField_Credit
        , &CThostFtdcSyncingTradingAccountField_Mortgage
        , &CThostFtdcSyncingTradingAccountField_ExchangeMargin
        , &CThostFtdcSyncingTradingAccountField_DeliveryMargin
        , &CThostFtdcSyncingTradingAccountField_ExchangeDeliveryMargin
        , &CThostFtdcSyncingTradingAccountField_ReserveBalance
        , &CThostFtdcSyncingTradingAccountField_CurrencyID, &CThostFtdcSyncingTradingAccountField_CurrencyID_length
        , &CThostFtdcSyncingTradingAccountField_PreFundMortgageIn
        , &CThostFtdcSyncingTradingAccountField_PreFundMortgageOut
        , &CThostFtdcSyncingTradingAccountField_FundMortgageIn
        , &CThostFtdcSyncingTradingAccountField_FundMortgageOut
        , &CThostFtdcSyncingTradingAccountField_FundMortgageAvailable
        , &CThostFtdcSyncingTradingAccountField_MortgageableFund
        , &CThostFtdcSyncingTradingAccountField_SpecProductMargin
        , &CThostFtdcSyncingTradingAccountField_SpecProductFrozenMargin
        , &CThostFtdcSyncingTradingAccountField_SpecProductCommission
        , &CThostFtdcSyncingTradingAccountField_SpecProductFrozenCommission
        , &CThostFtdcSyncingTradingAccountField_SpecProductPositionProfit
        , &CThostFtdcSyncingTradingAccountField_SpecProductCloseProfit
        , &CThostFtdcSyncingTradingAccountField_SpecProductPositionProfitByAlg
        , &CThostFtdcSyncingTradingAccountField_SpecProductExchangeMargin
        , &CThostFtdcSyncingTradingAccountField_FrozenSwap
        , &CThostFtdcSyncingTradingAccountField_RemainSwap
        , &CThostFtdcSyncingTradingAccountField_OptionValue
    )) {
        return -1;
    }

    PyCThostFtdcSyncingTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingAccountFieldData>(self);
    CThostFtdcSyncingTradingAccountField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncingTradingAccountField_BrokerID != NULL ) {
        if(CThostFtdcSyncingTradingAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncingTradingAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncingTradingAccountField_BrokerID, CThostFtdcSyncingTradingAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncingTradingAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncingTradingAccountField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcSyncingTradingAccountField_AccountID != NULL ) {
        if(CThostFtdcSyncingTradingAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcSyncingTradingAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcSyncingTradingAccountField_AccountID, CThostFtdcSyncingTradingAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcSyncingTradingAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcSyncingTradingAccountField_AccountID = NULL;
    }

    /// 上次质押金额
    /// typedef double TThostFtdcMoneyType
    data->PreMortgage = CThostFtdcSyncingTradingAccountField_PreMortgage;

    /// 上次信用额度
    /// typedef double TThostFtdcMoneyType
    data->PreCredit = CThostFtdcSyncingTradingAccountField_PreCredit;

    /// 上次存款额
    /// typedef double TThostFtdcMoneyType
    data->PreDeposit = CThostFtdcSyncingTradingAccountField_PreDeposit;

    /// 上次结算准备金
    /// typedef double TThostFtdcMoneyType
    data->PreBalance = CThostFtdcSyncingTradingAccountField_PreBalance;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    data->PreMargin = CThostFtdcSyncingTradingAccountField_PreMargin;

    /// 利息基数
    /// typedef double TThostFtdcMoneyType
    data->InterestBase = CThostFtdcSyncingTradingAccountField_InterestBase;

    /// 利息收入
    /// typedef double TThostFtdcMoneyType
    data->Interest = CThostFtdcSyncingTradingAccountField_Interest;

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    data->Deposit = CThostFtdcSyncingTradingAccountField_Deposit;

    /// 出金金额
    /// typedef double TThostFtdcMoneyType
    data->Withdraw = CThostFtdcSyncingTradingAccountField_Withdraw;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    data->FrozenMargin = CThostFtdcSyncingTradingAccountField_FrozenMargin;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    data->FrozenCash = CThostFtdcSyncingTradingAccountField_FrozenCash;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    data->FrozenCommission = CThostFtdcSyncingTradingAccountField_FrozenCommission;

    /// 当前保证金总额
    /// typedef double TThostFtdcMoneyType
    data->CurrMargin = CThostFtdcSyncingTradingAccountField_CurrMargin;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    data->CashIn = CThostFtdcSyncingTradingAccountField_CashIn;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    data->Commission = CThostFtdcSyncingTradingAccountField_Commission;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfit = CThostFtdcSyncingTradingAccountField_CloseProfit;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->PositionProfit = CThostFtdcSyncingTradingAccountField_PositionProfit;

    /// 期货结算准备金
    /// typedef double TThostFtdcMoneyType
    data->Balance = CThostFtdcSyncingTradingAccountField_Balance;

    /// 可用资金
    /// typedef double TThostFtdcMoneyType
    data->Available = CThostFtdcSyncingTradingAccountField_Available;

    /// 可取资金
    /// typedef double TThostFtdcMoneyType
    data->WithdrawQuota = CThostFtdcSyncingTradingAccountField_WithdrawQuota;

    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    data->Reserve = CThostFtdcSyncingTradingAccountField_Reserve;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncingTradingAccountField_TradingDay != NULL ) {
        if(CThostFtdcSyncingTradingAccountField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncingTradingAccountField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncingTradingAccountField_TradingDay, CThostFtdcSyncingTradingAccountField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncingTradingAccountField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncingTradingAccountField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcSyncingTradingAccountField_SettlementID;

    /// 信用额度
    /// typedef double TThostFtdcMoneyType
    data->Credit = CThostFtdcSyncingTradingAccountField_Credit;

    /// 质押金额
    /// typedef double TThostFtdcMoneyType
    data->Mortgage = CThostFtdcSyncingTradingAccountField_Mortgage;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchangeMargin = CThostFtdcSyncingTradingAccountField_ExchangeMargin;

    /// 投资者交割保证金
    /// typedef double TThostFtdcMoneyType
    data->DeliveryMargin = CThostFtdcSyncingTradingAccountField_DeliveryMargin;

    /// 交易所交割保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchangeDeliveryMargin = CThostFtdcSyncingTradingAccountField_ExchangeDeliveryMargin;

    /// 保底期货结算准备金
    /// typedef double TThostFtdcMoneyType
    data->ReserveBalance = CThostFtdcSyncingTradingAccountField_ReserveBalance;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSyncingTradingAccountField_CurrencyID != NULL ) {
        if(CThostFtdcSyncingTradingAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSyncingTradingAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcSyncingTradingAccountField_CurrencyID, CThostFtdcSyncingTradingAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcSyncingTradingAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcSyncingTradingAccountField_CurrencyID = NULL;
    }

    /// 上次货币质入金额
    /// typedef double TThostFtdcMoneyType
    data->PreFundMortgageIn = CThostFtdcSyncingTradingAccountField_PreFundMortgageIn;

    /// 上次货币质出金额
    /// typedef double TThostFtdcMoneyType
    data->PreFundMortgageOut = CThostFtdcSyncingTradingAccountField_PreFundMortgageOut;

    /// 货币质入金额
    /// typedef double TThostFtdcMoneyType
    data->FundMortgageIn = CThostFtdcSyncingTradingAccountField_FundMortgageIn;

    /// 货币质出金额
    /// typedef double TThostFtdcMoneyType
    data->FundMortgageOut = CThostFtdcSyncingTradingAccountField_FundMortgageOut;

    /// 货币质押余额
    /// typedef double TThostFtdcMoneyType
    data->FundMortgageAvailable = CThostFtdcSyncingTradingAccountField_FundMortgageAvailable;

    /// 可质押货币金额
    /// typedef double TThostFtdcMoneyType
    data->MortgageableFund = CThostFtdcSyncingTradingAccountField_MortgageableFund;

    /// 特殊产品占用保证金
    /// typedef double TThostFtdcMoneyType
    data->SpecProductMargin = CThostFtdcSyncingTradingAccountField_SpecProductMargin;

    /// 特殊产品冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->SpecProductFrozenMargin = CThostFtdcSyncingTradingAccountField_SpecProductFrozenMargin;

    /// 特殊产品手续费
    /// typedef double TThostFtdcMoneyType
    data->SpecProductCommission = CThostFtdcSyncingTradingAccountField_SpecProductCommission;

    /// 特殊产品冻结手续费
    /// typedef double TThostFtdcMoneyType
    data->SpecProductFrozenCommission = CThostFtdcSyncingTradingAccountField_SpecProductFrozenCommission;

    /// 特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->SpecProductPositionProfit = CThostFtdcSyncingTradingAccountField_SpecProductPositionProfit;

    /// 特殊产品平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->SpecProductCloseProfit = CThostFtdcSyncingTradingAccountField_SpecProductCloseProfit;

    /// 根据持仓盈亏算法计算的特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->SpecProductPositionProfitByAlg = CThostFtdcSyncingTradingAccountField_SpecProductPositionProfitByAlg;

    /// 特殊产品交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->SpecProductExchangeMargin = CThostFtdcSyncingTradingAccountField_SpecProductExchangeMargin;

    /// 延时换汇冻结金额
    /// typedef double TThostFtdcMoneyType
    data->FrozenSwap = CThostFtdcSyncingTradingAccountField_FrozenSwap;

    /// 剩余换汇额度
    /// typedef double TThostFtdcMoneyType
    data->RemainSwap = CThostFtdcSyncingTradingAccountField_RemainSwap;

    /// 期权市值
    /// typedef double TThostFtdcMoneyType
    data->OptionValue = CThostFtdcSyncingTradingAccountField_OptionValue;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncingTradingAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncingTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingAccountFieldData>(self);
    CThostFtdcSyncingTradingAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "PreMortgage", data->PreMortgage
        , "PreCredit", data->PreCredit
        , "PreDeposit", data->PreDeposit
        , "PreBalance", data->PreBalance
        , "PreMargin", data->PreMargin
        , "InterestBase", data->InterestBase
        , "Interest", data->Interest
        , "Deposit", data->Deposit
        , "Withdraw", data->Withdraw
        , "FrozenMargin", data->FrozenMargin
        , "FrozenCash", data->FrozenCash
        , "FrozenCommission", data->FrozenCommission
        , "CurrMargin", data->CurrMargin
        , "CashIn", data->CashIn
        , "Commission", data->Commission
        , "CloseProfit", data->CloseProfit
        , "PositionProfit", data->PositionProfit
        , "Balance", data->Balance
        , "Available", data->Available
        , "WithdrawQuota", data->WithdrawQuota
        , "Reserve", data->Reserve
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "Credit", data->Credit
        , "Mortgage", data->Mortgage
        , "ExchangeMargin", data->ExchangeMargin
        , "DeliveryMargin", data->DeliveryMargin
        , "ExchangeDeliveryMargin", data->ExchangeDeliveryMargin
        , "ReserveBalance", data->ReserveBalance
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "PreFundMortgageIn", data->PreFundMortgageIn
        , "PreFundMortgageOut", data->PreFundMortgageOut
        , "FundMortgageIn", data->FundMortgageIn
        , "FundMortgageOut", data->FundMortgageOut
        , "FundMortgageAvailable", data->FundMortgageAvailable
        , "MortgageableFund", data->MortgageableFund
        , "SpecProductMargin", data->SpecProductMargin
        , "SpecProductFrozenMargin", data->SpecProductFrozenMargin
        , "SpecProductCommission", data->SpecProductCommission
        , "SpecProductFrozenCommission", data->SpecProductFrozenCommission
        , "SpecProductPositionProfit", data->SpecProductPositionProfit
        , "SpecProductCloseProfit", data->SpecProductCloseProfit
        , "SpecProductPositionProfitByAlg", data->SpecProductPositionProfitByAlg
        , "SpecProductExchangeMargin", data->SpecProductExchangeMargin
        , "FrozenSwap", data->FrozenSwap
        , "RemainSwap", data->RemainSwap
        , "OptionValue", data->OptionValue
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingTradingAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingTradingAccountField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncingTradingAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingAccountFieldData>(self);
    CThostFtdcSyncingTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncingTradingAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingTradingAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingAccountFieldData>(self);
    CThostFtdcSyncingTradingAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcSyncingTradingAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingAccountFieldData>(self);
    CThostFtdcSyncingTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcSyncingTradingAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingTradingAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingAccountFieldData>(self);
    CThostFtdcSyncingTradingAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncingTradingAccountFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncingTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingAccountFieldData>(self);
    CThostFtdcSyncingTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncingTradingAccountFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingTradingAccountField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingAccountFieldData>(self);
    CThostFtdcSyncingTradingAccountField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSyncingTradingAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingAccountFieldData>(self);
    CThostFtdcSyncingTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcSyncingTradingAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingTradingAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingAccountFieldData>(self);
    CThostFtdcSyncingTradingAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncingTradingAccountFieldType_members[] = {
    /// 上次质押金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PreMortgage",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.PreMortgage),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次质押金额")
    },
    /// 上次信用额度
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PreCredit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.PreCredit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次信用额度")
    },
    /// 上次存款额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PreDeposit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.PreDeposit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次存款额")
    },
    /// 上次结算准备金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PreBalance",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.PreBalance),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次结算准备金")
    },
    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PreMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.PreMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次占用的保证金")
    },
    /// 利息基数
    /// typedef double TThostFtdcMoneyType
    {
        .name = "InterestBase",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.InterestBase),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("利息基数")
    },
    /// 利息收入
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Interest",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.Interest),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("利息收入")
    },
    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Deposit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.Deposit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("入金金额")
    },
    /// 出金金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Withdraw",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.Withdraw),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("出金金额")
    },
    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.FrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("冻结的保证金")
    },
    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FrozenCash",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.FrozenCash),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("冻结的资金")
    },
    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FrozenCommission",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.FrozenCommission),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("冻结的手续费")
    },
    /// 当前保证金总额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CurrMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.CurrMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("当前保证金总额")
    },
    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CashIn",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.CashIn),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("资金差额")
    },
    /// 手续费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Commission",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.Commission),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("手续费")
    },
    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CloseProfit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.CloseProfit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓盈亏")
    },
    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PositionProfit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.PositionProfit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("持仓盈亏")
    },
    /// 期货结算准备金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Balance",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.Balance),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货结算准备金")
    },
    /// 可用资金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Available",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.Available),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("可用资金")
    },
    /// 可取资金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "WithdrawQuota",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.WithdrawQuota),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("可取资金")
    },
    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Reserve",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.Reserve),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("基本准备金")
    },
    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    {
        .name = "SettlementID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    /// 信用额度
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Credit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.Credit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("信用额度")
    },
    /// 质押金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Mortgage",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.Mortgage),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("质押金额")
    },
    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchangeMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.ExchangeMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所保证金")
    },
    /// 投资者交割保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "DeliveryMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.DeliveryMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投资者交割保证金")
    },
    /// 交易所交割保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchangeDeliveryMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.ExchangeDeliveryMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所交割保证金")
    },
    /// 保底期货结算准备金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ReserveBalance",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.ReserveBalance),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保底期货结算准备金")
    },
    /// 上次货币质入金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PreFundMortgageIn",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.PreFundMortgageIn),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次货币质入金额")
    },
    /// 上次货币质出金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PreFundMortgageOut",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.PreFundMortgageOut),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次货币质出金额")
    },
    /// 货币质入金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FundMortgageIn",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.FundMortgageIn),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("货币质入金额")
    },
    /// 货币质出金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FundMortgageOut",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.FundMortgageOut),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("货币质出金额")
    },
    /// 货币质押余额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FundMortgageAvailable",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.FundMortgageAvailable),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("货币质押余额")
    },
    /// 可质押货币金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MortgageableFund",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.MortgageableFund),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("可质押货币金额")
    },
    /// 特殊产品占用保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SpecProductMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.SpecProductMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("特殊产品占用保证金")
    },
    /// 特殊产品冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SpecProductFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.SpecProductFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("特殊产品冻结保证金")
    },
    /// 特殊产品手续费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SpecProductCommission",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.SpecProductCommission),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("特殊产品手续费")
    },
    /// 特殊产品冻结手续费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SpecProductFrozenCommission",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.SpecProductFrozenCommission),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("特殊产品冻结手续费")
    },
    /// 特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SpecProductPositionProfit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.SpecProductPositionProfit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("特殊产品持仓盈亏")
    },
    /// 特殊产品平仓盈亏
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SpecProductCloseProfit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.SpecProductCloseProfit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("特殊产品平仓盈亏")
    },
    /// 根据持仓盈亏算法计算的特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SpecProductPositionProfitByAlg",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.SpecProductPositionProfitByAlg),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("根据持仓盈亏算法计算的特殊产品持仓盈亏")
    },
    /// 特殊产品交易所保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SpecProductExchangeMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.SpecProductExchangeMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("特殊产品交易所保证金")
    },
    /// 延时换汇冻结金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FrozenSwap",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.FrozenSwap),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("延时换汇冻结金额")
    },
    /// 剩余换汇额度
    /// typedef double TThostFtdcMoneyType
    {
        .name = "RemainSwap",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.RemainSwap),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("剩余换汇额度")
    },
    /// 期权市值
    /// typedef double TThostFtdcMoneyType
    {
        .name = "OptionValue",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingAccountFieldData, data.OptionValue),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权市值")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncingTradingAccountFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncingTradingAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncingTradingAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcSyncingTradingAccountFieldType_get_AccountID,
    .set = PyCThostFtdcSyncingTradingAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncingTradingAccountFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncingTradingAccountFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcSyncingTradingAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcSyncingTradingAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncingTradingAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncingTradingAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("正在同步中的交易账号")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncingTradingAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncingTradingAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncingTradingAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncingTradingAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncingTradingAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncingTradingAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("正在同步中的交易账号")},
    {Py_tp_members, PyCThostFtdcSyncingTradingAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncingTradingAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncingTradingAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncingTradingAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncingTradingAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncingTradingAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncingTradingAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncingTradingAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncingTradingAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncingTradingAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncingTradingAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncingTradingAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncingTradingAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncingTradingAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncingTradingAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingTradingAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}