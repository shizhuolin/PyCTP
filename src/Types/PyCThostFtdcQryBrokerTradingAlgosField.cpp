
#include "PyCThostFtdcQryBrokerTradingAlgosField.h"

///查询经纪公司交易算法

static int PyCThostFtdcQryBrokerTradingAlgosFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "ExchangeID", "reserve1", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryBrokerTradingAlgosField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryBrokerTradingAlgosField_BrokerID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryBrokerTradingAlgosField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryBrokerTradingAlgosField_ExchangeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryBrokerTradingAlgosField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryBrokerTradingAlgosField_reserve1_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryBrokerTradingAlgosField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryBrokerTradingAlgosField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryBrokerTradingAlgosField_BrokerID, &CThostFtdcQryBrokerTradingAlgosField_BrokerID_length
        , &CThostFtdcQryBrokerTradingAlgosField_ExchangeID, &CThostFtdcQryBrokerTradingAlgosField_ExchangeID_length
        , &CThostFtdcQryBrokerTradingAlgosField_reserve1, &CThostFtdcQryBrokerTradingAlgosField_reserve1_length
        , &CThostFtdcQryBrokerTradingAlgosField_InstrumentID, &CThostFtdcQryBrokerTradingAlgosField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingAlgosFieldData>(self);
    CThostFtdcQryBrokerTradingAlgosField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryBrokerTradingAlgosField_BrokerID != NULL ) {
        if(CThostFtdcQryBrokerTradingAlgosField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryBrokerTradingAlgosField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryBrokerTradingAlgosField_BrokerID, CThostFtdcQryBrokerTradingAlgosField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryBrokerTradingAlgosField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryBrokerTradingAlgosField_BrokerID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryBrokerTradingAlgosField_ExchangeID != NULL ) {
        if(CThostFtdcQryBrokerTradingAlgosField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryBrokerTradingAlgosField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryBrokerTradingAlgosField_ExchangeID, CThostFtdcQryBrokerTradingAlgosField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryBrokerTradingAlgosField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryBrokerTradingAlgosField_ExchangeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryBrokerTradingAlgosField_reserve1 != NULL ) {
        if(CThostFtdcQryBrokerTradingAlgosField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryBrokerTradingAlgosField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryBrokerTradingAlgosField_reserve1, CThostFtdcQryBrokerTradingAlgosField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryBrokerTradingAlgosField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryBrokerTradingAlgosField_reserve1 = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryBrokerTradingAlgosField_InstrumentID != NULL ) {
        if(CThostFtdcQryBrokerTradingAlgosField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryBrokerTradingAlgosField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryBrokerTradingAlgosField_InstrumentID, CThostFtdcQryBrokerTradingAlgosField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryBrokerTradingAlgosField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryBrokerTradingAlgosField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryBrokerTradingAlgosFieldType_repr(PyObject *self) {

    PyCThostFtdcQryBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingAlgosFieldData>(self);
    CThostFtdcQryBrokerTradingAlgosField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerTradingAlgosField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerTradingAlgosField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryBrokerTradingAlgosFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingAlgosFieldData>(self);
    CThostFtdcQryBrokerTradingAlgosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryBrokerTradingAlgosFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerTradingAlgosField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingAlgosFieldData>(self);
    CThostFtdcQryBrokerTradingAlgosField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryBrokerTradingAlgosFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingAlgosFieldData>(self);
    CThostFtdcQryBrokerTradingAlgosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryBrokerTradingAlgosFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerTradingAlgosField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingAlgosFieldData>(self);
    CThostFtdcQryBrokerTradingAlgosField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryBrokerTradingAlgosFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingAlgosFieldData>(self);
    CThostFtdcQryBrokerTradingAlgosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryBrokerTradingAlgosFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerTradingAlgosField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingAlgosFieldData>(self);
    CThostFtdcQryBrokerTradingAlgosField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryBrokerTradingAlgosFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingAlgosFieldData>(self);
    CThostFtdcQryBrokerTradingAlgosField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryBrokerTradingAlgosFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerTradingAlgosField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerTradingAlgosFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingAlgosFieldData>(self);
    CThostFtdcQryBrokerTradingAlgosField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryBrokerTradingAlgosFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryBrokerTradingAlgosFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryBrokerTradingAlgosFieldType_get_BrokerID,
    .set = PyCThostFtdcQryBrokerTradingAlgosFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryBrokerTradingAlgosFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryBrokerTradingAlgosFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryBrokerTradingAlgosFieldType_get_reserve1,
    .set = PyCThostFtdcQryBrokerTradingAlgosFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryBrokerTradingAlgosFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryBrokerTradingAlgosFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryBrokerTradingAlgosFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryBrokerTradingAlgosField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询经纪公司交易算法")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryBrokerTradingAlgosFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryBrokerTradingAlgosFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryBrokerTradingAlgosFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryBrokerTradingAlgosFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryBrokerTradingAlgosFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryBrokerTradingAlgosFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询经纪公司交易算法")},
    {Py_tp_members, PyCThostFtdcQryBrokerTradingAlgosFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryBrokerTradingAlgosFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryBrokerTradingAlgosFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryBrokerTradingAlgosFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryBrokerTradingAlgosFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryBrokerTradingAlgosField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryBrokerTradingAlgosFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryBrokerTradingAlgosFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryBrokerTradingAlgosFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryBrokerTradingAlgosFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryBrokerTradingAlgosFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryBrokerTradingAlgosFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryBrokerTradingAlgosFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryBrokerTradingAlgosFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryBrokerTradingAlgosField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBrokerTradingAlgosField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}