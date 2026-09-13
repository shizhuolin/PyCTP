
#include "PyCThostFtdcDepthMarketDataField.h"

///深度行情

static int PyCThostFtdcDepthMarketDataFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "reserve1", "ExchangeID", "reserve2", "LastPrice", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "OpenPrice", "HighestPrice", "LowestPrice", "Volume", "Turnover", "OpenInterest", "ClosePrice", "SettlementPrice", "UpperLimitPrice", "LowerLimitPrice", "PreDelta", "CurrDelta", "UpdateTime", "UpdateMillisec", "BidPrice1", "BidVolume1", "AskPrice1", "AskVolume1", "BidPrice2", "BidVolume2", "AskPrice2", "AskVolume2", "BidPrice3", "BidVolume3", "AskPrice3", "AskVolume3", "BidPrice4", "BidVolume4", "AskPrice4", "AskVolume4", "BidPrice5", "BidVolume5", "AskPrice5", "AskVolume5", "AveragePrice", "ActionDay", "InstrumentID", "ExchangeInstID", "BandingUpperPrice", "BandingLowerPrice", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcDepthMarketDataField_TradingDay = NULL;
    Py_ssize_t CThostFtdcDepthMarketDataField_TradingDay_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcDepthMarketDataField_reserve1 = NULL;
    Py_ssize_t CThostFtdcDepthMarketDataField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcDepthMarketDataField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcDepthMarketDataField_ExchangeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcDepthMarketDataField_reserve2 = NULL;
    Py_ssize_t CThostFtdcDepthMarketDataField_reserve2_length = 0;

    /// 最新价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_LastPrice = 0.0;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_PreSettlementPrice = 0.0;

    /// 昨收盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_PreClosePrice = 0.0;

    /// 昨持仓量
    /// typedef double TThostFtdcLargeVolumeType
    double CThostFtdcDepthMarketDataField_PreOpenInterest = 0.0;

    /// 今开盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_OpenPrice = 0.0;

    /// 最高价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_HighestPrice = 0.0;

    /// 最低价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_LowestPrice = 0.0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcDepthMarketDataField_Volume = 0;

    /// 成交金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcDepthMarketDataField_Turnover = 0.0;

    /// 持仓量
    /// typedef double TThostFtdcLargeVolumeType
    double CThostFtdcDepthMarketDataField_OpenInterest = 0.0;

    /// 今收盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_ClosePrice = 0.0;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_SettlementPrice = 0.0;

    /// 涨停板价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_UpperLimitPrice = 0.0;

    /// 跌停板价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_LowerLimitPrice = 0.0;

    /// 昨虚实度
    /// typedef double TThostFtdcRatioType
    double CThostFtdcDepthMarketDataField_PreDelta = 0.0;

    /// 今虚实度
    /// typedef double TThostFtdcRatioType
    double CThostFtdcDepthMarketDataField_CurrDelta = 0.0;

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcDepthMarketDataField_UpdateTime = NULL;
    Py_ssize_t CThostFtdcDepthMarketDataField_UpdateTime_length = 0;

    /// 最后修改毫秒
    /// typedef int TThostFtdcMillisecType
    int CThostFtdcDepthMarketDataField_UpdateMillisec = 0;

    /// 申买价一
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_BidPrice1 = 0.0;

    /// 申买量一
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcDepthMarketDataField_BidVolume1 = 0;

    /// 申卖价一
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_AskPrice1 = 0.0;

    /// 申卖量一
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcDepthMarketDataField_AskVolume1 = 0;

    /// 申买价二
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_BidPrice2 = 0.0;

    /// 申买量二
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcDepthMarketDataField_BidVolume2 = 0;

    /// 申卖价二
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_AskPrice2 = 0.0;

    /// 申卖量二
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcDepthMarketDataField_AskVolume2 = 0;

    /// 申买价三
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_BidPrice3 = 0.0;

    /// 申买量三
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcDepthMarketDataField_BidVolume3 = 0;

    /// 申卖价三
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_AskPrice3 = 0.0;

    /// 申卖量三
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcDepthMarketDataField_AskVolume3 = 0;

    /// 申买价四
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_BidPrice4 = 0.0;

    /// 申买量四
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcDepthMarketDataField_BidVolume4 = 0;

    /// 申卖价四
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_AskPrice4 = 0.0;

    /// 申卖量四
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcDepthMarketDataField_AskVolume4 = 0;

    /// 申买价五
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_BidPrice5 = 0.0;

    /// 申买量五
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcDepthMarketDataField_BidVolume5 = 0;

    /// 申卖价五
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_AskPrice5 = 0.0;

    /// 申卖量五
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcDepthMarketDataField_AskVolume5 = 0;

    /// 当日均价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_AveragePrice = 0.0;

    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcDepthMarketDataField_ActionDay = NULL;
    Py_ssize_t CThostFtdcDepthMarketDataField_ActionDay_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcDepthMarketDataField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcDepthMarketDataField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcDepthMarketDataField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcDepthMarketDataField_ExchangeInstID_length = 0;

    /// 上带价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_BandingUpperPrice = 0.0;

    /// 下带价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcDepthMarketDataField_BandingLowerPrice = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddddddiddddddddy#idididididididididididy#y#y#dd", (char **)kwlist
        , &CThostFtdcDepthMarketDataField_TradingDay, &CThostFtdcDepthMarketDataField_TradingDay_length
        , &CThostFtdcDepthMarketDataField_reserve1, &CThostFtdcDepthMarketDataField_reserve1_length
        , &CThostFtdcDepthMarketDataField_ExchangeID, &CThostFtdcDepthMarketDataField_ExchangeID_length
        , &CThostFtdcDepthMarketDataField_reserve2, &CThostFtdcDepthMarketDataField_reserve2_length
        , &CThostFtdcDepthMarketDataField_LastPrice
        , &CThostFtdcDepthMarketDataField_PreSettlementPrice
        , &CThostFtdcDepthMarketDataField_PreClosePrice
        , &CThostFtdcDepthMarketDataField_PreOpenInterest
        , &CThostFtdcDepthMarketDataField_OpenPrice
        , &CThostFtdcDepthMarketDataField_HighestPrice
        , &CThostFtdcDepthMarketDataField_LowestPrice
        , &CThostFtdcDepthMarketDataField_Volume
        , &CThostFtdcDepthMarketDataField_Turnover
        , &CThostFtdcDepthMarketDataField_OpenInterest
        , &CThostFtdcDepthMarketDataField_ClosePrice
        , &CThostFtdcDepthMarketDataField_SettlementPrice
        , &CThostFtdcDepthMarketDataField_UpperLimitPrice
        , &CThostFtdcDepthMarketDataField_LowerLimitPrice
        , &CThostFtdcDepthMarketDataField_PreDelta
        , &CThostFtdcDepthMarketDataField_CurrDelta
        , &CThostFtdcDepthMarketDataField_UpdateTime, &CThostFtdcDepthMarketDataField_UpdateTime_length
        , &CThostFtdcDepthMarketDataField_UpdateMillisec
        , &CThostFtdcDepthMarketDataField_BidPrice1
        , &CThostFtdcDepthMarketDataField_BidVolume1
        , &CThostFtdcDepthMarketDataField_AskPrice1
        , &CThostFtdcDepthMarketDataField_AskVolume1
        , &CThostFtdcDepthMarketDataField_BidPrice2
        , &CThostFtdcDepthMarketDataField_BidVolume2
        , &CThostFtdcDepthMarketDataField_AskPrice2
        , &CThostFtdcDepthMarketDataField_AskVolume2
        , &CThostFtdcDepthMarketDataField_BidPrice3
        , &CThostFtdcDepthMarketDataField_BidVolume3
        , &CThostFtdcDepthMarketDataField_AskPrice3
        , &CThostFtdcDepthMarketDataField_AskVolume3
        , &CThostFtdcDepthMarketDataField_BidPrice4
        , &CThostFtdcDepthMarketDataField_BidVolume4
        , &CThostFtdcDepthMarketDataField_AskPrice4
        , &CThostFtdcDepthMarketDataField_AskVolume4
        , &CThostFtdcDepthMarketDataField_BidPrice5
        , &CThostFtdcDepthMarketDataField_BidVolume5
        , &CThostFtdcDepthMarketDataField_AskPrice5
        , &CThostFtdcDepthMarketDataField_AskVolume5
        , &CThostFtdcDepthMarketDataField_AveragePrice
        , &CThostFtdcDepthMarketDataField_ActionDay, &CThostFtdcDepthMarketDataField_ActionDay_length
        , &CThostFtdcDepthMarketDataField_InstrumentID, &CThostFtdcDepthMarketDataField_InstrumentID_length
        , &CThostFtdcDepthMarketDataField_ExchangeInstID, &CThostFtdcDepthMarketDataField_ExchangeInstID_length
        , &CThostFtdcDepthMarketDataField_BandingUpperPrice
        , &CThostFtdcDepthMarketDataField_BandingLowerPrice
    )) {
        return -1;
    }

    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcDepthMarketDataField_TradingDay != NULL ) {
        if(CThostFtdcDepthMarketDataField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcDepthMarketDataField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcDepthMarketDataField_TradingDay, CThostFtdcDepthMarketDataField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcDepthMarketDataField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcDepthMarketDataField_TradingDay = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcDepthMarketDataField_reserve1 != NULL ) {
        if(CThostFtdcDepthMarketDataField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcDepthMarketDataField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcDepthMarketDataField_reserve1, CThostFtdcDepthMarketDataField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcDepthMarketDataField_reserve1, sizeof(data->reserve1));
        CThostFtdcDepthMarketDataField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcDepthMarketDataField_ExchangeID != NULL ) {
        if(CThostFtdcDepthMarketDataField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcDepthMarketDataField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcDepthMarketDataField_ExchangeID, CThostFtdcDepthMarketDataField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcDepthMarketDataField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcDepthMarketDataField_ExchangeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcDepthMarketDataField_reserve2 != NULL ) {
        if(CThostFtdcDepthMarketDataField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcDepthMarketDataField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcDepthMarketDataField_reserve2, CThostFtdcDepthMarketDataField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcDepthMarketDataField_reserve2, sizeof(data->reserve2));
        CThostFtdcDepthMarketDataField_reserve2 = NULL;
    }

    /// 最新价
    /// typedef double TThostFtdcPriceType
    data->LastPrice = CThostFtdcDepthMarketDataField_LastPrice;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    data->PreSettlementPrice = CThostFtdcDepthMarketDataField_PreSettlementPrice;

    /// 昨收盘
    /// typedef double TThostFtdcPriceType
    data->PreClosePrice = CThostFtdcDepthMarketDataField_PreClosePrice;

    /// 昨持仓量
    /// typedef double TThostFtdcLargeVolumeType
    data->PreOpenInterest = CThostFtdcDepthMarketDataField_PreOpenInterest;

    /// 今开盘
    /// typedef double TThostFtdcPriceType
    data->OpenPrice = CThostFtdcDepthMarketDataField_OpenPrice;

    /// 最高价
    /// typedef double TThostFtdcPriceType
    data->HighestPrice = CThostFtdcDepthMarketDataField_HighestPrice;

    /// 最低价
    /// typedef double TThostFtdcPriceType
    data->LowestPrice = CThostFtdcDepthMarketDataField_LowestPrice;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcDepthMarketDataField_Volume;

    /// 成交金额
    /// typedef double TThostFtdcMoneyType
    data->Turnover = CThostFtdcDepthMarketDataField_Turnover;

    /// 持仓量
    /// typedef double TThostFtdcLargeVolumeType
    data->OpenInterest = CThostFtdcDepthMarketDataField_OpenInterest;

    /// 今收盘
    /// typedef double TThostFtdcPriceType
    data->ClosePrice = CThostFtdcDepthMarketDataField_ClosePrice;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    data->SettlementPrice = CThostFtdcDepthMarketDataField_SettlementPrice;

    /// 涨停板价
    /// typedef double TThostFtdcPriceType
    data->UpperLimitPrice = CThostFtdcDepthMarketDataField_UpperLimitPrice;

    /// 跌停板价
    /// typedef double TThostFtdcPriceType
    data->LowerLimitPrice = CThostFtdcDepthMarketDataField_LowerLimitPrice;

    /// 昨虚实度
    /// typedef double TThostFtdcRatioType
    data->PreDelta = CThostFtdcDepthMarketDataField_PreDelta;

    /// 今虚实度
    /// typedef double TThostFtdcRatioType
    data->CurrDelta = CThostFtdcDepthMarketDataField_CurrDelta;

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcDepthMarketDataField_UpdateTime != NULL ) {
        if(CThostFtdcDepthMarketDataField_UpdateTime_length >= (Py_ssize_t)sizeof(data->UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is 8)", CThostFtdcDepthMarketDataField_UpdateTime_length);
            return -1;
        }
        // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
        // memcpy(data->UpdateTime, CThostFtdcDepthMarketDataField_UpdateTime, CThostFtdcDepthMarketDataField_UpdateTime_length);
        strncpy(data->UpdateTime, CThostFtdcDepthMarketDataField_UpdateTime, sizeof(data->UpdateTime));
        CThostFtdcDepthMarketDataField_UpdateTime = NULL;
    }

    /// 最后修改毫秒
    /// typedef int TThostFtdcMillisecType
    data->UpdateMillisec = CThostFtdcDepthMarketDataField_UpdateMillisec;

    /// 申买价一
    /// typedef double TThostFtdcPriceType
    data->BidPrice1 = CThostFtdcDepthMarketDataField_BidPrice1;

    /// 申买量一
    /// typedef int TThostFtdcVolumeType
    data->BidVolume1 = CThostFtdcDepthMarketDataField_BidVolume1;

    /// 申卖价一
    /// typedef double TThostFtdcPriceType
    data->AskPrice1 = CThostFtdcDepthMarketDataField_AskPrice1;

    /// 申卖量一
    /// typedef int TThostFtdcVolumeType
    data->AskVolume1 = CThostFtdcDepthMarketDataField_AskVolume1;

    /// 申买价二
    /// typedef double TThostFtdcPriceType
    data->BidPrice2 = CThostFtdcDepthMarketDataField_BidPrice2;

    /// 申买量二
    /// typedef int TThostFtdcVolumeType
    data->BidVolume2 = CThostFtdcDepthMarketDataField_BidVolume2;

    /// 申卖价二
    /// typedef double TThostFtdcPriceType
    data->AskPrice2 = CThostFtdcDepthMarketDataField_AskPrice2;

    /// 申卖量二
    /// typedef int TThostFtdcVolumeType
    data->AskVolume2 = CThostFtdcDepthMarketDataField_AskVolume2;

    /// 申买价三
    /// typedef double TThostFtdcPriceType
    data->BidPrice3 = CThostFtdcDepthMarketDataField_BidPrice3;

    /// 申买量三
    /// typedef int TThostFtdcVolumeType
    data->BidVolume3 = CThostFtdcDepthMarketDataField_BidVolume3;

    /// 申卖价三
    /// typedef double TThostFtdcPriceType
    data->AskPrice3 = CThostFtdcDepthMarketDataField_AskPrice3;

    /// 申卖量三
    /// typedef int TThostFtdcVolumeType
    data->AskVolume3 = CThostFtdcDepthMarketDataField_AskVolume3;

    /// 申买价四
    /// typedef double TThostFtdcPriceType
    data->BidPrice4 = CThostFtdcDepthMarketDataField_BidPrice4;

    /// 申买量四
    /// typedef int TThostFtdcVolumeType
    data->BidVolume4 = CThostFtdcDepthMarketDataField_BidVolume4;

    /// 申卖价四
    /// typedef double TThostFtdcPriceType
    data->AskPrice4 = CThostFtdcDepthMarketDataField_AskPrice4;

    /// 申卖量四
    /// typedef int TThostFtdcVolumeType
    data->AskVolume4 = CThostFtdcDepthMarketDataField_AskVolume4;

    /// 申买价五
    /// typedef double TThostFtdcPriceType
    data->BidPrice5 = CThostFtdcDepthMarketDataField_BidPrice5;

    /// 申买量五
    /// typedef int TThostFtdcVolumeType
    data->BidVolume5 = CThostFtdcDepthMarketDataField_BidVolume5;

    /// 申卖价五
    /// typedef double TThostFtdcPriceType
    data->AskPrice5 = CThostFtdcDepthMarketDataField_AskPrice5;

    /// 申卖量五
    /// typedef int TThostFtdcVolumeType
    data->AskVolume5 = CThostFtdcDepthMarketDataField_AskVolume5;

    /// 当日均价
    /// typedef double TThostFtdcPriceType
    data->AveragePrice = CThostFtdcDepthMarketDataField_AveragePrice;

    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcDepthMarketDataField_ActionDay != NULL ) {
        if(CThostFtdcDepthMarketDataField_ActionDay_length >= (Py_ssize_t)sizeof(data->ActionDay)) {
            PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is 8)", CThostFtdcDepthMarketDataField_ActionDay_length);
            return -1;
        }
        // memset(data->ActionDay, 0, sizeof(data->ActionDay));
        // memcpy(data->ActionDay, CThostFtdcDepthMarketDataField_ActionDay, CThostFtdcDepthMarketDataField_ActionDay_length);
        strncpy(data->ActionDay, CThostFtdcDepthMarketDataField_ActionDay, sizeof(data->ActionDay));
        CThostFtdcDepthMarketDataField_ActionDay = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcDepthMarketDataField_InstrumentID != NULL ) {
        if(CThostFtdcDepthMarketDataField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcDepthMarketDataField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcDepthMarketDataField_InstrumentID, CThostFtdcDepthMarketDataField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcDepthMarketDataField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcDepthMarketDataField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcDepthMarketDataField_ExchangeInstID != NULL ) {
        if(CThostFtdcDepthMarketDataField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcDepthMarketDataField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcDepthMarketDataField_ExchangeInstID, CThostFtdcDepthMarketDataField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcDepthMarketDataField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcDepthMarketDataField_ExchangeInstID = NULL;
    }

    /// 上带价
    /// typedef double TThostFtdcPriceType
    data->BandingUpperPrice = CThostFtdcDepthMarketDataField_BandingUpperPrice;

    /// 下带价
    /// typedef double TThostFtdcPriceType
    data->BandingLowerPrice = CThostFtdcDepthMarketDataField_BandingLowerPrice;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcDepthMarketDataFieldType_repr(PyObject *self) {

    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:y,s:y,s:y,s:d,s:d}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
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
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "BandingUpperPrice", data->BandingUpperPrice
        , "BandingLowerPrice", data->BandingLowerPrice
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDepthMarketDataField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDepthMarketDataField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcDepthMarketDataFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcDepthMarketDataFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepthMarketDataField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcDepthMarketDataFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcDepthMarketDataFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepthMarketDataField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcDepthMarketDataFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcDepthMarketDataFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepthMarketDataField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcDepthMarketDataFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcDepthMarketDataFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepthMarketDataField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后修改时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcDepthMarketDataFieldType_get_UpdateTime(PyObject *self, void *closure) {
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UpdateTime, (Py_ssize_t)sizeof(data->UpdateTime));
    return PyBytes_FromString(data->UpdateTime);
}

static int PyCThostFtdcDepthMarketDataFieldType_set_UpdateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepthMarketDataField::UpdateTime)) {
        PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
    // memcpy(data->UpdateTime, buf, len);
    strncpy(data->UpdateTime, buf, sizeof(data->UpdateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcDepthMarketDataFieldType_get_ActionDay(PyObject *self, void *closure) {
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDay, (Py_ssize_t)sizeof(data->ActionDay));
    return PyBytes_FromString(data->ActionDay);
}

static int PyCThostFtdcDepthMarketDataFieldType_set_ActionDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepthMarketDataField::ActionDay)) {
        PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // memset(data->ActionDay, 0, sizeof(data->ActionDay));
    // memcpy(data->ActionDay, buf, len);
    strncpy(data->ActionDay, buf, sizeof(data->ActionDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcDepthMarketDataFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcDepthMarketDataFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepthMarketDataField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcDepthMarketDataFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcDepthMarketDataFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepthMarketDataField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(self);
    CThostFtdcDepthMarketDataField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcDepthMarketDataFieldType_members[] = {
    /// 最新价
    /// typedef double TThostFtdcPriceType
    {
        .name = "LastPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.LastPrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.PreSettlementPrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.PreClosePrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.PreOpenInterest),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.OpenPrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.HighestPrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.LowestPrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.Turnover),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.OpenInterest),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.ClosePrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.SettlementPrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.UpperLimitPrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.LowerLimitPrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.PreDelta),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.CurrDelta),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.UpdateMillisec),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BidPrice1),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BidVolume1),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.AskPrice1),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.AskVolume1),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BidPrice2),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BidVolume2),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.AskPrice2),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.AskVolume2),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BidPrice3),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BidVolume3),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.AskPrice3),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.AskVolume3),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BidPrice4),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BidVolume4),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.AskPrice4),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.AskVolume4),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BidPrice5),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BidVolume5),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.AskPrice5),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.AskVolume5),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.AveragePrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BandingUpperPrice),
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
        .offset = offsetof(PyCThostFtdcDepthMarketDataFieldData, data.BandingLowerPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("下带价")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcDepthMarketDataFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcDepthMarketDataFieldType_get_TradingDay,
    .set = PyCThostFtdcDepthMarketDataFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcDepthMarketDataFieldType_get_reserve1,
    .set = PyCThostFtdcDepthMarketDataFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcDepthMarketDataFieldType_get_ExchangeID,
    .set = PyCThostFtdcDepthMarketDataFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcDepthMarketDataFieldType_get_reserve2,
    .set = PyCThostFtdcDepthMarketDataFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "UpdateTime",
    .get = PyCThostFtdcDepthMarketDataFieldType_get_UpdateTime,
    .set = PyCThostFtdcDepthMarketDataFieldType_set_UpdateTime,
    .doc = PyDoc_STR("最后修改时间"),
    },
    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDay",
    .get = PyCThostFtdcDepthMarketDataFieldType_get_ActionDay,
    .set = PyCThostFtdcDepthMarketDataFieldType_set_ActionDay,
    .doc = PyDoc_STR("业务日期"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcDepthMarketDataFieldType_get_InstrumentID,
    .set = PyCThostFtdcDepthMarketDataFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcDepthMarketDataFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcDepthMarketDataFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcDepthMarketDataFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcDepthMarketDataField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("深度行情")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcDepthMarketDataFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcDepthMarketDataFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcDepthMarketDataFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcDepthMarketDataFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcDepthMarketDataFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcDepthMarketDataFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("深度行情")},
    {Py_tp_members, PyCThostFtdcDepthMarketDataFieldType_members},
    {Py_tp_getset, PyCThostFtdcDepthMarketDataFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcDepthMarketDataFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcDepthMarketDataFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcDepthMarketDataFieldType_spec = {
    .name = "PyCTP.CThostFtdcDepthMarketDataField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcDepthMarketDataFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcDepthMarketDataFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcDepthMarketDataFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcDepthMarketDataFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcDepthMarketDataFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcDepthMarketDataFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcDepthMarketDataFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcDepthMarketDataFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcDepthMarketDataField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDepthMarketDataField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}