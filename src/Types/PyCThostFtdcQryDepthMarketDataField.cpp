
#include "PyCThostFtdcQryDepthMarketDataField.h"

///查询行情

static int PyCThostFtdcQryDepthMarketDataFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "ExchangeID", "InstrumentID", "ProductClass", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryDepthMarketDataField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryDepthMarketDataField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryDepthMarketDataField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryDepthMarketDataField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryDepthMarketDataField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryDepthMarketDataField_InstrumentID_length = 0;

    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    char CThostFtdcQryDepthMarketDataField_ProductClass = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#c", (char **)kwlist
        , &CThostFtdcQryDepthMarketDataField_reserve1, &CThostFtdcQryDepthMarketDataField_reserve1_length
        , &CThostFtdcQryDepthMarketDataField_ExchangeID, &CThostFtdcQryDepthMarketDataField_ExchangeID_length
        , &CThostFtdcQryDepthMarketDataField_InstrumentID, &CThostFtdcQryDepthMarketDataField_InstrumentID_length
        , &CThostFtdcQryDepthMarketDataField_ProductClass
    )) {
        return -1;
    }

    PyCThostFtdcQryDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepthMarketDataFieldData>(self);
    CThostFtdcQryDepthMarketDataField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryDepthMarketDataField_reserve1 != NULL ) {
        if(CThostFtdcQryDepthMarketDataField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryDepthMarketDataField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryDepthMarketDataField_reserve1, CThostFtdcQryDepthMarketDataField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryDepthMarketDataField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryDepthMarketDataField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryDepthMarketDataField_ExchangeID != NULL ) {
        if(CThostFtdcQryDepthMarketDataField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryDepthMarketDataField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryDepthMarketDataField_ExchangeID, CThostFtdcQryDepthMarketDataField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryDepthMarketDataField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryDepthMarketDataField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryDepthMarketDataField_InstrumentID != NULL ) {
        if(CThostFtdcQryDepthMarketDataField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryDepthMarketDataField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryDepthMarketDataField_InstrumentID, CThostFtdcQryDepthMarketDataField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryDepthMarketDataField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryDepthMarketDataField_InstrumentID = NULL;
    }

    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    data->ProductClass = CThostFtdcQryDepthMarketDataField_ProductClass;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryDepthMarketDataFieldType_repr(PyObject *self) {

    PyCThostFtdcQryDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepthMarketDataFieldData>(self);
    CThostFtdcQryDepthMarketDataField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ProductClass", data->ProductClass
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryDepthMarketDataField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryDepthMarketDataField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryDepthMarketDataFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepthMarketDataFieldData>(self);
    CThostFtdcQryDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryDepthMarketDataFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryDepthMarketDataField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepthMarketDataFieldData>(self);
    CThostFtdcQryDepthMarketDataField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryDepthMarketDataFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepthMarketDataFieldData>(self);
    CThostFtdcQryDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryDepthMarketDataFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryDepthMarketDataField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepthMarketDataFieldData>(self);
    CThostFtdcQryDepthMarketDataField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryDepthMarketDataFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepthMarketDataFieldData>(self);
    CThostFtdcQryDepthMarketDataField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryDepthMarketDataFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryDepthMarketDataField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepthMarketDataFieldData>(self);
    CThostFtdcQryDepthMarketDataField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品类型
/// typedef char TThostFtdcProductClassType
static PyObject *PyCThostFtdcQryDepthMarketDataFieldType_get_ProductClass(PyObject *self, void *closure) {
    PyCThostFtdcQryDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepthMarketDataFieldData>(self);
    CThostFtdcQryDepthMarketDataField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ProductClass), 1);
}

static int PyCThostFtdcQryDepthMarketDataFieldType_set_ProductClass(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductClass Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryDepthMarketDataField::ProductClass)) {
        PyErr_SetString(PyExc_ValueError, "ProductClass must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryDepthMarketDataFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepthMarketDataFieldData>(self);
    CThostFtdcQryDepthMarketDataField *data = &(extra->data);
    data->ProductClass = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryDepthMarketDataFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryDepthMarketDataFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryDepthMarketDataFieldType_get_reserve1,
    .set = PyCThostFtdcQryDepthMarketDataFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryDepthMarketDataFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryDepthMarketDataFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryDepthMarketDataFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryDepthMarketDataFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    {
    .name = "ProductClass",
    .get = PyCThostFtdcQryDepthMarketDataFieldType_get_ProductClass,
    .set = PyCThostFtdcQryDepthMarketDataFieldType_set_ProductClass,
    .doc = PyDoc_STR("产品类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryDepthMarketDataFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryDepthMarketDataField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询行情")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryDepthMarketDataFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryDepthMarketDataFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryDepthMarketDataFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryDepthMarketDataFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryDepthMarketDataFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryDepthMarketDataFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询行情")},
    {Py_tp_members, PyCThostFtdcQryDepthMarketDataFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryDepthMarketDataFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryDepthMarketDataFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryDepthMarketDataFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryDepthMarketDataFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryDepthMarketDataField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryDepthMarketDataFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryDepthMarketDataFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryDepthMarketDataFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryDepthMarketDataFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryDepthMarketDataFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryDepthMarketDataFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryDepthMarketDataFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryDepthMarketDataFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryDepthMarketDataField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryDepthMarketDataField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}