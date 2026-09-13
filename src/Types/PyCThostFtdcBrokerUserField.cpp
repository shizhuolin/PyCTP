
#include "PyCThostFtdcBrokerUserField.h"

///经纪公司用户

static int PyCThostFtdcBrokerUserFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "UserName", "UserType", "IsActive", "IsUsingOTP", "IsAuthForce", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerUserField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerUserField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcBrokerUserField_UserID = NULL;
    Py_ssize_t CThostFtdcBrokerUserField_UserID_length = 0;

    /// 用户名称
    /// typedef char TThostFtdcUserNameType[81]
    char *CThostFtdcBrokerUserField_UserName = NULL;
    Py_ssize_t CThostFtdcBrokerUserField_UserName_length = 0;

    /// 用户类型
    /// typedef char TThostFtdcUserTypeType
    char CThostFtdcBrokerUserField_UserType = 0;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    int CThostFtdcBrokerUserField_IsActive = 0;

    /// 是否使用令牌
    /// typedef int TThostFtdcBoolType
    int CThostFtdcBrokerUserField_IsUsingOTP = 0;

    /// 是否强制终端认证
    /// typedef int TThostFtdcBoolType
    int CThostFtdcBrokerUserField_IsAuthForce = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ciii", (char **)kwlist
        , &CThostFtdcBrokerUserField_BrokerID, &CThostFtdcBrokerUserField_BrokerID_length
        , &CThostFtdcBrokerUserField_UserID, &CThostFtdcBrokerUserField_UserID_length
        , &CThostFtdcBrokerUserField_UserName, &CThostFtdcBrokerUserField_UserName_length
        , &CThostFtdcBrokerUserField_UserType
        , &CThostFtdcBrokerUserField_IsActive
        , &CThostFtdcBrokerUserField_IsUsingOTP
        , &CThostFtdcBrokerUserField_IsAuthForce
    )) {
        return -1;
    }

    PyCThostFtdcBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFieldData>(self);
    CThostFtdcBrokerUserField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerUserField_BrokerID != NULL ) {
        if(CThostFtdcBrokerUserField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerUserField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerUserField_BrokerID, CThostFtdcBrokerUserField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerUserField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerUserField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcBrokerUserField_UserID != NULL ) {
        if(CThostFtdcBrokerUserField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcBrokerUserField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcBrokerUserField_UserID, CThostFtdcBrokerUserField_UserID_length);
        strncpy(data->UserID, CThostFtdcBrokerUserField_UserID, sizeof(data->UserID));
        CThostFtdcBrokerUserField_UserID = NULL;
    }

    /// 用户名称
    /// typedef char TThostFtdcUserNameType[81]
    if( CThostFtdcBrokerUserField_UserName != NULL ) {
        if(CThostFtdcBrokerUserField_UserName_length >= (Py_ssize_t)sizeof(data->UserName)) {
            PyErr_Format(PyExc_ValueError, "UserName too long: length=%zd (max allowed is 80)", CThostFtdcBrokerUserField_UserName_length);
            return -1;
        }
        // memset(data->UserName, 0, sizeof(data->UserName));
        // memcpy(data->UserName, CThostFtdcBrokerUserField_UserName, CThostFtdcBrokerUserField_UserName_length);
        strncpy(data->UserName, CThostFtdcBrokerUserField_UserName, sizeof(data->UserName));
        CThostFtdcBrokerUserField_UserName = NULL;
    }

    /// 用户类型
    /// typedef char TThostFtdcUserTypeType
    data->UserType = CThostFtdcBrokerUserField_UserType;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    data->IsActive = CThostFtdcBrokerUserField_IsActive;

    /// 是否使用令牌
    /// typedef int TThostFtdcBoolType
    data->IsUsingOTP = CThostFtdcBrokerUserField_IsUsingOTP;

    /// 是否强制终端认证
    /// typedef int TThostFtdcBoolType
    data->IsAuthForce = CThostFtdcBrokerUserField_IsAuthForce;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerUserFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFieldData>(self);
    CThostFtdcBrokerUserField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:i,s:i,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "UserName", data->UserName//, (Py_ssize_t)sizeof(data->UserName)
        , "UserType", data->UserType
        , "IsActive", data->IsActive
        , "IsUsingOTP", data->IsUsingOTP
        , "IsAuthForce", data->IsAuthForce
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerUserFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFieldData>(self);
    CThostFtdcBrokerUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerUserFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFieldData>(self);
    CThostFtdcBrokerUserField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcBrokerUserFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFieldData>(self);
    CThostFtdcBrokerUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcBrokerUserFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFieldData>(self);
    CThostFtdcBrokerUserField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户名称
/// typedef char TThostFtdcUserNameType[81]
static PyObject *PyCThostFtdcBrokerUserFieldType_get_UserName(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFieldData>(self);
    CThostFtdcBrokerUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserName, (Py_ssize_t)sizeof(data->UserName));
    return PyBytes_FromString(data->UserName);
}

static int PyCThostFtdcBrokerUserFieldType_set_UserName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserField::UserName)) {
        PyErr_SetString(PyExc_ValueError, "UserName must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFieldData>(self);
    CThostFtdcBrokerUserField *data = &(extra->data);
    // memset(data->UserName, 0, sizeof(data->UserName));
    // memcpy(data->UserName, buf, len);
    strncpy(data->UserName, buf, sizeof(data->UserName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户类型
/// typedef char TThostFtdcUserTypeType
static PyObject *PyCThostFtdcBrokerUserFieldType_get_UserType(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFieldData>(self);
    CThostFtdcBrokerUserField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->UserType), 1);
}

static int PyCThostFtdcBrokerUserFieldType_set_UserType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerUserField::UserType)) {
        PyErr_SetString(PyExc_ValueError, "UserType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFieldData>(self);
    CThostFtdcBrokerUserField *data = &(extra->data);
    data->UserType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerUserFieldType_members[] = {
    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActive",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerUserFieldData, data.IsActive),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否活跃")
    },
    /// 是否使用令牌
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsUsingOTP",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerUserFieldData, data.IsUsingOTP),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否使用令牌")
    },
    /// 是否强制终端认证
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsAuthForce",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerUserFieldData, data.IsAuthForce),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否强制终端认证")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerUserFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerUserFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerUserFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcBrokerUserFieldType_get_UserID,
    .set = PyCThostFtdcBrokerUserFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 用户名称
    /// typedef char TThostFtdcUserNameType[81]
    {
    .name = "UserName",
    .get = PyCThostFtdcBrokerUserFieldType_get_UserName,
    .set = PyCThostFtdcBrokerUserFieldType_set_UserName,
    .doc = PyDoc_STR("用户名称"),
    },
    /// 用户类型
    /// typedef char TThostFtdcUserTypeType
    {
    .name = "UserType",
    .get = PyCThostFtdcBrokerUserFieldType_get_UserType,
    .set = PyCThostFtdcBrokerUserFieldType_set_UserType,
    .doc = PyDoc_STR("用户类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerUserFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerUserField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("经纪公司用户")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerUserFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerUserFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerUserFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerUserFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerUserFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerUserFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("经纪公司用户")},
    {Py_tp_members, PyCThostFtdcBrokerUserFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerUserFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerUserFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerUserFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerUserFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerUserField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerUserFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerUserFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerUserFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerUserFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerUserFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerUserFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerUserFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerUserFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerUserField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}