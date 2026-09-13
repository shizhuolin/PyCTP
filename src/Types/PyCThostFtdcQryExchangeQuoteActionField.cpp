
#include "PyCThostFtdcQryExchangeQuoteActionField.h"

///交易所报价操作查询

static int PyCThostFtdcQryExchangeQuoteActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ParticipantID", "ClientID", "ExchangeID", "TraderID", NULL };


    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcQryExchangeQuoteActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcQryExchangeQuoteActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcQryExchangeQuoteActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcQryExchangeQuoteActionField_ClientID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryExchangeQuoteActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryExchangeQuoteActionField_ExchangeID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcQryExchangeQuoteActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcQryExchangeQuoteActionField_TraderID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryExchangeQuoteActionField_ParticipantID, &CThostFtdcQryExchangeQuoteActionField_ParticipantID_length
        , &CThostFtdcQryExchangeQuoteActionField_ClientID, &CThostFtdcQryExchangeQuoteActionField_ClientID_length
        , &CThostFtdcQryExchangeQuoteActionField_ExchangeID, &CThostFtdcQryExchangeQuoteActionField_ExchangeID_length
        , &CThostFtdcQryExchangeQuoteActionField_TraderID, &CThostFtdcQryExchangeQuoteActionField_TraderID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeQuoteActionFieldData>(self);
    CThostFtdcQryExchangeQuoteActionField *data = &(extra->data);


    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcQryExchangeQuoteActionField_ParticipantID != NULL ) {
        if(CThostFtdcQryExchangeQuoteActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcQryExchangeQuoteActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcQryExchangeQuoteActionField_ParticipantID, CThostFtdcQryExchangeQuoteActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcQryExchangeQuoteActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcQryExchangeQuoteActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcQryExchangeQuoteActionField_ClientID != NULL ) {
        if(CThostFtdcQryExchangeQuoteActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcQryExchangeQuoteActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcQryExchangeQuoteActionField_ClientID, CThostFtdcQryExchangeQuoteActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcQryExchangeQuoteActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcQryExchangeQuoteActionField_ClientID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryExchangeQuoteActionField_ExchangeID != NULL ) {
        if(CThostFtdcQryExchangeQuoteActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryExchangeQuoteActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryExchangeQuoteActionField_ExchangeID, CThostFtdcQryExchangeQuoteActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryExchangeQuoteActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryExchangeQuoteActionField_ExchangeID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcQryExchangeQuoteActionField_TraderID != NULL ) {
        if(CThostFtdcQryExchangeQuoteActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcQryExchangeQuoteActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcQryExchangeQuoteActionField_TraderID, CThostFtdcQryExchangeQuoteActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcQryExchangeQuoteActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcQryExchangeQuoteActionField_TraderID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryExchangeQuoteActionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeQuoteActionFieldData>(self);
    CThostFtdcQryExchangeQuoteActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeQuoteActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeQuoteActionField repr");
        return NULL;
    }

    return repr;
}


/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcQryExchangeQuoteActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeQuoteActionFieldData>(self);
    CThostFtdcQryExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcQryExchangeQuoteActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeQuoteActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeQuoteActionFieldData>(self);
    CThostFtdcQryExchangeQuoteActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcQryExchangeQuoteActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeQuoteActionFieldData>(self);
    CThostFtdcQryExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcQryExchangeQuoteActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeQuoteActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeQuoteActionFieldData>(self);
    CThostFtdcQryExchangeQuoteActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryExchangeQuoteActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeQuoteActionFieldData>(self);
    CThostFtdcQryExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryExchangeQuoteActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeQuoteActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeQuoteActionFieldData>(self);
    CThostFtdcQryExchangeQuoteActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcQryExchangeQuoteActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeQuoteActionFieldData>(self);
    CThostFtdcQryExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcQryExchangeQuoteActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeQuoteActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeQuoteActionFieldData>(self);
    CThostFtdcQryExchangeQuoteActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryExchangeQuoteActionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryExchangeQuoteActionFieldType_getsets[] = {
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcQryExchangeQuoteActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcQryExchangeQuoteActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcQryExchangeQuoteActionFieldType_get_ClientID,
    .set = PyCThostFtdcQryExchangeQuoteActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryExchangeQuoteActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryExchangeQuoteActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcQryExchangeQuoteActionFieldType_get_TraderID,
    .set = PyCThostFtdcQryExchangeQuoteActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryExchangeQuoteActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryExchangeQuoteActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所报价操作查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryExchangeQuoteActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryExchangeQuoteActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryExchangeQuoteActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryExchangeQuoteActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryExchangeQuoteActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryExchangeQuoteActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所报价操作查询")},
    {Py_tp_members, PyCThostFtdcQryExchangeQuoteActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryExchangeQuoteActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryExchangeQuoteActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryExchangeQuoteActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryExchangeQuoteActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryExchangeQuoteActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryExchangeQuoteActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryExchangeQuoteActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryExchangeQuoteActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryExchangeQuoteActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryExchangeQuoteActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryExchangeQuoteActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryExchangeQuoteActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryExchangeQuoteActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryExchangeQuoteActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeQuoteActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}