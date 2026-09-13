
#include "PyCThostFtdcQryFrontStatusField.h"

///查询前置状态

static int PyCThostFtdcQryFrontStatusFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FrontID", NULL };


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcQryFrontStatusField_FrontID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
        , &CThostFtdcQryFrontStatusField_FrontID
    )) {
        return -1;
    }

    PyCThostFtdcQryFrontStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryFrontStatusFieldData>(self);
    CThostFtdcQryFrontStatusField *data = &(extra->data);


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcQryFrontStatusField_FrontID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryFrontStatusFieldType_repr(PyObject *self) {

    PyCThostFtdcQryFrontStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryFrontStatusFieldData>(self);
    CThostFtdcQryFrontStatusField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i}"
        , "FrontID", data->FrontID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryFrontStatusField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryFrontStatusField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcQryFrontStatusFieldType_members[] = {
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryFrontStatusFieldData, data.FrontID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("前置编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryFrontStatusFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryFrontStatusFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryFrontStatusField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询前置状态")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryFrontStatusFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryFrontStatusFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryFrontStatusFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryFrontStatusFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryFrontStatusFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryFrontStatusFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询前置状态")},
    {Py_tp_members, PyCThostFtdcQryFrontStatusFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryFrontStatusFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryFrontStatusFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryFrontStatusFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryFrontStatusFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryFrontStatusField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryFrontStatusFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryFrontStatusFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryFrontStatusFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryFrontStatusFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryFrontStatusFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryFrontStatusFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryFrontStatusFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryFrontStatusFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryFrontStatusField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryFrontStatusField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}