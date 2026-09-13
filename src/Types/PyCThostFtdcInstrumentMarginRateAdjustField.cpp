
#include "PyCThostFtdcInstrumentMarginRateAdjustField.h"

///合约保证金率调整

static int PyCThostFtdcInstrumentMarginRateAdjustFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInstrumentMarginRateAdjustField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateAdjustField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcInstrumentMarginRateAdjustField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInstrumentMarginRateAdjustField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateAdjustField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInstrumentMarginRateAdjustField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateAdjustField_InvestorID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInstrumentMarginRateAdjustField_HedgeFlag = 0;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentMarginRateAdjustField_LongMarginRatioByMoney = 0.0;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInstrumentMarginRateAdjustField_LongMarginRatioByVolume = 0.0;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentMarginRateAdjustField_ShortMarginRatioByMoney = 0.0;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInstrumentMarginRateAdjustField_ShortMarginRatioByVolume = 0.0;

    /// 是否相对交易所收取
    /// typedef int TThostFtdcBoolType
    int CThostFtdcInstrumentMarginRateAdjustField_IsRelative = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInstrumentMarginRateAdjustField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateAdjustField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddiy#", (char **)kwlist
        , &CThostFtdcInstrumentMarginRateAdjustField_reserve1, &CThostFtdcInstrumentMarginRateAdjustField_reserve1_length
        , &CThostFtdcInstrumentMarginRateAdjustField_InvestorRange
        , &CThostFtdcInstrumentMarginRateAdjustField_BrokerID, &CThostFtdcInstrumentMarginRateAdjustField_BrokerID_length
        , &CThostFtdcInstrumentMarginRateAdjustField_InvestorID, &CThostFtdcInstrumentMarginRateAdjustField_InvestorID_length
        , &CThostFtdcInstrumentMarginRateAdjustField_HedgeFlag
        , &CThostFtdcInstrumentMarginRateAdjustField_LongMarginRatioByMoney
        , &CThostFtdcInstrumentMarginRateAdjustField_LongMarginRatioByVolume
        , &CThostFtdcInstrumentMarginRateAdjustField_ShortMarginRatioByMoney
        , &CThostFtdcInstrumentMarginRateAdjustField_ShortMarginRatioByVolume
        , &CThostFtdcInstrumentMarginRateAdjustField_IsRelative
        , &CThostFtdcInstrumentMarginRateAdjustField_InstrumentID, &CThostFtdcInstrumentMarginRateAdjustField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInstrumentMarginRateAdjustField_reserve1 != NULL ) {
        if(CThostFtdcInstrumentMarginRateAdjustField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentMarginRateAdjustField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInstrumentMarginRateAdjustField_reserve1, CThostFtdcInstrumentMarginRateAdjustField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInstrumentMarginRateAdjustField_reserve1, sizeof(data->reserve1));
        CThostFtdcInstrumentMarginRateAdjustField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcInstrumentMarginRateAdjustField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInstrumentMarginRateAdjustField_BrokerID != NULL ) {
        if(CThostFtdcInstrumentMarginRateAdjustField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInstrumentMarginRateAdjustField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInstrumentMarginRateAdjustField_BrokerID, CThostFtdcInstrumentMarginRateAdjustField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInstrumentMarginRateAdjustField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInstrumentMarginRateAdjustField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInstrumentMarginRateAdjustField_InvestorID != NULL ) {
        if(CThostFtdcInstrumentMarginRateAdjustField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInstrumentMarginRateAdjustField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInstrumentMarginRateAdjustField_InvestorID, CThostFtdcInstrumentMarginRateAdjustField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInstrumentMarginRateAdjustField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInstrumentMarginRateAdjustField_InvestorID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInstrumentMarginRateAdjustField_HedgeFlag;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    data->LongMarginRatioByMoney = CThostFtdcInstrumentMarginRateAdjustField_LongMarginRatioByMoney;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    data->LongMarginRatioByVolume = CThostFtdcInstrumentMarginRateAdjustField_LongMarginRatioByVolume;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    data->ShortMarginRatioByMoney = CThostFtdcInstrumentMarginRateAdjustField_ShortMarginRatioByMoney;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    data->ShortMarginRatioByVolume = CThostFtdcInstrumentMarginRateAdjustField_ShortMarginRatioByVolume;

    /// 是否相对交易所收取
    /// typedef int TThostFtdcBoolType
    data->IsRelative = CThostFtdcInstrumentMarginRateAdjustField_IsRelative;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInstrumentMarginRateAdjustField_InstrumentID != NULL ) {
        if(CThostFtdcInstrumentMarginRateAdjustField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentMarginRateAdjustField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInstrumentMarginRateAdjustField_InstrumentID, CThostFtdcInstrumentMarginRateAdjustField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInstrumentMarginRateAdjustField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInstrumentMarginRateAdjustField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInstrumentMarginRateAdjustFieldType_repr(PyObject *self) {

    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateAdjustField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateAdjustField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateAdjustField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateAdjustField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateAdjustField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateAdjustField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateAdjustField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateAdjustField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateAdjustFieldData>(self);
    CThostFtdcInstrumentMarginRateAdjustField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInstrumentMarginRateAdjustFieldType_members[] = {
    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "LongMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateAdjustFieldData, data.LongMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateAdjustFieldData, data.LongMarginRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateAdjustFieldData, data.ShortMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateAdjustFieldData, data.ShortMarginRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateAdjustFieldData, data.IsRelative),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否相对交易所收取")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInstrumentMarginRateAdjustFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_reserve1,
    .set = PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_InvestorRange,
    .set = PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_BrokerID,
    .set = PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_InvestorID,
    .set = PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInstrumentMarginRateAdjustFieldType_get_InstrumentID,
    .set = PyCThostFtdcInstrumentMarginRateAdjustFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInstrumentMarginRateAdjustFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInstrumentMarginRateAdjustField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("合约保证金率调整")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInstrumentMarginRateAdjustFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInstrumentMarginRateAdjustFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInstrumentMarginRateAdjustFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInstrumentMarginRateAdjustFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInstrumentMarginRateAdjustFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInstrumentMarginRateAdjustFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("合约保证金率调整")},
    {Py_tp_members, PyCThostFtdcInstrumentMarginRateAdjustFieldType_members},
    {Py_tp_getset, PyCThostFtdcInstrumentMarginRateAdjustFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInstrumentMarginRateAdjustFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInstrumentMarginRateAdjustFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInstrumentMarginRateAdjustFieldType_spec = {
    .name = "PyCTP.CThostFtdcInstrumentMarginRateAdjustField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInstrumentMarginRateAdjustFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInstrumentMarginRateAdjustFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInstrumentMarginRateAdjustFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInstrumentMarginRateAdjustFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInstrumentMarginRateAdjustFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInstrumentMarginRateAdjustFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInstrumentMarginRateAdjustFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInstrumentMarginRateAdjustFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInstrumentMarginRateAdjustField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentMarginRateAdjustField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}