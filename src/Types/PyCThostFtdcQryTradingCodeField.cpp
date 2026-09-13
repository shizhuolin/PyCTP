
#include "PyCThostFtdcQryTradingCodeField.h"

///查询交易编码

static int PyCThostFtdcQryTradingCodeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExchangeID", "ClientID", "ClientIDType", "InvestUnitID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryTradingCodeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryTradingCodeField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryTradingCodeField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryTradingCodeField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryTradingCodeField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryTradingCodeField_ExchangeID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcQryTradingCodeField_ClientID = NULL;
    Py_ssize_t CThostFtdcQryTradingCodeField_ClientID_length = 0;

    /// 交易编码类型
    /// typedef char TThostFtdcClientIDTypeType
    char CThostFtdcQryTradingCodeField_ClientIDType = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryTradingCodeField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryTradingCodeField_InvestUnitID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cy#", (char **)kwlist
        , &CThostFtdcQryTradingCodeField_BrokerID, &CThostFtdcQryTradingCodeField_BrokerID_length
        , &CThostFtdcQryTradingCodeField_InvestorID, &CThostFtdcQryTradingCodeField_InvestorID_length
        , &CThostFtdcQryTradingCodeField_ExchangeID, &CThostFtdcQryTradingCodeField_ExchangeID_length
        , &CThostFtdcQryTradingCodeField_ClientID, &CThostFtdcQryTradingCodeField_ClientID_length
        , &CThostFtdcQryTradingCodeField_ClientIDType
        , &CThostFtdcQryTradingCodeField_InvestUnitID, &CThostFtdcQryTradingCodeField_InvestUnitID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryTradingCodeField_BrokerID != NULL ) {
        if(CThostFtdcQryTradingCodeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryTradingCodeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryTradingCodeField_BrokerID, CThostFtdcQryTradingCodeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryTradingCodeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryTradingCodeField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryTradingCodeField_InvestorID != NULL ) {
        if(CThostFtdcQryTradingCodeField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryTradingCodeField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryTradingCodeField_InvestorID, CThostFtdcQryTradingCodeField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryTradingCodeField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryTradingCodeField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryTradingCodeField_ExchangeID != NULL ) {
        if(CThostFtdcQryTradingCodeField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryTradingCodeField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryTradingCodeField_ExchangeID, CThostFtdcQryTradingCodeField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryTradingCodeField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryTradingCodeField_ExchangeID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcQryTradingCodeField_ClientID != NULL ) {
        if(CThostFtdcQryTradingCodeField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcQryTradingCodeField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcQryTradingCodeField_ClientID, CThostFtdcQryTradingCodeField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcQryTradingCodeField_ClientID, sizeof(data->ClientID));
        CThostFtdcQryTradingCodeField_ClientID = NULL;
    }

    /// 交易编码类型
    /// typedef char TThostFtdcClientIDTypeType
    data->ClientIDType = CThostFtdcQryTradingCodeField_ClientIDType;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryTradingCodeField_InvestUnitID != NULL ) {
        if(CThostFtdcQryTradingCodeField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryTradingCodeField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryTradingCodeField_InvestUnitID, CThostFtdcQryTradingCodeField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryTradingCodeField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryTradingCodeField_InvestUnitID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryTradingCodeFieldType_repr(PyObject *self) {

    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "ClientIDType", data->ClientIDType
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradingCodeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradingCodeField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryTradingCodeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryTradingCodeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingCodeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryTradingCodeFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryTradingCodeFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingCodeField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryTradingCodeFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryTradingCodeFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingCodeField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcQryTradingCodeFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcQryTradingCodeFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingCodeField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易编码类型
/// typedef char TThostFtdcClientIDTypeType
static PyObject *PyCThostFtdcQryTradingCodeFieldType_get_ClientIDType(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ClientIDType), 1);
}

static int PyCThostFtdcQryTradingCodeFieldType_set_ClientIDType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientIDType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryTradingCodeField::ClientIDType)) {
        PyErr_SetString(PyExc_ValueError, "ClientIDType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    data->ClientIDType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryTradingCodeFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryTradingCodeFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingCodeField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(self);
    CThostFtdcQryTradingCodeField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryTradingCodeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryTradingCodeFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryTradingCodeFieldType_get_BrokerID,
    .set = PyCThostFtdcQryTradingCodeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryTradingCodeFieldType_get_InvestorID,
    .set = PyCThostFtdcQryTradingCodeFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryTradingCodeFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryTradingCodeFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcQryTradingCodeFieldType_get_ClientID,
    .set = PyCThostFtdcQryTradingCodeFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 交易编码类型
    /// typedef char TThostFtdcClientIDTypeType
    {
    .name = "ClientIDType",
    .get = PyCThostFtdcQryTradingCodeFieldType_get_ClientIDType,
    .set = PyCThostFtdcQryTradingCodeFieldType_set_ClientIDType,
    .doc = PyDoc_STR("交易编码类型"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryTradingCodeFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryTradingCodeFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryTradingCodeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryTradingCodeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询交易编码")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryTradingCodeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryTradingCodeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryTradingCodeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryTradingCodeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryTradingCodeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryTradingCodeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询交易编码")},
    {Py_tp_members, PyCThostFtdcQryTradingCodeFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryTradingCodeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryTradingCodeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryTradingCodeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryTradingCodeFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryTradingCodeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryTradingCodeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryTradingCodeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryTradingCodeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryTradingCodeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryTradingCodeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryTradingCodeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryTradingCodeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryTradingCodeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryTradingCodeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTradingCodeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}