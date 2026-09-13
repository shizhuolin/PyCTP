
#include "PyCThostFtdcBrokerTradingParamsField.h"

///经纪公司交易参数

static int PyCThostFtdcBrokerTradingParamsFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "MarginPriceType", "Algorithm", "AvailIncludeCloseProfit", "CurrencyID", "OptionRoyaltyPriceType", "AccountID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerTradingParamsField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerTradingParamsField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcBrokerTradingParamsField_InvestorID = NULL;
    Py_ssize_t CThostFtdcBrokerTradingParamsField_InvestorID_length = 0;

    /// 保证金价格类型
    /// typedef char TThostFtdcMarginPriceTypeType
    char CThostFtdcBrokerTradingParamsField_MarginPriceType = 0;

    /// 盈亏算法
    /// typedef char TThostFtdcAlgorithmType
    char CThostFtdcBrokerTradingParamsField_Algorithm = 0;

    /// 可用是否包含平仓盈利
    /// typedef char TThostFtdcIncludeCloseProfitType
    char CThostFtdcBrokerTradingParamsField_AvailIncludeCloseProfit = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcBrokerTradingParamsField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcBrokerTradingParamsField_CurrencyID_length = 0;

    /// 期权权利金价格类型
    /// typedef char TThostFtdcOptionRoyaltyPriceTypeType
    char CThostFtdcBrokerTradingParamsField_OptionRoyaltyPriceType = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcBrokerTradingParamsField_AccountID = NULL;
    Py_ssize_t CThostFtdcBrokerTradingParamsField_AccountID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cccy#cy#", (char **)kwlist
        , &CThostFtdcBrokerTradingParamsField_BrokerID, &CThostFtdcBrokerTradingParamsField_BrokerID_length
        , &CThostFtdcBrokerTradingParamsField_InvestorID, &CThostFtdcBrokerTradingParamsField_InvestorID_length
        , &CThostFtdcBrokerTradingParamsField_MarginPriceType
        , &CThostFtdcBrokerTradingParamsField_Algorithm
        , &CThostFtdcBrokerTradingParamsField_AvailIncludeCloseProfit
        , &CThostFtdcBrokerTradingParamsField_CurrencyID, &CThostFtdcBrokerTradingParamsField_CurrencyID_length
        , &CThostFtdcBrokerTradingParamsField_OptionRoyaltyPriceType
        , &CThostFtdcBrokerTradingParamsField_AccountID, &CThostFtdcBrokerTradingParamsField_AccountID_length
    )) {
        return -1;
    }

    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerTradingParamsField_BrokerID != NULL ) {
        if(CThostFtdcBrokerTradingParamsField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerTradingParamsField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerTradingParamsField_BrokerID, CThostFtdcBrokerTradingParamsField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerTradingParamsField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerTradingParamsField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcBrokerTradingParamsField_InvestorID != NULL ) {
        if(CThostFtdcBrokerTradingParamsField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcBrokerTradingParamsField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcBrokerTradingParamsField_InvestorID, CThostFtdcBrokerTradingParamsField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcBrokerTradingParamsField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcBrokerTradingParamsField_InvestorID = NULL;
    }

    /// 保证金价格类型
    /// typedef char TThostFtdcMarginPriceTypeType
    data->MarginPriceType = CThostFtdcBrokerTradingParamsField_MarginPriceType;

    /// 盈亏算法
    /// typedef char TThostFtdcAlgorithmType
    data->Algorithm = CThostFtdcBrokerTradingParamsField_Algorithm;

    /// 可用是否包含平仓盈利
    /// typedef char TThostFtdcIncludeCloseProfitType
    data->AvailIncludeCloseProfit = CThostFtdcBrokerTradingParamsField_AvailIncludeCloseProfit;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcBrokerTradingParamsField_CurrencyID != NULL ) {
        if(CThostFtdcBrokerTradingParamsField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcBrokerTradingParamsField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcBrokerTradingParamsField_CurrencyID, CThostFtdcBrokerTradingParamsField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcBrokerTradingParamsField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcBrokerTradingParamsField_CurrencyID = NULL;
    }

    /// 期权权利金价格类型
    /// typedef char TThostFtdcOptionRoyaltyPriceTypeType
    data->OptionRoyaltyPriceType = CThostFtdcBrokerTradingParamsField_OptionRoyaltyPriceType;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcBrokerTradingParamsField_AccountID != NULL ) {
        if(CThostFtdcBrokerTradingParamsField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcBrokerTradingParamsField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcBrokerTradingParamsField_AccountID, CThostFtdcBrokerTradingParamsField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcBrokerTradingParamsField_AccountID, sizeof(data->AccountID));
        CThostFtdcBrokerTradingParamsField_AccountID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerTradingParamsFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:c,s:c,s:y,s:c,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "MarginPriceType", data->MarginPriceType
        , "Algorithm", data->Algorithm
        , "AvailIncludeCloseProfit", data->AvailIncludeCloseProfit
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "OptionRoyaltyPriceType", data->OptionRoyaltyPriceType
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerTradingParamsField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerTradingParamsField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerTradingParamsFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerTradingParamsFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerTradingParamsField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcBrokerTradingParamsFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcBrokerTradingParamsFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerTradingParamsField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保证金价格类型
/// typedef char TThostFtdcMarginPriceTypeType
static PyObject *PyCThostFtdcBrokerTradingParamsFieldType_get_MarginPriceType(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->MarginPriceType), 1);
}

static int PyCThostFtdcBrokerTradingParamsFieldType_set_MarginPriceType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MarginPriceType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerTradingParamsField::MarginPriceType)) {
        PyErr_SetString(PyExc_ValueError, "MarginPriceType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    data->MarginPriceType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 盈亏算法
/// typedef char TThostFtdcAlgorithmType
static PyObject *PyCThostFtdcBrokerTradingParamsFieldType_get_Algorithm(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Algorithm), 1);
}

static int PyCThostFtdcBrokerTradingParamsFieldType_set_Algorithm(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Algorithm Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerTradingParamsField::Algorithm)) {
        PyErr_SetString(PyExc_ValueError, "Algorithm must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    data->Algorithm = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 可用是否包含平仓盈利
/// typedef char TThostFtdcIncludeCloseProfitType
static PyObject *PyCThostFtdcBrokerTradingParamsFieldType_get_AvailIncludeCloseProfit(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AvailIncludeCloseProfit), 1);
}

static int PyCThostFtdcBrokerTradingParamsFieldType_set_AvailIncludeCloseProfit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AvailIncludeCloseProfit Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerTradingParamsField::AvailIncludeCloseProfit)) {
        PyErr_SetString(PyExc_ValueError, "AvailIncludeCloseProfit must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    data->AvailIncludeCloseProfit = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcBrokerTradingParamsFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcBrokerTradingParamsFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerTradingParamsField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权权利金价格类型
/// typedef char TThostFtdcOptionRoyaltyPriceTypeType
static PyObject *PyCThostFtdcBrokerTradingParamsFieldType_get_OptionRoyaltyPriceType(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OptionRoyaltyPriceType), 1);
}

static int PyCThostFtdcBrokerTradingParamsFieldType_set_OptionRoyaltyPriceType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionRoyaltyPriceType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerTradingParamsField::OptionRoyaltyPriceType)) {
        PyErr_SetString(PyExc_ValueError, "OptionRoyaltyPriceType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    data->OptionRoyaltyPriceType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcBrokerTradingParamsFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcBrokerTradingParamsFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerTradingParamsField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(self);
    CThostFtdcBrokerTradingParamsField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerTradingParamsFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerTradingParamsFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerTradingParamsFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerTradingParamsFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcBrokerTradingParamsFieldType_get_InvestorID,
    .set = PyCThostFtdcBrokerTradingParamsFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保证金价格类型
    /// typedef char TThostFtdcMarginPriceTypeType
    {
    .name = "MarginPriceType",
    .get = PyCThostFtdcBrokerTradingParamsFieldType_get_MarginPriceType,
    .set = PyCThostFtdcBrokerTradingParamsFieldType_set_MarginPriceType,
    .doc = PyDoc_STR("保证金价格类型"),
    },
    /// 盈亏算法
    /// typedef char TThostFtdcAlgorithmType
    {
    .name = "Algorithm",
    .get = PyCThostFtdcBrokerTradingParamsFieldType_get_Algorithm,
    .set = PyCThostFtdcBrokerTradingParamsFieldType_set_Algorithm,
    .doc = PyDoc_STR("盈亏算法"),
    },
    /// 可用是否包含平仓盈利
    /// typedef char TThostFtdcIncludeCloseProfitType
    {
    .name = "AvailIncludeCloseProfit",
    .get = PyCThostFtdcBrokerTradingParamsFieldType_get_AvailIncludeCloseProfit,
    .set = PyCThostFtdcBrokerTradingParamsFieldType_set_AvailIncludeCloseProfit,
    .doc = PyDoc_STR("可用是否包含平仓盈利"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcBrokerTradingParamsFieldType_get_CurrencyID,
    .set = PyCThostFtdcBrokerTradingParamsFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 期权权利金价格类型
    /// typedef char TThostFtdcOptionRoyaltyPriceTypeType
    {
    .name = "OptionRoyaltyPriceType",
    .get = PyCThostFtdcBrokerTradingParamsFieldType_get_OptionRoyaltyPriceType,
    .set = PyCThostFtdcBrokerTradingParamsFieldType_set_OptionRoyaltyPriceType,
    .doc = PyDoc_STR("期权权利金价格类型"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcBrokerTradingParamsFieldType_get_AccountID,
    .set = PyCThostFtdcBrokerTradingParamsFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerTradingParamsFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerTradingParamsField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("经纪公司交易参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerTradingParamsFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerTradingParamsFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerTradingParamsFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerTradingParamsFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerTradingParamsFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerTradingParamsFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("经纪公司交易参数")},
    {Py_tp_members, PyCThostFtdcBrokerTradingParamsFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerTradingParamsFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerTradingParamsFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerTradingParamsFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerTradingParamsFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerTradingParamsField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerTradingParamsFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerTradingParamsFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerTradingParamsFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerTradingParamsFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerTradingParamsFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerTradingParamsFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerTradingParamsFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerTradingParamsFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerTradingParamsField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerTradingParamsField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}