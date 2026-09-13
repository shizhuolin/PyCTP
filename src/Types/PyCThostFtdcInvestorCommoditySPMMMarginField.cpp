
#include "PyCThostFtdcInvestorCommoditySPMMMarginField.h"

///投资者商品组SPMM记录

static int PyCThostFtdcInvestorCommoditySPMMMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "CommodityID", "MarginBeforeDiscount", "MarginNoDiscount", "LongPosRisk", "LongOpenFrozenRisk", "LongCloseFrozenRisk", "ShortPosRisk", "ShortOpenFrozenRisk", "ShortCloseFrozenRisk", "IntraCommodityRate", "OptionDiscountRate", "PosDiscount", "OpenFrozenDiscount", "NetRisk", "CloseFrozenMargin", "FrozenCommission", "Commission", "FrozenCash", "CashIn", "StrikeFrozenMargin", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorCommoditySPMMMarginField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorCommoditySPMMMarginField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorCommoditySPMMMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorCommoditySPMMMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorCommoditySPMMMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorCommoditySPMMMarginField_InvestorID_length = 0;

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcInvestorCommoditySPMMMarginField_CommodityID = NULL;
    Py_ssize_t CThostFtdcInvestorCommoditySPMMMarginField_CommodityID_length = 0;

    /// 优惠仓位应收保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_MarginBeforeDiscount = 0.0;

    /// 不优惠仓位应收保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_MarginNoDiscount = 0.0;

    /// 多头实仓风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_LongPosRisk = 0.0;

    /// 多头开仓冻结风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_LongOpenFrozenRisk = 0.0;

    /// 多头被平冻结风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_LongCloseFrozenRisk = 0.0;

    /// 空头实仓风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_ShortPosRisk = 0.0;

    /// 空头开仓冻结风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_ShortOpenFrozenRisk = 0.0;

    /// 空头被平冻结风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_ShortCloseFrozenRisk = 0.0;

    /// SPMM品种内跨期优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    double CThostFtdcInvestorCommoditySPMMMarginField_IntraCommodityRate = 0.0;

    /// SPMM期权优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    double CThostFtdcInvestorCommoditySPMMMarginField_OptionDiscountRate = 0.0;

    /// 实仓对冲优惠金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_PosDiscount = 0.0;

    /// 开仓报单对冲优惠金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_OpenFrozenDiscount = 0.0;

    /// 品种风险净头
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_NetRisk = 0.0;

    /// 平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_CloseFrozenMargin = 0.0;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_FrozenCommission = 0.0;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_Commission = 0.0;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_FrozenCash = 0.0;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_CashIn = 0.0;

    /// 行权冻结资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommoditySPMMMarginField_StrikeFrozenMargin = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddddddddddddd", (char **)kwlist
        , &CThostFtdcInvestorCommoditySPMMMarginField_ExchangeID, &CThostFtdcInvestorCommoditySPMMMarginField_ExchangeID_length
        , &CThostFtdcInvestorCommoditySPMMMarginField_BrokerID, &CThostFtdcInvestorCommoditySPMMMarginField_BrokerID_length
        , &CThostFtdcInvestorCommoditySPMMMarginField_InvestorID, &CThostFtdcInvestorCommoditySPMMMarginField_InvestorID_length
        , &CThostFtdcInvestorCommoditySPMMMarginField_CommodityID, &CThostFtdcInvestorCommoditySPMMMarginField_CommodityID_length
        , &CThostFtdcInvestorCommoditySPMMMarginField_MarginBeforeDiscount
        , &CThostFtdcInvestorCommoditySPMMMarginField_MarginNoDiscount
        , &CThostFtdcInvestorCommoditySPMMMarginField_LongPosRisk
        , &CThostFtdcInvestorCommoditySPMMMarginField_LongOpenFrozenRisk
        , &CThostFtdcInvestorCommoditySPMMMarginField_LongCloseFrozenRisk
        , &CThostFtdcInvestorCommoditySPMMMarginField_ShortPosRisk
        , &CThostFtdcInvestorCommoditySPMMMarginField_ShortOpenFrozenRisk
        , &CThostFtdcInvestorCommoditySPMMMarginField_ShortCloseFrozenRisk
        , &CThostFtdcInvestorCommoditySPMMMarginField_IntraCommodityRate
        , &CThostFtdcInvestorCommoditySPMMMarginField_OptionDiscountRate
        , &CThostFtdcInvestorCommoditySPMMMarginField_PosDiscount
        , &CThostFtdcInvestorCommoditySPMMMarginField_OpenFrozenDiscount
        , &CThostFtdcInvestorCommoditySPMMMarginField_NetRisk
        , &CThostFtdcInvestorCommoditySPMMMarginField_CloseFrozenMargin
        , &CThostFtdcInvestorCommoditySPMMMarginField_FrozenCommission
        , &CThostFtdcInvestorCommoditySPMMMarginField_Commission
        , &CThostFtdcInvestorCommoditySPMMMarginField_FrozenCash
        , &CThostFtdcInvestorCommoditySPMMMarginField_CashIn
        , &CThostFtdcInvestorCommoditySPMMMarginField_StrikeFrozenMargin
    )) {
        return -1;
    }

    PyCThostFtdcInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcInvestorCommoditySPMMMarginField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorCommoditySPMMMarginField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorCommoditySPMMMarginField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorCommoditySPMMMarginField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorCommoditySPMMMarginField_ExchangeID, CThostFtdcInvestorCommoditySPMMMarginField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorCommoditySPMMMarginField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorCommoditySPMMMarginField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorCommoditySPMMMarginField_BrokerID != NULL ) {
        if(CThostFtdcInvestorCommoditySPMMMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorCommoditySPMMMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorCommoditySPMMMarginField_BrokerID, CThostFtdcInvestorCommoditySPMMMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorCommoditySPMMMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorCommoditySPMMMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorCommoditySPMMMarginField_InvestorID != NULL ) {
        if(CThostFtdcInvestorCommoditySPMMMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorCommoditySPMMMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorCommoditySPMMMarginField_InvestorID, CThostFtdcInvestorCommoditySPMMMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorCommoditySPMMMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorCommoditySPMMMarginField_InvestorID = NULL;
    }

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcInvestorCommoditySPMMMarginField_CommodityID != NULL ) {
        if(CThostFtdcInvestorCommoditySPMMMarginField_CommodityID_length >= (Py_ssize_t)sizeof(data->CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is 40)", CThostFtdcInvestorCommoditySPMMMarginField_CommodityID_length);
            return -1;
        }
        // memset(data->CommodityID, 0, sizeof(data->CommodityID));
        // memcpy(data->CommodityID, CThostFtdcInvestorCommoditySPMMMarginField_CommodityID, CThostFtdcInvestorCommoditySPMMMarginField_CommodityID_length);
        strncpy(data->CommodityID, CThostFtdcInvestorCommoditySPMMMarginField_CommodityID, sizeof(data->CommodityID));
        CThostFtdcInvestorCommoditySPMMMarginField_CommodityID = NULL;
    }

    /// 优惠仓位应收保证金
    /// typedef double TThostFtdcMoneyType
    data->MarginBeforeDiscount = CThostFtdcInvestorCommoditySPMMMarginField_MarginBeforeDiscount;

    /// 不优惠仓位应收保证金
    /// typedef double TThostFtdcMoneyType
    data->MarginNoDiscount = CThostFtdcInvestorCommoditySPMMMarginField_MarginNoDiscount;

    /// 多头实仓风险
    /// typedef double TThostFtdcMoneyType
    data->LongPosRisk = CThostFtdcInvestorCommoditySPMMMarginField_LongPosRisk;

    /// 多头开仓冻结风险
    /// typedef double TThostFtdcMoneyType
    data->LongOpenFrozenRisk = CThostFtdcInvestorCommoditySPMMMarginField_LongOpenFrozenRisk;

    /// 多头被平冻结风险
    /// typedef double TThostFtdcMoneyType
    data->LongCloseFrozenRisk = CThostFtdcInvestorCommoditySPMMMarginField_LongCloseFrozenRisk;

    /// 空头实仓风险
    /// typedef double TThostFtdcMoneyType
    data->ShortPosRisk = CThostFtdcInvestorCommoditySPMMMarginField_ShortPosRisk;

    /// 空头开仓冻结风险
    /// typedef double TThostFtdcMoneyType
    data->ShortOpenFrozenRisk = CThostFtdcInvestorCommoditySPMMMarginField_ShortOpenFrozenRisk;

    /// 空头被平冻结风险
    /// typedef double TThostFtdcMoneyType
    data->ShortCloseFrozenRisk = CThostFtdcInvestorCommoditySPMMMarginField_ShortCloseFrozenRisk;

    /// SPMM品种内跨期优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    data->IntraCommodityRate = CThostFtdcInvestorCommoditySPMMMarginField_IntraCommodityRate;

    /// SPMM期权优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    data->OptionDiscountRate = CThostFtdcInvestorCommoditySPMMMarginField_OptionDiscountRate;

    /// 实仓对冲优惠金额
    /// typedef double TThostFtdcMoneyType
    data->PosDiscount = CThostFtdcInvestorCommoditySPMMMarginField_PosDiscount;

    /// 开仓报单对冲优惠金额
    /// typedef double TThostFtdcMoneyType
    data->OpenFrozenDiscount = CThostFtdcInvestorCommoditySPMMMarginField_OpenFrozenDiscount;

    /// 品种风险净头
    /// typedef double TThostFtdcMoneyType
    data->NetRisk = CThostFtdcInvestorCommoditySPMMMarginField_NetRisk;

    /// 平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->CloseFrozenMargin = CThostFtdcInvestorCommoditySPMMMarginField_CloseFrozenMargin;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    data->FrozenCommission = CThostFtdcInvestorCommoditySPMMMarginField_FrozenCommission;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    data->Commission = CThostFtdcInvestorCommoditySPMMMarginField_Commission;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    data->FrozenCash = CThostFtdcInvestorCommoditySPMMMarginField_FrozenCash;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    data->CashIn = CThostFtdcInvestorCommoditySPMMMarginField_CashIn;

    /// 行权冻结资金
    /// typedef double TThostFtdcMoneyType
    data->StrikeFrozenMargin = CThostFtdcInvestorCommoditySPMMMarginField_StrikeFrozenMargin;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcInvestorCommoditySPMMMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "CommodityID", data->CommodityID//, (Py_ssize_t)sizeof(data->CommodityID)
        , "MarginBeforeDiscount", data->MarginBeforeDiscount
        , "MarginNoDiscount", data->MarginNoDiscount
        , "LongPosRisk", data->LongPosRisk
        , "LongOpenFrozenRisk", data->LongOpenFrozenRisk
        , "LongCloseFrozenRisk", data->LongCloseFrozenRisk
        , "ShortPosRisk", data->ShortPosRisk
        , "ShortOpenFrozenRisk", data->ShortOpenFrozenRisk
        , "ShortCloseFrozenRisk", data->ShortCloseFrozenRisk
        , "IntraCommodityRate", data->IntraCommodityRate
        , "OptionDiscountRate", data->OptionDiscountRate
        , "PosDiscount", data->PosDiscount
        , "OpenFrozenDiscount", data->OpenFrozenDiscount
        , "NetRisk", data->NetRisk
        , "CloseFrozenMargin", data->CloseFrozenMargin
        , "FrozenCommission", data->FrozenCommission
        , "Commission", data->Commission
        , "FrozenCash", data->FrozenCash
        , "CashIn", data->CashIn
        , "StrikeFrozenMargin", data->StrikeFrozenMargin
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorCommoditySPMMMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorCommoditySPMMMarginField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcInvestorCommoditySPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorCommoditySPMMMarginFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorCommoditySPMMMarginField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcInvestorCommoditySPMMMarginField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcInvestorCommoditySPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorCommoditySPMMMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorCommoditySPMMMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcInvestorCommoditySPMMMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcInvestorCommoditySPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorCommoditySPMMMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorCommoditySPMMMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcInvestorCommoditySPMMMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品组代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginFieldType_get_CommodityID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcInvestorCommoditySPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityID, (Py_ssize_t)sizeof(data->CommodityID));
    return PyBytes_FromString(data->CommodityID);
}

static int PyCThostFtdcInvestorCommoditySPMMMarginFieldType_set_CommodityID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorCommoditySPMMMarginField::CommodityID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcInvestorCommoditySPMMMarginField *data = &(extra->data);
    // memset(data->CommodityID, 0, sizeof(data->CommodityID));
    // memcpy(data->CommodityID, buf, len);
    strncpy(data->CommodityID, buf, sizeof(data->CommodityID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorCommoditySPMMMarginFieldType_members[] = {
    /// 优惠仓位应收保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MarginBeforeDiscount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.MarginBeforeDiscount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("优惠仓位应收保证金")
    },
    /// 不优惠仓位应收保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MarginNoDiscount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.MarginNoDiscount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("不优惠仓位应收保证金")
    },
    /// 多头实仓风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongPosRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.LongPosRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头实仓风险")
    },
    /// 多头开仓冻结风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongOpenFrozenRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.LongOpenFrozenRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头开仓冻结风险")
    },
    /// 多头被平冻结风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongCloseFrozenRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.LongCloseFrozenRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头被平冻结风险")
    },
    /// 空头实仓风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortPosRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.ShortPosRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头实仓风险")
    },
    /// 空头开仓冻结风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortOpenFrozenRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.ShortOpenFrozenRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头开仓冻结风险")
    },
    /// 空头被平冻结风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortCloseFrozenRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.ShortCloseFrozenRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头被平冻结风险")
    },
    /// SPMM品种内跨期优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    {
        .name = "IntraCommodityRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.IntraCommodityRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("SPMM品种内跨期优惠系数")
    },
    /// SPMM期权优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    {
        .name = "OptionDiscountRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.OptionDiscountRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("SPMM期权优惠系数")
    },
    /// 实仓对冲优惠金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PosDiscount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.PosDiscount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("实仓对冲优惠金额")
    },
    /// 开仓报单对冲优惠金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "OpenFrozenDiscount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.OpenFrozenDiscount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓报单对冲优惠金额")
    },
    /// 品种风险净头
    /// typedef double TThostFtdcMoneyType
    {
        .name = "NetRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.NetRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种风险净头")
    },
    /// 平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CloseFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.CloseFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓冻结保证金")
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
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.FrozenCommission),
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
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.Commission),
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
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.FrozenCash),
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
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.CashIn),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("资金差额")
    },
    /// 行权冻结资金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "StrikeFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData, data.StrikeFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("行权冻结资金")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorCommoditySPMMMarginFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorCommoditySPMMMarginFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorCommoditySPMMMarginFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorCommoditySPMMMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorCommoditySPMMMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorCommoditySPMMMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorCommoditySPMMMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityID",
    .get = PyCThostFtdcInvestorCommoditySPMMMarginFieldType_get_CommodityID,
    .set = PyCThostFtdcInvestorCommoditySPMMMarginFieldType_set_CommodityID,
    .doc = PyDoc_STR("商品组代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorCommoditySPMMMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorCommoditySPMMMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者商品组SPMM记录")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorCommoditySPMMMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorCommoditySPMMMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorCommoditySPMMMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorCommoditySPMMMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorCommoditySPMMMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者商品组SPMM记录")},
    {Py_tp_members, PyCThostFtdcInvestorCommoditySPMMMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorCommoditySPMMMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorCommoditySPMMMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorCommoditySPMMMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorCommoditySPMMMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorCommoditySPMMMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorCommoditySPMMMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorCommoditySPMMMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorCommoditySPMMMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorCommoditySPMMMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorCommoditySPMMMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorCommoditySPMMMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorCommoditySPMMMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorCommoditySPMMMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorCommoditySPMMMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}