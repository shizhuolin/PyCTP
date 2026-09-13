
#include "PyCThostFtdcRspUserAuthMethodField.h"

///用户发出获取安全安全登陆方法回复

static int PyCThostFtdcRspUserAuthMethodFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "UsableAuthMethod", NULL };


    /// 当前可以用的认证模式
    /// typedef int TThostFtdcCurrentAuthMethodType
    int CThostFtdcRspUserAuthMethodField_UsableAuthMethod = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
        , &CThostFtdcRspUserAuthMethodField_UsableAuthMethod
    )) {
        return -1;
    }

    PyCThostFtdcRspUserAuthMethodFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserAuthMethodFieldData>(self);
    CThostFtdcRspUserAuthMethodField *data = &(extra->data);


    /// 当前可以用的认证模式
    /// typedef int TThostFtdcCurrentAuthMethodType
    data->UsableAuthMethod = CThostFtdcRspUserAuthMethodField_UsableAuthMethod;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspUserAuthMethodFieldType_repr(PyObject *self) {

    PyCThostFtdcRspUserAuthMethodFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserAuthMethodFieldData>(self);
    CThostFtdcRspUserAuthMethodField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i}"
        , "UsableAuthMethod", data->UsableAuthMethod
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspUserAuthMethodField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspUserAuthMethodField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcRspUserAuthMethodFieldType_members[] = {
    /// 当前可以用的认证模式
    /// typedef int TThostFtdcCurrentAuthMethodType
    {
        .name = "UsableAuthMethod",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspUserAuthMethodFieldData, data.UsableAuthMethod),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("当前可以用的认证模式")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspUserAuthMethodFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspUserAuthMethodFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspUserAuthMethodField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户发出获取安全安全登陆方法回复")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspUserAuthMethodFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspUserAuthMethodFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspUserAuthMethodFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspUserAuthMethodFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspUserAuthMethodFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspUserAuthMethodFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户发出获取安全安全登陆方法回复")},
    {Py_tp_members, PyCThostFtdcRspUserAuthMethodFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspUserAuthMethodFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspUserAuthMethodFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspUserAuthMethodFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspUserAuthMethodFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspUserAuthMethodField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspUserAuthMethodFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspUserAuthMethodFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspUserAuthMethodFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspUserAuthMethodFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspUserAuthMethodFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspUserAuthMethodFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspUserAuthMethodFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspUserAuthMethodFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspUserAuthMethodField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspUserAuthMethodField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}