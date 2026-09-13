
#include "PyCThostFtdcReqAuthenticateField.h"

///客户端认证请求

static int PyCThostFtdcReqAuthenticateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "UserProductInfo", "AuthCode", "AppID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqAuthenticateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqAuthenticateField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqAuthenticateField_UserID = NULL;
    Py_ssize_t CThostFtdcReqAuthenticateField_UserID_length = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcReqAuthenticateField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcReqAuthenticateField_UserProductInfo_length = 0;

    /// 认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    char *CThostFtdcReqAuthenticateField_AuthCode = NULL;
    Py_ssize_t CThostFtdcReqAuthenticateField_AuthCode_length = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcReqAuthenticateField_AppID = NULL;
    Py_ssize_t CThostFtdcReqAuthenticateField_AppID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcReqAuthenticateField_BrokerID, &CThostFtdcReqAuthenticateField_BrokerID_length
        , &CThostFtdcReqAuthenticateField_UserID, &CThostFtdcReqAuthenticateField_UserID_length
        , &CThostFtdcReqAuthenticateField_UserProductInfo, &CThostFtdcReqAuthenticateField_UserProductInfo_length
        , &CThostFtdcReqAuthenticateField_AuthCode, &CThostFtdcReqAuthenticateField_AuthCode_length
        , &CThostFtdcReqAuthenticateField_AppID, &CThostFtdcReqAuthenticateField_AppID_length
    )) {
        return -1;
    }

    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqAuthenticateField_BrokerID != NULL ) {
        if(CThostFtdcReqAuthenticateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqAuthenticateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqAuthenticateField_BrokerID, CThostFtdcReqAuthenticateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqAuthenticateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqAuthenticateField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqAuthenticateField_UserID != NULL ) {
        if(CThostFtdcReqAuthenticateField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqAuthenticateField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqAuthenticateField_UserID, CThostFtdcReqAuthenticateField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqAuthenticateField_UserID, sizeof(data->UserID));
        CThostFtdcReqAuthenticateField_UserID = NULL;
    }

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcReqAuthenticateField_UserProductInfo != NULL ) {
        if(CThostFtdcReqAuthenticateField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqAuthenticateField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcReqAuthenticateField_UserProductInfo, CThostFtdcReqAuthenticateField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcReqAuthenticateField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcReqAuthenticateField_UserProductInfo = NULL;
    }

    /// 认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    if( CThostFtdcReqAuthenticateField_AuthCode != NULL ) {
        if(CThostFtdcReqAuthenticateField_AuthCode_length >= (Py_ssize_t)sizeof(data->AuthCode)) {
            PyErr_Format(PyExc_ValueError, "AuthCode too long: length=%zd (max allowed is 16)", CThostFtdcReqAuthenticateField_AuthCode_length);
            return -1;
        }
        // memset(data->AuthCode, 0, sizeof(data->AuthCode));
        // memcpy(data->AuthCode, CThostFtdcReqAuthenticateField_AuthCode, CThostFtdcReqAuthenticateField_AuthCode_length);
        strncpy(data->AuthCode, CThostFtdcReqAuthenticateField_AuthCode, sizeof(data->AuthCode));
        CThostFtdcReqAuthenticateField_AuthCode = NULL;
    }

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcReqAuthenticateField_AppID != NULL ) {
        if(CThostFtdcReqAuthenticateField_AppID_length >= (Py_ssize_t)sizeof(data->AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is 32)", CThostFtdcReqAuthenticateField_AppID_length);
            return -1;
        }
        // memset(data->AppID, 0, sizeof(data->AppID));
        // memcpy(data->AppID, CThostFtdcReqAuthenticateField_AppID, CThostFtdcReqAuthenticateField_AppID_length);
        strncpy(data->AppID, CThostFtdcReqAuthenticateField_AppID, sizeof(data->AppID));
        CThostFtdcReqAuthenticateField_AppID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqAuthenticateFieldType_repr(PyObject *self) {

    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "AuthCode", data->AuthCode//, (Py_ssize_t)sizeof(data->AuthCode)
        , "AppID", data->AppID//, (Py_ssize_t)sizeof(data->AppID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqAuthenticateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqAuthenticateField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqAuthenticateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqAuthenticateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqAuthenticateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqAuthenticateFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqAuthenticateFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqAuthenticateField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcReqAuthenticateFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcReqAuthenticateFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqAuthenticateField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 认证码
/// typedef char TThostFtdcAuthCodeType[17]
static PyObject *PyCThostFtdcReqAuthenticateFieldType_get_AuthCode(PyObject *self, void *closure) {
    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AuthCode, (Py_ssize_t)sizeof(data->AuthCode));
    return PyBytes_FromString(data->AuthCode);
}

static int PyCThostFtdcReqAuthenticateFieldType_set_AuthCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AuthCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqAuthenticateField::AuthCode)) {
        PyErr_SetString(PyExc_ValueError, "AuthCode must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);
    // memset(data->AuthCode, 0, sizeof(data->AuthCode));
    // memcpy(data->AuthCode, buf, len);
    strncpy(data->AuthCode, buf, sizeof(data->AuthCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcReqAuthenticateFieldType_get_AppID(PyObject *self, void *closure) {
    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AppID, (Py_ssize_t)sizeof(data->AppID));
    return PyBytes_FromString(data->AppID);
}

static int PyCThostFtdcReqAuthenticateFieldType_set_AppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqAuthenticateField::AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqAuthenticateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(self);
    CThostFtdcReqAuthenticateField *data = &(extra->data);
    // memset(data->AppID, 0, sizeof(data->AppID));
    // memcpy(data->AppID, buf, len);
    strncpy(data->AppID, buf, sizeof(data->AppID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqAuthenticateFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqAuthenticateFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqAuthenticateFieldType_get_BrokerID,
    .set = PyCThostFtdcReqAuthenticateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqAuthenticateFieldType_get_UserID,
    .set = PyCThostFtdcReqAuthenticateFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcReqAuthenticateFieldType_get_UserProductInfo,
    .set = PyCThostFtdcReqAuthenticateFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    {
    .name = "AuthCode",
    .get = PyCThostFtdcReqAuthenticateFieldType_get_AuthCode,
    .set = PyCThostFtdcReqAuthenticateFieldType_set_AuthCode,
    .doc = PyDoc_STR("认证码"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "AppID",
    .get = PyCThostFtdcReqAuthenticateFieldType_get_AppID,
    .set = PyCThostFtdcReqAuthenticateFieldType_set_AppID,
    .doc = PyDoc_STR("App代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqAuthenticateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqAuthenticateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("客户端认证请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqAuthenticateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqAuthenticateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqAuthenticateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqAuthenticateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqAuthenticateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqAuthenticateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("客户端认证请求")},
    {Py_tp_members, PyCThostFtdcReqAuthenticateFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqAuthenticateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqAuthenticateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqAuthenticateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqAuthenticateFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqAuthenticateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqAuthenticateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqAuthenticateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqAuthenticateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqAuthenticateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqAuthenticateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqAuthenticateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqAuthenticateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqAuthenticateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqAuthenticateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqAuthenticateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}