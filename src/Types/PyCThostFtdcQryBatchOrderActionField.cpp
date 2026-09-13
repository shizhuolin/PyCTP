
#include "PyCThostFtdcQryBatchOrderActionField.h"

///查询批量报单操作

static int PyCThostFtdcQryBatchOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExchangeID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryBatchOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryBatchOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryBatchOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryBatchOrderActionField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryBatchOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryBatchOrderActionField_ExchangeID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryBatchOrderActionField_BrokerID, &CThostFtdcQryBatchOrderActionField_BrokerID_length
        , &CThostFtdcQryBatchOrderActionField_InvestorID, &CThostFtdcQryBatchOrderActionField_InvestorID_length
        , &CThostFtdcQryBatchOrderActionField_ExchangeID, &CThostFtdcQryBatchOrderActionField_ExchangeID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBatchOrderActionFieldData>(self);
    CThostFtdcQryBatchOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryBatchOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcQryBatchOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryBatchOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryBatchOrderActionField_BrokerID, CThostFtdcQryBatchOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryBatchOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryBatchOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryBatchOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcQryBatchOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryBatchOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryBatchOrderActionField_InvestorID, CThostFtdcQryBatchOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryBatchOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryBatchOrderActionField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryBatchOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcQryBatchOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryBatchOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryBatchOrderActionField_ExchangeID, CThostFtdcQryBatchOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryBatchOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryBatchOrderActionField_ExchangeID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryBatchOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBatchOrderActionFieldData>(self);
    CThostFtdcQryBatchOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBatchOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBatchOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryBatchOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBatchOrderActionFieldData>(self);
    CThostFtdcQryBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryBatchOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBatchOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBatchOrderActionFieldData>(self);
    CThostFtdcQryBatchOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryBatchOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBatchOrderActionFieldData>(self);
    CThostFtdcQryBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryBatchOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBatchOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBatchOrderActionFieldData>(self);
    CThostFtdcQryBatchOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryBatchOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBatchOrderActionFieldData>(self);
    CThostFtdcQryBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryBatchOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBatchOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBatchOrderActionFieldData>(self);
    CThostFtdcQryBatchOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryBatchOrderActionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryBatchOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryBatchOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryBatchOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryBatchOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcQryBatchOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryBatchOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryBatchOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryBatchOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryBatchOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询批量报单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryBatchOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryBatchOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryBatchOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryBatchOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryBatchOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryBatchOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询批量报单操作")},
    {Py_tp_members, PyCThostFtdcQryBatchOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryBatchOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryBatchOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryBatchOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryBatchOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryBatchOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryBatchOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryBatchOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryBatchOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryBatchOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryBatchOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryBatchOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryBatchOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryBatchOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryBatchOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBatchOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}