
#include "PyCThostFtdcCFMMCTradingAccountTokenField.h"

///监控中心用户令牌

static int PyCThostFtdcCFMMCTradingAccountTokenFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "ParticipantID", "AccountID", "KeyID", "Token", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcCFMMCTradingAccountTokenField_BrokerID = NULL;
    Py_ssize_t CThostFtdcCFMMCTradingAccountTokenField_BrokerID_length = 0;

    /// 经纪公司统一编码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcCFMMCTradingAccountTokenField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcCFMMCTradingAccountTokenField_ParticipantID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcCFMMCTradingAccountTokenField_AccountID = NULL;
    Py_ssize_t CThostFtdcCFMMCTradingAccountTokenField_AccountID_length = 0;

    /// 密钥编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcCFMMCTradingAccountTokenField_KeyID = 0;

    /// 动态令牌
    /// typedef char TThostFtdcCFMMCTokenType[21]
    char *CThostFtdcCFMMCTradingAccountTokenField_Token = NULL;
    Py_ssize_t CThostFtdcCFMMCTradingAccountTokenField_Token_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#", (char **)kwlist
        , &CThostFtdcCFMMCTradingAccountTokenField_BrokerID, &CThostFtdcCFMMCTradingAccountTokenField_BrokerID_length
        , &CThostFtdcCFMMCTradingAccountTokenField_ParticipantID, &CThostFtdcCFMMCTradingAccountTokenField_ParticipantID_length
        , &CThostFtdcCFMMCTradingAccountTokenField_AccountID, &CThostFtdcCFMMCTradingAccountTokenField_AccountID_length
        , &CThostFtdcCFMMCTradingAccountTokenField_KeyID
        , &CThostFtdcCFMMCTradingAccountTokenField_Token, &CThostFtdcCFMMCTradingAccountTokenField_Token_length
    )) {
        return -1;
    }

    PyCThostFtdcCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcCFMMCTradingAccountTokenField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcCFMMCTradingAccountTokenField_BrokerID != NULL ) {
        if(CThostFtdcCFMMCTradingAccountTokenField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcCFMMCTradingAccountTokenField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcCFMMCTradingAccountTokenField_BrokerID, CThostFtdcCFMMCTradingAccountTokenField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcCFMMCTradingAccountTokenField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcCFMMCTradingAccountTokenField_BrokerID = NULL;
    }

    /// 经纪公司统一编码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcCFMMCTradingAccountTokenField_ParticipantID != NULL ) {
        if(CThostFtdcCFMMCTradingAccountTokenField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcCFMMCTradingAccountTokenField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcCFMMCTradingAccountTokenField_ParticipantID, CThostFtdcCFMMCTradingAccountTokenField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcCFMMCTradingAccountTokenField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcCFMMCTradingAccountTokenField_ParticipantID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcCFMMCTradingAccountTokenField_AccountID != NULL ) {
        if(CThostFtdcCFMMCTradingAccountTokenField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcCFMMCTradingAccountTokenField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcCFMMCTradingAccountTokenField_AccountID, CThostFtdcCFMMCTradingAccountTokenField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcCFMMCTradingAccountTokenField_AccountID, sizeof(data->AccountID));
        CThostFtdcCFMMCTradingAccountTokenField_AccountID = NULL;
    }

    /// 密钥编号
    /// typedef int TThostFtdcSequenceNoType
    data->KeyID = CThostFtdcCFMMCTradingAccountTokenField_KeyID;

    /// 动态令牌
    /// typedef char TThostFtdcCFMMCTokenType[21]
    if( CThostFtdcCFMMCTradingAccountTokenField_Token != NULL ) {
        if(CThostFtdcCFMMCTradingAccountTokenField_Token_length >= (Py_ssize_t)sizeof(data->Token)) {
            PyErr_Format(PyExc_ValueError, "Token too long: length=%zd (max allowed is 20)", CThostFtdcCFMMCTradingAccountTokenField_Token_length);
            return -1;
        }
        // memset(data->Token, 0, sizeof(data->Token));
        // memcpy(data->Token, CThostFtdcCFMMCTradingAccountTokenField_Token, CThostFtdcCFMMCTradingAccountTokenField_Token_length);
        strncpy(data->Token, CThostFtdcCFMMCTradingAccountTokenField_Token, sizeof(data->Token));
        CThostFtdcCFMMCTradingAccountTokenField_Token = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCFMMCTradingAccountTokenFieldType_repr(PyObject *self) {

    PyCThostFtdcCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcCFMMCTradingAccountTokenField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "KeyID", data->KeyID
        , "Token", data->Token//, (Py_ssize_t)sizeof(data->Token)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCFMMCTradingAccountTokenField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCFMMCTradingAccountTokenField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcCFMMCTradingAccountTokenFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcCFMMCTradingAccountTokenField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcCFMMCTradingAccountTokenFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCTradingAccountTokenField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcCFMMCTradingAccountTokenField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司统一编码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcCFMMCTradingAccountTokenFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcCFMMCTradingAccountTokenField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcCFMMCTradingAccountTokenFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCTradingAccountTokenField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcCFMMCTradingAccountTokenField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcCFMMCTradingAccountTokenFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcCFMMCTradingAccountTokenField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcCFMMCTradingAccountTokenFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCTradingAccountTokenField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcCFMMCTradingAccountTokenField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 动态令牌
/// typedef char TThostFtdcCFMMCTokenType[21]
static PyObject *PyCThostFtdcCFMMCTradingAccountTokenFieldType_get_Token(PyObject *self, void *closure) {
    PyCThostFtdcCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcCFMMCTradingAccountTokenField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Token, (Py_ssize_t)sizeof(data->Token));
    return PyBytes_FromString(data->Token);
}

static int PyCThostFtdcCFMMCTradingAccountTokenFieldType_set_Token(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Token Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCFMMCTradingAccountTokenField::Token)) {
        PyErr_SetString(PyExc_ValueError, "Token must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcCFMMCTradingAccountTokenField *data = &(extra->data);
    // memset(data->Token, 0, sizeof(data->Token));
    // memcpy(data->Token, buf, len);
    strncpy(data->Token, buf, sizeof(data->Token));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCFMMCTradingAccountTokenFieldType_members[] = {
    /// 密钥编号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "KeyID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCFMMCTradingAccountTokenFieldData, data.KeyID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("密钥编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCFMMCTradingAccountTokenFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcCFMMCTradingAccountTokenFieldType_get_BrokerID,
    .set = PyCThostFtdcCFMMCTradingAccountTokenFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 经纪公司统一编码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcCFMMCTradingAccountTokenFieldType_get_ParticipantID,
    .set = PyCThostFtdcCFMMCTradingAccountTokenFieldType_set_ParticipantID,
    .doc = PyDoc_STR("经纪公司统一编码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcCFMMCTradingAccountTokenFieldType_get_AccountID,
    .set = PyCThostFtdcCFMMCTradingAccountTokenFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 动态令牌
    /// typedef char TThostFtdcCFMMCTokenType[21]
    {
    .name = "Token",
    .get = PyCThostFtdcCFMMCTradingAccountTokenFieldType_get_Token,
    .set = PyCThostFtdcCFMMCTradingAccountTokenFieldType_set_Token,
    .doc = PyDoc_STR("动态令牌"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCFMMCTradingAccountTokenFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCFMMCTradingAccountTokenField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("监控中心用户令牌")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCFMMCTradingAccountTokenFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCFMMCTradingAccountTokenFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCFMMCTradingAccountTokenFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCFMMCTradingAccountTokenFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCFMMCTradingAccountTokenFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCFMMCTradingAccountTokenFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("监控中心用户令牌")},
    {Py_tp_members, PyCThostFtdcCFMMCTradingAccountTokenFieldType_members},
    {Py_tp_getset, PyCThostFtdcCFMMCTradingAccountTokenFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCFMMCTradingAccountTokenFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCFMMCTradingAccountTokenFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCFMMCTradingAccountTokenFieldType_spec = {
    .name = "PyCTP.CThostFtdcCFMMCTradingAccountTokenField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCFMMCTradingAccountTokenFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCFMMCTradingAccountTokenFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCFMMCTradingAccountTokenFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCFMMCTradingAccountTokenFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCFMMCTradingAccountTokenFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCFMMCTradingAccountTokenFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCFMMCTradingAccountTokenFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCFMMCTradingAccountTokenFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCFMMCTradingAccountTokenField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCFMMCTradingAccountTokenField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}