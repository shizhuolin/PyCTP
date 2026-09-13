
#include "PyCThostFtdcMarketDataBaseField.h"

///行情基础属性

static int PyCThostFtdcMarketDataBaseFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "PreDelta", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcMarketDataBaseField_TradingDay = NULL;
    Py_ssize_t CThostFtdcMarketDataBaseField_TradingDay_length = 0;

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataBaseField_PreSettlementPrice = 0.0;

    /// 昨收盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataBaseField_PreClosePrice = 0.0;

    /// 昨持仓量
    /// typedef double TThostFtdcLargeVolumeType
    double CThostFtdcMarketDataBaseField_PreOpenInterest = 0.0;

    /// 昨虚实度
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMarketDataBaseField_PreDelta = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#dddd", (char **)kwlist
        , &CThostFtdcMarketDataBaseField_TradingDay, &CThostFtdcMarketDataBaseField_TradingDay_length
        , &CThostFtdcMarketDataBaseField_PreSettlementPrice
        , &CThostFtdcMarketDataBaseField_PreClosePrice
        , &CThostFtdcMarketDataBaseField_PreOpenInterest
        , &CThostFtdcMarketDataBaseField_PreDelta
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataBaseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBaseFieldData>(self);
    CThostFtdcMarketDataBaseField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcMarketDataBaseField_TradingDay != NULL ) {
        if(CThostFtdcMarketDataBaseField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcMarketDataBaseField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcMarketDataBaseField_TradingDay, CThostFtdcMarketDataBaseField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcMarketDataBaseField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcMarketDataBaseField_TradingDay = NULL;
    }

    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    data->PreSettlementPrice = CThostFtdcMarketDataBaseField_PreSettlementPrice;

    /// 昨收盘
    /// typedef double TThostFtdcPriceType
    data->PreClosePrice = CThostFtdcMarketDataBaseField_PreClosePrice;

    /// 昨持仓量
    /// typedef double TThostFtdcLargeVolumeType
    data->PreOpenInterest = CThostFtdcMarketDataBaseField_PreOpenInterest;

    /// 昨虚实度
    /// typedef double TThostFtdcRatioType
    data->PreDelta = CThostFtdcMarketDataBaseField_PreDelta;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataBaseFieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataBaseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBaseFieldData>(self);
    CThostFtdcMarketDataBaseField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:d,s:d,s:d,s:d}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "PreSettlementPrice", data->PreSettlementPrice
        , "PreClosePrice", data->PreClosePrice
        , "PreOpenInterest", data->PreOpenInterest
        , "PreDelta", data->PreDelta
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBaseField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBaseField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcMarketDataBaseFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataBaseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBaseFieldData>(self);
    CThostFtdcMarketDataBaseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcMarketDataBaseFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataBaseField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataBaseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBaseFieldData>(self);
    CThostFtdcMarketDataBaseField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcMarketDataBaseFieldType_members[] = {
    /// 上次结算价
    /// typedef double TThostFtdcPriceType
    {
        .name = "PreSettlementPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBaseFieldData, data.PreSettlementPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上次结算价")
    },
    /// 昨收盘
    /// typedef double TThostFtdcPriceType
    {
        .name = "PreClosePrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBaseFieldData, data.PreClosePrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("昨收盘")
    },
    /// 昨持仓量
    /// typedef double TThostFtdcLargeVolumeType
    {
        .name = "PreOpenInterest",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBaseFieldData, data.PreOpenInterest),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("昨持仓量")
    },
    /// 昨虚实度
    /// typedef double TThostFtdcRatioType
    {
        .name = "PreDelta",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBaseFieldData, data.PreDelta),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("昨虚实度")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataBaseFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcMarketDataBaseFieldType_get_TradingDay,
    .set = PyCThostFtdcMarketDataBaseFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataBaseFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataBaseField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("行情基础属性")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataBaseFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataBaseFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataBaseFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataBaseFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataBaseFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataBaseFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("行情基础属性")},
    {Py_tp_members, PyCThostFtdcMarketDataBaseFieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataBaseFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataBaseFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataBaseFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataBaseFieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataBaseField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataBaseFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataBaseFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataBaseFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataBaseFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataBaseFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataBaseFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataBaseFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataBaseFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataBaseField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataBaseField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}