
#include "PyCThostFtdcSyncDeltaSPMMModelParamField.h"

///风险结算追平SPMM模板参数设置

static int PyCThostFtdcSyncDeltaSPMMModelParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "SPMMModelID", "CommodityGroupID", "IntraCommodityRate", "InterCommodityRate", "OptionDiscountRate", "MiniMarginRatio", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaSPMMModelParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPMMModelParamField_ExchangeID_length = 0;

    /// SPMM模板ID
    /// typedef char TThostFtdcSPMMModelIDType[33]
    char *CThostFtdcSyncDeltaSPMMModelParamField_SPMMModelID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPMMModelParamField_SPMMModelID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcSyncDeltaSPMMModelParamField_CommodityGroupID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPMMModelParamField_CommodityGroupID_length = 0;

    /// SPMM品种内跨期优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    double CThostFtdcSyncDeltaSPMMModelParamField_IntraCommodityRate = 0.0;

    /// SPMM品种间优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    double CThostFtdcSyncDeltaSPMMModelParamField_InterCommodityRate = 0.0;

    /// SPMM期权优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    double CThostFtdcSyncDeltaSPMMModelParamField_OptionDiscountRate = 0.0;

    /// 商品群最小保证金比例
    /// typedef double TThostFtdcSPMMDiscountRatioType
    double CThostFtdcSyncDeltaSPMMModelParamField_MiniMarginRatio = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaSPMMModelParamField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaSPMMModelParamField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddddci", (char **)kwlist
        , &CThostFtdcSyncDeltaSPMMModelParamField_ExchangeID, &CThostFtdcSyncDeltaSPMMModelParamField_ExchangeID_length
        , &CThostFtdcSyncDeltaSPMMModelParamField_SPMMModelID, &CThostFtdcSyncDeltaSPMMModelParamField_SPMMModelID_length
        , &CThostFtdcSyncDeltaSPMMModelParamField_CommodityGroupID, &CThostFtdcSyncDeltaSPMMModelParamField_CommodityGroupID_length
        , &CThostFtdcSyncDeltaSPMMModelParamField_IntraCommodityRate
        , &CThostFtdcSyncDeltaSPMMModelParamField_InterCommodityRate
        , &CThostFtdcSyncDeltaSPMMModelParamField_OptionDiscountRate
        , &CThostFtdcSyncDeltaSPMMModelParamField_MiniMarginRatio
        , &CThostFtdcSyncDeltaSPMMModelParamField_ActionDirection
        , &CThostFtdcSyncDeltaSPMMModelParamField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaSPMMModelParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMModelParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMModelParamField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaSPMMModelParamField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaSPMMModelParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPMMModelParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaSPMMModelParamField_ExchangeID, CThostFtdcSyncDeltaSPMMModelParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaSPMMModelParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaSPMMModelParamField_ExchangeID = NULL;
    }

    /// SPMM模板ID
    /// typedef char TThostFtdcSPMMModelIDType[33]
    if( CThostFtdcSyncDeltaSPMMModelParamField_SPMMModelID != NULL ) {
        if(CThostFtdcSyncDeltaSPMMModelParamField_SPMMModelID_length >= (Py_ssize_t)sizeof(data->SPMMModelID)) {
            PyErr_Format(PyExc_ValueError, "SPMMModelID too long: length=%zd (max allowed is 32)", CThostFtdcSyncDeltaSPMMModelParamField_SPMMModelID_length);
            return -1;
        }
        // memset(data->SPMMModelID, 0, sizeof(data->SPMMModelID));
        // memcpy(data->SPMMModelID, CThostFtdcSyncDeltaSPMMModelParamField_SPMMModelID, CThostFtdcSyncDeltaSPMMModelParamField_SPMMModelID_length);
        strncpy(data->SPMMModelID, CThostFtdcSyncDeltaSPMMModelParamField_SPMMModelID, sizeof(data->SPMMModelID));
        CThostFtdcSyncDeltaSPMMModelParamField_SPMMModelID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcSyncDeltaSPMMModelParamField_CommodityGroupID != NULL ) {
        if(CThostFtdcSyncDeltaSPMMModelParamField_CommodityGroupID_length >= (Py_ssize_t)sizeof(data->CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaSPMMModelParamField_CommodityGroupID_length);
            return -1;
        }
        // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
        // memcpy(data->CommodityGroupID, CThostFtdcSyncDeltaSPMMModelParamField_CommodityGroupID, CThostFtdcSyncDeltaSPMMModelParamField_CommodityGroupID_length);
        strncpy(data->CommodityGroupID, CThostFtdcSyncDeltaSPMMModelParamField_CommodityGroupID, sizeof(data->CommodityGroupID));
        CThostFtdcSyncDeltaSPMMModelParamField_CommodityGroupID = NULL;
    }

    /// SPMM品种内跨期优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    data->IntraCommodityRate = CThostFtdcSyncDeltaSPMMModelParamField_IntraCommodityRate;

    /// SPMM品种间优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    data->InterCommodityRate = CThostFtdcSyncDeltaSPMMModelParamField_InterCommodityRate;

    /// SPMM期权优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    data->OptionDiscountRate = CThostFtdcSyncDeltaSPMMModelParamField_OptionDiscountRate;

    /// 商品群最小保证金比例
    /// typedef double TThostFtdcSPMMDiscountRatioType
    data->MiniMarginRatio = CThostFtdcSyncDeltaSPMMModelParamField_MiniMarginRatio;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaSPMMModelParamField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaSPMMModelParamField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaSPMMModelParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMModelParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMModelParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:c,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "SPMMModelID", data->SPMMModelID//, (Py_ssize_t)sizeof(data->SPMMModelID)
        , "CommodityGroupID", data->CommodityGroupID//, (Py_ssize_t)sizeof(data->CommodityGroupID)
        , "IntraCommodityRate", data->IntraCommodityRate
        , "InterCommodityRate", data->InterCommodityRate
        , "OptionDiscountRate", data->OptionDiscountRate
        , "MiniMarginRatio", data->MiniMarginRatio
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMModelParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMModelParamField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMModelParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMModelParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMModelParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaSPMMModelParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMModelParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMModelParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMModelParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMModelParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// SPMM模板ID
/// typedef char TThostFtdcSPMMModelIDType[33]
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamFieldType_get_SPMMModelID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMModelParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMModelParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMModelParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SPMMModelID, (Py_ssize_t)sizeof(data->SPMMModelID));
    return PyBytes_FromString(data->SPMMModelID);
}

static int PyCThostFtdcSyncDeltaSPMMModelParamFieldType_set_SPMMModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SPMMModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMModelParamField::SPMMModelID)) {
        PyErr_SetString(PyExc_ValueError, "SPMMModelID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMModelParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMModelParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMModelParamField *data = &(extra->data);
    // memset(data->SPMMModelID, 0, sizeof(data->SPMMModelID));
    // memcpy(data->SPMMModelID, buf, len);
    strncpy(data->SPMMModelID, buf, sizeof(data->SPMMModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamFieldType_get_CommodityGroupID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMModelParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMModelParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMModelParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityGroupID, (Py_ssize_t)sizeof(data->CommodityGroupID));
    return PyBytes_FromString(data->CommodityGroupID);
}

static int PyCThostFtdcSyncDeltaSPMMModelParamFieldType_set_CommodityGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMModelParamField::CommodityGroupID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMModelParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMModelParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMModelParamField *data = &(extra->data);
    // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
    // memcpy(data->CommodityGroupID, buf, len);
    strncpy(data->CommodityGroupID, buf, sizeof(data->CommodityGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMModelParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMModelParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMModelParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaSPMMModelParamFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMModelParamField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMModelParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMModelParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMModelParamField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaSPMMModelParamFieldType_members[] = {
    /// SPMM品种内跨期优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    {
        .name = "IntraCommodityRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPMMModelParamFieldData, data.IntraCommodityRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("SPMM品种内跨期优惠系数")
    },
    /// SPMM品种间优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    {
        .name = "InterCommodityRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPMMModelParamFieldData, data.InterCommodityRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("SPMM品种间优惠系数")
    },
    /// SPMM期权优惠系数
    /// typedef double TThostFtdcSPMMDiscountRatioType
    {
        .name = "OptionDiscountRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPMMModelParamFieldData, data.OptionDiscountRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("SPMM期权优惠系数")
    },
    /// 商品群最小保证金比例
    /// typedef double TThostFtdcSPMMDiscountRatioType
    {
        .name = "MiniMarginRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPMMModelParamFieldData, data.MiniMarginRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("商品群最小保证金比例")
    },
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPMMModelParamFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaSPMMModelParamFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaSPMMModelParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaSPMMModelParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// SPMM模板ID
    /// typedef char TThostFtdcSPMMModelIDType[33]
    {
    .name = "SPMMModelID",
    .get = PyCThostFtdcSyncDeltaSPMMModelParamFieldType_get_SPMMModelID,
    .set = PyCThostFtdcSyncDeltaSPMMModelParamFieldType_set_SPMMModelID,
    .doc = PyDoc_STR("SPMM模板ID"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityGroupID",
    .get = PyCThostFtdcSyncDeltaSPMMModelParamFieldType_get_CommodityGroupID,
    .set = PyCThostFtdcSyncDeltaSPMMModelParamFieldType_set_CommodityGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaSPMMModelParamFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaSPMMModelParamFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaSPMMModelParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaSPMMModelParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPMM模板参数设置")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaSPMMModelParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaSPMMModelParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaSPMMModelParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaSPMMModelParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaSPMMModelParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaSPMMModelParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPMM模板参数设置")},
    {Py_tp_members, PyCThostFtdcSyncDeltaSPMMModelParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaSPMMModelParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaSPMMModelParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaSPMMModelParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaSPMMModelParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaSPMMModelParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPMMModelParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPMMModelParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaSPMMModelParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaSPMMModelParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaSPMMModelParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaSPMMModelParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaSPMMModelParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaSPMMModelParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPMMModelParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPMMModelParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}