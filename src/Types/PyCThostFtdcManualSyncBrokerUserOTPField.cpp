
#include "PyCThostFtdcManualSyncBrokerUserOTPField.h"

///手工同步用户动态令牌

static int PyCThostFtdcManualSyncBrokerUserOTPFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "OTPType", "FirstOTP", "SecondOTP", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcManualSyncBrokerUserOTPField_BrokerID = NULL;
    Py_ssize_t CThostFtdcManualSyncBrokerUserOTPField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcManualSyncBrokerUserOTPField_UserID = NULL;
    Py_ssize_t CThostFtdcManualSyncBrokerUserOTPField_UserID_length = 0;

    /// 动态令牌类型
    /// typedef char TThostFtdcOTPTypeType
    char CThostFtdcManualSyncBrokerUserOTPField_OTPType = 0;

    /// 第一个动态密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcManualSyncBrokerUserOTPField_FirstOTP = NULL;
    Py_ssize_t CThostFtdcManualSyncBrokerUserOTPField_FirstOTP_length = 0;

    /// 第二个动态密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcManualSyncBrokerUserOTPField_SecondOTP = NULL;
    Py_ssize_t CThostFtdcManualSyncBrokerUserOTPField_SecondOTP_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#", (char **)kwlist
        , &CThostFtdcManualSyncBrokerUserOTPField_BrokerID, &CThostFtdcManualSyncBrokerUserOTPField_BrokerID_length
        , &CThostFtdcManualSyncBrokerUserOTPField_UserID, &CThostFtdcManualSyncBrokerUserOTPField_UserID_length
        , &CThostFtdcManualSyncBrokerUserOTPField_OTPType
        , &CThostFtdcManualSyncBrokerUserOTPField_FirstOTP, &CThostFtdcManualSyncBrokerUserOTPField_FirstOTP_length
        , &CThostFtdcManualSyncBrokerUserOTPField_SecondOTP, &CThostFtdcManualSyncBrokerUserOTPField_SecondOTP_length
    )) {
        return -1;
    }

    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcManualSyncBrokerUserOTPField_BrokerID != NULL ) {
        if(CThostFtdcManualSyncBrokerUserOTPField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcManualSyncBrokerUserOTPField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcManualSyncBrokerUserOTPField_BrokerID, CThostFtdcManualSyncBrokerUserOTPField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcManualSyncBrokerUserOTPField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcManualSyncBrokerUserOTPField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcManualSyncBrokerUserOTPField_UserID != NULL ) {
        if(CThostFtdcManualSyncBrokerUserOTPField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcManualSyncBrokerUserOTPField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcManualSyncBrokerUserOTPField_UserID, CThostFtdcManualSyncBrokerUserOTPField_UserID_length);
        strncpy(data->UserID, CThostFtdcManualSyncBrokerUserOTPField_UserID, sizeof(data->UserID));
        CThostFtdcManualSyncBrokerUserOTPField_UserID = NULL;
    }

    /// 动态令牌类型
    /// typedef char TThostFtdcOTPTypeType
    data->OTPType = CThostFtdcManualSyncBrokerUserOTPField_OTPType;

    /// 第一个动态密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcManualSyncBrokerUserOTPField_FirstOTP != NULL ) {
        if(CThostFtdcManualSyncBrokerUserOTPField_FirstOTP_length >= (Py_ssize_t)sizeof(data->FirstOTP)) {
            PyErr_Format(PyExc_ValueError, "FirstOTP too long: length=%zd (max allowed is 40)", CThostFtdcManualSyncBrokerUserOTPField_FirstOTP_length);
            return -1;
        }
        // memset(data->FirstOTP, 0, sizeof(data->FirstOTP));
        // memcpy(data->FirstOTP, CThostFtdcManualSyncBrokerUserOTPField_FirstOTP, CThostFtdcManualSyncBrokerUserOTPField_FirstOTP_length);
        strncpy(data->FirstOTP, CThostFtdcManualSyncBrokerUserOTPField_FirstOTP, sizeof(data->FirstOTP));
        CThostFtdcManualSyncBrokerUserOTPField_FirstOTP = NULL;
    }

    /// 第二个动态密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcManualSyncBrokerUserOTPField_SecondOTP != NULL ) {
        if(CThostFtdcManualSyncBrokerUserOTPField_SecondOTP_length >= (Py_ssize_t)sizeof(data->SecondOTP)) {
            PyErr_Format(PyExc_ValueError, "SecondOTP too long: length=%zd (max allowed is 40)", CThostFtdcManualSyncBrokerUserOTPField_SecondOTP_length);
            return -1;
        }
        // memset(data->SecondOTP, 0, sizeof(data->SecondOTP));
        // memcpy(data->SecondOTP, CThostFtdcManualSyncBrokerUserOTPField_SecondOTP, CThostFtdcManualSyncBrokerUserOTPField_SecondOTP_length);
        strncpy(data->SecondOTP, CThostFtdcManualSyncBrokerUserOTPField_SecondOTP, sizeof(data->SecondOTP));
        CThostFtdcManualSyncBrokerUserOTPField_SecondOTP = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcManualSyncBrokerUserOTPFieldType_repr(PyObject *self) {

    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "OTPType", data->OTPType
        , "FirstOTP", data->FirstOTP//, (Py_ssize_t)sizeof(data->FirstOTP)
        , "SecondOTP", data->SecondOTP//, (Py_ssize_t)sizeof(data->SecondOTP)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcManualSyncBrokerUserOTPField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcManualSyncBrokerUserOTPField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcManualSyncBrokerUserOTPFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcManualSyncBrokerUserOTPFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcManualSyncBrokerUserOTPField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcManualSyncBrokerUserOTPFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcManualSyncBrokerUserOTPFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcManualSyncBrokerUserOTPField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 动态令牌类型
/// typedef char TThostFtdcOTPTypeType
static PyObject *PyCThostFtdcManualSyncBrokerUserOTPFieldType_get_OTPType(PyObject *self, void *closure) {
    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OTPType), 1);
}

static int PyCThostFtdcManualSyncBrokerUserOTPFieldType_set_OTPType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OTPType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcManualSyncBrokerUserOTPField::OTPType)) {
        PyErr_SetString(PyExc_ValueError, "OTPType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);
    data->OTPType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第一个动态密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcManualSyncBrokerUserOTPFieldType_get_FirstOTP(PyObject *self, void *closure) {
    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FirstOTP, (Py_ssize_t)sizeof(data->FirstOTP));
    return PyBytes_FromString(data->FirstOTP);
}

static int PyCThostFtdcManualSyncBrokerUserOTPFieldType_set_FirstOTP(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FirstOTP Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcManualSyncBrokerUserOTPField::FirstOTP)) {
        PyErr_SetString(PyExc_ValueError, "FirstOTP must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);
    // memset(data->FirstOTP, 0, sizeof(data->FirstOTP));
    // memcpy(data->FirstOTP, buf, len);
    strncpy(data->FirstOTP, buf, sizeof(data->FirstOTP));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第二个动态密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcManualSyncBrokerUserOTPFieldType_get_SecondOTP(PyObject *self, void *closure) {
    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SecondOTP, (Py_ssize_t)sizeof(data->SecondOTP));
    return PyBytes_FromString(data->SecondOTP);
}

static int PyCThostFtdcManualSyncBrokerUserOTPFieldType_set_SecondOTP(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecondOTP Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcManualSyncBrokerUserOTPField::SecondOTP)) {
        PyErr_SetString(PyExc_ValueError, "SecondOTP must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcManualSyncBrokerUserOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcManualSyncBrokerUserOTPFieldData>(self);
    CThostFtdcManualSyncBrokerUserOTPField *data = &(extra->data);
    // memset(data->SecondOTP, 0, sizeof(data->SecondOTP));
    // memcpy(data->SecondOTP, buf, len);
    strncpy(data->SecondOTP, buf, sizeof(data->SecondOTP));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcManualSyncBrokerUserOTPFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcManualSyncBrokerUserOTPFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcManualSyncBrokerUserOTPFieldType_get_BrokerID,
    .set = PyCThostFtdcManualSyncBrokerUserOTPFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcManualSyncBrokerUserOTPFieldType_get_UserID,
    .set = PyCThostFtdcManualSyncBrokerUserOTPFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 动态令牌类型
    /// typedef char TThostFtdcOTPTypeType
    {
    .name = "OTPType",
    .get = PyCThostFtdcManualSyncBrokerUserOTPFieldType_get_OTPType,
    .set = PyCThostFtdcManualSyncBrokerUserOTPFieldType_set_OTPType,
    .doc = PyDoc_STR("动态令牌类型"),
    },
    /// 第一个动态密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "FirstOTP",
    .get = PyCThostFtdcManualSyncBrokerUserOTPFieldType_get_FirstOTP,
    .set = PyCThostFtdcManualSyncBrokerUserOTPFieldType_set_FirstOTP,
    .doc = PyDoc_STR("第一个动态密码"),
    },
    /// 第二个动态密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "SecondOTP",
    .get = PyCThostFtdcManualSyncBrokerUserOTPFieldType_get_SecondOTP,
    .set = PyCThostFtdcManualSyncBrokerUserOTPFieldType_set_SecondOTP,
    .doc = PyDoc_STR("第二个动态密码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcManualSyncBrokerUserOTPFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcManualSyncBrokerUserOTPField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("手工同步用户动态令牌")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcManualSyncBrokerUserOTPFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcManualSyncBrokerUserOTPFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcManualSyncBrokerUserOTPFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcManualSyncBrokerUserOTPFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcManualSyncBrokerUserOTPFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcManualSyncBrokerUserOTPFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("手工同步用户动态令牌")},
    {Py_tp_members, PyCThostFtdcManualSyncBrokerUserOTPFieldType_members},
    {Py_tp_getset, PyCThostFtdcManualSyncBrokerUserOTPFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcManualSyncBrokerUserOTPFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcManualSyncBrokerUserOTPFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcManualSyncBrokerUserOTPFieldType_spec = {
    .name = "PyCTP.CThostFtdcManualSyncBrokerUserOTPField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcManualSyncBrokerUserOTPFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcManualSyncBrokerUserOTPFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcManualSyncBrokerUserOTPFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcManualSyncBrokerUserOTPFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcManualSyncBrokerUserOTPFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcManualSyncBrokerUserOTPFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcManualSyncBrokerUserOTPFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcManualSyncBrokerUserOTPFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcManualSyncBrokerUserOTPField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcManualSyncBrokerUserOTPField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}