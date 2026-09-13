
#include "PyCThostFtdcMarketDataBandingPriceField.h"

///行情上下带价

static int PyCThostFtdcMarketDataBandingPriceFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BandingUpperPrice", "BandingLowerPrice", NULL };


    /// 上带价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataBandingPriceField_BandingUpperPrice = 0.0;

    /// 下带价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataBandingPriceField_BandingLowerPrice = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|dd", (char **)kwlist
        , &CThostFtdcMarketDataBandingPriceField_BandingUpperPrice
        , &CThostFtdcMarketDataBandingPriceField_BandingLowerPrice
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataBandingPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBandingPriceFieldData>(self);
    CThostFtdcMarketDataBandingPriceField *data = &(extra->data);


    /// 上带价
    /// typedef double TThostFtdcPriceType
    data->BandingUpperPrice = CThostFtdcMarketDataBandingPriceField_BandingUpperPrice;

    /// 下带价
    /// typedef double TThostFtdcPriceType
    data->BandingLowerPrice = CThostFtdcMarketDataBandingPriceField_BandingLowerPrice;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataBandingPriceFieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataBandingPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataBandingPriceFieldData>(self);
    CThostFtdcMarketDataBandingPriceField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:d,s:d}"
        , "BandingUpperPrice", data->BandingUpperPrice
        , "BandingLowerPrice", data->BandingLowerPrice
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBandingPriceField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBandingPriceField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcMarketDataBandingPriceFieldType_members[] = {
    /// 上带价
    /// typedef double TThostFtdcPriceType
    {
        .name = "BandingUpperPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBandingPriceFieldData, data.BandingUpperPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("上带价")
    },
    /// 下带价
    /// typedef double TThostFtdcPriceType
    {
        .name = "BandingLowerPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataBandingPriceFieldData, data.BandingLowerPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("下带价")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataBandingPriceFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataBandingPriceFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataBandingPriceField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("行情上下带价")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataBandingPriceFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataBandingPriceFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataBandingPriceFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataBandingPriceFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataBandingPriceFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataBandingPriceFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("行情上下带价")},
    {Py_tp_members, PyCThostFtdcMarketDataBandingPriceFieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataBandingPriceFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataBandingPriceFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataBandingPriceFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataBandingPriceFieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataBandingPriceField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataBandingPriceFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataBandingPriceFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataBandingPriceFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataBandingPriceFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataBandingPriceFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataBandingPriceFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataBandingPriceFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataBandingPriceFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataBandingPriceField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataBandingPriceField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}