
#include "PyCThostFtdcReqGenSMSCodeField.h"

///申请短信验证码请求

static int PyCThostFtdcReqGenSMSCodeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "Mobile", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqGenSMSCodeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqGenSMSCodeField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqGenSMSCodeField_UserID = NULL;
    Py_ssize_t CThostFtdcReqGenSMSCodeField_UserID_length = 0;

    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    char *CThostFtdcReqGenSMSCodeField_Mobile = NULL;
    Py_ssize_t CThostFtdcReqGenSMSCodeField_Mobile_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcReqGenSMSCodeField_BrokerID, &CThostFtdcReqGenSMSCodeField_BrokerID_length
        , &CThostFtdcReqGenSMSCodeField_UserID, &CThostFtdcReqGenSMSCodeField_UserID_length
        , &CThostFtdcReqGenSMSCodeField_Mobile, &CThostFtdcReqGenSMSCodeField_Mobile_length
    )) {
        return -1;
    }

    PyCThostFtdcReqGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenSMSCodeFieldData>(self);
    CThostFtdcReqGenSMSCodeField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqGenSMSCodeField_BrokerID != NULL ) {
        if(CThostFtdcReqGenSMSCodeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqGenSMSCodeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqGenSMSCodeField_BrokerID, CThostFtdcReqGenSMSCodeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqGenSMSCodeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqGenSMSCodeField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqGenSMSCodeField_UserID != NULL ) {
        if(CThostFtdcReqGenSMSCodeField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqGenSMSCodeField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqGenSMSCodeField_UserID, CThostFtdcReqGenSMSCodeField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqGenSMSCodeField_UserID, sizeof(data->UserID));
        CThostFtdcReqGenSMSCodeField_UserID = NULL;
    }

    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    if( CThostFtdcReqGenSMSCodeField_Mobile != NULL ) {
        if(CThostFtdcReqGenSMSCodeField_Mobile_length >= (Py_ssize_t)sizeof(data->Mobile)) {
            PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is 16)", CThostFtdcReqGenSMSCodeField_Mobile_length);
            return -1;
        }
        // memset(data->Mobile, 0, sizeof(data->Mobile));
        // memcpy(data->Mobile, CThostFtdcReqGenSMSCodeField_Mobile, CThostFtdcReqGenSMSCodeField_Mobile_length);
        strncpy(data->Mobile, CThostFtdcReqGenSMSCodeField_Mobile, sizeof(data->Mobile));
        CThostFtdcReqGenSMSCodeField_Mobile = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqGenSMSCodeFieldType_repr(PyObject *self) {

    PyCThostFtdcReqGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenSMSCodeFieldData>(self);
    CThostFtdcReqGenSMSCodeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Mobile", data->Mobile//, (Py_ssize_t)sizeof(data->Mobile)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqGenSMSCodeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqGenSMSCodeField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqGenSMSCodeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenSMSCodeFieldData>(self);
    CThostFtdcReqGenSMSCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqGenSMSCodeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqGenSMSCodeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenSMSCodeFieldData>(self);
    CThostFtdcReqGenSMSCodeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqGenSMSCodeFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenSMSCodeFieldData>(self);
    CThostFtdcReqGenSMSCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqGenSMSCodeFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqGenSMSCodeField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenSMSCodeFieldData>(self);
    CThostFtdcReqGenSMSCodeField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机号
/// typedef char TThostFtdcSMSPhoneType[17]
static PyObject *PyCThostFtdcReqGenSMSCodeFieldType_get_Mobile(PyObject *self, void *closure) {
    PyCThostFtdcReqGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenSMSCodeFieldData>(self);
    CThostFtdcReqGenSMSCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Mobile, (Py_ssize_t)sizeof(data->Mobile));
    return PyBytes_FromString(data->Mobile);
}

static int PyCThostFtdcReqGenSMSCodeFieldType_set_Mobile(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Mobile Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqGenSMSCodeField::Mobile)) {
        PyErr_SetString(PyExc_ValueError, "Mobile must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenSMSCodeFieldData>(self);
    CThostFtdcReqGenSMSCodeField *data = &(extra->data);
    // memset(data->Mobile, 0, sizeof(data->Mobile));
    // memcpy(data->Mobile, buf, len);
    strncpy(data->Mobile, buf, sizeof(data->Mobile));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqGenSMSCodeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqGenSMSCodeFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqGenSMSCodeFieldType_get_BrokerID,
    .set = PyCThostFtdcReqGenSMSCodeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqGenSMSCodeFieldType_get_UserID,
    .set = PyCThostFtdcReqGenSMSCodeFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    {
    .name = "Mobile",
    .get = PyCThostFtdcReqGenSMSCodeFieldType_get_Mobile,
    .set = PyCThostFtdcReqGenSMSCodeFieldType_set_Mobile,
    .doc = PyDoc_STR("手机号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqGenSMSCodeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqGenSMSCodeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("申请短信验证码请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqGenSMSCodeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqGenSMSCodeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqGenSMSCodeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqGenSMSCodeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqGenSMSCodeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqGenSMSCodeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("申请短信验证码请求")},
    {Py_tp_members, PyCThostFtdcReqGenSMSCodeFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqGenSMSCodeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqGenSMSCodeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqGenSMSCodeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqGenSMSCodeFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqGenSMSCodeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqGenSMSCodeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqGenSMSCodeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqGenSMSCodeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqGenSMSCodeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqGenSMSCodeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqGenSMSCodeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqGenSMSCodeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqGenSMSCodeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqGenSMSCodeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqGenSMSCodeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}