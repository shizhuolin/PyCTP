
#include "PyCThostFtdcSyncDeltaInvstMarginRateULField.h"

///风险结算追平期权标的调整保证金率

static int PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaInvstMarginRateULField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstMarginRateULField_InstrumentID_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcSyncDeltaInvstMarginRateULField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaInvstMarginRateULField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstMarginRateULField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaInvstMarginRateULField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstMarginRateULField_InvestorID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcSyncDeltaInvstMarginRateULField_HedgeFlag = 0;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstMarginRateULField_LongMarginRatioByMoney = 0.0;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstMarginRateULField_LongMarginRatioByVolume = 0.0;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstMarginRateULField_ShortMarginRatioByMoney = 0.0;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInvstMarginRateULField_ShortMarginRatioByVolume = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaInvstMarginRateULField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaInvstMarginRateULField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddci", (char **)kwlist
        , &CThostFtdcSyncDeltaInvstMarginRateULField_InstrumentID, &CThostFtdcSyncDeltaInvstMarginRateULField_InstrumentID_length
        , &CThostFtdcSyncDeltaInvstMarginRateULField_InvestorRange
        , &CThostFtdcSyncDeltaInvstMarginRateULField_BrokerID, &CThostFtdcSyncDeltaInvstMarginRateULField_BrokerID_length
        , &CThostFtdcSyncDeltaInvstMarginRateULField_InvestorID, &CThostFtdcSyncDeltaInvstMarginRateULField_InvestorID_length
        , &CThostFtdcSyncDeltaInvstMarginRateULField_HedgeFlag
        , &CThostFtdcSyncDeltaInvstMarginRateULField_LongMarginRatioByMoney
        , &CThostFtdcSyncDeltaInvstMarginRateULField_LongMarginRatioByVolume
        , &CThostFtdcSyncDeltaInvstMarginRateULField_ShortMarginRatioByMoney
        , &CThostFtdcSyncDeltaInvstMarginRateULField_ShortMarginRatioByVolume
        , &CThostFtdcSyncDeltaInvstMarginRateULField_ActionDirection
        , &CThostFtdcSyncDeltaInvstMarginRateULField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaInvstMarginRateULField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaInvstMarginRateULField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaInvstMarginRateULField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaInvstMarginRateULField_InstrumentID, CThostFtdcSyncDeltaInvstMarginRateULField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaInvstMarginRateULField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaInvstMarginRateULField_InstrumentID = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcSyncDeltaInvstMarginRateULField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaInvstMarginRateULField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaInvstMarginRateULField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaInvstMarginRateULField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaInvstMarginRateULField_BrokerID, CThostFtdcSyncDeltaInvstMarginRateULField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaInvstMarginRateULField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaInvstMarginRateULField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaInvstMarginRateULField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaInvstMarginRateULField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaInvstMarginRateULField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaInvstMarginRateULField_InvestorID, CThostFtdcSyncDeltaInvstMarginRateULField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaInvstMarginRateULField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaInvstMarginRateULField_InvestorID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcSyncDeltaInvstMarginRateULField_HedgeFlag;

    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    data->LongMarginRatioByMoney = CThostFtdcSyncDeltaInvstMarginRateULField_LongMarginRatioByMoney;

    /// 多头保证金费
    /// typedef double TThostFtdcMoneyType
    data->LongMarginRatioByVolume = CThostFtdcSyncDeltaInvstMarginRateULField_LongMarginRatioByVolume;

    /// 空头保证金率
    /// typedef double TThostFtdcRatioType
    data->ShortMarginRatioByMoney = CThostFtdcSyncDeltaInvstMarginRateULField_ShortMarginRatioByMoney;

    /// 空头保证金费
    /// typedef double TThostFtdcMoneyType
    data->ShortMarginRatioByVolume = CThostFtdcSyncDeltaInvstMarginRateULField_ShortMarginRatioByVolume;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaInvstMarginRateULField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaInvstMarginRateULField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:c,s:i}"
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "HedgeFlag", data->HedgeFlag
        , "LongMarginRatioByMoney", data->LongMarginRatioByMoney
        , "LongMarginRatioByVolume", data->LongMarginRatioByVolume
        , "ShortMarginRatioByMoney", data->ShortMarginRatioByMoney
        , "ShortMarginRatioByVolume", data->ShortMarginRatioByVolume
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstMarginRateULField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstMarginRateULField repr");
        return NULL;
    }

    return repr;
}


/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateULField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateULField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateULField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateULField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateULField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstMarginRateULField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstMarginRateULFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstMarginRateULFieldData>(self);
    CThostFtdcSyncDeltaInvstMarginRateULField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_members[] = {
    /// 多头保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "LongMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstMarginRateULFieldData, data.LongMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstMarginRateULFieldData, data.LongMarginRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstMarginRateULFieldData, data.ShortMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstMarginRateULFieldData, data.ShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头保证金费")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstMarginRateULFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_getsets[] = {
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_InvestorRange,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_HedgeFlag,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaInvstMarginRateULField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平期权标的调整保证金率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaInvstMarginRateULFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平期权标的调整保证金率")},
    {Py_tp_members, PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaInvstMarginRateULField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvstMarginRateULFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvstMarginRateULFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaInvstMarginRateULFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaInvstMarginRateULFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstMarginRateULField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstMarginRateULField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}