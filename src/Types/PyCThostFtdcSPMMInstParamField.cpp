
#include "PyCThostFtdcSPMMInstParamField.h"

///SPMM合约参数

static int PyCThostFtdcSPMMInstParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "InstrumentID", "InstMarginCalID", "CommodityID", "CommodityGroupID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSPMMInstParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSPMMInstParamField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSPMMInstParamField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSPMMInstParamField_InstrumentID_length = 0;

    /// SPMM合约保证金算法
    /// typedef char TThostFtdcInstMarginCalIDType
    char CThostFtdcSPMMInstParamField_InstMarginCalID = 0;

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcSPMMInstParamField_CommodityID = NULL;
    Py_ssize_t CThostFtdcSPMMInstParamField_CommodityID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcSPMMInstParamField_CommodityGroupID = NULL;
    Py_ssize_t CThostFtdcSPMMInstParamField_CommodityGroupID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#", (char **)kwlist
        , &CThostFtdcSPMMInstParamField_ExchangeID, &CThostFtdcSPMMInstParamField_ExchangeID_length
        , &CThostFtdcSPMMInstParamField_InstrumentID, &CThostFtdcSPMMInstParamField_InstrumentID_length
        , &CThostFtdcSPMMInstParamField_InstMarginCalID
        , &CThostFtdcSPMMInstParamField_CommodityID, &CThostFtdcSPMMInstParamField_CommodityID_length
        , &CThostFtdcSPMMInstParamField_CommodityGroupID, &CThostFtdcSPMMInstParamField_CommodityGroupID_length
    )) {
        return -1;
    }

    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSPMMInstParamField_ExchangeID != NULL ) {
        if(CThostFtdcSPMMInstParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSPMMInstParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSPMMInstParamField_ExchangeID, CThostFtdcSPMMInstParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSPMMInstParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSPMMInstParamField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSPMMInstParamField_InstrumentID != NULL ) {
        if(CThostFtdcSPMMInstParamField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSPMMInstParamField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSPMMInstParamField_InstrumentID, CThostFtdcSPMMInstParamField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSPMMInstParamField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSPMMInstParamField_InstrumentID = NULL;
    }

    /// SPMM合约保证金算法
    /// typedef char TThostFtdcInstMarginCalIDType
    data->InstMarginCalID = CThostFtdcSPMMInstParamField_InstMarginCalID;

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcSPMMInstParamField_CommodityID != NULL ) {
        if(CThostFtdcSPMMInstParamField_CommodityID_length >= (Py_ssize_t)sizeof(data->CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is 40)", CThostFtdcSPMMInstParamField_CommodityID_length);
            return -1;
        }
        // memset(data->CommodityID, 0, sizeof(data->CommodityID));
        // memcpy(data->CommodityID, CThostFtdcSPMMInstParamField_CommodityID, CThostFtdcSPMMInstParamField_CommodityID_length);
        strncpy(data->CommodityID, CThostFtdcSPMMInstParamField_CommodityID, sizeof(data->CommodityID));
        CThostFtdcSPMMInstParamField_CommodityID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcSPMMInstParamField_CommodityGroupID != NULL ) {
        if(CThostFtdcSPMMInstParamField_CommodityGroupID_length >= (Py_ssize_t)sizeof(data->CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is 40)", CThostFtdcSPMMInstParamField_CommodityGroupID_length);
            return -1;
        }
        // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
        // memcpy(data->CommodityGroupID, CThostFtdcSPMMInstParamField_CommodityGroupID, CThostFtdcSPMMInstParamField_CommodityGroupID_length);
        strncpy(data->CommodityGroupID, CThostFtdcSPMMInstParamField_CommodityGroupID, sizeof(data->CommodityGroupID));
        CThostFtdcSPMMInstParamField_CommodityGroupID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSPMMInstParamFieldType_repr(PyObject *self) {

    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "InstMarginCalID", data->InstMarginCalID
        , "CommodityID", data->CommodityID//, (Py_ssize_t)sizeof(data->CommodityID)
        , "CommodityGroupID", data->CommodityGroupID//, (Py_ssize_t)sizeof(data->CommodityGroupID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPMMInstParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPMMInstParamField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSPMMInstParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSPMMInstParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPMMInstParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSPMMInstParamFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSPMMInstParamFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPMMInstParamField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// SPMM合约保证金算法
/// typedef char TThostFtdcInstMarginCalIDType
static PyObject *PyCThostFtdcSPMMInstParamFieldType_get_InstMarginCalID(PyObject *self, void *closure) {
    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InstMarginCalID), 1);
}

static int PyCThostFtdcSPMMInstParamFieldType_set_InstMarginCalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstMarginCalID Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSPMMInstParamField::InstMarginCalID)) {
        PyErr_SetString(PyExc_ValueError, "InstMarginCalID must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);
    data->InstMarginCalID = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品组代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcSPMMInstParamFieldType_get_CommodityID(PyObject *self, void *closure) {
    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityID, (Py_ssize_t)sizeof(data->CommodityID));
    return PyBytes_FromString(data->CommodityID);
}

static int PyCThostFtdcSPMMInstParamFieldType_set_CommodityID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPMMInstParamField::CommodityID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);
    // memset(data->CommodityID, 0, sizeof(data->CommodityID));
    // memcpy(data->CommodityID, buf, len);
    strncpy(data->CommodityID, buf, sizeof(data->CommodityID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcSPMMInstParamFieldType_get_CommodityGroupID(PyObject *self, void *closure) {
    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityGroupID, (Py_ssize_t)sizeof(data->CommodityGroupID));
    return PyBytes_FromString(data->CommodityGroupID);
}

static int PyCThostFtdcSPMMInstParamFieldType_set_CommodityGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPMMInstParamField::CommodityGroupID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(self);
    CThostFtdcSPMMInstParamField *data = &(extra->data);
    // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
    // memcpy(data->CommodityGroupID, buf, len);
    strncpy(data->CommodityGroupID, buf, sizeof(data->CommodityGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSPMMInstParamFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSPMMInstParamFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSPMMInstParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcSPMMInstParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSPMMInstParamFieldType_get_InstrumentID,
    .set = PyCThostFtdcSPMMInstParamFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// SPMM合约保证金算法
    /// typedef char TThostFtdcInstMarginCalIDType
    {
    .name = "InstMarginCalID",
    .get = PyCThostFtdcSPMMInstParamFieldType_get_InstMarginCalID,
    .set = PyCThostFtdcSPMMInstParamFieldType_set_InstMarginCalID,
    .doc = PyDoc_STR("SPMM合约保证金算法"),
    },
    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityID",
    .get = PyCThostFtdcSPMMInstParamFieldType_get_CommodityID,
    .set = PyCThostFtdcSPMMInstParamFieldType_set_CommodityID,
    .doc = PyDoc_STR("商品组代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityGroupID",
    .get = PyCThostFtdcSPMMInstParamFieldType_get_CommodityGroupID,
    .set = PyCThostFtdcSPMMInstParamFieldType_set_CommodityGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSPMMInstParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSPMMInstParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPMM合约参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSPMMInstParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSPMMInstParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSPMMInstParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSPMMInstParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSPMMInstParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSPMMInstParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPMM合约参数")},
    {Py_tp_members, PyCThostFtdcSPMMInstParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcSPMMInstParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSPMMInstParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSPMMInstParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSPMMInstParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcSPMMInstParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSPMMInstParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSPMMInstParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSPMMInstParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSPMMInstParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSPMMInstParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSPMMInstParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSPMMInstParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSPMMInstParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSPMMInstParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPMMInstParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}