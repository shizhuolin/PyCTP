
#include "PyCThostFtdcSMSVerifyInfoField.h"

///短信验证信息通知

static int PyCThostFtdcSMSVerifyInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "CreateTime", "Mobile", "SMSContent", NULL };


    /// 验证码创建时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcSMSVerifyInfoField_CreateTime = NULL;
    Py_ssize_t CThostFtdcSMSVerifyInfoField_CreateTime_length = 0;

    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    char *CThostFtdcSMSVerifyInfoField_Mobile = NULL;
    Py_ssize_t CThostFtdcSMSVerifyInfoField_Mobile_length = 0;

    /// 短信验证信息内容
    /// typedef char TThostFtdcSMSContentType[129]
    char *CThostFtdcSMSVerifyInfoField_SMSContent = NULL;
    Py_ssize_t CThostFtdcSMSVerifyInfoField_SMSContent_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcSMSVerifyInfoField_CreateTime, &CThostFtdcSMSVerifyInfoField_CreateTime_length
        , &CThostFtdcSMSVerifyInfoField_Mobile, &CThostFtdcSMSVerifyInfoField_Mobile_length
        , &CThostFtdcSMSVerifyInfoField_SMSContent, &CThostFtdcSMSVerifyInfoField_SMSContent_length
    )) {
        return -1;
    }

    PyCThostFtdcSMSVerifyInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFieldData>(self);
    CThostFtdcSMSVerifyInfoField *data = &(extra->data);


    /// 验证码创建时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcSMSVerifyInfoField_CreateTime != NULL ) {
        if(CThostFtdcSMSVerifyInfoField_CreateTime_length >= (Py_ssize_t)sizeof(data->CreateTime)) {
            PyErr_Format(PyExc_ValueError, "CreateTime too long: length=%zd (max allowed is 8)", CThostFtdcSMSVerifyInfoField_CreateTime_length);
            return -1;
        }
        // memset(data->CreateTime, 0, sizeof(data->CreateTime));
        // memcpy(data->CreateTime, CThostFtdcSMSVerifyInfoField_CreateTime, CThostFtdcSMSVerifyInfoField_CreateTime_length);
        strncpy(data->CreateTime, CThostFtdcSMSVerifyInfoField_CreateTime, sizeof(data->CreateTime));
        CThostFtdcSMSVerifyInfoField_CreateTime = NULL;
    }

    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    if( CThostFtdcSMSVerifyInfoField_Mobile != NULL ) {
        if(CThostFtdcSMSVerifyInfoField_Mobile_length >= (Py_ssize_t)sizeof(data->Mobile)) {
            PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is 16)", CThostFtdcSMSVerifyInfoField_Mobile_length);
            return -1;
        }
        // memset(data->Mobile, 0, sizeof(data->Mobile));
        // memcpy(data->Mobile, CThostFtdcSMSVerifyInfoField_Mobile, CThostFtdcSMSVerifyInfoField_Mobile_length);
        strncpy(data->Mobile, CThostFtdcSMSVerifyInfoField_Mobile, sizeof(data->Mobile));
        CThostFtdcSMSVerifyInfoField_Mobile = NULL;
    }

    /// 短信验证信息内容
    /// typedef char TThostFtdcSMSContentType[129]
    if( CThostFtdcSMSVerifyInfoField_SMSContent != NULL ) {
        if(CThostFtdcSMSVerifyInfoField_SMSContent_length >= (Py_ssize_t)sizeof(data->SMSContent)) {
            PyErr_Format(PyExc_ValueError, "SMSContent too long: length=%zd (max allowed is 128)", CThostFtdcSMSVerifyInfoField_SMSContent_length);
            return -1;
        }
        // memset(data->SMSContent, 0, sizeof(data->SMSContent));
        // memcpy(data->SMSContent, CThostFtdcSMSVerifyInfoField_SMSContent, CThostFtdcSMSVerifyInfoField_SMSContent_length);
        strncpy(data->SMSContent, CThostFtdcSMSVerifyInfoField_SMSContent, sizeof(data->SMSContent));
        CThostFtdcSMSVerifyInfoField_SMSContent = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSMSVerifyInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcSMSVerifyInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFieldData>(self);
    CThostFtdcSMSVerifyInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "CreateTime", data->CreateTime//, (Py_ssize_t)sizeof(data->CreateTime)
        , "Mobile", data->Mobile//, (Py_ssize_t)sizeof(data->Mobile)
        , "SMSContent", data->SMSContent//, (Py_ssize_t)sizeof(data->SMSContent)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSMSVerifyInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSMSVerifyInfoField repr");
        return NULL;
    }

    return repr;
}


/// 验证码创建时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcSMSVerifyInfoFieldType_get_CreateTime(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFieldData>(self);
    CThostFtdcSMSVerifyInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CreateTime, (Py_ssize_t)sizeof(data->CreateTime));
    return PyBytes_FromString(data->CreateTime);
}

static int PyCThostFtdcSMSVerifyInfoFieldType_set_CreateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CreateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyInfoField::CreateTime)) {
        PyErr_SetString(PyExc_ValueError, "CreateTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFieldData>(self);
    CThostFtdcSMSVerifyInfoField *data = &(extra->data);
    // memset(data->CreateTime, 0, sizeof(data->CreateTime));
    // memcpy(data->CreateTime, buf, len);
    strncpy(data->CreateTime, buf, sizeof(data->CreateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机号
/// typedef char TThostFtdcSMSPhoneType[17]
static PyObject *PyCThostFtdcSMSVerifyInfoFieldType_get_Mobile(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFieldData>(self);
    CThostFtdcSMSVerifyInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Mobile, (Py_ssize_t)sizeof(data->Mobile));
    return PyBytes_FromString(data->Mobile);
}

static int PyCThostFtdcSMSVerifyInfoFieldType_set_Mobile(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Mobile Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyInfoField::Mobile)) {
        PyErr_SetString(PyExc_ValueError, "Mobile must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFieldData>(self);
    CThostFtdcSMSVerifyInfoField *data = &(extra->data);
    // memset(data->Mobile, 0, sizeof(data->Mobile));
    // memcpy(data->Mobile, buf, len);
    strncpy(data->Mobile, buf, sizeof(data->Mobile));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 短信验证信息内容
/// typedef char TThostFtdcSMSContentType[129]
static PyObject *PyCThostFtdcSMSVerifyInfoFieldType_get_SMSContent(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFieldData>(self);
    CThostFtdcSMSVerifyInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SMSContent, (Py_ssize_t)sizeof(data->SMSContent));
    return PyBytes_FromString(data->SMSContent);
}

static int PyCThostFtdcSMSVerifyInfoFieldType_set_SMSContent(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SMSContent Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyInfoField::SMSContent)) {
        PyErr_SetString(PyExc_ValueError, "SMSContent must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFieldData>(self);
    CThostFtdcSMSVerifyInfoField *data = &(extra->data);
    // memset(data->SMSContent, 0, sizeof(data->SMSContent));
    // memcpy(data->SMSContent, buf, len);
    strncpy(data->SMSContent, buf, sizeof(data->SMSContent));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSMSVerifyInfoFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSMSVerifyInfoFieldType_getsets[] = {
    /// 验证码创建时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CreateTime",
    .get = PyCThostFtdcSMSVerifyInfoFieldType_get_CreateTime,
    .set = PyCThostFtdcSMSVerifyInfoFieldType_set_CreateTime,
    .doc = PyDoc_STR("验证码创建时间"),
    },
    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    {
    .name = "Mobile",
    .get = PyCThostFtdcSMSVerifyInfoFieldType_get_Mobile,
    .set = PyCThostFtdcSMSVerifyInfoFieldType_set_Mobile,
    .doc = PyDoc_STR("手机号"),
    },
    /// 短信验证信息内容
    /// typedef char TThostFtdcSMSContentType[129]
    {
    .name = "SMSContent",
    .get = PyCThostFtdcSMSVerifyInfoFieldType_get_SMSContent,
    .set = PyCThostFtdcSMSVerifyInfoFieldType_set_SMSContent,
    .doc = PyDoc_STR("短信验证信息内容"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSMSVerifyInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSMSVerifyInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("短信验证信息通知")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSMSVerifyInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSMSVerifyInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSMSVerifyInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSMSVerifyInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSMSVerifyInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSMSVerifyInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("短信验证信息通知")},
    {Py_tp_members, PyCThostFtdcSMSVerifyInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcSMSVerifyInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSMSVerifyInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSMSVerifyInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSMSVerifyInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcSMSVerifyInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSMSVerifyInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSMSVerifyInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSMSVerifyInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSMSVerifyInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSMSVerifyInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSMSVerifyInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSMSVerifyInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSMSVerifyInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSMSVerifyInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSMSVerifyInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}