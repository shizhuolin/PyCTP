
#include "PyCThostFtdcSMSVerifyConfigField.h"

///登录验证设置

static int PyCThostFtdcSMSVerifyConfigFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "UserID", "BrokerID", "Mobile", "UseSMSVerify", NULL };


    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcSMSVerifyConfigField_UserID = NULL;
    Py_ssize_t CThostFtdcSMSVerifyConfigField_UserID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSMSVerifyConfigField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSMSVerifyConfigField_BrokerID_length = 0;

    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    char *CThostFtdcSMSVerifyConfigField_Mobile = NULL;
    Py_ssize_t CThostFtdcSMSVerifyConfigField_Mobile_length = 0;

    /// 是否启用短信验证
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSMSVerifyConfigField_UseSMSVerify = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
        , &CThostFtdcSMSVerifyConfigField_UserID, &CThostFtdcSMSVerifyConfigField_UserID_length
        , &CThostFtdcSMSVerifyConfigField_BrokerID, &CThostFtdcSMSVerifyConfigField_BrokerID_length
        , &CThostFtdcSMSVerifyConfigField_Mobile, &CThostFtdcSMSVerifyConfigField_Mobile_length
        , &CThostFtdcSMSVerifyConfigField_UseSMSVerify
    )) {
        return -1;
    }

    PyCThostFtdcSMSVerifyConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyConfigFieldData>(self);
    CThostFtdcSMSVerifyConfigField *data = &(extra->data);


    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcSMSVerifyConfigField_UserID != NULL ) {
        if(CThostFtdcSMSVerifyConfigField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcSMSVerifyConfigField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcSMSVerifyConfigField_UserID, CThostFtdcSMSVerifyConfigField_UserID_length);
        strncpy(data->UserID, CThostFtdcSMSVerifyConfigField_UserID, sizeof(data->UserID));
        CThostFtdcSMSVerifyConfigField_UserID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSMSVerifyConfigField_BrokerID != NULL ) {
        if(CThostFtdcSMSVerifyConfigField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSMSVerifyConfigField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSMSVerifyConfigField_BrokerID, CThostFtdcSMSVerifyConfigField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSMSVerifyConfigField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSMSVerifyConfigField_BrokerID = NULL;
    }

    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    if( CThostFtdcSMSVerifyConfigField_Mobile != NULL ) {
        if(CThostFtdcSMSVerifyConfigField_Mobile_length >= (Py_ssize_t)sizeof(data->Mobile)) {
            PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is 16)", CThostFtdcSMSVerifyConfigField_Mobile_length);
            return -1;
        }
        // memset(data->Mobile, 0, sizeof(data->Mobile));
        // memcpy(data->Mobile, CThostFtdcSMSVerifyConfigField_Mobile, CThostFtdcSMSVerifyConfigField_Mobile_length);
        strncpy(data->Mobile, CThostFtdcSMSVerifyConfigField_Mobile, sizeof(data->Mobile));
        CThostFtdcSMSVerifyConfigField_Mobile = NULL;
    }

    /// 是否启用短信验证
    /// typedef int TThostFtdcBoolType
    data->UseSMSVerify = CThostFtdcSMSVerifyConfigField_UseSMSVerify;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSMSVerifyConfigFieldType_repr(PyObject *self) {

    PyCThostFtdcSMSVerifyConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyConfigFieldData>(self);
    CThostFtdcSMSVerifyConfigField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i}"
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "Mobile", data->Mobile//, (Py_ssize_t)sizeof(data->Mobile)
        , "UseSMSVerify", data->UseSMSVerify
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSMSVerifyConfigField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSMSVerifyConfigField repr");
        return NULL;
    }

    return repr;
}


/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcSMSVerifyConfigFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyConfigFieldData>(self);
    CThostFtdcSMSVerifyConfigField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcSMSVerifyConfigFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyConfigField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyConfigFieldData>(self);
    CThostFtdcSMSVerifyConfigField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSMSVerifyConfigFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyConfigFieldData>(self);
    CThostFtdcSMSVerifyConfigField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSMSVerifyConfigFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyConfigField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyConfigFieldData>(self);
    CThostFtdcSMSVerifyConfigField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机号
/// typedef char TThostFtdcSMSPhoneType[17]
static PyObject *PyCThostFtdcSMSVerifyConfigFieldType_get_Mobile(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyConfigFieldData>(self);
    CThostFtdcSMSVerifyConfigField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Mobile, (Py_ssize_t)sizeof(data->Mobile));
    return PyBytes_FromString(data->Mobile);
}

static int PyCThostFtdcSMSVerifyConfigFieldType_set_Mobile(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Mobile Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyConfigField::Mobile)) {
        PyErr_SetString(PyExc_ValueError, "Mobile must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyConfigFieldData>(self);
    CThostFtdcSMSVerifyConfigField *data = &(extra->data);
    // memset(data->Mobile, 0, sizeof(data->Mobile));
    // memcpy(data->Mobile, buf, len);
    strncpy(data->Mobile, buf, sizeof(data->Mobile));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSMSVerifyConfigFieldType_members[] = {
    /// 是否启用短信验证
    /// typedef int TThostFtdcBoolType
    {
        .name = "UseSMSVerify",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSMSVerifyConfigFieldData, data.UseSMSVerify),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否启用短信验证")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSMSVerifyConfigFieldType_getsets[] = {
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcSMSVerifyConfigFieldType_get_UserID,
    .set = PyCThostFtdcSMSVerifyConfigFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSMSVerifyConfigFieldType_get_BrokerID,
    .set = PyCThostFtdcSMSVerifyConfigFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    {
    .name = "Mobile",
    .get = PyCThostFtdcSMSVerifyConfigFieldType_get_Mobile,
    .set = PyCThostFtdcSMSVerifyConfigFieldType_set_Mobile,
    .doc = PyDoc_STR("手机号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSMSVerifyConfigFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSMSVerifyConfigField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("登录验证设置")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSMSVerifyConfigFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSMSVerifyConfigFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSMSVerifyConfigFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSMSVerifyConfigFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSMSVerifyConfigFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSMSVerifyConfigFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("登录验证设置")},
    {Py_tp_members, PyCThostFtdcSMSVerifyConfigFieldType_members},
    {Py_tp_getset, PyCThostFtdcSMSVerifyConfigFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSMSVerifyConfigFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSMSVerifyConfigFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSMSVerifyConfigFieldType_spec = {
    .name = "PyCTP.CThostFtdcSMSVerifyConfigField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSMSVerifyConfigFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSMSVerifyConfigFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSMSVerifyConfigFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSMSVerifyConfigFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSMSVerifyConfigFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSMSVerifyConfigFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSMSVerifyConfigFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSMSVerifyConfigFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSMSVerifyConfigField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSMSVerifyConfigField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}