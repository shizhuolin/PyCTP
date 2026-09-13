
#include "PyCThostFtdcAppAuthenticationCodeField.h"

///App客户端认证码

static int PyCThostFtdcAppAuthenticationCodeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AppID", "AuthCode", "PreAuthCode", "AppType", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcAppAuthenticationCodeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcAppAuthenticationCodeField_BrokerID_length = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcAppAuthenticationCodeField_AppID = NULL;
    Py_ssize_t CThostFtdcAppAuthenticationCodeField_AppID_length = 0;

    /// 认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    char *CThostFtdcAppAuthenticationCodeField_AuthCode = NULL;
    Py_ssize_t CThostFtdcAppAuthenticationCodeField_AuthCode_length = 0;

    /// 旧认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    char *CThostFtdcAppAuthenticationCodeField_PreAuthCode = NULL;
    Py_ssize_t CThostFtdcAppAuthenticationCodeField_PreAuthCode_length = 0;

    /// App类型
    /// typedef char TThostFtdcAppTypeType
    char CThostFtdcAppAuthenticationCodeField_AppType = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#c", (char **)kwlist
        , &CThostFtdcAppAuthenticationCodeField_BrokerID, &CThostFtdcAppAuthenticationCodeField_BrokerID_length
        , &CThostFtdcAppAuthenticationCodeField_AppID, &CThostFtdcAppAuthenticationCodeField_AppID_length
        , &CThostFtdcAppAuthenticationCodeField_AuthCode, &CThostFtdcAppAuthenticationCodeField_AuthCode_length
        , &CThostFtdcAppAuthenticationCodeField_PreAuthCode, &CThostFtdcAppAuthenticationCodeField_PreAuthCode_length
        , &CThostFtdcAppAuthenticationCodeField_AppType
    )) {
        return -1;
    }

    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcAppAuthenticationCodeField_BrokerID != NULL ) {
        if(CThostFtdcAppAuthenticationCodeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcAppAuthenticationCodeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcAppAuthenticationCodeField_BrokerID, CThostFtdcAppAuthenticationCodeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcAppAuthenticationCodeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcAppAuthenticationCodeField_BrokerID = NULL;
    }

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcAppAuthenticationCodeField_AppID != NULL ) {
        if(CThostFtdcAppAuthenticationCodeField_AppID_length >= (Py_ssize_t)sizeof(data->AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is 32)", CThostFtdcAppAuthenticationCodeField_AppID_length);
            return -1;
        }
        // memset(data->AppID, 0, sizeof(data->AppID));
        // memcpy(data->AppID, CThostFtdcAppAuthenticationCodeField_AppID, CThostFtdcAppAuthenticationCodeField_AppID_length);
        strncpy(data->AppID, CThostFtdcAppAuthenticationCodeField_AppID, sizeof(data->AppID));
        CThostFtdcAppAuthenticationCodeField_AppID = NULL;
    }

    /// 认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    if( CThostFtdcAppAuthenticationCodeField_AuthCode != NULL ) {
        if(CThostFtdcAppAuthenticationCodeField_AuthCode_length >= (Py_ssize_t)sizeof(data->AuthCode)) {
            PyErr_Format(PyExc_ValueError, "AuthCode too long: length=%zd (max allowed is 16)", CThostFtdcAppAuthenticationCodeField_AuthCode_length);
            return -1;
        }
        // memset(data->AuthCode, 0, sizeof(data->AuthCode));
        // memcpy(data->AuthCode, CThostFtdcAppAuthenticationCodeField_AuthCode, CThostFtdcAppAuthenticationCodeField_AuthCode_length);
        strncpy(data->AuthCode, CThostFtdcAppAuthenticationCodeField_AuthCode, sizeof(data->AuthCode));
        CThostFtdcAppAuthenticationCodeField_AuthCode = NULL;
    }

    /// 旧认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    if( CThostFtdcAppAuthenticationCodeField_PreAuthCode != NULL ) {
        if(CThostFtdcAppAuthenticationCodeField_PreAuthCode_length >= (Py_ssize_t)sizeof(data->PreAuthCode)) {
            PyErr_Format(PyExc_ValueError, "PreAuthCode too long: length=%zd (max allowed is 16)", CThostFtdcAppAuthenticationCodeField_PreAuthCode_length);
            return -1;
        }
        // memset(data->PreAuthCode, 0, sizeof(data->PreAuthCode));
        // memcpy(data->PreAuthCode, CThostFtdcAppAuthenticationCodeField_PreAuthCode, CThostFtdcAppAuthenticationCodeField_PreAuthCode_length);
        strncpy(data->PreAuthCode, CThostFtdcAppAuthenticationCodeField_PreAuthCode, sizeof(data->PreAuthCode));
        CThostFtdcAppAuthenticationCodeField_PreAuthCode = NULL;
    }

    /// App类型
    /// typedef char TThostFtdcAppTypeType
    data->AppType = CThostFtdcAppAuthenticationCodeField_AppType;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcAppAuthenticationCodeFieldType_repr(PyObject *self) {

    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AppID", data->AppID//, (Py_ssize_t)sizeof(data->AppID)
        , "AuthCode", data->AuthCode//, (Py_ssize_t)sizeof(data->AuthCode)
        , "PreAuthCode", data->PreAuthCode//, (Py_ssize_t)sizeof(data->PreAuthCode)
        , "AppType", data->AppType
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAppAuthenticationCodeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAppAuthenticationCodeField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcAppAuthenticationCodeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcAppAuthenticationCodeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAppAuthenticationCodeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcAppAuthenticationCodeFieldType_get_AppID(PyObject *self, void *closure) {
    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AppID, (Py_ssize_t)sizeof(data->AppID));
    return PyBytes_FromString(data->AppID);
}

static int PyCThostFtdcAppAuthenticationCodeFieldType_set_AppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAppAuthenticationCodeField::AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);
    // memset(data->AppID, 0, sizeof(data->AppID));
    // memcpy(data->AppID, buf, len);
    strncpy(data->AppID, buf, sizeof(data->AppID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 认证码
/// typedef char TThostFtdcAuthCodeType[17]
static PyObject *PyCThostFtdcAppAuthenticationCodeFieldType_get_AuthCode(PyObject *self, void *closure) {
    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AuthCode, (Py_ssize_t)sizeof(data->AuthCode));
    return PyBytes_FromString(data->AuthCode);
}

static int PyCThostFtdcAppAuthenticationCodeFieldType_set_AuthCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AuthCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAppAuthenticationCodeField::AuthCode)) {
        PyErr_SetString(PyExc_ValueError, "AuthCode must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);
    // memset(data->AuthCode, 0, sizeof(data->AuthCode));
    // memcpy(data->AuthCode, buf, len);
    strncpy(data->AuthCode, buf, sizeof(data->AuthCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 旧认证码
/// typedef char TThostFtdcAuthCodeType[17]
static PyObject *PyCThostFtdcAppAuthenticationCodeFieldType_get_PreAuthCode(PyObject *self, void *closure) {
    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->PreAuthCode, (Py_ssize_t)sizeof(data->PreAuthCode));
    return PyBytes_FromString(data->PreAuthCode);
}

static int PyCThostFtdcAppAuthenticationCodeFieldType_set_PreAuthCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PreAuthCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAppAuthenticationCodeField::PreAuthCode)) {
        PyErr_SetString(PyExc_ValueError, "PreAuthCode must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);
    // memset(data->PreAuthCode, 0, sizeof(data->PreAuthCode));
    // memcpy(data->PreAuthCode, buf, len);
    strncpy(data->PreAuthCode, buf, sizeof(data->PreAuthCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App类型
/// typedef char TThostFtdcAppTypeType
static PyObject *PyCThostFtdcAppAuthenticationCodeFieldType_get_AppType(PyObject *self, void *closure) {
    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AppType), 1);
}

static int PyCThostFtdcAppAuthenticationCodeFieldType_set_AppType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcAppAuthenticationCodeField::AppType)) {
        PyErr_SetString(PyExc_ValueError, "AppType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAppAuthenticationCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppAuthenticationCodeFieldData>(self);
    CThostFtdcAppAuthenticationCodeField *data = &(extra->data);
    data->AppType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcAppAuthenticationCodeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcAppAuthenticationCodeFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcAppAuthenticationCodeFieldType_get_BrokerID,
    .set = PyCThostFtdcAppAuthenticationCodeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "AppID",
    .get = PyCThostFtdcAppAuthenticationCodeFieldType_get_AppID,
    .set = PyCThostFtdcAppAuthenticationCodeFieldType_set_AppID,
    .doc = PyDoc_STR("App代码"),
    },
    /// 认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    {
    .name = "AuthCode",
    .get = PyCThostFtdcAppAuthenticationCodeFieldType_get_AuthCode,
    .set = PyCThostFtdcAppAuthenticationCodeFieldType_set_AuthCode,
    .doc = PyDoc_STR("认证码"),
    },
    /// 旧认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    {
    .name = "PreAuthCode",
    .get = PyCThostFtdcAppAuthenticationCodeFieldType_get_PreAuthCode,
    .set = PyCThostFtdcAppAuthenticationCodeFieldType_set_PreAuthCode,
    .doc = PyDoc_STR("旧认证码"),
    },
    /// App类型
    /// typedef char TThostFtdcAppTypeType
    {
    .name = "AppType",
    .get = PyCThostFtdcAppAuthenticationCodeFieldType_get_AppType,
    .set = PyCThostFtdcAppAuthenticationCodeFieldType_set_AppType,
    .doc = PyDoc_STR("App类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcAppAuthenticationCodeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcAppAuthenticationCodeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("App客户端认证码")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcAppAuthenticationCodeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcAppAuthenticationCodeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcAppAuthenticationCodeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcAppAuthenticationCodeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcAppAuthenticationCodeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcAppAuthenticationCodeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("App客户端认证码")},
    {Py_tp_members, PyCThostFtdcAppAuthenticationCodeFieldType_members},
    {Py_tp_getset, PyCThostFtdcAppAuthenticationCodeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcAppAuthenticationCodeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcAppAuthenticationCodeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcAppAuthenticationCodeFieldType_spec = {
    .name = "PyCTP.CThostFtdcAppAuthenticationCodeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcAppAuthenticationCodeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcAppAuthenticationCodeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcAppAuthenticationCodeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcAppAuthenticationCodeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcAppAuthenticationCodeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcAppAuthenticationCodeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcAppAuthenticationCodeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcAppAuthenticationCodeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcAppAuthenticationCodeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAppAuthenticationCodeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}