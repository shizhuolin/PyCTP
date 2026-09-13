
#include "PyCThostFtdcQryMDTraderOfferField.h"

///查询行情报盘机

static int PyCThostFtdcQryMDTraderOfferFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ParticipantID", "TraderID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryMDTraderOfferField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryMDTraderOfferField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcQryMDTraderOfferField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcQryMDTraderOfferField_ParticipantID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcQryMDTraderOfferField_TraderID = NULL;
    Py_ssize_t CThostFtdcQryMDTraderOfferField_TraderID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryMDTraderOfferField_ExchangeID, &CThostFtdcQryMDTraderOfferField_ExchangeID_length
        , &CThostFtdcQryMDTraderOfferField_ParticipantID, &CThostFtdcQryMDTraderOfferField_ParticipantID_length
        , &CThostFtdcQryMDTraderOfferField_TraderID, &CThostFtdcQryMDTraderOfferField_TraderID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMDTraderOfferFieldData>(self);
    CThostFtdcQryMDTraderOfferField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryMDTraderOfferField_ExchangeID != NULL ) {
        if(CThostFtdcQryMDTraderOfferField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryMDTraderOfferField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryMDTraderOfferField_ExchangeID, CThostFtdcQryMDTraderOfferField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryMDTraderOfferField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryMDTraderOfferField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcQryMDTraderOfferField_ParticipantID != NULL ) {
        if(CThostFtdcQryMDTraderOfferField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcQryMDTraderOfferField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcQryMDTraderOfferField_ParticipantID, CThostFtdcQryMDTraderOfferField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcQryMDTraderOfferField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcQryMDTraderOfferField_ParticipantID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcQryMDTraderOfferField_TraderID != NULL ) {
        if(CThostFtdcQryMDTraderOfferField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcQryMDTraderOfferField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcQryMDTraderOfferField_TraderID, CThostFtdcQryMDTraderOfferField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcQryMDTraderOfferField_TraderID, sizeof(data->TraderID));
        CThostFtdcQryMDTraderOfferField_TraderID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryMDTraderOfferFieldType_repr(PyObject *self) {

    PyCThostFtdcQryMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMDTraderOfferFieldData>(self);
    CThostFtdcQryMDTraderOfferField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMDTraderOfferField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMDTraderOfferField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryMDTraderOfferFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMDTraderOfferFieldData>(self);
    CThostFtdcQryMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryMDTraderOfferFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMDTraderOfferField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMDTraderOfferFieldData>(self);
    CThostFtdcQryMDTraderOfferField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcQryMDTraderOfferFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcQryMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMDTraderOfferFieldData>(self);
    CThostFtdcQryMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcQryMDTraderOfferFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMDTraderOfferField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMDTraderOfferFieldData>(self);
    CThostFtdcQryMDTraderOfferField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcQryMDTraderOfferFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcQryMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMDTraderOfferFieldData>(self);
    CThostFtdcQryMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcQryMDTraderOfferFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMDTraderOfferField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMDTraderOfferFieldData>(self);
    CThostFtdcQryMDTraderOfferField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryMDTraderOfferFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryMDTraderOfferFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryMDTraderOfferFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryMDTraderOfferFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcQryMDTraderOfferFieldType_get_ParticipantID,
    .set = PyCThostFtdcQryMDTraderOfferFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcQryMDTraderOfferFieldType_get_TraderID,
    .set = PyCThostFtdcQryMDTraderOfferFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryMDTraderOfferFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryMDTraderOfferField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询行情报盘机")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryMDTraderOfferFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryMDTraderOfferFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryMDTraderOfferFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryMDTraderOfferFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryMDTraderOfferFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryMDTraderOfferFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询行情报盘机")},
    {Py_tp_members, PyCThostFtdcQryMDTraderOfferFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryMDTraderOfferFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryMDTraderOfferFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryMDTraderOfferFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryMDTraderOfferFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryMDTraderOfferField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryMDTraderOfferFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryMDTraderOfferFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryMDTraderOfferFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryMDTraderOfferFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryMDTraderOfferFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryMDTraderOfferFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryMDTraderOfferFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryMDTraderOfferFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryMDTraderOfferField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMDTraderOfferField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}