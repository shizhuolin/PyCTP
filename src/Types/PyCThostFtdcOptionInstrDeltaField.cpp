
#include "PyCThostFtdcOptionInstrDeltaField.h"

///期权合约delta值

static int PyCThostFtdcOptionInstrDeltaFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "Delta", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcOptionInstrDeltaField_reserve1 = NULL;
    Py_ssize_t CThostFtdcOptionInstrDeltaField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcOptionInstrDeltaField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcOptionInstrDeltaField_BrokerID = NULL;
    Py_ssize_t CThostFtdcOptionInstrDeltaField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcOptionInstrDeltaField_InvestorID = NULL;
    Py_ssize_t CThostFtdcOptionInstrDeltaField_InvestorID_length = 0;

    /// Delta值
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrDeltaField_Delta = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcOptionInstrDeltaField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcOptionInstrDeltaField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#dy#", (char **)kwlist
        , &CThostFtdcOptionInstrDeltaField_reserve1, &CThostFtdcOptionInstrDeltaField_reserve1_length
        , &CThostFtdcOptionInstrDeltaField_InvestorRange
        , &CThostFtdcOptionInstrDeltaField_BrokerID, &CThostFtdcOptionInstrDeltaField_BrokerID_length
        , &CThostFtdcOptionInstrDeltaField_InvestorID, &CThostFtdcOptionInstrDeltaField_InvestorID_length
        , &CThostFtdcOptionInstrDeltaField_Delta
        , &CThostFtdcOptionInstrDeltaField_InstrumentID, &CThostFtdcOptionInstrDeltaField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcOptionInstrDeltaField_reserve1 != NULL ) {
        if(CThostFtdcOptionInstrDeltaField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcOptionInstrDeltaField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcOptionInstrDeltaField_reserve1, CThostFtdcOptionInstrDeltaField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcOptionInstrDeltaField_reserve1, sizeof(data->reserve1));
        CThostFtdcOptionInstrDeltaField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcOptionInstrDeltaField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcOptionInstrDeltaField_BrokerID != NULL ) {
        if(CThostFtdcOptionInstrDeltaField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcOptionInstrDeltaField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcOptionInstrDeltaField_BrokerID, CThostFtdcOptionInstrDeltaField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcOptionInstrDeltaField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcOptionInstrDeltaField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcOptionInstrDeltaField_InvestorID != NULL ) {
        if(CThostFtdcOptionInstrDeltaField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcOptionInstrDeltaField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcOptionInstrDeltaField_InvestorID, CThostFtdcOptionInstrDeltaField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcOptionInstrDeltaField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcOptionInstrDeltaField_InvestorID = NULL;
    }

    /// Delta值
    /// typedef double TThostFtdcRatioType
    data->Delta = CThostFtdcOptionInstrDeltaField_Delta;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcOptionInstrDeltaField_InstrumentID != NULL ) {
        if(CThostFtdcOptionInstrDeltaField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcOptionInstrDeltaField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcOptionInstrDeltaField_InstrumentID, CThostFtdcOptionInstrDeltaField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcOptionInstrDeltaField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcOptionInstrDeltaField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcOptionInstrDeltaFieldType_repr(PyObject *self) {

    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "Delta", data->Delta
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrDeltaField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrDeltaField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcOptionInstrDeltaFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcOptionInstrDeltaFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrDeltaField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcOptionInstrDeltaFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcOptionInstrDeltaFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionInstrDeltaField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcOptionInstrDeltaFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcOptionInstrDeltaFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrDeltaField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcOptionInstrDeltaFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcOptionInstrDeltaFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrDeltaField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcOptionInstrDeltaFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcOptionInstrDeltaFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrDeltaField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrDeltaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrDeltaFieldData>(self);
    CThostFtdcOptionInstrDeltaField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcOptionInstrDeltaFieldType_members[] = {
    /// Delta值
    /// typedef double TThostFtdcRatioType
    {
        .name = "Delta",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrDeltaFieldData, data.Delta),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("Delta值")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcOptionInstrDeltaFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcOptionInstrDeltaFieldType_get_reserve1,
    .set = PyCThostFtdcOptionInstrDeltaFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcOptionInstrDeltaFieldType_get_InvestorRange,
    .set = PyCThostFtdcOptionInstrDeltaFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcOptionInstrDeltaFieldType_get_BrokerID,
    .set = PyCThostFtdcOptionInstrDeltaFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcOptionInstrDeltaFieldType_get_InvestorID,
    .set = PyCThostFtdcOptionInstrDeltaFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcOptionInstrDeltaFieldType_get_InstrumentID,
    .set = PyCThostFtdcOptionInstrDeltaFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcOptionInstrDeltaFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcOptionInstrDeltaField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期权合约delta值")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcOptionInstrDeltaFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcOptionInstrDeltaFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcOptionInstrDeltaFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcOptionInstrDeltaFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcOptionInstrDeltaFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcOptionInstrDeltaFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期权合约delta值")},
    {Py_tp_members, PyCThostFtdcOptionInstrDeltaFieldType_members},
    {Py_tp_getset, PyCThostFtdcOptionInstrDeltaFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcOptionInstrDeltaFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcOptionInstrDeltaFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcOptionInstrDeltaFieldType_spec = {
    .name = "PyCTP.CThostFtdcOptionInstrDeltaField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcOptionInstrDeltaFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcOptionInstrDeltaFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcOptionInstrDeltaFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcOptionInstrDeltaFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcOptionInstrDeltaFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcOptionInstrDeltaFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcOptionInstrDeltaFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcOptionInstrDeltaFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcOptionInstrDeltaField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrDeltaField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}