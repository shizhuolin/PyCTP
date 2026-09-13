
#include "PyCThostFtdcForQuoteParamField.h"

///询价价差参数

static int PyCThostFtdcForQuoteParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "reserve1", "ExchangeID", "LastPrice", "PriceInterval", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcForQuoteParamField_BrokerID = NULL;
    Py_ssize_t CThostFtdcForQuoteParamField_BrokerID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcForQuoteParamField_reserve1 = NULL;
    Py_ssize_t CThostFtdcForQuoteParamField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcForQuoteParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcForQuoteParamField_ExchangeID_length = 0;

    /// 最新价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcForQuoteParamField_LastPrice = 0.0;

    /// 价差
    /// typedef double TThostFtdcPriceType
    double CThostFtdcForQuoteParamField_PriceInterval = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcForQuoteParamField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcForQuoteParamField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddy#", (char **)kwlist
        , &CThostFtdcForQuoteParamField_BrokerID, &CThostFtdcForQuoteParamField_BrokerID_length
        , &CThostFtdcForQuoteParamField_reserve1, &CThostFtdcForQuoteParamField_reserve1_length
        , &CThostFtdcForQuoteParamField_ExchangeID, &CThostFtdcForQuoteParamField_ExchangeID_length
        , &CThostFtdcForQuoteParamField_LastPrice
        , &CThostFtdcForQuoteParamField_PriceInterval
        , &CThostFtdcForQuoteParamField_InstrumentID, &CThostFtdcForQuoteParamField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteParamFieldData>(self);
    CThostFtdcForQuoteParamField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcForQuoteParamField_BrokerID != NULL ) {
        if(CThostFtdcForQuoteParamField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcForQuoteParamField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcForQuoteParamField_BrokerID, CThostFtdcForQuoteParamField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcForQuoteParamField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcForQuoteParamField_BrokerID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcForQuoteParamField_reserve1 != NULL ) {
        if(CThostFtdcForQuoteParamField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcForQuoteParamField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcForQuoteParamField_reserve1, CThostFtdcForQuoteParamField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcForQuoteParamField_reserve1, sizeof(data->reserve1));
        CThostFtdcForQuoteParamField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcForQuoteParamField_ExchangeID != NULL ) {
        if(CThostFtdcForQuoteParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcForQuoteParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcForQuoteParamField_ExchangeID, CThostFtdcForQuoteParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcForQuoteParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcForQuoteParamField_ExchangeID = NULL;
    }

    /// 最新价
    /// typedef double TThostFtdcPriceType
    data->LastPrice = CThostFtdcForQuoteParamField_LastPrice;

    /// 价差
    /// typedef double TThostFtdcPriceType
    data->PriceInterval = CThostFtdcForQuoteParamField_PriceInterval;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcForQuoteParamField_InstrumentID != NULL ) {
        if(CThostFtdcForQuoteParamField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcForQuoteParamField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcForQuoteParamField_InstrumentID, CThostFtdcForQuoteParamField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcForQuoteParamField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcForQuoteParamField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcForQuoteParamFieldType_repr(PyObject *self) {

    PyCThostFtdcForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteParamFieldData>(self);
    CThostFtdcForQuoteParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "LastPrice", data->LastPrice
        , "PriceInterval", data->PriceInterval
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForQuoteParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForQuoteParamField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcForQuoteParamFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteParamFieldData>(self);
    CThostFtdcForQuoteParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcForQuoteParamFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteParamField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteParamFieldData>(self);
    CThostFtdcForQuoteParamField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcForQuoteParamFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteParamFieldData>(self);
    CThostFtdcForQuoteParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcForQuoteParamFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteParamField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteParamFieldData>(self);
    CThostFtdcForQuoteParamField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcForQuoteParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteParamFieldData>(self);
    CThostFtdcForQuoteParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcForQuoteParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteParamFieldData>(self);
    CThostFtdcForQuoteParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcForQuoteParamFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteParamFieldData>(self);
    CThostFtdcForQuoteParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcForQuoteParamFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForQuoteParamField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForQuoteParamFieldData>(self);
    CThostFtdcForQuoteParamField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcForQuoteParamFieldType_members[] = {
    /// 最新价
    /// typedef double TThostFtdcPriceType
    {
        .name = "LastPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcForQuoteParamFieldData, data.LastPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最新价")
    },
    /// 价差
    /// typedef double TThostFtdcPriceType
    {
        .name = "PriceInterval",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcForQuoteParamFieldData, data.PriceInterval),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("价差")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcForQuoteParamFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcForQuoteParamFieldType_get_BrokerID,
    .set = PyCThostFtdcForQuoteParamFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcForQuoteParamFieldType_get_reserve1,
    .set = PyCThostFtdcForQuoteParamFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcForQuoteParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcForQuoteParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcForQuoteParamFieldType_get_InstrumentID,
    .set = PyCThostFtdcForQuoteParamFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcForQuoteParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcForQuoteParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("询价价差参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcForQuoteParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcForQuoteParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcForQuoteParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcForQuoteParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcForQuoteParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcForQuoteParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("询价价差参数")},
    {Py_tp_members, PyCThostFtdcForQuoteParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcForQuoteParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcForQuoteParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcForQuoteParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcForQuoteParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcForQuoteParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcForQuoteParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcForQuoteParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcForQuoteParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcForQuoteParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcForQuoteParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcForQuoteParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcForQuoteParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcForQuoteParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcForQuoteParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcForQuoteParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}