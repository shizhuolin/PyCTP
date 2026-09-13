
#include "PyCThostFtdcRspGenUserTextField.h"

///短信验证码生成的回复

static int PyCThostFtdcRspGenUserTextFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "UserTextSeq", NULL };


    /// 短信验证码序号
    /// typedef int TThostFtdcUserTextSeqType
    int CThostFtdcRspGenUserTextField_UserTextSeq = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
        , &CThostFtdcRspGenUserTextField_UserTextSeq
    )) {
        return -1;
    }

    PyCThostFtdcRspGenUserTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenUserTextFieldData>(self);
    CThostFtdcRspGenUserTextField *data = &(extra->data);


    /// 短信验证码序号
    /// typedef int TThostFtdcUserTextSeqType
    data->UserTextSeq = CThostFtdcRspGenUserTextField_UserTextSeq;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspGenUserTextFieldType_repr(PyObject *self) {

    PyCThostFtdcRspGenUserTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenUserTextFieldData>(self);
    CThostFtdcRspGenUserTextField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i}"
        , "UserTextSeq", data->UserTextSeq
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspGenUserTextField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspGenUserTextField repr");
        return NULL;
    }

    return repr;
}


static PyMemberDef PyCThostFtdcRspGenUserTextFieldType_members[] = {
    /// 短信验证码序号
    /// typedef int TThostFtdcUserTextSeqType
    {
        .name = "UserTextSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspGenUserTextFieldData, data.UserTextSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("短信验证码序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspGenUserTextFieldType_getsets[] = {
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspGenUserTextFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspGenUserTextField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("短信验证码生成的回复")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspGenUserTextFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspGenUserTextFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspGenUserTextFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspGenUserTextFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspGenUserTextFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspGenUserTextFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("短信验证码生成的回复")},
    {Py_tp_members, PyCThostFtdcRspGenUserTextFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspGenUserTextFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspGenUserTextFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspGenUserTextFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspGenUserTextFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspGenUserTextField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspGenUserTextFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspGenUserTextFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspGenUserTextFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspGenUserTextFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspGenUserTextFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspGenUserTextFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspGenUserTextFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspGenUserTextFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspGenUserTextField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspGenUserTextField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}