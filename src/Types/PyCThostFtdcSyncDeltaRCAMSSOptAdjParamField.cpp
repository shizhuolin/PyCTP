
#include "PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField.h"

///风险结算追平RCAMS空头期权风险调整参数

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "CombProductID", "HedgeFlag", "AdjustValue", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaRCAMSSOptAdjParamField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSSOptAdjParamField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ExchangeID_length = 0;

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcSyncDeltaRCAMSSOptAdjParamField_CombProductID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSSOptAdjParamField_CombProductID_length = 0;

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcSyncDeltaRCAMSSOptAdjParamField_HedgeFlag = 0;

    /// 空头期权风险调整标准
    /// typedef double TThostFtdcAdjustValueType
    double CThostFtdcSyncDeltaRCAMSSOptAdjParamField_AdjustValue = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaRCAMSSOptAdjParamField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cdci", (char **)kwlist
        , &CThostFtdcSyncDeltaRCAMSSOptAdjParamField_TradingDay, &CThostFtdcSyncDeltaRCAMSSOptAdjParamField_TradingDay_length
        , &CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ExchangeID, &CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ExchangeID_length
        , &CThostFtdcSyncDeltaRCAMSSOptAdjParamField_CombProductID, &CThostFtdcSyncDeltaRCAMSSOptAdjParamField_CombProductID_length
        , &CThostFtdcSyncDeltaRCAMSSOptAdjParamField_HedgeFlag
        , &CThostFtdcSyncDeltaRCAMSSOptAdjParamField_AdjustValue
        , &CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ActionDirection
        , &CThostFtdcSyncDeltaRCAMSSOptAdjParamField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaRCAMSSOptAdjParamField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSSOptAdjParamField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSSOptAdjParamField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSSOptAdjParamField_TradingDay, CThostFtdcSyncDeltaRCAMSSOptAdjParamField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSSOptAdjParamField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaRCAMSSOptAdjParamField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ExchangeID, CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ExchangeID = NULL;
    }

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcSyncDeltaRCAMSSOptAdjParamField_CombProductID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSSOptAdjParamField_CombProductID_length >= (Py_ssize_t)sizeof(data->CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaRCAMSSOptAdjParamField_CombProductID_length);
            return -1;
        }
        // memset(data->CombProductID, 0, sizeof(data->CombProductID));
        // memcpy(data->CombProductID, CThostFtdcSyncDeltaRCAMSSOptAdjParamField_CombProductID, CThostFtdcSyncDeltaRCAMSSOptAdjParamField_CombProductID_length);
        strncpy(data->CombProductID, CThostFtdcSyncDeltaRCAMSSOptAdjParamField_CombProductID, sizeof(data->CombProductID));
        CThostFtdcSyncDeltaRCAMSSOptAdjParamField_CombProductID = NULL;
    }

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcSyncDeltaRCAMSSOptAdjParamField_HedgeFlag;

    /// 空头期权风险调整标准
    /// typedef double TThostFtdcAdjustValueType
    data->AdjustValue = CThostFtdcSyncDeltaRCAMSSOptAdjParamField_AdjustValue;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaRCAMSSOptAdjParamField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaRCAMSSOptAdjParamField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:d,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "CombProductID", data->CombProductID//, (Py_ssize_t)sizeof(data->CombProductID)
        , "HedgeFlag", data->HedgeFlag
        , "AdjustValue", data->AdjustValue
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSSOptAdjParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSSOptAdjParamField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSSOptAdjParamField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSSOptAdjParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_get_CombProductID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProductID, (Py_ssize_t)sizeof(data->CombProductID));
    return PyBytes_FromString(data->CombProductID);
}

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_set_CombProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSSOptAdjParamField::CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);
    // memset(data->CombProductID, 0, sizeof(data->CombProductID));
    // memcpy(data->CombProductID, buf, len);
    strncpy(data->CombProductID, buf, sizeof(data->CombProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投套标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSSOptAdjParamField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSSOptAdjParamField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData>(self);
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_members[] = {
    /// 空头期权风险调整标准
    /// typedef double TThostFtdcAdjustValueType
    {
        .name = "AdjustValue",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData, data.AdjustValue),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头期权风险调整标准")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProductID",
    .get = PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_get_CombProductID,
    .set = PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_set_CombProductID,
    .doc = PyDoc_STR("产品组合代码"),
    },
    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_get_HedgeFlag,
    .set = PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投套标志"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaRCAMSSOptAdjParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS空头期权风险调整参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS空头期权风险调整参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaRCAMSSOptAdjParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSSOptAdjParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSSOptAdjParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}