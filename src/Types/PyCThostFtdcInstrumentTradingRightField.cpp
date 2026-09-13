
#include "PyCThostFtdcInstrumentTradingRightField.h"

///投资者合约交易权限

static int PyCThostFtdcInstrumentTradingRightFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "TradingRight", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInstrumentTradingRightField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInstrumentTradingRightField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcInstrumentTradingRightField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInstrumentTradingRightField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInstrumentTradingRightField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInstrumentTradingRightField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInstrumentTradingRightField_InvestorID_length = 0;

    /// 交易权限
    /// typedef char TThostFtdcTradingRightType
    char CThostFtdcInstrumentTradingRightField_TradingRight = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInstrumentTradingRightField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInstrumentTradingRightField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cy#", (char **)kwlist
        , &CThostFtdcInstrumentTradingRightField_reserve1, &CThostFtdcInstrumentTradingRightField_reserve1_length
        , &CThostFtdcInstrumentTradingRightField_InvestorRange
        , &CThostFtdcInstrumentTradingRightField_BrokerID, &CThostFtdcInstrumentTradingRightField_BrokerID_length
        , &CThostFtdcInstrumentTradingRightField_InvestorID, &CThostFtdcInstrumentTradingRightField_InvestorID_length
        , &CThostFtdcInstrumentTradingRightField_TradingRight
        , &CThostFtdcInstrumentTradingRightField_InstrumentID, &CThostFtdcInstrumentTradingRightField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInstrumentTradingRightField_reserve1 != NULL ) {
        if(CThostFtdcInstrumentTradingRightField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInstrumentTradingRightField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInstrumentTradingRightField_reserve1, CThostFtdcInstrumentTradingRightField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInstrumentTradingRightField_reserve1, sizeof(data->reserve1));
        CThostFtdcInstrumentTradingRightField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcInstrumentTradingRightField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInstrumentTradingRightField_BrokerID != NULL ) {
        if(CThostFtdcInstrumentTradingRightField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInstrumentTradingRightField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInstrumentTradingRightField_BrokerID, CThostFtdcInstrumentTradingRightField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInstrumentTradingRightField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInstrumentTradingRightField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInstrumentTradingRightField_InvestorID != NULL ) {
        if(CThostFtdcInstrumentTradingRightField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInstrumentTradingRightField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInstrumentTradingRightField_InvestorID, CThostFtdcInstrumentTradingRightField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInstrumentTradingRightField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInstrumentTradingRightField_InvestorID = NULL;
    }

    /// 交易权限
    /// typedef char TThostFtdcTradingRightType
    data->TradingRight = CThostFtdcInstrumentTradingRightField_TradingRight;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInstrumentTradingRightField_InstrumentID != NULL ) {
        if(CThostFtdcInstrumentTradingRightField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInstrumentTradingRightField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInstrumentTradingRightField_InstrumentID, CThostFtdcInstrumentTradingRightField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInstrumentTradingRightField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInstrumentTradingRightField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInstrumentTradingRightFieldType_repr(PyObject *self) {

    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "TradingRight", data->TradingRight
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentTradingRightField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentTradingRightField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInstrumentTradingRightFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInstrumentTradingRightFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentTradingRightField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcInstrumentTradingRightFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcInstrumentTradingRightFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentTradingRightField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInstrumentTradingRightFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInstrumentTradingRightFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentTradingRightField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInstrumentTradingRightFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInstrumentTradingRightFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentTradingRightField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易权限
/// typedef char TThostFtdcTradingRightType
static PyObject *PyCThostFtdcInstrumentTradingRightFieldType_get_TradingRight(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradingRight), 1);
}

static int PyCThostFtdcInstrumentTradingRightFieldType_set_TradingRight(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingRight Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInstrumentTradingRightField::TradingRight)) {
        PyErr_SetString(PyExc_ValueError, "TradingRight must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    data->TradingRight = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInstrumentTradingRightFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInstrumentTradingRightFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInstrumentTradingRightField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInstrumentTradingRightFieldData>(self);
    CThostFtdcInstrumentTradingRightField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInstrumentTradingRightFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInstrumentTradingRightFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInstrumentTradingRightFieldType_get_reserve1,
    .set = PyCThostFtdcInstrumentTradingRightFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcInstrumentTradingRightFieldType_get_InvestorRange,
    .set = PyCThostFtdcInstrumentTradingRightFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInstrumentTradingRightFieldType_get_BrokerID,
    .set = PyCThostFtdcInstrumentTradingRightFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInstrumentTradingRightFieldType_get_InvestorID,
    .set = PyCThostFtdcInstrumentTradingRightFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易权限
    /// typedef char TThostFtdcTradingRightType
    {
    .name = "TradingRight",
    .get = PyCThostFtdcInstrumentTradingRightFieldType_get_TradingRight,
    .set = PyCThostFtdcInstrumentTradingRightFieldType_set_TradingRight,
    .doc = PyDoc_STR("交易权限"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInstrumentTradingRightFieldType_get_InstrumentID,
    .set = PyCThostFtdcInstrumentTradingRightFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInstrumentTradingRightFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInstrumentTradingRightField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者合约交易权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInstrumentTradingRightFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInstrumentTradingRightFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInstrumentTradingRightFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInstrumentTradingRightFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInstrumentTradingRightFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInstrumentTradingRightFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者合约交易权限")},
    {Py_tp_members, PyCThostFtdcInstrumentTradingRightFieldType_members},
    {Py_tp_getset, PyCThostFtdcInstrumentTradingRightFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInstrumentTradingRightFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInstrumentTradingRightFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInstrumentTradingRightFieldType_spec = {
    .name = "PyCTP.CThostFtdcInstrumentTradingRightField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInstrumentTradingRightFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInstrumentTradingRightFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInstrumentTradingRightFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInstrumentTradingRightFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInstrumentTradingRightFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInstrumentTradingRightFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInstrumentTradingRightFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInstrumentTradingRightFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInstrumentTradingRightField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentTradingRightField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}