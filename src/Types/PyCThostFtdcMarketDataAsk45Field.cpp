
#include "PyCThostFtdcMarketDataAsk45Field.h"

///行情申卖四、五属性

static int PyCThostFtdcMarketDataAsk45FieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "AskPrice4", "AskVolume4", "AskPrice5", "AskVolume5", NULL };


    /// 申卖价四
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataAsk45Field_AskPrice4 = 0.0;

    /// 申卖量四
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataAsk45Field_AskVolume4 = 0;

    /// 申卖价五
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataAsk45Field_AskPrice5 = 0.0;

    /// 申卖量五
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataAsk45Field_AskVolume5 = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
        , &CThostFtdcMarketDataAsk45Field_AskPrice4
        , &CThostFtdcMarketDataAsk45Field_AskVolume4
        , &CThostFtdcMarketDataAsk45Field_AskPrice5
        , &CThostFtdcMarketDataAsk45Field_AskVolume5
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataAsk45FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataAsk45FieldData>(self);
    CThostFtdcMarketDataAsk45Field *data = &(extra->data);


    /// 申卖价四
    /// typedef double TThostFtdcPriceType
    data->AskPrice4 = CThostFtdcMarketDataAsk45Field_AskPrice4;

    /// 申卖量四
    /// typedef int TThostFtdcVolumeType
    data->AskVolume4 = CThostFtdcMarketDataAsk45Field_AskVolume4;

    /// 申卖价五
    /// typedef double TThostFtdcPriceType
    data->AskPrice5 = CThostFtdcMarketDataAsk45Field_AskPrice5;

    /// 申卖量五
    /// typedef int TThostFtdcVolumeType
    data->AskVolume5 = CThostFtdcMarketDataAsk45Field_AskVolume5;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataAsk45FieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataAsk45FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataAsk45FieldData>(self);
    CThostFtdcMarketDataAsk45Field *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:d,s:i,s:d,s:i}"
        , "AskPrice4", data->AskPrice4
        , "AskVolume4", data->AskVolume4
        , "AskPrice5", data->AskPrice5
        , "AskVolume5", data->AskVolume5
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataAsk45Field repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataAsk45Field repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcMarketDataAsk45FieldType_members[] = {
    /// 申卖价四
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice4",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataAsk45FieldData, data.AskPrice4),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖价四")
    },
    /// 申卖量四
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AskVolume4",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataAsk45FieldData, data.AskVolume4),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖量四")
    },
    /// 申卖价五
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice5",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataAsk45FieldData, data.AskPrice5),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖价五")
    },
    /// 申卖量五
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AskVolume5",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataAsk45FieldData, data.AskVolume5),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖量五")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataAsk45FieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataAsk45FieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataAsk45Field"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("行情申卖四、五属性")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataAsk45FieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataAsk45FieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataAsk45FieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataAsk45FieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataAsk45FieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataAsk45FieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("行情申卖四、五属性")},
    {Py_tp_members, PyCThostFtdcMarketDataAsk45FieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataAsk45FieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataAsk45FieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataAsk45FieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataAsk45FieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataAsk45Field",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataAsk45FieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataAsk45FieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataAsk45FieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataAsk45FieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataAsk45FieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataAsk45FieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataAsk45FieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataAsk45FieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataAsk45Field", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataAsk45Field to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}