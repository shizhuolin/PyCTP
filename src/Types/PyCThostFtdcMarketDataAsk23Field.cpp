
#include "PyCThostFtdcMarketDataAsk23Field.h"

///行情申卖二、三属性

static int PyCThostFtdcMarketDataAsk23FieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "AskPrice2", "AskVolume2", "AskPrice3", "AskVolume3", NULL };


    /// 申卖价二
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataAsk23Field_AskPrice2 = 0.0;

    /// 申卖量二
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataAsk23Field_AskVolume2 = 0;

    /// 申卖价三
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataAsk23Field_AskPrice3 = 0.0;

    /// 申卖量三
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataAsk23Field_AskVolume3 = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
        , &CThostFtdcMarketDataAsk23Field_AskPrice2
        , &CThostFtdcMarketDataAsk23Field_AskVolume2
        , &CThostFtdcMarketDataAsk23Field_AskPrice3
        , &CThostFtdcMarketDataAsk23Field_AskVolume3
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataAsk23FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataAsk23FieldData>(self);
    CThostFtdcMarketDataAsk23Field *data = &(extra->data);


    /// 申卖价二
    /// typedef double TThostFtdcPriceType
    data->AskPrice2 = CThostFtdcMarketDataAsk23Field_AskPrice2;

    /// 申卖量二
    /// typedef int TThostFtdcVolumeType
    data->AskVolume2 = CThostFtdcMarketDataAsk23Field_AskVolume2;

    /// 申卖价三
    /// typedef double TThostFtdcPriceType
    data->AskPrice3 = CThostFtdcMarketDataAsk23Field_AskPrice3;

    /// 申卖量三
    /// typedef int TThostFtdcVolumeType
    data->AskVolume3 = CThostFtdcMarketDataAsk23Field_AskVolume3;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataAsk23FieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataAsk23FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataAsk23FieldData>(self);
    CThostFtdcMarketDataAsk23Field *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:d,s:i,s:d,s:i}"
        , "AskPrice2", data->AskPrice2
        , "AskVolume2", data->AskVolume2
        , "AskPrice3", data->AskPrice3
        , "AskVolume3", data->AskVolume3
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataAsk23Field repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataAsk23Field repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcMarketDataAsk23FieldType_members[] = {
    /// 申卖价二
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataAsk23FieldData, data.AskPrice2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖价二")
    },
    /// 申卖量二
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AskVolume2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataAsk23FieldData, data.AskVolume2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖量二")
    },
    /// 申卖价三
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice3",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataAsk23FieldData, data.AskPrice3),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖价三")
    },
    /// 申卖量三
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AskVolume3",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataAsk23FieldData, data.AskVolume3),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖量三")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataAsk23FieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataAsk23FieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataAsk23Field"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("行情申卖二、三属性")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataAsk23FieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataAsk23FieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataAsk23FieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataAsk23FieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataAsk23FieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataAsk23FieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("行情申卖二、三属性")},
    {Py_tp_members, PyCThostFtdcMarketDataAsk23FieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataAsk23FieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataAsk23FieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataAsk23FieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataAsk23FieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataAsk23Field",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataAsk23FieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataAsk23FieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataAsk23FieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataAsk23FieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataAsk23FieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataAsk23FieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataAsk23FieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataAsk23FieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataAsk23Field", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataAsk23Field to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}