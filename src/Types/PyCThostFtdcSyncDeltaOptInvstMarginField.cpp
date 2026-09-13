
#include "PyCThostFtdcSyncDeltaOptInvstMarginField.h"

///风险结算追平中金现货期权投资者保证金率

static int PyCThostFtdcSyncDeltaOptInvstMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "SShortMarginRatioByMoney", "SShortMarginRatioByVolume", "HShortMarginRatioByMoney", "HShortMarginRatioByVolume", "AShortMarginRatioByMoney", "AShortMarginRatioByVolume", "IsRelative", "MShortMarginRatioByMoney", "MShortMarginRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaOptInvstMarginField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaOptInvstMarginField_InstrumentID_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcSyncDeltaOptInvstMarginField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaOptInvstMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaOptInvstMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaOptInvstMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaOptInvstMarginField_InvestorID_length = 0;

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstMarginField_SShortMarginRatioByMoney = 0.0;

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaOptInvstMarginField_SShortMarginRatioByVolume = 0.0;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstMarginField_HShortMarginRatioByMoney = 0.0;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaOptInvstMarginField_HShortMarginRatioByVolume = 0.0;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstMarginField_AShortMarginRatioByMoney = 0.0;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaOptInvstMarginField_AShortMarginRatioByVolume = 0.0;

    /// 是否跟随交易所收取
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncDeltaOptInvstMarginField_IsRelative = 0;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptInvstMarginField_MShortMarginRatioByMoney = 0.0;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaOptInvstMarginField_MShortMarginRatioByVolume = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaOptInvstMarginField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaOptInvstMarginField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddiddci", (char **)kwlist
        , &CThostFtdcSyncDeltaOptInvstMarginField_InstrumentID, &CThostFtdcSyncDeltaOptInvstMarginField_InstrumentID_length
        , &CThostFtdcSyncDeltaOptInvstMarginField_InvestorRange
        , &CThostFtdcSyncDeltaOptInvstMarginField_BrokerID, &CThostFtdcSyncDeltaOptInvstMarginField_BrokerID_length
        , &CThostFtdcSyncDeltaOptInvstMarginField_InvestorID, &CThostFtdcSyncDeltaOptInvstMarginField_InvestorID_length
        , &CThostFtdcSyncDeltaOptInvstMarginField_SShortMarginRatioByMoney
        , &CThostFtdcSyncDeltaOptInvstMarginField_SShortMarginRatioByVolume
        , &CThostFtdcSyncDeltaOptInvstMarginField_HShortMarginRatioByMoney
        , &CThostFtdcSyncDeltaOptInvstMarginField_HShortMarginRatioByVolume
        , &CThostFtdcSyncDeltaOptInvstMarginField_AShortMarginRatioByMoney
        , &CThostFtdcSyncDeltaOptInvstMarginField_AShortMarginRatioByVolume
        , &CThostFtdcSyncDeltaOptInvstMarginField_IsRelative
        , &CThostFtdcSyncDeltaOptInvstMarginField_MShortMarginRatioByMoney
        , &CThostFtdcSyncDeltaOptInvstMarginField_MShortMarginRatioByVolume
        , &CThostFtdcSyncDeltaOptInvstMarginField_ActionDirection
        , &CThostFtdcSyncDeltaOptInvstMarginField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaOptInvstMarginField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaOptInvstMarginField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaOptInvstMarginField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaOptInvstMarginField_InstrumentID, CThostFtdcSyncDeltaOptInvstMarginField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaOptInvstMarginField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaOptInvstMarginField_InstrumentID = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcSyncDeltaOptInvstMarginField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaOptInvstMarginField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaOptInvstMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaOptInvstMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaOptInvstMarginField_BrokerID, CThostFtdcSyncDeltaOptInvstMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaOptInvstMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaOptInvstMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaOptInvstMarginField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaOptInvstMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaOptInvstMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaOptInvstMarginField_InvestorID, CThostFtdcSyncDeltaOptInvstMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaOptInvstMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaOptInvstMarginField_InvestorID = NULL;
    }

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->SShortMarginRatioByMoney = CThostFtdcSyncDeltaOptInvstMarginField_SShortMarginRatioByMoney;

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->SShortMarginRatioByVolume = CThostFtdcSyncDeltaOptInvstMarginField_SShortMarginRatioByVolume;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->HShortMarginRatioByMoney = CThostFtdcSyncDeltaOptInvstMarginField_HShortMarginRatioByMoney;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->HShortMarginRatioByVolume = CThostFtdcSyncDeltaOptInvstMarginField_HShortMarginRatioByVolume;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->AShortMarginRatioByMoney = CThostFtdcSyncDeltaOptInvstMarginField_AShortMarginRatioByMoney;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->AShortMarginRatioByVolume = CThostFtdcSyncDeltaOptInvstMarginField_AShortMarginRatioByVolume;

    /// 是否跟随交易所收取
    /// typedef int TThostFtdcBoolType
    data->IsRelative = CThostFtdcSyncDeltaOptInvstMarginField_IsRelative;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->MShortMarginRatioByMoney = CThostFtdcSyncDeltaOptInvstMarginField_MShortMarginRatioByMoney;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->MShortMarginRatioByVolume = CThostFtdcSyncDeltaOptInvstMarginField_MShortMarginRatioByVolume;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaOptInvstMarginField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaOptInvstMarginField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:c,s:i}"
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "SShortMarginRatioByMoney", data->SShortMarginRatioByMoney
        , "SShortMarginRatioByVolume", data->SShortMarginRatioByVolume
        , "HShortMarginRatioByMoney", data->HShortMarginRatioByMoney
        , "HShortMarginRatioByVolume", data->HShortMarginRatioByVolume
        , "AShortMarginRatioByMoney", data->AShortMarginRatioByMoney
        , "AShortMarginRatioByVolume", data->AShortMarginRatioByVolume
        , "IsRelative", data->IsRelative
        , "MShortMarginRatioByMoney", data->MShortMarginRatioByMoney
        , "MShortMarginRatioByVolume", data->MShortMarginRatioByVolume
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptInvstMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptInvstMarginField repr");
        return NULL;
    }

    return repr;
}


/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaOptInvstMarginFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptInvstMarginField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcSyncDeltaOptInvstMarginFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptInvstMarginField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaOptInvstMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptInvstMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaOptInvstMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptInvstMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaOptInvstMarginFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptInvstMarginField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaOptInvstMarginField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaOptInvstMarginFieldType_members[] = {
    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "SShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData, data.SShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投机空头保证金调整系数")
    },
    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData, data.SShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投机空头保证金调整系数")
    },
    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "HShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData, data.HShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保值空头保证金调整系数")
    },
    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    {
        .name = "HShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData, data.HShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保值空头保证金调整系数")
    },
    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "AShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData, data.AShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("套利空头保证金调整系数")
    },
    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    {
        .name = "AShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData, data.AShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("套利空头保证金调整系数")
    },
    /// 是否跟随交易所收取
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsRelative",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData, data.IsRelative),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否跟随交易所收取")
    },
    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "MShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData, data.MShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("做市商空头保证金调整系数")
    },
    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData, data.MShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("做市商空头保证金调整系数")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaOptInvstMarginFieldType_getsets[] = {
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaOptInvstMarginFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaOptInvstMarginFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcSyncDeltaOptInvstMarginFieldType_get_InvestorRange,
    .set = PyCThostFtdcSyncDeltaOptInvstMarginFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaOptInvstMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaOptInvstMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaOptInvstMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaOptInvstMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaOptInvstMarginFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaOptInvstMarginFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaOptInvstMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaOptInvstMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平中金现货期权投资者保证金率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaOptInvstMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaOptInvstMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaOptInvstMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaOptInvstMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaOptInvstMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平中金现货期权投资者保证金率")},
    {Py_tp_members, PyCThostFtdcSyncDeltaOptInvstMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaOptInvstMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaOptInvstMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaOptInvstMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaOptInvstMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaOptInvstMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaOptInvstMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaOptInvstMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaOptInvstMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaOptInvstMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaOptInvstMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaOptInvstMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaOptInvstMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaOptInvstMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaOptInvstMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}