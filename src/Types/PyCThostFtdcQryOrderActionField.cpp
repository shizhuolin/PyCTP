
#include "PyCThostFtdcQryOrderActionField.h"

///查询报单操作

static int PyCThostFtdcQryOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExchangeID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryOrderActionField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryOrderActionField_ExchangeID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryOrderActionField_BrokerID, &CThostFtdcQryOrderActionField_BrokerID_length
        , &CThostFtdcQryOrderActionField_InvestorID, &CThostFtdcQryOrderActionField_InvestorID_length
        , &CThostFtdcQryOrderActionField_ExchangeID, &CThostFtdcQryOrderActionField_ExchangeID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderActionFieldData>(self);
    CThostFtdcQryOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcQryOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryOrderActionField_BrokerID, CThostFtdcQryOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcQryOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryOrderActionField_InvestorID, CThostFtdcQryOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryOrderActionField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcQryOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryOrderActionField_ExchangeID, CThostFtdcQryOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryOrderActionField_ExchangeID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderActionFieldData>(self);
    CThostFtdcQryOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderActionFieldData>(self);
    CThostFtdcQryOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderActionFieldData>(self);
    CThostFtdcQryOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderActionFieldData>(self);
    CThostFtdcQryOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderActionFieldData>(self);
    CThostFtdcQryOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderActionFieldData>(self);
    CThostFtdcQryOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderActionFieldData>(self);
    CThostFtdcQryOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryOrderActionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcQryOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询报单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询报单操作")},
    {Py_tp_members, PyCThostFtdcQryOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}