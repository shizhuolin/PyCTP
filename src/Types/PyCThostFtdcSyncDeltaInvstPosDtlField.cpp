
#include "PyCThostFtdcSyncDeltaInvstPosDtlField.h"

///风险结算追平持仓明细

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InstrumentID", "BrokerID", "InvestorID", "HedgeFlag", "Direction", "OpenDate", "TradeID", "Volume", "OpenPrice", "TradingDay", "SettlementID", "TradeType", "CombInstrumentID", "ExchangeID", "CloseProfitByDate", "CloseProfitByTrade", "PositionProfitByDate", "PositionProfitByTrade", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LastSettlementPrice", "SettlementPrice", "CloseVolume", "CloseAmount", "TimeFirstVolume", "SpecPosiType", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaInvstPosDtlField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosDtlField_InstrumentID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaInvstPosDtlField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosDtlField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaInvstPosDtlField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosDtlField_InvestorID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcSyncDeltaInvstPosDtlField_HedgeFlag = 0;

    /// 买卖
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcSyncDeltaInvstPosDtlField_Direction = 0;

    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaInvstPosDtlField_OpenDate = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosDtlField_OpenDate_length = 0;

    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcSyncDeltaInvstPosDtlField_TradeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosDtlField_TradeID_length = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaInvstPosDtlField_Volume = 0;

    /// 开仓价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaInvstPosDtlField_OpenPrice = 0.0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaInvstPosDtlField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosDtlField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcSyncDeltaInvstPosDtlField_SettlementID = 0;

    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    char CThostFtdcSyncDeltaInvstPosDtlField_TradeType = 0;

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaInvstPosDtlField_CombInstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosDtlField_CombInstrumentID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaInvstPosDtlField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosDtlField_ExchangeID_length = 0;

    /// 逐日盯市平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstPosDtlField_CloseProfitByDate = 0.0;

    /// 逐笔对冲平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstPosDtlField_CloseProfitByTrade = 0.0;

    /// 逐日盯市持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstPosDtlField_PositionProfitByDate = 0.0;

    /// 逐笔对冲持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstPosDtlField_PositionProfitByTrade = 0.0;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstPosDtlField_Margin = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstPosDtlField_ExchMargin = 0.0;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstPosDtlField_MarginRateByMoney = 0.0;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstPosDtlField_MarginRateByVolume = 0.0;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaInvstPosDtlField_LastSettlementPrice = 0.0;

    /// 结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaInvstPosDtlField_SettlementPrice = 0.0;

    /// 平仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaInvstPosDtlField_CloseVolume = 0;

    /// 平仓金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstPosDtlField_CloseAmount = 0.0;

    /// 先开先平剩余数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaInvstPosDtlField_TimeFirstVolume = 0;

    /// 特殊持仓标志
    /// typedef char TThostFtdcSpecPosiTypeType
    char CThostFtdcSyncDeltaInvstPosDtlField_SpecPosiType = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaInvstPosDtlField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaInvstPosDtlField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccy#y#idy#icy#y#ddddddddddidicci", (char **)kwlist
        , &CThostFtdcSyncDeltaInvstPosDtlField_InstrumentID, &CThostFtdcSyncDeltaInvstPosDtlField_InstrumentID_length
        , &CThostFtdcSyncDeltaInvstPosDtlField_BrokerID, &CThostFtdcSyncDeltaInvstPosDtlField_BrokerID_length
        , &CThostFtdcSyncDeltaInvstPosDtlField_InvestorID, &CThostFtdcSyncDeltaInvstPosDtlField_InvestorID_length
        , &CThostFtdcSyncDeltaInvstPosDtlField_HedgeFlag
        , &CThostFtdcSyncDeltaInvstPosDtlField_Direction
        , &CThostFtdcSyncDeltaInvstPosDtlField_OpenDate, &CThostFtdcSyncDeltaInvstPosDtlField_OpenDate_length
        , &CThostFtdcSyncDeltaInvstPosDtlField_TradeID, &CThostFtdcSyncDeltaInvstPosDtlField_TradeID_length
        , &CThostFtdcSyncDeltaInvstPosDtlField_Volume
        , &CThostFtdcSyncDeltaInvstPosDtlField_OpenPrice
        , &CThostFtdcSyncDeltaInvstPosDtlField_TradingDay, &CThostFtdcSyncDeltaInvstPosDtlField_TradingDay_length
        , &CThostFtdcSyncDeltaInvstPosDtlField_SettlementID
        , &CThostFtdcSyncDeltaInvstPosDtlField_TradeType
        , &CThostFtdcSyncDeltaInvstPosDtlField_CombInstrumentID, &CThostFtdcSyncDeltaInvstPosDtlField_CombInstrumentID_length
        , &CThostFtdcSyncDeltaInvstPosDtlField_ExchangeID, &CThostFtdcSyncDeltaInvstPosDtlField_ExchangeID_length
        , &CThostFtdcSyncDeltaInvstPosDtlField_CloseProfitByDate
        , &CThostFtdcSyncDeltaInvstPosDtlField_CloseProfitByTrade
        , &CThostFtdcSyncDeltaInvstPosDtlField_PositionProfitByDate
        , &CThostFtdcSyncDeltaInvstPosDtlField_PositionProfitByTrade
        , &CThostFtdcSyncDeltaInvstPosDtlField_Margin
        , &CThostFtdcSyncDeltaInvstPosDtlField_ExchMargin
        , &CThostFtdcSyncDeltaInvstPosDtlField_MarginRateByMoney
        , &CThostFtdcSyncDeltaInvstPosDtlField_MarginRateByVolume
        , &CThostFtdcSyncDeltaInvstPosDtlField_LastSettlementPrice
        , &CThostFtdcSyncDeltaInvstPosDtlField_SettlementPrice
        , &CThostFtdcSyncDeltaInvstPosDtlField_CloseVolume
        , &CThostFtdcSyncDeltaInvstPosDtlField_CloseAmount
        , &CThostFtdcSyncDeltaInvstPosDtlField_TimeFirstVolume
        , &CThostFtdcSyncDeltaInvstPosDtlField_SpecPosiType
        , &CThostFtdcSyncDeltaInvstPosDtlField_ActionDirection
        , &CThostFtdcSyncDeltaInvstPosDtlField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaInvstPosDtlField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosDtlField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaInvstPosDtlField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaInvstPosDtlField_InstrumentID, CThostFtdcSyncDeltaInvstPosDtlField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaInvstPosDtlField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaInvstPosDtlField_InstrumentID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaInvstPosDtlField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosDtlField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaInvstPosDtlField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaInvstPosDtlField_BrokerID, CThostFtdcSyncDeltaInvstPosDtlField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaInvstPosDtlField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaInvstPosDtlField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaInvstPosDtlField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosDtlField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaInvstPosDtlField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaInvstPosDtlField_InvestorID, CThostFtdcSyncDeltaInvstPosDtlField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaInvstPosDtlField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaInvstPosDtlField_InvestorID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcSyncDeltaInvstPosDtlField_HedgeFlag;

    /// 买卖
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcSyncDeltaInvstPosDtlField_Direction;

    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaInvstPosDtlField_OpenDate != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosDtlField_OpenDate_length >= (Py_ssize_t)sizeof(data->OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaInvstPosDtlField_OpenDate_length);
            return -1;
        }
        // memset(data->OpenDate, 0, sizeof(data->OpenDate));
        // memcpy(data->OpenDate, CThostFtdcSyncDeltaInvstPosDtlField_OpenDate, CThostFtdcSyncDeltaInvstPosDtlField_OpenDate_length);
        strncpy(data->OpenDate, CThostFtdcSyncDeltaInvstPosDtlField_OpenDate, sizeof(data->OpenDate));
        CThostFtdcSyncDeltaInvstPosDtlField_OpenDate = NULL;
    }

    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcSyncDeltaInvstPosDtlField_TradeID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosDtlField_TradeID_length >= (Py_ssize_t)sizeof(data->TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is 20)", CThostFtdcSyncDeltaInvstPosDtlField_TradeID_length);
            return -1;
        }
        // memset(data->TradeID, 0, sizeof(data->TradeID));
        // memcpy(data->TradeID, CThostFtdcSyncDeltaInvstPosDtlField_TradeID, CThostFtdcSyncDeltaInvstPosDtlField_TradeID_length);
        strncpy(data->TradeID, CThostFtdcSyncDeltaInvstPosDtlField_TradeID, sizeof(data->TradeID));
        CThostFtdcSyncDeltaInvstPosDtlField_TradeID = NULL;
    }

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcSyncDeltaInvstPosDtlField_Volume;

    /// 开仓价
    /// typedef double TThostFtdcPriceType
    data->OpenPrice = CThostFtdcSyncDeltaInvstPosDtlField_OpenPrice;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaInvstPosDtlField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosDtlField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaInvstPosDtlField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaInvstPosDtlField_TradingDay, CThostFtdcSyncDeltaInvstPosDtlField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaInvstPosDtlField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaInvstPosDtlField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcSyncDeltaInvstPosDtlField_SettlementID;

    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    data->TradeType = CThostFtdcSyncDeltaInvstPosDtlField_TradeType;

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaInvstPosDtlField_CombInstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosDtlField_CombInstrumentID_length >= (Py_ssize_t)sizeof(data->CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaInvstPosDtlField_CombInstrumentID_length);
            return -1;
        }
        // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
        // memcpy(data->CombInstrumentID, CThostFtdcSyncDeltaInvstPosDtlField_CombInstrumentID, CThostFtdcSyncDeltaInvstPosDtlField_CombInstrumentID_length);
        strncpy(data->CombInstrumentID, CThostFtdcSyncDeltaInvstPosDtlField_CombInstrumentID, sizeof(data->CombInstrumentID));
        CThostFtdcSyncDeltaInvstPosDtlField_CombInstrumentID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaInvstPosDtlField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosDtlField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaInvstPosDtlField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaInvstPosDtlField_ExchangeID, CThostFtdcSyncDeltaInvstPosDtlField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaInvstPosDtlField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaInvstPosDtlField_ExchangeID = NULL;
    }

    /// 逐日盯市平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfitByDate = CThostFtdcSyncDeltaInvstPosDtlField_CloseProfitByDate;

    /// 逐笔对冲平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfitByTrade = CThostFtdcSyncDeltaInvstPosDtlField_CloseProfitByTrade;

    /// 逐日盯市持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->PositionProfitByDate = CThostFtdcSyncDeltaInvstPosDtlField_PositionProfitByDate;

    /// 逐笔对冲持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->PositionProfitByTrade = CThostFtdcSyncDeltaInvstPosDtlField_PositionProfitByTrade;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    data->Margin = CThostFtdcSyncDeltaInvstPosDtlField_Margin;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMargin = CThostFtdcSyncDeltaInvstPosDtlField_ExchMargin;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    data->MarginRateByMoney = CThostFtdcSyncDeltaInvstPosDtlField_MarginRateByMoney;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    data->MarginRateByVolume = CThostFtdcSyncDeltaInvstPosDtlField_MarginRateByVolume;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    data->LastSettlementPrice = CThostFtdcSyncDeltaInvstPosDtlField_LastSettlementPrice;

    /// 结算价
    /// typedef double TThostFtdcPriceType
    data->SettlementPrice = CThostFtdcSyncDeltaInvstPosDtlField_SettlementPrice;

    /// 平仓量
    /// typedef int TThostFtdcVolumeType
    data->CloseVolume = CThostFtdcSyncDeltaInvstPosDtlField_CloseVolume;

    /// 平仓金额
    /// typedef double TThostFtdcMoneyType
    data->CloseAmount = CThostFtdcSyncDeltaInvstPosDtlField_CloseAmount;

    /// 先开先平剩余数量
    /// typedef int TThostFtdcVolumeType
    data->TimeFirstVolume = CThostFtdcSyncDeltaInvstPosDtlField_TimeFirstVolume;

    /// 特殊持仓标志
    /// typedef char TThostFtdcSpecPosiTypeType
    data->SpecPosiType = CThostFtdcSyncDeltaInvstPosDtlField_SpecPosiType;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaInvstPosDtlField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaInvstPosDtlField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:i,s:d,s:y,s:i,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:i,s:c,s:c,s:i}"
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "HedgeFlag", data->HedgeFlag
        , "Direction", data->Direction
        , "OpenDate", data->OpenDate//, (Py_ssize_t)sizeof(data->OpenDate)
        , "TradeID", data->TradeID//, (Py_ssize_t)sizeof(data->TradeID)
        , "Volume", data->Volume
        , "OpenPrice", data->OpenPrice
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "TradeType", data->TradeType
        , "CombInstrumentID", data->CombInstrumentID//, (Py_ssize_t)sizeof(data->CombInstrumentID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "CloseProfitByDate", data->CloseProfitByDate
        , "CloseProfitByTrade", data->CloseProfitByTrade
        , "PositionProfitByDate", data->PositionProfitByDate
        , "PositionProfitByTrade", data->PositionProfitByTrade
        , "Margin", data->Margin
        , "ExchMargin", data->ExchMargin
        , "MarginRateByMoney", data->MarginRateByMoney
        , "MarginRateByVolume", data->MarginRateByVolume
        , "LastSettlementPrice", data->LastSettlementPrice
        , "SettlementPrice", data->SettlementPrice
        , "CloseVolume", data->CloseVolume
        , "CloseAmount", data->CloseAmount
        , "TimeFirstVolume", data->TimeFirstVolume
        , "SpecPosiType", data->SpecPosiType
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstPosDtlField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstPosDtlField repr");
        return NULL;
    }

    return repr;
}


/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开仓日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_OpenDate(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OpenDate, (Py_ssize_t)sizeof(data->OpenDate));
    return PyBytes_FromString(data->OpenDate);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_OpenDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // memset(data->OpenDate, 0, sizeof(data->OpenDate));
    // memcpy(data->OpenDate, buf, len);
    strncpy(data->OpenDate, buf, sizeof(data->OpenDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_TradeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeID, (Py_ssize_t)sizeof(data->TradeID));
    return PyBytes_FromString(data->TradeID);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_TradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // memset(data->TradeID, 0, sizeof(data->TradeID));
    // memcpy(data->TradeID, buf, len);
    strncpy(data->TradeID, buf, sizeof(data->TradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交类型
/// typedef char TThostFtdcTradeTypeType
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_TradeType(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradeType), 1);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_TradeType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::TradeType)) {
        PyErr_SetString(PyExc_ValueError, "TradeType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    data->TradeType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_CombInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombInstrumentID, (Py_ssize_t)sizeof(data->CombInstrumentID));
    return PyBytes_FromString(data->CombInstrumentID);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_CombInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
    // memcpy(data->CombInstrumentID, buf, len);
    strncpy(data->CombInstrumentID, buf, sizeof(data->CombInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 特殊持仓标志
/// typedef char TThostFtdcSpecPosiTypeType
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_SpecPosiType(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SpecPosiType), 1);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_SpecPosiType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SpecPosiType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::SpecPosiType)) {
        PyErr_SetString(PyExc_ValueError, "SpecPosiType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    data->SpecPosiType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosDtlField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosDtlField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaInvstPosDtlFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
    },
    /// 开仓价
    /// typedef double TThostFtdcPriceType
    {
        .name = "OpenPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.OpenPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓价")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.CloseProfitByDate),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.CloseProfitByTrade),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("逐笔对冲平仓盈亏")
    },
    /// 逐日盯市持仓盈亏
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PositionProfitByDate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.PositionProfitByDate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("逐日盯市持仓盈亏")
    },
    /// 逐笔对冲持仓盈亏
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PositionProfitByTrade",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.PositionProfitByTrade),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("逐笔对冲持仓盈亏")
    },
    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Margin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.Margin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投资者保证金")
    },
    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.ExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所保证金")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.MarginRateByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.MarginRateByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保证金率(按手数)")
    },
    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    {
        .name = "LastSettlementPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.LastSettlementPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("昨结算价")
    },
    /// 结算价
    /// typedef double TThostFtdcPriceType
    {
        .name = "SettlementPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.SettlementPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算价")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.CloseVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓量")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.CloseAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓金额")
    },
    /// 先开先平剩余数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "TimeFirstVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.TimeFirstVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("先开先平剩余数量")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaInvstPosDtlFieldType_getsets[] = {
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_HedgeFlag,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 买卖
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_Direction,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_Direction,
    .doc = PyDoc_STR("买卖"),
    },
    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "OpenDate",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_OpenDate,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_OpenDate,
    .doc = PyDoc_STR("开仓日期"),
    },
    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "TradeID",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_TradeID,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_TradeID,
    .doc = PyDoc_STR("成交编号"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    {
    .name = "TradeType",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_TradeType,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_TradeType,
    .doc = PyDoc_STR("成交类型"),
    },
    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "CombInstrumentID",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_CombInstrumentID,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_CombInstrumentID,
    .doc = PyDoc_STR("组合合约代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 特殊持仓标志
    /// typedef char TThostFtdcSpecPosiTypeType
    {
    .name = "SpecPosiType",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_SpecPosiType,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_SpecPosiType,
    .doc = PyDoc_STR("特殊持仓标志"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaInvstPosDtlFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaInvstPosDtlField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平持仓明细")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaInvstPosDtlFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaInvstPosDtlFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaInvstPosDtlFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaInvstPosDtlFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaInvstPosDtlFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平持仓明细")},
    {Py_tp_members, PyCThostFtdcSyncDeltaInvstPosDtlFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaInvstPosDtlFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaInvstPosDtlFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaInvstPosDtlFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaInvstPosDtlFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaInvstPosDtlField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvstPosDtlFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaInvstPosDtlFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaInvstPosDtlFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaInvstPosDtlFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaInvstPosDtlFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaInvstPosDtlFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstPosDtlField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstPosDtlField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}