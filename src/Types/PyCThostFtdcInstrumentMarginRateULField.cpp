
#include "PyCThostFtdcInstrumentMarginRateULField.h"

///合约保证金率调整

static int PyCThostFtdcInstrumentMarginRateULFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInstrumentMarginRateULField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateULField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcInstrumentMarginRateULField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInstrumentMarginRateULField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateULField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInstrumentMarginRateULField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateULField_InvestorID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInstrumentMarginRateULField_HedgeFlag = 0;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentMarginRateULField_LongMarginRatioByMoney = 0.0;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInstrumentMarginRateULField_LongMarginRatioByVolume = 0.0;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInstrumentMarginRateULField_ShortMarginRatioByMoney = 0.0;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInstrumentMarginRateULField_ShortMarginRatioByVolume = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInstrumentMarginRateULField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInstrumentMarginRateULField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddy#", (char **)kwlist
        , &CThostFtdcInstrumentMarginRateULField_reserve1, &CThostFtdcInstrumentMarginRateULField_reserve1_length
        , &CThostFtdcInstrumentMarginRateULField_InvestorRange
        , &CThostFtdcInstrumentMarginRateULField_BrokerID, &CThostFtdcInstrumentMarginRateULField_BrokerID_length
        , &CThostFtdcInstrumentMarginRateULField_InvestorID, &CThostFtdcInstrumentMarginRateULField_InvestorID_length
        , &CThostFtdcInstrumentMarginRateULField_HedgeFlag
        , &CThostFtdcInstrumentMarginRateULField_LongMarginRatioByMoney
        , &CThostFtdcInstrumentMarginRateULField_LongMarginRatioByVolume
        , &CThostFtdcInstrumentMarginRateULField_ShortMarginRatioByMoney
        , &CThostFtdcInstrumentMarginRateULField_ShortMarginRatioByVolume
        , &CThostFtdcInstrumentMarginRateULField_InstrumentID, &CThostFtdcInstrumentMarginRateULField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInstrumentMarginRateULField_reserve1 != NULL ) {
        if(CThostFtdcInstrumentMarginRateULField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentMarginRateULField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInstrumentMarginRateULField_reserve1, CThostFtdcInstrumentMarginRateULField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInstrumentMarginRateULField_reserve1, sizeof(data->reserve1));
        CThostFtdcInstrumentMarginRateULField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcInstrumentMarginRateULField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInstrumentMarginRateULField_BrokerID != NULL ) {
        if(CThostFtdcInstrumentMarginRateULField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInstrumentMarginRateULField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInstrumentMarginRateULField_BrokerID, CThostFtdcInstrumentMarginRateULField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInstrumentMarginRateULField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInstrumentMarginRateULField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInstrumentMarginRateULField_InvestorID != NULL ) {
        if(CThostFtdcInstrumentMarginRateULField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInstrumentMarginRateULField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInstrumentMarginRateULField_InvestorID, CThostFtdcInstrumentMarginRateULField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInstrumentMarginRateULField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInstrumentMarginRateULField_InvestorID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInstrumentMarginRateULField_HedgeFlag;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    data->LongMarginRatioByMoney = CThostFtdcInstrumentMarginRateULField_LongMarginRatioByMoney;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    data->LongMarginRatioByVolume = CThostFtdcInstrumentMarginRateULField_LongMarginRatioByVolume;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    data->ShortMarginRatioByMoney = CThostFtdcInstrumentMarginRateULField_ShortMarginRatioByMoney;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    data->ShortMarginRatioByVolume = CThostFtdcInstrumentMarginRateULField_ShortMarginRatioByVolume;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInstrumentMarginRateULField_InstrumentID != NULL ) {
        if(CThostFtdcInstrumentMarginRateULField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentMarginRateULField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInstrumentMarginRateULField_InstrumentID, CThostFtdcInstrumentMarginRateULField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInstrumentMarginRateULField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInstrumentMarginRateULField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInstrumentMarginRateULFieldType_repr(PyObject *self) {

    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "HedgeFlag", data->HedgeFlag
        , "LongMarginRatioByMoney", data->LongMarginRatioByMoney
        , "LongMarginRatioByVolume", data->LongMarginRatioByVolume
        , "ShortMarginRatioByMoney", data->ShortMarginRatioByMoney
        , "ShortMarginRatioByVolume", data->ShortMarginRatioByVolume
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateULField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateULField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInstrumentMarginRateULFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInstrumentMarginRateULFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateULField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcInstrumentMarginRateULFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcInstrumentMarginRateULFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateULField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInstrumentMarginRateULFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInstrumentMarginRateULFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateULField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInstrumentMarginRateULFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInstrumentMarginRateULFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateULField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInstrumentMarginRateULFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInstrumentMarginRateULFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateULField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInstrumentMarginRateULFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInstrumentMarginRateULFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentMarginRateULField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateULFieldData>(self);
    CThostFtdcInstrumentMarginRateULField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInstrumentMarginRateULFieldType_members[] = {
    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "LongMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateULFieldData, data.LongMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateULFieldData, data.LongMarginRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateULFieldData, data.ShortMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcInstrumentMarginRateULFieldData, data.ShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头保证金费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInstrumentMarginRateULFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInstrumentMarginRateULFieldType_get_reserve1,
    .set = PyCThostFtdcInstrumentMarginRateULFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcInstrumentMarginRateULFieldType_get_InvestorRange,
    .set = PyCThostFtdcInstrumentMarginRateULFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInstrumentMarginRateULFieldType_get_BrokerID,
    .set = PyCThostFtdcInstrumentMarginRateULFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInstrumentMarginRateULFieldType_get_InvestorID,
    .set = PyCThostFtdcInstrumentMarginRateULFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInstrumentMarginRateULFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInstrumentMarginRateULFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInstrumentMarginRateULFieldType_get_InstrumentID,
    .set = PyCThostFtdcInstrumentMarginRateULFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInstrumentMarginRateULFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInstrumentMarginRateULField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("合约保证金率调整")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInstrumentMarginRateULFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInstrumentMarginRateULFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInstrumentMarginRateULFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInstrumentMarginRateULFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInstrumentMarginRateULFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInstrumentMarginRateULFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("合约保证金率调整")},
    {Py_tp_members, PyCThostFtdcInstrumentMarginRateULFieldType_members},
    {Py_tp_getset, PyCThostFtdcInstrumentMarginRateULFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInstrumentMarginRateULFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInstrumentMarginRateULFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInstrumentMarginRateULFieldType_spec = {
    .name = "PyCTP.CThostFtdcInstrumentMarginRateULField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInstrumentMarginRateULFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInstrumentMarginRateULFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInstrumentMarginRateULFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInstrumentMarginRateULFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInstrumentMarginRateULFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInstrumentMarginRateULFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInstrumentMarginRateULFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInstrumentMarginRateULFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInstrumentMarginRateULField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentMarginRateULField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}