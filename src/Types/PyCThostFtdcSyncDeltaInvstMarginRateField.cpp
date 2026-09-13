
#include "PyCThostFtdcSyncDeltaInvstMarginRateField.h"

///风险结算追平投资者期货保证金率

static int PyCThostFtdcSyncDeltaInvstMarginRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaInvstMarginRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstMarginRateField_InstrumentID_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcSyncDeltaInvstMarginRateField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaInvstMarginRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstMarginRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaInvstMarginRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstMarginRateField_InvestorID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcSyncDeltaInvstMarginRateField_HedgeFlag = 0;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstMarginRateField_LongMarginRatioByMoney = 0.0;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstMarginRateField_LongMarginRatioByVolume = 0.0;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstMarginRateField_ShortMarginRatioByMoney = 0.0;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstMarginRateField_ShortMarginRatioByVolume = 0.0;

    /// 是否相对交易所收取
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncDeltaInvstMarginRateField_IsRelative = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaInvstMarginRateField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaInvstMarginRateField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddici", (char **)kwlist
        , &CThostFtdcSyncDeltaInvstMarginRateField_InstrumentID, &CThostFtdcSyncDeltaInvstMarginRateField_InstrumentID_length
        , &CThostFtdcSyncDeltaInvstMarginRateField_InvestorRange
        , &CThostFtdcSyncDeltaInvstMarginRateField_BrokerID, &CThostFtdcSyncDeltaInvstMarginRateField_BrokerID_length
        , &CThostFtdcSyncDeltaInvstMarginRateField_InvestorID, &CThostFtdcSyncDeltaInvstMarginRateField_InvestorID_length
        , &CThostFtdcSyncDeltaInvstMarginRateField_HedgeFlag
        , &CThostFtdcSyncDeltaInvstMarginRateField_LongMarginRatioByMoney
        , &CThostFtdcSyncDeltaInvstMarginRateField_LongMarginRatioByVolume
        , &CThostFtdcSyncDeltaInvstMarginRateField_ShortMarginRatioByMoney
        , &CThostFtdcSyncDeltaInvstMarginRateField_ShortMarginRatioByVolume
        , &CThostFtdcSyncDeltaInvstMarginRateField_IsRelative
        , &CThostFtdcSyncDeltaInvstMarginRateField_ActionDirection
        , &CThostFtdcSyncDeltaInvstMarginRateField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaInvstMarginRateField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaInvstMarginRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaInvstMarginRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaInvstMarginRateField_InstrumentID, CThostFtdcSyncDeltaInvstMarginRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaInvstMarginRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaInvstMarginRateField_InstrumentID = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcSyncDeltaInvstMarginRateField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaInvstMarginRateField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaInvstMarginRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaInvstMarginRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaInvstMarginRateField_BrokerID, CThostFtdcSyncDeltaInvstMarginRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaInvstMarginRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaInvstMarginRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaInvstMarginRateField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaInvstMarginRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaInvstMarginRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaInvstMarginRateField_InvestorID, CThostFtdcSyncDeltaInvstMarginRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaInvstMarginRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaInvstMarginRateField_InvestorID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcSyncDeltaInvstMarginRateField_HedgeFlag;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    data->LongMarginRatioByMoney = CThostFtdcSyncDeltaInvstMarginRateField_LongMarginRatioByMoney;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    data->LongMarginRatioByVolume = CThostFtdcSyncDeltaInvstMarginRateField_LongMarginRatioByVolume;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    data->ShortMarginRatioByMoney = CThostFtdcSyncDeltaInvstMarginRateField_ShortMarginRatioByMoney;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    data->ShortMarginRatioByVolume = CThostFtdcSyncDeltaInvstMarginRateField_ShortMarginRatioByVolume;

    /// 是否相对交易所收取
    /// typedef int TThostFtdcBoolType
    data->IsRelative = CThostFtdcSyncDeltaInvstMarginRateField_IsRelative;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaInvstMarginRateField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaInvstMarginRateField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:i,s:c,s:i}"
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "HedgeFlag", data->HedgeFlag
        , "LongMarginRatioByMoney", data->LongMarginRatioByMoney
        , "LongMarginRatioByVolume", data->LongMarginRatioByVolume
        , "ShortMarginRatioByMoney", data->ShortMarginRatioByMoney
        , "ShortMarginRatioByVolume", data->ShortMarginRatioByVolume
        , "IsRelative", data->IsRelative
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstMarginRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstMarginRateField repr");
        return NULL;
    }

    return repr;
}


/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaInvstMarginRateFieldType_members[] = {
    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "LongMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstMarginRateFieldData, data.LongMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstMarginRateFieldData, data.LongMarginRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstMarginRateFieldData, data.ShortMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstMarginRateFieldData, data.ShortMarginRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstMarginRateFieldData, data.IsRelative),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否相对交易所收取")
    },
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstMarginRateFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaInvstMarginRateFieldType_getsets[] = {
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_InvestorRange,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_HedgeFlag,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaInvstMarginRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaInvstMarginRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平投资者期货保证金率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaInvstMarginRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaInvstMarginRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaInvstMarginRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaInvstMarginRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaInvstMarginRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaInvstMarginRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平投资者期货保证金率")},
    {Py_tp_members, PyCThostFtdcSyncDeltaInvstMarginRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaInvstMarginRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaInvstMarginRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaInvstMarginRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaInvstMarginRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaInvstMarginRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvstMarginRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvstMarginRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaInvstMarginRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaInvstMarginRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaInvstMarginRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaInvstMarginRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaInvstMarginRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaInvstMarginRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstMarginRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstMarginRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}