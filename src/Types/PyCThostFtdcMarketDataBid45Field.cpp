
#include "PyCThostFtdcMarketDataBid45Field.h"

///行情申买四、五属性

static int PyCThostFtdcMarketDataBid45FieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BidPrice4", "BidVolume4", "BidPrice5", "BidVolume5", NULL };


    /// 申买价四
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataBid45Field_BidPrice4 = 0.0;

    /// 申买量四
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataBid45Field_BidVolume4 = 0;

    /// 申买价五
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataBid45Field_BidPrice5 = 0.0;

    /// 申买量五
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcMarketDataBid45Field_BidVolume5 = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|didi", (char **)kwlist
        , &CThostFtdcMarketDataBid45Field_BidPrice4
        , &CThostFtdcMarketDataBid45Field_BidVolume4
        , &CThostFtdcMarketDataBid45Field_BidPrice5
        , &CThostFtdcMarketDataBid45Field_BidVolume5
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataBid45FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBid45FieldData>(self);
    CThostFtdcMarketDataBid45Field *data = &(extra->data);


    /// 申买价四
    /// typedef double TThostFtdcPriceType
    data->BidPrice4 = CThostFtdcMarketDataBid45Field_BidPrice4;

    /// 申买量四
    /// typedef int TThostFtdcVolumeType
    data->BidVolume4 = CThostFtdcMarketDataBid45Field_BidVolume4;

    /// 申买价五
    /// typedef double TThostFtdcPriceType
    data->BidPrice5 = CThostFtdcMarketDataBid45Field_BidPrice5;

    /// 申买量五
    /// typedef int TThostFtdcVolumeType
    data->BidVolume5 = CThostFtdcMarketDataBid45Field_BidVolume5;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataBid45FieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataBid45FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBid45FieldData>(self);
    CThostFtdcMarketDataBid45Field *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:d,s:i,s:d,s:i}"
        , "BidPrice4", data->BidPrice4
        , "BidVolume4", data->BidVolume4
        , "BidPrice5", data->BidPrice5
        , "BidVolume5", data->BidVolume5
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBid45Field repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBid45Field repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcMarketDataBid45FieldType_members[] = {
    /// 申买价四
    /// typedef double TThostFtdcPriceType
    {
        .name = "BidPrice4",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBid45FieldData, data.BidPrice4),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买价四")
    },
    /// 申买量四
    /// typedef int TThostFtdcVolumeType
    {
        .name = "BidVolume4",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBid45FieldData, data.BidVolume4),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买量四")
    },
    /// 申买价五
    /// typedef double TThostFtdcPriceType
    {
        .name = "BidPrice5",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBid45FieldData, data.BidPrice5),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买价五")
    },
    /// 申买量五
    /// typedef int TThostFtdcVolumeType
    {
        .name = "BidVolume5",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBid45FieldData, data.BidVolume5),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申买量五")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataBid45FieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataBid45FieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataBid45Field"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("行情申买四、五属性")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataBid45FieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataBid45FieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataBid45FieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataBid45FieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataBid45FieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataBid45FieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("行情申买四、五属性")},
    {Py_tp_members, PyCThostFtdcMarketDataBid45FieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataBid45FieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataBid45FieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataBid45FieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataBid45FieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataBid45Field",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataBid45FieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataBid45FieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataBid45FieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataBid45FieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataBid45FieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataBid45FieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataBid45FieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataBid45FieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataBid45Field", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataBid45Field to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}