
#include "PyCThostFtdcMarketDataStaticField.h"

///行情静态属性

static int PyCThostFtdcMarketDataStaticFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "OpenPrice", "HighestPrice", "LowestPrice", "ClosePrice", "UpperLimitPrice", "LowerLimitPrice", "SettlementPrice", "CurrDelta", NULL };


    /// 今开盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataStaticField_OpenPrice = 0.0;

    /// 最高价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataStaticField_HighestPrice = 0.0;

    /// 最低价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataStaticField_LowestPrice = 0.0;

    /// 今收盘
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataStaticField_ClosePrice = 0.0;

    /// 涨停板价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataStaticField_UpperLimitPrice = 0.0;

    /// 跌停板价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataStaticField_LowerLimitPrice = 0.0;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataStaticField_SettlementPrice = 0.0;

    /// 今虚实度
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMarketDataStaticField_CurrDelta = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|dddddddd", (char **)kwlist
        , &CThostFtdcMarketDataStaticField_OpenPrice
        , &CThostFtdcMarketDataStaticField_HighestPrice
        , &CThostFtdcMarketDataStaticField_LowestPrice
        , &CThostFtdcMarketDataStaticField_ClosePrice
        , &CThostFtdcMarketDataStaticField_UpperLimitPrice
        , &CThostFtdcMarketDataStaticField_LowerLimitPrice
        , &CThostFtdcMarketDataStaticField_SettlementPrice
        , &CThostFtdcMarketDataStaticField_CurrDelta
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataStaticFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataStaticFieldData>(self);
    CThostFtdcMarketDataStaticField *data = &(extra->data);


    /// 今开盘
    /// typedef double TThostFtdcPriceType
    data->OpenPrice = CThostFtdcMarketDataStaticField_OpenPrice;

    /// 最高价
    /// typedef double TThostFtdcPriceType
    data->HighestPrice = CThostFtdcMarketDataStaticField_HighestPrice;

    /// 最低价
    /// typedef double TThostFtdcPriceType
    data->LowestPrice = CThostFtdcMarketDataStaticField_LowestPrice;

    /// 今收盘
    /// typedef double TThostFtdcPriceType
    data->ClosePrice = CThostFtdcMarketDataStaticField_ClosePrice;

    /// 涨停板价
    /// typedef double TThostFtdcPriceType
    data->UpperLimitPrice = CThostFtdcMarketDataStaticField_UpperLimitPrice;

    /// 跌停板价
    /// typedef double TThostFtdcPriceType
    data->LowerLimitPrice = CThostFtdcMarketDataStaticField_LowerLimitPrice;

    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    data->SettlementPrice = CThostFtdcMarketDataStaticField_SettlementPrice;

    /// 今虚实度
    /// typedef double TThostFtdcRatioType
    data->CurrDelta = CThostFtdcMarketDataStaticField_CurrDelta;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataStaticFieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataStaticFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataStaticFieldData>(self);
    CThostFtdcMarketDataStaticField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
        , "OpenPrice", data->OpenPrice
        , "HighestPrice", data->HighestPrice
        , "LowestPrice", data->LowestPrice
        , "ClosePrice", data->ClosePrice
        , "UpperLimitPrice", data->UpperLimitPrice
        , "LowerLimitPrice", data->LowerLimitPrice
        , "SettlementPrice", data->SettlementPrice
        , "CurrDelta", data->CurrDelta
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataStaticField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataStaticField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcMarketDataStaticFieldType_members[] = {
    /// 今开盘
    /// typedef double TThostFtdcPriceType
    {
        .name = "OpenPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataStaticFieldData, data.OpenPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("今开盘")
    },
    /// 最高价
    /// typedef double TThostFtdcPriceType
    {
        .name = "HighestPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataStaticFieldData, data.HighestPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最高价")
    },
    /// 最低价
    /// typedef double TThostFtdcPriceType
    {
        .name = "LowestPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataStaticFieldData, data.LowestPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最低价")
    },
    /// 今收盘
    /// typedef double TThostFtdcPriceType
    {
        .name = "ClosePrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataStaticFieldData, data.ClosePrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("今收盘")
    },
    /// 涨停板价
    /// typedef double TThostFtdcPriceType
    {
        .name = "UpperLimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataStaticFieldData, data.UpperLimitPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("涨停板价")
    },
    /// 跌停板价
    /// typedef double TThostFtdcPriceType
    {
        .name = "LowerLimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataStaticFieldData, data.LowerLimitPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("跌停板价")
    },
    /// 本次结算价
    /// typedef double TThostFtdcPriceType
    {
        .name = "SettlementPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataStaticFieldData, data.SettlementPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("本次结算价")
    },
    /// 今虚实度
    /// typedef double TThostFtdcRatioType
    {
        .name = "CurrDelta",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataStaticFieldData, data.CurrDelta),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("今虚实度")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataStaticFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataStaticFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataStaticField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("行情静态属性")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataStaticFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataStaticFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataStaticFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataStaticFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataStaticFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataStaticFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("行情静态属性")},
    {Py_tp_members, PyCThostFtdcMarketDataStaticFieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataStaticFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataStaticFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataStaticFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataStaticFieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataStaticField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataStaticFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataStaticFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataStaticFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataStaticFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataStaticFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataStaticFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataStaticFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataStaticFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataStaticField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataStaticField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}