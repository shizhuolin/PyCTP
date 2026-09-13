
#include "PyCThostFtdcTradingAccountField.h"

///资金账户

static int PyCThostFtdcTradingAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "PreMortgage", "PreCredit", "PreDeposit", "PreBalance", "PreMargin", "InterestBase", "Interest", "Deposit", "Withdraw", "FrozenMargin", "FrozenCash", "FrozenCommission", "CurrMargin", "CashIn", "Commission", "CloseProfit", "PositionProfit", "Balance", "Available", "WithdrawQuota", "Reserve", "TradingDay", "SettlementID", "Credit", "Mortgage", "ExchangeMargin", "DeliveryMargin", "ExchangeDeliveryMargin", "ReserveBalance", "CurrencyID", "PreFundMortgageIn", "PreFundMortgageOut", "FundMortgageIn", "FundMortgageOut", "FundMortgageAvailable", "MortgageableFund", "SpecProductMargin", "SpecProductFrozenMargin", "SpecProductCommission", "SpecProductFrozenCommission", "SpecProductPositionProfit", "SpecProductCloseProfit", "SpecProductPositionProfitByAlg", "SpecProductExchangeMargin", "BizType", "FrozenSwap", "RemainSwap", "OptionValue", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTradingAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTradingAccountField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTradingAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcTradingAccountField_AccountID_length = 0;

    /// 上次质押金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_PreMortgage = 0.0;

    /// 上次信用额度
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_PreCredit = 0.0;

    /// 上次存款额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_PreDeposit = 0.0;

    /// 上次结算准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_PreBalance = 0.0;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_PreMargin = 0.0;

    /// 利息基数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_InterestBase = 0.0;

    /// 利息收入
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_Interest = 0.0;

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_Deposit = 0.0;

    /// 出金金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_Withdraw = 0.0;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_FrozenMargin = 0.0;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_FrozenCash = 0.0;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_FrozenCommission = 0.0;

    /// 当前保证金总额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_CurrMargin = 0.0;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_CashIn = 0.0;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_Commission = 0.0;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_CloseProfit = 0.0;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_PositionProfit = 0.0;

    /// 期货结算准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_Balance = 0.0;

    /// 可用资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_Available = 0.0;

    /// 可取资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_WithdrawQuota = 0.0;

    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_Reserve = 0.0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcTradingAccountField_TradingDay = NULL;
    Py_ssize_t CThostFtdcTradingAccountField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcTradingAccountField_SettlementID = 0;

    /// 信用额度
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_Credit = 0.0;

    /// 质押金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_Mortgage = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_ExchangeMargin = 0.0;

    /// 投资者交割保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_DeliveryMargin = 0.0;

    /// 交易所交割保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_ExchangeDeliveryMargin = 0.0;

    /// 保底期货结算准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_ReserveBalance = 0.0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcTradingAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcTradingAccountField_CurrencyID_length = 0;

    /// 上次货币质入金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_PreFundMortgageIn = 0.0;

    /// 上次货币质出金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_PreFundMortgageOut = 0.0;

    /// 货币质入金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_FundMortgageIn = 0.0;

    /// 货币质出金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_FundMortgageOut = 0.0;

    /// 货币质押余额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_FundMortgageAvailable = 0.0;

    /// 可质押货币金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_MortgageableFund = 0.0;

    /// 特殊产品占用保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_SpecProductMargin = 0.0;

    /// 特殊产品冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_SpecProductFrozenMargin = 0.0;

    /// 特殊产品手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_SpecProductCommission = 0.0;

    /// 特殊产品冻结手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_SpecProductFrozenCommission = 0.0;

    /// 特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_SpecProductPositionProfit = 0.0;

    /// 特殊产品平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_SpecProductCloseProfit = 0.0;

    /// 根据持仓盈亏算法计算的特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_SpecProductPositionProfitByAlg = 0.0;

    /// 特殊产品交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_SpecProductExchangeMargin = 0.0;

    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    char CThostFtdcTradingAccountField_BizType = 0;

    /// 延时换汇冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_FrozenSwap = 0.0;

    /// 剩余换汇额度
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_RemainSwap = 0.0;

    /// 期权市值
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountField_OptionValue = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dddddddddddddddddddddy#iddddddy#ddddddddddddddcddd", (char **)kwlist
        , &CThostFtdcTradingAccountField_BrokerID, &CThostFtdcTradingAccountField_BrokerID_length
        , &CThostFtdcTradingAccountField_AccountID, &CThostFtdcTradingAccountField_AccountID_length
        , &CThostFtdcTradingAccountField_PreMortgage
        , &CThostFtdcTradingAccountField_PreCredit
        , &CThostFtdcTradingAccountField_PreDeposit
        , &CThostFtdcTradingAccountField_PreBalance
        , &CThostFtdcTradingAccountField_PreMargin
        , &CThostFtdcTradingAccountField_InterestBase
        , &CThostFtdcTradingAccountField_Interest
        , &CThostFtdcTradingAccountField_Deposit
        , &CThostFtdcTradingAccountField_Withdraw
        , &CThostFtdcTradingAccountField_FrozenMargin
        , &CThostFtdcTradingAccountField_FrozenCash
        , &CThostFtdcTradingAccountField_FrozenCommission
        , &CThostFtdcTradingAccountField_CurrMargin
        , &CThostFtdcTradingAccountField_CashIn
        , &CThostFtdcTradingAccountField_Commission
        , &CThostFtdcTradingAccountField_CloseProfit
        , &CThostFtdcTradingAccountField_PositionProfit
        , &CThostFtdcTradingAccountField_Balance
        , &CThostFtdcTradingAccountField_Available
        , &CThostFtdcTradingAccountField_WithdrawQuota
        , &CThostFtdcTradingAccountField_Reserve
        , &CThostFtdcTradingAccountField_TradingDay, &CThostFtdcTradingAccountField_TradingDay_length
        , &CThostFtdcTradingAccountField_SettlementID
        , &CThostFtdcTradingAccountField_Credit
        , &CThostFtdcTradingAccountField_Mortgage
        , &CThostFtdcTradingAccountField_ExchangeMargin
        , &CThostFtdcTradingAccountField_DeliveryMargin
        , &CThostFtdcTradingAccountField_ExchangeDeliveryMargin
        , &CThostFtdcTradingAccountField_ReserveBalance
        , &CThostFtdcTradingAccountField_CurrencyID, &CThostFtdcTradingAccountField_CurrencyID_length
        , &CThostFtdcTradingAccountField_PreFundMortgageIn
        , &CThostFtdcTradingAccountField_PreFundMortgageOut
        , &CThostFtdcTradingAccountField_FundMortgageIn
        , &CThostFtdcTradingAccountField_FundMortgageOut
        , &CThostFtdcTradingAccountField_FundMortgageAvailable
        , &CThostFtdcTradingAccountField_MortgageableFund
        , &CThostFtdcTradingAccountField_SpecProductMargin
        , &CThostFtdcTradingAccountField_SpecProductFrozenMargin
        , &CThostFtdcTradingAccountField_SpecProductCommission
        , &CThostFtdcTradingAccountField_SpecProductFrozenCommission
        , &CThostFtdcTradingAccountField_SpecProductPositionProfit
        , &CThostFtdcTradingAccountField_SpecProductCloseProfit
        , &CThostFtdcTradingAccountField_SpecProductPositionProfitByAlg
        , &CThostFtdcTradingAccountField_SpecProductExchangeMargin
        , &CThostFtdcTradingAccountField_BizType
        , &CThostFtdcTradingAccountField_FrozenSwap
        , &CThostFtdcTradingAccountField_RemainSwap
        , &CThostFtdcTradingAccountField_OptionValue
    )) {
        return -1;
    }

    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTradingAccountField_BrokerID != NULL ) {
        if(CThostFtdcTradingAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTradingAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTradingAccountField_BrokerID, CThostFtdcTradingAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTradingAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTradingAccountField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTradingAccountField_AccountID != NULL ) {
        if(CThostFtdcTradingAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcTradingAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcTradingAccountField_AccountID, CThostFtdcTradingAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcTradingAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcTradingAccountField_AccountID = NULL;
    }

    /// 上次质押金额
    /// typedef double TThostFtdcMoneyType
    data->PreMortgage = CThostFtdcTradingAccountField_PreMortgage;

    /// 上次信用额度
    /// typedef double TThostFtdcMoneyType
    data->PreCredit = CThostFtdcTradingAccountField_PreCredit;

    /// 上次存款额
    /// typedef double TThostFtdcMoneyType
    data->PreDeposit = CThostFtdcTradingAccountField_PreDeposit;

    /// 上次结算准备金
    /// typedef double TThostFtdcMoneyType
    data->PreBalance = CThostFtdcTradingAccountField_PreBalance;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    data->PreMargin = CThostFtdcTradingAccountField_PreMargin;

    /// 利息基数
    /// typedef double TThostFtdcMoneyType
    data->InterestBase = CThostFtdcTradingAccountField_InterestBase;

    /// 利息收入
    /// typedef double TThostFtdcMoneyType
    data->Interest = CThostFtdcTradingAccountField_Interest;

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    data->Deposit = CThostFtdcTradingAccountField_Deposit;

    /// 出金金额
    /// typedef double TThostFtdcMoneyType
    data->Withdraw = CThostFtdcTradingAccountField_Withdraw;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    data->FrozenMargin = CThostFtdcTradingAccountField_FrozenMargin;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    data->FrozenCash = CThostFtdcTradingAccountField_FrozenCash;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    data->FrozenCommission = CThostFtdcTradingAccountField_FrozenCommission;

    /// 当前保证金总额
    /// typedef double TThostFtdcMoneyType
    data->CurrMargin = CThostFtdcTradingAccountField_CurrMargin;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    data->CashIn = CThostFtdcTradingAccountField_CashIn;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    data->Commission = CThostFtdcTradingAccountField_Commission;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfit = CThostFtdcTradingAccountField_CloseProfit;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->PositionProfit = CThostFtdcTradingAccountField_PositionProfit;

    /// 期货结算准备金
    /// typedef double TThostFtdcMoneyType
    data->Balance = CThostFtdcTradingAccountField_Balance;

    /// 可用资金
    /// typedef double TThostFtdcMoneyType
    data->Available = CThostFtdcTradingAccountField_Available;

    /// 可取资金
    /// typedef double TThostFtdcMoneyType
    data->WithdrawQuota = CThostFtdcTradingAccountField_WithdrawQuota;

    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    data->Reserve = CThostFtdcTradingAccountField_Reserve;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcTradingAccountField_TradingDay != NULL ) {
        if(CThostFtdcTradingAccountField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcTradingAccountField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcTradingAccountField_TradingDay, CThostFtdcTradingAccountField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcTradingAccountField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcTradingAccountField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcTradingAccountField_SettlementID;

    /// 信用额度
    /// typedef double TThostFtdcMoneyType
    data->Credit = CThostFtdcTradingAccountField_Credit;

    /// 质押金额
    /// typedef double TThostFtdcMoneyType
    data->Mortgage = CThostFtdcTradingAccountField_Mortgage;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchangeMargin = CThostFtdcTradingAccountField_ExchangeMargin;

    /// 投资者交割保证金
    /// typedef double TThostFtdcMoneyType
    data->DeliveryMargin = CThostFtdcTradingAccountField_DeliveryMargin;

    /// 交易所交割保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchangeDeliveryMargin = CThostFtdcTradingAccountField_ExchangeDeliveryMargin;

    /// 保底期货结算准备金
    /// typedef double TThostFtdcMoneyType
    data->ReserveBalance = CThostFtdcTradingAccountField_ReserveBalance;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcTradingAccountField_CurrencyID != NULL ) {
        if(CThostFtdcTradingAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcTradingAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcTradingAccountField_CurrencyID, CThostFtdcTradingAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcTradingAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcTradingAccountField_CurrencyID = NULL;
    }

    /// 上次货币质入金额
    /// typedef double TThostFtdcMoneyType
    data->PreFundMortgageIn = CThostFtdcTradingAccountField_PreFundMortgageIn;

    /// 上次货币质出金额
    /// typedef double TThostFtdcMoneyType
    data->PreFundMortgageOut = CThostFtdcTradingAccountField_PreFundMortgageOut;

    /// 货币质入金额
    /// typedef double TThostFtdcMoneyType
    data->FundMortgageIn = CThostFtdcTradingAccountField_FundMortgageIn;

    /// 货币质出金额
    /// typedef double TThostFtdcMoneyType
    data->FundMortgageOut = CThostFtdcTradingAccountField_FundMortgageOut;

    /// 货币质押余额
    /// typedef double TThostFtdcMoneyType
    data->FundMortgageAvailable = CThostFtdcTradingAccountField_FundMortgageAvailable;

    /// 可质押货币金额
    /// typedef double TThostFtdcMoneyType
    data->MortgageableFund = CThostFtdcTradingAccountField_MortgageableFund;

    /// 特殊产品占用保证金
    /// typedef double TThostFtdcMoneyType
    data->SpecProductMargin = CThostFtdcTradingAccountField_SpecProductMargin;

    /// 特殊产品冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->SpecProductFrozenMargin = CThostFtdcTradingAccountField_SpecProductFrozenMargin;

    /// 特殊产品手续费
    /// typedef double TThostFtdcMoneyType
    data->SpecProductCommission = CThostFtdcTradingAccountField_SpecProductCommission;

    /// 特殊产品冻结手续费
    /// typedef double TThostFtdcMoneyType
    data->SpecProductFrozenCommission = CThostFtdcTradingAccountField_SpecProductFrozenCommission;

    /// 特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->SpecProductPositionProfit = CThostFtdcTradingAccountField_SpecProductPositionProfit;

    /// 特殊产品平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->SpecProductCloseProfit = CThostFtdcTradingAccountField_SpecProductCloseProfit;

    /// 根据持仓盈亏算法计算的特殊产品持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->SpecProductPositionProfitByAlg = CThostFtdcTradingAccountField_SpecProductPositionProfitByAlg;

    /// 特殊产品交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->SpecProductExchangeMargin = CThostFtdcTradingAccountField_SpecProductExchangeMargin;

    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    data->BizType = CThostFtdcTradingAccountField_BizType;

    /// 延时换汇冻结金额
    /// typedef double TThostFtdcMoneyType
    data->FrozenSwap = CThostFtdcTradingAccountField_FrozenSwap;

    /// 剩余换汇额度
    /// typedef double TThostFtdcMoneyType
    data->RemainSwap = CThostFtdcTradingAccountField_RemainSwap;

    /// 期权市值
    /// typedef double TThostFtdcMoneyType
    data->OptionValue = CThostFtdcTradingAccountField_OptionValue;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTradingAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:d,s:d,s:d}"
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
        , "BizType", data->BizType
        , "FrozenSwap", data->FrozenSwap
        , "RemainSwap", data->RemainSwap
        , "OptionValue", data->OptionValue
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTradingAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTradingAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTradingAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcTradingAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcTradingAccountFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcTradingAccountFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcTradingAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcTradingAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务类型
/// typedef char TThostFtdcBizTypeType
static PyObject *PyCThostFtdcTradingAccountFieldType_get_BizType(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BizType), 1);
}

static int PyCThostFtdcTradingAccountFieldType_set_BizType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BizType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradingAccountField::BizType)) {
        PyErr_SetString(PyExc_ValueError, "BizType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(self);
    CThostFtdcTradingAccountField *data = &(extra->data);
    data->BizType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTradingAccountFieldType_members[] = {
    /// 上次质押金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PreMortgage",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.PreMortgage),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.PreCredit),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.PreDeposit),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.PreBalance),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.PreMargin),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.InterestBase),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.Interest),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.Deposit),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.Withdraw),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.FrozenMargin),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.FrozenCash),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.FrozenCommission),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.CurrMargin),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.CashIn),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.Commission),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.CloseProfit),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.PositionProfit),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.Balance),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.Available),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.WithdrawQuota),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.Reserve),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.Credit),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.Mortgage),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.ExchangeMargin),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.DeliveryMargin),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.ExchangeDeliveryMargin),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.ReserveBalance),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.PreFundMortgageIn),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.PreFundMortgageOut),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.FundMortgageIn),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.FundMortgageOut),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.FundMortgageAvailable),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.MortgageableFund),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.SpecProductMargin),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.SpecProductFrozenMargin),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.SpecProductCommission),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.SpecProductFrozenCommission),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.SpecProductPositionProfit),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.SpecProductCloseProfit),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.SpecProductPositionProfitByAlg),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.SpecProductExchangeMargin),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.FrozenSwap),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.RemainSwap),
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
        .offset = offsetof(PyCThostFtdcTradingAccountFieldData, data.OptionValue),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权市值")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTradingAccountFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTradingAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcTradingAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcTradingAccountFieldType_get_AccountID,
    .set = PyCThostFtdcTradingAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcTradingAccountFieldType_get_TradingDay,
    .set = PyCThostFtdcTradingAccountFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcTradingAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcTradingAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    {
    .name = "BizType",
    .get = PyCThostFtdcTradingAccountFieldType_get_BizType,
    .set = PyCThostFtdcTradingAccountFieldType_set_BizType,
    .doc = PyDoc_STR("业务类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTradingAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTradingAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("资金账户")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTradingAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTradingAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTradingAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTradingAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTradingAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTradingAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("资金账户")},
    {Py_tp_members, PyCThostFtdcTradingAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcTradingAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTradingAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTradingAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTradingAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcTradingAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTradingAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTradingAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTradingAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTradingAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTradingAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTradingAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTradingAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTradingAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTradingAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}