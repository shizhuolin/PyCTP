
#include "PyCThostFtdcExchangeOrderInsertErrorField.h"

///交易所报单插入失败

static int PyCThostFtdcExchangeOrderInsertErrorFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ParticipantID", "TraderID", "InstallID", "OrderLocalID", "ErrorID", "ErrorMsg", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeOrderInsertErrorField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderInsertErrorField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeOrderInsertErrorField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderInsertErrorField_ParticipantID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeOrderInsertErrorField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderInsertErrorField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeOrderInsertErrorField_InstallID = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeOrderInsertErrorField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderInsertErrorField_OrderLocalID_length = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcExchangeOrderInsertErrorField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcExchangeOrderInsertErrorField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcExchangeOrderInsertErrorField_ErrorMsg_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#iy#", (char **)kwlist
        , &CThostFtdcExchangeOrderInsertErrorField_ExchangeID, &CThostFtdcExchangeOrderInsertErrorField_ExchangeID_length
        , &CThostFtdcExchangeOrderInsertErrorField_ParticipantID, &CThostFtdcExchangeOrderInsertErrorField_ParticipantID_length
        , &CThostFtdcExchangeOrderInsertErrorField_TraderID, &CThostFtdcExchangeOrderInsertErrorField_TraderID_length
        , &CThostFtdcExchangeOrderInsertErrorField_InstallID
        , &CThostFtdcExchangeOrderInsertErrorField_OrderLocalID, &CThostFtdcExchangeOrderInsertErrorField_OrderLocalID_length
        , &CThostFtdcExchangeOrderInsertErrorField_ErrorID
        , &CThostFtdcExchangeOrderInsertErrorField_ErrorMsg, &CThostFtdcExchangeOrderInsertErrorField_ErrorMsg_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeOrderInsertErrorField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeOrderInsertErrorField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderInsertErrorField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeOrderInsertErrorField_ExchangeID, CThostFtdcExchangeOrderInsertErrorField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeOrderInsertErrorField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeOrderInsertErrorField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeOrderInsertErrorField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeOrderInsertErrorField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeOrderInsertErrorField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeOrderInsertErrorField_ParticipantID, CThostFtdcExchangeOrderInsertErrorField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeOrderInsertErrorField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeOrderInsertErrorField_ParticipantID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeOrderInsertErrorField_TraderID != NULL ) {
        if(CThostFtdcExchangeOrderInsertErrorField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderInsertErrorField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeOrderInsertErrorField_TraderID, CThostFtdcExchangeOrderInsertErrorField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeOrderInsertErrorField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeOrderInsertErrorField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeOrderInsertErrorField_InstallID;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeOrderInsertErrorField_OrderLocalID != NULL ) {
        if(CThostFtdcExchangeOrderInsertErrorField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeOrderInsertErrorField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcExchangeOrderInsertErrorField_OrderLocalID, CThostFtdcExchangeOrderInsertErrorField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcExchangeOrderInsertErrorField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcExchangeOrderInsertErrorField_OrderLocalID = NULL;
    }

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcExchangeOrderInsertErrorField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcExchangeOrderInsertErrorField_ErrorMsg != NULL ) {
        if(CThostFtdcExchangeOrderInsertErrorField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcExchangeOrderInsertErrorField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcExchangeOrderInsertErrorField_ErrorMsg, CThostFtdcExchangeOrderInsertErrorField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcExchangeOrderInsertErrorField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcExchangeOrderInsertErrorField_ErrorMsg = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeOrderInsertErrorFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:i,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "OrderLocalID", data->OrderLocalID//, (Py_ssize_t)sizeof(data->OrderLocalID)
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderInsertErrorField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderInsertErrorField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeOrderInsertErrorFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeOrderInsertErrorFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderInsertErrorField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeOrderInsertErrorFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeOrderInsertErrorFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderInsertErrorField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeOrderInsertErrorFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeOrderInsertErrorFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderInsertErrorField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeOrderInsertErrorFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcExchangeOrderInsertErrorFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderInsertErrorField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcExchangeOrderInsertErrorFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcExchangeOrderInsertErrorFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderInsertErrorField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderInsertErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderInsertErrorFieldData>(self);
    CThostFtdcExchangeOrderInsertErrorField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeOrderInsertErrorFieldType_members[] = {
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderInsertErrorFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    {
        .name = "ErrorID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderInsertErrorFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeOrderInsertErrorFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeOrderInsertErrorFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeOrderInsertErrorFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeOrderInsertErrorFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeOrderInsertErrorFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeOrderInsertErrorFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeOrderInsertErrorFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcExchangeOrderInsertErrorFieldType_get_OrderLocalID,
    .set = PyCThostFtdcExchangeOrderInsertErrorFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcExchangeOrderInsertErrorFieldType_get_ErrorMsg,
    .set = PyCThostFtdcExchangeOrderInsertErrorFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeOrderInsertErrorFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeOrderInsertErrorField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所报单插入失败")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeOrderInsertErrorFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeOrderInsertErrorFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeOrderInsertErrorFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeOrderInsertErrorFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeOrderInsertErrorFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeOrderInsertErrorFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所报单插入失败")},
    {Py_tp_members, PyCThostFtdcExchangeOrderInsertErrorFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeOrderInsertErrorFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeOrderInsertErrorFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeOrderInsertErrorFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeOrderInsertErrorFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeOrderInsertErrorField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeOrderInsertErrorFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeOrderInsertErrorFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeOrderInsertErrorFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeOrderInsertErrorFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeOrderInsertErrorFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeOrderInsertErrorFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeOrderInsertErrorFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeOrderInsertErrorFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeOrderInsertErrorField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOrderInsertErrorField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}