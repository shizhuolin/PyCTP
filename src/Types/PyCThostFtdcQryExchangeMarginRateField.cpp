
#include "PyCThostFtdcQryExchangeMarginRateField.h"

///查询交易所保证金率

static int PyCThostFtdcQryExchangeMarginRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "reserve1", "HedgeFlag", "ExchangeID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryExchangeMarginRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryExchangeMarginRateField_BrokerID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryExchangeMarginRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryExchangeMarginRateField_reserve1_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcQryExchangeMarginRateField_HedgeFlag = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryExchangeMarginRateField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryExchangeMarginRateField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryExchangeMarginRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryExchangeMarginRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#", (char **)kwlist
        , &CThostFtdcQryExchangeMarginRateField_BrokerID, &CThostFtdcQryExchangeMarginRateField_BrokerID_length
        , &CThostFtdcQryExchangeMarginRateField_reserve1, &CThostFtdcQryExchangeMarginRateField_reserve1_length
        , &CThostFtdcQryExchangeMarginRateField_HedgeFlag
        , &CThostFtdcQryExchangeMarginRateField_ExchangeID, &CThostFtdcQryExchangeMarginRateField_ExchangeID_length
        , &CThostFtdcQryExchangeMarginRateField_InstrumentID, &CThostFtdcQryExchangeMarginRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryExchangeMarginRateField_BrokerID != NULL ) {
        if(CThostFtdcQryExchangeMarginRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryExchangeMarginRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryExchangeMarginRateField_BrokerID, CThostFtdcQryExchangeMarginRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryExchangeMarginRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryExchangeMarginRateField_BrokerID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryExchangeMarginRateField_reserve1 != NULL ) {
        if(CThostFtdcQryExchangeMarginRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryExchangeMarginRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryExchangeMarginRateField_reserve1, CThostFtdcQryExchangeMarginRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryExchangeMarginRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryExchangeMarginRateField_reserve1 = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcQryExchangeMarginRateField_HedgeFlag;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryExchangeMarginRateField_ExchangeID != NULL ) {
        if(CThostFtdcQryExchangeMarginRateField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryExchangeMarginRateField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryExchangeMarginRateField_ExchangeID, CThostFtdcQryExchangeMarginRateField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryExchangeMarginRateField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryExchangeMarginRateField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryExchangeMarginRateField_InstrumentID != NULL ) {
        if(CThostFtdcQryExchangeMarginRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryExchangeMarginRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryExchangeMarginRateField_InstrumentID, CThostFtdcQryExchangeMarginRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryExchangeMarginRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryExchangeMarginRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryExchangeMarginRateFieldType_repr(PyObject *self) {

    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "HedgeFlag", data->HedgeFlag
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeMarginRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeMarginRateField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryExchangeMarginRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryExchangeMarginRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeMarginRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryExchangeMarginRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryExchangeMarginRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeMarginRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcQryExchangeMarginRateFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcQryExchangeMarginRateFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryExchangeMarginRateField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryExchangeMarginRateFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryExchangeMarginRateFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeMarginRateField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryExchangeMarginRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryExchangeMarginRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeMarginRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(self);
    CThostFtdcQryExchangeMarginRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryExchangeMarginRateFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryExchangeMarginRateFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryExchangeMarginRateFieldType_get_BrokerID,
    .set = PyCThostFtdcQryExchangeMarginRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryExchangeMarginRateFieldType_get_reserve1,
    .set = PyCThostFtdcQryExchangeMarginRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcQryExchangeMarginRateFieldType_get_HedgeFlag,
    .set = PyCThostFtdcQryExchangeMarginRateFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryExchangeMarginRateFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryExchangeMarginRateFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryExchangeMarginRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryExchangeMarginRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryExchangeMarginRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryExchangeMarginRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询交易所保证金率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryExchangeMarginRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryExchangeMarginRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryExchangeMarginRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryExchangeMarginRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryExchangeMarginRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryExchangeMarginRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询交易所保证金率")},
    {Py_tp_members, PyCThostFtdcQryExchangeMarginRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryExchangeMarginRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryExchangeMarginRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryExchangeMarginRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryExchangeMarginRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryExchangeMarginRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryExchangeMarginRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryExchangeMarginRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryExchangeMarginRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryExchangeMarginRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryExchangeMarginRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryExchangeMarginRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryExchangeMarginRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryExchangeMarginRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryExchangeMarginRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeMarginRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}