
#include "PyCThostFtdcMarketDataField.h"

///市场行情

static int PyCThostFtdcMarketDataFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "reserve1", "ExchangeID", "reserve2", "LastPrice", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "OpenPrice", "HighestPrice", "LowestPrice", "Volume", "Turnover", "OpenInterest", "ClosePrice", "SettlementPrice", "UpperLimitPrice", "LowerLimitPrice", "PreDelta", "CurrDelta", "UpdateTime", "UpdateMillisec", "ActionDay", "InstrumentID", "ExchangeInstID", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcMarketDataField_TradingDay = NULL;
    Py_ssize_t CThostFtdcMarketDataField_TradingDay_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcMarketDataField_reserve1 = NULL;
    Py_ssize_t CThostFtdcMarketDataField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcMarketDataField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcMarketDataField_ExchangeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcMarketDataField_reserve2 = NULL;
    Py_ssize_t CThostFtdcMarketDataField_reserve2_length = 0;

    /// 最新价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataField_LastPrice = 0.0;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataField_PreSettlementPrice = 0.0;

    /// 昨收盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataField_PreClosePrice = 0.0;

    /// 昨持仓量
    /// typedef double TThostFtdcLargeVolumeType
    double CThostFtdcMarketDataField_PreOpenInterest = 0.0;

    /// 今开盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataField_OpenPrice = 0.0;

    /// 最高价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataField_HighestPrice = 0.0;

    /// 最低价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataField_LowestPrice = 0.0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataField_Volume = 0;

    /// 成交金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcMarketDataField_Turnover = 0.0;

    /// 持仓量
    /// typedef double TThostFtdcLargeVolumeType
    double CThostFtdcMarketDataField_OpenInterest = 0.0;

    /// 今收盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataField_ClosePrice = 0.0;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataField_SettlementPrice = 0.0;

    /// 涨停板价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataField_UpperLimitPrice = 0.0;

    /// 跌停板价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataField_LowerLimitPrice = 0.0;

    /// 昨虚实度
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMarketDataField_PreDelta = 0.0;

    /// 今虚实度
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMarketDataField_CurrDelta = 0.0;

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcMarketDataField_UpdateTime = NULL;
    Py_ssize_t CThostFtdcMarketDataField_UpdateTime_length = 0;

    /// 最后修改毫秒
    /// typedef int TThostFtdcMillisecType
    int CThostFtdcMarketDataField_UpdateMillisec = 0;

    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcMarketDataField_ActionDay = NULL;
    Py_ssize_t CThostFtdcMarketDataField_ActionDay_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcMarketDataField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcMarketDataField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcMarketDataField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcMarketDataField_ExchangeInstID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddddddiddddddddy#iy#y#y#", (char **)kwlist
        , &CThostFtdcMarketDataField_TradingDay, &CThostFtdcMarketDataField_TradingDay_length
        , &CThostFtdcMarketDataField_reserve1, &CThostFtdcMarketDataField_reserve1_length
        , &CThostFtdcMarketDataField_ExchangeID, &CThostFtdcMarketDataField_ExchangeID_length
        , &CThostFtdcMarketDataField_reserve2, &CThostFtdcMarketDataField_reserve2_length
        , &CThostFtdcMarketDataField_LastPrice
        , &CThostFtdcMarketDataField_PreSettlementPrice
        , &CThostFtdcMarketDataField_PreClosePrice
        , &CThostFtdcMarketDataField_PreOpenInterest
        , &CThostFtdcMarketDataField_OpenPrice
        , &CThostFtdcMarketDataField_HighestPrice
        , &CThostFtdcMarketDataField_LowestPrice
        , &CThostFtdcMarketDataField_Volume
        , &CThostFtdcMarketDataField_Turnover
        , &CThostFtdcMarketDataField_OpenInterest
        , &CThostFtdcMarketDataField_ClosePrice
        , &CThostFtdcMarketDataField_SettlementPrice
        , &CThostFtdcMarketDataField_UpperLimitPrice
        , &CThostFtdcMarketDataField_LowerLimitPrice
        , &CThostFtdcMarketDataField_PreDelta
        , &CThostFtdcMarketDataField_CurrDelta
        , &CThostFtdcMarketDataField_UpdateTime, &CThostFtdcMarketDataField_UpdateTime_length
        , &CThostFtdcMarketDataField_UpdateMillisec
        , &CThostFtdcMarketDataField_ActionDay, &CThostFtdcMarketDataField_ActionDay_length
        , &CThostFtdcMarketDataField_InstrumentID, &CThostFtdcMarketDataField_InstrumentID_length
        , &CThostFtdcMarketDataField_ExchangeInstID, &CThostFtdcMarketDataField_ExchangeInstID_length
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcMarketDataField_TradingDay != NULL ) {
        if(CThostFtdcMarketDataField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcMarketDataField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcMarketDataField_TradingDay, CThostFtdcMarketDataField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcMarketDataField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcMarketDataField_TradingDay = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcMarketDataField_reserve1 != NULL ) {
        if(CThostFtdcMarketDataField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcMarketDataField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcMarketDataField_reserve1, CThostFtdcMarketDataField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcMarketDataField_reserve1, sizeof(data->reserve1));
        CThostFtdcMarketDataField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcMarketDataField_ExchangeID != NULL ) {
        if(CThostFtdcMarketDataField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcMarketDataField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcMarketDataField_ExchangeID, CThostFtdcMarketDataField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcMarketDataField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcMarketDataField_ExchangeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcMarketDataField_reserve2 != NULL ) {
        if(CThostFtdcMarketDataField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcMarketDataField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcMarketDataField_reserve2, CThostFtdcMarketDataField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcMarketDataField_reserve2, sizeof(data->reserve2));
        CThostFtdcMarketDataField_reserve2 = NULL;
    }

    /// 最新价
    /// typedef double TThostFtdcPriceType
    data->LastPrice = CThostFtdcMarketDataField_LastPrice;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    data->PreSettlementPrice = CThostFtdcMarketDataField_PreSettlementPrice;

    /// 昨收盘
    /// typedef double TThostFtdcPriceType
    data->PreClosePrice = CThostFtdcMarketDataField_PreClosePrice;

    /// 昨持仓量
    /// typedef double TThostFtdcLargeVolumeType
    data->PreOpenInterest = CThostFtdcMarketDataField_PreOpenInterest;

    /// 今开盘
    /// typedef double TThostFtdcPriceType
    data->OpenPrice = CThostFtdcMarketDataField_OpenPrice;

    /// 最高价
    /// typedef double TThostFtdcPriceType
    data->HighestPrice = CThostFtdcMarketDataField_HighestPrice;

    /// 最低价
    /// typedef double TThostFtdcPriceType
    data->LowestPrice = CThostFtdcMarketDataField_LowestPrice;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcMarketDataField_Volume;

    /// 成交金额
    /// typedef double TThostFtdcMoneyType
    data->Turnover = CThostFtdcMarketDataField_Turnover;

    /// 持仓量
    /// typedef double TThostFtdcLargeVolumeType
    data->OpenInterest = CThostFtdcMarketDataField_OpenInterest;

    /// 今收盘
    /// typedef double TThostFtdcPriceType
    data->ClosePrice = CThostFtdcMarketDataField_ClosePrice;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    data->SettlementPrice = CThostFtdcMarketDataField_SettlementPrice;

    /// 涨停板价
    /// typedef double TThostFtdcPriceType
    data->UpperLimitPrice = CThostFtdcMarketDataField_UpperLimitPrice;

    /// 跌停板价
    /// typedef double TThostFtdcPriceType
    data->LowerLimitPrice = CThostFtdcMarketDataField_LowerLimitPrice;

    /// 昨虚实度
    /// typedef double TThostFtdcRatioType
    data->PreDelta = CThostFtdcMarketDataField_PreDelta;

    /// 今虚实度
    /// typedef double TThostFtdcRatioType
    data->CurrDelta = CThostFtdcMarketDataField_CurrDelta;

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcMarketDataField_UpdateTime != NULL ) {
        if(CThostFtdcMarketDataField_UpdateTime_length >= (Py_ssize_t)sizeof(data->UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is 8)", CThostFtdcMarketDataField_UpdateTime_length);
            return -1;
        }
        // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
        // memcpy(data->UpdateTime, CThostFtdcMarketDataField_UpdateTime, CThostFtdcMarketDataField_UpdateTime_length);
        strncpy(data->UpdateTime, CThostFtdcMarketDataField_UpdateTime, sizeof(data->UpdateTime));
        CThostFtdcMarketDataField_UpdateTime = NULL;
    }

    /// 最后修改毫秒
    /// typedef int TThostFtdcMillisecType
    data->UpdateMillisec = CThostFtdcMarketDataField_UpdateMillisec;

    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcMarketDataField_ActionDay != NULL ) {
        if(CThostFtdcMarketDataField_ActionDay_length >= (Py_ssize_t)sizeof(data->ActionDay)) {
            PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is 8)", CThostFtdcMarketDataField_ActionDay_length);
            return -1;
        }
        // memset(data->ActionDay, 0, sizeof(data->ActionDay));
        // memcpy(data->ActionDay, CThostFtdcMarketDataField_ActionDay, CThostFtdcMarketDataField_ActionDay_length);
        strncpy(data->ActionDay, CThostFtdcMarketDataField_ActionDay, sizeof(data->ActionDay));
        CThostFtdcMarketDataField_ActionDay = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcMarketDataField_InstrumentID != NULL ) {
        if(CThostFtdcMarketDataField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcMarketDataField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcMarketDataField_InstrumentID, CThostFtdcMarketDataField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcMarketDataField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcMarketDataField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcMarketDataField_ExchangeInstID != NULL ) {
        if(CThostFtdcMarketDataField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcMarketDataField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcMarketDataField_ExchangeInstID, CThostFtdcMarketDataField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcMarketDataField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcMarketDataField_ExchangeInstID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataFieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:y,s:y,s:y}"
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
        , "ActionDay", data->ActionDay//, (Py_ssize_t)sizeof(data->ActionDay)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcMarketDataFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcMarketDataFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcMarketDataFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcMarketDataFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcMarketDataFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcMarketDataFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcMarketDataFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcMarketDataFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后修改时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcMarketDataFieldType_get_UpdateTime(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UpdateTime, (Py_ssize_t)sizeof(data->UpdateTime));
    return PyBytes_FromString(data->UpdateTime);
}

static int PyCThostFtdcMarketDataFieldType_set_UpdateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataField::UpdateTime)) {
        PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
    // memcpy(data->UpdateTime, buf, len);
    strncpy(data->UpdateTime, buf, sizeof(data->UpdateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcMarketDataFieldType_get_ActionDay(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDay, (Py_ssize_t)sizeof(data->ActionDay));
    return PyBytes_FromString(data->ActionDay);
}

static int PyCThostFtdcMarketDataFieldType_set_ActionDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataField::ActionDay)) {
        PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // memset(data->ActionDay, 0, sizeof(data->ActionDay));
    // memcpy(data->ActionDay, buf, len);
    strncpy(data->ActionDay, buf, sizeof(data->ActionDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcMarketDataFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcMarketDataFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcMarketDataFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcMarketDataFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataFieldData>(self);
    CThostFtdcMarketDataField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcMarketDataFieldType_members[] = {
    /// 最新价
    /// typedef double TThostFtdcPriceType
    {
        .name = "LastPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.LastPrice),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.PreSettlementPrice),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.PreClosePrice),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.PreOpenInterest),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.OpenPrice),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.HighestPrice),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.LowestPrice),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.Turnover),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.OpenInterest),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.ClosePrice),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.SettlementPrice),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.UpperLimitPrice),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.LowerLimitPrice),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.PreDelta),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.CurrDelta),
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
        .offset = offsetof(PyCThostFtdcMarketDataFieldData, data.UpdateMillisec),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最后修改毫秒")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcMarketDataFieldType_get_TradingDay,
    .set = PyCThostFtdcMarketDataFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcMarketDataFieldType_get_reserve1,
    .set = PyCThostFtdcMarketDataFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcMarketDataFieldType_get_ExchangeID,
    .set = PyCThostFtdcMarketDataFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcMarketDataFieldType_get_reserve2,
    .set = PyCThostFtdcMarketDataFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "UpdateTime",
    .get = PyCThostFtdcMarketDataFieldType_get_UpdateTime,
    .set = PyCThostFtdcMarketDataFieldType_set_UpdateTime,
    .doc = PyDoc_STR("最后修改时间"),
    },
    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDay",
    .get = PyCThostFtdcMarketDataFieldType_get_ActionDay,
    .set = PyCThostFtdcMarketDataFieldType_set_ActionDay,
    .doc = PyDoc_STR("业务日期"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcMarketDataFieldType_get_InstrumentID,
    .set = PyCThostFtdcMarketDataFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcMarketDataFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcMarketDataFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("市场行情")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("市场行情")},
    {Py_tp_members, PyCThostFtdcMarketDataFieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataFieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}