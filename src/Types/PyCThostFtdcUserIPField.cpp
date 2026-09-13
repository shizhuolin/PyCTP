
#include "PyCThostFtdcUserIPField.h"

///用户IP

static int PyCThostFtdcUserIPFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "reserve1", "reserve2", "MacAddress", "IPAddress", "IPMask", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcUserIPField_BrokerID = NULL;
    Py_ssize_t CThostFtdcUserIPField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcUserIPField_UserID = NULL;
    Py_ssize_t CThostFtdcUserIPField_UserID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcUserIPField_reserve1 = NULL;
    Py_ssize_t CThostFtdcUserIPField_reserve1_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcUserIPField_reserve2 = NULL;
    Py_ssize_t CThostFtdcUserIPField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcUserIPField_MacAddress = NULL;
    Py_ssize_t CThostFtdcUserIPField_MacAddress_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcUserIPField_IPAddress = NULL;
    Py_ssize_t CThostFtdcUserIPField_IPAddress_length = 0;

    /// IP地址掩码
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcUserIPField_IPMask = NULL;
    Py_ssize_t CThostFtdcUserIPField_IPMask_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcUserIPField_BrokerID, &CThostFtdcUserIPField_BrokerID_length
        , &CThostFtdcUserIPField_UserID, &CThostFtdcUserIPField_UserID_length
        , &CThostFtdcUserIPField_reserve1, &CThostFtdcUserIPField_reserve1_length
        , &CThostFtdcUserIPField_reserve2, &CThostFtdcUserIPField_reserve2_length
        , &CThostFtdcUserIPField_MacAddress, &CThostFtdcUserIPField_MacAddress_length
        , &CThostFtdcUserIPField_IPAddress, &CThostFtdcUserIPField_IPAddress_length
        , &CThostFtdcUserIPField_IPMask, &CThostFtdcUserIPField_IPMask_length
    )) {
        return -1;
    }

    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcUserIPField_BrokerID != NULL ) {
        if(CThostFtdcUserIPField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcUserIPField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcUserIPField_BrokerID, CThostFtdcUserIPField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcUserIPField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcUserIPField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcUserIPField_UserID != NULL ) {
        if(CThostFtdcUserIPField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcUserIPField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcUserIPField_UserID, CThostFtdcUserIPField_UserID_length);
        strncpy(data->UserID, CThostFtdcUserIPField_UserID, sizeof(data->UserID));
        CThostFtdcUserIPField_UserID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcUserIPField_reserve1 != NULL ) {
        if(CThostFtdcUserIPField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcUserIPField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcUserIPField_reserve1, CThostFtdcUserIPField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcUserIPField_reserve1, sizeof(data->reserve1));
        CThostFtdcUserIPField_reserve1 = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcUserIPField_reserve2 != NULL ) {
        if(CThostFtdcUserIPField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcUserIPField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcUserIPField_reserve2, CThostFtdcUserIPField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcUserIPField_reserve2, sizeof(data->reserve2));
        CThostFtdcUserIPField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcUserIPField_MacAddress != NULL ) {
        if(CThostFtdcUserIPField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcUserIPField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcUserIPField_MacAddress, CThostFtdcUserIPField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcUserIPField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcUserIPField_MacAddress = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcUserIPField_IPAddress != NULL ) {
        if(CThostFtdcUserIPField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcUserIPField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcUserIPField_IPAddress, CThostFtdcUserIPField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcUserIPField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcUserIPField_IPAddress = NULL;
    }

    /// IP地址掩码
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcUserIPField_IPMask != NULL ) {
        if(CThostFtdcUserIPField_IPMask_length >= (Py_ssize_t)sizeof(data->IPMask)) {
            PyErr_Format(PyExc_ValueError, "IPMask too long: length=%zd (max allowed is 32)", CThostFtdcUserIPField_IPMask_length);
            return -1;
        }
        // memset(data->IPMask, 0, sizeof(data->IPMask));
        // memcpy(data->IPMask, CThostFtdcUserIPField_IPMask, CThostFtdcUserIPField_IPMask_length);
        strncpy(data->IPMask, CThostFtdcUserIPField_IPMask, sizeof(data->IPMask));
        CThostFtdcUserIPField_IPMask = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcUserIPFieldType_repr(PyObject *self) {

    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "IPMask", data->IPMask//, (Py_ssize_t)sizeof(data->IPMask)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserIPField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserIPField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcUserIPFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcUserIPFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserIPField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcUserIPFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcUserIPFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserIPField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcUserIPFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcUserIPFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserIPField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcUserIPFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcUserIPFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserIPField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcUserIPFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcUserIPFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserIPField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcUserIPFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcUserIPFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserIPField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址掩码
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcUserIPFieldType_get_IPMask(PyObject *self, void *closure) {
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPMask, (Py_ssize_t)sizeof(data->IPMask));
    return PyBytes_FromString(data->IPMask);
}

static int PyCThostFtdcUserIPFieldType_set_IPMask(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPMask Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserIPField::IPMask)) {
        PyErr_SetString(PyExc_ValueError, "IPMask must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserIPFieldData>(self);
    CThostFtdcUserIPField *data = &(extra->data);
    // memset(data->IPMask, 0, sizeof(data->IPMask));
    // memcpy(data->IPMask, buf, len);
    strncpy(data->IPMask, buf, sizeof(data->IPMask));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcUserIPFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcUserIPFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcUserIPFieldType_get_BrokerID,
    .set = PyCThostFtdcUserIPFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcUserIPFieldType_get_UserID,
    .set = PyCThostFtdcUserIPFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcUserIPFieldType_get_reserve1,
    .set = PyCThostFtdcUserIPFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcUserIPFieldType_get_reserve2,
    .set = PyCThostFtdcUserIPFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcUserIPFieldType_get_MacAddress,
    .set = PyCThostFtdcUserIPFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcUserIPFieldType_get_IPAddress,
    .set = PyCThostFtdcUserIPFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// IP地址掩码
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPMask",
    .get = PyCThostFtdcUserIPFieldType_get_IPMask,
    .set = PyCThostFtdcUserIPFieldType_set_IPMask,
    .doc = PyDoc_STR("IP地址掩码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcUserIPFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcUserIPField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户IP")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcUserIPFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcUserIPFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcUserIPFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcUserIPFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcUserIPFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcUserIPFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户IP")},
    {Py_tp_members, PyCThostFtdcUserIPFieldType_members},
    {Py_tp_getset, PyCThostFtdcUserIPFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcUserIPFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcUserIPFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcUserIPFieldType_spec = {
    .name = "PyCTP.CThostFtdcUserIPField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcUserIPFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcUserIPFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcUserIPFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcUserIPFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcUserIPFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcUserIPFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcUserIPFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcUserIPFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcUserIPField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserIPField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}