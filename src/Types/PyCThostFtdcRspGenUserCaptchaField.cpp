
#include "PyCThostFtdcRspGenUserCaptchaField.h"

///生成的图片验证码信息

static int PyCThostFtdcRspGenUserCaptchaFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "CaptchaInfoLen", "CaptchaInfo", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspGenUserCaptchaField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspGenUserCaptchaField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspGenUserCaptchaField_UserID = NULL;
    Py_ssize_t CThostFtdcRspGenUserCaptchaField_UserID_length = 0;

    /// 图片信息长度
    /// typedef int TThostFtdcCaptchaInfoLenType
    int CThostFtdcRspGenUserCaptchaField_CaptchaInfoLen = 0;

    /// 图片信息
    /// typedef char TThostFtdcCaptchaInfoType[2561]
    char *CThostFtdcRspGenUserCaptchaField_CaptchaInfo = NULL;
    Py_ssize_t CThostFtdcRspGenUserCaptchaField_CaptchaInfo_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#", (char **)kwlist
        , &CThostFtdcRspGenUserCaptchaField_BrokerID, &CThostFtdcRspGenUserCaptchaField_BrokerID_length
        , &CThostFtdcRspGenUserCaptchaField_UserID, &CThostFtdcRspGenUserCaptchaField_UserID_length
        , &CThostFtdcRspGenUserCaptchaField_CaptchaInfoLen
        , &CThostFtdcRspGenUserCaptchaField_CaptchaInfo, &CThostFtdcRspGenUserCaptchaField_CaptchaInfo_length
    )) {
        return -1;
    }

    PyCThostFtdcRspGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenUserCaptchaFieldData>(self);
    CThostFtdcRspGenUserCaptchaField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspGenUserCaptchaField_BrokerID != NULL ) {
        if(CThostFtdcRspGenUserCaptchaField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspGenUserCaptchaField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspGenUserCaptchaField_BrokerID, CThostFtdcRspGenUserCaptchaField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspGenUserCaptchaField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspGenUserCaptchaField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspGenUserCaptchaField_UserID != NULL ) {
        if(CThostFtdcRspGenUserCaptchaField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspGenUserCaptchaField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspGenUserCaptchaField_UserID, CThostFtdcRspGenUserCaptchaField_UserID_length);
        strncpy(data->UserID, CThostFtdcRspGenUserCaptchaField_UserID, sizeof(data->UserID));
        CThostFtdcRspGenUserCaptchaField_UserID = NULL;
    }

    /// 图片信息长度
    /// typedef int TThostFtdcCaptchaInfoLenType
    data->CaptchaInfoLen = CThostFtdcRspGenUserCaptchaField_CaptchaInfoLen;

    /// 图片信息
    /// typedef char TThostFtdcCaptchaInfoType[2561]
    if( CThostFtdcRspGenUserCaptchaField_CaptchaInfo != NULL ) {
        if(CThostFtdcRspGenUserCaptchaField_CaptchaInfo_length >= (Py_ssize_t)sizeof(data->CaptchaInfo)) {
            PyErr_Format(PyExc_ValueError, "CaptchaInfo too long: length=%zd (max allowed is 2560)", CThostFtdcRspGenUserCaptchaField_CaptchaInfo_length);
            return -1;
        }
        // memset(data->CaptchaInfo, 0, sizeof(data->CaptchaInfo));
        // memcpy(data->CaptchaInfo, CThostFtdcRspGenUserCaptchaField_CaptchaInfo, CThostFtdcRspGenUserCaptchaField_CaptchaInfo_length);
        strncpy(data->CaptchaInfo, CThostFtdcRspGenUserCaptchaField_CaptchaInfo, sizeof(data->CaptchaInfo));
        CThostFtdcRspGenUserCaptchaField_CaptchaInfo = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspGenUserCaptchaFieldType_repr(PyObject *self) {

    PyCThostFtdcRspGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenUserCaptchaFieldData>(self);
    CThostFtdcRspGenUserCaptchaField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "CaptchaInfoLen", data->CaptchaInfoLen
        , "CaptchaInfo", data->CaptchaInfo//, (Py_ssize_t)sizeof(data->CaptchaInfo)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspGenUserCaptchaField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspGenUserCaptchaField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspGenUserCaptchaFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenUserCaptchaFieldData>(self);
    CThostFtdcRspGenUserCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspGenUserCaptchaFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspGenUserCaptchaField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenUserCaptchaFieldData>(self);
    CThostFtdcRspGenUserCaptchaField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspGenUserCaptchaFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenUserCaptchaFieldData>(self);
    CThostFtdcRspGenUserCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspGenUserCaptchaFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspGenUserCaptchaField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenUserCaptchaFieldData>(self);
    CThostFtdcRspGenUserCaptchaField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 图片信息
/// typedef char TThostFtdcCaptchaInfoType[2561]
static PyObject *PyCThostFtdcRspGenUserCaptchaFieldType_get_CaptchaInfo(PyObject *self, void *closure) {
    PyCThostFtdcRspGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenUserCaptchaFieldData>(self);
    CThostFtdcRspGenUserCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CaptchaInfo, (Py_ssize_t)sizeof(data->CaptchaInfo));
    return PyBytes_FromString(data->CaptchaInfo);
}

static int PyCThostFtdcRspGenUserCaptchaFieldType_set_CaptchaInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CaptchaInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspGenUserCaptchaField::CaptchaInfo)) {
        PyErr_SetString(PyExc_ValueError, "CaptchaInfo must be less than 2560 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenUserCaptchaFieldData>(self);
    CThostFtdcRspGenUserCaptchaField *data = &(extra->data);
    // memset(data->CaptchaInfo, 0, sizeof(data->CaptchaInfo));
    // memcpy(data->CaptchaInfo, buf, len);
    strncpy(data->CaptchaInfo, buf, sizeof(data->CaptchaInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspGenUserCaptchaFieldType_members[] = {
    /// 图片信息长度
    /// typedef int TThostFtdcCaptchaInfoLenType
    {
        .name = "CaptchaInfoLen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspGenUserCaptchaFieldData, data.CaptchaInfoLen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("图片信息长度")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspGenUserCaptchaFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspGenUserCaptchaFieldType_get_BrokerID,
    .set = PyCThostFtdcRspGenUserCaptchaFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspGenUserCaptchaFieldType_get_UserID,
    .set = PyCThostFtdcRspGenUserCaptchaFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 图片信息
    /// typedef char TThostFtdcCaptchaInfoType[2561]
    {
    .name = "CaptchaInfo",
    .get = PyCThostFtdcRspGenUserCaptchaFieldType_get_CaptchaInfo,
    .set = PyCThostFtdcRspGenUserCaptchaFieldType_set_CaptchaInfo,
    .doc = PyDoc_STR("图片信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspGenUserCaptchaFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspGenUserCaptchaField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("生成的图片验证码信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspGenUserCaptchaFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspGenUserCaptchaFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspGenUserCaptchaFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspGenUserCaptchaFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspGenUserCaptchaFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspGenUserCaptchaFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("生成的图片验证码信息")},
    {Py_tp_members, PyCThostFtdcRspGenUserCaptchaFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspGenUserCaptchaFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspGenUserCaptchaFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspGenUserCaptchaFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspGenUserCaptchaFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspGenUserCaptchaField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspGenUserCaptchaFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspGenUserCaptchaFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspGenUserCaptchaFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspGenUserCaptchaFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspGenUserCaptchaFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspGenUserCaptchaFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspGenUserCaptchaFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspGenUserCaptchaFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspGenUserCaptchaField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspGenUserCaptchaField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}