
#include "PyCThostFtdcSyncDeltaDepthMarketDataField.h"

///风险结算追平行情

static int PyCThostFtdcSyncDeltaDepthMarketDataFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "InstrumentID", "ExchangeID", "ExchangeInstID", "LastPrice", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "OpenPrice", "HighestPrice", "LowestPrice", "Volume", "Turnover", "OpenInterest", "ClosePrice", "SettlementPrice", "UpperLimitPrice", "LowerLimitPrice", "PreDelta", "CurrDelta", "UpdateTime", "UpdateMillisec", "BidPrice1", "BidVolume1", "AskPrice1", "AskVolume1", "BidPrice2", "BidVolume2", "AskPrice2", "AskVolume2", "BidPrice3", "BidVolume3", "AskPrice3", "AskVolume3", "BidPrice4", "BidVolume4", "AskPrice4", "AskVolume4", "BidPrice5", "BidVolume5", "AskPrice5", "AskVolume5", "AveragePrice", "ActionDay", "BandingUpperPrice", "BandingLowerPrice", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaDepthMarketDataField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaDepthMarketDataField_TradingDay_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaDepthMarketDataField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaDepthMarketDataField_InstrumentID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaDepthMarketDataField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaDepthMarketDataField_ExchangeID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcSyncDeltaDepthMarketDataField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaDepthMarketDataField_ExchangeInstID_length = 0;

    /// 最新价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_LastPrice = 0.0;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_PreSettlementPrice = 0.0;

    /// 昨收盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_PreClosePrice = 0.0;

    /// 昨持仓量
    /// typedef double TThostFtdcLargeVolumeType
    double CThostFtdcSyncDeltaDepthMarketDataField_PreOpenInterest = 0.0;

    /// 今开盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_OpenPrice = 0.0;

    /// 最高价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_HighestPrice = 0.0;

    /// 最低价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_LowestPrice = 0.0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaDepthMarketDataField_Volume = 0;

    /// 成交金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaDepthMarketDataField_Turnover = 0.0;

    /// 持仓量
    /// typedef double TThostFtdcLargeVolumeType
    double CThostFtdcSyncDeltaDepthMarketDataField_OpenInterest = 0.0;

    /// 今收盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_ClosePrice = 0.0;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_SettlementPrice = 0.0;

    /// 涨停板价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_UpperLimitPrice = 0.0;

    /// 跌停板价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_LowerLimitPrice = 0.0;

    /// 昨虚实度
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaDepthMarketDataField_PreDelta = 0.0;

    /// 今虚实度
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaDepthMarketDataField_CurrDelta = 0.0;

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcSyncDeltaDepthMarketDataField_UpdateTime = NULL;
    Py_ssize_t CThostFtdcSyncDeltaDepthMarketDataField_UpdateTime_length = 0;

    /// 最后修改毫秒
    /// typedef int TThostFtdcMillisecType
    int CThostFtdcSyncDeltaDepthMarketDataField_UpdateMillisec = 0;

    /// 申买价一
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_BidPrice1 = 0.0;

    /// 申买量一
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaDepthMarketDataField_BidVolume1 = 0;

    /// 申卖价一
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_AskPrice1 = 0.0;

    /// 申卖量一
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaDepthMarketDataField_AskVolume1 = 0;

    /// 申买价二
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_BidPrice2 = 0.0;

    /// 申买量二
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaDepthMarketDataField_BidVolume2 = 0;

    /// 申卖价二
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_AskPrice2 = 0.0;

    /// 申卖量二
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaDepthMarketDataField_AskVolume2 = 0;

    /// 申买价三
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_BidPrice3 = 0.0;

    /// 申买量三
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaDepthMarketDataField_BidVolume3 = 0;

    /// 申卖价三
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_AskPrice3 = 0.0;

    /// 申卖量三
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaDepthMarketDataField_AskVolume3 = 0;

    /// 申买价四
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_BidPrice4 = 0.0;

    /// 申买量四
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaDepthMarketDataField_BidVolume4 = 0;

    /// 申卖价四
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_AskPrice4 = 0.0;

    /// 申卖量四
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaDepthMarketDataField_AskVolume4 = 0;

    /// 申买价五
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_BidPrice5 = 0.0;

    /// 申买量五
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaDepthMarketDataField_BidVolume5 = 0;

    /// 申卖价五
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_AskPrice5 = 0.0;

    /// 申卖量五
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaDepthMarketDataField_AskVolume5 = 0;

    /// 当日均价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_AveragePrice = 0.0;

    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaDepthMarketDataField_ActionDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaDepthMarketDataField_ActionDay_length = 0;

    /// 上带价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_BandingUpperPrice = 0.0;

    /// 下带价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaDepthMarketDataField_BandingLowerPrice = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaDepthMarketDataField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaDepthMarketDataField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddddddiddddddddy#idididididididididididy#ddci", (char **)kwlist
        , &CThostFtdcSyncDeltaDepthMarketDataField_TradingDay, &CThostFtdcSyncDeltaDepthMarketDataField_TradingDay_length
        , &CThostFtdcSyncDeltaDepthMarketDataField_InstrumentID, &CThostFtdcSyncDeltaDepthMarketDataField_InstrumentID_length
        , &CThostFtdcSyncDeltaDepthMarketDataField_ExchangeID, &CThostFtdcSyncDeltaDepthMarketDataField_ExchangeID_length
        , &CThostFtdcSyncDeltaDepthMarketDataField_ExchangeInstID, &CThostFtdcSyncDeltaDepthMarketDataField_ExchangeInstID_length
        , &CThostFtdcSyncDeltaDepthMarketDataField_LastPrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_PreSettlementPrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_PreClosePrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_PreOpenInterest
        , &CThostFtdcSyncDeltaDepthMarketDataField_OpenPrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_HighestPrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_LowestPrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_Volume
        , &CThostFtdcSyncDeltaDepthMarketDataField_Turnover
        , &CThostFtdcSyncDeltaDepthMarketDataField_OpenInterest
        , &CThostFtdcSyncDeltaDepthMarketDataField_ClosePrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_SettlementPrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_UpperLimitPrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_LowerLimitPrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_PreDelta
        , &CThostFtdcSyncDeltaDepthMarketDataField_CurrDelta
        , &CThostFtdcSyncDeltaDepthMarketDataField_UpdateTime, &CThostFtdcSyncDeltaDepthMarketDataField_UpdateTime_length
        , &CThostFtdcSyncDeltaDepthMarketDataField_UpdateMillisec
        , &CThostFtdcSyncDeltaDepthMarketDataField_BidPrice1
        , &CThostFtdcSyncDeltaDepthMarketDataField_BidVolume1
        , &CThostFtdcSyncDeltaDepthMarketDataField_AskPrice1
        , &CThostFtdcSyncDeltaDepthMarketDataField_AskVolume1
        , &CThostFtdcSyncDeltaDepthMarketDataField_BidPrice2
        , &CThostFtdcSyncDeltaDepthMarketDataField_BidVolume2
        , &CThostFtdcSyncDeltaDepthMarketDataField_AskPrice2
        , &CThostFtdcSyncDeltaDepthMarketDataField_AskVolume2
        , &CThostFtdcSyncDeltaDepthMarketDataField_BidPrice3
        , &CThostFtdcSyncDeltaDepthMarketDataField_BidVolume3
        , &CThostFtdcSyncDeltaDepthMarketDataField_AskPrice3
        , &CThostFtdcSyncDeltaDepthMarketDataField_AskVolume3
        , &CThostFtdcSyncDeltaDepthMarketDataField_BidPrice4
        , &CThostFtdcSyncDeltaDepthMarketDataField_BidVolume4
        , &CThostFtdcSyncDeltaDepthMarketDataField_AskPrice4
        , &CThostFtdcSyncDeltaDepthMarketDataField_AskVolume4
        , &CThostFtdcSyncDeltaDepthMarketDataField_BidPrice5
        , &CThostFtdcSyncDeltaDepthMarketDataField_BidVolume5
        , &CThostFtdcSyncDeltaDepthMarketDataField_AskPrice5
        , &CThostFtdcSyncDeltaDepthMarketDataField_AskVolume5
        , &CThostFtdcSyncDeltaDepthMarketDataField_AveragePrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_ActionDay, &CThostFtdcSyncDeltaDepthMarketDataField_ActionDay_length
        , &CThostFtdcSyncDeltaDepthMarketDataField_BandingUpperPrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_BandingLowerPrice
        , &CThostFtdcSyncDeltaDepthMarketDataField_ActionDirection
        , &CThostFtdcSyncDeltaDepthMarketDataField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaDepthMarketDataField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaDepthMarketDataField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaDepthMarketDataField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaDepthMarketDataField_TradingDay, CThostFtdcSyncDeltaDepthMarketDataField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaDepthMarketDataField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaDepthMarketDataField_TradingDay = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaDepthMarketDataField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaDepthMarketDataField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaDepthMarketDataField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaDepthMarketDataField_InstrumentID, CThostFtdcSyncDeltaDepthMarketDataField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaDepthMarketDataField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaDepthMarketDataField_InstrumentID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaDepthMarketDataField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaDepthMarketDataField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaDepthMarketDataField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaDepthMarketDataField_ExchangeID, CThostFtdcSyncDeltaDepthMarketDataField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaDepthMarketDataField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaDepthMarketDataField_ExchangeID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcSyncDeltaDepthMarketDataField_ExchangeInstID != NULL ) {
        if(CThostFtdcSyncDeltaDepthMarketDataField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaDepthMarketDataField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcSyncDeltaDepthMarketDataField_ExchangeInstID, CThostFtdcSyncDeltaDepthMarketDataField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcSyncDeltaDepthMarketDataField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcSyncDeltaDepthMarketDataField_ExchangeInstID = NULL;
    }

    /// 最新价
    /// typedef double TThostFtdcPriceType
    data->LastPrice = CThostFtdcSyncDeltaDepthMarketDataField_LastPrice;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    data->PreSettlementPrice = CThostFtdcSyncDeltaDepthMarketDataField_PreSettlementPrice;

    /// 昨收盘
    /// typedef double TThostFtdcPriceType
    data->PreClosePrice = CThostFtdcSyncDeltaDepthMarketDataField_PreClosePrice;

    /// 昨持仓量
    /// typedef double TThostFtdcLargeVolumeType
    data->PreOpenInterest = CThostFtdcSyncDeltaDepthMarketDataField_PreOpenInterest;

    /// 今开盘
    /// typedef double TThostFtdcPriceType
    data->OpenPrice = CThostFtdcSyncDeltaDepthMarketDataField_OpenPrice;

    /// 最高价
    /// typedef double TThostFtdcPriceType
    data->HighestPrice = CThostFtdcSyncDeltaDepthMarketDataField_HighestPrice;

    /// 最低价
    /// typedef double TThostFtdcPriceType
    data->LowestPrice = CThostFtdcSyncDeltaDepthMarketDataField_LowestPrice;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcSyncDeltaDepthMarketDataField_Volume;

    /// 成交金额
    /// typedef double TThostFtdcMoneyType
    data->Turnover = CThostFtdcSyncDeltaDepthMarketDataField_Turnover;

    /// 持仓量
    /// typedef double TThostFtdcLargeVolumeType
    data->OpenInterest = CThostFtdcSyncDeltaDepthMarketDataField_OpenInterest;

    /// 今收盘
    /// typedef double TThostFtdcPriceType
    data->ClosePrice = CThostFtdcSyncDeltaDepthMarketDataField_ClosePrice;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    data->SettlementPrice = CThostFtdcSyncDeltaDepthMarketDataField_SettlementPrice;

    /// 涨停板价
    /// typedef double TThostFtdcPriceType
    data->UpperLimitPrice = CThostFtdcSyncDeltaDepthMarketDataField_UpperLimitPrice;

    /// 跌停板价
    /// typedef double TThostFtdcPriceType
    data->LowerLimitPrice = CThostFtdcSyncDeltaDepthMarketDataField_LowerLimitPrice;

    /// 昨虚实度
    /// typedef double TThostFtdcRatioType
    data->PreDelta = CThostFtdcSyncDeltaDepthMarketDataField_PreDelta;

    /// 今虚实度
    /// typedef double TThostFtdcRatioType
    data->CurrDelta = CThostFtdcSyncDeltaDepthMarketDataField_CurrDelta;

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcSyncDeltaDepthMarketDataField_UpdateTime != NULL ) {
        if(CThostFtdcSyncDeltaDepthMarketDataField_UpdateTime_length >= (Py_ssize_t)sizeof(data->UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaDepthMarketDataField_UpdateTime_length);
            return -1;
        }
        // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
        // memcpy(data->UpdateTime, CThostFtdcSyncDeltaDepthMarketDataField_UpdateTime, CThostFtdcSyncDeltaDepthMarketDataField_UpdateTime_length);
        strncpy(data->UpdateTime, CThostFtdcSyncDeltaDepthMarketDataField_UpdateTime, sizeof(data->UpdateTime));
        CThostFtdcSyncDeltaDepthMarketDataField_UpdateTime = NULL;
    }

    /// 最后修改毫秒
    /// typedef int TThostFtdcMillisecType
    data->UpdateMillisec = CThostFtdcSyncDeltaDepthMarketDataField_UpdateMillisec;

    /// 申买价一
    /// typedef double TThostFtdcPriceType
    data->BidPrice1 = CThostFtdcSyncDeltaDepthMarketDataField_BidPrice1;

    /// 申买量一
    /// typedef int TThostFtdcVolumeType
    data->BidVolume1 = CThostFtdcSyncDeltaDepthMarketDataField_BidVolume1;

    /// 申卖价一
    /// typedef double TThostFtdcPriceType
    data->AskPrice1 = CThostFtdcSyncDeltaDepthMarketDataField_AskPrice1;

    /// 申卖量一
    /// typedef int TThostFtdcVolumeType
    data->AskVolume1 = CThostFtdcSyncDeltaDepthMarketDataField_AskVolume1;

    /// 申买价二
    /// typedef double TThostFtdcPriceType
    data->BidPrice2 = CThostFtdcSyncDeltaDepthMarketDataField_BidPrice2;

    /// 申买量二
    /// typedef int TThostFtdcVolumeType
    data->BidVolume2 = CThostFtdcSyncDeltaDepthMarketDataField_BidVolume2;

    /// 申卖价二
    /// typedef double TThostFtdcPriceType
    data->AskPrice2 = CThostFtdcSyncDeltaDepthMarketDataField_AskPrice2;

    /// 申卖量二
    /// typedef int TThostFtdcVolumeType
    data->AskVolume2 = CThostFtdcSyncDeltaDepthMarketDataField_AskVolume2;

    /// 申买价三
    /// typedef double TThostFtdcPriceType
    data->BidPrice3 = CThostFtdcSyncDeltaDepthMarketDataField_BidPrice3;

    /// 申买量三
    /// typedef int TThostFtdcVolumeType
    data->BidVolume3 = CThostFtdcSyncDeltaDepthMarketDataField_BidVolume3;

    /// 申卖价三
    /// typedef double TThostFtdcPriceType
    data->AskPrice3 = CThostFtdcSyncDeltaDepthMarketDataField_AskPrice3;

    /// 申卖量三
    /// typedef int TThostFtdcVolumeType
    data->AskVolume3 = CThostFtdcSyncDeltaDepthMarketDataField_AskVolume3;

    /// 申买价四
    /// typedef double TThostFtdcPriceType
    data->BidPrice4 = CThostFtdcSyncDeltaDepthMarketDataField_BidPrice4;

    /// 申买量四
    /// typedef int TThostFtdcVolumeType
    data->BidVolume4 = CThostFtdcSyncDeltaDepthMarketDataField_BidVolume4;

    /// 申卖价四
    /// typedef double TThostFtdcPriceType
    data->AskPrice4 = CThostFtdcSyncDeltaDepthMarketDataField_AskPrice4;

    /// 申卖量四
    /// typedef int TThostFtdcVolumeType
    data->AskVolume4 = CThostFtdcSyncDeltaDepthMarketDataField_AskVolume4;

    /// 申买价五
    /// typedef double TThostFtdcPriceType
    data->BidPrice5 = CThostFtdcSyncDeltaDepthMarketDataField_BidPrice5;

    /// 申买量五
    /// typedef int TThostFtdcVolumeType
    data->BidVolume5 = CThostFtdcSyncDeltaDepthMarketDataField_BidVolume5;

    /// 申卖价五
    /// typedef double TThostFtdcPriceType
    data->AskPrice5 = CThostFtdcSyncDeltaDepthMarketDataField_AskPrice5;

    /// 申卖量五
    /// typedef int TThostFtdcVolumeType
    data->AskVolume5 = CThostFtdcSyncDeltaDepthMarketDataField_AskVolume5;

    /// 当日均价
    /// typedef double TThostFtdcPriceType
    data->AveragePrice = CThostFtdcSyncDeltaDepthMarketDataField_AveragePrice;

    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaDepthMarketDataField_ActionDay != NULL ) {
        if(CThostFtdcSyncDeltaDepthMarketDataField_ActionDay_length >= (Py_ssize_t)sizeof(data->ActionDay)) {
            PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaDepthMarketDataField_ActionDay_length);
            return -1;
        }
        // memset(data->ActionDay, 0, sizeof(data->ActionDay));
        // memcpy(data->ActionDay, CThostFtdcSyncDeltaDepthMarketDataField_ActionDay, CThostFtdcSyncDeltaDepthMarketDataField_ActionDay_length);
        strncpy(data->ActionDay, CThostFtdcSyncDeltaDepthMarketDataField_ActionDay, sizeof(data->ActionDay));
        CThostFtdcSyncDeltaDepthMarketDataField_ActionDay = NULL;
    }

    /// 上带价
    /// typedef double TThostFtdcPriceType
    data->BandingUpperPrice = CThostFtdcSyncDeltaDepthMarketDataField_BandingUpperPrice;

    /// 下带价
    /// typedef double TThostFtdcPriceType
    data->BandingLowerPrice = CThostFtdcSyncDeltaDepthMarketDataField_BandingLowerPrice;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaDepthMarketDataField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaDepthMarketDataField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:y,s:d,s:d,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "LastPrice", data->LastPrice
        , "PreSettlementPrice", data->PreSettlementPrice
        , "PreClosePrice", data->PreClosePrice
        , "PreOpenInterest", data->PreOpenInterest
        , "OpenPrice", data->OpenPrice
        , "HighestPrice", data->HighestPrice
        , "LowestPrice", data->LowestPrice
        , "Volume", data->Volume
        , "Turnover", data->Turnover
        , "OpenInterest", data->OpenInterest
        , "ClosePrice", data->ClosePrice
        , "SettlementPrice", data->SettlementPrice
        , "UpperLimitPrice", data->UpperLimitPrice
        , "LowerLimitPrice", data->LowerLimitPrice
        , "PreDelta", data->PreDelta
        , "CurrDelta", data->CurrDelta
        , "UpdateTime", data->UpdateTime//, (Py_ssize_t)sizeof(data->UpdateTime)
        , "UpdateMillisec", data->UpdateMillisec
        , "BidPrice1", data->BidPrice1
        , "BidVolume1", data->BidVolume1
        , "AskPrice1", data->AskPrice1
        , "AskVolume1", data->AskVolume1
        , "BidPrice2", data->BidPrice2
        , "BidVolume2", data->BidVolume2
        , "AskPrice2", data->AskPrice2
        , "AskVolume2", data->AskVolume2
        , "BidPrice3", data->BidPrice3
        , "BidVolume3", data->BidVolume3
        , "AskPrice3", data->AskPrice3
        , "AskVolume3", data->AskVolume3
        , "BidPrice4", data->BidPrice4
        , "BidVolume4", data->BidVolume4
        , "AskPrice4", data->AskPrice4
        , "AskVolume4", data->AskVolume4
        , "BidPrice5", data->BidPrice5
        , "BidVolume5", data->BidVolume5
        , "AskPrice5", data->AskPrice5
        , "AskVolume5", data->AskVolume5
        , "AveragePrice", data->AveragePrice
        , "ActionDay", data->ActionDay//, (Py_ssize_t)sizeof(data->ActionDay)
        , "BandingUpperPrice", data->BandingUpperPrice
        , "BandingLowerPrice", data->BandingLowerPrice
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaDepthMarketDataField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaDepthMarketDataField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDepthMarketDataField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDepthMarketDataField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDepthMarketDataField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDepthMarketDataField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后修改时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_UpdateTime(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UpdateTime, (Py_ssize_t)sizeof(data->UpdateTime));
    return PyBytes_FromString(data->UpdateTime);
}

static int PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_UpdateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDepthMarketDataField::UpdateTime)) {
        PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
    // memcpy(data->UpdateTime, buf, len);
    strncpy(data->UpdateTime, buf, sizeof(data->UpdateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_ActionDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDay, (Py_ssize_t)sizeof(data->ActionDay));
    return PyBytes_FromString(data->ActionDay);
}

static int PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_ActionDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDepthMarketDataField::ActionDay)) {
        PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    // memset(data->ActionDay, 0, sizeof(data->ActionDay));
    // memcpy(data->ActionDay, buf, len);
    strncpy(data->ActionDay, buf, sizeof(data->ActionDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaDepthMarketDataField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaDepthMarketDataFieldData>(self);
    CThostFtdcSyncDeltaDepthMarketDataField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaDepthMarketDataFieldType_members[] = {
    /// 最新价
    /// typedef double TThostFtdcPriceType
    {
        .name = "LastPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.LastPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最新价")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.PreSettlementPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次结算价")
    },
    /// 昨收盘
    /// typedef double TThostFtdcPriceType
    {
        .name = "PreClosePrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.PreClosePrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("昨收盘")
    },
    /// 昨持仓量
    /// typedef double TThostFtdcLargeVolumeType
    {
        .name = "PreOpenInterest",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.PreOpenInterest),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("昨持仓量")
    },
    /// 今开盘
    /// typedef double TThostFtdcPriceType
    {
        .name = "OpenPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.OpenPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("今开盘")
    },
    /// 最高价
    /// typedef double TThostFtdcPriceType
    {
        .name = "HighestPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.HighestPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最高价")
    },
    /// 最低价
    /// typedef double TThostFtdcPriceType
    {
        .name = "LowestPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.LowestPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最低价")
    },
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
    },
    /// 成交金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Turnover",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.Turnover),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("成交金额")
    },
    /// 持仓量
    /// typedef double TThostFtdcLargeVolumeType
    {
        .name = "OpenInterest",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.OpenInterest),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("持仓量")
    },
    /// 今收盘
    /// typedef double TThostFtdcPriceType
    {
        .name = "ClosePrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.ClosePrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("今收盘")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.SettlementPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("本次结算价")
    },
    /// 涨停板价
    /// typedef double TThostFtdcPriceType
    {
        .name = "UpperLimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.UpperLimitPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("涨停板价")
    },
    /// 跌停板价
    /// typedef double TThostFtdcPriceType
    {
        .name = "LowerLimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.LowerLimitPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("跌停板价")
    },
    /// 昨虚实度
    /// typedef double TThostFtdcRatioType
    {
        .name = "PreDelta",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.PreDelta),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("昨虚实度")
    },
    /// 今虚实度
    /// typedef double TThostFtdcRatioType
    {
        .name = "CurrDelta",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.CurrDelta),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("今虚实度")
    },
    /// 最后修改毫秒
    /// typedef int TThostFtdcMillisecType
    {
        .name = "UpdateMillisec",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.UpdateMillisec),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最后修改毫秒")
    },
    /// 申买价一
    /// typedef double TThostFtdcPriceType
    {
        .name = "BidPrice1",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BidPrice1),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买价一")
    },
    /// 申买量一
    /// typedef int TThostFtdcVolumeType
    {
        .name = "BidVolume1",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BidVolume1),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买量一")
    },
    /// 申卖价一
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice1",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.AskPrice1),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖价一")
    },
    /// 申卖量一
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AskVolume1",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.AskVolume1),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖量一")
    },
    /// 申买价二
    /// typedef double TThostFtdcPriceType
    {
        .name = "BidPrice2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BidPrice2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买价二")
    },
    /// 申买量二
    /// typedef int TThostFtdcVolumeType
    {
        .name = "BidVolume2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BidVolume2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买量二")
    },
    /// 申卖价二
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.AskPrice2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖价二")
    },
    /// 申卖量二
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AskVolume2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.AskVolume2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖量二")
    },
    /// 申买价三
    /// typedef double TThostFtdcPriceType
    {
        .name = "BidPrice3",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BidPrice3),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买价三")
    },
    /// 申买量三
    /// typedef int TThostFtdcVolumeType
    {
        .name = "BidVolume3",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BidVolume3),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买量三")
    },
    /// 申卖价三
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice3",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.AskPrice3),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖价三")
    },
    /// 申卖量三
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AskVolume3",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.AskVolume3),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖量三")
    },
    /// 申买价四
    /// typedef double TThostFtdcPriceType
    {
        .name = "BidPrice4",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BidPrice4),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买价四")
    },
    /// 申买量四
    /// typedef int TThostFtdcVolumeType
    {
        .name = "BidVolume4",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BidVolume4),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买量四")
    },
    /// 申卖价四
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice4",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.AskPrice4),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖价四")
    },
    /// 申卖量四
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AskVolume4",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.AskVolume4),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖量四")
    },
    /// 申买价五
    /// typedef double TThostFtdcPriceType
    {
        .name = "BidPrice5",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BidPrice5),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买价五")
    },
    /// 申买量五
    /// typedef int TThostFtdcVolumeType
    {
        .name = "BidVolume5",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BidVolume5),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买量五")
    },
    /// 申卖价五
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice5",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.AskPrice5),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖价五")
    },
    /// 申卖量五
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AskVolume5",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.AskVolume5),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖量五")
    },
    /// 当日均价
    /// typedef double TThostFtdcPriceType
    {
        .name = "AveragePrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.AveragePrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("当日均价")
    },
    /// 上带价
    /// typedef double TThostFtdcPriceType
    {
        .name = "BandingUpperPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BandingUpperPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上带价")
    },
    /// 下带价
    /// typedef double TThostFtdcPriceType
    {
        .name = "BandingLowerPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.BandingLowerPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("下带价")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaDepthMarketDataFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "UpdateTime",
    .get = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_UpdateTime,
    .set = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_UpdateTime,
    .doc = PyDoc_STR("最后修改时间"),
    },
    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDay",
    .get = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_ActionDay,
    .set = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_ActionDay,
    .doc = PyDoc_STR("业务日期"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaDepthMarketDataFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaDepthMarketDataField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平行情")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaDepthMarketDataFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaDepthMarketDataFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaDepthMarketDataFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaDepthMarketDataFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaDepthMarketDataFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平行情")},
    {Py_tp_members, PyCThostFtdcSyncDeltaDepthMarketDataFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaDepthMarketDataFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaDepthMarketDataFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaDepthMarketDataFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaDepthMarketDataFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaDepthMarketDataField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaDepthMarketDataFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaDepthMarketDataFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaDepthMarketDataFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaDepthMarketDataFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaDepthMarketDataFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaDepthMarketDataFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaDepthMarketDataFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaDepthMarketDataField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaDepthMarketDataField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}