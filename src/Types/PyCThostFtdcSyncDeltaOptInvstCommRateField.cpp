
#include "PyCThostFtdcSyncDeltaOptInvstCommRateField.h"

///风险结算追平期权手续费率

static int PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "StrikeRatioByMoney", "StrikeRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaOptInvstCommRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaOptInvstCommRateField_InstrumentID_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcSyncDeltaOptInvstCommRateField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaOptInvstCommRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaOptInvstCommRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaOptInvstCommRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaOptInvstCommRateField_InvestorID_length = 0;

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstCommRateField_OpenRatioByMoney = 0.0;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstCommRateField_OpenRatioByVolume = 0.0;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstCommRateField_CloseRatioByMoney = 0.0;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstCommRateField_CloseRatioByVolume = 0.0;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstCommRateField_CloseTodayRatioByMoney = 0.0;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstCommRateField_CloseTodayRatioByVolume = 0.0;

    /// 执行手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstCommRateField_StrikeRatioByMoney = 0.0;

    /// 执行手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstCommRateField_StrikeRatioByVolume = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaOptInvstCommRateField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaOptInvstCommRateField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddddci", (char **)kwlist
        , &CThostFtdcSyncDeltaOptInvstCommRateField_InstrumentID, &CThostFtdcSyncDeltaOptInvstCommRateField_InstrumentID_length
        , &CThostFtdcSyncDeltaOptInvstCommRateField_InvestorRange
        , &CThostFtdcSyncDeltaOptInvstCommRateField_BrokerID, &CThostFtdcSyncDeltaOptInvstCommRateField_BrokerID_length
        , &CThostFtdcSyncDeltaOptInvstCommRateField_InvestorID, &CThostFtdcSyncDeltaOptInvstCommRateField_InvestorID_length
        , &CThostFtdcSyncDeltaOptInvstCommRateField_OpenRatioByMoney
        , &CThostFtdcSyncDeltaOptInvstCommRateField_OpenRatioByVolume
        , &CThostFtdcSyncDeltaOptInvstCommRateField_CloseRatioByMoney
        , &CThostFtdcSyncDeltaOptInvstCommRateField_CloseRatioByVolume
        , &CThostFtdcSyncDeltaOptInvstCommRateField_CloseTodayRatioByMoney
        , &CThostFtdcSyncDeltaOptInvstCommRateField_CloseTodayRatioByVolume
        , &CThostFtdcSyncDeltaOptInvstCommRateField_StrikeRatioByMoney
        , &CThostFtdcSyncDeltaOptInvstCommRateField_StrikeRatioByVolume
        , &CThostFtdcSyncDeltaOptInvstCommRateField_ActionDirection
        , &CThostFtdcSyncDeltaOptInvstCommRateField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaOptInvstCommRateField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaOptInvstCommRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaOptInvstCommRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaOptInvstCommRateField_InstrumentID, CThostFtdcSyncDeltaOptInvstCommRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaOptInvstCommRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaOptInvstCommRateField_InstrumentID = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcSyncDeltaOptInvstCommRateField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaOptInvstCommRateField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaOptInvstCommRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaOptInvstCommRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaOptInvstCommRateField_BrokerID, CThostFtdcSyncDeltaOptInvstCommRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaOptInvstCommRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaOptInvstCommRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaOptInvstCommRateField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaOptInvstCommRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaOptInvstCommRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaOptInvstCommRateField_InvestorID, CThostFtdcSyncDeltaOptInvstCommRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaOptInvstCommRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaOptInvstCommRateField_InvestorID = NULL;
    }

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByMoney = CThostFtdcSyncDeltaOptInvstCommRateField_OpenRatioByMoney;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByVolume = CThostFtdcSyncDeltaOptInvstCommRateField_OpenRatioByVolume;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByMoney = CThostFtdcSyncDeltaOptInvstCommRateField_CloseRatioByMoney;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByVolume = CThostFtdcSyncDeltaOptInvstCommRateField_CloseRatioByVolume;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByMoney = CThostFtdcSyncDeltaOptInvstCommRateField_CloseTodayRatioByMoney;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByVolume = CThostFtdcSyncDeltaOptInvstCommRateField_CloseTodayRatioByVolume;

    /// 执行手续费率
    /// typedef double TThostFtdcRatioType
    data->StrikeRatioByMoney = CThostFtdcSyncDeltaOptInvstCommRateField_StrikeRatioByMoney;

    /// 执行手续费
    /// typedef double TThostFtdcRatioType
    data->StrikeRatioByVolume = CThostFtdcSyncDeltaOptInvstCommRateField_StrikeRatioByVolume;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaOptInvstCommRateField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaOptInvstCommRateField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
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
        , "StrikeRatioByMoney", data->StrikeRatioByMoney
        , "StrikeRatioByVolume", data->StrikeRatioByVolume
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptInvstCommRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptInvstCommRateField repr");
        return NULL;
    }

    return repr;
}


/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptInvstCommRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptInvstCommRateField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptInvstCommRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptInvstCommRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptInvstCommRateField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptInvstCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstCommRateFieldData>(self);
    CThostFtdcSyncDeltaOptInvstCommRateField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_members[] = {
    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "OpenRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData, data.OpenRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData, data.OpenRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData, data.CloseRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData, data.CloseRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData, data.CloseTodayRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData, data.CloseTodayRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平今手续费")
    },
    /// 执行手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "StrikeRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData, data.StrikeRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行手续费率")
    },
    /// 执行手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "StrikeRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData, data.StrikeRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行手续费")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_getsets[] = {
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_get_InvestorRange,
    .set = PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaOptInvstCommRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平期权手续费率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平期权手续费率")},
    {Py_tp_members, PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaOptInvstCommRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaOptInvstCommRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaOptInvstCommRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaOptInvstCommRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaOptInvstCommRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaOptInvstCommRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}