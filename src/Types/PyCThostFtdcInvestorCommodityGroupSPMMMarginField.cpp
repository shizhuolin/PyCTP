
#include "PyCThostFtdcInvestorCommodityGroupSPMMMarginField.h"

///投资者商品群SPMM记录

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "CommodityGroupID", "MarginBeforeDiscount", "MarginNoDiscount", "LongRisk", "ShortRisk", "CloseFrozenMargin", "InterCommodityRate", "MiniMarginRatio", "AdjustRatio", "IntraCommodityDiscount", "InterCommodityDiscount", "ExchMargin", "InvestorMargin", "FrozenCommission", "Commission", "FrozenCash", "CashIn", "StrikeFrozenMargin", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorCommodityGroupSPMMMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorCommodityGroupSPMMMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcInvestorCommodityGroupSPMMMarginField_CommodityGroupID = NULL;
    Py_ssize_t CThostFtdcInvestorCommodityGroupSPMMMarginField_CommodityGroupID_length = 0;

    /// 优惠仓位应收保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_MarginBeforeDiscount = 0.0;

    /// 不优惠仓位应收保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_MarginNoDiscount = 0.0;

    /// 多头风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_LongRisk = 0.0;

    /// 空头风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_ShortRisk = 0.0;

    /// 商品群平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_CloseFrozenMargin = 0.0;

    /// SPMM跨品种优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_InterCommodityRate = 0.0;

    /// 商品群最小保证金比例
    /// typedef double TThostFtdcSPMMDiscountRatioType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_MiniMarginRatio = 0.0;

    /// 投资者保证金和交易所保证金的比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_AdjustRatio = 0.0;

    /// SPMM品种内优惠汇总
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_IntraCommodityDiscount = 0.0;

    /// SPMM跨品种优惠
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_InterCommodityDiscount = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchMargin = 0.0;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorMargin = 0.0;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_FrozenCommission = 0.0;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_Commission = 0.0;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_FrozenCash = 0.0;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_CashIn = 0.0;

    /// 行权冻结资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorCommodityGroupSPMMMarginField_StrikeFrozenMargin = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddddddddddd", (char **)kwlist
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchangeID, &CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchangeID_length
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_BrokerID, &CThostFtdcInvestorCommodityGroupSPMMMarginField_BrokerID_length
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorID, &CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorID_length
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_CommodityGroupID, &CThostFtdcInvestorCommodityGroupSPMMMarginField_CommodityGroupID_length
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_MarginBeforeDiscount
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_MarginNoDiscount
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_LongRisk
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_ShortRisk
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_CloseFrozenMargin
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_InterCommodityRate
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_MiniMarginRatio
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_AdjustRatio
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_IntraCommodityDiscount
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_InterCommodityDiscount
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchMargin
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorMargin
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_FrozenCommission
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_Commission
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_FrozenCash
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_CashIn
        , &CThostFtdcInvestorCommodityGroupSPMMMarginField_StrikeFrozenMargin
    )) {
        return -1;
    }

    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcInvestorCommodityGroupSPMMMarginField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchangeID, CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorCommodityGroupSPMMMarginField_BrokerID != NULL ) {
        if(CThostFtdcInvestorCommodityGroupSPMMMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorCommodityGroupSPMMMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorCommodityGroupSPMMMarginField_BrokerID, CThostFtdcInvestorCommodityGroupSPMMMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorCommodityGroupSPMMMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorCommodityGroupSPMMMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorID != NULL ) {
        if(CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorID, CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcInvestorCommodityGroupSPMMMarginField_CommodityGroupID != NULL ) {
        if(CThostFtdcInvestorCommodityGroupSPMMMarginField_CommodityGroupID_length >= (Py_ssize_t)sizeof(data->CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is 40)", CThostFtdcInvestorCommodityGroupSPMMMarginField_CommodityGroupID_length);
            return -1;
        }
        // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
        // memcpy(data->CommodityGroupID, CThostFtdcInvestorCommodityGroupSPMMMarginField_CommodityGroupID, CThostFtdcInvestorCommodityGroupSPMMMarginField_CommodityGroupID_length);
        strncpy(data->CommodityGroupID, CThostFtdcInvestorCommodityGroupSPMMMarginField_CommodityGroupID, sizeof(data->CommodityGroupID));
        CThostFtdcInvestorCommodityGroupSPMMMarginField_CommodityGroupID = NULL;
    }

    /// 优惠仓位应收保证金
    /// typedef double TThostFtdcMoneyType
    data->MarginBeforeDiscount = CThostFtdcInvestorCommodityGroupSPMMMarginField_MarginBeforeDiscount;

    /// 不优惠仓位应收保证金
    /// typedef double TThostFtdcMoneyType
    data->MarginNoDiscount = CThostFtdcInvestorCommodityGroupSPMMMarginField_MarginNoDiscount;

    /// 多头风险
    /// typedef double TThostFtdcMoneyType
    data->LongRisk = CThostFtdcInvestorCommodityGroupSPMMMarginField_LongRisk;

    /// 空头风险
    /// typedef double TThostFtdcMoneyType
    data->ShortRisk = CThostFtdcInvestorCommodityGroupSPMMMarginField_ShortRisk;

    /// 商品群平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->CloseFrozenMargin = CThostFtdcInvestorCommodityGroupSPMMMarginField_CloseFrozenMargin;

    /// SPMM跨品种优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    data->InterCommodityRate = CThostFtdcInvestorCommodityGroupSPMMMarginField_InterCommodityRate;

    /// 商品群最小保证金比例
    /// typedef double TThostFtdcSPMMDiscountRatioType
    data->MiniMarginRatio = CThostFtdcInvestorCommodityGroupSPMMMarginField_MiniMarginRatio;

    /// 投资者保证金和交易所保证金的比例
    /// typedef double TThostFtdcRatioType
    data->AdjustRatio = CThostFtdcInvestorCommodityGroupSPMMMarginField_AdjustRatio;

    /// SPMM品种内优惠汇总
    /// typedef double TThostFtdcMoneyType
    data->IntraCommodityDiscount = CThostFtdcInvestorCommodityGroupSPMMMarginField_IntraCommodityDiscount;

    /// SPMM跨品种优惠
    /// typedef double TThostFtdcMoneyType
    data->InterCommodityDiscount = CThostFtdcInvestorCommodityGroupSPMMMarginField_InterCommodityDiscount;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMargin = CThostFtdcInvestorCommodityGroupSPMMMarginField_ExchMargin;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    data->InvestorMargin = CThostFtdcInvestorCommodityGroupSPMMMarginField_InvestorMargin;

    /// 冻结的手续费
    /// typedef double TThostFtdcMoneyType
    data->FrozenCommission = CThostFtdcInvestorCommodityGroupSPMMMarginField_FrozenCommission;

    /// 手续费
    /// typedef double TThostFtdcMoneyType
    data->Commission = CThostFtdcInvestorCommodityGroupSPMMMarginField_Commission;

    /// 冻结的资金
    /// typedef double TThostFtdcMoneyType
    data->FrozenCash = CThostFtdcInvestorCommodityGroupSPMMMarginField_FrozenCash;

    /// 资金差额
    /// typedef double TThostFtdcMoneyType
    data->CashIn = CThostFtdcInvestorCommodityGroupSPMMMarginField_CashIn;

    /// 行权冻结资金
    /// typedef double TThostFtdcMoneyType
    data->StrikeFrozenMargin = CThostFtdcInvestorCommodityGroupSPMMMarginField_StrikeFrozenMargin;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcInvestorCommodityGroupSPMMMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "CommodityGroupID", data->CommodityGroupID//, (Py_ssize_t)sizeof(data->CommodityGroupID)
        , "MarginBeforeDiscount", data->MarginBeforeDiscount
        , "MarginNoDiscount", data->MarginNoDiscount
        , "LongRisk", data->LongRisk
        , "ShortRisk", data->ShortRisk
        , "CloseFrozenMargin", data->CloseFrozenMargin
        , "InterCommodityRate", data->InterCommodityRate
        , "MiniMarginRatio", data->MiniMarginRatio
        , "AdjustRatio", data->AdjustRatio
        , "IntraCommodityDiscount", data->IntraCommodityDiscount
        , "InterCommodityDiscount", data->InterCommodityDiscount
        , "ExchMargin", data->ExchMargin
        , "InvestorMargin", data->InvestorMargin
        , "FrozenCommission", data->FrozenCommission
        , "Commission", data->Commission
        , "FrozenCash", data->FrozenCash
        , "CashIn", data->CashIn
        , "StrikeFrozenMargin", data->StrikeFrozenMargin
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorCommodityGroupSPMMMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorCommodityGroupSPMMMarginField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorCommodityGroupSPMMMarginField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorCommodityGroupSPMMMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorCommodityGroupSPMMMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_get_CommodityGroupID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityGroupID, (Py_ssize_t)sizeof(data->CommodityGroupID));
    return PyBytes_FromString(data->CommodityGroupID);
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_set_CommodityGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorCommodityGroupSPMMMarginField::CommodityGroupID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
    // memcpy(data->CommodityGroupID, buf, len);
    strncpy(data->CommodityGroupID, buf, sizeof(data->CommodityGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_members[] = {
    /// 优惠仓位应收保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MarginBeforeDiscount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.MarginBeforeDiscount),
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
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.MarginNoDiscount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("不优惠仓位应收保证金")
    },
    /// 多头风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.LongRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头风险")
    },
    /// 空头风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.ShortRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头风险")
    },
    /// 商品群平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CloseFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.CloseFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("商品群平仓冻结保证金")
    },
    /// SPMM跨品种优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    {
        .name = "InterCommodityRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.InterCommodityRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("SPMM跨品种优惠系数")
    },
    /// 商品群最小保证金比例
    /// typedef double TThostFtdcSPMMDiscountRatioType
    {
        .name = "MiniMarginRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.MiniMarginRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("商品群最小保证金比例")
    },
    /// 投资者保证金和交易所保证金的比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "AdjustRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.AdjustRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投资者保证金和交易所保证金的比例")
    },
    /// SPMM品种内优惠汇总
    /// typedef double TThostFtdcMoneyType
    {
        .name = "IntraCommodityDiscount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.IntraCommodityDiscount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("SPMM品种内优惠汇总")
    },
    /// SPMM跨品种优惠
    /// typedef double TThostFtdcMoneyType
    {
        .name = "InterCommodityDiscount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.InterCommodityDiscount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("SPMM跨品种优惠")
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
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.ExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所保证金")
    },
    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "InvestorMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.InvestorMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投资者保证金")
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
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.FrozenCommission),
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
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.Commission),
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
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.FrozenCash),
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
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.CashIn),
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
        .offset = offsetof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData, data.StrikeFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("行权冻结资金")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityGroupID",
    .get = PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_get_CommodityGroupID,
    .set = PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_set_CommodityGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorCommodityGroupSPMMMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者商品群SPMM记录")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者商品群SPMM记录")},
    {Py_tp_members, PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorCommodityGroupSPMMMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorCommodityGroupSPMMMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorCommodityGroupSPMMMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}