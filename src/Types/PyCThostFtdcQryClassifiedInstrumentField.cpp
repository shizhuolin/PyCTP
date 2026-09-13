
#include "PyCThostFtdcQryClassifiedInstrumentField.h"

///查询分类合约

static int PyCThostFtdcQryClassifiedInstrumentFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InstrumentID", "ExchangeID", "ExchangeInstID", "ProductID", "TradingType", "ClassType", NULL };


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryClassifiedInstrumentField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryClassifiedInstrumentField_InstrumentID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryClassifiedInstrumentField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryClassifiedInstrumentField_ExchangeID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcQryClassifiedInstrumentField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcQryClassifiedInstrumentField_ExchangeInstID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryClassifiedInstrumentField_ProductID = NULL;
    Py_ssize_t CThostFtdcQryClassifiedInstrumentField_ProductID_length = 0;

    /// 合约交易状态
    /// typedef char TThostFtdcTradingTypeType
    char CThostFtdcQryClassifiedInstrumentField_TradingType = 0;

    /// 合约分类类型
    /// typedef char TThostFtdcClassTypeType
    char CThostFtdcQryClassifiedInstrumentField_ClassType = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cc", (char **)kwlist
        , &CThostFtdcQryClassifiedInstrumentField_InstrumentID, &CThostFtdcQryClassifiedInstrumentField_InstrumentID_length
        , &CThostFtdcQryClassifiedInstrumentField_ExchangeID, &CThostFtdcQryClassifiedInstrumentField_ExchangeID_length
        , &CThostFtdcQryClassifiedInstrumentField_ExchangeInstID, &CThostFtdcQryClassifiedInstrumentField_ExchangeInstID_length
        , &CThostFtdcQryClassifiedInstrumentField_ProductID, &CThostFtdcQryClassifiedInstrumentField_ProductID_length
        , &CThostFtdcQryClassifiedInstrumentField_TradingType
        , &CThostFtdcQryClassifiedInstrumentField_ClassType
    )) {
        return -1;
    }

    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryClassifiedInstrumentField_InstrumentID != NULL ) {
        if(CThostFtdcQryClassifiedInstrumentField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryClassifiedInstrumentField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryClassifiedInstrumentField_InstrumentID, CThostFtdcQryClassifiedInstrumentField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryClassifiedInstrumentField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryClassifiedInstrumentField_InstrumentID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryClassifiedInstrumentField_ExchangeID != NULL ) {
        if(CThostFtdcQryClassifiedInstrumentField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryClassifiedInstrumentField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryClassifiedInstrumentField_ExchangeID, CThostFtdcQryClassifiedInstrumentField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryClassifiedInstrumentField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryClassifiedInstrumentField_ExchangeID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcQryClassifiedInstrumentField_ExchangeInstID != NULL ) {
        if(CThostFtdcQryClassifiedInstrumentField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcQryClassifiedInstrumentField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcQryClassifiedInstrumentField_ExchangeInstID, CThostFtdcQryClassifiedInstrumentField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcQryClassifiedInstrumentField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcQryClassifiedInstrumentField_ExchangeInstID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryClassifiedInstrumentField_ProductID != NULL ) {
        if(CThostFtdcQryClassifiedInstrumentField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcQryClassifiedInstrumentField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcQryClassifiedInstrumentField_ProductID, CThostFtdcQryClassifiedInstrumentField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcQryClassifiedInstrumentField_ProductID, sizeof(data->ProductID));
        CThostFtdcQryClassifiedInstrumentField_ProductID = NULL;
    }

    /// 合约交易状态
    /// typedef char TThostFtdcTradingTypeType
    data->TradingType = CThostFtdcQryClassifiedInstrumentField_TradingType;

    /// 合约分类类型
    /// typedef char TThostFtdcClassTypeType
    data->ClassType = CThostFtdcQryClassifiedInstrumentField_ClassType;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryClassifiedInstrumentFieldType_repr(PyObject *self) {

    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:c}"
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "TradingType", data->TradingType
        , "ClassType", data->ClassType
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryClassifiedInstrumentField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryClassifiedInstrumentField repr");
        return NULL;
    }

    return repr;
}


/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryClassifiedInstrumentFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryClassifiedInstrumentFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryClassifiedInstrumentField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryClassifiedInstrumentFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryClassifiedInstrumentFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryClassifiedInstrumentField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcQryClassifiedInstrumentFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcQryClassifiedInstrumentFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryClassifiedInstrumentField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryClassifiedInstrumentFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcQryClassifiedInstrumentFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryClassifiedInstrumentField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约交易状态
/// typedef char TThostFtdcTradingTypeType
static PyObject *PyCThostFtdcQryClassifiedInstrumentFieldType_get_TradingType(PyObject *self, void *closure) {
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradingType), 1);
}

static int PyCThostFtdcQryClassifiedInstrumentFieldType_set_TradingType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryClassifiedInstrumentField::TradingType)) {
        PyErr_SetString(PyExc_ValueError, "TradingType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    data->TradingType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约分类类型
/// typedef char TThostFtdcClassTypeType
static PyObject *PyCThostFtdcQryClassifiedInstrumentFieldType_get_ClassType(PyObject *self, void *closure) {
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ClassType), 1);
}

static int PyCThostFtdcQryClassifiedInstrumentFieldType_set_ClassType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClassType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryClassifiedInstrumentField::ClassType)) {
        PyErr_SetString(PyExc_ValueError, "ClassType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryClassifiedInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(self);
    CThostFtdcQryClassifiedInstrumentField *data = &(extra->data);
    data->ClassType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryClassifiedInstrumentFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryClassifiedInstrumentFieldType_getsets[] = {
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryClassifiedInstrumentFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryClassifiedInstrumentFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryClassifiedInstrumentFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryClassifiedInstrumentFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcQryClassifiedInstrumentFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcQryClassifiedInstrumentFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcQryClassifiedInstrumentFieldType_get_ProductID,
    .set = PyCThostFtdcQryClassifiedInstrumentFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 合约交易状态
    /// typedef char TThostFtdcTradingTypeType
    {
    .name = "TradingType",
    .get = PyCThostFtdcQryClassifiedInstrumentFieldType_get_TradingType,
    .set = PyCThostFtdcQryClassifiedInstrumentFieldType_set_TradingType,
    .doc = PyDoc_STR("合约交易状态"),
    },
    /// 合约分类类型
    /// typedef char TThostFtdcClassTypeType
    {
    .name = "ClassType",
    .get = PyCThostFtdcQryClassifiedInstrumentFieldType_get_ClassType,
    .set = PyCThostFtdcQryClassifiedInstrumentFieldType_set_ClassType,
    .doc = PyDoc_STR("合约分类类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryClassifiedInstrumentFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryClassifiedInstrumentField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询分类合约")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryClassifiedInstrumentFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryClassifiedInstrumentFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryClassifiedInstrumentFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryClassifiedInstrumentFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryClassifiedInstrumentFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryClassifiedInstrumentFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询分类合约")},
    {Py_tp_members, PyCThostFtdcQryClassifiedInstrumentFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryClassifiedInstrumentFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryClassifiedInstrumentFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryClassifiedInstrumentFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryClassifiedInstrumentFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryClassifiedInstrumentField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryClassifiedInstrumentFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryClassifiedInstrumentFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryClassifiedInstrumentFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryClassifiedInstrumentFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryClassifiedInstrumentFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryClassifiedInstrumentFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryClassifiedInstrumentFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryClassifiedInstrumentFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryClassifiedInstrumentField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryClassifiedInstrumentField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}