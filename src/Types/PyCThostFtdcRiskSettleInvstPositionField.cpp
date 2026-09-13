
#include "PyCThostFtdcRiskSettleInvstPositionField.h"

///投资者风险结算持仓

static int PyCThostFtdcRiskSettleInvstPositionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InstrumentID", "BrokerID", "InvestorID", "PosiDirection", "HedgeFlag", "PositionDate", "YdPosition", "Position", "LongFrozen", "ShortFrozen", "LongFrozenAmount", "ShortFrozenAmount", "OpenVolume", "CloseVolume", "OpenAmount", "CloseAmount", "PositionCost", "PreMargin", "UseMargin", "FrozenMargin", "FrozenCash", "FrozenCommission", "CashIn", "Commission", "CloseProfit", "PositionProfit", "PreSettlementPrice", "SettlementPrice", "TradingDay", "SettlementID", "OpenCost", "ExchangeMargin", "CombPosition", "CombLongFrozen", "CombShortFrozen", "CloseProfitByDate", "CloseProfitByTrade", "TodayPosition", "MarginRateByMoney", "MarginRateByVolume", "StrikeFrozen", "StrikeFrozenAmount", "AbandonFrozen", "ExchangeID", "YdStrikeFrozen", "InvestUnitID", "PositionCostOffset", "TasPosition", "TasPositionCost", NULL };


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcRiskSettleInvstPositionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcRiskSettleInvstPositionField_InstrumentID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRiskSettleInvstPositionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRiskSettleInvstPositionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcRiskSettleInvstPositionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcRiskSettleInvstPositionField_InvestorID_length = 0;

    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    char CThostFtdcRiskSettleInvstPositionField_PosiDirection = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcRiskSettleInvstPositionField_HedgeFlag = 0;

    /// 持仓日期
    /// typedef char TThostFtdcPositionDateType
    char CThostFtdcRiskSettleInvstPositionField_PositionDate = 0;

    /// 上日持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_YdPosition = 0;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_Position = 0;

    /// 多头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_LongFrozen = 0;

    /// 空头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_ShortFrozen = 0;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_LongFrozenAmount = 0.0;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_ShortFrozenAmount = 0.0;

    /// 开仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_OpenVolume = 0;

    /// 平仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_CloseVolume = 0;

    /// 开仓金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_OpenAmount = 0.0;

    /// 平仓金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_CloseAmount = 0.0;

    /// 持仓成本
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_PositionCost = 0.0;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_PreMargin = 0.0;

    /// 占用的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_UseMargin = 0.0;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_FrozenMargin = 0.0;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_FrozenCash = 0.0;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_FrozenCommission = 0.0;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_CashIn = 0.0;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_Commission = 0.0;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_CloseProfit = 0.0;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_PositionProfit = 0.0;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcRiskSettleInvstPositionField_PreSettlementPrice = 0.0;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcRiskSettleInvstPositionField_SettlementPrice = 0.0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcRiskSettleInvstPositionField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRiskSettleInvstPositionField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcRiskSettleInvstPositionField_SettlementID = 0;

    /// 开仓成本
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_OpenCost = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_ExchangeMargin = 0.0;

    /// 组合成交形成的持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_CombPosition = 0;

    /// 组合多头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_CombLongFrozen = 0;

    /// 组合空头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_CombShortFrozen = 0;

    /// 逐日盯市平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_CloseProfitByDate = 0.0;

    /// 逐笔对冲平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_CloseProfitByTrade = 0.0;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_TodayPosition = 0;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcRiskSettleInvstPositionField_MarginRateByMoney = 0.0;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    double CThostFtdcRiskSettleInvstPositionField_MarginRateByVolume = 0.0;

    /// 执行冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_StrikeFrozen = 0;

    /// 执行冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_StrikeFrozenAmount = 0.0;

    /// 放弃执行冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_AbandonFrozen = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcRiskSettleInvstPositionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcRiskSettleInvstPositionField_ExchangeID_length = 0;

    /// 执行冻结的昨仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_YdStrikeFrozen = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcRiskSettleInvstPositionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcRiskSettleInvstPositionField_InvestUnitID_length = 0;

    /// 持仓成本差值
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_PositionCostOffset = 0.0;

    /// tas持仓手数
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcRiskSettleInvstPositionField_TasPosition = 0;

    /// tas持仓成本
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRiskSettleInvstPositionField_TasPositionCost = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccciiiiddiiddddddddddddddy#iddiiiddiddidiy#iy#did", (char **)kwlist
        , &CThostFtdcRiskSettleInvstPositionField_InstrumentID, &CThostFtdcRiskSettleInvstPositionField_InstrumentID_length
        , &CThostFtdcRiskSettleInvstPositionField_BrokerID, &CThostFtdcRiskSettleInvstPositionField_BrokerID_length
        , &CThostFtdcRiskSettleInvstPositionField_InvestorID, &CThostFtdcRiskSettleInvstPositionField_InvestorID_length
        , &CThostFtdcRiskSettleInvstPositionField_PosiDirection
        , &CThostFtdcRiskSettleInvstPositionField_HedgeFlag
        , &CThostFtdcRiskSettleInvstPositionField_PositionDate
        , &CThostFtdcRiskSettleInvstPositionField_YdPosition
        , &CThostFtdcRiskSettleInvstPositionField_Position
        , &CThostFtdcRiskSettleInvstPositionField_LongFrozen
        , &CThostFtdcRiskSettleInvstPositionField_ShortFrozen
        , &CThostFtdcRiskSettleInvstPositionField_LongFrozenAmount
        , &CThostFtdcRiskSettleInvstPositionField_ShortFrozenAmount
        , &CThostFtdcRiskSettleInvstPositionField_OpenVolume
        , &CThostFtdcRiskSettleInvstPositionField_CloseVolume
        , &CThostFtdcRiskSettleInvstPositionField_OpenAmount
        , &CThostFtdcRiskSettleInvstPositionField_CloseAmount
        , &CThostFtdcRiskSettleInvstPositionField_PositionCost
        , &CThostFtdcRiskSettleInvstPositionField_PreMargin
        , &CThostFtdcRiskSettleInvstPositionField_UseMargin
        , &CThostFtdcRiskSettleInvstPositionField_FrozenMargin
        , &CThostFtdcRiskSettleInvstPositionField_FrozenCash
        , &CThostFtdcRiskSettleInvstPositionField_FrozenCommission
        , &CThostFtdcRiskSettleInvstPositionField_CashIn
        , &CThostFtdcRiskSettleInvstPositionField_Commission
        , &CThostFtdcRiskSettleInvstPositionField_CloseProfit
        , &CThostFtdcRiskSettleInvstPositionField_PositionProfit
        , &CThostFtdcRiskSettleInvstPositionField_PreSettlementPrice
        , &CThostFtdcRiskSettleInvstPositionField_SettlementPrice
        , &CThostFtdcRiskSettleInvstPositionField_TradingDay, &CThostFtdcRiskSettleInvstPositionField_TradingDay_length
        , &CThostFtdcRiskSettleInvstPositionField_SettlementID
        , &CThostFtdcRiskSettleInvstPositionField_OpenCost
        , &CThostFtdcRiskSettleInvstPositionField_ExchangeMargin
        , &CThostFtdcRiskSettleInvstPositionField_CombPosition
        , &CThostFtdcRiskSettleInvstPositionField_CombLongFrozen
        , &CThostFtdcRiskSettleInvstPositionField_CombShortFrozen
        , &CThostFtdcRiskSettleInvstPositionField_CloseProfitByDate
        , &CThostFtdcRiskSettleInvstPositionField_CloseProfitByTrade
        , &CThostFtdcRiskSettleInvstPositionField_TodayPosition
        , &CThostFtdcRiskSettleInvstPositionField_MarginRateByMoney
        , &CThostFtdcRiskSettleInvstPositionField_MarginRateByVolume
        , &CThostFtdcRiskSettleInvstPositionField_StrikeFrozen
        , &CThostFtdcRiskSettleInvstPositionField_StrikeFrozenAmount
        , &CThostFtdcRiskSettleInvstPositionField_AbandonFrozen
        , &CThostFtdcRiskSettleInvstPositionField_ExchangeID, &CThostFtdcRiskSettleInvstPositionField_ExchangeID_length
        , &CThostFtdcRiskSettleInvstPositionField_YdStrikeFrozen
        , &CThostFtdcRiskSettleInvstPositionField_InvestUnitID, &CThostFtdcRiskSettleInvstPositionField_InvestUnitID_length
        , &CThostFtdcRiskSettleInvstPositionField_PositionCostOffset
        , &CThostFtdcRiskSettleInvstPositionField_TasPosition
        , &CThostFtdcRiskSettleInvstPositionField_TasPositionCost
    )) {
        return -1;
    }

    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcRiskSettleInvstPositionField_InstrumentID != NULL ) {
        if(CThostFtdcRiskSettleInvstPositionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcRiskSettleInvstPositionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcRiskSettleInvstPositionField_InstrumentID, CThostFtdcRiskSettleInvstPositionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcRiskSettleInvstPositionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcRiskSettleInvstPositionField_InstrumentID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRiskSettleInvstPositionField_BrokerID != NULL ) {
        if(CThostFtdcRiskSettleInvstPositionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRiskSettleInvstPositionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRiskSettleInvstPositionField_BrokerID, CThostFtdcRiskSettleInvstPositionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRiskSettleInvstPositionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRiskSettleInvstPositionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcRiskSettleInvstPositionField_InvestorID != NULL ) {
        if(CThostFtdcRiskSettleInvstPositionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcRiskSettleInvstPositionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcRiskSettleInvstPositionField_InvestorID, CThostFtdcRiskSettleInvstPositionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcRiskSettleInvstPositionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcRiskSettleInvstPositionField_InvestorID = NULL;
    }

    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    data->PosiDirection = CThostFtdcRiskSettleInvstPositionField_PosiDirection;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcRiskSettleInvstPositionField_HedgeFlag;

    /// 持仓日期
    /// typedef char TThostFtdcPositionDateType
    data->PositionDate = CThostFtdcRiskSettleInvstPositionField_PositionDate;

    /// 上日持仓
    /// typedef int TThostFtdcVolumeType
    data->YdPosition = CThostFtdcRiskSettleInvstPositionField_YdPosition;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    data->Position = CThostFtdcRiskSettleInvstPositionField_Position;

    /// 多头冻结
    /// typedef int TThostFtdcVolumeType
    data->LongFrozen = CThostFtdcRiskSettleInvstPositionField_LongFrozen;

    /// 空头冻结
    /// typedef int TThostFtdcVolumeType
    data->ShortFrozen = CThostFtdcRiskSettleInvstPositionField_ShortFrozen;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    data->LongFrozenAmount = CThostFtdcRiskSettleInvstPositionField_LongFrozenAmount;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    data->ShortFrozenAmount = CThostFtdcRiskSettleInvstPositionField_ShortFrozenAmount;

    /// 开仓量
    /// typedef int TThostFtdcVolumeType
    data->OpenVolume = CThostFtdcRiskSettleInvstPositionField_OpenVolume;

    /// 平仓量
    /// typedef int TThostFtdcVolumeType
    data->CloseVolume = CThostFtdcRiskSettleInvstPositionField_CloseVolume;

    /// 开仓金额
    /// typedef double TThostFtdcMoneyType
    data->OpenAmount = CThostFtdcRiskSettleInvstPositionField_OpenAmount;

    /// 平仓金额
    /// typedef double TThostFtdcMoneyType
    data->CloseAmount = CThostFtdcRiskSettleInvstPositionField_CloseAmount;

    /// 持仓成本
    /// typedef double TThostFtdcMoneyType
    data->PositionCost = CThostFtdcRiskSettleInvstPositionField_PositionCost;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    data->PreMargin = CThostFtdcRiskSettleInvstPositionField_PreMargin;

    /// 占用的保证金
    /// typedef double TThostFtdcMoneyType
    data->UseMargin = CThostFtdcRiskSettleInvstPositionField_UseMargin;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    data->FrozenMargin = CThostFtdcRiskSettleInvstPositionField_FrozenMargin;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    data->FrozenCash = CThostFtdcRiskSettleInvstPositionField_FrozenCash;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    data->FrozenCommission = CThostFtdcRiskSettleInvstPositionField_FrozenCommission;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    data->CashIn = CThostFtdcRiskSettleInvstPositionField_CashIn;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    data->Commission = CThostFtdcRiskSettleInvstPositionField_Commission;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfit = CThostFtdcRiskSettleInvstPositionField_CloseProfit;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->PositionProfit = CThostFtdcRiskSettleInvstPositionField_PositionProfit;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    data->PreSettlementPrice = CThostFtdcRiskSettleInvstPositionField_PreSettlementPrice;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    data->SettlementPrice = CThostFtdcRiskSettleInvstPositionField_SettlementPrice;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcRiskSettleInvstPositionField_TradingDay != NULL ) {
        if(CThostFtdcRiskSettleInvstPositionField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRiskSettleInvstPositionField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRiskSettleInvstPositionField_TradingDay, CThostFtdcRiskSettleInvstPositionField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRiskSettleInvstPositionField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRiskSettleInvstPositionField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcRiskSettleInvstPositionField_SettlementID;

    /// 开仓成本
    /// typedef double TThostFtdcMoneyType
    data->OpenCost = CThostFtdcRiskSettleInvstPositionField_OpenCost;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchangeMargin = CThostFtdcRiskSettleInvstPositionField_ExchangeMargin;

    /// 组合成交形成的持仓
    /// typedef int TThostFtdcVolumeType
    data->CombPosition = CThostFtdcRiskSettleInvstPositionField_CombPosition;

    /// 组合多头冻结
    /// typedef int TThostFtdcVolumeType
    data->CombLongFrozen = CThostFtdcRiskSettleInvstPositionField_CombLongFrozen;

    /// 组合空头冻结
    /// typedef int TThostFtdcVolumeType
    data->CombShortFrozen = CThostFtdcRiskSettleInvstPositionField_CombShortFrozen;

    /// 逐日盯市平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfitByDate = CThostFtdcRiskSettleInvstPositionField_CloseProfitByDate;

    /// 逐笔对冲平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfitByTrade = CThostFtdcRiskSettleInvstPositionField_CloseProfitByTrade;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    data->TodayPosition = CThostFtdcRiskSettleInvstPositionField_TodayPosition;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    data->MarginRateByMoney = CThostFtdcRiskSettleInvstPositionField_MarginRateByMoney;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    data->MarginRateByVolume = CThostFtdcRiskSettleInvstPositionField_MarginRateByVolume;

    /// 执行冻结
    /// typedef int TThostFtdcVolumeType
    data->StrikeFrozen = CThostFtdcRiskSettleInvstPositionField_StrikeFrozen;

    /// 执行冻结金额
    /// typedef double TThostFtdcMoneyType
    data->StrikeFrozenAmount = CThostFtdcRiskSettleInvstPositionField_StrikeFrozenAmount;

    /// 放弃执行冻结
    /// typedef int TThostFtdcVolumeType
    data->AbandonFrozen = CThostFtdcRiskSettleInvstPositionField_AbandonFrozen;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcRiskSettleInvstPositionField_ExchangeID != NULL ) {
        if(CThostFtdcRiskSettleInvstPositionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcRiskSettleInvstPositionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcRiskSettleInvstPositionField_ExchangeID, CThostFtdcRiskSettleInvstPositionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcRiskSettleInvstPositionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcRiskSettleInvstPositionField_ExchangeID = NULL;
    }

    /// 执行冻结的昨仓
    /// typedef int TThostFtdcVolumeType
    data->YdStrikeFrozen = CThostFtdcRiskSettleInvstPositionField_YdStrikeFrozen;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcRiskSettleInvstPositionField_InvestUnitID != NULL ) {
        if(CThostFtdcRiskSettleInvstPositionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcRiskSettleInvstPositionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcRiskSettleInvstPositionField_InvestUnitID, CThostFtdcRiskSettleInvstPositionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcRiskSettleInvstPositionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcRiskSettleInvstPositionField_InvestUnitID = NULL;
    }

    /// 持仓成本差值
    /// typedef double TThostFtdcMoneyType
    data->PositionCostOffset = CThostFtdcRiskSettleInvstPositionField_PositionCostOffset;

    /// tas持仓手数
    /// typedef int TThostFtdcVolumeType
    data->TasPosition = CThostFtdcRiskSettleInvstPositionField_TasPosition;

    /// tas持仓成本
    /// typedef double TThostFtdcMoneyType
    data->TasPositionCost = CThostFtdcRiskSettleInvstPositionField_TasPositionCost;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRiskSettleInvstPositionFieldType_repr(PyObject *self) {

    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:y,s:i,s:y,s:d,s:i,s:d}"
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "PosiDirection", data->PosiDirection
        , "HedgeFlag", data->HedgeFlag
        , "PositionDate", data->PositionDate
        , "YdPosition", data->YdPosition
        , "Position", data->Position
        , "LongFrozen", data->LongFrozen
        , "ShortFrozen", data->ShortFrozen
        , "LongFrozenAmount", data->LongFrozenAmount
        , "ShortFrozenAmount", data->ShortFrozenAmount
        , "OpenVolume", data->OpenVolume
        , "CloseVolume", data->CloseVolume
        , "OpenAmount", data->OpenAmount
        , "CloseAmount", data->CloseAmount
        , "PositionCost", data->PositionCost
        , "PreMargin", data->PreMargin
        , "UseMargin", data->UseMargin
        , "FrozenMargin", data->FrozenMargin
        , "FrozenCash", data->FrozenCash
        , "FrozenCommission", data->FrozenCommission
        , "CashIn", data->CashIn
        , "Commission", data->Commission
        , "CloseProfit", data->CloseProfit
        , "PositionProfit", data->PositionProfit
        , "PreSettlementPrice", data->PreSettlementPrice
        , "SettlementPrice", data->SettlementPrice
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "OpenCost", data->OpenCost
        , "ExchangeMargin", data->ExchangeMargin
        , "CombPosition", data->CombPosition
        , "CombLongFrozen", data->CombLongFrozen
        , "CombShortFrozen", data->CombShortFrozen
        , "CloseProfitByDate", data->CloseProfitByDate
        , "CloseProfitByTrade", data->CloseProfitByTrade
        , "TodayPosition", data->TodayPosition
        , "MarginRateByMoney", data->MarginRateByMoney
        , "MarginRateByVolume", data->MarginRateByVolume
        , "StrikeFrozen", data->StrikeFrozen
        , "StrikeFrozenAmount", data->StrikeFrozenAmount
        , "AbandonFrozen", data->AbandonFrozen
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "YdStrikeFrozen", data->YdStrikeFrozen
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "PositionCostOffset", data->PositionCostOffset
        , "TasPosition", data->TasPosition
        , "TasPositionCost", data->TasPositionCost
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRiskSettleInvstPositionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRiskSettleInvstPositionField repr");
        return NULL;
    }

    return repr;
}


/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcRiskSettleInvstPositionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcRiskSettleInvstPositionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskSettleInvstPositionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRiskSettleInvstPositionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRiskSettleInvstPositionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskSettleInvstPositionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcRiskSettleInvstPositionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcRiskSettleInvstPositionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskSettleInvstPositionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓多空方向
/// typedef char TThostFtdcPosiDirectionType
static PyObject *PyCThostFtdcRiskSettleInvstPositionFieldType_get_PosiDirection(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PosiDirection), 1);
}

static int PyCThostFtdcRiskSettleInvstPositionFieldType_set_PosiDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRiskSettleInvstPositionField::PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    data->PosiDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcRiskSettleInvstPositionFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcRiskSettleInvstPositionFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRiskSettleInvstPositionField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓日期
/// typedef char TThostFtdcPositionDateType
static PyObject *PyCThostFtdcRiskSettleInvstPositionFieldType_get_PositionDate(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PositionDate), 1);
}

static int PyCThostFtdcRiskSettleInvstPositionFieldType_set_PositionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PositionDate Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRiskSettleInvstPositionField::PositionDate)) {
        PyErr_SetString(PyExc_ValueError, "PositionDate must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    data->PositionDate = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcRiskSettleInvstPositionFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRiskSettleInvstPositionFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskSettleInvstPositionField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcRiskSettleInvstPositionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcRiskSettleInvstPositionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskSettleInvstPositionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcRiskSettleInvstPositionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcRiskSettleInvstPositionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskSettleInvstPositionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(self);
    CThostFtdcRiskSettleInvstPositionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRiskSettleInvstPositionFieldType_members[] = {
    /// 上日持仓
    /// typedef int TThostFtdcVolumeType
    {
        .name = "YdPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.YdPosition),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上日持仓")
    },
    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Position",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.Position),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("今日持仓")
    },
    /// 多头冻结
    /// typedef int TThostFtdcVolumeType
    {
        .name = "LongFrozen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.LongFrozen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头冻结")
    },
    /// 空头冻结
    /// typedef int TThostFtdcVolumeType
    {
        .name = "ShortFrozen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.ShortFrozen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头冻结")
    },
    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongFrozenAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.LongFrozenAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓冻结金额")
    },
    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortFrozenAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.ShortFrozenAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓冻结金额")
    },
    /// 开仓量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "OpenVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.OpenVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓量")
    },
    /// 平仓量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "CloseVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.CloseVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓量")
    },
    /// 开仓金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "OpenAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.OpenAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓金额")
    },
    /// 平仓金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CloseAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.CloseAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓金额")
    },
    /// 持仓成本
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PositionCost",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.PositionCost),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("持仓成本")
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
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.PreMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次占用的保证金")
    },
    /// 占用的保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "UseMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.UseMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("占用的保证金")
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
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.FrozenMargin),
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
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.FrozenCash),
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
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.FrozenCommission),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("冻结的手续费")
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
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.CashIn),
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
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.Commission),
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
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.CloseProfit),
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
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.PositionProfit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("持仓盈亏")
    },
    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    {
        .name = "PreSettlementPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.PreSettlementPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次结算价")
    },
    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    {
        .name = "SettlementPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.SettlementPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("本次结算价")
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
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    /// 开仓成本
    /// typedef double TThostFtdcMoneyType
    {
        .name = "OpenCost",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.OpenCost),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓成本")
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
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.ExchangeMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所保证金")
    },
    /// 组合成交形成的持仓
    /// typedef int TThostFtdcVolumeType
    {
        .name = "CombPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.CombPosition),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("组合成交形成的持仓")
    },
    /// 组合多头冻结
    /// typedef int TThostFtdcVolumeType
    {
        .name = "CombLongFrozen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.CombLongFrozen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("组合多头冻结")
    },
    /// 组合空头冻结
    /// typedef int TThostFtdcVolumeType
    {
        .name = "CombShortFrozen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.CombShortFrozen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("组合空头冻结")
    },
    /// 逐日盯市平仓盈亏
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CloseProfitByDate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.CloseProfitByDate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("逐日盯市平仓盈亏")
    },
    /// 逐笔对冲平仓盈亏
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CloseProfitByTrade",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.CloseProfitByTrade),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("逐笔对冲平仓盈亏")
    },
    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    {
        .name = "TodayPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.TodayPosition),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("今日持仓")
    },
    /// 保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "MarginRateByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.MarginRateByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保证金率")
    },
    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    {
        .name = "MarginRateByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.MarginRateByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保证金率(按手数)")
    },
    /// 执行冻结
    /// typedef int TThostFtdcVolumeType
    {
        .name = "StrikeFrozen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.StrikeFrozen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行冻结")
    },
    /// 执行冻结金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "StrikeFrozenAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.StrikeFrozenAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行冻结金额")
    },
    /// 放弃执行冻结
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AbandonFrozen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.AbandonFrozen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("放弃执行冻结")
    },
    /// 执行冻结的昨仓
    /// typedef int TThostFtdcVolumeType
    {
        .name = "YdStrikeFrozen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.YdStrikeFrozen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行冻结的昨仓")
    },
    /// 持仓成本差值
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PositionCostOffset",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.PositionCostOffset),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("持仓成本差值")
    },
    /// tas持仓手数
    /// typedef int TThostFtdcVolumeType
    {
        .name = "TasPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.TasPosition),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("tas持仓手数")
    },
    /// tas持仓成本
    /// typedef double TThostFtdcMoneyType
    {
        .name = "TasPositionCost",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRiskSettleInvstPositionFieldData, data.TasPositionCost),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("tas持仓成本")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRiskSettleInvstPositionFieldType_getsets[] = {
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcRiskSettleInvstPositionFieldType_get_InstrumentID,
    .set = PyCThostFtdcRiskSettleInvstPositionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRiskSettleInvstPositionFieldType_get_BrokerID,
    .set = PyCThostFtdcRiskSettleInvstPositionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcRiskSettleInvstPositionFieldType_get_InvestorID,
    .set = PyCThostFtdcRiskSettleInvstPositionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    {
    .name = "PosiDirection",
    .get = PyCThostFtdcRiskSettleInvstPositionFieldType_get_PosiDirection,
    .set = PyCThostFtdcRiskSettleInvstPositionFieldType_set_PosiDirection,
    .doc = PyDoc_STR("持仓多空方向"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcRiskSettleInvstPositionFieldType_get_HedgeFlag,
    .set = PyCThostFtdcRiskSettleInvstPositionFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 持仓日期
    /// typedef char TThostFtdcPositionDateType
    {
    .name = "PositionDate",
    .get = PyCThostFtdcRiskSettleInvstPositionFieldType_get_PositionDate,
    .set = PyCThostFtdcRiskSettleInvstPositionFieldType_set_PositionDate,
    .doc = PyDoc_STR("持仓日期"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRiskSettleInvstPositionFieldType_get_TradingDay,
    .set = PyCThostFtdcRiskSettleInvstPositionFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcRiskSettleInvstPositionFieldType_get_ExchangeID,
    .set = PyCThostFtdcRiskSettleInvstPositionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcRiskSettleInvstPositionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcRiskSettleInvstPositionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRiskSettleInvstPositionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRiskSettleInvstPositionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者风险结算持仓")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRiskSettleInvstPositionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRiskSettleInvstPositionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRiskSettleInvstPositionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRiskSettleInvstPositionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRiskSettleInvstPositionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRiskSettleInvstPositionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者风险结算持仓")},
    {Py_tp_members, PyCThostFtdcRiskSettleInvstPositionFieldType_members},
    {Py_tp_getset, PyCThostFtdcRiskSettleInvstPositionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRiskSettleInvstPositionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRiskSettleInvstPositionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRiskSettleInvstPositionFieldType_spec = {
    .name = "PyCTP.CThostFtdcRiskSettleInvstPositionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRiskSettleInvstPositionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRiskSettleInvstPositionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRiskSettleInvstPositionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRiskSettleInvstPositionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRiskSettleInvstPositionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRiskSettleInvstPositionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRiskSettleInvstPositionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRiskSettleInvstPositionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRiskSettleInvstPositionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRiskSettleInvstPositionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}