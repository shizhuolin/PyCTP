
#include "PyCThostFtdcSyncDeltaOptExchMarginField.h"

///风险结算追平中金现货期权交易所保证金率

static int PyCThostFtdcSyncDeltaOptExchMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InstrumentID", "SShortMarginRatioByMoney", "SShortMarginRatioByVolume", "HShortMarginRatioByMoney", "HShortMarginRatioByVolume", "AShortMarginRatioByMoney", "AShortMarginRatioByVolume", "MShortMarginRatioByMoney", "MShortMarginRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaOptExchMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaOptExchMarginField_BrokerID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaOptExchMarginField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaOptExchMarginField_InstrumentID_length = 0;

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptExchMarginField_SShortMarginRatioByMoney = 0.0;

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaOptExchMarginField_SShortMarginRatioByVolume = 0.0;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptExchMarginField_HShortMarginRatioByMoney = 0.0;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaOptExchMarginField_HShortMarginRatioByVolume = 0.0;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptExchMarginField_AShortMarginRatioByMoney = 0.0;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaOptExchMarginField_AShortMarginRatioByVolume = 0.0;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaOptExchMarginField_MShortMarginRatioByMoney = 0.0;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaOptExchMarginField_MShortMarginRatioByVolume = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaOptExchMarginField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaOptExchMarginField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ddddddddci", (char **)kwlist
        , &CThostFtdcSyncDeltaOptExchMarginField_BrokerID, &CThostFtdcSyncDeltaOptExchMarginField_BrokerID_length
        , &CThostFtdcSyncDeltaOptExchMarginField_InstrumentID, &CThostFtdcSyncDeltaOptExchMarginField_InstrumentID_length
        , &CThostFtdcSyncDeltaOptExchMarginField_SShortMarginRatioByMoney
        , &CThostFtdcSyncDeltaOptExchMarginField_SShortMarginRatioByVolume
        , &CThostFtdcSyncDeltaOptExchMarginField_HShortMarginRatioByMoney
        , &CThostFtdcSyncDeltaOptExchMarginField_HShortMarginRatioByVolume
        , &CThostFtdcSyncDeltaOptExchMarginField_AShortMarginRatioByMoney
        , &CThostFtdcSyncDeltaOptExchMarginField_AShortMarginRatioByVolume
        , &CThostFtdcSyncDeltaOptExchMarginField_MShortMarginRatioByMoney
        , &CThostFtdcSyncDeltaOptExchMarginField_MShortMarginRatioByVolume
        , &CThostFtdcSyncDeltaOptExchMarginField_ActionDirection
        , &CThostFtdcSyncDeltaOptExchMarginField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaOptExchMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptExchMarginFieldData>(self);
    CThostFtdcSyncDeltaOptExchMarginField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaOptExchMarginField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaOptExchMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaOptExchMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaOptExchMarginField_BrokerID, CThostFtdcSyncDeltaOptExchMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaOptExchMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaOptExchMarginField_BrokerID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaOptExchMarginField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaOptExchMarginField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaOptExchMarginField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaOptExchMarginField_InstrumentID, CThostFtdcSyncDeltaOptExchMarginField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaOptExchMarginField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaOptExchMarginField_InstrumentID = NULL;
    }

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->SShortMarginRatioByMoney = CThostFtdcSyncDeltaOptExchMarginField_SShortMarginRatioByMoney;

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->SShortMarginRatioByVolume = CThostFtdcSyncDeltaOptExchMarginField_SShortMarginRatioByVolume;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->HShortMarginRatioByMoney = CThostFtdcSyncDeltaOptExchMarginField_HShortMarginRatioByMoney;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->HShortMarginRatioByVolume = CThostFtdcSyncDeltaOptExchMarginField_HShortMarginRatioByVolume;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->AShortMarginRatioByMoney = CThostFtdcSyncDeltaOptExchMarginField_AShortMarginRatioByMoney;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->AShortMarginRatioByVolume = CThostFtdcSyncDeltaOptExchMarginField_AShortMarginRatioByVolume;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->MShortMarginRatioByMoney = CThostFtdcSyncDeltaOptExchMarginField_MShortMarginRatioByMoney;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->MShortMarginRatioByVolume = CThostFtdcSyncDeltaOptExchMarginField_MShortMarginRatioByVolume;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaOptExchMarginField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaOptExchMarginField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaOptExchMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaOptExchMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptExchMarginFieldData>(self);
    CThostFtdcSyncDeltaOptExchMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "SShortMarginRatioByMoney", data->SShortMarginRatioByMoney
        , "SShortMarginRatioByVolume", data->SShortMarginRatioByVolume
        , "HShortMarginRatioByMoney", data->HShortMarginRatioByMoney
        , "HShortMarginRatioByVolume", data->HShortMarginRatioByVolume
        , "AShortMarginRatioByMoney", data->AShortMarginRatioByMoney
        , "AShortMarginRatioByVolume", data->AShortMarginRatioByVolume
        , "MShortMarginRatioByMoney", data->MShortMarginRatioByMoney
        , "MShortMarginRatioByVolume", data->MShortMarginRatioByVolume
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptExchMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptExchMarginField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptExchMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptExchMarginFieldData>(self);
    CThostFtdcSyncDeltaOptExchMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaOptExchMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptExchMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptExchMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptExchMarginFieldData>(self);
    CThostFtdcSyncDeltaOptExchMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptExchMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptExchMarginFieldData>(self);
    CThostFtdcSyncDeltaOptExchMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaOptExchMarginFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptExchMarginField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptExchMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptExchMarginFieldData>(self);
    CThostFtdcSyncDeltaOptExchMarginField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaOptExchMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptExchMarginFieldData>(self);
    CThostFtdcSyncDeltaOptExchMarginField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaOptExchMarginFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaOptExchMarginField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaOptExchMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaOptExchMarginFieldData>(self);
    CThostFtdcSyncDeltaOptExchMarginField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaOptExchMarginFieldType_members[] = {
    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "SShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaOptExchMarginFieldData, data.SShortMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptExchMarginFieldData, data.SShortMarginRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptExchMarginFieldData, data.HShortMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptExchMarginFieldData, data.HShortMarginRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptExchMarginFieldData, data.AShortMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptExchMarginFieldData, data.AShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("套利空头保证金调整系数")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptExchMarginFieldData, data.MShortMarginRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptExchMarginFieldData, data.MShortMarginRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaOptExchMarginFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaOptExchMarginFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaOptExchMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaOptExchMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaOptExchMarginFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaOptExchMarginFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaOptExchMarginFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaOptExchMarginFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaOptExchMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaOptExchMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平中金现货期权交易所保证金率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaOptExchMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaOptExchMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaOptExchMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaOptExchMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaOptExchMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaOptExchMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平中金现货期权交易所保证金率")},
    {Py_tp_members, PyCThostFtdcSyncDeltaOptExchMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaOptExchMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaOptExchMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaOptExchMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaOptExchMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaOptExchMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaOptExchMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaOptExchMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaOptExchMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaOptExchMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaOptExchMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaOptExchMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaOptExchMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaOptExchMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaOptExchMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaOptExchMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}