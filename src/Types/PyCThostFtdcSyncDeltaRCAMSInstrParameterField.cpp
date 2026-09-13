
#include "PyCThostFtdcSyncDeltaRCAMSInstrParameterField.h"

///风险结算追平RCAMS同合约风险对冲参数

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "ProductID", "HedgeRate", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaRCAMSInstrParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInstrParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaRCAMSInstrParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInstrParameterField_ExchangeID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcSyncDeltaRCAMSInstrParameterField_ProductID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRCAMSInstrParameterField_ProductID_length = 0;

    /// 同合约风险对冲比率
    /// typedef double TThostFtdcHedgeRateType
    double CThostFtdcSyncDeltaRCAMSInstrParameterField_HedgeRate = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaRCAMSInstrParameterField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaRCAMSInstrParameterField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#dci", (char **)kwlist
        , &CThostFtdcSyncDeltaRCAMSInstrParameterField_TradingDay, &CThostFtdcSyncDeltaRCAMSInstrParameterField_TradingDay_length
        , &CThostFtdcSyncDeltaRCAMSInstrParameterField_ExchangeID, &CThostFtdcSyncDeltaRCAMSInstrParameterField_ExchangeID_length
        , &CThostFtdcSyncDeltaRCAMSInstrParameterField_ProductID, &CThostFtdcSyncDeltaRCAMSInstrParameterField_ProductID_length
        , &CThostFtdcSyncDeltaRCAMSInstrParameterField_HedgeRate
        , &CThostFtdcSyncDeltaRCAMSInstrParameterField_ActionDirection
        , &CThostFtdcSyncDeltaRCAMSInstrParameterField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInstrParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaRCAMSInstrParameterField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInstrParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSInstrParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSInstrParameterField_TradingDay, CThostFtdcSyncDeltaRCAMSInstrParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaRCAMSInstrParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaRCAMSInstrParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaRCAMSInstrParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInstrParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRCAMSInstrParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSInstrParameterField_ExchangeID, CThostFtdcSyncDeltaRCAMSInstrParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaRCAMSInstrParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaRCAMSInstrParameterField_ExchangeID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcSyncDeltaRCAMSInstrParameterField_ProductID != NULL ) {
        if(CThostFtdcSyncDeltaRCAMSInstrParameterField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaRCAMSInstrParameterField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcSyncDeltaRCAMSInstrParameterField_ProductID, CThostFtdcSyncDeltaRCAMSInstrParameterField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcSyncDeltaRCAMSInstrParameterField_ProductID, sizeof(data->ProductID));
        CThostFtdcSyncDeltaRCAMSInstrParameterField_ProductID = NULL;
    }

    /// 同合约风险对冲比率
    /// typedef double TThostFtdcHedgeRateType
    data->HedgeRate = CThostFtdcSyncDeltaRCAMSInstrParameterField_HedgeRate;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaRCAMSInstrParameterField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaRCAMSInstrParameterField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInstrParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "HedgeRate", data->HedgeRate
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInstrParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInstrParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInstrParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInstrParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInstrParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInstrParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInstrParameterField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInstrParameterField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInstrParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRCAMSInstrParameterField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData>(self);
    CThostFtdcSyncDeltaRCAMSInstrParameterField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_members[] = {
    /// 同合约风险对冲比率
    /// typedef double TThostFtdcHedgeRateType
    {
        .name = "HedgeRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData, data.HedgeRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("同合约风险对冲比率")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_get_ProductID,
    .set = PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaRCAMSInstrParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS同合约风险对冲参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平RCAMS同合约风险对冲参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaRCAMSInstrParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSInstrParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSInstrParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}