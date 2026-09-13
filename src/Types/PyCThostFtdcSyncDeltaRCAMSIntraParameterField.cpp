
#include "PyCThostFtdcSyncDeltaRCAMSIntraParameterField.h"

///风险结算追平RCAMS品种内风险对冲参数

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "CombProductID", "HedgeRate", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaRCAMSIntraParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSIntraParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaRCAMSIntraParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSIntraParameterField_ExchangeID_length = 0;

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcSyncDeltaRCAMSIntraParameterField_CombProductID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSIntraParameterField_CombProductID_length = 0;

    /// 品种内对冲比率
    /// typedef double TThostFtdcHedgeRateType
    double CThostFtdcSyncDeltaRCAMSIntraParameterField_HedgeRate = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaRCAMSIntraParameterField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaRCAMSIntraParameterField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#dci", (char **)kwlist
        , &CThostFtdcSyncDeltaRCAMSIntraParameterField_TradingDay, &CThostFtdcSyncDeltaRCAMSIntraParameterField_TradingDay_length
        , &CThostFtdcSyncDeltaRCAMSIntraParameterField_ExchangeID, &CThostFtdcSyncDeltaRCAMSIntraParameterField_ExchangeID_length
        , &CThostFtdcSyncDeltaRCAMSIntraParameterField_CombProductID, &CThostFtdcSyncDeltaRCAMSIntraParameterField_CombProductID_length
        , &CThostFtdcSyncDeltaRCAMSIntraParameterField_HedgeRate
        , &CThostFtdcSyncDeltaRCAMSIntraParameterField_ActionDirection
        , &CThostFtdcSyncDeltaRCAMSIntraParameterField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSIntraParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaRCAMSIntraParameterField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSIntraParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSIntraParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSIntraParameterField_TradingDay, CThostFtdcSyncDeltaRCAMSIntraParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSIntraParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaRCAMSIntraParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaRCAMSIntraParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSIntraParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSIntraParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSIntraParameterField_ExchangeID, CThostFtdcSyncDeltaRCAMSIntraParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSIntraParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaRCAMSIntraParameterField_ExchangeID = NULL;
    }

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcSyncDeltaRCAMSIntraParameterField_CombProductID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSIntraParameterField_CombProductID_length >= (Py_ssize_t)sizeof(data->CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaRCAMSIntraParameterField_CombProductID_length);
            return -1;
        }
        // memset(data->CombProductID, 0, sizeof(data->CombProductID));
        // memcpy(data->CombProductID, CThostFtdcSyncDeltaRCAMSIntraParameterField_CombProductID, CThostFtdcSyncDeltaRCAMSIntraParameterField_CombProductID_length);
        strncpy(data->CombProductID, CThostFtdcSyncDeltaRCAMSIntraParameterField_CombProductID, sizeof(data->CombProductID));
        CThostFtdcSyncDeltaRCAMSIntraParameterField_CombProductID = NULL;
    }

    /// 品种内对冲比率
    /// typedef double TThostFtdcHedgeRateType
    data->HedgeRate = CThostFtdcSyncDeltaRCAMSIntraParameterField_HedgeRate;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaRCAMSIntraParameterField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaRCAMSIntraParameterField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSIntraParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "CombProductID", data->CombProductID//, (Py_ssize_t)sizeof(data->CombProductID)
        , "HedgeRate", data->HedgeRate
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSIntraParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSIntraParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSIntraParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSIntraParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSIntraParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSIntraParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_get_CombProductID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProductID, (Py_ssize_t)sizeof(data->CombProductID));
    return PyBytes_FromString(data->CombProductID);
}

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_set_CombProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSIntraParameterField::CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSIntraParameterField *data = &(extra->data);
    // memset(data->CombProductID, 0, sizeof(data->CombProductID));
    // memcpy(data->CombProductID, buf, len);
    strncpy(data->CombProductID, buf, sizeof(data->CombProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSIntraParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSIntraParameterField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSIntraParameterField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_members[] = {
    /// 品种内对冲比率
    /// typedef double TThostFtdcHedgeRateType
    {
        .name = "HedgeRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData, data.HedgeRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种内对冲比率")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProductID",
    .get = PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_get_CombProductID,
    .set = PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_set_CombProductID,
    .doc = PyDoc_STR("产品组合代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaRCAMSIntraParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS品种内风险对冲参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS品种内风险对冲参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaRCAMSIntraParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSIntraParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSIntraParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}