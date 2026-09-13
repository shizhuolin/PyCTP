
#include "PyCThostFtdcRCAMSShortOptAdjustParamField.h"

///RCAMS空头期权风险调整参数

static int PyCThostFtdcRCAMSShortOptAdjustParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "CombProductID", "HedgeFlag", "AdjustValue", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcRCAMSShortOptAdjustParamField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRCAMSShortOptAdjustParamField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcRCAMSShortOptAdjustParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcRCAMSShortOptAdjustParamField_ExchangeID_length = 0;

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcRCAMSShortOptAdjustParamField_CombProductID = NULL;
    Py_ssize_t CThostFtdcRCAMSShortOptAdjustParamField_CombProductID_length = 0;

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcRCAMSShortOptAdjustParamField_HedgeFlag = 0;

    /// 空头期权风险调整标准
    /// typedef double TThostFtdcAdjustValueType
    double CThostFtdcRCAMSShortOptAdjustParamField_AdjustValue = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cd", (char **)kwlist
        , &CThostFtdcRCAMSShortOptAdjustParamField_TradingDay, &CThostFtdcRCAMSShortOptAdjustParamField_TradingDay_length
        , &CThostFtdcRCAMSShortOptAdjustParamField_ExchangeID, &CThostFtdcRCAMSShortOptAdjustParamField_ExchangeID_length
        , &CThostFtdcRCAMSShortOptAdjustParamField_CombProductID, &CThostFtdcRCAMSShortOptAdjustParamField_CombProductID_length
        , &CThostFtdcRCAMSShortOptAdjustParamField_HedgeFlag
        , &CThostFtdcRCAMSShortOptAdjustParamField_AdjustValue
    )) {
        return -1;
    }

    PyCThostFtdcRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcRCAMSShortOptAdjustParamField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcRCAMSShortOptAdjustParamField_TradingDay != NULL ) {
        if(CThostFtdcRCAMSShortOptAdjustParamField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRCAMSShortOptAdjustParamField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRCAMSShortOptAdjustParamField_TradingDay, CThostFtdcRCAMSShortOptAdjustParamField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRCAMSShortOptAdjustParamField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRCAMSShortOptAdjustParamField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcRCAMSShortOptAdjustParamField_ExchangeID != NULL ) {
        if(CThostFtdcRCAMSShortOptAdjustParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcRCAMSShortOptAdjustParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcRCAMSShortOptAdjustParamField_ExchangeID, CThostFtdcRCAMSShortOptAdjustParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcRCAMSShortOptAdjustParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcRCAMSShortOptAdjustParamField_ExchangeID = NULL;
    }

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcRCAMSShortOptAdjustParamField_CombProductID != NULL ) {
        if(CThostFtdcRCAMSShortOptAdjustParamField_CombProductID_length >= (Py_ssize_t)sizeof(data->CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is 40)", CThostFtdcRCAMSShortOptAdjustParamField_CombProductID_length);
            return -1;
        }
        // memset(data->CombProductID, 0, sizeof(data->CombProductID));
        // memcpy(data->CombProductID, CThostFtdcRCAMSShortOptAdjustParamField_CombProductID, CThostFtdcRCAMSShortOptAdjustParamField_CombProductID_length);
        strncpy(data->CombProductID, CThostFtdcRCAMSShortOptAdjustParamField_CombProductID, sizeof(data->CombProductID));
        CThostFtdcRCAMSShortOptAdjustParamField_CombProductID = NULL;
    }

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcRCAMSShortOptAdjustParamField_HedgeFlag;

    /// 空头期权风险调整标准
    /// typedef double TThostFtdcAdjustValueType
    data->AdjustValue = CThostFtdcRCAMSShortOptAdjustParamField_AdjustValue;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamFieldType_repr(PyObject *self) {

    PyCThostFtdcRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcRCAMSShortOptAdjustParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:d}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "CombProductID", data->CombProductID//, (Py_ssize_t)sizeof(data->CombProductID)
        , "HedgeFlag", data->HedgeFlag
        , "AdjustValue", data->AdjustValue
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSShortOptAdjustParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSShortOptAdjustParamField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcRCAMSShortOptAdjustParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRCAMSShortOptAdjustParamFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSShortOptAdjustParamField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcRCAMSShortOptAdjustParamField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcRCAMSShortOptAdjustParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcRCAMSShortOptAdjustParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSShortOptAdjustParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcRCAMSShortOptAdjustParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamFieldType_get_CombProductID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcRCAMSShortOptAdjustParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProductID, (Py_ssize_t)sizeof(data->CombProductID));
    return PyBytes_FromString(data->CombProductID);
}

static int PyCThostFtdcRCAMSShortOptAdjustParamFieldType_set_CombProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSShortOptAdjustParamField::CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcRCAMSShortOptAdjustParamField *data = &(extra->data);
    // memset(data->CombProductID, 0, sizeof(data->CombProductID));
    // memcpy(data->CombProductID, buf, len);
    strncpy(data->CombProductID, buf, sizeof(data->CombProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投套标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcRCAMSShortOptAdjustParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcRCAMSShortOptAdjustParamFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRCAMSShortOptAdjustParamField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcRCAMSShortOptAdjustParamField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRCAMSShortOptAdjustParamFieldType_members[] = {
    /// 空头期权风险调整标准
    /// typedef double TThostFtdcAdjustValueType
    {
        .name = "AdjustValue",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRCAMSShortOptAdjustParamFieldData, data.AdjustValue),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头期权风险调整标准")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRCAMSShortOptAdjustParamFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRCAMSShortOptAdjustParamFieldType_get_TradingDay,
    .set = PyCThostFtdcRCAMSShortOptAdjustParamFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcRCAMSShortOptAdjustParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcRCAMSShortOptAdjustParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProductID",
    .get = PyCThostFtdcRCAMSShortOptAdjustParamFieldType_get_CombProductID,
    .set = PyCThostFtdcRCAMSShortOptAdjustParamFieldType_set_CombProductID,
    .doc = PyDoc_STR("产品组合代码"),
    },
    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcRCAMSShortOptAdjustParamFieldType_get_HedgeFlag,
    .set = PyCThostFtdcRCAMSShortOptAdjustParamFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投套标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRCAMSShortOptAdjustParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRCAMSShortOptAdjustParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS空头期权风险调整参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRCAMSShortOptAdjustParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRCAMSShortOptAdjustParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRCAMSShortOptAdjustParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRCAMSShortOptAdjustParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRCAMSShortOptAdjustParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRCAMSShortOptAdjustParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS空头期权风险调整参数")},
    {Py_tp_members, PyCThostFtdcRCAMSShortOptAdjustParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcRCAMSShortOptAdjustParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRCAMSShortOptAdjustParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRCAMSShortOptAdjustParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRCAMSShortOptAdjustParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcRCAMSShortOptAdjustParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRCAMSShortOptAdjustParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRCAMSShortOptAdjustParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRCAMSShortOptAdjustParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRCAMSShortOptAdjustParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRCAMSShortOptAdjustParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRCAMSShortOptAdjustParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRCAMSShortOptAdjustParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRCAMSShortOptAdjustParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRCAMSShortOptAdjustParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSShortOptAdjustParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}