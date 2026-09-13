
#include "PyCThostFtdcQryExchangeOrderActionField.h"

///查询交易所报单操作

static int PyCThostFtdcQryExchangeOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ParticipantID", "ClientID", "ExchangeID", "TraderID", NULL };


    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcQryExchangeOrderActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcQryExchangeOrderActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcQryExchangeOrderActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcQryExchangeOrderActionField_ClientID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryExchangeOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryExchangeOrderActionField_ExchangeID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcQryExchangeOrderActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcQryExchangeOrderActionField_TraderID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryExchangeOrderActionField_ParticipantID, &CThostFtdcQryExchangeOrderActionField_ParticipantID_length
        , &CThostFtdcQryExchangeOrderActionField_ClientID, &CThostFtdcQryExchangeOrderActionField_ClientID_length
        , &CThostFtdcQryExchangeOrderActionField_ExchangeID, &CThostFtdcQryExchangeOrderActionField_ExchangeID_length
        , &CThostFtdcQryExchangeOrderActionField_TraderID, &CThostFtdcQryExchangeOrderActionField_TraderID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeOrderActionFieldData>(self);
    CThostFtdcQryExchangeOrderActionField *data = &(extra->data);


    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcQryExchangeOrderActionField_ParticipantID != NULL ) {
        if(CThostFtdcQryExchangeOrderActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcQryExchangeOrderActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcQryExchangeOrderActionField_ParticipantID, CThostFtdcQryExchangeOrderActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcQryExchangeOrderActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcQryExchangeOrderActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcQryExchangeOrderActionField_ClientID != NULL ) {
        if(CThostFtdcQryExchangeOrderActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcQryExchangeOrderActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcQryExchangeOrderActionField_ClientID, CThostFtdcQryExchangeOrderActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcQryExchangeOrderActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcQryExchangeOrderActionField_ClientID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryExchangeOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcQryExchangeOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryExchangeOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryExchangeOrderActionField_ExchangeID, CThostFtdcQryExchangeOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryExchangeOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryExchangeOrderActionField_ExchangeID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcQryExchangeOrderActionField_TraderID != NULL ) {
        if(CThostFtdcQryExchangeOrderActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcQryExchangeOrderActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcQryExchangeOrderActionField_TraderID, CThostFtdcQryExchangeOrderActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcQryExchangeOrderActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcQryExchangeOrderActionField_TraderID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryExchangeOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeOrderActionFieldData>(self);
    CThostFtdcQryExchangeOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcQryExchangeOrderActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeOrderActionFieldData>(self);
    CThostFtdcQryExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcQryExchangeOrderActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeOrderActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeOrderActionFieldData>(self);
    CThostFtdcQryExchangeOrderActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcQryExchangeOrderActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeOrderActionFieldData>(self);
    CThostFtdcQryExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcQryExchangeOrderActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeOrderActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeOrderActionFieldData>(self);
    CThostFtdcQryExchangeOrderActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryExchangeOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeOrderActionFieldData>(self);
    CThostFtdcQryExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryExchangeOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeOrderActionFieldData>(self);
    CThostFtdcQryExchangeOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcQryExchangeOrderActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeOrderActionFieldData>(self);
    CThostFtdcQryExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcQryExchangeOrderActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeOrderActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeOrderActionFieldData>(self);
    CThostFtdcQryExchangeOrderActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryExchangeOrderActionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryExchangeOrderActionFieldType_getsets[] = {
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcQryExchangeOrderActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcQryExchangeOrderActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcQryExchangeOrderActionFieldType_get_ClientID,
    .set = PyCThostFtdcQryExchangeOrderActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryExchangeOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryExchangeOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcQryExchangeOrderActionFieldType_get_TraderID,
    .set = PyCThostFtdcQryExchangeOrderActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryExchangeOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryExchangeOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询交易所报单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryExchangeOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryExchangeOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryExchangeOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryExchangeOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryExchangeOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryExchangeOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询交易所报单操作")},
    {Py_tp_members, PyCThostFtdcQryExchangeOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryExchangeOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryExchangeOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryExchangeOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryExchangeOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryExchangeOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryExchangeOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryExchangeOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryExchangeOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryExchangeOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryExchangeOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryExchangeOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryExchangeOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryExchangeOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryExchangeOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}