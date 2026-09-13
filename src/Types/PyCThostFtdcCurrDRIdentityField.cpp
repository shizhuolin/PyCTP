
#include "PyCThostFtdcCurrDRIdentityField.h"

///当前交易中心

static int PyCThostFtdcCurrDRIdentityFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "DRIdentityID", NULL };


    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcCurrDRIdentityField_DRIdentityID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
        , &CThostFtdcCurrDRIdentityField_DRIdentityID
    )) {
        return -1;
    }

    PyCThostFtdcCurrDRIdentityFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrDRIdentityFieldData>(self);
    CThostFtdcCurrDRIdentityField *data = &(extra->data);


    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcCurrDRIdentityField_DRIdentityID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCurrDRIdentityFieldType_repr(PyObject *self) {

    PyCThostFtdcCurrDRIdentityFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrDRIdentityFieldData>(self);
    CThostFtdcCurrDRIdentityField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i}"
        , "DRIdentityID", data->DRIdentityID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCurrDRIdentityField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCurrDRIdentityField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcCurrDRIdentityFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCurrDRIdentityFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCurrDRIdentityFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCurrDRIdentityFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCurrDRIdentityField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("当前交易中心")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCurrDRIdentityFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCurrDRIdentityFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCurrDRIdentityFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCurrDRIdentityFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCurrDRIdentityFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCurrDRIdentityFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("当前交易中心")},
    {Py_tp_members, PyCThostFtdcCurrDRIdentityFieldType_members},
    {Py_tp_getset, PyCThostFtdcCurrDRIdentityFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCurrDRIdentityFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCurrDRIdentityFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCurrDRIdentityFieldType_spec = {
    .name = "PyCTP.CThostFtdcCurrDRIdentityField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCurrDRIdentityFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCurrDRIdentityFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCurrDRIdentityFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCurrDRIdentityFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCurrDRIdentityFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCurrDRIdentityFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCurrDRIdentityFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCurrDRIdentityFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCurrDRIdentityField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCurrDRIdentityField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}