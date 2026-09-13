
#include "PyCThostFtdcBrokerDepositField.h"

///经纪公司资金

static int PyCThostFtdcBrokerDepositFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "BrokerID", "ParticipantID", "ExchangeID", "PreBalance", "CurrMargin", "CloseProfit", "Balance", "Deposit", "Withdraw", "Available", "Reserve", "FrozenMargin", NULL };


    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcBrokerDepositField_TradingDay = NULL;
    Py_ssize_t CThostFtdcBrokerDepositField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerDepositField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerDepositField_BrokerID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcBrokerDepositField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcBrokerDepositField_ParticipantID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcBrokerDepositField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcBrokerDepositField_ExchangeID_length = 0;

    /// 上次结算准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcBrokerDepositField_PreBalance = 0.0;

    /// 当前保证金总额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcBrokerDepositField_CurrMargin = 0.0;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcBrokerDepositField_CloseProfit = 0.0;

    /// 期货结算准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcBrokerDepositField_Balance = 0.0;

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcBrokerDepositField_Deposit = 0.0;

    /// 出金金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcBrokerDepositField_Withdraw = 0.0;

    /// 可提资金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcBrokerDepositField_Available = 0.0;

    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcBrokerDepositField_Reserve = 0.0;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcBrokerDepositField_FrozenMargin = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddd", (char **)kwlist
        , &CThostFtdcBrokerDepositField_TradingDay, &CThostFtdcBrokerDepositField_TradingDay_length
        , &CThostFtdcBrokerDepositField_BrokerID, &CThostFtdcBrokerDepositField_BrokerID_length
        , &CThostFtdcBrokerDepositField_ParticipantID, &CThostFtdcBrokerDepositField_ParticipantID_length
        , &CThostFtdcBrokerDepositField_ExchangeID, &CThostFtdcBrokerDepositField_ExchangeID_length
        , &CThostFtdcBrokerDepositField_PreBalance
        , &CThostFtdcBrokerDepositField_CurrMargin
        , &CThostFtdcBrokerDepositField_CloseProfit
        , &CThostFtdcBrokerDepositField_Balance
        , &CThostFtdcBrokerDepositField_Deposit
        , &CThostFtdcBrokerDepositField_Withdraw
        , &CThostFtdcBrokerDepositField_Available
        , &CThostFtdcBrokerDepositField_Reserve
        , &CThostFtdcBrokerDepositField_FrozenMargin
    )) {
        return -1;
    }

    PyCThostFtdcBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerDepositFieldData>(self);
    CThostFtdcBrokerDepositField *data = &(extra->data);


    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcBrokerDepositField_TradingDay != NULL ) {
        if(CThostFtdcBrokerDepositField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcBrokerDepositField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcBrokerDepositField_TradingDay, CThostFtdcBrokerDepositField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcBrokerDepositField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcBrokerDepositField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerDepositField_BrokerID != NULL ) {
        if(CThostFtdcBrokerDepositField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerDepositField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerDepositField_BrokerID, CThostFtdcBrokerDepositField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerDepositField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerDepositField_BrokerID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcBrokerDepositField_ParticipantID != NULL ) {
        if(CThostFtdcBrokerDepositField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerDepositField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcBrokerDepositField_ParticipantID, CThostFtdcBrokerDepositField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcBrokerDepositField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcBrokerDepositField_ParticipantID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcBrokerDepositField_ExchangeID != NULL ) {
        if(CThostFtdcBrokerDepositField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcBrokerDepositField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcBrokerDepositField_ExchangeID, CThostFtdcBrokerDepositField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcBrokerDepositField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcBrokerDepositField_ExchangeID = NULL;
    }

    /// 上次结算准备金
    /// typedef double TThostFtdcMoneyType
    data->PreBalance = CThostFtdcBrokerDepositField_PreBalance;

    /// 当前保证金总额
    /// typedef double TThostFtdcMoneyType
    data->CurrMargin = CThostFtdcBrokerDepositField_CurrMargin;

    /// 平仓盈亏
    /// typedef double TThostFtdcMoneyType
    data->CloseProfit = CThostFtdcBrokerDepositField_CloseProfit;

    /// 期货结算准备金
    /// typedef double TThostFtdcMoneyType
    data->Balance = CThostFtdcBrokerDepositField_Balance;

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    data->Deposit = CThostFtdcBrokerDepositField_Deposit;

    /// 出金金额
    /// typedef double TThostFtdcMoneyType
    data->Withdraw = CThostFtdcBrokerDepositField_Withdraw;

    /// 可提资金
    /// typedef double TThostFtdcMoneyType
    data->Available = CThostFtdcBrokerDepositField_Available;

    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    data->Reserve = CThostFtdcBrokerDepositField_Reserve;

    /// 冻结的保证金
    /// typedef double TThostFtdcMoneyType
    data->FrozenMargin = CThostFtdcBrokerDepositField_FrozenMargin;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerDepositFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerDepositFieldData>(self);
    CThostFtdcBrokerDepositField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "PreBalance", data->PreBalance
        , "CurrMargin", data->CurrMargin
        , "CloseProfit", data->CloseProfit
        , "Balance", data->Balance
        , "Deposit", data->Deposit
        , "Withdraw", data->Withdraw
        , "Available", data->Available
        , "Reserve", data->Reserve
        , "FrozenMargin", data->FrozenMargin
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerDepositField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerDepositField repr");
        return NULL;
    }

    return repr;
}


/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcBrokerDepositFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerDepositFieldData>(self);
    CThostFtdcBrokerDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcBrokerDepositFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerDepositField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerDepositFieldData>(self);
    CThostFtdcBrokerDepositField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerDepositFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerDepositFieldData>(self);
    CThostFtdcBrokerDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerDepositFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerDepositField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerDepositFieldData>(self);
    CThostFtdcBrokerDepositField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcBrokerDepositFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerDepositFieldData>(self);
    CThostFtdcBrokerDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcBrokerDepositFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerDepositField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerDepositFieldData>(self);
    CThostFtdcBrokerDepositField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcBrokerDepositFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerDepositFieldData>(self);
    CThostFtdcBrokerDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcBrokerDepositFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerDepositField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerDepositFieldData>(self);
    CThostFtdcBrokerDepositField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerDepositFieldType_members[] = {
    /// 上次结算准备金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PreBalance",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerDepositFieldData, data.PreBalance),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次结算准备金")
    },
    /// 当前保证金总额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CurrMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerDepositFieldData, data.CurrMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("当前保证金总额")
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
        .offset = offsetof(PyCThostFtdcBrokerDepositFieldData, data.CloseProfit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓盈亏")
    },
    /// 期货结算准备金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Balance",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerDepositFieldData, data.Balance),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货结算准备金")
    },
    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Deposit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerDepositFieldData, data.Deposit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("入金金额")
    },
    /// 出金金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Withdraw",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerDepositFieldData, data.Withdraw),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("出金金额")
    },
    /// 可提资金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Available",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerDepositFieldData, data.Available),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("可提资金")
    },
    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Reserve",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerDepositFieldData, data.Reserve),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("基本准备金")
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
        .offset = offsetof(PyCThostFtdcBrokerDepositFieldData, data.FrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("冻结的保证金")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerDepositFieldType_getsets[] = {
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcBrokerDepositFieldType_get_TradingDay,
    .set = PyCThostFtdcBrokerDepositFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerDepositFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerDepositFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcBrokerDepositFieldType_get_ParticipantID,
    .set = PyCThostFtdcBrokerDepositFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcBrokerDepositFieldType_get_ExchangeID,
    .set = PyCThostFtdcBrokerDepositFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerDepositFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerDepositField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("经纪公司资金")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerDepositFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerDepositFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerDepositFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerDepositFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerDepositFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerDepositFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("经纪公司资金")},
    {Py_tp_members, PyCThostFtdcBrokerDepositFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerDepositFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerDepositFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerDepositFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerDepositFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerDepositField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerDepositFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerDepositFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerDepositFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerDepositFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerDepositFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerDepositFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerDepositFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerDepositFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerDepositField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerDepositField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}