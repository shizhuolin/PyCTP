
#include "PyCThostFtdcPortfTradeParamSettingField.h"

///组保交易参数设置

static int PyCThostFtdcPortfTradeParamSettingFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "Portfolio", "IsActionVerify", "IsCloseVerify", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcPortfTradeParamSettingField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcPortfTradeParamSettingField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcPortfTradeParamSettingField_BrokerID = NULL;
    Py_ssize_t CThostFtdcPortfTradeParamSettingField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcPortfTradeParamSettingField_InvestorID = NULL;
    Py_ssize_t CThostFtdcPortfTradeParamSettingField_InvestorID_length = 0;

    /// 组保算法
    /// typedef char TThostFtdcPortfolioType
    char CThostFtdcPortfTradeParamSettingField_Portfolio = 0;

    /// 撤单是否验资
    /// typedef int TThostFtdcBoolType
    int CThostFtdcPortfTradeParamSettingField_IsActionVerify = 0;

    /// 平仓是否验资
    /// typedef int TThostFtdcBoolType
    int CThostFtdcPortfTradeParamSettingField_IsCloseVerify = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cii", (char **)kwlist
        , &CThostFtdcPortfTradeParamSettingField_ExchangeID, &CThostFtdcPortfTradeParamSettingField_ExchangeID_length
        , &CThostFtdcPortfTradeParamSettingField_BrokerID, &CThostFtdcPortfTradeParamSettingField_BrokerID_length
        , &CThostFtdcPortfTradeParamSettingField_InvestorID, &CThostFtdcPortfTradeParamSettingField_InvestorID_length
        , &CThostFtdcPortfTradeParamSettingField_Portfolio
        , &CThostFtdcPortfTradeParamSettingField_IsActionVerify
        , &CThostFtdcPortfTradeParamSettingField_IsCloseVerify
    )) {
        return -1;
    }

    PyCThostFtdcPortfTradeParamSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPortfTradeParamSettingFieldData>(self);
    CThostFtdcPortfTradeParamSettingField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcPortfTradeParamSettingField_ExchangeID != NULL ) {
        if(CThostFtdcPortfTradeParamSettingField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcPortfTradeParamSettingField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcPortfTradeParamSettingField_ExchangeID, CThostFtdcPortfTradeParamSettingField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcPortfTradeParamSettingField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcPortfTradeParamSettingField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcPortfTradeParamSettingField_BrokerID != NULL ) {
        if(CThostFtdcPortfTradeParamSettingField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcPortfTradeParamSettingField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcPortfTradeParamSettingField_BrokerID, CThostFtdcPortfTradeParamSettingField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcPortfTradeParamSettingField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcPortfTradeParamSettingField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcPortfTradeParamSettingField_InvestorID != NULL ) {
        if(CThostFtdcPortfTradeParamSettingField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcPortfTradeParamSettingField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcPortfTradeParamSettingField_InvestorID, CThostFtdcPortfTradeParamSettingField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcPortfTradeParamSettingField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcPortfTradeParamSettingField_InvestorID = NULL;
    }

    /// 组保算法
    /// typedef char TThostFtdcPortfolioType
    data->Portfolio = CThostFtdcPortfTradeParamSettingField_Portfolio;

    /// 撤单是否验资
    /// typedef int TThostFtdcBoolType
    data->IsActionVerify = CThostFtdcPortfTradeParamSettingField_IsActionVerify;

    /// 平仓是否验资
    /// typedef int TThostFtdcBoolType
    data->IsCloseVerify = CThostFtdcPortfTradeParamSettingField_IsCloseVerify;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcPortfTradeParamSettingFieldType_repr(PyObject *self) {

    PyCThostFtdcPortfTradeParamSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPortfTradeParamSettingFieldData>(self);
    CThostFtdcPortfTradeParamSettingField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:i,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "Portfolio", data->Portfolio
        , "IsActionVerify", data->IsActionVerify
        , "IsCloseVerify", data->IsCloseVerify
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcPortfTradeParamSettingField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcPortfTradeParamSettingField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcPortfTradeParamSettingFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcPortfTradeParamSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPortfTradeParamSettingFieldData>(self);
    CThostFtdcPortfTradeParamSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcPortfTradeParamSettingFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcPortfTradeParamSettingField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPortfTradeParamSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPortfTradeParamSettingFieldData>(self);
    CThostFtdcPortfTradeParamSettingField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcPortfTradeParamSettingFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcPortfTradeParamSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPortfTradeParamSettingFieldData>(self);
    CThostFtdcPortfTradeParamSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcPortfTradeParamSettingFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcPortfTradeParamSettingField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPortfTradeParamSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPortfTradeParamSettingFieldData>(self);
    CThostFtdcPortfTradeParamSettingField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcPortfTradeParamSettingFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcPortfTradeParamSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPortfTradeParamSettingFieldData>(self);
    CThostFtdcPortfTradeParamSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcPortfTradeParamSettingFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcPortfTradeParamSettingField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPortfTradeParamSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPortfTradeParamSettingFieldData>(self);
    CThostFtdcPortfTradeParamSettingField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组保算法
/// typedef char TThostFtdcPortfolioType
static PyObject *PyCThostFtdcPortfTradeParamSettingFieldType_get_Portfolio(PyObject *self, void *closure) {
    PyCThostFtdcPortfTradeParamSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPortfTradeParamSettingFieldData>(self);
    CThostFtdcPortfTradeParamSettingField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Portfolio), 1);
}

static int PyCThostFtdcPortfTradeParamSettingFieldType_set_Portfolio(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Portfolio Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcPortfTradeParamSettingField::Portfolio)) {
        PyErr_SetString(PyExc_ValueError, "Portfolio must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPortfTradeParamSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPortfTradeParamSettingFieldData>(self);
    CThostFtdcPortfTradeParamSettingField *data = &(extra->data);
    data->Portfolio = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcPortfTradeParamSettingFieldType_members[] = {
    /// 撤单是否验资
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActionVerify",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcPortfTradeParamSettingFieldData, data.IsActionVerify),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("撤单是否验资")
    },
    /// 平仓是否验资
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsCloseVerify",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcPortfTradeParamSettingFieldData, data.IsCloseVerify),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓是否验资")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcPortfTradeParamSettingFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcPortfTradeParamSettingFieldType_get_ExchangeID,
    .set = PyCThostFtdcPortfTradeParamSettingFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcPortfTradeParamSettingFieldType_get_BrokerID,
    .set = PyCThostFtdcPortfTradeParamSettingFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcPortfTradeParamSettingFieldType_get_InvestorID,
    .set = PyCThostFtdcPortfTradeParamSettingFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 组保算法
    /// typedef char TThostFtdcPortfolioType
    {
    .name = "Portfolio",
    .get = PyCThostFtdcPortfTradeParamSettingFieldType_get_Portfolio,
    .set = PyCThostFtdcPortfTradeParamSettingFieldType_set_Portfolio,
    .doc = PyDoc_STR("组保算法"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcPortfTradeParamSettingFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcPortfTradeParamSettingField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("组保交易参数设置")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcPortfTradeParamSettingFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcPortfTradeParamSettingFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcPortfTradeParamSettingFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcPortfTradeParamSettingFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcPortfTradeParamSettingFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcPortfTradeParamSettingFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("组保交易参数设置")},
    {Py_tp_members, PyCThostFtdcPortfTradeParamSettingFieldType_members},
    {Py_tp_getset, PyCThostFtdcPortfTradeParamSettingFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcPortfTradeParamSettingFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcPortfTradeParamSettingFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcPortfTradeParamSettingFieldType_spec = {
    .name = "PyCTP.CThostFtdcPortfTradeParamSettingField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcPortfTradeParamSettingFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcPortfTradeParamSettingFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcPortfTradeParamSettingFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcPortfTradeParamSettingFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcPortfTradeParamSettingFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcPortfTradeParamSettingFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcPortfTradeParamSettingFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcPortfTradeParamSettingFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcPortfTradeParamSettingField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcPortfTradeParamSettingField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}