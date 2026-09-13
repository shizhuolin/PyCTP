
#include "PyCThostFtdcTraderField.h"

///交易所交易员

static int PyCThostFtdcTraderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "TraderID", "ParticipantID", "Password", "InstallCount", "BrokerID", "OrderCancelAlg", "TradeInstallCount", "MDInstallCount", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcTraderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcTraderField_ExchangeID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcTraderField_TraderID = NULL;
    Py_ssize_t CThostFtdcTraderField_TraderID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcTraderField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcTraderField_ParticipantID_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcTraderField_Password = NULL;
    Py_ssize_t CThostFtdcTraderField_Password_length = 0;

    /// 安装数量
    /// typedef int TThostFtdcInstallCountType
    int CThostFtdcTraderField_InstallCount = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTraderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTraderField_BrokerID_length = 0;

    /// 撤单时选择席位算法
    /// typedef char TThostFtdcOrderCancelAlgType
    char CThostFtdcTraderField_OrderCancelAlg = 0;

    /// 交易报盘安装数量
    /// typedef int TThostFtdcInstallCountType
    int CThostFtdcTraderField_TradeInstallCount = 0;

    /// 行情报盘安装数量
    /// typedef int TThostFtdcInstallCountType
    int CThostFtdcTraderField_MDInstallCount = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#cii", (char **)kwlist
        , &CThostFtdcTraderField_ExchangeID, &CThostFtdcTraderField_ExchangeID_length
        , &CThostFtdcTraderField_TraderID, &CThostFtdcTraderField_TraderID_length
        , &CThostFtdcTraderField_ParticipantID, &CThostFtdcTraderField_ParticipantID_length
        , &CThostFtdcTraderField_Password, &CThostFtdcTraderField_Password_length
        , &CThostFtdcTraderField_InstallCount
        , &CThostFtdcTraderField_BrokerID, &CThostFtdcTraderField_BrokerID_length
        , &CThostFtdcTraderField_OrderCancelAlg
        , &CThostFtdcTraderField_TradeInstallCount
        , &CThostFtdcTraderField_MDInstallCount
    )) {
        return -1;
    }

    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcTraderField_ExchangeID != NULL ) {
        if(CThostFtdcTraderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcTraderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcTraderField_ExchangeID, CThostFtdcTraderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcTraderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcTraderField_ExchangeID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcTraderField_TraderID != NULL ) {
        if(CThostFtdcTraderField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcTraderField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcTraderField_TraderID, CThostFtdcTraderField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcTraderField_TraderID, sizeof(data->TraderID));
        CThostFtdcTraderField_TraderID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcTraderField_ParticipantID != NULL ) {
        if(CThostFtdcTraderField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcTraderField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcTraderField_ParticipantID, CThostFtdcTraderField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcTraderField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcTraderField_ParticipantID = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcTraderField_Password != NULL ) {
        if(CThostFtdcTraderField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcTraderField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcTraderField_Password, CThostFtdcTraderField_Password_length);
        strncpy(data->Password, CThostFtdcTraderField_Password, sizeof(data->Password));
        CThostFtdcTraderField_Password = NULL;
    }

    /// 安装数量
    /// typedef int TThostFtdcInstallCountType
    data->InstallCount = CThostFtdcTraderField_InstallCount;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTraderField_BrokerID != NULL ) {
        if(CThostFtdcTraderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTraderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTraderField_BrokerID, CThostFtdcTraderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTraderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTraderField_BrokerID = NULL;
    }

    /// 撤单时选择席位算法
    /// typedef char TThostFtdcOrderCancelAlgType
    data->OrderCancelAlg = CThostFtdcTraderField_OrderCancelAlg;

    /// 交易报盘安装数量
    /// typedef int TThostFtdcInstallCountType
    data->TradeInstallCount = CThostFtdcTraderField_TradeInstallCount;

    /// 行情报盘安装数量
    /// typedef int TThostFtdcInstallCountType
    data->MDInstallCount = CThostFtdcTraderField_MDInstallCount;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTraderFieldType_repr(PyObject *self) {

    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:c,s:i,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "InstallCount", data->InstallCount
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "OrderCancelAlg", data->OrderCancelAlg
        , "TradeInstallCount", data->TradeInstallCount
        , "MDInstallCount", data->MDInstallCount
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTraderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTraderField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcTraderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcTraderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTraderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcTraderFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcTraderFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTraderField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcTraderFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcTraderFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTraderField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcTraderFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcTraderFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTraderField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTraderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTraderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTraderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤单时选择席位算法
/// typedef char TThostFtdcOrderCancelAlgType
static PyObject *PyCThostFtdcTraderFieldType_get_OrderCancelAlg(PyObject *self, void *closure) {
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderCancelAlg), 1);
}

static int PyCThostFtdcTraderFieldType_set_OrderCancelAlg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderCancelAlg Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTraderField::OrderCancelAlg)) {
        PyErr_SetString(PyExc_ValueError, "OrderCancelAlg must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderFieldData>(self);
    CThostFtdcTraderField *data = &(extra->data);
    data->OrderCancelAlg = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTraderFieldType_members[] = {
    /// 安装数量
    /// typedef int TThostFtdcInstallCountType
    {
        .name = "InstallCount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTraderFieldData, data.InstallCount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装数量")
    },
    /// 交易报盘安装数量
    /// typedef int TThostFtdcInstallCountType
    {
        .name = "TradeInstallCount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTraderFieldData, data.TradeInstallCount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易报盘安装数量")
    },
    /// 行情报盘安装数量
    /// typedef int TThostFtdcInstallCountType
    {
        .name = "MDInstallCount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTraderFieldData, data.MDInstallCount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("行情报盘安装数量")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTraderFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcTraderFieldType_get_ExchangeID,
    .set = PyCThostFtdcTraderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcTraderFieldType_get_TraderID,
    .set = PyCThostFtdcTraderFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcTraderFieldType_get_ParticipantID,
    .set = PyCThostFtdcTraderFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcTraderFieldType_get_Password,
    .set = PyCThostFtdcTraderFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTraderFieldType_get_BrokerID,
    .set = PyCThostFtdcTraderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 撤单时选择席位算法
    /// typedef char TThostFtdcOrderCancelAlgType
    {
    .name = "OrderCancelAlg",
    .get = PyCThostFtdcTraderFieldType_get_OrderCancelAlg,
    .set = PyCThostFtdcTraderFieldType_set_OrderCancelAlg,
    .doc = PyDoc_STR("撤单时选择席位算法"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTraderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTraderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所交易员")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTraderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTraderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTraderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTraderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTraderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTraderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所交易员")},
    {Py_tp_members, PyCThostFtdcTraderFieldType_members},
    {Py_tp_getset, PyCThostFtdcTraderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTraderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTraderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTraderFieldType_spec = {
    .name = "PyCTP.CThostFtdcTraderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTraderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTraderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTraderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTraderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTraderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTraderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTraderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTraderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTraderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTraderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}