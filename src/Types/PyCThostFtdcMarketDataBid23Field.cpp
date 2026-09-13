
#include "PyCThostFtdcMarketDataBid23Field.h"

///行情申买二、三属性

static int PyCThostFtdcMarketDataBid23FieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BidPrice2", "BidVolume2", "BidPrice3", "BidVolume3", NULL };


    /// 申买价二
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataBid23Field_BidPrice2 = 0.0;

    /// 申买量二
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataBid23Field_BidVolume2 = 0;

    /// 申买价三
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataBid23Field_BidPrice3 = 0.0;

    /// 申买量三
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataBid23Field_BidVolume3 = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
        , &CThostFtdcMarketDataBid23Field_BidPrice2
        , &CThostFtdcMarketDataBid23Field_BidVolume2
        , &CThostFtdcMarketDataBid23Field_BidPrice3
        , &CThostFtdcMarketDataBid23Field_BidVolume3
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataBid23FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBid23FieldData>(self);
    CThostFtdcMarketDataBid23Field *data = &(extra->data);


    /// 申买价二
    /// typedef double TThostFtdcPriceType
    data->BidPrice2 = CThostFtdcMarketDataBid23Field_BidPrice2;

    /// 申买量二
    /// typedef int TThostFtdcVolumeType
    data->BidVolume2 = CThostFtdcMarketDataBid23Field_BidVolume2;

    /// 申买价三
    /// typedef double TThostFtdcPriceType
    data->BidPrice3 = CThostFtdcMarketDataBid23Field_BidPrice3;

    /// 申买量三
    /// typedef int TThostFtdcVolumeType
    data->BidVolume3 = CThostFtdcMarketDataBid23Field_BidVolume3;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataBid23FieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataBid23FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBid23FieldData>(self);
    CThostFtdcMarketDataBid23Field *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:d,s:i,s:d,s:i}"
        , "BidPrice2", data->BidPrice2
        , "BidVolume2", data->BidVolume2
        , "BidPrice3", data->BidPrice3
        , "BidVolume3", data->BidVolume3
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBid23Field repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBid23Field repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcMarketDataBid23FieldType_members[] = {
    /// 申买价二
    /// typedef double TThostFtdcPriceType
    {
        .name = "BidPrice2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBid23FieldData, data.BidPrice2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买价二")
    },
    /// 申买量二
    /// typedef int TThostFtdcVolumeType
    {
        .name = "BidVolume2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBid23FieldData, data.BidVolume2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买量二")
    },
    /// 申买价三
    /// typedef double TThostFtdcPriceType
    {
        .name = "BidPrice3",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBid23FieldData, data.BidPrice3),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买价三")
    },
    /// 申买量三
    /// typedef int TThostFtdcVolumeType
    {
        .name = "BidVolume3",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBid23FieldData, data.BidVolume3),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买量三")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataBid23FieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataBid23FieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataBid23Field"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("行情申买二、三属性")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataBid23FieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataBid23FieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataBid23FieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataBid23FieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataBid23FieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataBid23FieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("行情申买二、三属性")},
    {Py_tp_members, PyCThostFtdcMarketDataBid23FieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataBid23FieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataBid23FieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataBid23FieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataBid23FieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataBid23Field",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataBid23FieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataBid23FieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataBid23FieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataBid23FieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataBid23FieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataBid23FieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataBid23FieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataBid23FieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataBid23Field", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataBid23Field to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}