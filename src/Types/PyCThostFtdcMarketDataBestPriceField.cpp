
#include "PyCThostFtdcMarketDataBestPriceField.h"

///行情最优价属性

static int PyCThostFtdcMarketDataBestPriceFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BidPrice1", "BidVolume1", "AskPrice1", "AskVolume1", NULL };


    /// 申买价一
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataBestPriceField_BidPrice1 = 0.0;

    /// 申买量一
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataBestPriceField_BidVolume1 = 0;

    /// 申卖价一
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataBestPriceField_AskPrice1 = 0.0;

    /// 申卖量一
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataBestPriceField_AskVolume1 = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
        , &CThostFtdcMarketDataBestPriceField_BidPrice1
        , &CThostFtdcMarketDataBestPriceField_BidVolume1
        , &CThostFtdcMarketDataBestPriceField_AskPrice1
        , &CThostFtdcMarketDataBestPriceField_AskVolume1
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataBestPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBestPriceFieldData>(self);
    CThostFtdcMarketDataBestPriceField *data = &(extra->data);


    /// 申买价一
    /// typedef double TThostFtdcPriceType
    data->BidPrice1 = CThostFtdcMarketDataBestPriceField_BidPrice1;

    /// 申买量一
    /// typedef int TThostFtdcVolumeType
    data->BidVolume1 = CThostFtdcMarketDataBestPriceField_BidVolume1;

    /// 申卖价一
    /// typedef double TThostFtdcPriceType
    data->AskPrice1 = CThostFtdcMarketDataBestPriceField_AskPrice1;

    /// 申卖量一
    /// typedef int TThostFtdcVolumeType
    data->AskVolume1 = CThostFtdcMarketDataBestPriceField_AskVolume1;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataBestPriceFieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataBestPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBestPriceFieldData>(self);
    CThostFtdcMarketDataBestPriceField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:d,s:i,s:d,s:i}"
        , "BidPrice1", data->BidPrice1
        , "BidVolume1", data->BidVolume1
        , "AskPrice1", data->AskPrice1
        , "AskVolume1", data->AskVolume1
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBestPriceField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBestPriceField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcMarketDataBestPriceFieldType_members[] = {
    /// 申买价一
    /// typedef double TThostFtdcPriceType
    {
        .name = "BidPrice1",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBestPriceFieldData, data.BidPrice1),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买价一")
    },
    /// 申买量一
    /// typedef int TThostFtdcVolumeType
    {
        .name = "BidVolume1",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBestPriceFieldData, data.BidVolume1),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买量一")
    },
    /// 申卖价一
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice1",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBestPriceFieldData, data.AskPrice1),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖价一")
    },
    /// 申卖量一
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AskVolume1",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBestPriceFieldData, data.AskVolume1),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申卖量一")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataBestPriceFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataBestPriceFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataBestPriceField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("行情最优价属性")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataBestPriceFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataBestPriceFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataBestPriceFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataBestPriceFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataBestPriceFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataBestPriceFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("行情最优价属性")},
    {Py_tp_members, PyCThostFtdcMarketDataBestPriceFieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataBestPriceFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataBestPriceFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataBestPriceFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataBestPriceFieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataBestPriceField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataBestPriceFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataBestPriceFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataBestPriceFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataBestPriceFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataBestPriceFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataBestPriceFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataBestPriceFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataBestPriceFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataBestPriceField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataBestPriceField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}