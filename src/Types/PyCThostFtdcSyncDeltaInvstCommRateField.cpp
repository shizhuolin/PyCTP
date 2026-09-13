
#include "PyCThostFtdcSyncDeltaInvstCommRateField.h"

///风险结算追平期货手续费率

static int PyCThostFtdcSyncDeltaInvstCommRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaInvstCommRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstCommRateField_InstrumentID_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcSyncDeltaInvstCommRateField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaInvstCommRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstCommRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaInvstCommRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvstCommRateField_InvestorID_length = 0;

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstCommRateField_OpenRatioByMoney = 0.0;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstCommRateField_OpenRatioByVolume = 0.0;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstCommRateField_CloseRatioByMoney = 0.0;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstCommRateField_CloseRatioByVolume = 0.0;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstCommRateField_CloseTodayRatioByMoney = 0.0;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaInvstCommRateField_CloseTodayRatioByVolume = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaInvstCommRateField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaInvstCommRateField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddci", (char **)kwlist
        , &CThostFtdcSyncDeltaInvstCommRateField_InstrumentID, &CThostFtdcSyncDeltaInvstCommRateField_InstrumentID_length
        , &CThostFtdcSyncDeltaInvstCommRateField_InvestorRange
        , &CThostFtdcSyncDeltaInvstCommRateField_BrokerID, &CThostFtdcSyncDeltaInvstCommRateField_BrokerID_length
        , &CThostFtdcSyncDeltaInvstCommRateField_InvestorID, &CThostFtdcSyncDeltaInvstCommRateField_InvestorID_length
        , &CThostFtdcSyncDeltaInvstCommRateField_OpenRatioByMoney
        , &CThostFtdcSyncDeltaInvstCommRateField_OpenRatioByVolume
        , &CThostFtdcSyncDeltaInvstCommRateField_CloseRatioByMoney
        , &CThostFtdcSyncDeltaInvstCommRateField_CloseRatioByVolume
        , &CThostFtdcSyncDeltaInvstCommRateField_CloseTodayRatioByMoney
        , &CThostFtdcSyncDeltaInvstCommRateField_CloseTodayRatioByVolume
        , &CThostFtdcSyncDeltaInvstCommRateField_ActionDirection
        , &CThostFtdcSyncDeltaInvstCommRateField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaInvstCommRateField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaInvstCommRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaInvstCommRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaInvstCommRateField_InstrumentID, CThostFtdcSyncDeltaInvstCommRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaInvstCommRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaInvstCommRateField_InstrumentID = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcSyncDeltaInvstCommRateField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaInvstCommRateField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaInvstCommRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaInvstCommRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaInvstCommRateField_BrokerID, CThostFtdcSyncDeltaInvstCommRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaInvstCommRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaInvstCommRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaInvstCommRateField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaInvstCommRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaInvstCommRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaInvstCommRateField_InvestorID, CThostFtdcSyncDeltaInvstCommRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaInvstCommRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaInvstCommRateField_InvestorID = NULL;
    }

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByMoney = CThostFtdcSyncDeltaInvstCommRateField_OpenRatioByMoney;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByVolume = CThostFtdcSyncDeltaInvstCommRateField_OpenRatioByVolume;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByMoney = CThostFtdcSyncDeltaInvstCommRateField_CloseRatioByMoney;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByVolume = CThostFtdcSyncDeltaInvstCommRateField_CloseRatioByVolume;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByMoney = CThostFtdcSyncDeltaInvstCommRateField_CloseTodayRatioByMoney;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByVolume = CThostFtdcSyncDeltaInvstCommRateField_CloseTodayRatioByVolume;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaInvstCommRateField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaInvstCommRateField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaInvstCommRateFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "OpenRatioByMoney", data->OpenRatioByMoney
        , "OpenRatioByVolume", data->OpenRatioByVolume
        , "CloseRatioByMoney", data->CloseRatioByMoney
        , "CloseRatioByVolume", data->CloseRatioByVolume
        , "CloseTodayRatioByMoney", data->CloseTodayRatioByMoney
        , "CloseTodayRatioByVolume", data->CloseTodayRatioByVolume
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstCommRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstCommRateField repr");
        return NULL;
    }

    return repr;
}


/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaInvstCommRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaInvstCommRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstCommRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcSyncDeltaInvstCommRateFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcSyncDeltaInvstCommRateFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstCommRateField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaInvstCommRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaInvstCommRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstCommRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaInvstCommRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaInvstCommRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstCommRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaInvstCommRateFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaInvstCommRateFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvstCommRateField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaInvstCommRateField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaInvstCommRateFieldType_members[] = {
    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "OpenRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstCommRateFieldData, data.OpenRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓手续费率")
    },
    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "OpenRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstCommRateFieldData, data.OpenRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓手续费")
    },
    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstCommRateFieldData, data.CloseRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓手续费率")
    },
    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstCommRateFieldData, data.CloseRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓手续费")
    },
    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseTodayRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstCommRateFieldData, data.CloseTodayRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平今手续费率")
    },
    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseTodayRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstCommRateFieldData, data.CloseTodayRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平今手续费")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInvstCommRateFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaInvstCommRateFieldType_getsets[] = {
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaInvstCommRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaInvstCommRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcSyncDeltaInvstCommRateFieldType_get_InvestorRange,
    .set = PyCThostFtdcSyncDeltaInvstCommRateFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaInvstCommRateFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaInvstCommRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaInvstCommRateFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaInvstCommRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaInvstCommRateFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaInvstCommRateFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaInvstCommRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaInvstCommRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平期货手续费率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaInvstCommRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaInvstCommRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaInvstCommRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaInvstCommRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaInvstCommRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaInvstCommRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平期货手续费率")},
    {Py_tp_members, PyCThostFtdcSyncDeltaInvstCommRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaInvstCommRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaInvstCommRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaInvstCommRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaInvstCommRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaInvstCommRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvstCommRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvstCommRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaInvstCommRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaInvstCommRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaInvstCommRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaInvstCommRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaInvstCommRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaInvstCommRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstCommRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstCommRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}