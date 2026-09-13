
#include "PyCThostFtdcQryTraderField.h"

///查询交易员

static int PyCThostFtdcQryTraderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ParticipantID", "TraderID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryTraderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryTraderField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcQryTraderField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcQryTraderField_ParticipantID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcQryTraderField_TraderID = NULL;
    Py_ssize_t CThostFtdcQryTraderField_TraderID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryTraderField_ExchangeID, &CThostFtdcQryTraderField_ExchangeID_length
        , &CThostFtdcQryTraderField_ParticipantID, &CThostFtdcQryTraderField_ParticipantID_length
        , &CThostFtdcQryTraderField_TraderID, &CThostFtdcQryTraderField_TraderID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderFieldData>(self);
    CThostFtdcQryTraderField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryTraderField_ExchangeID != NULL ) {
        if(CThostFtdcQryTraderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryTraderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryTraderField_ExchangeID, CThostFtdcQryTraderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryTraderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryTraderField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcQryTraderField_ParticipantID != NULL ) {
        if(CThostFtdcQryTraderField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcQryTraderField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcQryTraderField_ParticipantID, CThostFtdcQryTraderField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcQryTraderField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcQryTraderField_ParticipantID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcQryTraderField_TraderID != NULL ) {
        if(CThostFtdcQryTraderField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcQryTraderField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcQryTraderField_TraderID, CThostFtdcQryTraderField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcQryTraderField_TraderID, sizeof(data->TraderID));
        CThostFtdcQryTraderField_TraderID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryTraderFieldType_repr(PyObject *self) {

    PyCThostFtdcQryTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderFieldData>(self);
    CThostFtdcQryTraderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTraderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTraderField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryTraderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderFieldData>(self);
    CThostFtdcQryTraderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryTraderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTraderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderFieldData>(self);
    CThostFtdcQryTraderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcQryTraderFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcQryTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderFieldData>(self);
    CThostFtdcQryTraderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcQryTraderFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTraderField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderFieldData>(self);
    CThostFtdcQryTraderField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcQryTraderFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcQryTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderFieldData>(self);
    CThostFtdcQryTraderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcQryTraderFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTraderField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTraderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderFieldData>(self);
    CThostFtdcQryTraderField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryTraderFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryTraderFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryTraderFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryTraderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcQryTraderFieldType_get_ParticipantID,
    .set = PyCThostFtdcQryTraderFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcQryTraderFieldType_get_TraderID,
    .set = PyCThostFtdcQryTraderFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryTraderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryTraderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询交易员")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryTraderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryTraderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryTraderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryTraderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryTraderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryTraderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询交易员")},
    {Py_tp_members, PyCThostFtdcQryTraderFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryTraderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryTraderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryTraderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryTraderFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryTraderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryTraderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryTraderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryTraderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryTraderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryTraderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryTraderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryTraderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryTraderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryTraderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTraderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}