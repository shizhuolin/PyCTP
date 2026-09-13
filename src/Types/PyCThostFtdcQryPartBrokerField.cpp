
#include "PyCThostFtdcQryPartBrokerField.h"

///查询经纪公司会员代码

static int PyCThostFtdcQryPartBrokerFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "ParticipantID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryPartBrokerField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryPartBrokerField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryPartBrokerField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryPartBrokerField_BrokerID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcQryPartBrokerField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcQryPartBrokerField_ParticipantID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryPartBrokerField_ExchangeID, &CThostFtdcQryPartBrokerField_ExchangeID_length
        , &CThostFtdcQryPartBrokerField_BrokerID, &CThostFtdcQryPartBrokerField_BrokerID_length
        , &CThostFtdcQryPartBrokerField_ParticipantID, &CThostFtdcQryPartBrokerField_ParticipantID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryPartBrokerFieldData>(self);
    CThostFtdcQryPartBrokerField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryPartBrokerField_ExchangeID != NULL ) {
        if(CThostFtdcQryPartBrokerField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryPartBrokerField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryPartBrokerField_ExchangeID, CThostFtdcQryPartBrokerField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryPartBrokerField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryPartBrokerField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryPartBrokerField_BrokerID != NULL ) {
        if(CThostFtdcQryPartBrokerField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryPartBrokerField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryPartBrokerField_BrokerID, CThostFtdcQryPartBrokerField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryPartBrokerField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryPartBrokerField_BrokerID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcQryPartBrokerField_ParticipantID != NULL ) {
        if(CThostFtdcQryPartBrokerField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcQryPartBrokerField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcQryPartBrokerField_ParticipantID, CThostFtdcQryPartBrokerField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcQryPartBrokerField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcQryPartBrokerField_ParticipantID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryPartBrokerFieldType_repr(PyObject *self) {

    PyCThostFtdcQryPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryPartBrokerFieldData>(self);
    CThostFtdcQryPartBrokerField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryPartBrokerField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryPartBrokerField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryPartBrokerFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryPartBrokerFieldData>(self);
    CThostFtdcQryPartBrokerField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryPartBrokerFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryPartBrokerField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryPartBrokerFieldData>(self);
    CThostFtdcQryPartBrokerField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryPartBrokerFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryPartBrokerFieldData>(self);
    CThostFtdcQryPartBrokerField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryPartBrokerFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryPartBrokerField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryPartBrokerFieldData>(self);
    CThostFtdcQryPartBrokerField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcQryPartBrokerFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcQryPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryPartBrokerFieldData>(self);
    CThostFtdcQryPartBrokerField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcQryPartBrokerFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryPartBrokerField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryPartBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryPartBrokerFieldData>(self);
    CThostFtdcQryPartBrokerField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryPartBrokerFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryPartBrokerFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryPartBrokerFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryPartBrokerFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryPartBrokerFieldType_get_BrokerID,
    .set = PyCThostFtdcQryPartBrokerFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcQryPartBrokerFieldType_get_ParticipantID,
    .set = PyCThostFtdcQryPartBrokerFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryPartBrokerFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryPartBrokerField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询经纪公司会员代码")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryPartBrokerFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryPartBrokerFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryPartBrokerFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryPartBrokerFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryPartBrokerFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryPartBrokerFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询经纪公司会员代码")},
    {Py_tp_members, PyCThostFtdcQryPartBrokerFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryPartBrokerFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryPartBrokerFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryPartBrokerFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryPartBrokerFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryPartBrokerField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryPartBrokerFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryPartBrokerFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryPartBrokerFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryPartBrokerFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryPartBrokerFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryPartBrokerFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryPartBrokerFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryPartBrokerFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryPartBrokerField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryPartBrokerField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}