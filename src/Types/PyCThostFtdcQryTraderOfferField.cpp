
#include "PyCThostFtdcQryTraderOfferField.h"

///查询交易员报盘机

static int PyCThostFtdcQryTraderOfferFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ParticipantID", "TraderID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryTraderOfferField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryTraderOfferField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcQryTraderOfferField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcQryTraderOfferField_ParticipantID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcQryTraderOfferField_TraderID = NULL;
    Py_ssize_t CThostFtdcQryTraderOfferField_TraderID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryTraderOfferField_ExchangeID, &CThostFtdcQryTraderOfferField_ExchangeID_length
        , &CThostFtdcQryTraderOfferField_ParticipantID, &CThostFtdcQryTraderOfferField_ParticipantID_length
        , &CThostFtdcQryTraderOfferField_TraderID, &CThostFtdcQryTraderOfferField_TraderID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderOfferFieldData>(self);
    CThostFtdcQryTraderOfferField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryTraderOfferField_ExchangeID != NULL ) {
        if(CThostFtdcQryTraderOfferField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryTraderOfferField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryTraderOfferField_ExchangeID, CThostFtdcQryTraderOfferField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryTraderOfferField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryTraderOfferField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcQryTraderOfferField_ParticipantID != NULL ) {
        if(CThostFtdcQryTraderOfferField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcQryTraderOfferField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcQryTraderOfferField_ParticipantID, CThostFtdcQryTraderOfferField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcQryTraderOfferField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcQryTraderOfferField_ParticipantID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcQryTraderOfferField_TraderID != NULL ) {
        if(CThostFtdcQryTraderOfferField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcQryTraderOfferField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcQryTraderOfferField_TraderID, CThostFtdcQryTraderOfferField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcQryTraderOfferField_TraderID, sizeof(data->TraderID));
        CThostFtdcQryTraderOfferField_TraderID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryTraderOfferFieldType_repr(PyObject *self) {

    PyCThostFtdcQryTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderOfferFieldData>(self);
    CThostFtdcQryTraderOfferField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTraderOfferField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTraderOfferField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryTraderOfferFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderOfferFieldData>(self);
    CThostFtdcQryTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryTraderOfferFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTraderOfferField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderOfferFieldData>(self);
    CThostFtdcQryTraderOfferField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcQryTraderOfferFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcQryTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderOfferFieldData>(self);
    CThostFtdcQryTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcQryTraderOfferFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTraderOfferField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderOfferFieldData>(self);
    CThostFtdcQryTraderOfferField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcQryTraderOfferFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcQryTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderOfferFieldData>(self);
    CThostFtdcQryTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcQryTraderOfferFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTraderOfferField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderOfferFieldData>(self);
    CThostFtdcQryTraderOfferField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryTraderOfferFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryTraderOfferFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryTraderOfferFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryTraderOfferFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcQryTraderOfferFieldType_get_ParticipantID,
    .set = PyCThostFtdcQryTraderOfferFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcQryTraderOfferFieldType_get_TraderID,
    .set = PyCThostFtdcQryTraderOfferFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryTraderOfferFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryTraderOfferField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询交易员报盘机")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryTraderOfferFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryTraderOfferFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryTraderOfferFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryTraderOfferFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryTraderOfferFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryTraderOfferFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询交易员报盘机")},
    {Py_tp_members, PyCThostFtdcQryTraderOfferFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryTraderOfferFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryTraderOfferFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryTraderOfferFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryTraderOfferFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryTraderOfferField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryTraderOfferFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryTraderOfferFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryTraderOfferFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryTraderOfferFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryTraderOfferFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryTraderOfferFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryTraderOfferFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryTraderOfferFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryTraderOfferField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTraderOfferField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}