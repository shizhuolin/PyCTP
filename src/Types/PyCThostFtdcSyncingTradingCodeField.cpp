
#include "PyCThostFtdcSyncingTradingCodeField.h"

///正在同步中的交易代码

static int PyCThostFtdcSyncingTradingCodeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InvestorID", "BrokerID", "ExchangeID", "ClientID", "IsActive", "ClientIDType", NULL };


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncingTradingCodeField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncingTradingCodeField_InvestorID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncingTradingCodeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncingTradingCodeField_BrokerID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncingTradingCodeField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncingTradingCodeField_ExchangeID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcSyncingTradingCodeField_ClientID = NULL;
    Py_ssize_t CThostFtdcSyncingTradingCodeField_ClientID_length = 0;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncingTradingCodeField_IsActive = 0;

    /// 交易编码类型
    /// typedef char TThostFtdcClientIDTypeType
    char CThostFtdcSyncingTradingCodeField_ClientIDType = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ic", (char **)kwlist
        , &CThostFtdcSyncingTradingCodeField_InvestorID, &CThostFtdcSyncingTradingCodeField_InvestorID_length
        , &CThostFtdcSyncingTradingCodeField_BrokerID, &CThostFtdcSyncingTradingCodeField_BrokerID_length
        , &CThostFtdcSyncingTradingCodeField_ExchangeID, &CThostFtdcSyncingTradingCodeField_ExchangeID_length
        , &CThostFtdcSyncingTradingCodeField_ClientID, &CThostFtdcSyncingTradingCodeField_ClientID_length
        , &CThostFtdcSyncingTradingCodeField_IsActive
        , &CThostFtdcSyncingTradingCodeField_ClientIDType
    )) {
        return -1;
    }

    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncingTradingCodeField_InvestorID != NULL ) {
        if(CThostFtdcSyncingTradingCodeField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncingTradingCodeField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncingTradingCodeField_InvestorID, CThostFtdcSyncingTradingCodeField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncingTradingCodeField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncingTradingCodeField_InvestorID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncingTradingCodeField_BrokerID != NULL ) {
        if(CThostFtdcSyncingTradingCodeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncingTradingCodeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncingTradingCodeField_BrokerID, CThostFtdcSyncingTradingCodeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncingTradingCodeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncingTradingCodeField_BrokerID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncingTradingCodeField_ExchangeID != NULL ) {
        if(CThostFtdcSyncingTradingCodeField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncingTradingCodeField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncingTradingCodeField_ExchangeID, CThostFtdcSyncingTradingCodeField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncingTradingCodeField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncingTradingCodeField_ExchangeID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcSyncingTradingCodeField_ClientID != NULL ) {
        if(CThostFtdcSyncingTradingCodeField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcSyncingTradingCodeField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcSyncingTradingCodeField_ClientID, CThostFtdcSyncingTradingCodeField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcSyncingTradingCodeField_ClientID, sizeof(data->ClientID));
        CThostFtdcSyncingTradingCodeField_ClientID = NULL;
    }

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    data->IsActive = CThostFtdcSyncingTradingCodeField_IsActive;

    /// 交易编码类型
    /// typedef char TThostFtdcClientIDTypeType
    data->ClientIDType = CThostFtdcSyncingTradingCodeField_ClientIDType;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncingTradingCodeFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c}"
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "IsActive", data->IsActive
        , "ClientIDType", data->ClientIDType
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingTradingCodeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingTradingCodeField repr");
        return NULL;
    }

    return repr;
}


/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncingTradingCodeFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncingTradingCodeFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingTradingCodeField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncingTradingCodeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncingTradingCodeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingTradingCodeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncingTradingCodeFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncingTradingCodeFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingTradingCodeField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcSyncingTradingCodeFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcSyncingTradingCodeFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingTradingCodeField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易编码类型
/// typedef char TThostFtdcClientIDTypeType
static PyObject *PyCThostFtdcSyncingTradingCodeFieldType_get_ClientIDType(PyObject *self, void *closure) {
    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ClientIDType), 1);
}

static int PyCThostFtdcSyncingTradingCodeFieldType_set_ClientIDType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientIDType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingTradingCodeField::ClientIDType)) {
        PyErr_SetString(PyExc_ValueError, "ClientIDType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingTradingCodeFieldData>(self);
    CThostFtdcSyncingTradingCodeField *data = &(extra->data);
    data->ClientIDType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncingTradingCodeFieldType_members[] = {
    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActive",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingTradingCodeFieldData, data.IsActive),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否活跃")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncingTradingCodeFieldType_getsets[] = {
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncingTradingCodeFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncingTradingCodeFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncingTradingCodeFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncingTradingCodeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncingTradingCodeFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncingTradingCodeFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcSyncingTradingCodeFieldType_get_ClientID,
    .set = PyCThostFtdcSyncingTradingCodeFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 交易编码类型
    /// typedef char TThostFtdcClientIDTypeType
    {
    .name = "ClientIDType",
    .get = PyCThostFtdcSyncingTradingCodeFieldType_get_ClientIDType,
    .set = PyCThostFtdcSyncingTradingCodeFieldType_set_ClientIDType,
    .doc = PyDoc_STR("交易编码类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncingTradingCodeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncingTradingCodeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("正在同步中的交易代码")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncingTradingCodeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncingTradingCodeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncingTradingCodeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncingTradingCodeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncingTradingCodeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncingTradingCodeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("正在同步中的交易代码")},
    {Py_tp_members, PyCThostFtdcSyncingTradingCodeFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncingTradingCodeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncingTradingCodeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncingTradingCodeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncingTradingCodeFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncingTradingCodeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncingTradingCodeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncingTradingCodeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncingTradingCodeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncingTradingCodeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncingTradingCodeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncingTradingCodeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncingTradingCodeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncingTradingCodeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncingTradingCodeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingTradingCodeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}