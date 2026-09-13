
#include "PyCThostFtdcLoginForbiddenUserField.h"

///禁止登录用户

static int PyCThostFtdcLoginForbiddenUserFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "reserve1", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcLoginForbiddenUserField_BrokerID = NULL;
    Py_ssize_t CThostFtdcLoginForbiddenUserField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcLoginForbiddenUserField_UserID = NULL;
    Py_ssize_t CThostFtdcLoginForbiddenUserField_UserID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcLoginForbiddenUserField_reserve1 = NULL;
    Py_ssize_t CThostFtdcLoginForbiddenUserField_reserve1_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcLoginForbiddenUserField_IPAddress = NULL;
    Py_ssize_t CThostFtdcLoginForbiddenUserField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcLoginForbiddenUserField_BrokerID, &CThostFtdcLoginForbiddenUserField_BrokerID_length
        , &CThostFtdcLoginForbiddenUserField_UserID, &CThostFtdcLoginForbiddenUserField_UserID_length
        , &CThostFtdcLoginForbiddenUserField_reserve1, &CThostFtdcLoginForbiddenUserField_reserve1_length
        , &CThostFtdcLoginForbiddenUserField_IPAddress, &CThostFtdcLoginForbiddenUserField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenUserFieldData>(self);
    CThostFtdcLoginForbiddenUserField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcLoginForbiddenUserField_BrokerID != NULL ) {
        if(CThostFtdcLoginForbiddenUserField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcLoginForbiddenUserField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcLoginForbiddenUserField_BrokerID, CThostFtdcLoginForbiddenUserField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcLoginForbiddenUserField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcLoginForbiddenUserField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcLoginForbiddenUserField_UserID != NULL ) {
        if(CThostFtdcLoginForbiddenUserField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcLoginForbiddenUserField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcLoginForbiddenUserField_UserID, CThostFtdcLoginForbiddenUserField_UserID_length);
        strncpy(data->UserID, CThostFtdcLoginForbiddenUserField_UserID, sizeof(data->UserID));
        CThostFtdcLoginForbiddenUserField_UserID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcLoginForbiddenUserField_reserve1 != NULL ) {
        if(CThostFtdcLoginForbiddenUserField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcLoginForbiddenUserField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcLoginForbiddenUserField_reserve1, CThostFtdcLoginForbiddenUserField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcLoginForbiddenUserField_reserve1, sizeof(data->reserve1));
        CThostFtdcLoginForbiddenUserField_reserve1 = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcLoginForbiddenUserField_IPAddress != NULL ) {
        if(CThostFtdcLoginForbiddenUserField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcLoginForbiddenUserField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcLoginForbiddenUserField_IPAddress, CThostFtdcLoginForbiddenUserField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcLoginForbiddenUserField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcLoginForbiddenUserField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcLoginForbiddenUserFieldType_repr(PyObject *self) {

    PyCThostFtdcLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenUserFieldData>(self);
    CThostFtdcLoginForbiddenUserField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoginForbiddenUserField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoginForbiddenUserField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcLoginForbiddenUserFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenUserFieldData>(self);
    CThostFtdcLoginForbiddenUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcLoginForbiddenUserFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginForbiddenUserField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenUserFieldData>(self);
    CThostFtdcLoginForbiddenUserField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcLoginForbiddenUserFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenUserFieldData>(self);
    CThostFtdcLoginForbiddenUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcLoginForbiddenUserFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginForbiddenUserField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenUserFieldData>(self);
    CThostFtdcLoginForbiddenUserField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcLoginForbiddenUserFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenUserFieldData>(self);
    CThostFtdcLoginForbiddenUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcLoginForbiddenUserFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginForbiddenUserField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenUserFieldData>(self);
    CThostFtdcLoginForbiddenUserField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcLoginForbiddenUserFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenUserFieldData>(self);
    CThostFtdcLoginForbiddenUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcLoginForbiddenUserFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginForbiddenUserField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenUserFieldData>(self);
    CThostFtdcLoginForbiddenUserField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcLoginForbiddenUserFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcLoginForbiddenUserFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcLoginForbiddenUserFieldType_get_BrokerID,
    .set = PyCThostFtdcLoginForbiddenUserFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcLoginForbiddenUserFieldType_get_UserID,
    .set = PyCThostFtdcLoginForbiddenUserFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcLoginForbiddenUserFieldType_get_reserve1,
    .set = PyCThostFtdcLoginForbiddenUserFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcLoginForbiddenUserFieldType_get_IPAddress,
    .set = PyCThostFtdcLoginForbiddenUserFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcLoginForbiddenUserFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcLoginForbiddenUserField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("禁止登录用户")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcLoginForbiddenUserFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcLoginForbiddenUserFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcLoginForbiddenUserFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcLoginForbiddenUserFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcLoginForbiddenUserFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcLoginForbiddenUserFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("禁止登录用户")},
    {Py_tp_members, PyCThostFtdcLoginForbiddenUserFieldType_members},
    {Py_tp_getset, PyCThostFtdcLoginForbiddenUserFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcLoginForbiddenUserFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcLoginForbiddenUserFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcLoginForbiddenUserFieldType_spec = {
    .name = "PyCTP.CThostFtdcLoginForbiddenUserField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcLoginForbiddenUserFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcLoginForbiddenUserFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcLoginForbiddenUserFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcLoginForbiddenUserFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcLoginForbiddenUserFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcLoginForbiddenUserFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcLoginForbiddenUserFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcLoginForbiddenUserFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcLoginForbiddenUserField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLoginForbiddenUserField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}