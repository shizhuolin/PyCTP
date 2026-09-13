
#include "PyCThostFtdcDisseminationField.h"

///信息分发

static int PyCThostFtdcDisseminationFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "SequenceSeries", "SequenceNo", NULL };


    /// 序列系列号
    /// typedef short TThostFtdcSequenceSeriesType
    short CThostFtdcDisseminationField_SequenceSeries = 0;

    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcDisseminationField_SequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|hi", (char **)kwlist
        , &CThostFtdcDisseminationField_SequenceSeries
        , &CThostFtdcDisseminationField_SequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcDisseminationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDisseminationFieldData>(self);
    CThostFtdcDisseminationField *data = &(extra->data);


    /// 序列系列号
    /// typedef short TThostFtdcSequenceSeriesType
    data->SequenceSeries = CThostFtdcDisseminationField_SequenceSeries;

    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcDisseminationField_SequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcDisseminationFieldType_repr(PyObject *self) {

    PyCThostFtdcDisseminationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDisseminationFieldData>(self);
    CThostFtdcDisseminationField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:h,s:i}"
        , "SequenceSeries", data->SequenceSeries
        , "SequenceNo", data->SequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDisseminationField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDisseminationField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcDisseminationFieldType_members[] = {
    /// 序列系列号
    /// typedef short TThostFtdcSequenceSeriesType
    {
        .name = "SequenceSeries",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_SHORT,
#else
        .type = Py_T_SHORT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcDisseminationFieldData, data.SequenceSeries),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序列系列号")
    },
    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcDisseminationFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序列号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcDisseminationFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcDisseminationFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcDisseminationField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("信息分发")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcDisseminationFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcDisseminationFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcDisseminationFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcDisseminationFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcDisseminationFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcDisseminationFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("信息分发")},
    {Py_tp_members, PyCThostFtdcDisseminationFieldType_members},
    {Py_tp_getset, PyCThostFtdcDisseminationFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcDisseminationFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcDisseminationFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcDisseminationFieldType_spec = {
    .name = "PyCTP.CThostFtdcDisseminationField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcDisseminationFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcDisseminationFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcDisseminationFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcDisseminationFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcDisseminationFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcDisseminationFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcDisseminationFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcDisseminationFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcDisseminationField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDisseminationField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}