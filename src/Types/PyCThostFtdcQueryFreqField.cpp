
#include "PyCThostFtdcQueryFreqField.h"

///查询频率，每秒查询比数

static int PyCThostFtdcQueryFreqFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "QueryFreq", "FTDPkgFreq", NULL };


    /// 查询频率
    /// typedef int TThostFtdcQueryFreqType
    int CThostFtdcQueryFreqField_QueryFreq = 0;

    /// FTD频率
    /// typedef int TThostFtdcQueryFreqType
    int CThostFtdcQueryFreqField_FTDPkgFreq = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ii", (char **)kwlist
        , &CThostFtdcQueryFreqField_QueryFreq
        , &CThostFtdcQueryFreqField_FTDPkgFreq
    )) {
        return -1;
    }

    PyCThostFtdcQueryFreqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryFreqFieldData>(self);
    CThostFtdcQueryFreqField *data = &(extra->data);


    /// 查询频率
    /// typedef int TThostFtdcQueryFreqType
    data->QueryFreq = CThostFtdcQueryFreqField_QueryFreq;

    /// FTD频率
    /// typedef int TThostFtdcQueryFreqType
    data->FTDPkgFreq = CThostFtdcQueryFreqField_FTDPkgFreq;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQueryFreqFieldType_repr(PyObject *self) {

    PyCThostFtdcQueryFreqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryFreqFieldData>(self);
    CThostFtdcQueryFreqField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:i}"
        , "QueryFreq", data->QueryFreq
        , "FTDPkgFreq", data->FTDPkgFreq
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQueryFreqField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQueryFreqField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcQueryFreqFieldType_members[] = {
    /// 查询频率
    /// typedef int TThostFtdcQueryFreqType
    {
        .name = "QueryFreq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQueryFreqFieldData, data.QueryFreq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("查询频率")
    },
    /// FTD频率
    /// typedef int TThostFtdcQueryFreqType
    {
        .name = "FTDPkgFreq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQueryFreqFieldData, data.FTDPkgFreq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("FTD频率")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQueryFreqFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQueryFreqFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQueryFreqField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询频率，每秒查询比数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQueryFreqFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQueryFreqFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQueryFreqFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQueryFreqFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQueryFreqFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQueryFreqFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询频率，每秒查询比数")},
    {Py_tp_members, PyCThostFtdcQueryFreqFieldType_members},
    {Py_tp_getset, PyCThostFtdcQueryFreqFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQueryFreqFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQueryFreqFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQueryFreqFieldType_spec = {
    .name = "PyCTP.CThostFtdcQueryFreqField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQueryFreqFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQueryFreqFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQueryFreqFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQueryFreqFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQueryFreqFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQueryFreqFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQueryFreqFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQueryFreqFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQueryFreqField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQueryFreqField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}