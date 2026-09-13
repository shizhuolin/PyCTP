
#include "PyCThostFtdcMarketDataAveragePriceField.h"

///成交均价

static int PyCThostFtdcMarketDataAveragePriceFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "AveragePrice", NULL };


    /// 当日均价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMarketDataAveragePriceField_AveragePrice = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|d", (char **)kwlist
        , &CThostFtdcMarketDataAveragePriceField_AveragePrice
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataAveragePriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataAveragePriceFieldData>(self);
    CThostFtdcMarketDataAveragePriceField *data = &(extra->data);


    /// 当日均价
    /// typedef double TThostFtdcPriceType
    data->AveragePrice = CThostFtdcMarketDataAveragePriceField_AveragePrice;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataAveragePriceFieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataAveragePriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataAveragePriceFieldData>(self);
    CThostFtdcMarketDataAveragePriceField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:d}"
        , "AveragePrice", data->AveragePrice
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataAveragePriceField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataAveragePriceField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcMarketDataAveragePriceFieldType_members[] = {
    /// 当日均价
    /// typedef double TThostFtdcPriceType
    {
        .name = "AveragePrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataAveragePriceFieldData, data.AveragePrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("当日均价")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataAveragePriceFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataAveragePriceFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataAveragePriceField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("成交均价")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataAveragePriceFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataAveragePriceFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataAveragePriceFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataAveragePriceFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataAveragePriceFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataAveragePriceFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("成交均价")},
    {Py_tp_members, PyCThostFtdcMarketDataAveragePriceFieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataAveragePriceFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataAveragePriceFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataAveragePriceFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataAveragePriceFieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataAveragePriceField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataAveragePriceFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataAveragePriceFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataAveragePriceFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataAveragePriceFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataAveragePriceFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataAveragePriceFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataAveragePriceFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataAveragePriceFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataAveragePriceField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataAveragePriceField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}