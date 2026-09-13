
#include "PyCThostFtdcSyncDeltaInvstPosCombDtlField.h"

///风险结算追平组合持仓明细

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "OpenDate", "ExchangeID", "SettlementID", "BrokerID", "InvestorID", "ComTradeID", "TradeID", "InstrumentID", "HedgeFlag", "Direction", "TotalAmt", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LegID", "LegMultiple", "TradeGroupID", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaInvstPosCombDtlField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosCombDtlField_TradingDay_length = 0;

    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaInvstPosCombDtlField_OpenDate = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosCombDtlField_OpenDate_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaInvstPosCombDtlField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosCombDtlField_ExchangeID_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcSyncDeltaInvstPosCombDtlField_SettlementID = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaInvstPosCombDtlField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosCombDtlField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaInvstPosCombDtlField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosCombDtlField_InvestorID_length = 0;

    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcSyncDeltaInvstPosCombDtlField_ComTradeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosCombDtlField_ComTradeID_length = 0;

    /// 撮合编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcSyncDeltaInvstPosCombDtlField_TradeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosCombDtlField_TradeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaInvstPosCombDtlField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstPosCombDtlField_InstrumentID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcSyncDeltaInvstPosCombDtlField_HedgeFlag = 0;

    /// 买卖
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcSyncDeltaInvstPosCombDtlField_Direction = 0;

    /// 持仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcSyncDeltaInvstPosCombDtlField_TotalAmt = 0;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstPosCombDtlField_Margin = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstPosCombDtlField_ExchMargin = 0.0;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstPosCombDtlField_MarginRateByMoney = 0.0;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstPosCombDtlField_MarginRateByVolume = 0.0;

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    int CThostFtdcSyncDeltaInvstPosCombDtlField_LegID = 0;

    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    int CThostFtdcSyncDeltaInvstPosCombDtlField_LegMultiple = 0;

    /// 成交组号
    /// typedef int TThostFtdcTradeGroupIDType
    int CThostFtdcSyncDeltaInvstPosCombDtlField_TradeGroupID = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaInvstPosCombDtlField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaInvstPosCombDtlField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#y#y#y#y#cciddddiiici", (char **)kwlist
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_TradingDay, &CThostFtdcSyncDeltaInvstPosCombDtlField_TradingDay_length
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_OpenDate, &CThostFtdcSyncDeltaInvstPosCombDtlField_OpenDate_length
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_ExchangeID, &CThostFtdcSyncDeltaInvstPosCombDtlField_ExchangeID_length
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_SettlementID
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_BrokerID, &CThostFtdcSyncDeltaInvstPosCombDtlField_BrokerID_length
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_InvestorID, &CThostFtdcSyncDeltaInvstPosCombDtlField_InvestorID_length
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_ComTradeID, &CThostFtdcSyncDeltaInvstPosCombDtlField_ComTradeID_length
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_TradeID, &CThostFtdcSyncDeltaInvstPosCombDtlField_TradeID_length
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_InstrumentID, &CThostFtdcSyncDeltaInvstPosCombDtlField_InstrumentID_length
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_HedgeFlag
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_Direction
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_TotalAmt
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_Margin
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_ExchMargin
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_MarginRateByMoney
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_MarginRateByVolume
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_LegID
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_LegMultiple
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_TradeGroupID
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_ActionDirection
        , &CThostFtdcSyncDeltaInvstPosCombDtlField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaInvstPosCombDtlField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosCombDtlField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaInvstPosCombDtlField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaInvstPosCombDtlField_TradingDay, CThostFtdcSyncDeltaInvstPosCombDtlField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaInvstPosCombDtlField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaInvstPosCombDtlField_TradingDay = NULL;
    }

    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaInvstPosCombDtlField_OpenDate != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosCombDtlField_OpenDate_length >= (Py_ssize_t)sizeof(data->OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaInvstPosCombDtlField_OpenDate_length);
            return -1;
        }
        // memset(data->OpenDate, 0, sizeof(data->OpenDate));
        // memcpy(data->OpenDate, CThostFtdcSyncDeltaInvstPosCombDtlField_OpenDate, CThostFtdcSyncDeltaInvstPosCombDtlField_OpenDate_length);
        strncpy(data->OpenDate, CThostFtdcSyncDeltaInvstPosCombDtlField_OpenDate, sizeof(data->OpenDate));
        CThostFtdcSyncDeltaInvstPosCombDtlField_OpenDate = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaInvstPosCombDtlField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosCombDtlField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaInvstPosCombDtlField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaInvstPosCombDtlField_ExchangeID, CThostFtdcSyncDeltaInvstPosCombDtlField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaInvstPosCombDtlField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaInvstPosCombDtlField_ExchangeID = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcSyncDeltaInvstPosCombDtlField_SettlementID;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaInvstPosCombDtlField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosCombDtlField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaInvstPosCombDtlField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaInvstPosCombDtlField_BrokerID, CThostFtdcSyncDeltaInvstPosCombDtlField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaInvstPosCombDtlField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaInvstPosCombDtlField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaInvstPosCombDtlField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosCombDtlField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaInvstPosCombDtlField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaInvstPosCombDtlField_InvestorID, CThostFtdcSyncDeltaInvstPosCombDtlField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaInvstPosCombDtlField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaInvstPosCombDtlField_InvestorID = NULL;
    }

    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcSyncDeltaInvstPosCombDtlField_ComTradeID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosCombDtlField_ComTradeID_length >= (Py_ssize_t)sizeof(data->ComTradeID)) {
            PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is 20)", CThostFtdcSyncDeltaInvstPosCombDtlField_ComTradeID_length);
            return -1;
        }
        // memset(data->ComTradeID, 0, sizeof(data->ComTradeID));
        // memcpy(data->ComTradeID, CThostFtdcSyncDeltaInvstPosCombDtlField_ComTradeID, CThostFtdcSyncDeltaInvstPosCombDtlField_ComTradeID_length);
        strncpy(data->ComTradeID, CThostFtdcSyncDeltaInvstPosCombDtlField_ComTradeID, sizeof(data->ComTradeID));
        CThostFtdcSyncDeltaInvstPosCombDtlField_ComTradeID = NULL;
    }

    /// 撮合编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcSyncDeltaInvstPosCombDtlField_TradeID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosCombDtlField_TradeID_length >= (Py_ssize_t)sizeof(data->TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is 20)", CThostFtdcSyncDeltaInvstPosCombDtlField_TradeID_length);
            return -1;
        }
        // memset(data->TradeID, 0, sizeof(data->TradeID));
        // memcpy(data->TradeID, CThostFtdcSyncDeltaInvstPosCombDtlField_TradeID, CThostFtdcSyncDeltaInvstPosCombDtlField_TradeID_length);
        strncpy(data->TradeID, CThostFtdcSyncDeltaInvstPosCombDtlField_TradeID, sizeof(data->TradeID));
        CThostFtdcSyncDeltaInvstPosCombDtlField_TradeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaInvstPosCombDtlField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaInvstPosCombDtlField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaInvstPosCombDtlField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaInvstPosCombDtlField_InstrumentID, CThostFtdcSyncDeltaInvstPosCombDtlField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaInvstPosCombDtlField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaInvstPosCombDtlField_InstrumentID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcSyncDeltaInvstPosCombDtlField_HedgeFlag;

    /// 买卖
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcSyncDeltaInvstPosCombDtlField_Direction;

    /// 持仓量
    /// typedef int TThostFtdcVolumeType
    data->TotalAmt = CThostFtdcSyncDeltaInvstPosCombDtlField_TotalAmt;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    data->Margin = CThostFtdcSyncDeltaInvstPosCombDtlField_Margin;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMargin = CThostFtdcSyncDeltaInvstPosCombDtlField_ExchMargin;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    data->MarginRateByMoney = CThostFtdcSyncDeltaInvstPosCombDtlField_MarginRateByMoney;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    data->MarginRateByVolume = CThostFtdcSyncDeltaInvstPosCombDtlField_MarginRateByVolume;

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    data->LegID = CThostFtdcSyncDeltaInvstPosCombDtlField_LegID;

    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    data->LegMultiple = CThostFtdcSyncDeltaInvstPosCombDtlField_LegMultiple;

    /// 成交组号
    /// typedef int TThostFtdcTradeGroupIDType
    data->TradeGroupID = CThostFtdcSyncDeltaInvstPosCombDtlField_TradeGroupID;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaInvstPosCombDtlField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaInvstPosCombDtlField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:d,s:d,s:d,s:d,s:i,s:i,s:i,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "OpenDate", data->OpenDate//, (Py_ssize_t)sizeof(data->OpenDate)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "SettlementID", data->SettlementID
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ComTradeID", data->ComTradeID//, (Py_ssize_t)sizeof(data->ComTradeID)
        , "TradeID", data->TradeID//, (Py_ssize_t)sizeof(data->TradeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "HedgeFlag", data->HedgeFlag
        , "Direction", data->Direction
        , "TotalAmt", data->TotalAmt
        , "Margin", data->Margin
        , "ExchMargin", data->ExchMargin
        , "MarginRateByMoney", data->MarginRateByMoney
        , "MarginRateByVolume", data->MarginRateByVolume
        , "LegID", data->LegID
        , "LegMultiple", data->LegMultiple
        , "TradeGroupID", data->TradeGroupID
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstPosCombDtlField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstPosCombDtlField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosCombDtlField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开仓日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_OpenDate(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OpenDate, (Py_ssize_t)sizeof(data->OpenDate));
    return PyBytes_FromString(data->OpenDate);
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_OpenDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosCombDtlField::OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // memset(data->OpenDate, 0, sizeof(data->OpenDate));
    // memcpy(data->OpenDate, buf, len);
    strncpy(data->OpenDate, buf, sizeof(data->OpenDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosCombDtlField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosCombDtlField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosCombDtlField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_ComTradeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ComTradeID, (Py_ssize_t)sizeof(data->ComTradeID));
    return PyBytes_FromString(data->ComTradeID);
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_ComTradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ComTradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosCombDtlField::ComTradeID)) {
        PyErr_SetString(PyExc_ValueError, "ComTradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // memset(data->ComTradeID, 0, sizeof(data->ComTradeID));
    // memcpy(data->ComTradeID, buf, len);
    strncpy(data->ComTradeID, buf, sizeof(data->ComTradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撮合编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_TradeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeID, (Py_ssize_t)sizeof(data->TradeID));
    return PyBytes_FromString(data->TradeID);
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_TradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosCombDtlField::TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // memset(data->TradeID, 0, sizeof(data->TradeID));
    // memcpy(data->TradeID, buf, len);
    strncpy(data->TradeID, buf, sizeof(data->TradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosCombDtlField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosCombDtlField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosCombDtlField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstPosCombDtlField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData>(self);
    CThostFtdcSyncDeltaInvstPosCombDtlField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_members[] = {
    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    {
        .name = "SettlementID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    /// 持仓量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "TotalAmt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData, data.TotalAmt),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("持仓量")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData, data.Margin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData, data.ExchMargin),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData, data.MarginRateByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData, data.MarginRateByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保证金率(按手数)")
    },
    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    {
        .name = "LegID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData, data.LegID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单腿编号")
    },
    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    {
        .name = "LegMultiple",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData, data.LegMultiple),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单腿乘数")
    },
    /// 成交组号
    /// typedef int TThostFtdcTradeGroupIDType
    {
        .name = "TradeGroupID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData, data.TradeGroupID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("成交组号")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "OpenDate",
    .get = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_OpenDate,
    .set = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_OpenDate,
    .doc = PyDoc_STR("开仓日期"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "ComTradeID",
    .get = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_ComTradeID,
    .set = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_ComTradeID,
    .doc = PyDoc_STR("组合编号"),
    },
    /// 撮合编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "TradeID",
    .get = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_TradeID,
    .set = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_TradeID,
    .doc = PyDoc_STR("撮合编号"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_HedgeFlag,
    .set = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 买卖
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_Direction,
    .set = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_Direction,
    .doc = PyDoc_STR("买卖"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaInvstPosCombDtlField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平组合持仓明细")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平组合持仓明细")},
    {Py_tp_members, PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaInvstPosCombDtlField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstPosCombDtlField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstPosCombDtlField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}