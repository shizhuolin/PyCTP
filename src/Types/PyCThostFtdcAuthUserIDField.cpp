
#include "PyCThostFtdcAuthUserIDField.h"

///终端用户绑定信息

static int PyCThostFtdcAuthUserIDFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AppID", "UserID", "AuthType", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcAuthUserIDField_BrokerID = NULL;
    Py_ssize_t CThostFtdcAuthUserIDField_BrokerID_length = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcAuthUserIDField_AppID = NULL;
    Py_ssize_t CThostFtdcAuthUserIDField_AppID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcAuthUserIDField_UserID = NULL;
    Py_ssize_t CThostFtdcAuthUserIDField_UserID_length = 0;

    /// 校验类型
    /// typedef char TThostFtdcAuthTypeType
    char CThostFtdcAuthUserIDField_AuthType = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#c", (char **)kwlist
        , &CThostFtdcAuthUserIDField_BrokerID, &CThostFtdcAuthUserIDField_BrokerID_length
        , &CThostFtdcAuthUserIDField_AppID, &CThostFtdcAuthUserIDField_AppID_length
        , &CThostFtdcAuthUserIDField_UserID, &CThostFtdcAuthUserIDField_UserID_length
        , &CThostFtdcAuthUserIDField_AuthType
    )) {
        return -1;
    }

    PyCThostFtdcAuthUserIDFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthUserIDFieldData>(self);
    CThostFtdcAuthUserIDField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcAuthUserIDField_BrokerID != NULL ) {
        if(CThostFtdcAuthUserIDField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcAuthUserIDField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcAuthUserIDField_BrokerID, CThostFtdcAuthUserIDField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcAuthUserIDField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcAuthUserIDField_BrokerID = NULL;
    }

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcAuthUserIDField_AppID != NULL ) {
        if(CThostFtdcAuthUserIDField_AppID_length >= (Py_ssize_t)sizeof(data->AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is 32)", CThostFtdcAuthUserIDField_AppID_length);
            return -1;
        }
        // memset(data->AppID, 0, sizeof(data->AppID));
        // memcpy(data->AppID, CThostFtdcAuthUserIDField_AppID, CThostFtdcAuthUserIDField_AppID_length);
        strncpy(data->AppID, CThostFtdcAuthUserIDField_AppID, sizeof(data->AppID));
        CThostFtdcAuthUserIDField_AppID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcAuthUserIDField_UserID != NULL ) {
        if(CThostFtdcAuthUserIDField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcAuthUserIDField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcAuthUserIDField_UserID, CThostFtdcAuthUserIDField_UserID_length);
        strncpy(data->UserID, CThostFtdcAuthUserIDField_UserID, sizeof(data->UserID));
        CThostFtdcAuthUserIDField_UserID = NULL;
    }

    /// 校验类型
    /// typedef char TThostFtdcAuthTypeType
    data->AuthType = CThostFtdcAuthUserIDField_AuthType;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcAuthUserIDFieldType_repr(PyObject *self) {

    PyCThostFtdcAuthUserIDFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthUserIDFieldData>(self);
    CThostFtdcAuthUserIDField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AppID", data->AppID//, (Py_ssize_t)sizeof(data->AppID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "AuthType", data->AuthType
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthUserIDField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthUserIDField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcAuthUserIDFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcAuthUserIDFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthUserIDFieldData>(self);
    CThostFtdcAuthUserIDField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcAuthUserIDFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthUserIDField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthUserIDFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthUserIDFieldData>(self);
    CThostFtdcAuthUserIDField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcAuthUserIDFieldType_get_AppID(PyObject *self, void *closure) {
    PyCThostFtdcAuthUserIDFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthUserIDFieldData>(self);
    CThostFtdcAuthUserIDField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AppID, (Py_ssize_t)sizeof(data->AppID));
    return PyBytes_FromString(data->AppID);
}

static int PyCThostFtdcAuthUserIDFieldType_set_AppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthUserIDField::AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthUserIDFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthUserIDFieldData>(self);
    CThostFtdcAuthUserIDField *data = &(extra->data);
    // memset(data->AppID, 0, sizeof(data->AppID));
    // memcpy(data->AppID, buf, len);
    strncpy(data->AppID, buf, sizeof(data->AppID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcAuthUserIDFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcAuthUserIDFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthUserIDFieldData>(self);
    CThostFtdcAuthUserIDField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcAuthUserIDFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthUserIDField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthUserIDFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthUserIDFieldData>(self);
    CThostFtdcAuthUserIDField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 校验类型
/// typedef char TThostFtdcAuthTypeType
static PyObject *PyCThostFtdcAuthUserIDFieldType_get_AuthType(PyObject *self, void *closure) {
    PyCThostFtdcAuthUserIDFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthUserIDFieldData>(self);
    CThostFtdcAuthUserIDField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AuthType), 1);
}

static int PyCThostFtdcAuthUserIDFieldType_set_AuthType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AuthType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcAuthUserIDField::AuthType)) {
        PyErr_SetString(PyExc_ValueError, "AuthType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthUserIDFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthUserIDFieldData>(self);
    CThostFtdcAuthUserIDField *data = &(extra->data);
    data->AuthType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcAuthUserIDFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcAuthUserIDFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcAuthUserIDFieldType_get_BrokerID,
    .set = PyCThostFtdcAuthUserIDFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "AppID",
    .get = PyCThostFtdcAuthUserIDFieldType_get_AppID,
    .set = PyCThostFtdcAuthUserIDFieldType_set_AppID,
    .doc = PyDoc_STR("App代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcAuthUserIDFieldType_get_UserID,
    .set = PyCThostFtdcAuthUserIDFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 校验类型
    /// typedef char TThostFtdcAuthTypeType
    {
    .name = "AuthType",
    .get = PyCThostFtdcAuthUserIDFieldType_get_AuthType,
    .set = PyCThostFtdcAuthUserIDFieldType_set_AuthType,
    .doc = PyDoc_STR("校验类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcAuthUserIDFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcAuthUserIDField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("终端用户绑定信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcAuthUserIDFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcAuthUserIDFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcAuthUserIDFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcAuthUserIDFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcAuthUserIDFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcAuthUserIDFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("终端用户绑定信息")},
    {Py_tp_members, PyCThostFtdcAuthUserIDFieldType_members},
    {Py_tp_getset, PyCThostFtdcAuthUserIDFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcAuthUserIDFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcAuthUserIDFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcAuthUserIDFieldType_spec = {
    .name = "PyCTP.CThostFtdcAuthUserIDField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcAuthUserIDFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcAuthUserIDFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcAuthUserIDFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcAuthUserIDFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcAuthUserIDFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcAuthUserIDFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcAuthUserIDFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcAuthUserIDFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcAuthUserIDField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAuthUserIDField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}