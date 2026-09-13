
#include "PyCThostFtdcInvestorPositionDetailField.h"

///投资者持仓明细

static int PyCThostFtdcInvestorPositionDetailFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "BrokerID", "InvestorID", "HedgeFlag", "Direction", "OpenDate", "TradeID", "Volume", "OpenPrice", "TradingDay", "SettlementID", "TradeType", "reserve2", "ExchangeID", "CloseProfitByDate", "CloseProfitByTrade", "PositionProfitByDate", "PositionProfitByTrade", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LastSettlementPrice", "SettlementPrice", "CloseVolume", "CloseAmount", "TimeFirstVolume", "InvestUnitID", "SpecPosiType", "InstrumentID", "CombInstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInvestorPositionDetailField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInvestorPositionDetailField_reserve1_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorPositionDetailField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionDetailField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorPositionDetailField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionDetailField_InvestorID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInvestorPositionDetailField_HedgeFlag = 0;

    /// 买卖
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcInvestorPositionDetailField_Direction = 0;

    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInvestorPositionDetailField_OpenDate = NULL;
    Py_ssize_t CThostFtdcInvestorPositionDetailField_OpenDate_length = 0;

    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcInvestorPositionDetailField_TradeID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionDetailField_TradeID_length = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionDetailField_Volume = 0;

    /// 开仓价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcInvestorPositionDetailField_OpenPrice = 0.0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInvestorPositionDetailField_TradingDay = NULL;
    Py_ssize_t CThostFtdcInvestorPositionDetailField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcInvestorPositionDetailField_SettlementID = 0;

    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    char CThostFtdcInvestorPositionDetailField_TradeType = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInvestorPositionDetailField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInvestorPositionDetailField_reserve2_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorPositionDetailField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionDetailField_ExchangeID_length = 0;

    /// 逐日盯市平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionDetailField_CloseProfitByDate = 0.0;

    /// 逐笔对冲平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionDetailField_CloseProfitByTrade = 0.0;

    /// 逐日盯市持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionDetailField_PositionProfitByDate = 0.0;

    /// 逐笔对冲持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionDetailField_PositionProfitByTrade = 0.0;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionDetailField_Margin = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionDetailField_ExchMargin = 0.0;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInvestorPositionDetailField_MarginRateByMoney = 0.0;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInvestorPositionDetailField_MarginRateByVolume = 0.0;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcInvestorPositionDetailField_LastSettlementPrice = 0.0;

    /// 结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcInvestorPositionDetailField_SettlementPrice = 0.0;

    /// 平仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionDetailField_CloseVolume = 0;

    /// 平仓金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionDetailField_CloseAmount = 0.0;

    /// 先开先平剩余数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionDetailField_TimeFirstVolume = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInvestorPositionDetailField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionDetailField_InvestUnitID_length = 0;

    /// 特殊持仓标志
    /// typedef char TThostFtdcSpecPosiTypeType
    char CThostFtdcInvestorPositionDetailField_SpecPosiType = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInvestorPositionDetailField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionDetailField_InstrumentID_length = 0;

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInvestorPositionDetailField_CombInstrumentID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionDetailField_CombInstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccy#y#idy#icy#y#ddddddddddidiy#cy#y#", (char **)kwlist
        , &CThostFtdcInvestorPositionDetailField_reserve1, &CThostFtdcInvestorPositionDetailField_reserve1_length
        , &CThostFtdcInvestorPositionDetailField_BrokerID, &CThostFtdcInvestorPositionDetailField_BrokerID_length
        , &CThostFtdcInvestorPositionDetailField_InvestorID, &CThostFtdcInvestorPositionDetailField_InvestorID_length
        , &CThostFtdcInvestorPositionDetailField_HedgeFlag
        , &CThostFtdcInvestorPositionDetailField_Direction
        , &CThostFtdcInvestorPositionDetailField_OpenDate, &CThostFtdcInvestorPositionDetailField_OpenDate_length
        , &CThostFtdcInvestorPositionDetailField_TradeID, &CThostFtdcInvestorPositionDetailField_TradeID_length
        , &CThostFtdcInvestorPositionDetailField_Volume
        , &CThostFtdcInvestorPositionDetailField_OpenPrice
        , &CThostFtdcInvestorPositionDetailField_TradingDay, &CThostFtdcInvestorPositionDetailField_TradingDay_length
        , &CThostFtdcInvestorPositionDetailField_SettlementID
        , &CThostFtdcInvestorPositionDetailField_TradeType
        , &CThostFtdcInvestorPositionDetailField_reserve2, &CThostFtdcInvestorPositionDetailField_reserve2_length
        , &CThostFtdcInvestorPositionDetailField_ExchangeID, &CThostFtdcInvestorPositionDetailField_ExchangeID_length
        , &CThostFtdcInvestorPositionDetailField_CloseProfitByDate
        , &CThostFtdcInvestorPositionDetailField_CloseProfitByTrade
        , &CThostFtdcInvestorPositionDetailField_PositionProfitByDate
        , &CThostFtdcInvestorPositionDetailField_PositionProfitByTrade
        , &CThostFtdcInvestorPositionDetailField_Margin
        , &CThostFtdcInvestorPositionDetailField_ExchMargin
        , &CThostFtdcInvestorPositionDetailField_MarginRateByMoney
        , &CThostFtdcInvestorPositionDetailField_MarginRateByVolume
        , &CThostFtdcInvestorPositionDetailField_LastSettlementPrice
        , &CThostFtdcInvestorPositionDetailField_SettlementPrice
        , &CThostFtdcInvestorPositionDetailField_CloseVolume
        , &CThostFtdcInvestorPositionDetailField_CloseAmount
        , &CThostFtdcInvestorPositionDetailField_TimeFirstVolume
        , &CThostFtdcInvestorPositionDetailField_InvestUnitID, &CThostFtdcInvestorPositionDetailField_InvestUnitID_length
        , &CThostFtdcInvestorPositionDetailField_SpecPosiType
        , &CThostFtdcInvestorPositionDetailField_InstrumentID, &CThostFtdcInvestorPositionDetailField_InstrumentID_length
        , &CThostFtdcInvestorPositionDetailField_CombInstrumentID, &CThostFtdcInvestorPositionDetailField_CombInstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInvestorPositionDetailField_reserve1 != NULL ) {
        if(CThostFtdcInvestorPositionDetailField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInvestorPositionDetailField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInvestorPositionDetailField_reserve1, CThostFtdcInvestorPositionDetailField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInvestorPositionDetailField_reserve1, sizeof(data->reserve1));
        CThostFtdcInvestorPositionDetailField_reserve1 = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorPositionDetailField_BrokerID != NULL ) {
        if(CThostFtdcInvestorPositionDetailField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorPositionDetailField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorPositionDetailField_BrokerID, CThostFtdcInvestorPositionDetailField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorPositionDetailField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorPositionDetailField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorPositionDetailField_InvestorID != NULL ) {
        if(CThostFtdcInvestorPositionDetailField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorPositionDetailField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorPositionDetailField_InvestorID, CThostFtdcInvestorPositionDetailField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorPositionDetailField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorPositionDetailField_InvestorID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInvestorPositionDetailField_HedgeFlag;

    /// 买卖
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcInvestorPositionDetailField_Direction;

    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInvestorPositionDetailField_OpenDate != NULL ) {
        if(CThostFtdcInvestorPositionDetailField_OpenDate_length >= (Py_ssize_t)sizeof(data->OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is 8)", CThostFtdcInvestorPositionDetailField_OpenDate_length);
            return -1;
        }
        // memset(data->OpenDate, 0, sizeof(data->OpenDate));
        // memcpy(data->OpenDate, CThostFtdcInvestorPositionDetailField_OpenDate, CThostFtdcInvestorPositionDetailField_OpenDate_length);
        strncpy(data->OpenDate, CThostFtdcInvestorPositionDetailField_OpenDate, sizeof(data->OpenDate));
        CThostFtdcInvestorPositionDetailField_OpenDate = NULL;
    }

    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcInvestorPositionDetailField_TradeID != NULL ) {
        if(CThostFtdcInvestorPositionDetailField_TradeID_length >= (Py_ssize_t)sizeof(data->TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is 20)", CThostFtdcInvestorPositionDetailField_TradeID_length);
            return -1;
        }
        // memset(data->TradeID, 0, sizeof(data->TradeID));
        // memcpy(data->TradeID, CThostFtdcInvestorPositionDetailField_TradeID, CThostFtdcInvestorPositionDetailField_TradeID_length);
        strncpy(data->TradeID, CThostFtdcInvestorPositionDetailField_TradeID, sizeof(data->TradeID));
        CThostFtdcInvestorPositionDetailField_TradeID = NULL;
    }

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcInvestorPositionDetailField_Volume;

    /// 开仓价
    /// typedef double TThostFtdcPriceType
    data->OpenPrice = CThostFtdcInvestorPositionDetailField_OpenPrice;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInvestorPositionDetailField_TradingDay != NULL ) {
        if(CThostFtdcInvestorPositionDetailField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcInvestorPositionDetailField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcInvestorPositionDetailField_TradingDay, CThostFtdcInvestorPositionDetailField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcInvestorPositionDetailField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcInvestorPositionDetailField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcInvestorPositionDetailField_SettlementID;

    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    data->TradeType = CThostFtdcInvestorPositionDetailField_TradeType;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInvestorPositionDetailField_reserve2 != NULL ) {
        if(CThostFtdcInvestorPositionDetailField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcInvestorPositionDetailField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInvestorPositionDetailField_reserve2, CThostFtdcInvestorPositionDetailField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInvestorPositionDetailField_reserve2, sizeof(data->reserve2));
        CThostFtdcInvestorPositionDetailField_reserve2 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorPositionDetailField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorPositionDetailField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorPositionDetailField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorPositionDetailField_ExchangeID, CThostFtdcInvestorPositionDetailField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorPositionDetailField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorPositionDetailField_ExchangeID = NULL;
    }

    /// 逐日盯市平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfitByDate = CThostFtdcInvestorPositionDetailField_CloseProfitByDate;

    /// 逐笔对冲平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfitByTrade = CThostFtdcInvestorPositionDetailField_CloseProfitByTrade;

    /// 逐日盯市持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->PositionProfitByDate = CThostFtdcInvestorPositionDetailField_PositionProfitByDate;

    /// 逐笔对冲持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->PositionProfitByTrade = CThostFtdcInvestorPositionDetailField_PositionProfitByTrade;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    data->Margin = CThostFtdcInvestorPositionDetailField_Margin;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMargin = CThostFtdcInvestorPositionDetailField_ExchMargin;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    data->MarginRateByMoney = CThostFtdcInvestorPositionDetailField_MarginRateByMoney;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    data->MarginRateByVolume = CThostFtdcInvestorPositionDetailField_MarginRateByVolume;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    data->LastSettlementPrice = CThostFtdcInvestorPositionDetailField_LastSettlementPrice;

    /// 结算价
    /// typedef double TThostFtdcPriceType
    data->SettlementPrice = CThostFtdcInvestorPositionDetailField_SettlementPrice;

    /// 平仓量
    /// typedef int TThostFtdcVolumeType
    data->CloseVolume = CThostFtdcInvestorPositionDetailField_CloseVolume;

    /// 平仓金额
    /// typedef double TThostFtdcMoneyType
    data->CloseAmount = CThostFtdcInvestorPositionDetailField_CloseAmount;

    /// 先开先平剩余数量
    /// typedef int TThostFtdcVolumeType
    data->TimeFirstVolume = CThostFtdcInvestorPositionDetailField_TimeFirstVolume;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInvestorPositionDetailField_InvestUnitID != NULL ) {
        if(CThostFtdcInvestorPositionDetailField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInvestorPositionDetailField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInvestorPositionDetailField_InvestUnitID, CThostFtdcInvestorPositionDetailField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInvestorPositionDetailField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInvestorPositionDetailField_InvestUnitID = NULL;
    }

    /// 特殊持仓标志
    /// typedef char TThostFtdcSpecPosiTypeType
    data->SpecPosiType = CThostFtdcInvestorPositionDetailField_SpecPosiType;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInvestorPositionDetailField_InstrumentID != NULL ) {
        if(CThostFtdcInvestorPositionDetailField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInvestorPositionDetailField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInvestorPositionDetailField_InstrumentID, CThostFtdcInvestorPositionDetailField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInvestorPositionDetailField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInvestorPositionDetailField_InstrumentID = NULL;
    }

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInvestorPositionDetailField_CombInstrumentID != NULL ) {
        if(CThostFtdcInvestorPositionDetailField_CombInstrumentID_length >= (Py_ssize_t)sizeof(data->CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInvestorPositionDetailField_CombInstrumentID_length);
            return -1;
        }
        // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
        // memcpy(data->CombInstrumentID, CThostFtdcInvestorPositionDetailField_CombInstrumentID, CThostFtdcInvestorPositionDetailField_CombInstrumentID_length);
        strncpy(data->CombInstrumentID, CThostFtdcInvestorPositionDetailField_CombInstrumentID, sizeof(data->CombInstrumentID));
        CThostFtdcInvestorPositionDetailField_CombInstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:i,s:d,s:y,s:i,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:i,s:y,s:c,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
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
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
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
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "SpecPosiType", data->SpecPosiType
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "CombInstrumentID", data->CombInstrumentID//, (Py_ssize_t)sizeof(data->CombInstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionDetailField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionDetailField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开仓日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_OpenDate(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OpenDate, (Py_ssize_t)sizeof(data->OpenDate));
    return PyBytes_FromString(data->OpenDate);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_OpenDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // memset(data->OpenDate, 0, sizeof(data->OpenDate));
    // memcpy(data->OpenDate, buf, len);
    strncpy(data->OpenDate, buf, sizeof(data->OpenDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_TradeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeID, (Py_ssize_t)sizeof(data->TradeID));
    return PyBytes_FromString(data->TradeID);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_TradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // memset(data->TradeID, 0, sizeof(data->TradeID));
    // memcpy(data->TradeID, buf, len);
    strncpy(data->TradeID, buf, sizeof(data->TradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交类型
/// typedef char TThostFtdcTradeTypeType
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_TradeType(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradeType), 1);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_TradeType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::TradeType)) {
        PyErr_SetString(PyExc_ValueError, "TradeType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    data->TradeType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 特殊持仓标志
/// typedef char TThostFtdcSpecPosiTypeType
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_SpecPosiType(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SpecPosiType), 1);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_SpecPosiType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SpecPosiType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::SpecPosiType)) {
        PyErr_SetString(PyExc_ValueError, "SpecPosiType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    data->SpecPosiType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInvestorPositionDetailFieldType_get_CombInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombInstrumentID, (Py_ssize_t)sizeof(data->CombInstrumentID));
    return PyBytes_FromString(data->CombInstrumentID);
}

static int PyCThostFtdcInvestorPositionDetailFieldType_set_CombInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionDetailField::CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(self);
    CThostFtdcInvestorPositionDetailField *data = &(extra->data);
    // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
    // memcpy(data->CombInstrumentID, buf, len);
    strncpy(data->CombInstrumentID, buf, sizeof(data->CombInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorPositionDetailFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.OpenPrice),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.CloseProfitByDate),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.CloseProfitByTrade),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.PositionProfitByDate),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.PositionProfitByTrade),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.Margin),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.ExchMargin),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.MarginRateByMoney),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.MarginRateByVolume),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.LastSettlementPrice),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.SettlementPrice),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.CloseVolume),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.CloseAmount),
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
        .offset = offsetof(PyCThostFtdcInvestorPositionDetailFieldData, data.TimeFirstVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("先开先平剩余数量")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorPositionDetailFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_reserve1,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 买卖
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_Direction,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_Direction,
    .doc = PyDoc_STR("买卖"),
    },
    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "OpenDate",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_OpenDate,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_OpenDate,
    .doc = PyDoc_STR("开仓日期"),
    },
    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "TradeID",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_TradeID,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_TradeID,
    .doc = PyDoc_STR("成交编号"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_TradingDay,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    {
    .name = "TradeType",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_TradeType,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_TradeType,
    .doc = PyDoc_STR("成交类型"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_reserve2,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 特殊持仓标志
    /// typedef char TThostFtdcSpecPosiTypeType
    {
    .name = "SpecPosiType",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_SpecPosiType,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_SpecPosiType,
    .doc = PyDoc_STR("特殊持仓标志"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_InstrumentID,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "CombInstrumentID",
    .get = PyCThostFtdcInvestorPositionDetailFieldType_get_CombInstrumentID,
    .set = PyCThostFtdcInvestorPositionDetailFieldType_set_CombInstrumentID,
    .doc = PyDoc_STR("组合合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorPositionDetailFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorPositionDetailField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者持仓明细")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorPositionDetailFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorPositionDetailFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorPositionDetailFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorPositionDetailFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorPositionDetailFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorPositionDetailFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者持仓明细")},
    {Py_tp_members, PyCThostFtdcInvestorPositionDetailFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorPositionDetailFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorPositionDetailFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorPositionDetailFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorPositionDetailFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorPositionDetailField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorPositionDetailFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorPositionDetailFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorPositionDetailFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorPositionDetailFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorPositionDetailFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorPositionDetailFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorPositionDetailFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorPositionDetailFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorPositionDetailField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPositionDetailField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}