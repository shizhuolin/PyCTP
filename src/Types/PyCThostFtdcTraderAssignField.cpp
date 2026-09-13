
#include "PyCThostFtdcTraderAssignField.h"

///席位与交易中心对应关系

static int PyCThostFtdcTraderAssignFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "ExchangeID", "TraderID", "ParticipantID", "DRIdentityID", NULL };


    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTraderAssignField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTraderAssignField_BrokerID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcTraderAssignField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcTraderAssignField_ExchangeID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcTraderAssignField_TraderID = NULL;
    Py_ssize_t CThostFtdcTraderAssignField_TraderID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcTraderAssignField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcTraderAssignField_ParticipantID_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcTraderAssignField_DRIdentityID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
        , &CThostFtdcTraderAssignField_BrokerID, &CThostFtdcTraderAssignField_BrokerID_length
        , &CThostFtdcTraderAssignField_ExchangeID, &CThostFtdcTraderAssignField_ExchangeID_length
        , &CThostFtdcTraderAssignField_TraderID, &CThostFtdcTraderAssignField_TraderID_length
        , &CThostFtdcTraderAssignField_ParticipantID, &CThostFtdcTraderAssignField_ParticipantID_length
        , &CThostFtdcTraderAssignField_DRIdentityID
    )) {
        return -1;
    }

    PyCThostFtdcTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderAssignFieldData>(self);
    CThostFtdcTraderAssignField *data = &(extra->data);


    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTraderAssignField_BrokerID != NULL ) {
        if(CThostFtdcTraderAssignField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTraderAssignField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTraderAssignField_BrokerID, CThostFtdcTraderAssignField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTraderAssignField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTraderAssignField_BrokerID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcTraderAssignField_ExchangeID != NULL ) {
        if(CThostFtdcTraderAssignField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcTraderAssignField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcTraderAssignField_ExchangeID, CThostFtdcTraderAssignField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcTraderAssignField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcTraderAssignField_ExchangeID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcTraderAssignField_TraderID != NULL ) {
        if(CThostFtdcTraderAssignField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcTraderAssignField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcTraderAssignField_TraderID, CThostFtdcTraderAssignField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcTraderAssignField_TraderID, sizeof(data->TraderID));
        CThostFtdcTraderAssignField_TraderID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcTraderAssignField_ParticipantID != NULL ) {
        if(CThostFtdcTraderAssignField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcTraderAssignField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcTraderAssignField_ParticipantID, CThostFtdcTraderAssignField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcTraderAssignField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcTraderAssignField_ParticipantID = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcTraderAssignField_DRIdentityID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTraderAssignFieldType_repr(PyObject *self) {

    PyCThostFtdcTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderAssignFieldData>(self);
    CThostFtdcTraderAssignField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "DRIdentityID", data->DRIdentityID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTraderAssignField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTraderAssignField repr");
        return NULL;
    }

    return repr;
}


/// 应用单元代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTraderAssignFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderAssignFieldData>(self);
    CThostFtdcTraderAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTraderAssignFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTraderAssignField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderAssignFieldData>(self);
    CThostFtdcTraderAssignField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcTraderAssignFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderAssignFieldData>(self);
    CThostFtdcTraderAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcTraderAssignFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTraderAssignField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderAssignFieldData>(self);
    CThostFtdcTraderAssignField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcTraderAssignFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderAssignFieldData>(self);
    CThostFtdcTraderAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcTraderAssignFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTraderAssignField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderAssignFieldData>(self);
    CThostFtdcTraderAssignField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcTraderAssignFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderAssignFieldData>(self);
    CThostFtdcTraderAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcTraderAssignFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTraderAssignField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderAssignFieldData>(self);
    CThostFtdcTraderAssignField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTraderAssignFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTraderAssignFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTraderAssignFieldType_getsets[] = {
    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTraderAssignFieldType_get_BrokerID,
    .set = PyCThostFtdcTraderAssignFieldType_set_BrokerID,
    .doc = PyDoc_STR("应用单元代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcTraderAssignFieldType_get_ExchangeID,
    .set = PyCThostFtdcTraderAssignFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcTraderAssignFieldType_get_TraderID,
    .set = PyCThostFtdcTraderAssignFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcTraderAssignFieldType_get_ParticipantID,
    .set = PyCThostFtdcTraderAssignFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTraderAssignFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTraderAssignField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("席位与交易中心对应关系")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTraderAssignFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTraderAssignFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTraderAssignFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTraderAssignFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTraderAssignFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTraderAssignFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("席位与交易中心对应关系")},
    {Py_tp_members, PyCThostFtdcTraderAssignFieldType_members},
    {Py_tp_getset, PyCThostFtdcTraderAssignFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTraderAssignFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTraderAssignFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTraderAssignFieldType_spec = {
    .name = "PyCTP.CThostFtdcTraderAssignField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTraderAssignFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTraderAssignFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTraderAssignFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTraderAssignFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTraderAssignFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTraderAssignFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTraderAssignFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTraderAssignFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTraderAssignField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTraderAssignField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}