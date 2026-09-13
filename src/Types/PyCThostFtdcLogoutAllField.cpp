
#include "PyCThostFtdcLogoutAllField.h"

///登录信息

static int PyCThostFtdcLogoutAllFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FrontID", "SessionID", "SystemName", NULL };


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcLogoutAllField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcLogoutAllField_SessionID = 0;

    /// 系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    char *CThostFtdcLogoutAllField_SystemName = NULL;
    Py_ssize_t CThostFtdcLogoutAllField_SystemName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#", (char **)kwlist
        , &CThostFtdcLogoutAllField_FrontID
        , &CThostFtdcLogoutAllField_SessionID
        , &CThostFtdcLogoutAllField_SystemName, &CThostFtdcLogoutAllField_SystemName_length
    )) {
        return -1;
    }

    PyCThostFtdcLogoutAllFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLogoutAllFieldData>(self);
    CThostFtdcLogoutAllField *data = &(extra->data);


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcLogoutAllField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcLogoutAllField_SessionID;

    /// 系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    if( CThostFtdcLogoutAllField_SystemName != NULL ) {
        if(CThostFtdcLogoutAllField_SystemName_length >= (Py_ssize_t)sizeof(data->SystemName)) {
            PyErr_Format(PyExc_ValueError, "SystemName too long: length=%zd (max allowed is 40)", CThostFtdcLogoutAllField_SystemName_length);
            return -1;
        }
        // memset(data->SystemName, 0, sizeof(data->SystemName));
        // memcpy(data->SystemName, CThostFtdcLogoutAllField_SystemName, CThostFtdcLogoutAllField_SystemName_length);
        strncpy(data->SystemName, CThostFtdcLogoutAllField_SystemName, sizeof(data->SystemName));
        CThostFtdcLogoutAllField_SystemName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcLogoutAllFieldType_repr(PyObject *self) {

    PyCThostFtdcLogoutAllFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLogoutAllFieldData>(self);
    CThostFtdcLogoutAllField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:i,s:y}"
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "SystemName", data->SystemName//, (Py_ssize_t)sizeof(data->SystemName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLogoutAllField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLogoutAllField repr");
        return NULL;
    }

    return repr;
}


/// 系统名称
/// typedef char TThostFtdcSystemNameType[41]
static PyObject *PyCThostFtdcLogoutAllFieldType_get_SystemName(PyObject *self, void *closure) {
    PyCThostFtdcLogoutAllFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLogoutAllFieldData>(self);
    CThostFtdcLogoutAllField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SystemName, (Py_ssize_t)sizeof(data->SystemName));
    return PyBytes_FromString(data->SystemName);
}

static int PyCThostFtdcLogoutAllFieldType_set_SystemName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SystemName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLogoutAllField::SystemName)) {
        PyErr_SetString(PyExc_ValueError, "SystemName must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLogoutAllFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLogoutAllFieldData>(self);
    CThostFtdcLogoutAllField *data = &(extra->data);
    // memset(data->SystemName, 0, sizeof(data->SystemName));
    // memcpy(data->SystemName, buf, len);
    strncpy(data->SystemName, buf, sizeof(data->SystemName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcLogoutAllFieldType_members[] = {
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcLogoutAllFieldData, data.FrontID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("前置编号")
    },
    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    {
        .name = "SessionID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcLogoutAllFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcLogoutAllFieldType_getsets[] = {
    /// 系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    {
    .name = "SystemName",
    .get = PyCThostFtdcLogoutAllFieldType_get_SystemName,
    .set = PyCThostFtdcLogoutAllFieldType_set_SystemName,
    .doc = PyDoc_STR("系统名称"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcLogoutAllFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcLogoutAllField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("登录信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcLogoutAllFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcLogoutAllFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcLogoutAllFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcLogoutAllFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcLogoutAllFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcLogoutAllFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("登录信息")},
    {Py_tp_members, PyCThostFtdcLogoutAllFieldType_members},
    {Py_tp_getset, PyCThostFtdcLogoutAllFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcLogoutAllFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcLogoutAllFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcLogoutAllFieldType_spec = {
    .name = "PyCTP.CThostFtdcLogoutAllField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcLogoutAllFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcLogoutAllFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcLogoutAllFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcLogoutAllFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcLogoutAllFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcLogoutAllFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcLogoutAllFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcLogoutAllFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcLogoutAllField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLogoutAllField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}