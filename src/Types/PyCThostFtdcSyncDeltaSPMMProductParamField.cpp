
#include "PyCThostFtdcSyncDeltaSPMMProductParamField.h"

///风险结算追平SPMM产品相关参数

static int PyCThostFtdcSyncDeltaSPMMProductParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ProductID", "CommodityID", "CommodityGroupID", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaSPMMProductParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPMMProductParamField_ExchangeID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcSyncDeltaSPMMProductParamField_ProductID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPMMProductParamField_ProductID_length = 0;

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcSyncDeltaSPMMProductParamField_CommodityID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPMMProductParamField_CommodityID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcSyncDeltaSPMMProductParamField_CommodityGroupID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPMMProductParamField_CommodityGroupID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaSPMMProductParamField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaSPMMProductParamField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ci", (char **)kwlist
        , &CThostFtdcSyncDeltaSPMMProductParamField_ExchangeID, &CThostFtdcSyncDeltaSPMMProductParamField_ExchangeID_length
        , &CThostFtdcSyncDeltaSPMMProductParamField_ProductID, &CThostFtdcSyncDeltaSPMMProductParamField_ProductID_length
        , &CThostFtdcSyncDeltaSPMMProductParamField_CommodityID, &CThostFtdcSyncDeltaSPMMProductParamField_CommodityID_length
        , &CThostFtdcSyncDeltaSPMMProductParamField_CommodityGroupID, &CThostFtdcSyncDeltaSPMMProductParamField_CommodityGroupID_length
        , &CThostFtdcSyncDeltaSPMMProductParamField_ActionDirection
        , &CThostFtdcSyncDeltaSPMMProductParamField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaSPMMProductParamField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaSPMMProductParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPMMProductParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaSPMMProductParamField_ExchangeID, CThostFtdcSyncDeltaSPMMProductParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaSPMMProductParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaSPMMProductParamField_ExchangeID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcSyncDeltaSPMMProductParamField_ProductID != NULL ) {
        if(CThostFtdcSyncDeltaSPMMProductParamField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaSPMMProductParamField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcSyncDeltaSPMMProductParamField_ProductID, CThostFtdcSyncDeltaSPMMProductParamField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcSyncDeltaSPMMProductParamField_ProductID, sizeof(data->ProductID));
        CThostFtdcSyncDeltaSPMMProductParamField_ProductID = NULL;
    }

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcSyncDeltaSPMMProductParamField_CommodityID != NULL ) {
        if(CThostFtdcSyncDeltaSPMMProductParamField_CommodityID_length >= (Py_ssize_t)sizeof(data->CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaSPMMProductParamField_CommodityID_length);
            return -1;
        }
        // memset(data->CommodityID, 0, sizeof(data->CommodityID));
        // memcpy(data->CommodityID, CThostFtdcSyncDeltaSPMMProductParamField_CommodityID, CThostFtdcSyncDeltaSPMMProductParamField_CommodityID_length);
        strncpy(data->CommodityID, CThostFtdcSyncDeltaSPMMProductParamField_CommodityID, sizeof(data->CommodityID));
        CThostFtdcSyncDeltaSPMMProductParamField_CommodityID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcSyncDeltaSPMMProductParamField_CommodityGroupID != NULL ) {
        if(CThostFtdcSyncDeltaSPMMProductParamField_CommodityGroupID_length >= (Py_ssize_t)sizeof(data->CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is 40)", CThostFtdcSyncDeltaSPMMProductParamField_CommodityGroupID_length);
            return -1;
        }
        // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
        // memcpy(data->CommodityGroupID, CThostFtdcSyncDeltaSPMMProductParamField_CommodityGroupID, CThostFtdcSyncDeltaSPMMProductParamField_CommodityGroupID_length);
        strncpy(data->CommodityGroupID, CThostFtdcSyncDeltaSPMMProductParamField_CommodityGroupID, sizeof(data->CommodityGroupID));
        CThostFtdcSyncDeltaSPMMProductParamField_CommodityGroupID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaSPMMProductParamField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaSPMMProductParamField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "CommodityID", data->CommodityID//, (Py_ssize_t)sizeof(data->CommodityID)
        , "CommodityGroupID", data->CommodityGroupID//, (Py_ssize_t)sizeof(data->CommodityGroupID)
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMProductParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMProductParamField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaSPMMProductParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMProductParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcSyncDeltaSPMMProductParamFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMProductParamField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品组代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamFieldType_get_CommodityID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityID, (Py_ssize_t)sizeof(data->CommodityID));
    return PyBytes_FromString(data->CommodityID);
}

static int PyCThostFtdcSyncDeltaSPMMProductParamFieldType_set_CommodityID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMProductParamField::CommodityID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);
    // memset(data->CommodityID, 0, sizeof(data->CommodityID));
    // memcpy(data->CommodityID, buf, len);
    strncpy(data->CommodityID, buf, sizeof(data->CommodityID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamFieldType_get_CommodityGroupID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityGroupID, (Py_ssize_t)sizeof(data->CommodityGroupID));
    return PyBytes_FromString(data->CommodityGroupID);
}

static int PyCThostFtdcSyncDeltaSPMMProductParamFieldType_set_CommodityGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMProductParamField::CommodityGroupID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);
    // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
    // memcpy(data->CommodityGroupID, buf, len);
    strncpy(data->CommodityGroupID, buf, sizeof(data->CommodityGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaSPMMProductParamFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPMMProductParamField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPMMProductParamFieldData>(self);
    CThostFtdcSyncDeltaSPMMProductParamField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaSPMMProductParamFieldType_members[] = {
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPMMProductParamFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaSPMMProductParamFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaSPMMProductParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaSPMMProductParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcSyncDeltaSPMMProductParamFieldType_get_ProductID,
    .set = PyCThostFtdcSyncDeltaSPMMProductParamFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityID",
    .get = PyCThostFtdcSyncDeltaSPMMProductParamFieldType_get_CommodityID,
    .set = PyCThostFtdcSyncDeltaSPMMProductParamFieldType_set_CommodityID,
    .doc = PyDoc_STR("商品组代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityGroupID",
    .get = PyCThostFtdcSyncDeltaSPMMProductParamFieldType_get_CommodityGroupID,
    .set = PyCThostFtdcSyncDeltaSPMMProductParamFieldType_set_CommodityGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaSPMMProductParamFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaSPMMProductParamFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaSPMMProductParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaSPMMProductParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPMM产品相关参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaSPMMProductParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaSPMMProductParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaSPMMProductParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaSPMMProductParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaSPMMProductParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaSPMMProductParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPMM产品相关参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaSPMMProductParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaSPMMProductParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaSPMMProductParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaSPMMProductParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaSPMMProductParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaSPMMProductParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPMMProductParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPMMProductParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaSPMMProductParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaSPMMProductParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaSPMMProductParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaSPMMProductParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaSPMMProductParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaSPMMProductParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPMMProductParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPMMProductParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}