
#include "PyCThostFtdcCombInstrumentGuardField.h"

///组合合约安全系数

static int PyCThostFtdcCombInstrumentGuardFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "reserve1", "GuarantRatio", "ExchangeID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcCombInstrumentGuardField_BrokerID = NULL;
    Py_ssize_t CThostFtdcCombInstrumentGuardField_BrokerID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcCombInstrumentGuardField_reserve1 = NULL;
    Py_ssize_t CThostFtdcCombInstrumentGuardField_reserve1_length = 0;

    /// 
    /// typedef double TThostFtdcRatioType
    double CThostFtdcCombInstrumentGuardField_GuarantRatio = 0.0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcCombInstrumentGuardField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcCombInstrumentGuardField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcCombInstrumentGuardField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcCombInstrumentGuardField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#y#", (char **)kwlist
        , &CThostFtdcCombInstrumentGuardField_BrokerID, &CThostFtdcCombInstrumentGuardField_BrokerID_length
        , &CThostFtdcCombInstrumentGuardField_reserve1, &CThostFtdcCombInstrumentGuardField_reserve1_length
        , &CThostFtdcCombInstrumentGuardField_GuarantRatio
        , &CThostFtdcCombInstrumentGuardField_ExchangeID, &CThostFtdcCombInstrumentGuardField_ExchangeID_length
        , &CThostFtdcCombInstrumentGuardField_InstrumentID, &CThostFtdcCombInstrumentGuardField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcCombInstrumentGuardFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombInstrumentGuardFieldData>(self);
    CThostFtdcCombInstrumentGuardField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcCombInstrumentGuardField_BrokerID != NULL ) {
        if(CThostFtdcCombInstrumentGuardField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcCombInstrumentGuardField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcCombInstrumentGuardField_BrokerID, CThostFtdcCombInstrumentGuardField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcCombInstrumentGuardField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcCombInstrumentGuardField_BrokerID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcCombInstrumentGuardField_reserve1 != NULL ) {
        if(CThostFtdcCombInstrumentGuardField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcCombInstrumentGuardField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcCombInstrumentGuardField_reserve1, CThostFtdcCombInstrumentGuardField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcCombInstrumentGuardField_reserve1, sizeof(data->reserve1));
        CThostFtdcCombInstrumentGuardField_reserve1 = NULL;
    }

    /// 
    /// typedef double TThostFtdcRatioType
    data->GuarantRatio = CThostFtdcCombInstrumentGuardField_GuarantRatio;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcCombInstrumentGuardField_ExchangeID != NULL ) {
        if(CThostFtdcCombInstrumentGuardField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcCombInstrumentGuardField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcCombInstrumentGuardField_ExchangeID, CThostFtdcCombInstrumentGuardField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcCombInstrumentGuardField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcCombInstrumentGuardField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcCombInstrumentGuardField_InstrumentID != NULL ) {
        if(CThostFtdcCombInstrumentGuardField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcCombInstrumentGuardField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcCombInstrumentGuardField_InstrumentID, CThostFtdcCombInstrumentGuardField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcCombInstrumentGuardField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcCombInstrumentGuardField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCombInstrumentGuardFieldType_repr(PyObject *self) {

    PyCThostFtdcCombInstrumentGuardFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombInstrumentGuardFieldData>(self);
    CThostFtdcCombInstrumentGuardField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "GuarantRatio", data->GuarantRatio
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombInstrumentGuardField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombInstrumentGuardField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcCombInstrumentGuardFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcCombInstrumentGuardFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombInstrumentGuardFieldData>(self);
    CThostFtdcCombInstrumentGuardField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcCombInstrumentGuardFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombInstrumentGuardField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombInstrumentGuardFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombInstrumentGuardFieldData>(self);
    CThostFtdcCombInstrumentGuardField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcCombInstrumentGuardFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcCombInstrumentGuardFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombInstrumentGuardFieldData>(self);
    CThostFtdcCombInstrumentGuardField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcCombInstrumentGuardFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombInstrumentGuardField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombInstrumentGuardFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombInstrumentGuardFieldData>(self);
    CThostFtdcCombInstrumentGuardField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcCombInstrumentGuardFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcCombInstrumentGuardFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombInstrumentGuardFieldData>(self);
    CThostFtdcCombInstrumentGuardField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcCombInstrumentGuardFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombInstrumentGuardField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombInstrumentGuardFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombInstrumentGuardFieldData>(self);
    CThostFtdcCombInstrumentGuardField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcCombInstrumentGuardFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcCombInstrumentGuardFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombInstrumentGuardFieldData>(self);
    CThostFtdcCombInstrumentGuardField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcCombInstrumentGuardFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombInstrumentGuardField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombInstrumentGuardFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombInstrumentGuardFieldData>(self);
    CThostFtdcCombInstrumentGuardField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCombInstrumentGuardFieldType_members[] = {
    /// 
    /// typedef double TThostFtdcRatioType
    {
        .name = "GuarantRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCombInstrumentGuardFieldData, data.GuarantRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCombInstrumentGuardFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcCombInstrumentGuardFieldType_get_BrokerID,
    .set = PyCThostFtdcCombInstrumentGuardFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcCombInstrumentGuardFieldType_get_reserve1,
    .set = PyCThostFtdcCombInstrumentGuardFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcCombInstrumentGuardFieldType_get_ExchangeID,
    .set = PyCThostFtdcCombInstrumentGuardFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcCombInstrumentGuardFieldType_get_InstrumentID,
    .set = PyCThostFtdcCombInstrumentGuardFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCombInstrumentGuardFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCombInstrumentGuardField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("组合合约安全系数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCombInstrumentGuardFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCombInstrumentGuardFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCombInstrumentGuardFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCombInstrumentGuardFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCombInstrumentGuardFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCombInstrumentGuardFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("组合合约安全系数")},
    {Py_tp_members, PyCThostFtdcCombInstrumentGuardFieldType_members},
    {Py_tp_getset, PyCThostFtdcCombInstrumentGuardFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCombInstrumentGuardFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCombInstrumentGuardFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCombInstrumentGuardFieldType_spec = {
    .name = "PyCTP.CThostFtdcCombInstrumentGuardField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCombInstrumentGuardFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCombInstrumentGuardFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCombInstrumentGuardFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCombInstrumentGuardFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCombInstrumentGuardFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCombInstrumentGuardFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCombInstrumentGuardFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCombInstrumentGuardFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCombInstrumentGuardField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombInstrumentGuardField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}