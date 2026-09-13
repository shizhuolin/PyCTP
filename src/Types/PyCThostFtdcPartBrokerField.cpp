
#include "PyCThostFtdcPartBrokerField.h"

///会员编码和经纪公司编码对照表

static int PyCThostFtdcPartBrokerFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "ExchangeID", "ParticipantID", "IsActive", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcPartBrokerField_BrokerID = NULL;
    Py_ssize_t CThostFtdcPartBrokerField_BrokerID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcPartBrokerField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcPartBrokerField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcPartBrokerField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcPartBrokerField_ParticipantID_length = 0;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    int CThostFtdcPartBrokerField_IsActive = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
        , &CThostFtdcPartBrokerField_BrokerID, &CThostFtdcPartBrokerField_BrokerID_length
        , &CThostFtdcPartBrokerField_ExchangeID, &CThostFtdcPartBrokerField_ExchangeID_length
        , &CThostFtdcPartBrokerField_ParticipantID, &CThostFtdcPartBrokerField_ParticipantID_length
        , &CThostFtdcPartBrokerField_IsActive
    )) {
        return -1;
    }

    PyCThostFtdcPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPartBrokerFieldData>(self);
    CThostFtdcPartBrokerField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcPartBrokerField_BrokerID != NULL ) {
        if(CThostFtdcPartBrokerField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcPartBrokerField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcPartBrokerField_BrokerID, CThostFtdcPartBrokerField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcPartBrokerField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcPartBrokerField_BrokerID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcPartBrokerField_ExchangeID != NULL ) {
        if(CThostFtdcPartBrokerField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcPartBrokerField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcPartBrokerField_ExchangeID, CThostFtdcPartBrokerField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcPartBrokerField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcPartBrokerField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcPartBrokerField_ParticipantID != NULL ) {
        if(CThostFtdcPartBrokerField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcPartBrokerField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcPartBrokerField_ParticipantID, CThostFtdcPartBrokerField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcPartBrokerField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcPartBrokerField_ParticipantID = NULL;
    }

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    data->IsActive = CThostFtdcPartBrokerField_IsActive;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcPartBrokerFieldType_repr(PyObject *self) {

    PyCThostFtdcPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPartBrokerFieldData>(self);
    CThostFtdcPartBrokerField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "IsActive", data->IsActive
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcPartBrokerField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcPartBrokerField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcPartBrokerFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPartBrokerFieldData>(self);
    CThostFtdcPartBrokerField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcPartBrokerFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcPartBrokerField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPartBrokerFieldData>(self);
    CThostFtdcPartBrokerField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcPartBrokerFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPartBrokerFieldData>(self);
    CThostFtdcPartBrokerField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcPartBrokerFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcPartBrokerField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPartBrokerFieldData>(self);
    CThostFtdcPartBrokerField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcPartBrokerFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPartBrokerFieldData>(self);
    CThostFtdcPartBrokerField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcPartBrokerFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcPartBrokerField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPartBrokerFieldData>(self);
    CThostFtdcPartBrokerField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcPartBrokerFieldType_members[] = {
    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActive",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcPartBrokerFieldData, data.IsActive),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否活跃")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcPartBrokerFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcPartBrokerFieldType_get_BrokerID,
    .set = PyCThostFtdcPartBrokerFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcPartBrokerFieldType_get_ExchangeID,
    .set = PyCThostFtdcPartBrokerFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcPartBrokerFieldType_get_ParticipantID,
    .set = PyCThostFtdcPartBrokerFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcPartBrokerFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcPartBrokerField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("会员编码和经纪公司编码对照表")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcPartBrokerFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcPartBrokerFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcPartBrokerFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcPartBrokerFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcPartBrokerFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcPartBrokerFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("会员编码和经纪公司编码对照表")},
    {Py_tp_members, PyCThostFtdcPartBrokerFieldType_members},
    {Py_tp_getset, PyCThostFtdcPartBrokerFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcPartBrokerFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcPartBrokerFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcPartBrokerFieldType_spec = {
    .name = "PyCTP.CThostFtdcPartBrokerField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcPartBrokerFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcPartBrokerFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcPartBrokerFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcPartBrokerFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcPartBrokerFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcPartBrokerFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcPartBrokerFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcPartBrokerFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcPartBrokerField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcPartBrokerField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}