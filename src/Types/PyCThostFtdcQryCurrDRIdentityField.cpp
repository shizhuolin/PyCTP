
#include "PyCThostFtdcQryCurrDRIdentityField.h"

///查询当前交易中心

static int PyCThostFtdcQryCurrDRIdentityFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "DRIdentityID", NULL };


    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcQryCurrDRIdentityField_DRIdentityID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
        , &CThostFtdcQryCurrDRIdentityField_DRIdentityID
    )) {
        return -1;
    }

    PyCThostFtdcQryCurrDRIdentityFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCurrDRIdentityFieldData>(self);
    CThostFtdcQryCurrDRIdentityField *data = &(extra->data);


    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcQryCurrDRIdentityField_DRIdentityID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryCurrDRIdentityFieldType_repr(PyObject *self) {

    PyCThostFtdcQryCurrDRIdentityFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCurrDRIdentityFieldData>(self);
    CThostFtdcQryCurrDRIdentityField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i}"
        , "DRIdentityID", data->DRIdentityID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCurrDRIdentityField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCurrDRIdentityField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcQryCurrDRIdentityFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryCurrDRIdentityFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryCurrDRIdentityFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryCurrDRIdentityFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryCurrDRIdentityField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询当前交易中心")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryCurrDRIdentityFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryCurrDRIdentityFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryCurrDRIdentityFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryCurrDRIdentityFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryCurrDRIdentityFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryCurrDRIdentityFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询当前交易中心")},
    {Py_tp_members, PyCThostFtdcQryCurrDRIdentityFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryCurrDRIdentityFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryCurrDRIdentityFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryCurrDRIdentityFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryCurrDRIdentityFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryCurrDRIdentityField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryCurrDRIdentityFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryCurrDRIdentityFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryCurrDRIdentityFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryCurrDRIdentityFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryCurrDRIdentityFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryCurrDRIdentityFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryCurrDRIdentityFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryCurrDRIdentityFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryCurrDRIdentityField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCurrDRIdentityField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}