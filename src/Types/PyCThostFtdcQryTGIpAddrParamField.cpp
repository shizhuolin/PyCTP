
#include "PyCThostFtdcQryTGIpAddrParamField.h"

///服务地址参数查询

static int PyCThostFtdcQryTGIpAddrParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "AppID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryTGIpAddrParamField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryTGIpAddrParamField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQryTGIpAddrParamField_UserID = NULL;
    Py_ssize_t CThostFtdcQryTGIpAddrParamField_UserID_length = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcQryTGIpAddrParamField_AppID = NULL;
    Py_ssize_t CThostFtdcQryTGIpAddrParamField_AppID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryTGIpAddrParamField_BrokerID, &CThostFtdcQryTGIpAddrParamField_BrokerID_length
        , &CThostFtdcQryTGIpAddrParamField_UserID, &CThostFtdcQryTGIpAddrParamField_UserID_length
        , &CThostFtdcQryTGIpAddrParamField_AppID, &CThostFtdcQryTGIpAddrParamField_AppID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTGIpAddrParamFieldData>(self);
    CThostFtdcQryTGIpAddrParamField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryTGIpAddrParamField_BrokerID != NULL ) {
        if(CThostFtdcQryTGIpAddrParamField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryTGIpAddrParamField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryTGIpAddrParamField_BrokerID, CThostFtdcQryTGIpAddrParamField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryTGIpAddrParamField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryTGIpAddrParamField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQryTGIpAddrParamField_UserID != NULL ) {
        if(CThostFtdcQryTGIpAddrParamField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQryTGIpAddrParamField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQryTGIpAddrParamField_UserID, CThostFtdcQryTGIpAddrParamField_UserID_length);
        strncpy(data->UserID, CThostFtdcQryTGIpAddrParamField_UserID, sizeof(data->UserID));
        CThostFtdcQryTGIpAddrParamField_UserID = NULL;
    }

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcQryTGIpAddrParamField_AppID != NULL ) {
        if(CThostFtdcQryTGIpAddrParamField_AppID_length >= (Py_ssize_t)sizeof(data->AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is 32)", CThostFtdcQryTGIpAddrParamField_AppID_length);
            return -1;
        }
        // memset(data->AppID, 0, sizeof(data->AppID));
        // memcpy(data->AppID, CThostFtdcQryTGIpAddrParamField_AppID, CThostFtdcQryTGIpAddrParamField_AppID_length);
        strncpy(data->AppID, CThostFtdcQryTGIpAddrParamField_AppID, sizeof(data->AppID));
        CThostFtdcQryTGIpAddrParamField_AppID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryTGIpAddrParamFieldType_repr(PyObject *self) {

    PyCThostFtdcQryTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTGIpAddrParamFieldData>(self);
    CThostFtdcQryTGIpAddrParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "AppID", data->AppID//, (Py_ssize_t)sizeof(data->AppID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTGIpAddrParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTGIpAddrParamField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryTGIpAddrParamFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTGIpAddrParamFieldData>(self);
    CThostFtdcQryTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryTGIpAddrParamFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTGIpAddrParamField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTGIpAddrParamFieldData>(self);
    CThostFtdcQryTGIpAddrParamField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQryTGIpAddrParamFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQryTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTGIpAddrParamFieldData>(self);
    CThostFtdcQryTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQryTGIpAddrParamFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTGIpAddrParamField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTGIpAddrParamFieldData>(self);
    CThostFtdcQryTGIpAddrParamField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcQryTGIpAddrParamFieldType_get_AppID(PyObject *self, void *closure) {
    PyCThostFtdcQryTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTGIpAddrParamFieldData>(self);
    CThostFtdcQryTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AppID, (Py_ssize_t)sizeof(data->AppID));
    return PyBytes_FromString(data->AppID);
}

static int PyCThostFtdcQryTGIpAddrParamFieldType_set_AppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTGIpAddrParamField::AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTGIpAddrParamFieldData>(self);
    CThostFtdcQryTGIpAddrParamField *data = &(extra->data);
    // memset(data->AppID, 0, sizeof(data->AppID));
    // memcpy(data->AppID, buf, len);
    strncpy(data->AppID, buf, sizeof(data->AppID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryTGIpAddrParamFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryTGIpAddrParamFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryTGIpAddrParamFieldType_get_BrokerID,
    .set = PyCThostFtdcQryTGIpAddrParamFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQryTGIpAddrParamFieldType_get_UserID,
    .set = PyCThostFtdcQryTGIpAddrParamFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "AppID",
    .get = PyCThostFtdcQryTGIpAddrParamFieldType_get_AppID,
    .set = PyCThostFtdcQryTGIpAddrParamFieldType_set_AppID,
    .doc = PyDoc_STR("App代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryTGIpAddrParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryTGIpAddrParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("服务地址参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryTGIpAddrParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryTGIpAddrParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryTGIpAddrParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryTGIpAddrParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryTGIpAddrParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryTGIpAddrParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("服务地址参数查询")},
    {Py_tp_members, PyCThostFtdcQryTGIpAddrParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryTGIpAddrParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryTGIpAddrParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryTGIpAddrParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryTGIpAddrParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryTGIpAddrParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryTGIpAddrParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryTGIpAddrParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryTGIpAddrParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryTGIpAddrParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryTGIpAddrParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryTGIpAddrParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryTGIpAddrParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryTGIpAddrParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryTGIpAddrParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTGIpAddrParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}