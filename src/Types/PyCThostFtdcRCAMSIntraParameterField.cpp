
#include "PyCThostFtdcRCAMSIntraParameterField.h"

///RCAMS品种内风险对冲参数

static int PyCThostFtdcRCAMSIntraParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "CombProductID", "HedgeRate", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcRCAMSIntraParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRCAMSIntraParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcRCAMSIntraParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcRCAMSIntraParameterField_ExchangeID_length = 0;

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcRCAMSIntraParameterField_CombProductID = NULL;
    Py_ssize_t CThostFtdcRCAMSIntraParameterField_CombProductID_length = 0;

    /// 品种内对冲比率
    /// typedef double TThostFtdcHedgeRateType
    double CThostFtdcRCAMSIntraParameterField_HedgeRate = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#d", (char **)kwlist
        , &CThostFtdcRCAMSIntraParameterField_TradingDay, &CThostFtdcRCAMSIntraParameterField_TradingDay_length
        , &CThostFtdcRCAMSIntraParameterField_ExchangeID, &CThostFtdcRCAMSIntraParameterField_ExchangeID_length
        , &CThostFtdcRCAMSIntraParameterField_CombProductID, &CThostFtdcRCAMSIntraParameterField_CombProductID_length
        , &CThostFtdcRCAMSIntraParameterField_HedgeRate
    )) {
        return -1;
    }

    PyCThostFtdcRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSIntraParameterFieldData>(self);
    CThostFtdcRCAMSIntraParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcRCAMSIntraParameterField_TradingDay != NULL ) {
        if(CThostFtdcRCAMSIntraParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRCAMSIntraParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRCAMSIntraParameterField_TradingDay, CThostFtdcRCAMSIntraParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRCAMSIntraParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRCAMSIntraParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcRCAMSIntraParameterField_ExchangeID != NULL ) {
        if(CThostFtdcRCAMSIntraParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcRCAMSIntraParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcRCAMSIntraParameterField_ExchangeID, CThostFtdcRCAMSIntraParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcRCAMSIntraParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcRCAMSIntraParameterField_ExchangeID = NULL;
    }

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcRCAMSIntraParameterField_CombProductID != NULL ) {
        if(CThostFtdcRCAMSIntraParameterField_CombProductID_length >= (Py_ssize_t)sizeof(data->CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is 40)", CThostFtdcRCAMSIntraParameterField_CombProductID_length);
            return -1;
        }
        // memset(data->CombProductID, 0, sizeof(data->CombProductID));
        // memcpy(data->CombProductID, CThostFtdcRCAMSIntraParameterField_CombProductID, CThostFtdcRCAMSIntraParameterField_CombProductID_length);
        strncpy(data->CombProductID, CThostFtdcRCAMSIntraParameterField_CombProductID, sizeof(data->CombProductID));
        CThostFtdcRCAMSIntraParameterField_CombProductID = NULL;
    }

    /// 品种内对冲比率
    /// typedef double TThostFtdcHedgeRateType
    data->HedgeRate = CThostFtdcRCAMSIntraParameterField_HedgeRate;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRCAMSIntraParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSIntraParameterFieldData>(self);
    CThostFtdcRCAMSIntraParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "CombProductID", data->CombProductID//, (Py_ssize_t)sizeof(data->CombProductID)
        , "HedgeRate", data->HedgeRate
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSIntraParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSIntraParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcRCAMSIntraParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSIntraParameterFieldData>(self);
    CThostFtdcRCAMSIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRCAMSIntraParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSIntraParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSIntraParameterFieldData>(self);
    CThostFtdcRCAMSIntraParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcRCAMSIntraParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSIntraParameterFieldData>(self);
    CThostFtdcRCAMSIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcRCAMSIntraParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSIntraParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSIntraParameterFieldData>(self);
    CThostFtdcRCAMSIntraParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcRCAMSIntraParameterFieldType_get_CombProductID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSIntraParameterFieldData>(self);
    CThostFtdcRCAMSIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProductID, (Py_ssize_t)sizeof(data->CombProductID));
    return PyBytes_FromString(data->CombProductID);
}

static int PyCThostFtdcRCAMSIntraParameterFieldType_set_CombProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSIntraParameterField::CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSIntraParameterFieldData>(self);
    CThostFtdcRCAMSIntraParameterField *data = &(extra->data);
    // memset(data->CombProductID, 0, sizeof(data->CombProductID));
    // memcpy(data->CombProductID, buf, len);
    strncpy(data->CombProductID, buf, sizeof(data->CombProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRCAMSIntraParameterFieldType_members[] = {
    /// 品种内对冲比率
    /// typedef double TThostFtdcHedgeRateType
    {
        .name = "HedgeRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRCAMSIntraParameterFieldData, data.HedgeRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种内对冲比率")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRCAMSIntraParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRCAMSIntraParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcRCAMSIntraParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcRCAMSIntraParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcRCAMSIntraParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProductID",
    .get = PyCThostFtdcRCAMSIntraParameterFieldType_get_CombProductID,
    .set = PyCThostFtdcRCAMSIntraParameterFieldType_set_CombProductID,
    .doc = PyDoc_STR("产品组合代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRCAMSIntraParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRCAMSIntraParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS品种内风险对冲参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRCAMSIntraParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRCAMSIntraParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRCAMSIntraParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRCAMSIntraParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRCAMSIntraParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRCAMSIntraParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS品种内风险对冲参数")},
    {Py_tp_members, PyCThostFtdcRCAMSIntraParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcRCAMSIntraParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRCAMSIntraParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRCAMSIntraParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRCAMSIntraParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcRCAMSIntraParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRCAMSIntraParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRCAMSIntraParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRCAMSIntraParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRCAMSIntraParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRCAMSIntraParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRCAMSIntraParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRCAMSIntraParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRCAMSIntraParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRCAMSIntraParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSIntraParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}