
#include "PyCThostFtdcQryHedgeCfmField.h"

///套利套保申请查询

static int PyCThostFtdcQryHedgeCfmFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExchangeID", "OrderSysID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryHedgeCfmField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryHedgeCfmField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryHedgeCfmField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryHedgeCfmField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryHedgeCfmField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryHedgeCfmField_ExchangeID_length = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQryHedgeCfmField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcQryHedgeCfmField_OrderSysID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryHedgeCfmField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryHedgeCfmField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryHedgeCfmField_BrokerID, &CThostFtdcQryHedgeCfmField_BrokerID_length
        , &CThostFtdcQryHedgeCfmField_InvestorID, &CThostFtdcQryHedgeCfmField_InvestorID_length
        , &CThostFtdcQryHedgeCfmField_ExchangeID, &CThostFtdcQryHedgeCfmField_ExchangeID_length
        , &CThostFtdcQryHedgeCfmField_OrderSysID, &CThostFtdcQryHedgeCfmField_OrderSysID_length
        , &CThostFtdcQryHedgeCfmField_InstrumentID, &CThostFtdcQryHedgeCfmField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryHedgeCfmField_BrokerID != NULL ) {
        if(CThostFtdcQryHedgeCfmField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryHedgeCfmField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryHedgeCfmField_BrokerID, CThostFtdcQryHedgeCfmField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryHedgeCfmField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryHedgeCfmField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryHedgeCfmField_InvestorID != NULL ) {
        if(CThostFtdcQryHedgeCfmField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryHedgeCfmField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryHedgeCfmField_InvestorID, CThostFtdcQryHedgeCfmField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryHedgeCfmField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryHedgeCfmField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryHedgeCfmField_ExchangeID != NULL ) {
        if(CThostFtdcQryHedgeCfmField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryHedgeCfmField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryHedgeCfmField_ExchangeID, CThostFtdcQryHedgeCfmField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryHedgeCfmField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryHedgeCfmField_ExchangeID = NULL;
    }

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQryHedgeCfmField_OrderSysID != NULL ) {
        if(CThostFtdcQryHedgeCfmField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcQryHedgeCfmField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcQryHedgeCfmField_OrderSysID, CThostFtdcQryHedgeCfmField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcQryHedgeCfmField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcQryHedgeCfmField_OrderSysID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryHedgeCfmField_InstrumentID != NULL ) {
        if(CThostFtdcQryHedgeCfmField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryHedgeCfmField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryHedgeCfmField_InstrumentID, CThostFtdcQryHedgeCfmField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryHedgeCfmField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryHedgeCfmField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryHedgeCfmFieldType_repr(PyObject *self) {

    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryHedgeCfmField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryHedgeCfmField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryHedgeCfmFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryHedgeCfmFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHedgeCfmField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryHedgeCfmFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryHedgeCfmFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHedgeCfmField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryHedgeCfmFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryHedgeCfmFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHedgeCfmField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQryHedgeCfmFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcQryHedgeCfmFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHedgeCfmField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryHedgeCfmFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryHedgeCfmFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryHedgeCfmField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryHedgeCfmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(self);
    CThostFtdcQryHedgeCfmField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryHedgeCfmFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryHedgeCfmFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryHedgeCfmFieldType_get_BrokerID,
    .set = PyCThostFtdcQryHedgeCfmFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryHedgeCfmFieldType_get_InvestorID,
    .set = PyCThostFtdcQryHedgeCfmFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryHedgeCfmFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryHedgeCfmFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcQryHedgeCfmFieldType_get_OrderSysID,
    .set = PyCThostFtdcQryHedgeCfmFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryHedgeCfmFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryHedgeCfmFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryHedgeCfmFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryHedgeCfmField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("套利套保申请查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryHedgeCfmFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryHedgeCfmFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryHedgeCfmFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryHedgeCfmFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryHedgeCfmFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryHedgeCfmFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("套利套保申请查询")},
    {Py_tp_members, PyCThostFtdcQryHedgeCfmFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryHedgeCfmFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryHedgeCfmFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryHedgeCfmFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryHedgeCfmFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryHedgeCfmField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryHedgeCfmFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryHedgeCfmFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryHedgeCfmFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryHedgeCfmFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryHedgeCfmFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryHedgeCfmFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryHedgeCfmFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryHedgeCfmFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryHedgeCfmField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryHedgeCfmField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}