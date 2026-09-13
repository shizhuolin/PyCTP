
#include "PyCThostFtdcOptionInstrTradingRightField.h"

///投资者期权合约交易权限

static int PyCThostFtdcOptionInstrTradingRightFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "Direction", "TradingRight", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcOptionInstrTradingRightField_reserve1 = NULL;
    Py_ssize_t CThostFtdcOptionInstrTradingRightField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcOptionInstrTradingRightField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcOptionInstrTradingRightField_BrokerID = NULL;
    Py_ssize_t CThostFtdcOptionInstrTradingRightField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcOptionInstrTradingRightField_InvestorID = NULL;
    Py_ssize_t CThostFtdcOptionInstrTradingRightField_InvestorID_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcOptionInstrTradingRightField_Direction = 0;

    /// 交易权限
    /// typedef char TThostFtdcTradingRightType
    char CThostFtdcOptionInstrTradingRightField_TradingRight = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcOptionInstrTradingRightField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcOptionInstrTradingRightField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ccy#", (char **)kwlist
        , &CThostFtdcOptionInstrTradingRightField_reserve1, &CThostFtdcOptionInstrTradingRightField_reserve1_length
        , &CThostFtdcOptionInstrTradingRightField_InvestorRange
        , &CThostFtdcOptionInstrTradingRightField_BrokerID, &CThostFtdcOptionInstrTradingRightField_BrokerID_length
        , &CThostFtdcOptionInstrTradingRightField_InvestorID, &CThostFtdcOptionInstrTradingRightField_InvestorID_length
        , &CThostFtdcOptionInstrTradingRightField_Direction
        , &CThostFtdcOptionInstrTradingRightField_TradingRight
        , &CThostFtdcOptionInstrTradingRightField_InstrumentID, &CThostFtdcOptionInstrTradingRightField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcOptionInstrTradingRightField_reserve1 != NULL ) {
        if(CThostFtdcOptionInstrTradingRightField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcOptionInstrTradingRightField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcOptionInstrTradingRightField_reserve1, CThostFtdcOptionInstrTradingRightField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcOptionInstrTradingRightField_reserve1, sizeof(data->reserve1));
        CThostFtdcOptionInstrTradingRightField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcOptionInstrTradingRightField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcOptionInstrTradingRightField_BrokerID != NULL ) {
        if(CThostFtdcOptionInstrTradingRightField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcOptionInstrTradingRightField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcOptionInstrTradingRightField_BrokerID, CThostFtdcOptionInstrTradingRightField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcOptionInstrTradingRightField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcOptionInstrTradingRightField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcOptionInstrTradingRightField_InvestorID != NULL ) {
        if(CThostFtdcOptionInstrTradingRightField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcOptionInstrTradingRightField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcOptionInstrTradingRightField_InvestorID, CThostFtdcOptionInstrTradingRightField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcOptionInstrTradingRightField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcOptionInstrTradingRightField_InvestorID = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcOptionInstrTradingRightField_Direction;

    /// 交易权限
    /// typedef char TThostFtdcTradingRightType
    data->TradingRight = CThostFtdcOptionInstrTradingRightField_TradingRight;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcOptionInstrTradingRightField_InstrumentID != NULL ) {
        if(CThostFtdcOptionInstrTradingRightField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcOptionInstrTradingRightField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcOptionInstrTradingRightField_InstrumentID, CThostFtdcOptionInstrTradingRightField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcOptionInstrTradingRightField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcOptionInstrTradingRightField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcOptionInstrTradingRightFieldType_repr(PyObject *self) {

    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:c,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "Direction", data->Direction
        , "TradingRight", data->TradingRight
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrTradingRightField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrTradingRightField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcOptionInstrTradingRightFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcOptionInstrTradingRightFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradingRightField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcOptionInstrTradingRightFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcOptionInstrTradingRightFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradingRightField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcOptionInstrTradingRightFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcOptionInstrTradingRightFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradingRightField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcOptionInstrTradingRightFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcOptionInstrTradingRightFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradingRightField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcOptionInstrTradingRightFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcOptionInstrTradingRightFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradingRightField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易权限
/// typedef char TThostFtdcTradingRightType
static PyObject *PyCThostFtdcOptionInstrTradingRightFieldType_get_TradingRight(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradingRight), 1);
}

static int PyCThostFtdcOptionInstrTradingRightFieldType_set_TradingRight(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingRight Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradingRightField::TradingRight)) {
        PyErr_SetString(PyExc_ValueError, "TradingRight must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    data->TradingRight = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcOptionInstrTradingRightFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcOptionInstrTradingRightFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrTradingRightField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradingRightFieldData>(self);
    CThostFtdcOptionInstrTradingRightField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcOptionInstrTradingRightFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcOptionInstrTradingRightFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcOptionInstrTradingRightFieldType_get_reserve1,
    .set = PyCThostFtdcOptionInstrTradingRightFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcOptionInstrTradingRightFieldType_get_InvestorRange,
    .set = PyCThostFtdcOptionInstrTradingRightFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcOptionInstrTradingRightFieldType_get_BrokerID,
    .set = PyCThostFtdcOptionInstrTradingRightFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcOptionInstrTradingRightFieldType_get_InvestorID,
    .set = PyCThostFtdcOptionInstrTradingRightFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcOptionInstrTradingRightFieldType_get_Direction,
    .set = PyCThostFtdcOptionInstrTradingRightFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 交易权限
    /// typedef char TThostFtdcTradingRightType
    {
    .name = "TradingRight",
    .get = PyCThostFtdcOptionInstrTradingRightFieldType_get_TradingRight,
    .set = PyCThostFtdcOptionInstrTradingRightFieldType_set_TradingRight,
    .doc = PyDoc_STR("交易权限"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcOptionInstrTradingRightFieldType_get_InstrumentID,
    .set = PyCThostFtdcOptionInstrTradingRightFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcOptionInstrTradingRightFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcOptionInstrTradingRightField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者期权合约交易权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcOptionInstrTradingRightFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcOptionInstrTradingRightFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcOptionInstrTradingRightFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcOptionInstrTradingRightFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcOptionInstrTradingRightFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcOptionInstrTradingRightFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者期权合约交易权限")},
    {Py_tp_members, PyCThostFtdcOptionInstrTradingRightFieldType_members},
    {Py_tp_getset, PyCThostFtdcOptionInstrTradingRightFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcOptionInstrTradingRightFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcOptionInstrTradingRightFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcOptionInstrTradingRightFieldType_spec = {
    .name = "PyCTP.CThostFtdcOptionInstrTradingRightField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcOptionInstrTradingRightFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcOptionInstrTradingRightFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcOptionInstrTradingRightFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcOptionInstrTradingRightFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcOptionInstrTradingRightFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcOptionInstrTradingRightFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcOptionInstrTradingRightFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcOptionInstrTradingRightFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcOptionInstrTradingRightField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrTradingRightField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}