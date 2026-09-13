
#include "PyCThostFtdcSyncDeltaTradingAccountField.h"

///风险结算追平资金

static int PyCThostFtdcSyncDeltaTradingAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "PreMortgage", "PreCredit", "PreDeposit", "PreBalance", "PreMargin", "InterestBase", "Interest", "Deposit", "Withdraw", "FrozenMargin", "FrozenCash", "FrozenCommission", "CurrMargin", "CashIn", "Commission", "CloseProfit", "PositionProfit", "Balance", "Available", "WithdrawQuota", "Reserve", "TradingDay", "SettlementID", "Credit", "Mortgage", "ExchangeMargin", "DeliveryMargin", "ExchangeDeliveryMargin", "ReserveBalance", "CurrencyID", "PreFundMortgageIn", "PreFundMortgageOut", "FundMortgageIn", "FundMortgageOut", "FundMortgageAvailable", "MortgageableFund", "SpecProductMargin", "SpecProductFrozenMargin", "SpecProductCommission", "SpecProductFrozenCommission", "SpecProductPositionProfit", "SpecProductCloseProfit", "SpecProductPositionProfitByAlg", "SpecProductExchangeMargin", "FrozenSwap", "RemainSwap", "OptionValue", "SyncDeltaSequenceNo", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaTradingAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaTradingAccountField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcSyncDeltaTradingAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaTradingAccountField_AccountID_length = 0;

    /// 上次质押金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_PreMortgage = 0.0;

    /// 上次信用额度
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_PreCredit = 0.0;

    /// 上次存款额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_PreDeposit = 0.0;

    /// 上次结算准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_PreBalance = 0.0;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_PreMargin = 0.0;

    /// 利息基数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_InterestBase = 0.0;

    /// 利息收入
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_Interest = 0.0;

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_Deposit = 0.0;

    /// 出金金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_Withdraw = 0.0;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_FrozenMargin = 0.0;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_FrozenCash = 0.0;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_FrozenCommission = 0.0;

    /// 当前保证金总额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_CurrMargin = 0.0;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_CashIn = 0.0;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_Commission = 0.0;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_CloseProfit = 0.0;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_PositionProfit = 0.0;

    /// 期货结算准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_Balance = 0.0;

    /// 可用资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_Available = 0.0;

    /// 可取资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_WithdrawQuota = 0.0;

    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_Reserve = 0.0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaTradingAccountField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaTradingAccountField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcSyncDeltaTradingAccountField_SettlementID = 0;

    /// 信用额度
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_Credit = 0.0;

    /// 质押金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_Mortgage = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_ExchangeMargin = 0.0;

    /// 投资者交割保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_DeliveryMargin = 0.0;

    /// 交易所交割保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_ExchangeDeliveryMargin = 0.0;

    /// 保底期货结算准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_ReserveBalance = 0.0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSyncDeltaTradingAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaTradingAccountField_CurrencyID_length = 0;

    /// 上次货币质入金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_PreFundMortgageIn = 0.0;

    /// 上次货币质出金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_PreFundMortgageOut = 0.0;

    /// 货币质入金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_FundMortgageIn = 0.0;

    /// 货币质出金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_FundMortgageOut = 0.0;

    /// 货币质押余额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_FundMortgageAvailable = 0.0;

    /// 可质押货币金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_MortgageableFund = 0.0;

    /// 特殊产品占用保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_SpecProductMargin = 0.0;

    /// 特殊产品冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_SpecProductFrozenMargin = 0.0;

    /// 特殊产品手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_SpecProductCommission = 0.0;

    /// 特殊产品冻结手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_SpecProductFrozenCommission = 0.0;

    /// 特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_SpecProductPositionProfit = 0.0;

    /// 特殊产品平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_SpecProductCloseProfit = 0.0;

    /// 根据持仓盈亏算法计算的特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_SpecProductPositionProfitByAlg = 0.0;

    /// 特殊产品交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_SpecProductExchangeMargin = 0.0;

    /// 延时换汇冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_FrozenSwap = 0.0;

    /// 剩余换汇额度
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_RemainSwap = 0.0;

    /// 期权市值
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaTradingAccountField_OptionValue = 0.0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaTradingAccountField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dddddddddddddddddddddy#iddddddy#dddddddddddddddddi", (char **)kwlist
        , &CThostFtdcSyncDeltaTradingAccountField_BrokerID, &CThostFtdcSyncDeltaTradingAccountField_BrokerID_length
        , &CThostFtdcSyncDeltaTradingAccountField_AccountID, &CThostFtdcSyncDeltaTradingAccountField_AccountID_length
        , &CThostFtdcSyncDeltaTradingAccountField_PreMortgage
        , &CThostFtdcSyncDeltaTradingAccountField_PreCredit
        , &CThostFtdcSyncDeltaTradingAccountField_PreDeposit
        , &CThostFtdcSyncDeltaTradingAccountField_PreBalance
        , &CThostFtdcSyncDeltaTradingAccountField_PreMargin
        , &CThostFtdcSyncDeltaTradingAccountField_InterestBase
        , &CThostFtdcSyncDeltaTradingAccountField_Interest
        , &CThostFtdcSyncDeltaTradingAccountField_Deposit
        , &CThostFtdcSyncDeltaTradingAccountField_Withdraw
        , &CThostFtdcSyncDeltaTradingAccountField_FrozenMargin
        , &CThostFtdcSyncDeltaTradingAccountField_FrozenCash
        , &CThostFtdcSyncDeltaTradingAccountField_FrozenCommission
        , &CThostFtdcSyncDeltaTradingAccountField_CurrMargin
        , &CThostFtdcSyncDeltaTradingAccountField_CashIn
        , &CThostFtdcSyncDeltaTradingAccountField_Commission
        , &CThostFtdcSyncDeltaTradingAccountField_CloseProfit
        , &CThostFtdcSyncDeltaTradingAccountField_PositionProfit
        , &CThostFtdcSyncDeltaTradingAccountField_Balance
        , &CThostFtdcSyncDeltaTradingAccountField_Available
        , &CThostFtdcSyncDeltaTradingAccountField_WithdrawQuota
        , &CThostFtdcSyncDeltaTradingAccountField_Reserve
        , &CThostFtdcSyncDeltaTradingAccountField_TradingDay, &CThostFtdcSyncDeltaTradingAccountField_TradingDay_length
        , &CThostFtdcSyncDeltaTradingAccountField_SettlementID
        , &CThostFtdcSyncDeltaTradingAccountField_Credit
        , &CThostFtdcSyncDeltaTradingAccountField_Mortgage
        , &CThostFtdcSyncDeltaTradingAccountField_ExchangeMargin
        , &CThostFtdcSyncDeltaTradingAccountField_DeliveryMargin
        , &CThostFtdcSyncDeltaTradingAccountField_ExchangeDeliveryMargin
        , &CThostFtdcSyncDeltaTradingAccountField_ReserveBalance
        , &CThostFtdcSyncDeltaTradingAccountField_CurrencyID, &CThostFtdcSyncDeltaTradingAccountField_CurrencyID_length
        , &CThostFtdcSyncDeltaTradingAccountField_PreFundMortgageIn
        , &CThostFtdcSyncDeltaTradingAccountField_PreFundMortgageOut
        , &CThostFtdcSyncDeltaTradingAccountField_FundMortgageIn
        , &CThostFtdcSyncDeltaTradingAccountField_FundMortgageOut
        , &CThostFtdcSyncDeltaTradingAccountField_FundMortgageAvailable
        , &CThostFtdcSyncDeltaTradingAccountField_MortgageableFund
        , &CThostFtdcSyncDeltaTradingAccountField_SpecProductMargin
        , &CThostFtdcSyncDeltaTradingAccountField_SpecProductFrozenMargin
        , &CThostFtdcSyncDeltaTradingAccountField_SpecProductCommission
        , &CThostFtdcSyncDeltaTradingAccountField_SpecProductFrozenCommission
        , &CThostFtdcSyncDeltaTradingAccountField_SpecProductPositionProfit
        , &CThostFtdcSyncDeltaTradingAccountField_SpecProductCloseProfit
        , &CThostFtdcSyncDeltaTradingAccountField_SpecProductPositionProfitByAlg
        , &CThostFtdcSyncDeltaTradingAccountField_SpecProductExchangeMargin
        , &CThostFtdcSyncDeltaTradingAccountField_FrozenSwap
        , &CThostFtdcSyncDeltaTradingAccountField_RemainSwap
        , &CThostFtdcSyncDeltaTradingAccountField_OptionValue
        , &CThostFtdcSyncDeltaTradingAccountField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaTradingAccountFieldData>(self);
    CThostFtdcSyncDeltaTradingAccountField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaTradingAccountField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaTradingAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaTradingAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaTradingAccountField_BrokerID, CThostFtdcSyncDeltaTradingAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaTradingAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaTradingAccountField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcSyncDeltaTradingAccountField_AccountID != NULL ) {
        if(CThostFtdcSyncDeltaTradingAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaTradingAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcSyncDeltaTradingAccountField_AccountID, CThostFtdcSyncDeltaTradingAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcSyncDeltaTradingAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcSyncDeltaTradingAccountField_AccountID = NULL;
    }

    /// 上次质押金额
    /// typedef double TThostFtdcMoneyType
    data->PreMortgage = CThostFtdcSyncDeltaTradingAccountField_PreMortgage;

    /// 上次信用额度
    /// typedef double TThostFtdcMoneyType
    data->PreCredit = CThostFtdcSyncDeltaTradingAccountField_PreCredit;

    /// 上次存款额
    /// typedef double TThostFtdcMoneyType
    data->PreDeposit = CThostFtdcSyncDeltaTradingAccountField_PreDeposit;

    /// 上次结算准备金
    /// typedef double TThostFtdcMoneyType
    data->PreBalance = CThostFtdcSyncDeltaTradingAccountField_PreBalance;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    data->PreMargin = CThostFtdcSyncDeltaTradingAccountField_PreMargin;

    /// 利息基数
    /// typedef double TThostFtdcMoneyType
    data->InterestBase = CThostFtdcSyncDeltaTradingAccountField_InterestBase;

    /// 利息收入
    /// typedef double TThostFtdcMoneyType
    data->Interest = CThostFtdcSyncDeltaTradingAccountField_Interest;

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    data->Deposit = CThostFtdcSyncDeltaTradingAccountField_Deposit;

    /// 出金金额
    /// typedef double TThostFtdcMoneyType
    data->Withdraw = CThostFtdcSyncDeltaTradingAccountField_Withdraw;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    data->FrozenMargin = CThostFtdcSyncDeltaTradingAccountField_FrozenMargin;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    data->FrozenCash = CThostFtdcSyncDeltaTradingAccountField_FrozenCash;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    data->FrozenCommission = CThostFtdcSyncDeltaTradingAccountField_FrozenCommission;

    /// 当前保证金总额
    /// typedef double TThostFtdcMoneyType
    data->CurrMargin = CThostFtdcSyncDeltaTradingAccountField_CurrMargin;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    data->CashIn = CThostFtdcSyncDeltaTradingAccountField_CashIn;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    data->Commission = CThostFtdcSyncDeltaTradingAccountField_Commission;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfit = CThostFtdcSyncDeltaTradingAccountField_CloseProfit;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->PositionProfit = CThostFtdcSyncDeltaTradingAccountField_PositionProfit;

    /// 期货结算准备金
    /// typedef double TThostFtdcMoneyType
    data->Balance = CThostFtdcSyncDeltaTradingAccountField_Balance;

    /// 可用资金
    /// typedef double TThostFtdcMoneyType
    data->Available = CThostFtdcSyncDeltaTradingAccountField_Available;

    /// 可取资金
    /// typedef double TThostFtdcMoneyType
    data->WithdrawQuota = CThostFtdcSyncDeltaTradingAccountField_WithdrawQuota;

    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    data->Reserve = CThostFtdcSyncDeltaTradingAccountField_Reserve;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaTradingAccountField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaTradingAccountField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaTradingAccountField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaTradingAccountField_TradingDay, CThostFtdcSyncDeltaTradingAccountField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaTradingAccountField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaTradingAccountField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcSyncDeltaTradingAccountField_SettlementID;

    /// 信用额度
    /// typedef double TThostFtdcMoneyType
    data->Credit = CThostFtdcSyncDeltaTradingAccountField_Credit;

    /// 质押金额
    /// typedef double TThostFtdcMoneyType
    data->Mortgage = CThostFtdcSyncDeltaTradingAccountField_Mortgage;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchangeMargin = CThostFtdcSyncDeltaTradingAccountField_ExchangeMargin;

    /// 投资者交割保证金
    /// typedef double TThostFtdcMoneyType
    data->DeliveryMargin = CThostFtdcSyncDeltaTradingAccountField_DeliveryMargin;

    /// 交易所交割保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchangeDeliveryMargin = CThostFtdcSyncDeltaTradingAccountField_ExchangeDeliveryMargin;

    /// 保底期货结算准备金
    /// typedef double TThostFtdcMoneyType
    data->ReserveBalance = CThostFtdcSyncDeltaTradingAccountField_ReserveBalance;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSyncDeltaTradingAccountField_CurrencyID != NULL ) {
        if(CThostFtdcSyncDeltaTradingAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSyncDeltaTradingAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcSyncDeltaTradingAccountField_CurrencyID, CThostFtdcSyncDeltaTradingAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcSyncDeltaTradingAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcSyncDeltaTradingAccountField_CurrencyID = NULL;
    }

    /// 上次货币质入金额
    /// typedef double TThostFtdcMoneyType
    data->PreFundMortgageIn = CThostFtdcSyncDeltaTradingAccountField_PreFundMortgageIn;

    /// 上次货币质出金额
    /// typedef double TThostFtdcMoneyType
    data->PreFundMortgageOut = CThostFtdcSyncDeltaTradingAccountField_PreFundMortgageOut;

    /// 货币质入金额
    /// typedef double TThostFtdcMoneyType
    data->FundMortgageIn = CThostFtdcSyncDeltaTradingAccountField_FundMortgageIn;

    /// 货币质出金额
    /// typedef double TThostFtdcMoneyType
    data->FundMortgageOut = CThostFtdcSyncDeltaTradingAccountField_FundMortgageOut;

    /// 货币质押余额
    /// typedef double TThostFtdcMoneyType
    data->FundMortgageAvailable = CThostFtdcSyncDeltaTradingAccountField_FundMortgageAvailable;

    /// 可质押货币金额
    /// typedef double TThostFtdcMoneyType
    data->MortgageableFund = CThostFtdcSyncDeltaTradingAccountField_MortgageableFund;

    /// 特殊产品占用保证金
    /// typedef double TThostFtdcMoneyType
    data->SpecProductMargin = CThostFtdcSyncDeltaTradingAccountField_SpecProductMargin;

    /// 特殊产品冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->SpecProductFrozenMargin = CThostFtdcSyncDeltaTradingAccountField_SpecProductFrozenMargin;

    /// 特殊产品手续费
    /// typedef double TThostFtdcMoneyType
    data->SpecProductCommission = CThostFtdcSyncDeltaTradingAccountField_SpecProductCommission;

    /// 特殊产品冻结手续费
    /// typedef double TThostFtdcMoneyType
    data->SpecProductFrozenCommission = CThostFtdcSyncDeltaTradingAccountField_SpecProductFrozenCommission;

    /// 特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->SpecProductPositionProfit = CThostFtdcSyncDeltaTradingAccountField_SpecProductPositionProfit;

    /// 特殊产品平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->SpecProductCloseProfit = CThostFtdcSyncDeltaTradingAccountField_SpecProductCloseProfit;

    /// 根据持仓盈亏算法计算的特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->SpecProductPositionProfitByAlg = CThostFtdcSyncDeltaTradingAccountField_SpecProductPositionProfitByAlg;

    /// 特殊产品交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->SpecProductExchangeMargin = CThostFtdcSyncDeltaTradingAccountField_SpecProductExchangeMargin;

    /// 延时换汇冻结金额
    /// typedef double TThostFtdcMoneyType
    data->FrozenSwap = CThostFtdcSyncDeltaTradingAccountField_FrozenSwap;

    /// 剩余换汇额度
    /// typedef double TThostFtdcMoneyType
    data->RemainSwap = CThostFtdcSyncDeltaTradingAccountField_RemainSwap;

    /// 期权市值
    /// typedef double TThostFtdcMoneyType
    data->OptionValue = CThostFtdcSyncDeltaTradingAccountField_OptionValue;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaTradingAccountField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaTradingAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaTradingAccountFieldData>(self);
    CThostFtdcSyncDeltaTradingAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
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
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaTradingAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaTradingAccountField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaTradingAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaTradingAccountFieldData>(self);
    CThostFtdcSyncDeltaTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaTradingAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaTradingAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaTradingAccountFieldData>(self);
    CThostFtdcSyncDeltaTradingAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcSyncDeltaTradingAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaTradingAccountFieldData>(self);
    CThostFtdcSyncDeltaTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcSyncDeltaTradingAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaTradingAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaTradingAccountFieldData>(self);
    CThostFtdcSyncDeltaTradingAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaTradingAccountFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaTradingAccountFieldData>(self);
    CThostFtdcSyncDeltaTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaTradingAccountFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaTradingAccountField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaTradingAccountFieldData>(self);
    CThostFtdcSyncDeltaTradingAccountField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSyncDeltaTradingAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaTradingAccountFieldData>(self);
    CThostFtdcSyncDeltaTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcSyncDeltaTradingAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaTradingAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaTradingAccountFieldData>(self);
    CThostFtdcSyncDeltaTradingAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaTradingAccountFieldType_members[] = {
    /// 上次质押金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PreMortgage",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.PreMortgage),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.PreCredit),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.PreDeposit),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.PreBalance),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.PreMargin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.InterestBase),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.Interest),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.Deposit),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.Withdraw),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.FrozenMargin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.FrozenCash),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.FrozenCommission),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.CurrMargin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.CashIn),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.Commission),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.CloseProfit),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.PositionProfit),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.Balance),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.Available),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.WithdrawQuota),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.Reserve),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.Credit),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.Mortgage),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.ExchangeMargin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.DeliveryMargin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.ExchangeDeliveryMargin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.ReserveBalance),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.PreFundMortgageIn),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.PreFundMortgageOut),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.FundMortgageIn),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.FundMortgageOut),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.FundMortgageAvailable),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.MortgageableFund),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.SpecProductMargin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.SpecProductFrozenMargin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.SpecProductCommission),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.SpecProductFrozenCommission),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.SpecProductPositionProfit),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.SpecProductCloseProfit),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.SpecProductPositionProfitByAlg),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.SpecProductExchangeMargin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.FrozenSwap),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.RemainSwap),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.OptionValue),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权市值")
    },
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaTradingAccountFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaTradingAccountFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaTradingAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaTradingAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcSyncDeltaTradingAccountFieldType_get_AccountID,
    .set = PyCThostFtdcSyncDeltaTradingAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaTradingAccountFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaTradingAccountFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcSyncDeltaTradingAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcSyncDeltaTradingAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaTradingAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaTradingAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平资金")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaTradingAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaTradingAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaTradingAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaTradingAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaTradingAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaTradingAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平资金")},
    {Py_tp_members, PyCThostFtdcSyncDeltaTradingAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaTradingAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaTradingAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaTradingAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaTradingAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaTradingAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaTradingAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaTradingAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaTradingAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaTradingAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaTradingAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaTradingAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaTradingAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaTradingAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaTradingAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaTradingAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}