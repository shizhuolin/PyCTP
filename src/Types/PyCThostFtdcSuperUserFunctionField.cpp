
#include "PyCThostFtdcSuperUserFunctionField.h"

///管理用户功能权限

static int PyCThostFtdcSuperUserFunctionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "UserID", "FunctionCode", NULL };


    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcSuperUserFunctionField_UserID = NULL;
    Py_ssize_t CThostFtdcSuperUserFunctionField_UserID_length = 0;

    /// 功能代码
    /// typedef char TThostFtdcFunctionCodeType
    char CThostFtdcSuperUserFunctionField_FunctionCode = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#c", (char **)kwlist
        , &CThostFtdcSuperUserFunctionField_UserID, &CThostFtdcSuperUserFunctionField_UserID_length
        , &CThostFtdcSuperUserFunctionField_FunctionCode
    )) {
        return -1;
    }

    PyCThostFtdcSuperUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFunctionFieldData>(self);
    CThostFtdcSuperUserFunctionField *data = &(extra->data);


    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcSuperUserFunctionField_UserID != NULL ) {
        if(CThostFtdcSuperUserFunctionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcSuperUserFunctionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcSuperUserFunctionField_UserID, CThostFtdcSuperUserFunctionField_UserID_length);
        strncpy(data->UserID, CThostFtdcSuperUserFunctionField_UserID, sizeof(data->UserID));
        CThostFtdcSuperUserFunctionField_UserID = NULL;
    }

    /// 功能代码
    /// typedef char TThostFtdcFunctionCodeType
    data->FunctionCode = CThostFtdcSuperUserFunctionField_FunctionCode;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSuperUserFunctionFieldType_repr(PyObject *self) {

    PyCThostFtdcSuperUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFunctionFieldData>(self);
    CThostFtdcSuperUserFunctionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c}"
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "FunctionCode", data->FunctionCode
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSuperUserFunctionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSuperUserFunctionField repr");
        return NULL;
    }

    return repr;
}


/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcSuperUserFunctionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcSuperUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFunctionFieldData>(self);
    CThostFtdcSuperUserFunctionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcSuperUserFunctionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSuperUserFunctionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSuperUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFunctionFieldData>(self);
    CThostFtdcSuperUserFunctionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 功能代码
/// typedef char TThostFtdcFunctionCodeType
static PyObject *PyCThostFtdcSuperUserFunctionFieldType_get_FunctionCode(PyObject *self, void *closure) {
    PyCThostFtdcSuperUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFunctionFieldData>(self);
    CThostFtdcSuperUserFunctionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FunctionCode), 1);
}

static int PyCThostFtdcSuperUserFunctionFieldType_set_FunctionCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FunctionCode Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSuperUserFunctionField::FunctionCode)) {
        PyErr_SetString(PyExc_ValueError, "FunctionCode must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSuperUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFunctionFieldData>(self);
    CThostFtdcSuperUserFunctionField *data = &(extra->data);
    data->FunctionCode = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSuperUserFunctionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSuperUserFunctionFieldType_getsets[] = {
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcSuperUserFunctionFieldType_get_UserID,
    .set = PyCThostFtdcSuperUserFunctionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 功能代码
    /// typedef char TThostFtdcFunctionCodeType
    {
    .name = "FunctionCode",
    .get = PyCThostFtdcSuperUserFunctionFieldType_get_FunctionCode,
    .set = PyCThostFtdcSuperUserFunctionFieldType_set_FunctionCode,
    .doc = PyDoc_STR("功能代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSuperUserFunctionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSuperUserFunctionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("管理用户功能权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSuperUserFunctionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSuperUserFunctionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSuperUserFunctionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSuperUserFunctionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSuperUserFunctionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSuperUserFunctionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("管理用户功能权限")},
    {Py_tp_members, PyCThostFtdcSuperUserFunctionFieldType_members},
    {Py_tp_getset, PyCThostFtdcSuperUserFunctionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSuperUserFunctionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSuperUserFunctionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSuperUserFunctionFieldType_spec = {
    .name = "PyCTP.CThostFtdcSuperUserFunctionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSuperUserFunctionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSuperUserFunctionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSuperUserFunctionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSuperUserFunctionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSuperUserFunctionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSuperUserFunctionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSuperUserFunctionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSuperUserFunctionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSuperUserFunctionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSuperUserFunctionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}