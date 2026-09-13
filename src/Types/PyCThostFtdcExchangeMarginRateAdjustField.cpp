
#include "PyCThostFtdcExchangeMarginRateAdjustField.h"

///交易所保证金率调整

static int PyCThostFtdcExchangeMarginRateAdjustFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "reserve1", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "ExchLongMarginRatioByMoney", "ExchLongMarginRatioByVolume", "ExchShortMarginRatioByMoney", "ExchShortMarginRatioByVolume", "NoLongMarginRatioByMoney", "NoLongMarginRatioByVolume", "NoShortMarginRatioByMoney", "NoShortMarginRatioByVolume", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcExchangeMarginRateAdjustField_BrokerID = NULL;
    Py_ssize_t CThostFtdcExchangeMarginRateAdjustField_BrokerID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcExchangeMarginRateAdjustField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeMarginRateAdjustField_reserve1_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcExchangeMarginRateAdjustField_HedgeFlag = 0;

    /// 跟随交易所投资者多头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcExchangeMarginRateAdjustField_LongMarginRatioByMoney = 0.0;

    /// 跟随交易所投资者多头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcExchangeMarginRateAdjustField_LongMarginRatioByVolume = 0.0;

    /// 跟随交易所投资者空头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcExchangeMarginRateAdjustField_ShortMarginRatioByMoney = 0.0;

    /// 跟随交易所投资者空头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcExchangeMarginRateAdjustField_ShortMarginRatioByVolume = 0.0;

    /// 交易所多头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcExchangeMarginRateAdjustField_ExchLongMarginRatioByMoney = 0.0;

    /// 交易所多头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcExchangeMarginRateAdjustField_ExchLongMarginRatioByVolume = 0.0;

    /// 交易所空头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcExchangeMarginRateAdjustField_ExchShortMarginRatioByMoney = 0.0;

    /// 交易所空头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcExchangeMarginRateAdjustField_ExchShortMarginRatioByVolume = 0.0;

    /// 不跟随交易所投资者多头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcExchangeMarginRateAdjustField_NoLongMarginRatioByMoney = 0.0;

    /// 不跟随交易所投资者多头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcExchangeMarginRateAdjustField_NoLongMarginRatioByVolume = 0.0;

    /// 不跟随交易所投资者空头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcExchangeMarginRateAdjustField_NoShortMarginRatioByMoney = 0.0;

    /// 不跟随交易所投资者空头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcExchangeMarginRateAdjustField_NoShortMarginRatioByVolume = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcExchangeMarginRateAdjustField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcExchangeMarginRateAdjustField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cddddddddddddy#", (char **)kwlist
        , &CThostFtdcExchangeMarginRateAdjustField_BrokerID, &CThostFtdcExchangeMarginRateAdjustField_BrokerID_length
        , &CThostFtdcExchangeMarginRateAdjustField_reserve1, &CThostFtdcExchangeMarginRateAdjustField_reserve1_length
        , &CThostFtdcExchangeMarginRateAdjustField_HedgeFlag
        , &CThostFtdcExchangeMarginRateAdjustField_LongMarginRatioByMoney
        , &CThostFtdcExchangeMarginRateAdjustField_LongMarginRatioByVolume
        , &CThostFtdcExchangeMarginRateAdjustField_ShortMarginRatioByMoney
        , &CThostFtdcExchangeMarginRateAdjustField_ShortMarginRatioByVolume
        , &CThostFtdcExchangeMarginRateAdjustField_ExchLongMarginRatioByMoney
        , &CThostFtdcExchangeMarginRateAdjustField_ExchLongMarginRatioByVolume
        , &CThostFtdcExchangeMarginRateAdjustField_ExchShortMarginRatioByMoney
        , &CThostFtdcExchangeMarginRateAdjustField_ExchShortMarginRatioByVolume
        , &CThostFtdcExchangeMarginRateAdjustField_NoLongMarginRatioByMoney
        , &CThostFtdcExchangeMarginRateAdjustField_NoLongMarginRatioByVolume
        , &CThostFtdcExchangeMarginRateAdjustField_NoShortMarginRatioByMoney
        , &CThostFtdcExchangeMarginRateAdjustField_NoShortMarginRatioByVolume
        , &CThostFtdcExchangeMarginRateAdjustField_InstrumentID, &CThostFtdcExchangeMarginRateAdjustField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcExchangeMarginRateAdjustField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcExchangeMarginRateAdjustField_BrokerID != NULL ) {
        if(CThostFtdcExchangeMarginRateAdjustField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeMarginRateAdjustField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcExchangeMarginRateAdjustField_BrokerID, CThostFtdcExchangeMarginRateAdjustField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcExchangeMarginRateAdjustField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcExchangeMarginRateAdjustField_BrokerID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcExchangeMarginRateAdjustField_reserve1 != NULL ) {
        if(CThostFtdcExchangeMarginRateAdjustField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcExchangeMarginRateAdjustField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeMarginRateAdjustField_reserve1, CThostFtdcExchangeMarginRateAdjustField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeMarginRateAdjustField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeMarginRateAdjustField_reserve1 = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcExchangeMarginRateAdjustField_HedgeFlag;

    /// 跟随交易所投资者多头保证金率
    /// typedef double TThostFtdcRatioType
    data->LongMarginRatioByMoney = CThostFtdcExchangeMarginRateAdjustField_LongMarginRatioByMoney;

    /// 跟随交易所投资者多头保证金费
    /// typedef double TThostFtdcMoneyType
    data->LongMarginRatioByVolume = CThostFtdcExchangeMarginRateAdjustField_LongMarginRatioByVolume;

    /// 跟随交易所投资者空头保证金率
    /// typedef double TThostFtdcRatioType
    data->ShortMarginRatioByMoney = CThostFtdcExchangeMarginRateAdjustField_ShortMarginRatioByMoney;

    /// 跟随交易所投资者空头保证金费
    /// typedef double TThostFtdcMoneyType
    data->ShortMarginRatioByVolume = CThostFtdcExchangeMarginRateAdjustField_ShortMarginRatioByVolume;

    /// 交易所多头保证金率
    /// typedef double TThostFtdcRatioType
    data->ExchLongMarginRatioByMoney = CThostFtdcExchangeMarginRateAdjustField_ExchLongMarginRatioByMoney;

    /// 交易所多头保证金费
    /// typedef double TThostFtdcMoneyType
    data->ExchLongMarginRatioByVolume = CThostFtdcExchangeMarginRateAdjustField_ExchLongMarginRatioByVolume;

    /// 交易所空头保证金率
    /// typedef double TThostFtdcRatioType
    data->ExchShortMarginRatioByMoney = CThostFtdcExchangeMarginRateAdjustField_ExchShortMarginRatioByMoney;

    /// 交易所空头保证金费
    /// typedef double TThostFtdcMoneyType
    data->ExchShortMarginRatioByVolume = CThostFtdcExchangeMarginRateAdjustField_ExchShortMarginRatioByVolume;

    /// 不跟随交易所投资者多头保证金率
    /// typedef double TThostFtdcRatioType
    data->NoLongMarginRatioByMoney = CThostFtdcExchangeMarginRateAdjustField_NoLongMarginRatioByMoney;

    /// 不跟随交易所投资者多头保证金费
    /// typedef double TThostFtdcMoneyType
    data->NoLongMarginRatioByVolume = CThostFtdcExchangeMarginRateAdjustField_NoLongMarginRatioByVolume;

    /// 不跟随交易所投资者空头保证金率
    /// typedef double TThostFtdcRatioType
    data->NoShortMarginRatioByMoney = CThostFtdcExchangeMarginRateAdjustField_NoShortMarginRatioByMoney;

    /// 不跟随交易所投资者空头保证金费
    /// typedef double TThostFtdcMoneyType
    data->NoShortMarginRatioByVolume = CThostFtdcExchangeMarginRateAdjustField_NoShortMarginRatioByVolume;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcExchangeMarginRateAdjustField_InstrumentID != NULL ) {
        if(CThostFtdcExchangeMarginRateAdjustField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcExchangeMarginRateAdjustField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcExchangeMarginRateAdjustField_InstrumentID, CThostFtdcExchangeMarginRateAdjustField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcExchangeMarginRateAdjustField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcExchangeMarginRateAdjustField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeMarginRateAdjustFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcExchangeMarginRateAdjustField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "HedgeFlag", data->HedgeFlag
        , "LongMarginRatioByMoney", data->LongMarginRatioByMoney
        , "LongMarginRatioByVolume", data->LongMarginRatioByVolume
        , "ShortMarginRatioByMoney", data->ShortMarginRatioByMoney
        , "ShortMarginRatioByVolume", data->ShortMarginRatioByVolume
        , "ExchLongMarginRatioByMoney", data->ExchLongMarginRatioByMoney
        , "ExchLongMarginRatioByVolume", data->ExchLongMarginRatioByVolume
        , "ExchShortMarginRatioByMoney", data->ExchShortMarginRatioByMoney
        , "ExchShortMarginRatioByVolume", data->ExchShortMarginRatioByVolume
        , "NoLongMarginRatioByMoney", data->NoLongMarginRatioByMoney
        , "NoLongMarginRatioByVolume", data->NoLongMarginRatioByVolume
        , "NoShortMarginRatioByMoney", data->NoShortMarginRatioByMoney
        , "NoShortMarginRatioByVolume", data->NoShortMarginRatioByVolume
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeMarginRateAdjustField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeMarginRateAdjustField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcExchangeMarginRateAdjustFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcExchangeMarginRateAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcExchangeMarginRateAdjustFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeMarginRateAdjustField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcExchangeMarginRateAdjustField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcExchangeMarginRateAdjustFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcExchangeMarginRateAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeMarginRateAdjustFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeMarginRateAdjustField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcExchangeMarginRateAdjustField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcExchangeMarginRateAdjustFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcExchangeMarginRateAdjustField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcExchangeMarginRateAdjustFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeMarginRateAdjustField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcExchangeMarginRateAdjustField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcExchangeMarginRateAdjustFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcExchangeMarginRateAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcExchangeMarginRateAdjustFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeMarginRateAdjustField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcExchangeMarginRateAdjustField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeMarginRateAdjustFieldType_members[] = {
    /// 跟随交易所投资者多头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "LongMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.LongMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("跟随交易所投资者多头保证金率")
    },
    /// 跟随交易所投资者多头保证金费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LongMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.LongMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("跟随交易所投资者多头保证金费")
    },
    /// 跟随交易所投资者空头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "ShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.ShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("跟随交易所投资者空头保证金率")
    },
    /// 跟随交易所投资者空头保证金费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.ShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("跟随交易所投资者空头保证金费")
    },
    /// 交易所多头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "ExchLongMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.ExchLongMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所多头保证金率")
    },
    /// 交易所多头保证金费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchLongMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.ExchLongMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所多头保证金费")
    },
    /// 交易所空头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "ExchShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.ExchShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所空头保证金率")
    },
    /// 交易所空头保证金费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.ExchShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所空头保证金费")
    },
    /// 不跟随交易所投资者多头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "NoLongMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.NoLongMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("不跟随交易所投资者多头保证金率")
    },
    /// 不跟随交易所投资者多头保证金费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "NoLongMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.NoLongMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("不跟随交易所投资者多头保证金费")
    },
    /// 不跟随交易所投资者空头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "NoShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.NoShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("不跟随交易所投资者空头保证金率")
    },
    /// 不跟随交易所投资者空头保证金费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "NoShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateAdjustFieldData, data.NoShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("不跟随交易所投资者空头保证金费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeMarginRateAdjustFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcExchangeMarginRateAdjustFieldType_get_BrokerID,
    .set = PyCThostFtdcExchangeMarginRateAdjustFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeMarginRateAdjustFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeMarginRateAdjustFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcExchangeMarginRateAdjustFieldType_get_HedgeFlag,
    .set = PyCThostFtdcExchangeMarginRateAdjustFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcExchangeMarginRateAdjustFieldType_get_InstrumentID,
    .set = PyCThostFtdcExchangeMarginRateAdjustFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeMarginRateAdjustFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeMarginRateAdjustField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所保证金率调整")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeMarginRateAdjustFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeMarginRateAdjustFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeMarginRateAdjustFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeMarginRateAdjustFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeMarginRateAdjustFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeMarginRateAdjustFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所保证金率调整")},
    {Py_tp_members, PyCThostFtdcExchangeMarginRateAdjustFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeMarginRateAdjustFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeMarginRateAdjustFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeMarginRateAdjustFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeMarginRateAdjustFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeMarginRateAdjustField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeMarginRateAdjustFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeMarginRateAdjustFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeMarginRateAdjustFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeMarginRateAdjustFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeMarginRateAdjustFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeMarginRateAdjustFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeMarginRateAdjustFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeMarginRateAdjustFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeMarginRateAdjustField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeMarginRateAdjustField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}