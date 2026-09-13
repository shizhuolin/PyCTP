
#include "PyCThostFtdcSyncDeltaSPMMInstParamField.h"

///风险结算追平SPMM合约参数

static int PyCThostFtdcSyncDeltaSPMMInstParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "InstrumentID", "InstMarginCalID", "CommodityID", "CommodityGroupID", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaSPMMInstParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPMMInstParamField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaSPMMInstParamField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPMMInstParamField_InstrumentID_length = 0;

    /// SPMM合约保证金算法
    /// typedef char TThostFtdcInstMarginCalIDType
    char CThostFtdcSyncDeltaSPMMInstParamField_InstMarginCalID = 0;

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcSyncDeltaSPMMInstParamField_CommodityID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPMMInstParamField_CommodityID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcSyncDeltaSPMMInstParamField_CommodityGroupID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPMMInstParamField_CommodityGroupID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaSPMMInstParamField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaSPMMInstParamField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#ci", (char **)kwlist
        , &CThostFtdcSyncDeltaSPMMInstParamField_ExchangeID, &CThostFtdcSyncDeltaSPMMInstParamField_ExchangeID_length
        , &CThostFtdcSyncDeltaSPMMInstParamField_InstrumentID, &CThostFtdcSyncDeltaSPMMInstParamField_InstrumentID_length
        , &CThostFtdcSyncDeltaSPMMInstParamField_InstMarginCalID
        , &CThostFtdcSyncDeltaSPMMInstParamField_CommodityID, &CThostFtdcSyncDeltaSPMMInstParamField_CommodityID_length
        , &CThostFtdcSyncDeltaSPMMInstParamField_CommodityGroupID, &CThostFtdcSyncDeltaSPMMInstParamField_CommodityGroupID_length
        , &CThostFtdcSyncDeltaSPMMInstParamField_ActionDirection
        , &CThostFtdcSyncDeltaSPMMInstParamField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaSPMMInstParamField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaSPMMInstParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPMMInstParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaSPMMInstParamField_ExchangeID, CThostFtdcSyncDeltaSPMMInstParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaSPMMInstParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaSPMMInstParamField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaSPMMInstParamField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaSPMMInstParamField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaSPMMInstParamField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaSPMMInstParamField_InstrumentID, CThostFtdcSyncDeltaSPMMInstParamField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaSPMMInstParamField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaSPMMInstParamField_InstrumentID = NULL;
    }

    /// SPMM合约保证金算法
    /// typedef char TThostFtdcInstMarginCalIDType
    data->InstMarginCalID = CThostFtdcSyncDeltaSPMMInstParamField_InstMarginCalID;

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcSyncDeltaSPMMInstParamField_CommodityID != NULL ) {
        if(CThostFtdcSyncDeltaSPMMInstParamField_CommodityID_length >= (Py_ssize_t)sizeof(data->CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaSPMMInstParamField_CommodityID_length);
            return -1;
        }
        // memset(data->CommodityID, 0, sizeof(data->CommodityID));
        // memcpy(data->CommodityID, CThostFtdcSyncDeltaSPMMInstParamField_CommodityID, CThostFtdcSyncDeltaSPMMInstParamField_CommodityID_length);
        strncpy(data->CommodityID, CThostFtdcSyncDeltaSPMMInstParamField_CommodityID, sizeof(data->CommodityID));
        CThostFtdcSyncDeltaSPMMInstParamField_CommodityID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcSyncDeltaSPMMInstParamField_CommodityGroupID != NULL ) {
        if(CThostFtdcSyncDeltaSPMMInstParamField_CommodityGroupID_length >= (Py_ssize_t)sizeof(data->CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaSPMMInstParamField_CommodityGroupID_length);
            return -1;
        }
        // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
        // memcpy(data->CommodityGroupID, CThostFtdcSyncDeltaSPMMInstParamField_CommodityGroupID, CThostFtdcSyncDeltaSPMMInstParamField_CommodityGroupID_length);
        strncpy(data->CommodityGroupID, CThostFtdcSyncDeltaSPMMInstParamField_CommodityGroupID, sizeof(data->CommodityGroupID));
        CThostFtdcSyncDeltaSPMMInstParamField_CommodityGroupID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaSPMMInstParamField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaSPMMInstParamField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:c,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "InstMarginCalID", data->InstMarginCalID
        , "CommodityID", data->CommodityID//, (Py_ssize_t)sizeof(data->CommodityID)
        , "CommodityGroupID", data->CommodityGroupID//, (Py_ssize_t)sizeof(data->CommodityGroupID)
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMInstParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMInstParamField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMInstParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMInstParamField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// SPMM合约保证金算法
/// typedef char TThostFtdcInstMarginCalIDType
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_InstMarginCalID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InstMarginCalID), 1);
}

static int PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_InstMarginCalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstMarginCalID Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMInstParamField::InstMarginCalID)) {
        PyErr_SetString(PyExc_ValueError, "InstMarginCalID must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    data->InstMarginCalID = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品组代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_CommodityID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityID, (Py_ssize_t)sizeof(data->CommodityID));
    return PyBytes_FromString(data->CommodityID);
}

static int PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_CommodityID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMInstParamField::CommodityID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    // memset(data->CommodityID, 0, sizeof(data->CommodityID));
    // memcpy(data->CommodityID, buf, len);
    strncpy(data->CommodityID, buf, sizeof(data->CommodityID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_CommodityGroupID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityGroupID, (Py_ssize_t)sizeof(data->CommodityGroupID));
    return PyBytes_FromString(data->CommodityGroupID);
}

static int PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_CommodityGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMInstParamField::CommodityGroupID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
    // memcpy(data->CommodityGroupID, buf, len);
    strncpy(data->CommodityGroupID, buf, sizeof(data->CommodityGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMInstParamField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMInstParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMInstParamField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaSPMMInstParamFieldType_members[] = {
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPMMInstParamFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaSPMMInstParamFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// SPMM合约保证金算法
    /// typedef char TThostFtdcInstMarginCalIDType
    {
    .name = "InstMarginCalID",
    .get = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_InstMarginCalID,
    .set = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_InstMarginCalID,
    .doc = PyDoc_STR("SPMM合约保证金算法"),
    },
    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityID",
    .get = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_CommodityID,
    .set = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_CommodityID,
    .doc = PyDoc_STR("商品组代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityGroupID",
    .get = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_CommodityGroupID,
    .set = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_CommodityGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaSPMMInstParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaSPMMInstParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPMM合约参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaSPMMInstParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaSPMMInstParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaSPMMInstParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaSPMMInstParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaSPMMInstParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaSPMMInstParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPMM合约参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaSPMMInstParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaSPMMInstParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaSPMMInstParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaSPMMInstParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaSPMMInstParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaSPMMInstParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPMMInstParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPMMInstParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaSPMMInstParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaSPMMInstParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaSPMMInstParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaSPMMInstParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaSPMMInstParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaSPMMInstParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPMMInstParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPMMInstParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}