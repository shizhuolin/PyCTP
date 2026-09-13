
#include "PyCThostFtdcLocalAddrConfigField.h"

///内网地址配置

static int PyCThostFtdcLocalAddrConfigFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "PeerAddr", "NetMask", "DRIdentityID", "LocalAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcLocalAddrConfigField_BrokerID = NULL;
    Py_ssize_t CThostFtdcLocalAddrConfigField_BrokerID_length = 0;

    /// 对端地址
    /// typedef char TThostFtdcIpAddrType[129]
    char *CThostFtdcLocalAddrConfigField_PeerAddr = NULL;
    Py_ssize_t CThostFtdcLocalAddrConfigField_PeerAddr_length = 0;

    /// 子网掩码
    /// typedef char TThostFtdcIpAddrType[129]
    char *CThostFtdcLocalAddrConfigField_NetMask = NULL;
    Py_ssize_t CThostFtdcLocalAddrConfigField_NetMask_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcLocalAddrConfigField_DRIdentityID = 0;

    /// 内网服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    char *CThostFtdcLocalAddrConfigField_LocalAddress = NULL;
    Py_ssize_t CThostFtdcLocalAddrConfigField_LocalAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#", (char **)kwlist
        , &CThostFtdcLocalAddrConfigField_BrokerID, &CThostFtdcLocalAddrConfigField_BrokerID_length
        , &CThostFtdcLocalAddrConfigField_PeerAddr, &CThostFtdcLocalAddrConfigField_PeerAddr_length
        , &CThostFtdcLocalAddrConfigField_NetMask, &CThostFtdcLocalAddrConfigField_NetMask_length
        , &CThostFtdcLocalAddrConfigField_DRIdentityID
        , &CThostFtdcLocalAddrConfigField_LocalAddress, &CThostFtdcLocalAddrConfigField_LocalAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLocalAddrConfigFieldData>(self);
    CThostFtdcLocalAddrConfigField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcLocalAddrConfigField_BrokerID != NULL ) {
        if(CThostFtdcLocalAddrConfigField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcLocalAddrConfigField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcLocalAddrConfigField_BrokerID, CThostFtdcLocalAddrConfigField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcLocalAddrConfigField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcLocalAddrConfigField_BrokerID = NULL;
    }

    /// 对端地址
    /// typedef char TThostFtdcIpAddrType[129]
    if( CThostFtdcLocalAddrConfigField_PeerAddr != NULL ) {
        if(CThostFtdcLocalAddrConfigField_PeerAddr_length >= (Py_ssize_t)sizeof(data->PeerAddr)) {
            PyErr_Format(PyExc_ValueError, "PeerAddr too long: length=%zd (max allowed is 128)", CThostFtdcLocalAddrConfigField_PeerAddr_length);
            return -1;
        }
        // memset(data->PeerAddr, 0, sizeof(data->PeerAddr));
        // memcpy(data->PeerAddr, CThostFtdcLocalAddrConfigField_PeerAddr, CThostFtdcLocalAddrConfigField_PeerAddr_length);
        strncpy(data->PeerAddr, CThostFtdcLocalAddrConfigField_PeerAddr, sizeof(data->PeerAddr));
        CThostFtdcLocalAddrConfigField_PeerAddr = NULL;
    }

    /// 子网掩码
    /// typedef char TThostFtdcIpAddrType[129]
    if( CThostFtdcLocalAddrConfigField_NetMask != NULL ) {
        if(CThostFtdcLocalAddrConfigField_NetMask_length >= (Py_ssize_t)sizeof(data->NetMask)) {
            PyErr_Format(PyExc_ValueError, "NetMask too long: length=%zd (max allowed is 128)", CThostFtdcLocalAddrConfigField_NetMask_length);
            return -1;
        }
        // memset(data->NetMask, 0, sizeof(data->NetMask));
        // memcpy(data->NetMask, CThostFtdcLocalAddrConfigField_NetMask, CThostFtdcLocalAddrConfigField_NetMask_length);
        strncpy(data->NetMask, CThostFtdcLocalAddrConfigField_NetMask, sizeof(data->NetMask));
        CThostFtdcLocalAddrConfigField_NetMask = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcLocalAddrConfigField_DRIdentityID;

    /// 内网服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    if( CThostFtdcLocalAddrConfigField_LocalAddress != NULL ) {
        if(CThostFtdcLocalAddrConfigField_LocalAddress_length >= (Py_ssize_t)sizeof(data->LocalAddress)) {
            PyErr_Format(PyExc_ValueError, "LocalAddress too long: length=%zd (max allowed is 128)", CThostFtdcLocalAddrConfigField_LocalAddress_length);
            return -1;
        }
        // memset(data->LocalAddress, 0, sizeof(data->LocalAddress));
        // memcpy(data->LocalAddress, CThostFtdcLocalAddrConfigField_LocalAddress, CThostFtdcLocalAddrConfigField_LocalAddress_length);
        strncpy(data->LocalAddress, CThostFtdcLocalAddrConfigField_LocalAddress, sizeof(data->LocalAddress));
        CThostFtdcLocalAddrConfigField_LocalAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcLocalAddrConfigFieldType_repr(PyObject *self) {

    PyCThostFtdcLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLocalAddrConfigFieldData>(self);
    CThostFtdcLocalAddrConfigField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "PeerAddr", data->PeerAddr//, (Py_ssize_t)sizeof(data->PeerAddr)
        , "NetMask", data->NetMask//, (Py_ssize_t)sizeof(data->NetMask)
        , "DRIdentityID", data->DRIdentityID
        , "LocalAddress", data->LocalAddress//, (Py_ssize_t)sizeof(data->LocalAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLocalAddrConfigField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLocalAddrConfigField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcLocalAddrConfigFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLocalAddrConfigFieldData>(self);
    CThostFtdcLocalAddrConfigField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcLocalAddrConfigFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLocalAddrConfigField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLocalAddrConfigFieldData>(self);
    CThostFtdcLocalAddrConfigField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 对端地址
/// typedef char TThostFtdcIpAddrType[129]
static PyObject *PyCThostFtdcLocalAddrConfigFieldType_get_PeerAddr(PyObject *self, void *closure) {
    PyCThostFtdcLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLocalAddrConfigFieldData>(self);
    CThostFtdcLocalAddrConfigField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->PeerAddr, (Py_ssize_t)sizeof(data->PeerAddr));
    return PyBytes_FromString(data->PeerAddr);
}

static int PyCThostFtdcLocalAddrConfigFieldType_set_PeerAddr(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PeerAddr Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLocalAddrConfigField::PeerAddr)) {
        PyErr_SetString(PyExc_ValueError, "PeerAddr must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLocalAddrConfigFieldData>(self);
    CThostFtdcLocalAddrConfigField *data = &(extra->data);
    // memset(data->PeerAddr, 0, sizeof(data->PeerAddr));
    // memcpy(data->PeerAddr, buf, len);
    strncpy(data->PeerAddr, buf, sizeof(data->PeerAddr));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 子网掩码
/// typedef char TThostFtdcIpAddrType[129]
static PyObject *PyCThostFtdcLocalAddrConfigFieldType_get_NetMask(PyObject *self, void *closure) {
    PyCThostFtdcLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLocalAddrConfigFieldData>(self);
    CThostFtdcLocalAddrConfigField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NetMask, (Py_ssize_t)sizeof(data->NetMask));
    return PyBytes_FromString(data->NetMask);
}

static int PyCThostFtdcLocalAddrConfigFieldType_set_NetMask(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NetMask Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLocalAddrConfigField::NetMask)) {
        PyErr_SetString(PyExc_ValueError, "NetMask must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLocalAddrConfigFieldData>(self);
    CThostFtdcLocalAddrConfigField *data = &(extra->data);
    // memset(data->NetMask, 0, sizeof(data->NetMask));
    // memcpy(data->NetMask, buf, len);
    strncpy(data->NetMask, buf, sizeof(data->NetMask));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 内网服务地址
/// typedef char TThostFtdcIpAddrType[129]
static PyObject *PyCThostFtdcLocalAddrConfigFieldType_get_LocalAddress(PyObject *self, void *closure) {
    PyCThostFtdcLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLocalAddrConfigFieldData>(self);
    CThostFtdcLocalAddrConfigField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LocalAddress, (Py_ssize_t)sizeof(data->LocalAddress));
    return PyBytes_FromString(data->LocalAddress);
}

static int PyCThostFtdcLocalAddrConfigFieldType_set_LocalAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LocalAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLocalAddrConfigField::LocalAddress)) {
        PyErr_SetString(PyExc_ValueError, "LocalAddress must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLocalAddrConfigFieldData>(self);
    CThostFtdcLocalAddrConfigField *data = &(extra->data);
    // memset(data->LocalAddress, 0, sizeof(data->LocalAddress));
    // memcpy(data->LocalAddress, buf, len);
    strncpy(data->LocalAddress, buf, sizeof(data->LocalAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcLocalAddrConfigFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcLocalAddrConfigFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcLocalAddrConfigFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcLocalAddrConfigFieldType_get_BrokerID,
    .set = PyCThostFtdcLocalAddrConfigFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 对端地址
    /// typedef char TThostFtdcIpAddrType[129]
    {
    .name = "PeerAddr",
    .get = PyCThostFtdcLocalAddrConfigFieldType_get_PeerAddr,
    .set = PyCThostFtdcLocalAddrConfigFieldType_set_PeerAddr,
    .doc = PyDoc_STR("对端地址"),
    },
    /// 子网掩码
    /// typedef char TThostFtdcIpAddrType[129]
    {
    .name = "NetMask",
    .get = PyCThostFtdcLocalAddrConfigFieldType_get_NetMask,
    .set = PyCThostFtdcLocalAddrConfigFieldType_set_NetMask,
    .doc = PyDoc_STR("子网掩码"),
    },
    /// 内网服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    {
    .name = "LocalAddress",
    .get = PyCThostFtdcLocalAddrConfigFieldType_get_LocalAddress,
    .set = PyCThostFtdcLocalAddrConfigFieldType_set_LocalAddress,
    .doc = PyDoc_STR("内网服务地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcLocalAddrConfigFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcLocalAddrConfigField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("内网地址配置")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcLocalAddrConfigFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcLocalAddrConfigFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcLocalAddrConfigFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcLocalAddrConfigFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcLocalAddrConfigFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcLocalAddrConfigFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("内网地址配置")},
    {Py_tp_members, PyCThostFtdcLocalAddrConfigFieldType_members},
    {Py_tp_getset, PyCThostFtdcLocalAddrConfigFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcLocalAddrConfigFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcLocalAddrConfigFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcLocalAddrConfigFieldType_spec = {
    .name = "PyCTP.CThostFtdcLocalAddrConfigField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcLocalAddrConfigFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcLocalAddrConfigFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcLocalAddrConfigFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcLocalAddrConfigFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcLocalAddrConfigFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcLocalAddrConfigFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcLocalAddrConfigFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcLocalAddrConfigFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcLocalAddrConfigField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLocalAddrConfigField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}