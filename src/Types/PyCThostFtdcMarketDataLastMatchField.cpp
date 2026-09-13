
#include "PyCThostFtdcMarketDataLastMatchField.h"

///行情最新成交属性

static int PyCThostFtdcMarketDataLastMatchFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "LastPrice", "Volume", "Turnover", "OpenInterest", NULL };


    /// 最新价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataLastMatchField_LastPrice = 0.0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataLastMatchField_Volume = 0;

    /// 成交金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcMarketDataLastMatchField_Turnover = 0.0;

    /// 持仓量
    /// typedef double TThostFtdcLargeVolumeType
    double CThostFtdcMarketDataLastMatchField_OpenInterest = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didd", (char **)kwlist
        , &CThostFtdcMarketDataLastMatchField_LastPrice
        , &CThostFtdcMarketDataLastMatchField_Volume
        , &CThostFtdcMarketDataLastMatchField_Turnover
        , &CThostFtdcMarketDataLastMatchField_OpenInterest
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataLastMatchFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataLastMatchFieldData>(self);
    CThostFtdcMarketDataLastMatchField *data = &(extra->data);


    /// 最新价
    /// typedef double TThostFtdcPriceType
    data->LastPrice = CThostFtdcMarketDataLastMatchField_LastPrice;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcMarketDataLastMatchField_Volume;

    /// 成交金额
    /// typedef double TThostFtdcMoneyType
    data->Turnover = CThostFtdcMarketDataLastMatchField_Turnover;

    /// 持仓量
    /// typedef double TThostFtdcLargeVolumeType
    data->OpenInterest = CThostFtdcMarketDataLastMatchField_OpenInterest;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataLastMatchFieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataLastMatchFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataLastMatchFieldData>(self);
    CThostFtdcMarketDataLastMatchField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:d,s:i,s:d,s:d}"
        , "LastPrice", data->LastPrice
        , "Volume", data->Volume
        , "Turnover", data->Turnover
        , "OpenInterest", data->OpenInterest
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataLastMatchField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataLastMatchField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcMarketDataLastMatchFieldType_members[] = {
    /// 最新价
    /// typedef double TThostFtdcPriceType
    {
        .name = "LastPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataLastMatchFieldData, data.LastPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最新价")
    },
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataLastMatchFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
    },
    /// 成交金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Turnover",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataLastMatchFieldData, data.Turnover),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("成交金额")
    },
    /// 持仓量
    /// typedef double TThostFtdcLargeVolumeType
    {
        .name = "OpenInterest",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataLastMatchFieldData, data.OpenInterest),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("持仓量")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataLastMatchFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataLastMatchFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataLastMatchField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("行情最新成交属性")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataLastMatchFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataLastMatchFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataLastMatchFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataLastMatchFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataLastMatchFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataLastMatchFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("行情最新成交属性")},
    {Py_tp_members, PyCThostFtdcMarketDataLastMatchFieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataLastMatchFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataLastMatchFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataLastMatchFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataLastMatchFieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataLastMatchField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataLastMatchFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataLastMatchFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataLastMatchFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataLastMatchFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataLastMatchFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataLastMatchFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataLastMatchFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataLastMatchFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataLastMatchField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataLastMatchField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}