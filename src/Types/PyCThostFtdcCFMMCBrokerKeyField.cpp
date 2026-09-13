
#include "PyCThostFtdcCFMMCBrokerKeyField.h"

///保证金监管系统经纪公司密钥

static int PyCThostFtdcCFMMCBrokerKeyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "ParticipantID", "CreateDate", "CreateTime", "KeyID", "CurrentKey", "KeyKind", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcCFMMCBrokerKeyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcCFMMCBrokerKeyField_BrokerID_length = 0;

    /// 经纪公司统一编码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcCFMMCBrokerKeyField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcCFMMCBrokerKeyField_ParticipantID_length = 0;

    /// 密钥生成日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcCFMMCBrokerKeyField_CreateDate = NULL;
    Py_ssize_t CThostFtdcCFMMCBrokerKeyField_CreateDate_length = 0;

    /// 密钥生成时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcCFMMCBrokerKeyField_CreateTime = NULL;
    Py_ssize_t CThostFtdcCFMMCBrokerKeyField_CreateTime_length = 0;

    /// 密钥编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcCFMMCBrokerKeyField_KeyID = 0;

    /// 动态密钥
    /// typedef char TThostFtdcCFMMCKeyType[21]
    char *CThostFtdcCFMMCBrokerKeyField_CurrentKey = NULL;
    Py_ssize_t CThostFtdcCFMMCBrokerKeyField_CurrentKey_length = 0;

    /// 动态密钥类型
    /// typedef char TThostFtdcCFMMCKeyKindType
    char CThostFtdcCFMMCBrokerKeyField_KeyKind = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#c", (char **)kwlist
        , &CThostFtdcCFMMCBrokerKeyField_BrokerID, &CThostFtdcCFMMCBrokerKeyField_BrokerID_length
        , &CThostFtdcCFMMCBrokerKeyField_ParticipantID, &CThostFtdcCFMMCBrokerKeyField_ParticipantID_length
        , &CThostFtdcCFMMCBrokerKeyField_CreateDate, &CThostFtdcCFMMCBrokerKeyField_CreateDate_length
        , &CThostFtdcCFMMCBrokerKeyField_CreateTime, &CThostFtdcCFMMCBrokerKeyField_CreateTime_length
        , &CThostFtdcCFMMCBrokerKeyField_KeyID
        , &CThostFtdcCFMMCBrokerKeyField_CurrentKey, &CThostFtdcCFMMCBrokerKeyField_CurrentKey_length
        , &CThostFtdcCFMMCBrokerKeyField_KeyKind
    )) {
        return -1;
    }

    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcCFMMCBrokerKeyField_BrokerID != NULL ) {
        if(CThostFtdcCFMMCBrokerKeyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcCFMMCBrokerKeyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcCFMMCBrokerKeyField_BrokerID, CThostFtdcCFMMCBrokerKeyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcCFMMCBrokerKeyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcCFMMCBrokerKeyField_BrokerID = NULL;
    }

    /// 经纪公司统一编码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcCFMMCBrokerKeyField_ParticipantID != NULL ) {
        if(CThostFtdcCFMMCBrokerKeyField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcCFMMCBrokerKeyField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcCFMMCBrokerKeyField_ParticipantID, CThostFtdcCFMMCBrokerKeyField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcCFMMCBrokerKeyField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcCFMMCBrokerKeyField_ParticipantID = NULL;
    }

    /// 密钥生成日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcCFMMCBrokerKeyField_CreateDate != NULL ) {
        if(CThostFtdcCFMMCBrokerKeyField_CreateDate_length >= (Py_ssize_t)sizeof(data->CreateDate)) {
            PyErr_Format(PyExc_ValueError, "CreateDate too long: length=%zd (max allowed is 8)", CThostFtdcCFMMCBrokerKeyField_CreateDate_length);
            return -1;
        }
        // memset(data->CreateDate, 0, sizeof(data->CreateDate));
        // memcpy(data->CreateDate, CThostFtdcCFMMCBrokerKeyField_CreateDate, CThostFtdcCFMMCBrokerKeyField_CreateDate_length);
        strncpy(data->CreateDate, CThostFtdcCFMMCBrokerKeyField_CreateDate, sizeof(data->CreateDate));
        CThostFtdcCFMMCBrokerKeyField_CreateDate = NULL;
    }

    /// 密钥生成时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcCFMMCBrokerKeyField_CreateTime != NULL ) {
        if(CThostFtdcCFMMCBrokerKeyField_CreateTime_length >= (Py_ssize_t)sizeof(data->CreateTime)) {
            PyErr_Format(PyExc_ValueError, "CreateTime too long: length=%zd (max allowed is 8)", CThostFtdcCFMMCBrokerKeyField_CreateTime_length);
            return -1;
        }
        // memset(data->CreateTime, 0, sizeof(data->CreateTime));
        // memcpy(data->CreateTime, CThostFtdcCFMMCBrokerKeyField_CreateTime, CThostFtdcCFMMCBrokerKeyField_CreateTime_length);
        strncpy(data->CreateTime, CThostFtdcCFMMCBrokerKeyField_CreateTime, sizeof(data->CreateTime));
        CThostFtdcCFMMCBrokerKeyField_CreateTime = NULL;
    }

    /// 密钥编号
    /// typedef int TThostFtdcSequenceNoType
    data->KeyID = CThostFtdcCFMMCBrokerKeyField_KeyID;

    /// 动态密钥
    /// typedef char TThostFtdcCFMMCKeyType[21]
    if( CThostFtdcCFMMCBrokerKeyField_CurrentKey != NULL ) {
        if(CThostFtdcCFMMCBrokerKeyField_CurrentKey_length >= (Py_ssize_t)sizeof(data->CurrentKey)) {
            PyErr_Format(PyExc_ValueError, "CurrentKey too long: length=%zd (max allowed is 20)", CThostFtdcCFMMCBrokerKeyField_CurrentKey_length);
            return -1;
        }
        // memset(data->CurrentKey, 0, sizeof(data->CurrentKey));
        // memcpy(data->CurrentKey, CThostFtdcCFMMCBrokerKeyField_CurrentKey, CThostFtdcCFMMCBrokerKeyField_CurrentKey_length);
        strncpy(data->CurrentKey, CThostFtdcCFMMCBrokerKeyField_CurrentKey, sizeof(data->CurrentKey));
        CThostFtdcCFMMCBrokerKeyField_CurrentKey = NULL;
    }

    /// 动态密钥类型
    /// typedef char TThostFtdcCFMMCKeyKindType
    data->KeyKind = CThostFtdcCFMMCBrokerKeyField_KeyKind;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCFMMCBrokerKeyFieldType_repr(PyObject *self) {

    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "CreateDate", data->CreateDate//, (Py_ssize_t)sizeof(data->CreateDate)
        , "CreateTime", data->CreateTime//, (Py_ssize_t)sizeof(data->CreateTime)
        , "KeyID", data->KeyID
        , "CurrentKey", data->CurrentKey//, (Py_ssize_t)sizeof(data->CurrentKey)
        , "KeyKind", data->KeyKind
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCFMMCBrokerKeyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCFMMCBrokerKeyField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcCFMMCBrokerKeyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcCFMMCBrokerKeyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCBrokerKeyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司统一编码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcCFMMCBrokerKeyFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcCFMMCBrokerKeyFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCBrokerKeyField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密钥生成日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcCFMMCBrokerKeyFieldType_get_CreateDate(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CreateDate, (Py_ssize_t)sizeof(data->CreateDate));
    return PyBytes_FromString(data->CreateDate);
}

static int PyCThostFtdcCFMMCBrokerKeyFieldType_set_CreateDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CreateDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCBrokerKeyField::CreateDate)) {
        PyErr_SetString(PyExc_ValueError, "CreateDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    // memset(data->CreateDate, 0, sizeof(data->CreateDate));
    // memcpy(data->CreateDate, buf, len);
    strncpy(data->CreateDate, buf, sizeof(data->CreateDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密钥生成时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcCFMMCBrokerKeyFieldType_get_CreateTime(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CreateTime, (Py_ssize_t)sizeof(data->CreateTime));
    return PyBytes_FromString(data->CreateTime);
}

static int PyCThostFtdcCFMMCBrokerKeyFieldType_set_CreateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CreateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCBrokerKeyField::CreateTime)) {
        PyErr_SetString(PyExc_ValueError, "CreateTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    // memset(data->CreateTime, 0, sizeof(data->CreateTime));
    // memcpy(data->CreateTime, buf, len);
    strncpy(data->CreateTime, buf, sizeof(data->CreateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 动态密钥
/// typedef char TThostFtdcCFMMCKeyType[21]
static PyObject *PyCThostFtdcCFMMCBrokerKeyFieldType_get_CurrentKey(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrentKey, (Py_ssize_t)sizeof(data->CurrentKey));
    return PyBytes_FromString(data->CurrentKey);
}

static int PyCThostFtdcCFMMCBrokerKeyFieldType_set_CurrentKey(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrentKey Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCBrokerKeyField::CurrentKey)) {
        PyErr_SetString(PyExc_ValueError, "CurrentKey must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    // memset(data->CurrentKey, 0, sizeof(data->CurrentKey));
    // memcpy(data->CurrentKey, buf, len);
    strncpy(data->CurrentKey, buf, sizeof(data->CurrentKey));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 动态密钥类型
/// typedef char TThostFtdcCFMMCKeyKindType
static PyObject *PyCThostFtdcCFMMCBrokerKeyFieldType_get_KeyKind(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->KeyKind), 1);
}

static int PyCThostFtdcCFMMCBrokerKeyFieldType_set_KeyKind(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "KeyKind Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCFMMCBrokerKeyField::KeyKind)) {
        PyErr_SetString(PyExc_ValueError, "KeyKind must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCBrokerKeyFieldData>(self);
    CThostFtdcCFMMCBrokerKeyField *data = &(extra->data);
    data->KeyKind = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCFMMCBrokerKeyFieldType_members[] = {
    /// 密钥编号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "KeyID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCFMMCBrokerKeyFieldData, data.KeyID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("密钥编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCFMMCBrokerKeyFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcCFMMCBrokerKeyFieldType_get_BrokerID,
    .set = PyCThostFtdcCFMMCBrokerKeyFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 经纪公司统一编码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcCFMMCBrokerKeyFieldType_get_ParticipantID,
    .set = PyCThostFtdcCFMMCBrokerKeyFieldType_set_ParticipantID,
    .doc = PyDoc_STR("经纪公司统一编码"),
    },
    /// 密钥生成日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "CreateDate",
    .get = PyCThostFtdcCFMMCBrokerKeyFieldType_get_CreateDate,
    .set = PyCThostFtdcCFMMCBrokerKeyFieldType_set_CreateDate,
    .doc = PyDoc_STR("密钥生成日期"),
    },
    /// 密钥生成时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CreateTime",
    .get = PyCThostFtdcCFMMCBrokerKeyFieldType_get_CreateTime,
    .set = PyCThostFtdcCFMMCBrokerKeyFieldType_set_CreateTime,
    .doc = PyDoc_STR("密钥生成时间"),
    },
    /// 动态密钥
    /// typedef char TThostFtdcCFMMCKeyType[21]
    {
    .name = "CurrentKey",
    .get = PyCThostFtdcCFMMCBrokerKeyFieldType_get_CurrentKey,
    .set = PyCThostFtdcCFMMCBrokerKeyFieldType_set_CurrentKey,
    .doc = PyDoc_STR("动态密钥"),
    },
    /// 动态密钥类型
    /// typedef char TThostFtdcCFMMCKeyKindType
    {
    .name = "KeyKind",
    .get = PyCThostFtdcCFMMCBrokerKeyFieldType_get_KeyKind,
    .set = PyCThostFtdcCFMMCBrokerKeyFieldType_set_KeyKind,
    .doc = PyDoc_STR("动态密钥类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCFMMCBrokerKeyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCFMMCBrokerKeyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("保证金监管系统经纪公司密钥")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCFMMCBrokerKeyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCFMMCBrokerKeyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCFMMCBrokerKeyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCFMMCBrokerKeyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCFMMCBrokerKeyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCFMMCBrokerKeyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("保证金监管系统经纪公司密钥")},
    {Py_tp_members, PyCThostFtdcCFMMCBrokerKeyFieldType_members},
    {Py_tp_getset, PyCThostFtdcCFMMCBrokerKeyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCFMMCBrokerKeyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCFMMCBrokerKeyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCFMMCBrokerKeyFieldType_spec = {
    .name = "PyCTP.CThostFtdcCFMMCBrokerKeyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCFMMCBrokerKeyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCFMMCBrokerKeyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCFMMCBrokerKeyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCFMMCBrokerKeyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCFMMCBrokerKeyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCFMMCBrokerKeyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCFMMCBrokerKeyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCFMMCBrokerKeyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCFMMCBrokerKeyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCFMMCBrokerKeyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}