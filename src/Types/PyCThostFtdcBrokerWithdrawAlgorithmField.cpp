
#include "PyCThostFtdcBrokerWithdrawAlgorithmField.h"

///经纪公司可提资金算法表

static int PyCThostFtdcBrokerWithdrawAlgorithmFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "WithdrawAlgorithm", "UsingRatio", "IncludeCloseProfit", "AllWithoutTrade", "AvailIncludeCloseProfit", "IsBrokerUserEvent", "CurrencyID", "FundMortgageRatio", "BalanceAlgorithm", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerWithdrawAlgorithmField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerWithdrawAlgorithmField_BrokerID_length = 0;

    /// 可提资金算法
    /// typedef char TThostFtdcAlgorithmType
    char CThostFtdcBrokerWithdrawAlgorithmField_WithdrawAlgorithm = 0;

    /// 资金使用率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcBrokerWithdrawAlgorithmField_UsingRatio = 0.0;

    /// 可提是否包含平仓盈利
    /// typedef char TThostFtdcIncludeCloseProfitType
    char CThostFtdcBrokerWithdrawAlgorithmField_IncludeCloseProfit = 0;

    /// 本日无仓且无成交客户是否受可提比例限制
    /// typedef char TThostFtdcAllWithoutTradeType
    char CThostFtdcBrokerWithdrawAlgorithmField_AllWithoutTrade = 0;

    /// 可用是否包含平仓盈利
    /// typedef char TThostFtdcIncludeCloseProfitType
    char CThostFtdcBrokerWithdrawAlgorithmField_AvailIncludeCloseProfit = 0;

    /// 是否启用用户事件
    /// typedef int TThostFtdcBoolType
    int CThostFtdcBrokerWithdrawAlgorithmField_IsBrokerUserEvent = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcBrokerWithdrawAlgorithmField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcBrokerWithdrawAlgorithmField_CurrencyID_length = 0;

    /// 货币质押比率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcBrokerWithdrawAlgorithmField_FundMortgageRatio = 0.0;

    /// 权益算法
    /// typedef char TThostFtdcBalanceAlgorithmType
    char CThostFtdcBrokerWithdrawAlgorithmField_BalanceAlgorithm = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cdccciy#dc", (char **)kwlist
        , &CThostFtdcBrokerWithdrawAlgorithmField_BrokerID, &CThostFtdcBrokerWithdrawAlgorithmField_BrokerID_length
        , &CThostFtdcBrokerWithdrawAlgorithmField_WithdrawAlgorithm
        , &CThostFtdcBrokerWithdrawAlgorithmField_UsingRatio
        , &CThostFtdcBrokerWithdrawAlgorithmField_IncludeCloseProfit
        , &CThostFtdcBrokerWithdrawAlgorithmField_AllWithoutTrade
        , &CThostFtdcBrokerWithdrawAlgorithmField_AvailIncludeCloseProfit
        , &CThostFtdcBrokerWithdrawAlgorithmField_IsBrokerUserEvent
        , &CThostFtdcBrokerWithdrawAlgorithmField_CurrencyID, &CThostFtdcBrokerWithdrawAlgorithmField_CurrencyID_length
        , &CThostFtdcBrokerWithdrawAlgorithmField_FundMortgageRatio
        , &CThostFtdcBrokerWithdrawAlgorithmField_BalanceAlgorithm
    )) {
        return -1;
    }

    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerWithdrawAlgorithmField_BrokerID != NULL ) {
        if(CThostFtdcBrokerWithdrawAlgorithmField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerWithdrawAlgorithmField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerWithdrawAlgorithmField_BrokerID, CThostFtdcBrokerWithdrawAlgorithmField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerWithdrawAlgorithmField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerWithdrawAlgorithmField_BrokerID = NULL;
    }

    /// 可提资金算法
    /// typedef char TThostFtdcAlgorithmType
    data->WithdrawAlgorithm = CThostFtdcBrokerWithdrawAlgorithmField_WithdrawAlgorithm;

    /// 资金使用率
    /// typedef double TThostFtdcRatioType
    data->UsingRatio = CThostFtdcBrokerWithdrawAlgorithmField_UsingRatio;

    /// 可提是否包含平仓盈利
    /// typedef char TThostFtdcIncludeCloseProfitType
    data->IncludeCloseProfit = CThostFtdcBrokerWithdrawAlgorithmField_IncludeCloseProfit;

    /// 本日无仓且无成交客户是否受可提比例限制
    /// typedef char TThostFtdcAllWithoutTradeType
    data->AllWithoutTrade = CThostFtdcBrokerWithdrawAlgorithmField_AllWithoutTrade;

    /// 可用是否包含平仓盈利
    /// typedef char TThostFtdcIncludeCloseProfitType
    data->AvailIncludeCloseProfit = CThostFtdcBrokerWithdrawAlgorithmField_AvailIncludeCloseProfit;

    /// 是否启用用户事件
    /// typedef int TThostFtdcBoolType
    data->IsBrokerUserEvent = CThostFtdcBrokerWithdrawAlgorithmField_IsBrokerUserEvent;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcBrokerWithdrawAlgorithmField_CurrencyID != NULL ) {
        if(CThostFtdcBrokerWithdrawAlgorithmField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcBrokerWithdrawAlgorithmField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcBrokerWithdrawAlgorithmField_CurrencyID, CThostFtdcBrokerWithdrawAlgorithmField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcBrokerWithdrawAlgorithmField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcBrokerWithdrawAlgorithmField_CurrencyID = NULL;
    }

    /// 货币质押比率
    /// typedef double TThostFtdcRatioType
    data->FundMortgageRatio = CThostFtdcBrokerWithdrawAlgorithmField_FundMortgageRatio;

    /// 权益算法
    /// typedef char TThostFtdcBalanceAlgorithmType
    data->BalanceAlgorithm = CThostFtdcBrokerWithdrawAlgorithmField_BalanceAlgorithm;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:d,s:c,s:c,s:c,s:i,s:y,s:d,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "WithdrawAlgorithm", data->WithdrawAlgorithm
        , "UsingRatio", data->UsingRatio
        , "IncludeCloseProfit", data->IncludeCloseProfit
        , "AllWithoutTrade", data->AllWithoutTrade
        , "AvailIncludeCloseProfit", data->AvailIncludeCloseProfit
        , "IsBrokerUserEvent", data->IsBrokerUserEvent
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "FundMortgageRatio", data->FundMortgageRatio
        , "BalanceAlgorithm", data->BalanceAlgorithm
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerWithdrawAlgorithmField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerWithdrawAlgorithmField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerWithdrawAlgorithmField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 可提资金算法
/// typedef char TThostFtdcAlgorithmType
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_WithdrawAlgorithm(PyObject *self, void *closure) {
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->WithdrawAlgorithm), 1);
}

static int PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_WithdrawAlgorithm(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "WithdrawAlgorithm Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerWithdrawAlgorithmField::WithdrawAlgorithm)) {
        PyErr_SetString(PyExc_ValueError, "WithdrawAlgorithm must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    data->WithdrawAlgorithm = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 可提是否包含平仓盈利
/// typedef char TThostFtdcIncludeCloseProfitType
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_IncludeCloseProfit(PyObject *self, void *closure) {
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IncludeCloseProfit), 1);
}

static int PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_IncludeCloseProfit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IncludeCloseProfit Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerWithdrawAlgorithmField::IncludeCloseProfit)) {
        PyErr_SetString(PyExc_ValueError, "IncludeCloseProfit must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    data->IncludeCloseProfit = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本日无仓且无成交客户是否受可提比例限制
/// typedef char TThostFtdcAllWithoutTradeType
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_AllWithoutTrade(PyObject *self, void *closure) {
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AllWithoutTrade), 1);
}

static int PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_AllWithoutTrade(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AllWithoutTrade Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerWithdrawAlgorithmField::AllWithoutTrade)) {
        PyErr_SetString(PyExc_ValueError, "AllWithoutTrade must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    data->AllWithoutTrade = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 可用是否包含平仓盈利
/// typedef char TThostFtdcIncludeCloseProfitType
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_AvailIncludeCloseProfit(PyObject *self, void *closure) {
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AvailIncludeCloseProfit), 1);
}

static int PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_AvailIncludeCloseProfit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AvailIncludeCloseProfit Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerWithdrawAlgorithmField::AvailIncludeCloseProfit)) {
        PyErr_SetString(PyExc_ValueError, "AvailIncludeCloseProfit must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    data->AvailIncludeCloseProfit = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerWithdrawAlgorithmField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 权益算法
/// typedef char TThostFtdcBalanceAlgorithmType
static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_BalanceAlgorithm(PyObject *self, void *closure) {
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BalanceAlgorithm), 1);
}

static int PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_BalanceAlgorithm(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BalanceAlgorithm Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerWithdrawAlgorithmField::BalanceAlgorithm)) {
        PyErr_SetString(PyExc_ValueError, "BalanceAlgorithm must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerWithdrawAlgorithmFieldData>(self);
    CThostFtdcBrokerWithdrawAlgorithmField *data = &(extra->data);
    data->BalanceAlgorithm = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerWithdrawAlgorithmFieldType_members[] = {
    /// 资金使用率
    /// typedef double TThostFtdcRatioType
    {
        .name = "UsingRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerWithdrawAlgorithmFieldData, data.UsingRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("资金使用率")
    },
    /// 是否启用用户事件
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsBrokerUserEvent",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerWithdrawAlgorithmFieldData, data.IsBrokerUserEvent),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否启用用户事件")
    },
    /// 货币质押比率
    /// typedef double TThostFtdcRatioType
    {
        .name = "FundMortgageRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerWithdrawAlgorithmFieldData, data.FundMortgageRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("货币质押比率")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerWithdrawAlgorithmFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 可提资金算法
    /// typedef char TThostFtdcAlgorithmType
    {
    .name = "WithdrawAlgorithm",
    .get = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_WithdrawAlgorithm,
    .set = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_WithdrawAlgorithm,
    .doc = PyDoc_STR("可提资金算法"),
    },
    /// 可提是否包含平仓盈利
    /// typedef char TThostFtdcIncludeCloseProfitType
    {
    .name = "IncludeCloseProfit",
    .get = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_IncludeCloseProfit,
    .set = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_IncludeCloseProfit,
    .doc = PyDoc_STR("可提是否包含平仓盈利"),
    },
    /// 本日无仓且无成交客户是否受可提比例限制
    /// typedef char TThostFtdcAllWithoutTradeType
    {
    .name = "AllWithoutTrade",
    .get = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_AllWithoutTrade,
    .set = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_AllWithoutTrade,
    .doc = PyDoc_STR("本日无仓且无成交客户是否受可提比例限制"),
    },
    /// 可用是否包含平仓盈利
    /// typedef char TThostFtdcIncludeCloseProfitType
    {
    .name = "AvailIncludeCloseProfit",
    .get = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_AvailIncludeCloseProfit,
    .set = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_AvailIncludeCloseProfit,
    .doc = PyDoc_STR("可用是否包含平仓盈利"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_CurrencyID,
    .set = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 权益算法
    /// typedef char TThostFtdcBalanceAlgorithmType
    {
    .name = "BalanceAlgorithm",
    .get = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_get_BalanceAlgorithm,
    .set = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_set_BalanceAlgorithm,
    .doc = PyDoc_STR("权益算法"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerWithdrawAlgorithmFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerWithdrawAlgorithmField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("经纪公司可提资金算法表")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerWithdrawAlgorithmFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerWithdrawAlgorithmFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerWithdrawAlgorithmFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerWithdrawAlgorithmFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerWithdrawAlgorithmFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerWithdrawAlgorithmFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("经纪公司可提资金算法表")},
    {Py_tp_members, PyCThostFtdcBrokerWithdrawAlgorithmFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerWithdrawAlgorithmFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerWithdrawAlgorithmFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerWithdrawAlgorithmFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerWithdrawAlgorithmFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerWithdrawAlgorithmField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerWithdrawAlgorithmFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerWithdrawAlgorithmFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerWithdrawAlgorithmFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerWithdrawAlgorithmFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerWithdrawAlgorithmFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerWithdrawAlgorithmFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerWithdrawAlgorithmFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerWithdrawAlgorithmFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerWithdrawAlgorithmField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerWithdrawAlgorithmField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}