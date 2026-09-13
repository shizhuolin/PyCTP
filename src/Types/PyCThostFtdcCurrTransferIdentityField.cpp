
#include "PyCThostFtdcCurrTransferIdentityField.h"

///当前银期所属交易中心

static int PyCThostFtdcCurrTransferIdentityFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "IdentityID", NULL };


    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcCurrTransferIdentityField_IdentityID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
        , &CThostFtdcCurrTransferIdentityField_IdentityID
    )) {
        return -1;
    }

    PyCThostFtdcCurrTransferIdentityFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrTransferIdentityFieldData>(self);
    CThostFtdcCurrTransferIdentityField *data = &(extra->data);


    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->IdentityID = CThostFtdcCurrTransferIdentityField_IdentityID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCurrTransferIdentityFieldType_repr(PyObject *self) {

    PyCThostFtdcCurrTransferIdentityFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrTransferIdentityFieldData>(self);
    CThostFtdcCurrTransferIdentityField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i}"
        , "IdentityID", data->IdentityID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCurrTransferIdentityField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCurrTransferIdentityField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcCurrTransferIdentityFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "IdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCurrTransferIdentityFieldData, data.IdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCurrTransferIdentityFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCurrTransferIdentityFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCurrTransferIdentityField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("当前银期所属交易中心")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCurrTransferIdentityFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCurrTransferIdentityFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCurrTransferIdentityFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCurrTransferIdentityFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCurrTransferIdentityFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCurrTransferIdentityFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("当前银期所属交易中心")},
    {Py_tp_members, PyCThostFtdcCurrTransferIdentityFieldType_members},
    {Py_tp_getset, PyCThostFtdcCurrTransferIdentityFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCurrTransferIdentityFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCurrTransferIdentityFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCurrTransferIdentityFieldType_spec = {
    .name = "PyCTP.CThostFtdcCurrTransferIdentityField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCurrTransferIdentityFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCurrTransferIdentityFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCurrTransferIdentityFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCurrTransferIdentityFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCurrTransferIdentityFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCurrTransferIdentityFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCurrTransferIdentityFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCurrTransferIdentityFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCurrTransferIdentityField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCurrTransferIdentityField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}