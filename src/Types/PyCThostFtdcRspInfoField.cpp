
#include "PyCThostFtdcRspInfoField.h"

///响应信息

static int PyCThostFtdcRspInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ErrorID", "ErrorMsg", NULL };


    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcRspInfoField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcRspInfoField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcRspInfoField_ErrorMsg_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#", (char **)kwlist
        , &CThostFtdcRspInfoField_ErrorID
        , &CThostFtdcRspInfoField_ErrorMsg, &CThostFtdcRspInfoField_ErrorMsg_length
    )) {
        return -1;
    }

    PyCThostFtdcRspInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(self);
    CThostFtdcRspInfoField *data = &(extra->data);


    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcRspInfoField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcRspInfoField_ErrorMsg != NULL ) {
        if(CThostFtdcRspInfoField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcRspInfoField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcRspInfoField_ErrorMsg, CThostFtdcRspInfoField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcRspInfoField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcRspInfoField_ErrorMsg = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcRspInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(self);
    CThostFtdcRspInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:y}"
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspInfoField repr");
        return NULL;
    }

    return repr;
}


/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcRspInfoFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcRspInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(self);
    CThostFtdcRspInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcRspInfoFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspInfoField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(self);
    CThostFtdcRspInfoField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspInfoFieldType_members[] = {
    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    {
        .name = "ErrorID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspInfoFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspInfoFieldType_getsets[] = {
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcRspInfoFieldType_get_ErrorMsg,
    .set = PyCThostFtdcRspInfoFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("响应信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("响应信息")},
    {Py_tp_members, PyCThostFtdcRspInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}