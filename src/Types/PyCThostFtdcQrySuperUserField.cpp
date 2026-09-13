
#include "PyCThostFtdcQrySuperUserField.h"

///查询管理用户

static int PyCThostFtdcQrySuperUserFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "UserID", NULL };


    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQrySuperUserField_UserID = NULL;
    Py_ssize_t CThostFtdcQrySuperUserField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQrySuperUserField_UserID, &CThostFtdcQrySuperUserField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySuperUserFieldData>(self);
    CThostFtdcQrySuperUserField *data = &(extra->data);


    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQrySuperUserField_UserID != NULL ) {
        if(CThostFtdcQrySuperUserField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQrySuperUserField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQrySuperUserField_UserID, CThostFtdcQrySuperUserField_UserID_length);
        strncpy(data->UserID, CThostFtdcQrySuperUserField_UserID, sizeof(data->UserID));
        CThostFtdcQrySuperUserField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySuperUserFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySuperUserFieldData>(self);
    CThostFtdcQrySuperUserField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySuperUserField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySuperUserField repr");
        return NULL;
    }

    return repr;
}


/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQrySuperUserFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQrySuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySuperUserFieldData>(self);
    CThostFtdcQrySuperUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQrySuperUserFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySuperUserField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySuperUserFieldData>(self);
    CThostFtdcQrySuperUserField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySuperUserFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySuperUserFieldType_getsets[] = {
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQrySuperUserFieldType_get_UserID,
    .set = PyCThostFtdcQrySuperUserFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySuperUserFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySuperUserField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询管理用户")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySuperUserFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySuperUserFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySuperUserFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySuperUserFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySuperUserFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySuperUserFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询管理用户")},
    {Py_tp_members, PyCThostFtdcQrySuperUserFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySuperUserFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySuperUserFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySuperUserFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySuperUserFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySuperUserField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySuperUserFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySuperUserFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySuperUserFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySuperUserFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySuperUserFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySuperUserFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySuperUserFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySuperUserFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySuperUserField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySuperUserField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}