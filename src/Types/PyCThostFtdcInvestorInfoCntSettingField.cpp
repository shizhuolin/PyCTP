
#include "PyCThostFtdcInvestorInfoCntSettingField.h"

///投资者申报费阶梯收取设置

static int PyCThostFtdcInvestorInfoCntSettingFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "ProductID", "IsCalInfoComm", "IsLimitInfoMax", "InfoMaxLimit", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorInfoCntSettingField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorInfoCntSettingField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorInfoCntSettingField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorInfoCntSettingField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorInfoCntSettingField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorInfoCntSettingField_InvestorID_length = 0;

    /// 商品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcInvestorInfoCntSettingField_ProductID = NULL;
    Py_ssize_t CThostFtdcInvestorInfoCntSettingField_ProductID_length = 0;

    /// 是否收取申报费
    /// typedef int TThostFtdcBoolType
    int CThostFtdcInvestorInfoCntSettingField_IsCalInfoComm = 0;

    /// 是否限制信息量
    /// typedef int TThostFtdcBoolType
    int CThostFtdcInvestorInfoCntSettingField_IsLimitInfoMax = 0;

    /// 信息量限制笔数
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorInfoCntSettingField_InfoMaxLimit = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iii", (char **)kwlist
        , &CThostFtdcInvestorInfoCntSettingField_ExchangeID, &CThostFtdcInvestorInfoCntSettingField_ExchangeID_length
        , &CThostFtdcInvestorInfoCntSettingField_BrokerID, &CThostFtdcInvestorInfoCntSettingField_BrokerID_length
        , &CThostFtdcInvestorInfoCntSettingField_InvestorID, &CThostFtdcInvestorInfoCntSettingField_InvestorID_length
        , &CThostFtdcInvestorInfoCntSettingField_ProductID, &CThostFtdcInvestorInfoCntSettingField_ProductID_length
        , &CThostFtdcInvestorInfoCntSettingField_IsCalInfoComm
        , &CThostFtdcInvestorInfoCntSettingField_IsLimitInfoMax
        , &CThostFtdcInvestorInfoCntSettingField_InfoMaxLimit
    )) {
        return -1;
    }

    PyCThostFtdcInvestorInfoCntSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCntSettingFieldData>(self);
    CThostFtdcInvestorInfoCntSettingField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorInfoCntSettingField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorInfoCntSettingField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorInfoCntSettingField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorInfoCntSettingField_ExchangeID, CThostFtdcInvestorInfoCntSettingField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorInfoCntSettingField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorInfoCntSettingField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorInfoCntSettingField_BrokerID != NULL ) {
        if(CThostFtdcInvestorInfoCntSettingField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorInfoCntSettingField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorInfoCntSettingField_BrokerID, CThostFtdcInvestorInfoCntSettingField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorInfoCntSettingField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorInfoCntSettingField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorInfoCntSettingField_InvestorID != NULL ) {
        if(CThostFtdcInvestorInfoCntSettingField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorInfoCntSettingField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorInfoCntSettingField_InvestorID, CThostFtdcInvestorInfoCntSettingField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorInfoCntSettingField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorInfoCntSettingField_InvestorID = NULL;
    }

    /// 商品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcInvestorInfoCntSettingField_ProductID != NULL ) {
        if(CThostFtdcInvestorInfoCntSettingField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcInvestorInfoCntSettingField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcInvestorInfoCntSettingField_ProductID, CThostFtdcInvestorInfoCntSettingField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcInvestorInfoCntSettingField_ProductID, sizeof(data->ProductID));
        CThostFtdcInvestorInfoCntSettingField_ProductID = NULL;
    }

    /// 是否收取申报费
    /// typedef int TThostFtdcBoolType
    data->IsCalInfoComm = CThostFtdcInvestorInfoCntSettingField_IsCalInfoComm;

    /// 是否限制信息量
    /// typedef int TThostFtdcBoolType
    data->IsLimitInfoMax = CThostFtdcInvestorInfoCntSettingField_IsLimitInfoMax;

    /// 信息量限制笔数
    /// typedef int TThostFtdcVolumeType
    data->InfoMaxLimit = CThostFtdcInvestorInfoCntSettingField_InfoMaxLimit;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorInfoCntSettingFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorInfoCntSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCntSettingFieldData>(self);
    CThostFtdcInvestorInfoCntSettingField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:i,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "IsCalInfoComm", data->IsCalInfoComm
        , "IsLimitInfoMax", data->IsLimitInfoMax
        , "InfoMaxLimit", data->InfoMaxLimit
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorInfoCntSettingField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorInfoCntSettingField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorInfoCntSettingFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorInfoCntSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCntSettingFieldData>(self);
    CThostFtdcInvestorInfoCntSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorInfoCntSettingFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorInfoCntSettingField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorInfoCntSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCntSettingFieldData>(self);
    CThostFtdcInvestorInfoCntSettingField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorInfoCntSettingFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorInfoCntSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCntSettingFieldData>(self);
    CThostFtdcInvestorInfoCntSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorInfoCntSettingFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorInfoCntSettingField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorInfoCntSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCntSettingFieldData>(self);
    CThostFtdcInvestorInfoCntSettingField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorInfoCntSettingFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorInfoCntSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCntSettingFieldData>(self);
    CThostFtdcInvestorInfoCntSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorInfoCntSettingFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorInfoCntSettingField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorInfoCntSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCntSettingFieldData>(self);
    CThostFtdcInvestorInfoCntSettingField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcInvestorInfoCntSettingFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorInfoCntSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCntSettingFieldData>(self);
    CThostFtdcInvestorInfoCntSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcInvestorInfoCntSettingFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorInfoCntSettingField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorInfoCntSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCntSettingFieldData>(self);
    CThostFtdcInvestorInfoCntSettingField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorInfoCntSettingFieldType_members[] = {
    /// 是否收取申报费
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsCalInfoComm",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorInfoCntSettingFieldData, data.IsCalInfoComm),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否收取申报费")
    },
    /// 是否限制信息量
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsLimitInfoMax",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorInfoCntSettingFieldData, data.IsLimitInfoMax),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否限制信息量")
    },
    /// 信息量限制笔数
    /// typedef int TThostFtdcVolumeType
    {
        .name = "InfoMaxLimit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorInfoCntSettingFieldData, data.InfoMaxLimit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("信息量限制笔数")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorInfoCntSettingFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorInfoCntSettingFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorInfoCntSettingFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorInfoCntSettingFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorInfoCntSettingFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorInfoCntSettingFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorInfoCntSettingFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 商品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcInvestorInfoCntSettingFieldType_get_ProductID,
    .set = PyCThostFtdcInvestorInfoCntSettingFieldType_set_ProductID,
    .doc = PyDoc_STR("商品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorInfoCntSettingFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorInfoCntSettingField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者申报费阶梯收取设置")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorInfoCntSettingFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorInfoCntSettingFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorInfoCntSettingFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorInfoCntSettingFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorInfoCntSettingFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorInfoCntSettingFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者申报费阶梯收取设置")},
    {Py_tp_members, PyCThostFtdcInvestorInfoCntSettingFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorInfoCntSettingFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorInfoCntSettingFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorInfoCntSettingFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorInfoCntSettingFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorInfoCntSettingField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorInfoCntSettingFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorInfoCntSettingFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorInfoCntSettingFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorInfoCntSettingFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorInfoCntSettingFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorInfoCntSettingFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorInfoCntSettingFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorInfoCntSettingFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorInfoCntSettingField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorInfoCntSettingField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}