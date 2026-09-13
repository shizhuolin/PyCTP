
#include "PyCThostFtdcQryOptionSelfCloseActionField.h"

///期权自对冲操作查询

static int PyCThostFtdcQryOptionSelfCloseActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExchangeID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryOptionSelfCloseActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryOptionSelfCloseActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryOptionSelfCloseActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryOptionSelfCloseActionField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryOptionSelfCloseActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryOptionSelfCloseActionField_ExchangeID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryOptionSelfCloseActionField_BrokerID, &CThostFtdcQryOptionSelfCloseActionField_BrokerID_length
        , &CThostFtdcQryOptionSelfCloseActionField_InvestorID, &CThostFtdcQryOptionSelfCloseActionField_InvestorID_length
        , &CThostFtdcQryOptionSelfCloseActionField_ExchangeID, &CThostFtdcQryOptionSelfCloseActionField_ExchangeID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseActionFieldData>(self);
    CThostFtdcQryOptionSelfCloseActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryOptionSelfCloseActionField_BrokerID != NULL ) {
        if(CThostFtdcQryOptionSelfCloseActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryOptionSelfCloseActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryOptionSelfCloseActionField_BrokerID, CThostFtdcQryOptionSelfCloseActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryOptionSelfCloseActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryOptionSelfCloseActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryOptionSelfCloseActionField_InvestorID != NULL ) {
        if(CThostFtdcQryOptionSelfCloseActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryOptionSelfCloseActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryOptionSelfCloseActionField_InvestorID, CThostFtdcQryOptionSelfCloseActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryOptionSelfCloseActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryOptionSelfCloseActionField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryOptionSelfCloseActionField_ExchangeID != NULL ) {
        if(CThostFtdcQryOptionSelfCloseActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryOptionSelfCloseActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryOptionSelfCloseActionField_ExchangeID, CThostFtdcQryOptionSelfCloseActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryOptionSelfCloseActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryOptionSelfCloseActionField_ExchangeID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryOptionSelfCloseActionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseActionFieldData>(self);
    CThostFtdcQryOptionSelfCloseActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionSelfCloseActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionSelfCloseActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryOptionSelfCloseActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseActionFieldData>(self);
    CThostFtdcQryOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryOptionSelfCloseActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionSelfCloseActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseActionFieldData>(self);
    CThostFtdcQryOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryOptionSelfCloseActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseActionFieldData>(self);
    CThostFtdcQryOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryOptionSelfCloseActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionSelfCloseActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseActionFieldData>(self);
    CThostFtdcQryOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryOptionSelfCloseActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseActionFieldData>(self);
    CThostFtdcQryOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryOptionSelfCloseActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionSelfCloseActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseActionFieldData>(self);
    CThostFtdcQryOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryOptionSelfCloseActionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryOptionSelfCloseActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryOptionSelfCloseActionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryOptionSelfCloseActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryOptionSelfCloseActionFieldType_get_InvestorID,
    .set = PyCThostFtdcQryOptionSelfCloseActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryOptionSelfCloseActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryOptionSelfCloseActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryOptionSelfCloseActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryOptionSelfCloseActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期权自对冲操作查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryOptionSelfCloseActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryOptionSelfCloseActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryOptionSelfCloseActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryOptionSelfCloseActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryOptionSelfCloseActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryOptionSelfCloseActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期权自对冲操作查询")},
    {Py_tp_members, PyCThostFtdcQryOptionSelfCloseActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryOptionSelfCloseActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryOptionSelfCloseActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryOptionSelfCloseActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryOptionSelfCloseActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryOptionSelfCloseActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryOptionSelfCloseActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryOptionSelfCloseActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryOptionSelfCloseActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryOptionSelfCloseActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryOptionSelfCloseActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryOptionSelfCloseActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryOptionSelfCloseActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryOptionSelfCloseActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryOptionSelfCloseActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionSelfCloseActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}