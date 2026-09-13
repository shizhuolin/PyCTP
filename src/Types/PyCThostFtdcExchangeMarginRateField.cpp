
#include "PyCThostFtdcExchangeMarginRateField.h"

///交易所保证金率

static int PyCThostFtdcExchangeMarginRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "reserve1", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "ExchangeID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcExchangeMarginRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcExchangeMarginRateField_BrokerID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcExchangeMarginRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeMarginRateField_reserve1_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcExchangeMarginRateField_HedgeFlag = 0;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcExchangeMarginRateField_LongMarginRatioByMoney = 0.0;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcExchangeMarginRateField_LongMarginRatioByVolume = 0.0;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcExchangeMarginRateField_ShortMarginRatioByMoney = 0.0;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcExchangeMarginRateField_ShortMarginRatioByVolume = 0.0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeMarginRateField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeMarginRateField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcExchangeMarginRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcExchangeMarginRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cddddy#y#", (char **)kwlist
        , &CThostFtdcExchangeMarginRateField_BrokerID, &CThostFtdcExchangeMarginRateField_BrokerID_length
        , &CThostFtdcExchangeMarginRateField_reserve1, &CThostFtdcExchangeMarginRateField_reserve1_length
        , &CThostFtdcExchangeMarginRateField_HedgeFlag
        , &CThostFtdcExchangeMarginRateField_LongMarginRatioByMoney
        , &CThostFtdcExchangeMarginRateField_LongMarginRatioByVolume
        , &CThostFtdcExchangeMarginRateField_ShortMarginRatioByMoney
        , &CThostFtdcExchangeMarginRateField_ShortMarginRatioByVolume
        , &CThostFtdcExchangeMarginRateField_ExchangeID, &CThostFtdcExchangeMarginRateField_ExchangeID_length
        , &CThostFtdcExchangeMarginRateField_InstrumentID, &CThostFtdcExchangeMarginRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcExchangeMarginRateField_BrokerID != NULL ) {
        if(CThostFtdcExchangeMarginRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeMarginRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcExchangeMarginRateField_BrokerID, CThostFtdcExchangeMarginRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcExchangeMarginRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcExchangeMarginRateField_BrokerID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcExchangeMarginRateField_reserve1 != NULL ) {
        if(CThostFtdcExchangeMarginRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcExchangeMarginRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeMarginRateField_reserve1, CThostFtdcExchangeMarginRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeMarginRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeMarginRateField_reserve1 = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcExchangeMarginRateField_HedgeFlag;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    data->LongMarginRatioByMoney = CThostFtdcExchangeMarginRateField_LongMarginRatioByMoney;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    data->LongMarginRatioByVolume = CThostFtdcExchangeMarginRateField_LongMarginRatioByVolume;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    data->ShortMarginRatioByMoney = CThostFtdcExchangeMarginRateField_ShortMarginRatioByMoney;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    data->ShortMarginRatioByVolume = CThostFtdcExchangeMarginRateField_ShortMarginRatioByVolume;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeMarginRateField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeMarginRateField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeMarginRateField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeMarginRateField_ExchangeID, CThostFtdcExchangeMarginRateField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeMarginRateField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeMarginRateField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcExchangeMarginRateField_InstrumentID != NULL ) {
        if(CThostFtdcExchangeMarginRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcExchangeMarginRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcExchangeMarginRateField_InstrumentID, CThostFtdcExchangeMarginRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcExchangeMarginRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcExchangeMarginRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeMarginRateFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "HedgeFlag", data->HedgeFlag
        , "LongMarginRatioByMoney", data->LongMarginRatioByMoney
        , "LongMarginRatioByVolume", data->LongMarginRatioByVolume
        , "ShortMarginRatioByMoney", data->ShortMarginRatioByMoney
        , "ShortMarginRatioByVolume", data->ShortMarginRatioByVolume
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeMarginRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeMarginRateField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcExchangeMarginRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcExchangeMarginRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeMarginRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcExchangeMarginRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeMarginRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeMarginRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcExchangeMarginRateFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcExchangeMarginRateFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeMarginRateField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeMarginRateFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeMarginRateFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeMarginRateField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcExchangeMarginRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcExchangeMarginRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeMarginRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(self);
    CThostFtdcExchangeMarginRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeMarginRateFieldType_members[] = {
    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "LongMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeMarginRateFieldData, data.LongMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcExchangeMarginRateFieldData, data.LongMarginRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcExchangeMarginRateFieldData, data.ShortMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcExchangeMarginRateFieldData, data.ShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头保证金费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeMarginRateFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcExchangeMarginRateFieldType_get_BrokerID,
    .set = PyCThostFtdcExchangeMarginRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeMarginRateFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeMarginRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcExchangeMarginRateFieldType_get_HedgeFlag,
    .set = PyCThostFtdcExchangeMarginRateFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeMarginRateFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeMarginRateFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcExchangeMarginRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcExchangeMarginRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeMarginRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeMarginRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所保证金率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeMarginRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeMarginRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeMarginRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeMarginRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeMarginRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeMarginRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所保证金率")},
    {Py_tp_members, PyCThostFtdcExchangeMarginRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeMarginRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeMarginRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeMarginRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeMarginRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeMarginRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeMarginRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeMarginRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeMarginRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeMarginRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeMarginRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeMarginRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeMarginRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeMarginRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeMarginRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeMarginRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}