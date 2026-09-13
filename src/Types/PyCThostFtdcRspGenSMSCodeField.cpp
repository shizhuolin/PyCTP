
#include "PyCThostFtdcRspGenSMSCodeField.h"

///申请短信验证码响应

static int PyCThostFtdcRspGenSMSCodeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "GenTime", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspGenSMSCodeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspGenSMSCodeField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspGenSMSCodeField_UserID = NULL;
    Py_ssize_t CThostFtdcRspGenSMSCodeField_UserID_length = 0;

    /// 生成时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspGenSMSCodeField_GenTime = NULL;
    Py_ssize_t CThostFtdcRspGenSMSCodeField_GenTime_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcRspGenSMSCodeField_BrokerID, &CThostFtdcRspGenSMSCodeField_BrokerID_length
        , &CThostFtdcRspGenSMSCodeField_UserID, &CThostFtdcRspGenSMSCodeField_UserID_length
        , &CThostFtdcRspGenSMSCodeField_GenTime, &CThostFtdcRspGenSMSCodeField_GenTime_length
    )) {
        return -1;
    }

    PyCThostFtdcRspGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenSMSCodeFieldData>(self);
    CThostFtdcRspGenSMSCodeField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspGenSMSCodeField_BrokerID != NULL ) {
        if(CThostFtdcRspGenSMSCodeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspGenSMSCodeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspGenSMSCodeField_BrokerID, CThostFtdcRspGenSMSCodeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspGenSMSCodeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspGenSMSCodeField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspGenSMSCodeField_UserID != NULL ) {
        if(CThostFtdcRspGenSMSCodeField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspGenSMSCodeField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspGenSMSCodeField_UserID, CThostFtdcRspGenSMSCodeField_UserID_length);
        strncpy(data->UserID, CThostFtdcRspGenSMSCodeField_UserID, sizeof(data->UserID));
        CThostFtdcRspGenSMSCodeField_UserID = NULL;
    }

    /// 生成时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspGenSMSCodeField_GenTime != NULL ) {
        if(CThostFtdcRspGenSMSCodeField_GenTime_length >= (Py_ssize_t)sizeof(data->GenTime)) {
            PyErr_Format(PyExc_ValueError, "GenTime too long: length=%zd (max allowed is 8)", CThostFtdcRspGenSMSCodeField_GenTime_length);
            return -1;
        }
        // memset(data->GenTime, 0, sizeof(data->GenTime));
        // memcpy(data->GenTime, CThostFtdcRspGenSMSCodeField_GenTime, CThostFtdcRspGenSMSCodeField_GenTime_length);
        strncpy(data->GenTime, CThostFtdcRspGenSMSCodeField_GenTime, sizeof(data->GenTime));
        CThostFtdcRspGenSMSCodeField_GenTime = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspGenSMSCodeFieldType_repr(PyObject *self) {

    PyCThostFtdcRspGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenSMSCodeFieldData>(self);
    CThostFtdcRspGenSMSCodeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "GenTime", data->GenTime//, (Py_ssize_t)sizeof(data->GenTime)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspGenSMSCodeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspGenSMSCodeField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspGenSMSCodeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenSMSCodeFieldData>(self);
    CThostFtdcRspGenSMSCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspGenSMSCodeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspGenSMSCodeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenSMSCodeFieldData>(self);
    CThostFtdcRspGenSMSCodeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspGenSMSCodeFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenSMSCodeFieldData>(self);
    CThostFtdcRspGenSMSCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspGenSMSCodeFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspGenSMSCodeField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenSMSCodeFieldData>(self);
    CThostFtdcRspGenSMSCodeField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 生成时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspGenSMSCodeFieldType_get_GenTime(PyObject *self, void *closure) {
    PyCThostFtdcRspGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenSMSCodeFieldData>(self);
    CThostFtdcRspGenSMSCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->GenTime, (Py_ssize_t)sizeof(data->GenTime));
    return PyBytes_FromString(data->GenTime);
}

static int PyCThostFtdcRspGenSMSCodeFieldType_set_GenTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "GenTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspGenSMSCodeField::GenTime)) {
        PyErr_SetString(PyExc_ValueError, "GenTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspGenSMSCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspGenSMSCodeFieldData>(self);
    CThostFtdcRspGenSMSCodeField *data = &(extra->data);
    // memset(data->GenTime, 0, sizeof(data->GenTime));
    // memcpy(data->GenTime, buf, len);
    strncpy(data->GenTime, buf, sizeof(data->GenTime));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspGenSMSCodeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspGenSMSCodeFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspGenSMSCodeFieldType_get_BrokerID,
    .set = PyCThostFtdcRspGenSMSCodeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspGenSMSCodeFieldType_get_UserID,
    .set = PyCThostFtdcRspGenSMSCodeFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 生成时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "GenTime",
    .get = PyCThostFtdcRspGenSMSCodeFieldType_get_GenTime,
    .set = PyCThostFtdcRspGenSMSCodeFieldType_set_GenTime,
    .doc = PyDoc_STR("生成时间"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspGenSMSCodeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspGenSMSCodeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("申请短信验证码响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspGenSMSCodeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspGenSMSCodeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspGenSMSCodeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspGenSMSCodeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspGenSMSCodeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspGenSMSCodeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("申请短信验证码响应")},
    {Py_tp_members, PyCThostFtdcRspGenSMSCodeFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspGenSMSCodeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspGenSMSCodeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspGenSMSCodeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspGenSMSCodeFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspGenSMSCodeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspGenSMSCodeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspGenSMSCodeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspGenSMSCodeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspGenSMSCodeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspGenSMSCodeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspGenSMSCodeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspGenSMSCodeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspGenSMSCodeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspGenSMSCodeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspGenSMSCodeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}