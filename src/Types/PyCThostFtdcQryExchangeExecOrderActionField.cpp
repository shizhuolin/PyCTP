
#include "PyCThostFtdcQryExchangeExecOrderActionField.h"

///交易所执行宣告操作查询

static int PyCThostFtdcQryExchangeExecOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ParticipantID", "ClientID", "ExchangeID", "TraderID", NULL };


    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcQryExchangeExecOrderActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcQryExchangeExecOrderActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcQryExchangeExecOrderActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcQryExchangeExecOrderActionField_ClientID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryExchangeExecOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryExchangeExecOrderActionField_ExchangeID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcQryExchangeExecOrderActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcQryExchangeExecOrderActionField_TraderID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryExchangeExecOrderActionField_ParticipantID, &CThostFtdcQryExchangeExecOrderActionField_ParticipantID_length
        , &CThostFtdcQryExchangeExecOrderActionField_ClientID, &CThostFtdcQryExchangeExecOrderActionField_ClientID_length
        , &CThostFtdcQryExchangeExecOrderActionField_ExchangeID, &CThostFtdcQryExchangeExecOrderActionField_ExchangeID_length
        , &CThostFtdcQryExchangeExecOrderActionField_TraderID, &CThostFtdcQryExchangeExecOrderActionField_TraderID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderActionFieldData>(self);
    CThostFtdcQryExchangeExecOrderActionField *data = &(extra->data);


    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcQryExchangeExecOrderActionField_ParticipantID != NULL ) {
        if(CThostFtdcQryExchangeExecOrderActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcQryExchangeExecOrderActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcQryExchangeExecOrderActionField_ParticipantID, CThostFtdcQryExchangeExecOrderActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcQryExchangeExecOrderActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcQryExchangeExecOrderActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcQryExchangeExecOrderActionField_ClientID != NULL ) {
        if(CThostFtdcQryExchangeExecOrderActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcQryExchangeExecOrderActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcQryExchangeExecOrderActionField_ClientID, CThostFtdcQryExchangeExecOrderActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcQryExchangeExecOrderActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcQryExchangeExecOrderActionField_ClientID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryExchangeExecOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcQryExchangeExecOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryExchangeExecOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryExchangeExecOrderActionField_ExchangeID, CThostFtdcQryExchangeExecOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryExchangeExecOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryExchangeExecOrderActionField_ExchangeID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcQryExchangeExecOrderActionField_TraderID != NULL ) {
        if(CThostFtdcQryExchangeExecOrderActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcQryExchangeExecOrderActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcQryExchangeExecOrderActionField_TraderID, CThostFtdcQryExchangeExecOrderActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcQryExchangeExecOrderActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcQryExchangeExecOrderActionField_TraderID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryExchangeExecOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderActionFieldData>(self);
    CThostFtdcQryExchangeExecOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeExecOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeExecOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcQryExchangeExecOrderActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderActionFieldData>(self);
    CThostFtdcQryExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcQryExchangeExecOrderActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeExecOrderActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderActionFieldData>(self);
    CThostFtdcQryExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcQryExchangeExecOrderActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderActionFieldData>(self);
    CThostFtdcQryExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcQryExchangeExecOrderActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeExecOrderActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderActionFieldData>(self);
    CThostFtdcQryExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryExchangeExecOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderActionFieldData>(self);
    CThostFtdcQryExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryExchangeExecOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeExecOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderActionFieldData>(self);
    CThostFtdcQryExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcQryExchangeExecOrderActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderActionFieldData>(self);
    CThostFtdcQryExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcQryExchangeExecOrderActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeExecOrderActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderActionFieldData>(self);
    CThostFtdcQryExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryExchangeExecOrderActionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryExchangeExecOrderActionFieldType_getsets[] = {
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcQryExchangeExecOrderActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcQryExchangeExecOrderActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcQryExchangeExecOrderActionFieldType_get_ClientID,
    .set = PyCThostFtdcQryExchangeExecOrderActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryExchangeExecOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryExchangeExecOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcQryExchangeExecOrderActionFieldType_get_TraderID,
    .set = PyCThostFtdcQryExchangeExecOrderActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryExchangeExecOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryExchangeExecOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所执行宣告操作查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryExchangeExecOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryExchangeExecOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryExchangeExecOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryExchangeExecOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryExchangeExecOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryExchangeExecOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所执行宣告操作查询")},
    {Py_tp_members, PyCThostFtdcQryExchangeExecOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryExchangeExecOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryExchangeExecOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryExchangeExecOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryExchangeExecOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryExchangeExecOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryExchangeExecOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryExchangeExecOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryExchangeExecOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryExchangeExecOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryExchangeExecOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryExchangeExecOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryExchangeExecOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryExchangeExecOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryExchangeExecOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeExecOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}