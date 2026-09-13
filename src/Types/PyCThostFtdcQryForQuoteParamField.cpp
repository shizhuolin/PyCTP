
#include "PyCThostFtdcQryForQuoteParamField.h"

///查询询价价差参数

static int PyCThostFtdcQryForQuoteParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "reserve1", "ExchangeID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryForQuoteParamField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryForQuoteParamField_BrokerID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryForQuoteParamField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryForQuoteParamField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryForQuoteParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryForQuoteParamField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryForQuoteParamField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryForQuoteParamField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryForQuoteParamField_BrokerID, &CThostFtdcQryForQuoteParamField_BrokerID_length
        , &CThostFtdcQryForQuoteParamField_reserve1, &CThostFtdcQryForQuoteParamField_reserve1_length
        , &CThostFtdcQryForQuoteParamField_ExchangeID, &CThostFtdcQryForQuoteParamField_ExchangeID_length
        , &CThostFtdcQryForQuoteParamField_InstrumentID, &CThostFtdcQryForQuoteParamField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteParamFieldData>(self);
    CThostFtdcQryForQuoteParamField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryForQuoteParamField_BrokerID != NULL ) {
        if(CThostFtdcQryForQuoteParamField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryForQuoteParamField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryForQuoteParamField_BrokerID, CThostFtdcQryForQuoteParamField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryForQuoteParamField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryForQuoteParamField_BrokerID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryForQuoteParamField_reserve1 != NULL ) {
        if(CThostFtdcQryForQuoteParamField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryForQuoteParamField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryForQuoteParamField_reserve1, CThostFtdcQryForQuoteParamField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryForQuoteParamField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryForQuoteParamField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryForQuoteParamField_ExchangeID != NULL ) {
        if(CThostFtdcQryForQuoteParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryForQuoteParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryForQuoteParamField_ExchangeID, CThostFtdcQryForQuoteParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryForQuoteParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryForQuoteParamField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryForQuoteParamField_InstrumentID != NULL ) {
        if(CThostFtdcQryForQuoteParamField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryForQuoteParamField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryForQuoteParamField_InstrumentID, CThostFtdcQryForQuoteParamField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryForQuoteParamField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryForQuoteParamField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryForQuoteParamFieldType_repr(PyObject *self) {

    PyCThostFtdcQryForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteParamFieldData>(self);
    CThostFtdcQryForQuoteParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryForQuoteParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryForQuoteParamField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryForQuoteParamFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteParamFieldData>(self);
    CThostFtdcQryForQuoteParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryForQuoteParamFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteParamField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteParamFieldData>(self);
    CThostFtdcQryForQuoteParamField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryForQuoteParamFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteParamFieldData>(self);
    CThostFtdcQryForQuoteParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryForQuoteParamFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteParamField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteParamFieldData>(self);
    CThostFtdcQryForQuoteParamField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryForQuoteParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteParamFieldData>(self);
    CThostFtdcQryForQuoteParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryForQuoteParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteParamFieldData>(self);
    CThostFtdcQryForQuoteParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryForQuoteParamFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteParamFieldData>(self);
    CThostFtdcQryForQuoteParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryForQuoteParamFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryForQuoteParamField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryForQuoteParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteParamFieldData>(self);
    CThostFtdcQryForQuoteParamField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryForQuoteParamFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryForQuoteParamFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryForQuoteParamFieldType_get_BrokerID,
    .set = PyCThostFtdcQryForQuoteParamFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryForQuoteParamFieldType_get_reserve1,
    .set = PyCThostFtdcQryForQuoteParamFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryForQuoteParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryForQuoteParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryForQuoteParamFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryForQuoteParamFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryForQuoteParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryForQuoteParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询询价价差参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryForQuoteParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryForQuoteParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryForQuoteParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryForQuoteParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryForQuoteParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryForQuoteParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询询价价差参数")},
    {Py_tp_members, PyCThostFtdcQryForQuoteParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryForQuoteParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryForQuoteParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryForQuoteParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryForQuoteParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryForQuoteParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryForQuoteParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryForQuoteParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryForQuoteParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryForQuoteParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryForQuoteParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryForQuoteParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryForQuoteParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryForQuoteParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryForQuoteParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryForQuoteParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}