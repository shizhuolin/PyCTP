
#include "PyCThostFtdcStrikeOffsetField.h"

///当前期权合约执行偏移值的详细内容

static int PyCThostFtdcStrikeOffsetFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "Offset", "OffsetType", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcStrikeOffsetField_reserve1 = NULL;
    Py_ssize_t CThostFtdcStrikeOffsetField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcStrikeOffsetField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcStrikeOffsetField_BrokerID = NULL;
    Py_ssize_t CThostFtdcStrikeOffsetField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcStrikeOffsetField_InvestorID = NULL;
    Py_ssize_t CThostFtdcStrikeOffsetField_InvestorID_length = 0;

    /// 执行偏移值
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcStrikeOffsetField_Offset = 0.0;

    /// 执行偏移类型
    /// typedef char TThostFtdcStrikeOffsetTypeType
    char CThostFtdcStrikeOffsetField_OffsetType = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcStrikeOffsetField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcStrikeOffsetField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#dcy#", (char **)kwlist
        , &CThostFtdcStrikeOffsetField_reserve1, &CThostFtdcStrikeOffsetField_reserve1_length
        , &CThostFtdcStrikeOffsetField_InvestorRange
        , &CThostFtdcStrikeOffsetField_BrokerID, &CThostFtdcStrikeOffsetField_BrokerID_length
        , &CThostFtdcStrikeOffsetField_InvestorID, &CThostFtdcStrikeOffsetField_InvestorID_length
        , &CThostFtdcStrikeOffsetField_Offset
        , &CThostFtdcStrikeOffsetField_OffsetType
        , &CThostFtdcStrikeOffsetField_InstrumentID, &CThostFtdcStrikeOffsetField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcStrikeOffsetField_reserve1 != NULL ) {
        if(CThostFtdcStrikeOffsetField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcStrikeOffsetField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcStrikeOffsetField_reserve1, CThostFtdcStrikeOffsetField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcStrikeOffsetField_reserve1, sizeof(data->reserve1));
        CThostFtdcStrikeOffsetField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcStrikeOffsetField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcStrikeOffsetField_BrokerID != NULL ) {
        if(CThostFtdcStrikeOffsetField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcStrikeOffsetField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcStrikeOffsetField_BrokerID, CThostFtdcStrikeOffsetField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcStrikeOffsetField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcStrikeOffsetField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcStrikeOffsetField_InvestorID != NULL ) {
        if(CThostFtdcStrikeOffsetField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcStrikeOffsetField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcStrikeOffsetField_InvestorID, CThostFtdcStrikeOffsetField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcStrikeOffsetField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcStrikeOffsetField_InvestorID = NULL;
    }

    /// 执行偏移值
    /// typedef double TThostFtdcMoneyType
    data->Offset = CThostFtdcStrikeOffsetField_Offset;

    /// 执行偏移类型
    /// typedef char TThostFtdcStrikeOffsetTypeType
    data->OffsetType = CThostFtdcStrikeOffsetField_OffsetType;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcStrikeOffsetField_InstrumentID != NULL ) {
        if(CThostFtdcStrikeOffsetField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcStrikeOffsetField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcStrikeOffsetField_InstrumentID, CThostFtdcStrikeOffsetField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcStrikeOffsetField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcStrikeOffsetField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcStrikeOffsetFieldType_repr(PyObject *self) {

    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:c,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "Offset", data->Offset
        , "OffsetType", data->OffsetType
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcStrikeOffsetField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcStrikeOffsetField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcStrikeOffsetFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcStrikeOffsetFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcStrikeOffsetField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcStrikeOffsetFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcStrikeOffsetFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcStrikeOffsetField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcStrikeOffsetFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcStrikeOffsetFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcStrikeOffsetField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcStrikeOffsetFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcStrikeOffsetFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcStrikeOffsetField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行偏移类型
/// typedef char TThostFtdcStrikeOffsetTypeType
static PyObject *PyCThostFtdcStrikeOffsetFieldType_get_OffsetType(PyObject *self, void *closure) {
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OffsetType), 1);
}

static int PyCThostFtdcStrikeOffsetFieldType_set_OffsetType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcStrikeOffsetField::OffsetType)) {
        PyErr_SetString(PyExc_ValueError, "OffsetType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    data->OffsetType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcStrikeOffsetFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcStrikeOffsetFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcStrikeOffsetField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcStrikeOffsetFieldData>(self);
    CThostFtdcStrikeOffsetField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcStrikeOffsetFieldType_members[] = {
    /// 执行偏移值
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Offset",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcStrikeOffsetFieldData, data.Offset),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行偏移值")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcStrikeOffsetFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcStrikeOffsetFieldType_get_reserve1,
    .set = PyCThostFtdcStrikeOffsetFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcStrikeOffsetFieldType_get_InvestorRange,
    .set = PyCThostFtdcStrikeOffsetFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcStrikeOffsetFieldType_get_BrokerID,
    .set = PyCThostFtdcStrikeOffsetFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcStrikeOffsetFieldType_get_InvestorID,
    .set = PyCThostFtdcStrikeOffsetFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 执行偏移类型
    /// typedef char TThostFtdcStrikeOffsetTypeType
    {
    .name = "OffsetType",
    .get = PyCThostFtdcStrikeOffsetFieldType_get_OffsetType,
    .set = PyCThostFtdcStrikeOffsetFieldType_set_OffsetType,
    .doc = PyDoc_STR("执行偏移类型"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcStrikeOffsetFieldType_get_InstrumentID,
    .set = PyCThostFtdcStrikeOffsetFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcStrikeOffsetFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcStrikeOffsetField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("当前期权合约执行偏移值的详细内容")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcStrikeOffsetFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcStrikeOffsetFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcStrikeOffsetFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcStrikeOffsetFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcStrikeOffsetFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcStrikeOffsetFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("当前期权合约执行偏移值的详细内容")},
    {Py_tp_members, PyCThostFtdcStrikeOffsetFieldType_members},
    {Py_tp_getset, PyCThostFtdcStrikeOffsetFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcStrikeOffsetFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcStrikeOffsetFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcStrikeOffsetFieldType_spec = {
    .name = "PyCTP.CThostFtdcStrikeOffsetField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcStrikeOffsetFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcStrikeOffsetFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcStrikeOffsetFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcStrikeOffsetFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcStrikeOffsetFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcStrikeOffsetFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcStrikeOffsetFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcStrikeOffsetFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcStrikeOffsetField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcStrikeOffsetField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}