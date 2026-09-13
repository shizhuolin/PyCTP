
#include "PyCThostFtdcOptionInstrMiniMarginField.h"

///当前期权合约最小保证金

static int PyCThostFtdcOptionInstrMiniMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "MinMargin", "ValueMethod", "IsRelative", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcOptionInstrMiniMarginField_reserve1 = NULL;
    Py_ssize_t CThostFtdcOptionInstrMiniMarginField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcOptionInstrMiniMarginField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcOptionInstrMiniMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcOptionInstrMiniMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcOptionInstrMiniMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcOptionInstrMiniMarginField_InvestorID_length = 0;

    /// 单位（手）期权合约最小保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcOptionInstrMiniMarginField_MinMargin = 0.0;

    /// 取值方式
    /// typedef char TThostFtdcValueMethodType
    char CThostFtdcOptionInstrMiniMarginField_ValueMethod = 0;

    /// 是否跟随交易所收取
    /// typedef int TThostFtdcBoolType
    int CThostFtdcOptionInstrMiniMarginField_IsRelative = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcOptionInstrMiniMarginField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcOptionInstrMiniMarginField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#dciy#", (char **)kwlist
        , &CThostFtdcOptionInstrMiniMarginField_reserve1, &CThostFtdcOptionInstrMiniMarginField_reserve1_length
        , &CThostFtdcOptionInstrMiniMarginField_InvestorRange
        , &CThostFtdcOptionInstrMiniMarginField_BrokerID, &CThostFtdcOptionInstrMiniMarginField_BrokerID_length
        , &CThostFtdcOptionInstrMiniMarginField_InvestorID, &CThostFtdcOptionInstrMiniMarginField_InvestorID_length
        , &CThostFtdcOptionInstrMiniMarginField_MinMargin
        , &CThostFtdcOptionInstrMiniMarginField_ValueMethod
        , &CThostFtdcOptionInstrMiniMarginField_IsRelative
        , &CThostFtdcOptionInstrMiniMarginField_InstrumentID, &CThostFtdcOptionInstrMiniMarginField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcOptionInstrMiniMarginField_reserve1 != NULL ) {
        if(CThostFtdcOptionInstrMiniMarginField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcOptionInstrMiniMarginField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcOptionInstrMiniMarginField_reserve1, CThostFtdcOptionInstrMiniMarginField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcOptionInstrMiniMarginField_reserve1, sizeof(data->reserve1));
        CThostFtdcOptionInstrMiniMarginField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcOptionInstrMiniMarginField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcOptionInstrMiniMarginField_BrokerID != NULL ) {
        if(CThostFtdcOptionInstrMiniMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcOptionInstrMiniMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcOptionInstrMiniMarginField_BrokerID, CThostFtdcOptionInstrMiniMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcOptionInstrMiniMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcOptionInstrMiniMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcOptionInstrMiniMarginField_InvestorID != NULL ) {
        if(CThostFtdcOptionInstrMiniMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcOptionInstrMiniMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcOptionInstrMiniMarginField_InvestorID, CThostFtdcOptionInstrMiniMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcOptionInstrMiniMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcOptionInstrMiniMarginField_InvestorID = NULL;
    }

    /// 单位（手）期权合约最小保证金
    /// typedef double TThostFtdcMoneyType
    data->MinMargin = CThostFtdcOptionInstrMiniMarginField_MinMargin;

    /// 取值方式
    /// typedef char TThostFtdcValueMethodType
    data->ValueMethod = CThostFtdcOptionInstrMiniMarginField_ValueMethod;

    /// 是否跟随交易所收取
    /// typedef int TThostFtdcBoolType
    data->IsRelative = CThostFtdcOptionInstrMiniMarginField_IsRelative;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcOptionInstrMiniMarginField_InstrumentID != NULL ) {
        if(CThostFtdcOptionInstrMiniMarginField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcOptionInstrMiniMarginField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcOptionInstrMiniMarginField_InstrumentID, CThostFtdcOptionInstrMiniMarginField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcOptionInstrMiniMarginField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcOptionInstrMiniMarginField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcOptionInstrMiniMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:c,s:i,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "MinMargin", data->MinMargin
        , "ValueMethod", data->ValueMethod
        , "IsRelative", data->IsRelative
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrMiniMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrMiniMarginField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcOptionInstrMiniMarginFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcOptionInstrMiniMarginFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrMiniMarginField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcOptionInstrMiniMarginFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcOptionInstrMiniMarginFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionInstrMiniMarginField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcOptionInstrMiniMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcOptionInstrMiniMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrMiniMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcOptionInstrMiniMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcOptionInstrMiniMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrMiniMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 取值方式
/// typedef char TThostFtdcValueMethodType
static PyObject *PyCThostFtdcOptionInstrMiniMarginFieldType_get_ValueMethod(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ValueMethod), 1);
}

static int PyCThostFtdcOptionInstrMiniMarginFieldType_set_ValueMethod(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ValueMethod Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionInstrMiniMarginField::ValueMethod)) {
        PyErr_SetString(PyExc_ValueError, "ValueMethod must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    data->ValueMethod = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcOptionInstrMiniMarginFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcOptionInstrMiniMarginFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrMiniMarginField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrMiniMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMiniMarginFieldData>(self);
    CThostFtdcOptionInstrMiniMarginField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcOptionInstrMiniMarginFieldType_members[] = {
    /// 单位（手）期权合约最小保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MinMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrMiniMarginFieldData, data.MinMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单位（手）期权合约最小保证金")
    },
    /// 是否跟随交易所收取
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsRelative",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrMiniMarginFieldData, data.IsRelative),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否跟随交易所收取")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcOptionInstrMiniMarginFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcOptionInstrMiniMarginFieldType_get_reserve1,
    .set = PyCThostFtdcOptionInstrMiniMarginFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcOptionInstrMiniMarginFieldType_get_InvestorRange,
    .set = PyCThostFtdcOptionInstrMiniMarginFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcOptionInstrMiniMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcOptionInstrMiniMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcOptionInstrMiniMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcOptionInstrMiniMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 取值方式
    /// typedef char TThostFtdcValueMethodType
    {
    .name = "ValueMethod",
    .get = PyCThostFtdcOptionInstrMiniMarginFieldType_get_ValueMethod,
    .set = PyCThostFtdcOptionInstrMiniMarginFieldType_set_ValueMethod,
    .doc = PyDoc_STR("取值方式"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcOptionInstrMiniMarginFieldType_get_InstrumentID,
    .set = PyCThostFtdcOptionInstrMiniMarginFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcOptionInstrMiniMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcOptionInstrMiniMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("当前期权合约最小保证金")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcOptionInstrMiniMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcOptionInstrMiniMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcOptionInstrMiniMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcOptionInstrMiniMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcOptionInstrMiniMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcOptionInstrMiniMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("当前期权合约最小保证金")},
    {Py_tp_members, PyCThostFtdcOptionInstrMiniMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcOptionInstrMiniMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcOptionInstrMiniMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcOptionInstrMiniMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcOptionInstrMiniMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcOptionInstrMiniMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcOptionInstrMiniMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcOptionInstrMiniMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcOptionInstrMiniMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcOptionInstrMiniMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcOptionInstrMiniMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcOptionInstrMiniMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcOptionInstrMiniMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcOptionInstrMiniMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcOptionInstrMiniMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrMiniMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}