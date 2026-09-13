
#include "PyCThostFtdcSyncingInstrumentMarginRateField.h"

///正在同步中的合约保证金率

static int PyCThostFtdcSyncingInstrumentMarginRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcSyncingInstrumentMarginRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentMarginRateField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcSyncingInstrumentMarginRateField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncingInstrumentMarginRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentMarginRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncingInstrumentMarginRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentMarginRateField_InvestorID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcSyncingInstrumentMarginRateField_HedgeFlag = 0;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncingInstrumentMarginRateField_LongMarginRatioByMoney = 0.0;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInstrumentMarginRateField_LongMarginRatioByVolume = 0.0;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncingInstrumentMarginRateField_ShortMarginRatioByMoney = 0.0;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncingInstrumentMarginRateField_ShortMarginRatioByVolume = 0.0;

    /// 是否相对交易所收取
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncingInstrumentMarginRateField_IsRelative = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncingInstrumentMarginRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentMarginRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddiy#", (char **)kwlist
        , &CThostFtdcSyncingInstrumentMarginRateField_reserve1, &CThostFtdcSyncingInstrumentMarginRateField_reserve1_length
        , &CThostFtdcSyncingInstrumentMarginRateField_InvestorRange
        , &CThostFtdcSyncingInstrumentMarginRateField_BrokerID, &CThostFtdcSyncingInstrumentMarginRateField_BrokerID_length
        , &CThostFtdcSyncingInstrumentMarginRateField_InvestorID, &CThostFtdcSyncingInstrumentMarginRateField_InvestorID_length
        , &CThostFtdcSyncingInstrumentMarginRateField_HedgeFlag
        , &CThostFtdcSyncingInstrumentMarginRateField_LongMarginRatioByMoney
        , &CThostFtdcSyncingInstrumentMarginRateField_LongMarginRatioByVolume
        , &CThostFtdcSyncingInstrumentMarginRateField_ShortMarginRatioByMoney
        , &CThostFtdcSyncingInstrumentMarginRateField_ShortMarginRatioByVolume
        , &CThostFtdcSyncingInstrumentMarginRateField_IsRelative
        , &CThostFtdcSyncingInstrumentMarginRateField_InstrumentID, &CThostFtdcSyncingInstrumentMarginRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcSyncingInstrumentMarginRateField_reserve1 != NULL ) {
        if(CThostFtdcSyncingInstrumentMarginRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcSyncingInstrumentMarginRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcSyncingInstrumentMarginRateField_reserve1, CThostFtdcSyncingInstrumentMarginRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcSyncingInstrumentMarginRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcSyncingInstrumentMarginRateField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcSyncingInstrumentMarginRateField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncingInstrumentMarginRateField_BrokerID != NULL ) {
        if(CThostFtdcSyncingInstrumentMarginRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncingInstrumentMarginRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncingInstrumentMarginRateField_BrokerID, CThostFtdcSyncingInstrumentMarginRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncingInstrumentMarginRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncingInstrumentMarginRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncingInstrumentMarginRateField_InvestorID != NULL ) {
        if(CThostFtdcSyncingInstrumentMarginRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncingInstrumentMarginRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncingInstrumentMarginRateField_InvestorID, CThostFtdcSyncingInstrumentMarginRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncingInstrumentMarginRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncingInstrumentMarginRateField_InvestorID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcSyncingInstrumentMarginRateField_HedgeFlag;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    data->LongMarginRatioByMoney = CThostFtdcSyncingInstrumentMarginRateField_LongMarginRatioByMoney;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    data->LongMarginRatioByVolume = CThostFtdcSyncingInstrumentMarginRateField_LongMarginRatioByVolume;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    data->ShortMarginRatioByMoney = CThostFtdcSyncingInstrumentMarginRateField_ShortMarginRatioByMoney;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    data->ShortMarginRatioByVolume = CThostFtdcSyncingInstrumentMarginRateField_ShortMarginRatioByVolume;

    /// 是否相对交易所收取
    /// typedef int TThostFtdcBoolType
    data->IsRelative = CThostFtdcSyncingInstrumentMarginRateField_IsRelative;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncingInstrumentMarginRateField_InstrumentID != NULL ) {
        if(CThostFtdcSyncingInstrumentMarginRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncingInstrumentMarginRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncingInstrumentMarginRateField_InstrumentID, CThostFtdcSyncingInstrumentMarginRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncingInstrumentMarginRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncingInstrumentMarginRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncingInstrumentMarginRateFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:i,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "HedgeFlag", data->HedgeFlag
        , "LongMarginRatioByMoney", data->LongMarginRatioByMoney
        , "LongMarginRatioByVolume", data->LongMarginRatioByVolume
        , "ShortMarginRatioByMoney", data->ShortMarginRatioByMoney
        , "ShortMarginRatioByVolume", data->ShortMarginRatioByVolume
        , "IsRelative", data->IsRelative
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInstrumentMarginRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInstrumentMarginRateField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentMarginRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentMarginRateField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentMarginRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentMarginRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentMarginRateField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentMarginRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentMarginRateFieldData>(self);
    CThostFtdcSyncingInstrumentMarginRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncingInstrumentMarginRateFieldType_members[] = {
    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "LongMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingInstrumentMarginRateFieldData, data.LongMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头保证金率")
    },
    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingInstrumentMarginRateFieldData, data.LongMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("多头保证金费")
    },
    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "ShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingInstrumentMarginRateFieldData, data.ShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头保证金率")
    },
    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingInstrumentMarginRateFieldData, data.ShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头保证金费")
    },
    /// 是否相对交易所收取
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsRelative",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingInstrumentMarginRateFieldData, data.IsRelative),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否相对交易所收取")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncingInstrumentMarginRateFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_reserve1,
    .set = PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_InvestorRange,
    .set = PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_HedgeFlag,
    .set = PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncingInstrumentMarginRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncingInstrumentMarginRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncingInstrumentMarginRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncingInstrumentMarginRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("正在同步中的合约保证金率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncingInstrumentMarginRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncingInstrumentMarginRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncingInstrumentMarginRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncingInstrumentMarginRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncingInstrumentMarginRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncingInstrumentMarginRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("正在同步中的合约保证金率")},
    {Py_tp_members, PyCThostFtdcSyncingInstrumentMarginRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncingInstrumentMarginRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncingInstrumentMarginRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncingInstrumentMarginRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncingInstrumentMarginRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncingInstrumentMarginRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncingInstrumentMarginRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncingInstrumentMarginRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncingInstrumentMarginRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncingInstrumentMarginRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncingInstrumentMarginRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncingInstrumentMarginRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncingInstrumentMarginRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncingInstrumentMarginRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncingInstrumentMarginRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInstrumentMarginRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}