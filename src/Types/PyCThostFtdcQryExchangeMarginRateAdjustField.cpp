
#include "PyCThostFtdcQryExchangeMarginRateAdjustField.h"

///查询交易所调整保证金率

static int PyCThostFtdcQryExchangeMarginRateAdjustFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "reserve1", "HedgeFlag", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryExchangeMarginRateAdjustField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryExchangeMarginRateAdjustField_BrokerID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryExchangeMarginRateAdjustField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryExchangeMarginRateAdjustField_reserve1_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcQryExchangeMarginRateAdjustField_HedgeFlag = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryExchangeMarginRateAdjustField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryExchangeMarginRateAdjustField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#", (char **)kwlist
        , &CThostFtdcQryExchangeMarginRateAdjustField_BrokerID, &CThostFtdcQryExchangeMarginRateAdjustField_BrokerID_length
        , &CThostFtdcQryExchangeMarginRateAdjustField_reserve1, &CThostFtdcQryExchangeMarginRateAdjustField_reserve1_length
        , &CThostFtdcQryExchangeMarginRateAdjustField_HedgeFlag
        , &CThostFtdcQryExchangeMarginRateAdjustField_InstrumentID, &CThostFtdcQryExchangeMarginRateAdjustField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcQryExchangeMarginRateAdjustField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryExchangeMarginRateAdjustField_BrokerID != NULL ) {
        if(CThostFtdcQryExchangeMarginRateAdjustField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryExchangeMarginRateAdjustField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryExchangeMarginRateAdjustField_BrokerID, CThostFtdcQryExchangeMarginRateAdjustField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryExchangeMarginRateAdjustField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryExchangeMarginRateAdjustField_BrokerID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryExchangeMarginRateAdjustField_reserve1 != NULL ) {
        if(CThostFtdcQryExchangeMarginRateAdjustField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryExchangeMarginRateAdjustField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryExchangeMarginRateAdjustField_reserve1, CThostFtdcQryExchangeMarginRateAdjustField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryExchangeMarginRateAdjustField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryExchangeMarginRateAdjustField_reserve1 = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcQryExchangeMarginRateAdjustField_HedgeFlag;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryExchangeMarginRateAdjustField_InstrumentID != NULL ) {
        if(CThostFtdcQryExchangeMarginRateAdjustField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryExchangeMarginRateAdjustField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryExchangeMarginRateAdjustField_InstrumentID, CThostFtdcQryExchangeMarginRateAdjustField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryExchangeMarginRateAdjustField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryExchangeMarginRateAdjustField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryExchangeMarginRateAdjustFieldType_repr(PyObject *self) {

    PyCThostFtdcQryExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcQryExchangeMarginRateAdjustField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "HedgeFlag", data->HedgeFlag
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeMarginRateAdjustField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeMarginRateAdjustField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryExchangeMarginRateAdjustFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcQryExchangeMarginRateAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryExchangeMarginRateAdjustFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeMarginRateAdjustField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcQryExchangeMarginRateAdjustField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryExchangeMarginRateAdjustFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcQryExchangeMarginRateAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryExchangeMarginRateAdjustFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeMarginRateAdjustField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcQryExchangeMarginRateAdjustField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcQryExchangeMarginRateAdjustFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcQryExchangeMarginRateAdjustField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcQryExchangeMarginRateAdjustFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryExchangeMarginRateAdjustField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcQryExchangeMarginRateAdjustField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryExchangeMarginRateAdjustFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcQryExchangeMarginRateAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryExchangeMarginRateAdjustFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeMarginRateAdjustField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeMarginRateAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateAdjustFieldData>(self);
    CThostFtdcQryExchangeMarginRateAdjustField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryExchangeMarginRateAdjustFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryExchangeMarginRateAdjustFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryExchangeMarginRateAdjustFieldType_get_BrokerID,
    .set = PyCThostFtdcQryExchangeMarginRateAdjustFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryExchangeMarginRateAdjustFieldType_get_reserve1,
    .set = PyCThostFtdcQryExchangeMarginRateAdjustFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcQryExchangeMarginRateAdjustFieldType_get_HedgeFlag,
    .set = PyCThostFtdcQryExchangeMarginRateAdjustFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryExchangeMarginRateAdjustFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryExchangeMarginRateAdjustFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryExchangeMarginRateAdjustFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryExchangeMarginRateAdjustField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询交易所调整保证金率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryExchangeMarginRateAdjustFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryExchangeMarginRateAdjustFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryExchangeMarginRateAdjustFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryExchangeMarginRateAdjustFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryExchangeMarginRateAdjustFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryExchangeMarginRateAdjustFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询交易所调整保证金率")},
    {Py_tp_members, PyCThostFtdcQryExchangeMarginRateAdjustFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryExchangeMarginRateAdjustFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryExchangeMarginRateAdjustFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryExchangeMarginRateAdjustFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryExchangeMarginRateAdjustFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryExchangeMarginRateAdjustField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryExchangeMarginRateAdjustFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryExchangeMarginRateAdjustFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryExchangeMarginRateAdjustFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryExchangeMarginRateAdjustFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryExchangeMarginRateAdjustFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryExchangeMarginRateAdjustFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryExchangeMarginRateAdjustFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryExchangeMarginRateAdjustFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryExchangeMarginRateAdjustField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeMarginRateAdjustField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}