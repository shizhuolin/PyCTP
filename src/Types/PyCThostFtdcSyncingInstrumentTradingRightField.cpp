
#include "PyCThostFtdcSyncingInstrumentTradingRightField.h"

///正在同步中的合约交易权限

static int PyCThostFtdcSyncingInstrumentTradingRightFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "TradingRight", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcSyncingInstrumentTradingRightField_reserve1 = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentTradingRightField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcSyncingInstrumentTradingRightField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncingInstrumentTradingRightField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentTradingRightField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncingInstrumentTradingRightField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentTradingRightField_InvestorID_length = 0;

    /// 交易权限
    /// typedef char TThostFtdcTradingRightType
    char CThostFtdcSyncingInstrumentTradingRightField_TradingRight = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncingInstrumentTradingRightField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentTradingRightField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cy#", (char **)kwlist
        , &CThostFtdcSyncingInstrumentTradingRightField_reserve1, &CThostFtdcSyncingInstrumentTradingRightField_reserve1_length
        , &CThostFtdcSyncingInstrumentTradingRightField_InvestorRange
        , &CThostFtdcSyncingInstrumentTradingRightField_BrokerID, &CThostFtdcSyncingInstrumentTradingRightField_BrokerID_length
        , &CThostFtdcSyncingInstrumentTradingRightField_InvestorID, &CThostFtdcSyncingInstrumentTradingRightField_InvestorID_length
        , &CThostFtdcSyncingInstrumentTradingRightField_TradingRight
        , &CThostFtdcSyncingInstrumentTradingRightField_InstrumentID, &CThostFtdcSyncingInstrumentTradingRightField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcSyncingInstrumentTradingRightField_reserve1 != NULL ) {
        if(CThostFtdcSyncingInstrumentTradingRightField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcSyncingInstrumentTradingRightField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcSyncingInstrumentTradingRightField_reserve1, CThostFtdcSyncingInstrumentTradingRightField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcSyncingInstrumentTradingRightField_reserve1, sizeof(data->reserve1));
        CThostFtdcSyncingInstrumentTradingRightField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcSyncingInstrumentTradingRightField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncingInstrumentTradingRightField_BrokerID != NULL ) {
        if(CThostFtdcSyncingInstrumentTradingRightField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncingInstrumentTradingRightField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncingInstrumentTradingRightField_BrokerID, CThostFtdcSyncingInstrumentTradingRightField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncingInstrumentTradingRightField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncingInstrumentTradingRightField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncingInstrumentTradingRightField_InvestorID != NULL ) {
        if(CThostFtdcSyncingInstrumentTradingRightField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncingInstrumentTradingRightField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncingInstrumentTradingRightField_InvestorID, CThostFtdcSyncingInstrumentTradingRightField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncingInstrumentTradingRightField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncingInstrumentTradingRightField_InvestorID = NULL;
    }

    /// 交易权限
    /// typedef char TThostFtdcTradingRightType
    data->TradingRight = CThostFtdcSyncingInstrumentTradingRightField_TradingRight;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncingInstrumentTradingRightField_InstrumentID != NULL ) {
        if(CThostFtdcSyncingInstrumentTradingRightField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncingInstrumentTradingRightField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncingInstrumentTradingRightField_InstrumentID, CThostFtdcSyncingInstrumentTradingRightField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncingInstrumentTradingRightField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncingInstrumentTradingRightField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncingInstrumentTradingRightFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInstrumentTradingRightField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInstrumentTradingRightField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentTradingRightField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentTradingRightField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentTradingRightField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentTradingRightField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易权限
/// typedef char TThostFtdcTradingRightType
static PyObject *PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_TradingRight(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradingRight), 1);
}

static int PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_TradingRight(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingRight Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentTradingRightField::TradingRight)) {
        PyErr_SetString(PyExc_ValueError, "TradingRight must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    data->TradingRight = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentTradingRightField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentTradingRightFieldData>(self);
    CThostFtdcSyncingInstrumentTradingRightField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncingInstrumentTradingRightFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncingInstrumentTradingRightFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_reserve1,
    .set = PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_InvestorRange,
    .set = PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易权限
    /// typedef char TThostFtdcTradingRightType
    {
    .name = "TradingRight",
    .get = PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_TradingRight,
    .set = PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_TradingRight,
    .doc = PyDoc_STR("交易权限"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncingInstrumentTradingRightFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncingInstrumentTradingRightFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncingInstrumentTradingRightFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncingInstrumentTradingRightField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("正在同步中的合约交易权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncingInstrumentTradingRightFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncingInstrumentTradingRightFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncingInstrumentTradingRightFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncingInstrumentTradingRightFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncingInstrumentTradingRightFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncingInstrumentTradingRightFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("正在同步中的合约交易权限")},
    {Py_tp_members, PyCThostFtdcSyncingInstrumentTradingRightFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncingInstrumentTradingRightFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncingInstrumentTradingRightFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncingInstrumentTradingRightFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncingInstrumentTradingRightFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncingInstrumentTradingRightField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncingInstrumentTradingRightFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncingInstrumentTradingRightFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncingInstrumentTradingRightFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncingInstrumentTradingRightFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncingInstrumentTradingRightFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncingInstrumentTradingRightFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncingInstrumentTradingRightFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncingInstrumentTradingRightFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncingInstrumentTradingRightField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInstrumentTradingRightField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}