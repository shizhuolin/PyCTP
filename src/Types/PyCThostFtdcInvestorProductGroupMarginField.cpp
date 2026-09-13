
#include "PyCThostFtdcInvestorProductGroupMarginField.h"

///投资者品种/跨品种保证金

static int PyCThostFtdcInvestorProductGroupMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "BrokerID", "InvestorID", "TradingDay", "SettlementID", "FrozenMargin", "LongFrozenMargin", "ShortFrozenMargin", "UseMargin", "LongUseMargin", "ShortUseMargin", "ExchMargin", "LongExchMargin", "ShortExchMargin", "CloseProfit", "FrozenCommission", "Commission", "FrozenCash", "CashIn", "PositionProfit", "OffsetAmount", "LongOffsetAmount", "ShortOffsetAmount", "ExchOffsetAmount", "LongExchOffsetAmount", "ShortExchOffsetAmount", "HedgeFlag", "ExchangeID", "InvestUnitID", "ProductGroupID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInvestorProductGroupMarginField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInvestorProductGroupMarginField_reserve1_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorProductGroupMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorProductGroupMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorProductGroupMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorProductGroupMarginField_InvestorID_length = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInvestorProductGroupMarginField_TradingDay = NULL;
    Py_ssize_t CThostFtdcInvestorProductGroupMarginField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcInvestorProductGroupMarginField_SettlementID = 0;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_FrozenMargin = 0.0;

    /// 多头冻结的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_LongFrozenMargin = 0.0;

    /// 空头冻结的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_ShortFrozenMargin = 0.0;

    /// 占用的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_UseMargin = 0.0;

    /// 多头保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_LongUseMargin = 0.0;

    /// 空头保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_ShortUseMargin = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_ExchMargin = 0.0;

    /// 交易所多头保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_LongExchMargin = 0.0;

    /// 交易所空头保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_ShortExchMargin = 0.0;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_CloseProfit = 0.0;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_FrozenCommission = 0.0;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_Commission = 0.0;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_FrozenCash = 0.0;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_CashIn = 0.0;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_PositionProfit = 0.0;

    /// 折抵总金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_OffsetAmount = 0.0;

    /// 多头折抵总金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_LongOffsetAmount = 0.0;

    /// 空头折抵总金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_ShortOffsetAmount = 0.0;

    /// 交易所折抵总金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_ExchOffsetAmount = 0.0;

    /// 交易所多头折抵总金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_LongExchOffsetAmount = 0.0;

    /// 交易所空头折抵总金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProductGroupMarginField_ShortExchOffsetAmount = 0.0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInvestorProductGroupMarginField_HedgeFlag = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorProductGroupMarginField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorProductGroupMarginField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInvestorProductGroupMarginField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInvestorProductGroupMarginField_InvestUnitID_length = 0;

    /// 品种/跨品种标示
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInvestorProductGroupMarginField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcInvestorProductGroupMarginField_ProductGroupID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#idddddddddddddddddddddcy#y#y#", (char **)kwlist
        , &CThostFtdcInvestorProductGroupMarginField_reserve1, &CThostFtdcInvestorProductGroupMarginField_reserve1_length
        , &CThostFtdcInvestorProductGroupMarginField_BrokerID, &CThostFtdcInvestorProductGroupMarginField_BrokerID_length
        , &CThostFtdcInvestorProductGroupMarginField_InvestorID, &CThostFtdcInvestorProductGroupMarginField_InvestorID_length
        , &CThostFtdcInvestorProductGroupMarginField_TradingDay, &CThostFtdcInvestorProductGroupMarginField_TradingDay_length
        , &CThostFtdcInvestorProductGroupMarginField_SettlementID
        , &CThostFtdcInvestorProductGroupMarginField_FrozenMargin
        , &CThostFtdcInvestorProductGroupMarginField_LongFrozenMargin
        , &CThostFtdcInvestorProductGroupMarginField_ShortFrozenMargin
        , &CThostFtdcInvestorProductGroupMarginField_UseMargin
        , &CThostFtdcInvestorProductGroupMarginField_LongUseMargin
        , &CThostFtdcInvestorProductGroupMarginField_ShortUseMargin
        , &CThostFtdcInvestorProductGroupMarginField_ExchMargin
        , &CThostFtdcInvestorProductGroupMarginField_LongExchMargin
        , &CThostFtdcInvestorProductGroupMarginField_ShortExchMargin
        , &CThostFtdcInvestorProductGroupMarginField_CloseProfit
        , &CThostFtdcInvestorProductGroupMarginField_FrozenCommission
        , &CThostFtdcInvestorProductGroupMarginField_Commission
        , &CThostFtdcInvestorProductGroupMarginField_FrozenCash
        , &CThostFtdcInvestorProductGroupMarginField_CashIn
        , &CThostFtdcInvestorProductGroupMarginField_PositionProfit
        , &CThostFtdcInvestorProductGroupMarginField_OffsetAmount
        , &CThostFtdcInvestorProductGroupMarginField_LongOffsetAmount
        , &CThostFtdcInvestorProductGroupMarginField_ShortOffsetAmount
        , &CThostFtdcInvestorProductGroupMarginField_ExchOffsetAmount
        , &CThostFtdcInvestorProductGroupMarginField_LongExchOffsetAmount
        , &CThostFtdcInvestorProductGroupMarginField_ShortExchOffsetAmount
        , &CThostFtdcInvestorProductGroupMarginField_HedgeFlag
        , &CThostFtdcInvestorProductGroupMarginField_ExchangeID, &CThostFtdcInvestorProductGroupMarginField_ExchangeID_length
        , &CThostFtdcInvestorProductGroupMarginField_InvestUnitID, &CThostFtdcInvestorProductGroupMarginField_InvestUnitID_length
        , &CThostFtdcInvestorProductGroupMarginField_ProductGroupID, &CThostFtdcInvestorProductGroupMarginField_ProductGroupID_length
    )) {
        return -1;
    }

    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInvestorProductGroupMarginField_reserve1 != NULL ) {
        if(CThostFtdcInvestorProductGroupMarginField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInvestorProductGroupMarginField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInvestorProductGroupMarginField_reserve1, CThostFtdcInvestorProductGroupMarginField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInvestorProductGroupMarginField_reserve1, sizeof(data->reserve1));
        CThostFtdcInvestorProductGroupMarginField_reserve1 = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorProductGroupMarginField_BrokerID != NULL ) {
        if(CThostFtdcInvestorProductGroupMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorProductGroupMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorProductGroupMarginField_BrokerID, CThostFtdcInvestorProductGroupMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorProductGroupMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorProductGroupMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorProductGroupMarginField_InvestorID != NULL ) {
        if(CThostFtdcInvestorProductGroupMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorProductGroupMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorProductGroupMarginField_InvestorID, CThostFtdcInvestorProductGroupMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorProductGroupMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorProductGroupMarginField_InvestorID = NULL;
    }

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInvestorProductGroupMarginField_TradingDay != NULL ) {
        if(CThostFtdcInvestorProductGroupMarginField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcInvestorProductGroupMarginField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcInvestorProductGroupMarginField_TradingDay, CThostFtdcInvestorProductGroupMarginField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcInvestorProductGroupMarginField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcInvestorProductGroupMarginField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcInvestorProductGroupMarginField_SettlementID;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    data->FrozenMargin = CThostFtdcInvestorProductGroupMarginField_FrozenMargin;

    /// 多头冻结的保证金
    /// typedef double TThostFtdcMoneyType
    data->LongFrozenMargin = CThostFtdcInvestorProductGroupMarginField_LongFrozenMargin;

    /// 空头冻结的保证金
    /// typedef double TThostFtdcMoneyType
    data->ShortFrozenMargin = CThostFtdcInvestorProductGroupMarginField_ShortFrozenMargin;

    /// 占用的保证金
    /// typedef double TThostFtdcMoneyType
    data->UseMargin = CThostFtdcInvestorProductGroupMarginField_UseMargin;

    /// 多头保证金
    /// typedef double TThostFtdcMoneyType
    data->LongUseMargin = CThostFtdcInvestorProductGroupMarginField_LongUseMargin;

    /// 空头保证金
    /// typedef double TThostFtdcMoneyType
    data->ShortUseMargin = CThostFtdcInvestorProductGroupMarginField_ShortUseMargin;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMargin = CThostFtdcInvestorProductGroupMarginField_ExchMargin;

    /// 交易所多头保证金
    /// typedef double TThostFtdcMoneyType
    data->LongExchMargin = CThostFtdcInvestorProductGroupMarginField_LongExchMargin;

    /// 交易所空头保证金
    /// typedef double TThostFtdcMoneyType
    data->ShortExchMargin = CThostFtdcInvestorProductGroupMarginField_ShortExchMargin;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfit = CThostFtdcInvestorProductGroupMarginField_CloseProfit;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    data->FrozenCommission = CThostFtdcInvestorProductGroupMarginField_FrozenCommission;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    data->Commission = CThostFtdcInvestorProductGroupMarginField_Commission;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    data->FrozenCash = CThostFtdcInvestorProductGroupMarginField_FrozenCash;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    data->CashIn = CThostFtdcInvestorProductGroupMarginField_CashIn;

    /// 持仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->PositionProfit = CThostFtdcInvestorProductGroupMarginField_PositionProfit;

    /// 折抵总金额
    /// typedef double TThostFtdcMoneyType
    data->OffsetAmount = CThostFtdcInvestorProductGroupMarginField_OffsetAmount;

    /// 多头折抵总金额
    /// typedef double TThostFtdcMoneyType
    data->LongOffsetAmount = CThostFtdcInvestorProductGroupMarginField_LongOffsetAmount;

    /// 空头折抵总金额
    /// typedef double TThostFtdcMoneyType
    data->ShortOffsetAmount = CThostFtdcInvestorProductGroupMarginField_ShortOffsetAmount;

    /// 交易所折抵总金额
    /// typedef double TThostFtdcMoneyType
    data->ExchOffsetAmount = CThostFtdcInvestorProductGroupMarginField_ExchOffsetAmount;

    /// 交易所多头折抵总金额
    /// typedef double TThostFtdcMoneyType
    data->LongExchOffsetAmount = CThostFtdcInvestorProductGroupMarginField_LongExchOffsetAmount;

    /// 交易所空头折抵总金额
    /// typedef double TThostFtdcMoneyType
    data->ShortExchOffsetAmount = CThostFtdcInvestorProductGroupMarginField_ShortExchOffsetAmount;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInvestorProductGroupMarginField_HedgeFlag;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorProductGroupMarginField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorProductGroupMarginField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorProductGroupMarginField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorProductGroupMarginField_ExchangeID, CThostFtdcInvestorProductGroupMarginField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorProductGroupMarginField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorProductGroupMarginField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInvestorProductGroupMarginField_InvestUnitID != NULL ) {
        if(CThostFtdcInvestorProductGroupMarginField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInvestorProductGroupMarginField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInvestorProductGroupMarginField_InvestUnitID, CThostFtdcInvestorProductGroupMarginField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInvestorProductGroupMarginField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInvestorProductGroupMarginField_InvestUnitID = NULL;
    }

    /// 品种/跨品种标示
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInvestorProductGroupMarginField_ProductGroupID != NULL ) {
        if(CThostFtdcInvestorProductGroupMarginField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 80)", CThostFtdcInvestorProductGroupMarginField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcInvestorProductGroupMarginField_ProductGroupID, CThostFtdcInvestorProductGroupMarginField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcInvestorProductGroupMarginField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcInvestorProductGroupMarginField_ProductGroupID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorProductGroupMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:y,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "FrozenMargin", data->FrozenMargin
        , "LongFrozenMargin", data->LongFrozenMargin
        , "ShortFrozenMargin", data->ShortFrozenMargin
        , "UseMargin", data->UseMargin
        , "LongUseMargin", data->LongUseMargin
        , "ShortUseMargin", data->ShortUseMargin
        , "ExchMargin", data->ExchMargin
        , "LongExchMargin", data->LongExchMargin
        , "ShortExchMargin", data->ShortExchMargin
        , "CloseProfit", data->CloseProfit
        , "FrozenCommission", data->FrozenCommission
        , "Commission", data->Commission
        , "FrozenCash", data->FrozenCash
        , "CashIn", data->CashIn
        , "PositionProfit", data->PositionProfit
        , "OffsetAmount", data->OffsetAmount
        , "LongOffsetAmount", data->LongOffsetAmount
        , "ShortOffsetAmount", data->ShortOffsetAmount
        , "ExchOffsetAmount", data->ExchOffsetAmount
        , "LongExchOffsetAmount", data->LongExchOffsetAmount
        , "ShortExchOffsetAmount", data->ShortExchOffsetAmount
        , "HedgeFlag", data->HedgeFlag
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProductGroupMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProductGroupMarginField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInvestorProductGroupMarginFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInvestorProductGroupMarginFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProductGroupMarginField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorProductGroupMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorProductGroupMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProductGroupMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorProductGroupMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorProductGroupMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProductGroupMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInvestorProductGroupMarginFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcInvestorProductGroupMarginFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProductGroupMarginField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInvestorProductGroupMarginFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInvestorProductGroupMarginFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorProductGroupMarginField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorProductGroupMarginFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorProductGroupMarginFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProductGroupMarginField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInvestorProductGroupMarginFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInvestorProductGroupMarginFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProductGroupMarginField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种/跨品种标示
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInvestorProductGroupMarginFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcInvestorProductGroupMarginFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProductGroupMarginField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(self);
    CThostFtdcInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorProductGroupMarginFieldType_members[] = {
    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    {
        .name = "SettlementID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
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
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.FrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("冻结的保证金")
    },
    /// 多头冻结的保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.LongFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头冻结的保证金")
    },
    /// 空头冻结的保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.ShortFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头冻结的保证金")
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
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.UseMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("占用的保证金")
    },
    /// 多头保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongUseMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.LongUseMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头保证金")
    },
    /// 空头保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortUseMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.ShortUseMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头保证金")
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
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.ExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所保证金")
    },
    /// 交易所多头保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.LongExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所多头保证金")
    },
    /// 交易所空头保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.ShortExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所空头保证金")
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
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.CloseProfit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓盈亏")
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
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.FrozenCommission),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("冻结的手续费")
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
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.Commission),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("手续费")
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
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.FrozenCash),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("冻结的资金")
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
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.CashIn),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("资金差额")
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
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.PositionProfit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("持仓盈亏")
    },
    /// 折抵总金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "OffsetAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.OffsetAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("折抵总金额")
    },
    /// 多头折抵总金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongOffsetAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.LongOffsetAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头折抵总金额")
    },
    /// 空头折抵总金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortOffsetAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.ShortOffsetAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头折抵总金额")
    },
    /// 交易所折抵总金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchOffsetAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.ExchOffsetAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所折抵总金额")
    },
    /// 交易所多头折抵总金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongExchOffsetAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.LongExchOffsetAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所多头折抵总金额")
    },
    /// 交易所空头折抵总金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortExchOffsetAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProductGroupMarginFieldData, data.ShortExchOffsetAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所空头折抵总金额")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorProductGroupMarginFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInvestorProductGroupMarginFieldType_get_reserve1,
    .set = PyCThostFtdcInvestorProductGroupMarginFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorProductGroupMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorProductGroupMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorProductGroupMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorProductGroupMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcInvestorProductGroupMarginFieldType_get_TradingDay,
    .set = PyCThostFtdcInvestorProductGroupMarginFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInvestorProductGroupMarginFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInvestorProductGroupMarginFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorProductGroupMarginFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorProductGroupMarginFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInvestorProductGroupMarginFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInvestorProductGroupMarginFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 品种/跨品种标示
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcInvestorProductGroupMarginFieldType_get_ProductGroupID,
    .set = PyCThostFtdcInvestorProductGroupMarginFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("品种/跨品种标示"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorProductGroupMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorProductGroupMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者品种/跨品种保证金")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorProductGroupMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorProductGroupMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorProductGroupMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorProductGroupMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorProductGroupMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorProductGroupMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者品种/跨品种保证金")},
    {Py_tp_members, PyCThostFtdcInvestorProductGroupMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorProductGroupMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorProductGroupMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorProductGroupMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorProductGroupMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorProductGroupMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorProductGroupMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorProductGroupMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorProductGroupMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorProductGroupMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorProductGroupMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorProductGroupMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorProductGroupMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorProductGroupMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorProductGroupMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProductGroupMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}