
#include "PyCThostFtdcSuperUserField.h"

///管理用户

static int PyCThostFtdcSuperUserFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "UserID", "UserName", "Password", "IsActive", NULL };


    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcSuperUserField_UserID = NULL;
    Py_ssize_t CThostFtdcSuperUserField_UserID_length = 0;

    /// 用户名称
    /// typedef char TThostFtdcUserNameType[81]
    char *CThostFtdcSuperUserField_UserName = NULL;
    Py_ssize_t CThostFtdcSuperUserField_UserName_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcSuperUserField_Password = NULL;
    Py_ssize_t CThostFtdcSuperUserField_Password_length = 0;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSuperUserField_IsActive = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
        , &CThostFtdcSuperUserField_UserID, &CThostFtdcSuperUserField_UserID_length
        , &CThostFtdcSuperUserField_UserName, &CThostFtdcSuperUserField_UserName_length
        , &CThostFtdcSuperUserField_Password, &CThostFtdcSuperUserField_Password_length
        , &CThostFtdcSuperUserField_IsActive
    )) {
        return -1;
    }

    PyCThostFtdcSuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFieldData>(self);
    CThostFtdcSuperUserField *data = &(extra->data);


    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcSuperUserField_UserID != NULL ) {
        if(CThostFtdcSuperUserField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcSuperUserField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcSuperUserField_UserID, CThostFtdcSuperUserField_UserID_length);
        strncpy(data->UserID, CThostFtdcSuperUserField_UserID, sizeof(data->UserID));
        CThostFtdcSuperUserField_UserID = NULL;
    }

    /// 用户名称
    /// typedef char TThostFtdcUserNameType[81]
    if( CThostFtdcSuperUserField_UserName != NULL ) {
        if(CThostFtdcSuperUserField_UserName_length >= (Py_ssize_t)sizeof(data->UserName)) {
            PyErr_Format(PyExc_ValueError, "UserName too long: length=%zd (max allowed is 80)", CThostFtdcSuperUserField_UserName_length);
            return -1;
        }
        // memset(data->UserName, 0, sizeof(data->UserName));
        // memcpy(data->UserName, CThostFtdcSuperUserField_UserName, CThostFtdcSuperUserField_UserName_length);
        strncpy(data->UserName, CThostFtdcSuperUserField_UserName, sizeof(data->UserName));
        CThostFtdcSuperUserField_UserName = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcSuperUserField_Password != NULL ) {
        if(CThostFtdcSuperUserField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcSuperUserField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcSuperUserField_Password, CThostFtdcSuperUserField_Password_length);
        strncpy(data->Password, CThostFtdcSuperUserField_Password, sizeof(data->Password));
        CThostFtdcSuperUserField_Password = NULL;
    }

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    data->IsActive = CThostFtdcSuperUserField_IsActive;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSuperUserFieldType_repr(PyObject *self) {

    PyCThostFtdcSuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFieldData>(self);
    CThostFtdcSuperUserField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i}"
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "UserName", data->UserName//, (Py_ssize_t)sizeof(data->UserName)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "IsActive", data->IsActive
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSuperUserField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSuperUserField repr");
        return NULL;
    }

    return repr;
}


/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcSuperUserFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcSuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFieldData>(self);
    CThostFtdcSuperUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcSuperUserFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSuperUserField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFieldData>(self);
    CThostFtdcSuperUserField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户名称
/// typedef char TThostFtdcUserNameType[81]
static PyObject *PyCThostFtdcSuperUserFieldType_get_UserName(PyObject *self, void *closure) {
    PyCThostFtdcSuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFieldData>(self);
    CThostFtdcSuperUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserName, (Py_ssize_t)sizeof(data->UserName));
    return PyBytes_FromString(data->UserName);
}

static int PyCThostFtdcSuperUserFieldType_set_UserName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSuperUserField::UserName)) {
        PyErr_SetString(PyExc_ValueError, "UserName must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFieldData>(self);
    CThostFtdcSuperUserField *data = &(extra->data);
    // memset(data->UserName, 0, sizeof(data->UserName));
    // memcpy(data->UserName, buf, len);
    strncpy(data->UserName, buf, sizeof(data->UserName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcSuperUserFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcSuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFieldData>(self);
    CThostFtdcSuperUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcSuperUserFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSuperUserField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSuperUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSuperUserFieldData>(self);
    CThostFtdcSuperUserField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSuperUserFieldType_members[] = {
    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActive",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSuperUserFieldData, data.IsActive),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否活跃")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSuperUserFieldType_getsets[] = {
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcSuperUserFieldType_get_UserID,
    .set = PyCThostFtdcSuperUserFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 用户名称
    /// typedef char TThostFtdcUserNameType[81]
    {
    .name = "UserName",
    .get = PyCThostFtdcSuperUserFieldType_get_UserName,
    .set = PyCThostFtdcSuperUserFieldType_set_UserName,
    .doc = PyDoc_STR("用户名称"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcSuperUserFieldType_get_Password,
    .set = PyCThostFtdcSuperUserFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSuperUserFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSuperUserField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("管理用户")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSuperUserFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSuperUserFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSuperUserFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSuperUserFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSuperUserFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSuperUserFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("管理用户")},
    {Py_tp_members, PyCThostFtdcSuperUserFieldType_members},
    {Py_tp_getset, PyCThostFtdcSuperUserFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSuperUserFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSuperUserFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSuperUserFieldType_spec = {
    .name = "PyCTP.CThostFtdcSuperUserField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSuperUserFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSuperUserFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSuperUserFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSuperUserFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSuperUserFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSuperUserFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSuperUserFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSuperUserFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSuperUserField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSuperUserField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}