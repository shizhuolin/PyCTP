
#include "PyCThostFtdcInvestorPositionField.h"

///投资者持仓

static int PyCThostFtdcInvestorPositionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "BrokerID", "InvestorID", "PosiDirection", "HedgeFlag", "PositionDate", "YdPosition", "Position", "LongFrozen", "ShortFrozen", "LongFrozenAmount", "ShortFrozenAmount", "OpenVolume", "CloseVolume", "OpenAmount", "CloseAmount", "PositionCost", "PreMargin", "UseMargin", "FrozenMargin", "FrozenCash", "FrozenCommission", "CashIn", "Commission", "CloseProfit", "PositionProfit", "PreSettlementPrice", "SettlementPrice", "TradingDay", "SettlementID", "OpenCost", "ExchangeMargin", "CombPosition", "CombLongFrozen", "CombShortFrozen", "CloseProfitByDate", "CloseProfitByTrade", "TodayPosition", "MarginRateByMoney", "MarginRateByVolume", "StrikeFrozen", "StrikeFrozenAmount", "AbandonFrozen", "ExchangeID", "YdStrikeFrozen", "InvestUnitID", "PositionCostOffset", "TasPosition", "TasPositionCost", "InstrumentID", "OptionValue", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInvestorPositionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInvestorPositionField_reserve1_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorPositionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorPositionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionField_InvestorID_length = 0;

    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    char CThostFtdcInvestorPositionField_PosiDirection = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInvestorPositionField_HedgeFlag = 0;

    /// 持仓日期
    /// typedef char TThostFtdcPositionDateType
    char CThostFtdcInvestorPositionField_PositionDate = 0;

    /// 上日持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_YdPosition = 0;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_Position = 0;

    /// 多头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_LongFrozen = 0;

    /// 空头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_ShortFrozen = 0;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_LongFrozenAmount = 0.0;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_ShortFrozenAmount = 0.0;

    /// 开仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_OpenVolume = 0;

    /// 平仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_CloseVolume = 0;

    /// 开仓金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_OpenAmount = 0.0;

    /// 平仓金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_CloseAmount = 0.0;

    /// 持仓成本
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_PositionCost = 0.0;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_PreMargin = 0.0;

    /// 占用的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_UseMargin = 0.0;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_FrozenMargin = 0.0;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_FrozenCash = 0.0;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_FrozenCommission = 0.0;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_CashIn = 0.0;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_Commission = 0.0;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_CloseProfit = 0.0;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_PositionProfit = 0.0;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcInvestorPositionField_PreSettlementPrice = 0.0;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcInvestorPositionField_SettlementPrice = 0.0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInvestorPositionField_TradingDay = NULL;
    Py_ssize_t CThostFtdcInvestorPositionField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcInvestorPositionField_SettlementID = 0;

    /// 开仓成本
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_OpenCost = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_ExchangeMargin = 0.0;

    /// 组合成交形成的持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_CombPosition = 0;

    /// 组合多头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_CombLongFrozen = 0;

    /// 组合空头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_CombShortFrozen = 0;

    /// 逐日盯市平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_CloseProfitByDate = 0.0;

    /// 逐笔对冲平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_CloseProfitByTrade = 0.0;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_TodayPosition = 0;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInvestorPositionField_MarginRateByMoney = 0.0;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInvestorPositionField_MarginRateByVolume = 0.0;

    /// 执行冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_StrikeFrozen = 0;

    /// 执行冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_StrikeFrozenAmount = 0.0;

    /// 放弃执行冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_AbandonFrozen = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorPositionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionField_ExchangeID_length = 0;

    /// 执行冻结的昨仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_YdStrikeFrozen = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInvestorPositionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionField_InvestUnitID_length = 0;

    /// 持仓成本差值
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_PositionCostOffset = 0.0;

    /// tas持仓手数
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionField_TasPosition = 0;

    /// tas持仓成本
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_TasPositionCost = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInvestorPositionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionField_InstrumentID_length = 0;

    /// 期权市值
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionField_OptionValue = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccciiiiddiiddddddddddddddy#iddiiiddiddidiy#iy#didy#d", (char **)kwlist
        , &CThostFtdcInvestorPositionField_reserve1, &CThostFtdcInvestorPositionField_reserve1_length
        , &CThostFtdcInvestorPositionField_BrokerID, &CThostFtdcInvestorPositionField_BrokerID_length
        , &CThostFtdcInvestorPositionField_InvestorID, &CThostFtdcInvestorPositionField_InvestorID_length
        , &CThostFtdcInvestorPositionField_PosiDirection
        , &CThostFtdcInvestorPositionField_HedgeFlag
        , &CThostFtdcInvestorPositionField_PositionDate
        , &CThostFtdcInvestorPositionField_YdPosition
        , &CThostFtdcInvestorPositionField_Position
        , &CThostFtdcInvestorPositionField_LongFrozen
        , &CThostFtdcInvestorPositionField_ShortFrozen
        , &CThostFtdcInvestorPositionField_LongFrozenAmount
        , &CThostFtdcInvestorPositionField_ShortFrozenAmount
        , &CThostFtdcInvestorPositionField_OpenVolume
        , &CThostFtdcInvestorPositionField_CloseVolume
        , &CThostFtdcInvestorPositionField_OpenAmount
        , &CThostFtdcInvestorPositionField_CloseAmount
        , &CThostFtdcInvestorPositionField_PositionCost
        , &CThostFtdcInvestorPositionField_PreMargin
        , &CThostFtdcInvestorPositionField_UseMargin
        , &CThostFtdcInvestorPositionField_FrozenMargin
        , &CThostFtdcInvestorPositionField_FrozenCash
        , &CThostFtdcInvestorPositionField_FrozenCommission
        , &CThostFtdcInvestorPositionField_CashIn
        , &CThostFtdcInvestorPositionField_Commission
        , &CThostFtdcInvestorPositionField_CloseProfit
        , &CThostFtdcInvestorPositionField_PositionProfit
        , &CThostFtdcInvestorPositionField_PreSettlementPrice
        , &CThostFtdcInvestorPositionField_SettlementPrice
        , &CThostFtdcInvestorPositionField_TradingDay, &CThostFtdcInvestorPositionField_TradingDay_length
        , &CThostFtdcInvestorPositionField_SettlementID
        , &CThostFtdcInvestorPositionField_OpenCost
        , &CThostFtdcInvestorPositionField_ExchangeMargin
        , &CThostFtdcInvestorPositionField_CombPosition
        , &CThostFtdcInvestorPositionField_CombLongFrozen
        , &CThostFtdcInvestorPositionField_CombShortFrozen
        , &CThostFtdcInvestorPositionField_CloseProfitByDate
        , &CThostFtdcInvestorPositionField_CloseProfitByTrade
        , &CThostFtdcInvestorPositionField_TodayPosition
        , &CThostFtdcInvestorPositionField_MarginRateByMoney
        , &CThostFtdcInvestorPositionField_MarginRateByVolume
        , &CThostFtdcInvestorPositionField_StrikeFrozen
        , &CThostFtdcInvestorPositionField_StrikeFrozenAmount
        , &CThostFtdcInvestorPositionField_AbandonFrozen
        , &CThostFtdcInvestorPositionField_ExchangeID, &CThostFtdcInvestorPositionField_ExchangeID_length
        , &CThostFtdcInvestorPositionField_YdStrikeFrozen
        , &CThostFtdcInvestorPositionField_InvestUnitID, &CThostFtdcInvestorPositionField_InvestUnitID_length
        , &CThostFtdcInvestorPositionField_PositionCostOffset
        , &CThostFtdcInvestorPositionField_TasPosition
        , &CThostFtdcInvestorPositionField_TasPositionCost
        , &CThostFtdcInvestorPositionField_InstrumentID, &CThostFtdcInvestorPositionField_InstrumentID_length
        , &CThostFtdcInvestorPositionField_OptionValue
    )) {
        return -1;
    }

    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInvestorPositionField_reserve1 != NULL ) {
        if(CThostFtdcInvestorPositionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInvestorPositionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInvestorPositionField_reserve1, CThostFtdcInvestorPositionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInvestorPositionField_reserve1, sizeof(data->reserve1));
        CThostFtdcInvestorPositionField_reserve1 = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorPositionField_BrokerID != NULL ) {
        if(CThostFtdcInvestorPositionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorPositionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorPositionField_BrokerID, CThostFtdcInvestorPositionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorPositionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorPositionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorPositionField_InvestorID != NULL ) {
        if(CThostFtdcInvestorPositionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorPositionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorPositionField_InvestorID, CThostFtdcInvestorPositionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorPositionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorPositionField_InvestorID = NULL;
    }

    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    data->PosiDirection = CThostFtdcInvestorPositionField_PosiDirection;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInvestorPositionField_HedgeFlag;

    /// 持仓日期
    /// typedef char TThostFtdcPositionDateType
    data->PositionDate = CThostFtdcInvestorPositionField_PositionDate;

    /// 上日持仓
    /// typedef int TThostFtdcVolumeType
    data->YdPosition = CThostFtdcInvestorPositionField_YdPosition;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    data->Position = CThostFtdcInvestorPositionField_Position;

    /// 多头冻结
    /// typedef int TThostFtdcVolumeType
    data->LongFrozen = CThostFtdcInvestorPositionField_LongFrozen;

    /// 空头冻结
    /// typedef int TThostFtdcVolumeType
    data->ShortFrozen = CThostFtdcInvestorPositionField_ShortFrozen;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    data->LongFrozenAmount = CThostFtdcInvestorPositionField_LongFrozenAmount;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    data->ShortFrozenAmount = CThostFtdcInvestorPositionField_ShortFrozenAmount;

    /// 开仓量
    /// typedef int TThostFtdcVolumeType
    data->OpenVolume = CThostFtdcInvestorPositionField_OpenVolume;

    /// 平仓量
    /// typedef int TThostFtdcVolumeType
    data->CloseVolume = CThostFtdcInvestorPositionField_CloseVolume;

    /// 开仓金额
    /// typedef double TThostFtdcMoneyType
    data->OpenAmount = CThostFtdcInvestorPositionField_OpenAmount;

    /// 平仓金额
    /// typedef double TThostFtdcMoneyType
    data->CloseAmount = CThostFtdcInvestorPositionField_CloseAmount;

    /// 持仓成本
    /// typedef double TThostFtdcMoneyType
    data->PositionCost = CThostFtdcInvestorPositionField_PositionCost;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    data->PreMargin = CThostFtdcInvestorPositionField_PreMargin;

    /// 占用的保证金
    /// typedef double TThostFtdcMoneyType
    data->UseMargin = CThostFtdcInvestorPositionField_UseMargin;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    data->FrozenMargin = CThostFtdcInvestorPositionField_FrozenMargin;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    data->FrozenCash = CThostFtdcInvestorPositionField_FrozenCash;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    data->FrozenCommission = CThostFtdcInvestorPositionField_FrozenCommission;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    data->CashIn = CThostFtdcInvestorPositionField_CashIn;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    data->Commission = CThostFtdcInvestorPositionField_Commission;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfit = CThostFtdcInvestorPositionField_CloseProfit;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->PositionProfit = CThostFtdcInvestorPositionField_PositionProfit;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    data->PreSettlementPrice = CThostFtdcInvestorPositionField_PreSettlementPrice;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    data->SettlementPrice = CThostFtdcInvestorPositionField_SettlementPrice;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInvestorPositionField_TradingDay != NULL ) {
        if(CThostFtdcInvestorPositionField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcInvestorPositionField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcInvestorPositionField_TradingDay, CThostFtdcInvestorPositionField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcInvestorPositionField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcInvestorPositionField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcInvestorPositionField_SettlementID;

    /// 开仓成本
    /// typedef double TThostFtdcMoneyType
    data->OpenCost = CThostFtdcInvestorPositionField_OpenCost;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchangeMargin = CThostFtdcInvestorPositionField_ExchangeMargin;

    /// 组合成交形成的持仓
    /// typedef int TThostFtdcVolumeType
    data->CombPosition = CThostFtdcInvestorPositionField_CombPosition;

    /// 组合多头冻结
    /// typedef int TThostFtdcVolumeType
    data->CombLongFrozen = CThostFtdcInvestorPositionField_CombLongFrozen;

    /// 组合空头冻结
    /// typedef int TThostFtdcVolumeType
    data->CombShortFrozen = CThostFtdcInvestorPositionField_CombShortFrozen;

    /// 逐日盯市平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfitByDate = CThostFtdcInvestorPositionField_CloseProfitByDate;

    /// 逐笔对冲平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfitByTrade = CThostFtdcInvestorPositionField_CloseProfitByTrade;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    data->TodayPosition = CThostFtdcInvestorPositionField_TodayPosition;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    data->MarginRateByMoney = CThostFtdcInvestorPositionField_MarginRateByMoney;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    data->MarginRateByVolume = CThostFtdcInvestorPositionField_MarginRateByVolume;

    /// 执行冻结
    /// typedef int TThostFtdcVolumeType
    data->StrikeFrozen = CThostFtdcInvestorPositionField_StrikeFrozen;

    /// 执行冻结金额
    /// typedef double TThostFtdcMoneyType
    data->StrikeFrozenAmount = CThostFtdcInvestorPositionField_StrikeFrozenAmount;

    /// 放弃执行冻结
    /// typedef int TThostFtdcVolumeType
    data->AbandonFrozen = CThostFtdcInvestorPositionField_AbandonFrozen;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorPositionField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorPositionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorPositionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorPositionField_ExchangeID, CThostFtdcInvestorPositionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorPositionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorPositionField_ExchangeID = NULL;
    }

    /// 执行冻结的昨仓
    /// typedef int TThostFtdcVolumeType
    data->YdStrikeFrozen = CThostFtdcInvestorPositionField_YdStrikeFrozen;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInvestorPositionField_InvestUnitID != NULL ) {
        if(CThostFtdcInvestorPositionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInvestorPositionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInvestorPositionField_InvestUnitID, CThostFtdcInvestorPositionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInvestorPositionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInvestorPositionField_InvestUnitID = NULL;
    }

    /// 持仓成本差值
    /// typedef double TThostFtdcMoneyType
    data->PositionCostOffset = CThostFtdcInvestorPositionField_PositionCostOffset;

    /// tas持仓手数
    /// typedef int TThostFtdcVolumeType
    data->TasPosition = CThostFtdcInvestorPositionField_TasPosition;

    /// tas持仓成本
    /// typedef double TThostFtdcMoneyType
    data->TasPositionCost = CThostFtdcInvestorPositionField_TasPositionCost;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInvestorPositionField_InstrumentID != NULL ) {
        if(CThostFtdcInvestorPositionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInvestorPositionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInvestorPositionField_InstrumentID, CThostFtdcInvestorPositionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInvestorPositionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInvestorPositionField_InstrumentID = NULL;
    }

    /// 期权市值
    /// typedef double TThostFtdcMoneyType
    data->OptionValue = CThostFtdcInvestorPositionField_OptionValue;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorPositionFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:y,s:i,s:y,s:d,s:i,s:d,s:y,s:d}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
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
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "OptionValue", data->OptionValue
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInvestorPositionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInvestorPositionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorPositionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorPositionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorPositionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorPositionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓多空方向
/// typedef char TThostFtdcPosiDirectionType
static PyObject *PyCThostFtdcInvestorPositionFieldType_get_PosiDirection(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PosiDirection), 1);
}

static int PyCThostFtdcInvestorPositionFieldType_set_PosiDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorPositionField::PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    data->PosiDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInvestorPositionFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInvestorPositionFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorPositionField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓日期
/// typedef char TThostFtdcPositionDateType
static PyObject *PyCThostFtdcInvestorPositionFieldType_get_PositionDate(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PositionDate), 1);
}

static int PyCThostFtdcInvestorPositionFieldType_set_PositionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PositionDate Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorPositionField::PositionDate)) {
        PyErr_SetString(PyExc_ValueError, "PositionDate must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    data->PositionDate = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInvestorPositionFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcInvestorPositionFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorPositionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorPositionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInvestorPositionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInvestorPositionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInvestorPositionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInvestorPositionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(self);
    CThostFtdcInvestorPositionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorPositionFieldType_members[] = {
    /// 上日持仓
    /// typedef int TThostFtdcVolumeType
    {
        .name = "YdPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.YdPosition),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.Position),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.LongFrozen),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.ShortFrozen),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.LongFrozenAmount),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.ShortFrozenAmount),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.OpenVolume),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.CloseVolume),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.OpenAmount),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.CloseAmount),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.PositionCost),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.PreMargin),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.UseMargin),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.FrozenMargin),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.FrozenCash),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.FrozenCommission),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.CashIn),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.Commission),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.CloseProfit),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.PositionProfit),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.PreSettlementPrice),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.SettlementPrice),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.OpenCost),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.ExchangeMargin),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.CombPosition),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.CombLongFrozen),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.CombShortFrozen),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.CloseProfitByDate),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.CloseProfitByTrade),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.TodayPosition),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.MarginRateByMoney),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.MarginRateByVolume),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.StrikeFrozen),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.StrikeFrozenAmount),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.AbandonFrozen),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.YdStrikeFrozen),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.PositionCostOffset),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.TasPosition),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.TasPositionCost),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("tas持仓成本")
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
        .offset = offsetof(PyCThostFtdcInvestorPositionFieldData, data.OptionValue),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权市值")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorPositionFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInvestorPositionFieldType_get_reserve1,
    .set = PyCThostFtdcInvestorPositionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorPositionFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorPositionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorPositionFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorPositionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    {
    .name = "PosiDirection",
    .get = PyCThostFtdcInvestorPositionFieldType_get_PosiDirection,
    .set = PyCThostFtdcInvestorPositionFieldType_set_PosiDirection,
    .doc = PyDoc_STR("持仓多空方向"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInvestorPositionFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInvestorPositionFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 持仓日期
    /// typedef char TThostFtdcPositionDateType
    {
    .name = "PositionDate",
    .get = PyCThostFtdcInvestorPositionFieldType_get_PositionDate,
    .set = PyCThostFtdcInvestorPositionFieldType_set_PositionDate,
    .doc = PyDoc_STR("持仓日期"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcInvestorPositionFieldType_get_TradingDay,
    .set = PyCThostFtdcInvestorPositionFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorPositionFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorPositionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInvestorPositionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInvestorPositionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInvestorPositionFieldType_get_InstrumentID,
    .set = PyCThostFtdcInvestorPositionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorPositionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorPositionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者持仓")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorPositionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorPositionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorPositionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorPositionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorPositionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorPositionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者持仓")},
    {Py_tp_members, PyCThostFtdcInvestorPositionFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorPositionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorPositionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorPositionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorPositionFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorPositionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorPositionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorPositionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorPositionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorPositionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorPositionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorPositionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorPositionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorPositionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorPositionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPositionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}