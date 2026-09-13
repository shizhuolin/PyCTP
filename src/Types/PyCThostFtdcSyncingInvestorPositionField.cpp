
#include "PyCThostFtdcSyncingInvestorPositionField.h"

///正在同步中的投资者持仓

static int PyCThostFtdcSyncingInvestorPositionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "BrokerID", "InvestorID", "PosiDirection", "HedgeFlag", "PositionDate", "YdPosition", "Position", "LongFrozen", "ShortFrozen", "LongFrozenAmount", "ShortFrozenAmount", "OpenVolume", "CloseVolume", "OpenAmount", "CloseAmount", "PositionCost", "PreMargin", "UseMargin", "FrozenMargin", "FrozenCash", "FrozenCommission", "CashIn", "Commission", "CloseProfit", "PositionProfit", "PreSettlementPrice", "SettlementPrice", "TradingDay", "SettlementID", "OpenCost", "ExchangeMargin", "CombPosition", "CombLongFrozen", "CombShortFrozen", "CloseProfitByDate", "CloseProfitByTrade", "TodayPosition", "MarginRateByMoney", "MarginRateByVolume", "StrikeFrozen", "StrikeFrozenAmount", "AbandonFrozen", "ExchangeID", "YdStrikeFrozen", "InvestUnitID", "PositionCostOffset", "TasPosition", "TasPositionCost", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcSyncingInvestorPositionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorPositionField_reserve1_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncingInvestorPositionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorPositionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncingInvestorPositionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorPositionField_InvestorID_length = 0;

    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    char CThostFtdcSyncingInvestorPositionField_PosiDirection = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcSyncingInvestorPositionField_HedgeFlag = 0;

    /// 持仓日期
    /// typedef char TThostFtdcPositionDateType
    char CThostFtdcSyncingInvestorPositionField_PositionDate = 0;

    /// 上日持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_YdPosition = 0;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_Position = 0;

    /// 多头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_LongFrozen = 0;

    /// 空头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_ShortFrozen = 0;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_LongFrozenAmount = 0.0;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_ShortFrozenAmount = 0.0;

    /// 开仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_OpenVolume = 0;

    /// 平仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_CloseVolume = 0;

    /// 开仓金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_OpenAmount = 0.0;

    /// 平仓金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_CloseAmount = 0.0;

    /// 持仓成本
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_PositionCost = 0.0;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_PreMargin = 0.0;

    /// 占用的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_UseMargin = 0.0;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_FrozenMargin = 0.0;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_FrozenCash = 0.0;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_FrozenCommission = 0.0;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_CashIn = 0.0;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_Commission = 0.0;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_CloseProfit = 0.0;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_PositionProfit = 0.0;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncingInvestorPositionField_PreSettlementPrice = 0.0;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncingInvestorPositionField_SettlementPrice = 0.0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncingInvestorPositionField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorPositionField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcSyncingInvestorPositionField_SettlementID = 0;

    /// 开仓成本
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_OpenCost = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_ExchangeMargin = 0.0;

    /// 组合成交形成的持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_CombPosition = 0;

    /// 组合多头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_CombLongFrozen = 0;

    /// 组合空头冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_CombShortFrozen = 0;

    /// 逐日盯市平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_CloseProfitByDate = 0.0;

    /// 逐笔对冲平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_CloseProfitByTrade = 0.0;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_TodayPosition = 0;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncingInvestorPositionField_MarginRateByMoney = 0.0;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncingInvestorPositionField_MarginRateByVolume = 0.0;

    /// 执行冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_StrikeFrozen = 0;

    /// 执行冻结金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_StrikeFrozenAmount = 0.0;

    /// 放弃执行冻结
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_AbandonFrozen = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncingInvestorPositionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorPositionField_ExchangeID_length = 0;

    /// 执行冻结的昨仓
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_YdStrikeFrozen = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcSyncingInvestorPositionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorPositionField_InvestUnitID_length = 0;

    /// 持仓成本差值
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_PositionCostOffset = 0.0;

    /// tas持仓手数
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncingInvestorPositionField_TasPosition = 0;

    /// tas持仓成本
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInvestorPositionField_TasPositionCost = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncingInvestorPositionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorPositionField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccciiiiddiiddddddddddddddy#iddiiiddiddidiy#iy#didy#", (char **)kwlist
        , &CThostFtdcSyncingInvestorPositionField_reserve1, &CThostFtdcSyncingInvestorPositionField_reserve1_length
        , &CThostFtdcSyncingInvestorPositionField_BrokerID, &CThostFtdcSyncingInvestorPositionField_BrokerID_length
        , &CThostFtdcSyncingInvestorPositionField_InvestorID, &CThostFtdcSyncingInvestorPositionField_InvestorID_length
        , &CThostFtdcSyncingInvestorPositionField_PosiDirection
        , &CThostFtdcSyncingInvestorPositionField_HedgeFlag
        , &CThostFtdcSyncingInvestorPositionField_PositionDate
        , &CThostFtdcSyncingInvestorPositionField_YdPosition
        , &CThostFtdcSyncingInvestorPositionField_Position
        , &CThostFtdcSyncingInvestorPositionField_LongFrozen
        , &CThostFtdcSyncingInvestorPositionField_ShortFrozen
        , &CThostFtdcSyncingInvestorPositionField_LongFrozenAmount
        , &CThostFtdcSyncingInvestorPositionField_ShortFrozenAmount
        , &CThostFtdcSyncingInvestorPositionField_OpenVolume
        , &CThostFtdcSyncingInvestorPositionField_CloseVolume
        , &CThostFtdcSyncingInvestorPositionField_OpenAmount
        , &CThostFtdcSyncingInvestorPositionField_CloseAmount
        , &CThostFtdcSyncingInvestorPositionField_PositionCost
        , &CThostFtdcSyncingInvestorPositionField_PreMargin
        , &CThostFtdcSyncingInvestorPositionField_UseMargin
        , &CThostFtdcSyncingInvestorPositionField_FrozenMargin
        , &CThostFtdcSyncingInvestorPositionField_FrozenCash
        , &CThostFtdcSyncingInvestorPositionField_FrozenCommission
        , &CThostFtdcSyncingInvestorPositionField_CashIn
        , &CThostFtdcSyncingInvestorPositionField_Commission
        , &CThostFtdcSyncingInvestorPositionField_CloseProfit
        , &CThostFtdcSyncingInvestorPositionField_PositionProfit
        , &CThostFtdcSyncingInvestorPositionField_PreSettlementPrice
        , &CThostFtdcSyncingInvestorPositionField_SettlementPrice
        , &CThostFtdcSyncingInvestorPositionField_TradingDay, &CThostFtdcSyncingInvestorPositionField_TradingDay_length
        , &CThostFtdcSyncingInvestorPositionField_SettlementID
        , &CThostFtdcSyncingInvestorPositionField_OpenCost
        , &CThostFtdcSyncingInvestorPositionField_ExchangeMargin
        , &CThostFtdcSyncingInvestorPositionField_CombPosition
        , &CThostFtdcSyncingInvestorPositionField_CombLongFrozen
        , &CThostFtdcSyncingInvestorPositionField_CombShortFrozen
        , &CThostFtdcSyncingInvestorPositionField_CloseProfitByDate
        , &CThostFtdcSyncingInvestorPositionField_CloseProfitByTrade
        , &CThostFtdcSyncingInvestorPositionField_TodayPosition
        , &CThostFtdcSyncingInvestorPositionField_MarginRateByMoney
        , &CThostFtdcSyncingInvestorPositionField_MarginRateByVolume
        , &CThostFtdcSyncingInvestorPositionField_StrikeFrozen
        , &CThostFtdcSyncingInvestorPositionField_StrikeFrozenAmount
        , &CThostFtdcSyncingInvestorPositionField_AbandonFrozen
        , &CThostFtdcSyncingInvestorPositionField_ExchangeID, &CThostFtdcSyncingInvestorPositionField_ExchangeID_length
        , &CThostFtdcSyncingInvestorPositionField_YdStrikeFrozen
        , &CThostFtdcSyncingInvestorPositionField_InvestUnitID, &CThostFtdcSyncingInvestorPositionField_InvestUnitID_length
        , &CThostFtdcSyncingInvestorPositionField_PositionCostOffset
        , &CThostFtdcSyncingInvestorPositionField_TasPosition
        , &CThostFtdcSyncingInvestorPositionField_TasPositionCost
        , &CThostFtdcSyncingInvestorPositionField_InstrumentID, &CThostFtdcSyncingInvestorPositionField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcSyncingInvestorPositionField_reserve1 != NULL ) {
        if(CThostFtdcSyncingInvestorPositionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcSyncingInvestorPositionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcSyncingInvestorPositionField_reserve1, CThostFtdcSyncingInvestorPositionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcSyncingInvestorPositionField_reserve1, sizeof(data->reserve1));
        CThostFtdcSyncingInvestorPositionField_reserve1 = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncingInvestorPositionField_BrokerID != NULL ) {
        if(CThostFtdcSyncingInvestorPositionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncingInvestorPositionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncingInvestorPositionField_BrokerID, CThostFtdcSyncingInvestorPositionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncingInvestorPositionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncingInvestorPositionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncingInvestorPositionField_InvestorID != NULL ) {
        if(CThostFtdcSyncingInvestorPositionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncingInvestorPositionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncingInvestorPositionField_InvestorID, CThostFtdcSyncingInvestorPositionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncingInvestorPositionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncingInvestorPositionField_InvestorID = NULL;
    }

    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    data->PosiDirection = CThostFtdcSyncingInvestorPositionField_PosiDirection;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcSyncingInvestorPositionField_HedgeFlag;

    /// 持仓日期
    /// typedef char TThostFtdcPositionDateType
    data->PositionDate = CThostFtdcSyncingInvestorPositionField_PositionDate;

    /// 上日持仓
    /// typedef int TThostFtdcVolumeType
    data->YdPosition = CThostFtdcSyncingInvestorPositionField_YdPosition;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    data->Position = CThostFtdcSyncingInvestorPositionField_Position;

    /// 多头冻结
    /// typedef int TThostFtdcVolumeType
    data->LongFrozen = CThostFtdcSyncingInvestorPositionField_LongFrozen;

    /// 空头冻结
    /// typedef int TThostFtdcVolumeType
    data->ShortFrozen = CThostFtdcSyncingInvestorPositionField_ShortFrozen;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    data->LongFrozenAmount = CThostFtdcSyncingInvestorPositionField_LongFrozenAmount;

    /// 开仓冻结金额
    /// typedef double TThostFtdcMoneyType
    data->ShortFrozenAmount = CThostFtdcSyncingInvestorPositionField_ShortFrozenAmount;

    /// 开仓量
    /// typedef int TThostFtdcVolumeType
    data->OpenVolume = CThostFtdcSyncingInvestorPositionField_OpenVolume;

    /// 平仓量
    /// typedef int TThostFtdcVolumeType
    data->CloseVolume = CThostFtdcSyncingInvestorPositionField_CloseVolume;

    /// 开仓金额
    /// typedef double TThostFtdcMoneyType
    data->OpenAmount = CThostFtdcSyncingInvestorPositionField_OpenAmount;

    /// 平仓金额
    /// typedef double TThostFtdcMoneyType
    data->CloseAmount = CThostFtdcSyncingInvestorPositionField_CloseAmount;

    /// 持仓成本
    /// typedef double TThostFtdcMoneyType
    data->PositionCost = CThostFtdcSyncingInvestorPositionField_PositionCost;

    /// 上次占用的保证金
    /// typedef double TThostFtdcMoneyType
    data->PreMargin = CThostFtdcSyncingInvestorPositionField_PreMargin;

    /// 占用的保证金
    /// typedef double TThostFtdcMoneyType
    data->UseMargin = CThostFtdcSyncingInvestorPositionField_UseMargin;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    data->FrozenMargin = CThostFtdcSyncingInvestorPositionField_FrozenMargin;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    data->FrozenCash = CThostFtdcSyncingInvestorPositionField_FrozenCash;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    data->FrozenCommission = CThostFtdcSyncingInvestorPositionField_FrozenCommission;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    data->CashIn = CThostFtdcSyncingInvestorPositionField_CashIn;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    data->Commission = CThostFtdcSyncingInvestorPositionField_Commission;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfit = CThostFtdcSyncingInvestorPositionField_CloseProfit;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->PositionProfit = CThostFtdcSyncingInvestorPositionField_PositionProfit;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    data->PreSettlementPrice = CThostFtdcSyncingInvestorPositionField_PreSettlementPrice;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    data->SettlementPrice = CThostFtdcSyncingInvestorPositionField_SettlementPrice;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncingInvestorPositionField_TradingDay != NULL ) {
        if(CThostFtdcSyncingInvestorPositionField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncingInvestorPositionField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncingInvestorPositionField_TradingDay, CThostFtdcSyncingInvestorPositionField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncingInvestorPositionField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncingInvestorPositionField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcSyncingInvestorPositionField_SettlementID;

    /// 开仓成本
    /// typedef double TThostFtdcMoneyType
    data->OpenCost = CThostFtdcSyncingInvestorPositionField_OpenCost;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchangeMargin = CThostFtdcSyncingInvestorPositionField_ExchangeMargin;

    /// 组合成交形成的持仓
    /// typedef int TThostFtdcVolumeType
    data->CombPosition = CThostFtdcSyncingInvestorPositionField_CombPosition;

    /// 组合多头冻结
    /// typedef int TThostFtdcVolumeType
    data->CombLongFrozen = CThostFtdcSyncingInvestorPositionField_CombLongFrozen;

    /// 组合空头冻结
    /// typedef int TThostFtdcVolumeType
    data->CombShortFrozen = CThostFtdcSyncingInvestorPositionField_CombShortFrozen;

    /// 逐日盯市平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfitByDate = CThostFtdcSyncingInvestorPositionField_CloseProfitByDate;

    /// 逐笔对冲平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfitByTrade = CThostFtdcSyncingInvestorPositionField_CloseProfitByTrade;

    /// 今日持仓
    /// typedef int TThostFtdcVolumeType
    data->TodayPosition = CThostFtdcSyncingInvestorPositionField_TodayPosition;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    data->MarginRateByMoney = CThostFtdcSyncingInvestorPositionField_MarginRateByMoney;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    data->MarginRateByVolume = CThostFtdcSyncingInvestorPositionField_MarginRateByVolume;

    /// 执行冻结
    /// typedef int TThostFtdcVolumeType
    data->StrikeFrozen = CThostFtdcSyncingInvestorPositionField_StrikeFrozen;

    /// 执行冻结金额
    /// typedef double TThostFtdcMoneyType
    data->StrikeFrozenAmount = CThostFtdcSyncingInvestorPositionField_StrikeFrozenAmount;

    /// 放弃执行冻结
    /// typedef int TThostFtdcVolumeType
    data->AbandonFrozen = CThostFtdcSyncingInvestorPositionField_AbandonFrozen;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncingInvestorPositionField_ExchangeID != NULL ) {
        if(CThostFtdcSyncingInvestorPositionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncingInvestorPositionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncingInvestorPositionField_ExchangeID, CThostFtdcSyncingInvestorPositionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncingInvestorPositionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncingInvestorPositionField_ExchangeID = NULL;
    }

    /// 执行冻结的昨仓
    /// typedef int TThostFtdcVolumeType
    data->YdStrikeFrozen = CThostFtdcSyncingInvestorPositionField_YdStrikeFrozen;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcSyncingInvestorPositionField_InvestUnitID != NULL ) {
        if(CThostFtdcSyncingInvestorPositionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcSyncingInvestorPositionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcSyncingInvestorPositionField_InvestUnitID, CThostFtdcSyncingInvestorPositionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcSyncingInvestorPositionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcSyncingInvestorPositionField_InvestUnitID = NULL;
    }

    /// 持仓成本差值
    /// typedef double TThostFtdcMoneyType
    data->PositionCostOffset = CThostFtdcSyncingInvestorPositionField_PositionCostOffset;

    /// tas持仓手数
    /// typedef int TThostFtdcVolumeType
    data->TasPosition = CThostFtdcSyncingInvestorPositionField_TasPosition;

    /// tas持仓成本
    /// typedef double TThostFtdcMoneyType
    data->TasPositionCost = CThostFtdcSyncingInvestorPositionField_TasPositionCost;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncingInvestorPositionField_InstrumentID != NULL ) {
        if(CThostFtdcSyncingInvestorPositionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncingInvestorPositionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncingInvestorPositionField_InstrumentID, CThostFtdcSyncingInvestorPositionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncingInvestorPositionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncingInvestorPositionField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncingInvestorPositionFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:y,s:i,s:y,s:d,s:i,s:d,s:y}"
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
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorPositionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorPositionField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcSyncingInvestorPositionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcSyncingInvestorPositionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorPositionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncingInvestorPositionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncingInvestorPositionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorPositionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncingInvestorPositionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncingInvestorPositionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorPositionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓多空方向
/// typedef char TThostFtdcPosiDirectionType
static PyObject *PyCThostFtdcSyncingInvestorPositionFieldType_get_PosiDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PosiDirection), 1);
}

static int PyCThostFtdcSyncingInvestorPositionFieldType_set_PosiDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorPositionField::PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    data->PosiDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcSyncingInvestorPositionFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcSyncingInvestorPositionFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorPositionField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 持仓日期
/// typedef char TThostFtdcPositionDateType
static PyObject *PyCThostFtdcSyncingInvestorPositionFieldType_get_PositionDate(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PositionDate), 1);
}

static int PyCThostFtdcSyncingInvestorPositionFieldType_set_PositionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PositionDate Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorPositionField::PositionDate)) {
        PyErr_SetString(PyExc_ValueError, "PositionDate must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    data->PositionDate = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncingInvestorPositionFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncingInvestorPositionFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorPositionField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncingInvestorPositionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncingInvestorPositionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorPositionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcSyncingInvestorPositionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcSyncingInvestorPositionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorPositionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncingInvestorPositionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncingInvestorPositionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorPositionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorPositionFieldData>(self);
    CThostFtdcSyncingInvestorPositionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncingInvestorPositionFieldType_members[] = {
    /// 上日持仓
    /// typedef int TThostFtdcVolumeType
    {
        .name = "YdPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.YdPosition),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.Position),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.LongFrozen),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.ShortFrozen),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.LongFrozenAmount),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.ShortFrozenAmount),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.OpenVolume),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.CloseVolume),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.OpenAmount),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.CloseAmount),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.PositionCost),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.PreMargin),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.UseMargin),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.FrozenMargin),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.FrozenCash),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.FrozenCommission),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.CashIn),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.Commission),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.CloseProfit),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.PositionProfit),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.PreSettlementPrice),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.SettlementPrice),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.OpenCost),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.ExchangeMargin),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.CombPosition),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.CombLongFrozen),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.CombShortFrozen),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.CloseProfitByDate),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.CloseProfitByTrade),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.TodayPosition),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.MarginRateByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.MarginRateByVolume),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.StrikeFrozen),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.StrikeFrozenAmount),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.AbandonFrozen),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.YdStrikeFrozen),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.PositionCostOffset),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.TasPosition),
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
        .offset = offsetof(PyCThostFtdcSyncingInvestorPositionFieldData, data.TasPositionCost),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("tas持仓成本")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncingInvestorPositionFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcSyncingInvestorPositionFieldType_get_reserve1,
    .set = PyCThostFtdcSyncingInvestorPositionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncingInvestorPositionFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncingInvestorPositionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncingInvestorPositionFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncingInvestorPositionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 持仓多空方向
    /// typedef char TThostFtdcPosiDirectionType
    {
    .name = "PosiDirection",
    .get = PyCThostFtdcSyncingInvestorPositionFieldType_get_PosiDirection,
    .set = PyCThostFtdcSyncingInvestorPositionFieldType_set_PosiDirection,
    .doc = PyDoc_STR("持仓多空方向"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcSyncingInvestorPositionFieldType_get_HedgeFlag,
    .set = PyCThostFtdcSyncingInvestorPositionFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 持仓日期
    /// typedef char TThostFtdcPositionDateType
    {
    .name = "PositionDate",
    .get = PyCThostFtdcSyncingInvestorPositionFieldType_get_PositionDate,
    .set = PyCThostFtdcSyncingInvestorPositionFieldType_set_PositionDate,
    .doc = PyDoc_STR("持仓日期"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncingInvestorPositionFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncingInvestorPositionFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncingInvestorPositionFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncingInvestorPositionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcSyncingInvestorPositionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcSyncingInvestorPositionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncingInvestorPositionFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncingInvestorPositionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncingInvestorPositionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncingInvestorPositionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("正在同步中的投资者持仓")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncingInvestorPositionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncingInvestorPositionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncingInvestorPositionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncingInvestorPositionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncingInvestorPositionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncingInvestorPositionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("正在同步中的投资者持仓")},
    {Py_tp_members, PyCThostFtdcSyncingInvestorPositionFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncingInvestorPositionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncingInvestorPositionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncingInvestorPositionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncingInvestorPositionFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncingInvestorPositionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncingInvestorPositionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncingInvestorPositionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncingInvestorPositionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncingInvestorPositionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncingInvestorPositionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncingInvestorPositionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncingInvestorPositionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncingInvestorPositionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncingInvestorPositionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInvestorPositionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}