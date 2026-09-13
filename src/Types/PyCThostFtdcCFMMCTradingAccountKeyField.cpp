
#include "PyCThostFtdcCFMMCTradingAccountKeyField.h"

///保证金监管系统经纪公司资金账户密钥

static int PyCThostFtdcCFMMCTradingAccountKeyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "ParticipantID", "AccountID", "KeyID", "CurrentKey", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcCFMMCTradingAccountKeyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcCFMMCTradingAccountKeyField_BrokerID_length = 0;

    /// 经纪公司统一编码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcCFMMCTradingAccountKeyField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcCFMMCTradingAccountKeyField_ParticipantID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcCFMMCTradingAccountKeyField_AccountID = NULL;
    Py_ssize_t CThostFtdcCFMMCTradingAccountKeyField_AccountID_length = 0;

    /// 密钥编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcCFMMCTradingAccountKeyField_KeyID = 0;

    /// 动态密钥
    /// typedef char TThostFtdcCFMMCKeyType[21]
    char *CThostFtdcCFMMCTradingAccountKeyField_CurrentKey = NULL;
    Py_ssize_t CThostFtdcCFMMCTradingAccountKeyField_CurrentKey_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#", (char **)kwlist
        , &CThostFtdcCFMMCTradingAccountKeyField_BrokerID, &CThostFtdcCFMMCTradingAccountKeyField_BrokerID_length
        , &CThostFtdcCFMMCTradingAccountKeyField_ParticipantID, &CThostFtdcCFMMCTradingAccountKeyField_ParticipantID_length
        , &CThostFtdcCFMMCTradingAccountKeyField_AccountID, &CThostFtdcCFMMCTradingAccountKeyField_AccountID_length
        , &CThostFtdcCFMMCTradingAccountKeyField_KeyID
        , &CThostFtdcCFMMCTradingAccountKeyField_CurrentKey, &CThostFtdcCFMMCTradingAccountKeyField_CurrentKey_length
    )) {
        return -1;
    }

    PyCThostFtdcCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcCFMMCTradingAccountKeyField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcCFMMCTradingAccountKeyField_BrokerID != NULL ) {
        if(CThostFtdcCFMMCTradingAccountKeyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcCFMMCTradingAccountKeyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcCFMMCTradingAccountKeyField_BrokerID, CThostFtdcCFMMCTradingAccountKeyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcCFMMCTradingAccountKeyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcCFMMCTradingAccountKeyField_BrokerID = NULL;
    }

    /// 经纪公司统一编码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcCFMMCTradingAccountKeyField_ParticipantID != NULL ) {
        if(CThostFtdcCFMMCTradingAccountKeyField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcCFMMCTradingAccountKeyField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcCFMMCTradingAccountKeyField_ParticipantID, CThostFtdcCFMMCTradingAccountKeyField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcCFMMCTradingAccountKeyField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcCFMMCTradingAccountKeyField_ParticipantID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcCFMMCTradingAccountKeyField_AccountID != NULL ) {
        if(CThostFtdcCFMMCTradingAccountKeyField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcCFMMCTradingAccountKeyField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcCFMMCTradingAccountKeyField_AccountID, CThostFtdcCFMMCTradingAccountKeyField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcCFMMCTradingAccountKeyField_AccountID, sizeof(data->AccountID));
        CThostFtdcCFMMCTradingAccountKeyField_AccountID = NULL;
    }

    /// 密钥编号
    /// typedef int TThostFtdcSequenceNoType
    data->KeyID = CThostFtdcCFMMCTradingAccountKeyField_KeyID;

    /// 动态密钥
    /// typedef char TThostFtdcCFMMCKeyType[21]
    if( CThostFtdcCFMMCTradingAccountKeyField_CurrentKey != NULL ) {
        if(CThostFtdcCFMMCTradingAccountKeyField_CurrentKey_length >= (Py_ssize_t)sizeof(data->CurrentKey)) {
            PyErr_Format(PyExc_ValueError, "CurrentKey too long: length=%zd (max allowed is 20)", CThostFtdcCFMMCTradingAccountKeyField_CurrentKey_length);
            return -1;
        }
        // memset(data->CurrentKey, 0, sizeof(data->CurrentKey));
        // memcpy(data->CurrentKey, CThostFtdcCFMMCTradingAccountKeyField_CurrentKey, CThostFtdcCFMMCTradingAccountKeyField_CurrentKey_length);
        strncpy(data->CurrentKey, CThostFtdcCFMMCTradingAccountKeyField_CurrentKey, sizeof(data->CurrentKey));
        CThostFtdcCFMMCTradingAccountKeyField_CurrentKey = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCFMMCTradingAccountKeyFieldType_repr(PyObject *self) {

    PyCThostFtdcCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcCFMMCTradingAccountKeyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "KeyID", data->KeyID
        , "CurrentKey", data->CurrentKey//, (Py_ssize_t)sizeof(data->CurrentKey)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCFMMCTradingAccountKeyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCFMMCTradingAccountKeyField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcCFMMCTradingAccountKeyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcCFMMCTradingAccountKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcCFMMCTradingAccountKeyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCTradingAccountKeyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcCFMMCTradingAccountKeyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司统一编码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcCFMMCTradingAccountKeyFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcCFMMCTradingAccountKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcCFMMCTradingAccountKeyFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCTradingAccountKeyField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcCFMMCTradingAccountKeyField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcCFMMCTradingAccountKeyFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcCFMMCTradingAccountKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcCFMMCTradingAccountKeyFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCTradingAccountKeyField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcCFMMCTradingAccountKeyField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 动态密钥
/// typedef char TThostFtdcCFMMCKeyType[21]
static PyObject *PyCThostFtdcCFMMCTradingAccountKeyFieldType_get_CurrentKey(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcCFMMCTradingAccountKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrentKey, (Py_ssize_t)sizeof(data->CurrentKey));
    return PyBytes_FromString(data->CurrentKey);
}

static int PyCThostFtdcCFMMCTradingAccountKeyFieldType_set_CurrentKey(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrentKey Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCTradingAccountKeyField::CurrentKey)) {
        PyErr_SetString(PyExc_ValueError, "CurrentKey must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcCFMMCTradingAccountKeyField *data = &(extra->data);
    // memset(data->CurrentKey, 0, sizeof(data->CurrentKey));
    // memcpy(data->CurrentKey, buf, len);
    strncpy(data->CurrentKey, buf, sizeof(data->CurrentKey));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCFMMCTradingAccountKeyFieldType_members[] = {
    /// 密钥编号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "KeyID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCFMMCTradingAccountKeyFieldData, data.KeyID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("密钥编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCFMMCTradingAccountKeyFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcCFMMCTradingAccountKeyFieldType_get_BrokerID,
    .set = PyCThostFtdcCFMMCTradingAccountKeyFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 经纪公司统一编码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcCFMMCTradingAccountKeyFieldType_get_ParticipantID,
    .set = PyCThostFtdcCFMMCTradingAccountKeyFieldType_set_ParticipantID,
    .doc = PyDoc_STR("经纪公司统一编码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcCFMMCTradingAccountKeyFieldType_get_AccountID,
    .set = PyCThostFtdcCFMMCTradingAccountKeyFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 动态密钥
    /// typedef char TThostFtdcCFMMCKeyType[21]
    {
    .name = "CurrentKey",
    .get = PyCThostFtdcCFMMCTradingAccountKeyFieldType_get_CurrentKey,
    .set = PyCThostFtdcCFMMCTradingAccountKeyFieldType_set_CurrentKey,
    .doc = PyDoc_STR("动态密钥"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCFMMCTradingAccountKeyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCFMMCTradingAccountKeyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("保证金监管系统经纪公司资金账户密钥")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCFMMCTradingAccountKeyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCFMMCTradingAccountKeyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCFMMCTradingAccountKeyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCFMMCTradingAccountKeyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCFMMCTradingAccountKeyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCFMMCTradingAccountKeyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("保证金监管系统经纪公司资金账户密钥")},
    {Py_tp_members, PyCThostFtdcCFMMCTradingAccountKeyFieldType_members},
    {Py_tp_getset, PyCThostFtdcCFMMCTradingAccountKeyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCFMMCTradingAccountKeyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCFMMCTradingAccountKeyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCFMMCTradingAccountKeyFieldType_spec = {
    .name = "PyCTP.CThostFtdcCFMMCTradingAccountKeyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCFMMCTradingAccountKeyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCFMMCTradingAccountKeyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCFMMCTradingAccountKeyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCFMMCTradingAccountKeyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCFMMCTradingAccountKeyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCFMMCTradingAccountKeyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCFMMCTradingAccountKeyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCFMMCTradingAccountKeyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCFMMCTradingAccountKeyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCFMMCTradingAccountKeyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}