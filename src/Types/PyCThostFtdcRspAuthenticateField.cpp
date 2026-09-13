
#include "PyCThostFtdcRspAuthenticateField.h"

///客户端认证响应

static int PyCThostFtdcRspAuthenticateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "UserProductInfo", "AppID", "AppType", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspAuthenticateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspAuthenticateField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspAuthenticateField_UserID = NULL;
    Py_ssize_t CThostFtdcRspAuthenticateField_UserID_length = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcRspAuthenticateField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcRspAuthenticateField_UserProductInfo_length = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcRspAuthenticateField_AppID = NULL;
    Py_ssize_t CThostFtdcRspAuthenticateField_AppID_length = 0;

    /// App类型
    /// typedef char TThostFtdcAppTypeType
    char CThostFtdcRspAuthenticateField_AppType = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#c", (char **)kwlist
        , &CThostFtdcRspAuthenticateField_BrokerID, &CThostFtdcRspAuthenticateField_BrokerID_length
        , &CThostFtdcRspAuthenticateField_UserID, &CThostFtdcRspAuthenticateField_UserID_length
        , &CThostFtdcRspAuthenticateField_UserProductInfo, &CThostFtdcRspAuthenticateField_UserProductInfo_length
        , &CThostFtdcRspAuthenticateField_AppID, &CThostFtdcRspAuthenticateField_AppID_length
        , &CThostFtdcRspAuthenticateField_AppType
    )) {
        return -1;
    }

    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspAuthenticateField_BrokerID != NULL ) {
        if(CThostFtdcRspAuthenticateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspAuthenticateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspAuthenticateField_BrokerID, CThostFtdcRspAuthenticateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspAuthenticateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspAuthenticateField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspAuthenticateField_UserID != NULL ) {
        if(CThostFtdcRspAuthenticateField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspAuthenticateField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspAuthenticateField_UserID, CThostFtdcRspAuthenticateField_UserID_length);
        strncpy(data->UserID, CThostFtdcRspAuthenticateField_UserID, sizeof(data->UserID));
        CThostFtdcRspAuthenticateField_UserID = NULL;
    }

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcRspAuthenticateField_UserProductInfo != NULL ) {
        if(CThostFtdcRspAuthenticateField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcRspAuthenticateField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcRspAuthenticateField_UserProductInfo, CThostFtdcRspAuthenticateField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcRspAuthenticateField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcRspAuthenticateField_UserProductInfo = NULL;
    }

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcRspAuthenticateField_AppID != NULL ) {
        if(CThostFtdcRspAuthenticateField_AppID_length >= (Py_ssize_t)sizeof(data->AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is 32)", CThostFtdcRspAuthenticateField_AppID_length);
            return -1;
        }
        // memset(data->AppID, 0, sizeof(data->AppID));
        // memcpy(data->AppID, CThostFtdcRspAuthenticateField_AppID, CThostFtdcRspAuthenticateField_AppID_length);
        strncpy(data->AppID, CThostFtdcRspAuthenticateField_AppID, sizeof(data->AppID));
        CThostFtdcRspAuthenticateField_AppID = NULL;
    }

    /// App类型
    /// typedef char TThostFtdcAppTypeType
    data->AppType = CThostFtdcRspAuthenticateField_AppType;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspAuthenticateFieldType_repr(PyObject *self) {

    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "AppID", data->AppID//, (Py_ssize_t)sizeof(data->AppID)
        , "AppType", data->AppType
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspAuthenticateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspAuthenticateField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspAuthenticateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspAuthenticateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspAuthenticateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspAuthenticateFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspAuthenticateFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspAuthenticateField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcRspAuthenticateFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcRspAuthenticateFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspAuthenticateField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcRspAuthenticateFieldType_get_AppID(PyObject *self, void *closure) {
    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AppID, (Py_ssize_t)sizeof(data->AppID));
    return PyBytes_FromString(data->AppID);
}

static int PyCThostFtdcRspAuthenticateFieldType_set_AppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspAuthenticateField::AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);
    // memset(data->AppID, 0, sizeof(data->AppID));
    // memcpy(data->AppID, buf, len);
    strncpy(data->AppID, buf, sizeof(data->AppID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App类型
/// typedef char TThostFtdcAppTypeType
static PyObject *PyCThostFtdcRspAuthenticateFieldType_get_AppType(PyObject *self, void *closure) {
    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AppType), 1);
}

static int PyCThostFtdcRspAuthenticateFieldType_set_AppType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspAuthenticateField::AppType)) {
        PyErr_SetString(PyExc_ValueError, "AppType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(self);
    CThostFtdcRspAuthenticateField *data = &(extra->data);
    data->AppType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspAuthenticateFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspAuthenticateFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspAuthenticateFieldType_get_BrokerID,
    .set = PyCThostFtdcRspAuthenticateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspAuthenticateFieldType_get_UserID,
    .set = PyCThostFtdcRspAuthenticateFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcRspAuthenticateFieldType_get_UserProductInfo,
    .set = PyCThostFtdcRspAuthenticateFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "AppID",
    .get = PyCThostFtdcRspAuthenticateFieldType_get_AppID,
    .set = PyCThostFtdcRspAuthenticateFieldType_set_AppID,
    .doc = PyDoc_STR("App代码"),
    },
    /// App类型
    /// typedef char TThostFtdcAppTypeType
    {
    .name = "AppType",
    .get = PyCThostFtdcRspAuthenticateFieldType_get_AppType,
    .set = PyCThostFtdcRspAuthenticateFieldType_set_AppType,
    .doc = PyDoc_STR("App类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspAuthenticateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspAuthenticateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("客户端认证响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspAuthenticateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspAuthenticateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspAuthenticateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspAuthenticateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspAuthenticateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspAuthenticateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("客户端认证响应")},
    {Py_tp_members, PyCThostFtdcRspAuthenticateFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspAuthenticateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspAuthenticateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspAuthenticateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspAuthenticateFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspAuthenticateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspAuthenticateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspAuthenticateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspAuthenticateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspAuthenticateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspAuthenticateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspAuthenticateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspAuthenticateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspAuthenticateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspAuthenticateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspAuthenticateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}