
#include "PyCThostFtdcQrySuperUserFunctionField.h"

///查询管理用户功能权限

static int PyCThostFtdcQrySuperUserFunctionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "UserID", NULL };


    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQrySuperUserFunctionField_UserID = NULL;
    Py_ssize_t CThostFtdcQrySuperUserFunctionField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQrySuperUserFunctionField_UserID, &CThostFtdcQrySuperUserFunctionField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySuperUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySuperUserFunctionFieldData>(self);
    CThostFtdcQrySuperUserFunctionField *data = &(extra->data);


    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQrySuperUserFunctionField_UserID != NULL ) {
        if(CThostFtdcQrySuperUserFunctionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQrySuperUserFunctionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQrySuperUserFunctionField_UserID, CThostFtdcQrySuperUserFunctionField_UserID_length);
        strncpy(data->UserID, CThostFtdcQrySuperUserFunctionField_UserID, sizeof(data->UserID));
        CThostFtdcQrySuperUserFunctionField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySuperUserFunctionFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySuperUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySuperUserFunctionFieldData>(self);
    CThostFtdcQrySuperUserFunctionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySuperUserFunctionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySuperUserFunctionField repr");
        return NULL;
    }

    return repr;
}


/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQrySuperUserFunctionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQrySuperUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySuperUserFunctionFieldData>(self);
    CThostFtdcQrySuperUserFunctionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQrySuperUserFunctionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySuperUserFunctionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySuperUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySuperUserFunctionFieldData>(self);
    CThostFtdcQrySuperUserFunctionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySuperUserFunctionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySuperUserFunctionFieldType_getsets[] = {
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQrySuperUserFunctionFieldType_get_UserID,
    .set = PyCThostFtdcQrySuperUserFunctionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySuperUserFunctionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySuperUserFunctionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询管理用户功能权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySuperUserFunctionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySuperUserFunctionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySuperUserFunctionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySuperUserFunctionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySuperUserFunctionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySuperUserFunctionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询管理用户功能权限")},
    {Py_tp_members, PyCThostFtdcQrySuperUserFunctionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySuperUserFunctionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySuperUserFunctionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySuperUserFunctionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySuperUserFunctionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySuperUserFunctionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySuperUserFunctionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySuperUserFunctionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySuperUserFunctionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySuperUserFunctionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySuperUserFunctionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySuperUserFunctionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySuperUserFunctionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySuperUserFunctionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySuperUserFunctionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySuperUserFunctionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}