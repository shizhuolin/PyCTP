
#include "PyCThostFtdcRCAMSInstrParameterField.h"

///RCAMS同合约风险对冲参数

static int PyCThostFtdcRCAMSInstrParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "ProductID", "HedgeRate", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcRCAMSInstrParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRCAMSInstrParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcRCAMSInstrParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcRCAMSInstrParameterField_ExchangeID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcRCAMSInstrParameterField_ProductID = NULL;
    Py_ssize_t CThostFtdcRCAMSInstrParameterField_ProductID_length = 0;

    /// 同合约风险对冲比率
    /// typedef double TThostFtdcHedgeRateType
    double CThostFtdcRCAMSInstrParameterField_HedgeRate = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#d", (char **)kwlist
        , &CThostFtdcRCAMSInstrParameterField_TradingDay, &CThostFtdcRCAMSInstrParameterField_TradingDay_length
        , &CThostFtdcRCAMSInstrParameterField_ExchangeID, &CThostFtdcRCAMSInstrParameterField_ExchangeID_length
        , &CThostFtdcRCAMSInstrParameterField_ProductID, &CThostFtdcRCAMSInstrParameterField_ProductID_length
        , &CThostFtdcRCAMSInstrParameterField_HedgeRate
    )) {
        return -1;
    }

    PyCThostFtdcRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInstrParameterFieldData>(self);
    CThostFtdcRCAMSInstrParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcRCAMSInstrParameterField_TradingDay != NULL ) {
        if(CThostFtdcRCAMSInstrParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRCAMSInstrParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRCAMSInstrParameterField_TradingDay, CThostFtdcRCAMSInstrParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRCAMSInstrParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRCAMSInstrParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcRCAMSInstrParameterField_ExchangeID != NULL ) {
        if(CThostFtdcRCAMSInstrParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcRCAMSInstrParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcRCAMSInstrParameterField_ExchangeID, CThostFtdcRCAMSInstrParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcRCAMSInstrParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcRCAMSInstrParameterField_ExchangeID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcRCAMSInstrParameterField_ProductID != NULL ) {
        if(CThostFtdcRCAMSInstrParameterField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcRCAMSInstrParameterField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcRCAMSInstrParameterField_ProductID, CThostFtdcRCAMSInstrParameterField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcRCAMSInstrParameterField_ProductID, sizeof(data->ProductID));
        CThostFtdcRCAMSInstrParameterField_ProductID = NULL;
    }

    /// 同合约风险对冲比率
    /// typedef double TThostFtdcHedgeRateType
    data->HedgeRate = CThostFtdcRCAMSInstrParameterField_HedgeRate;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRCAMSInstrParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInstrParameterFieldData>(self);
    CThostFtdcRCAMSInstrParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "HedgeRate", data->HedgeRate
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInstrParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInstrParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcRCAMSInstrParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInstrParameterFieldData>(self);
    CThostFtdcRCAMSInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRCAMSInstrParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInstrParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInstrParameterFieldData>(self);
    CThostFtdcRCAMSInstrParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcRCAMSInstrParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInstrParameterFieldData>(self);
    CThostFtdcRCAMSInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcRCAMSInstrParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInstrParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInstrParameterFieldData>(self);
    CThostFtdcRCAMSInstrParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcRCAMSInstrParameterFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInstrParameterFieldData>(self);
    CThostFtdcRCAMSInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcRCAMSInstrParameterFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInstrParameterField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInstrParameterFieldData>(self);
    CThostFtdcRCAMSInstrParameterField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRCAMSInstrParameterFieldType_members[] = {
    /// 同合约风险对冲比率
    /// typedef double TThostFtdcHedgeRateType
    {
        .name = "HedgeRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRCAMSInstrParameterFieldData, data.HedgeRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("同合约风险对冲比率")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRCAMSInstrParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRCAMSInstrParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcRCAMSInstrParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcRCAMSInstrParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcRCAMSInstrParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcRCAMSInstrParameterFieldType_get_ProductID,
    .set = PyCThostFtdcRCAMSInstrParameterFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRCAMSInstrParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRCAMSInstrParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS同合约风险对冲参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRCAMSInstrParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRCAMSInstrParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRCAMSInstrParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRCAMSInstrParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRCAMSInstrParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRCAMSInstrParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS同合约风险对冲参数")},
    {Py_tp_members, PyCThostFtdcRCAMSInstrParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcRCAMSInstrParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRCAMSInstrParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRCAMSInstrParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRCAMSInstrParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcRCAMSInstrParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRCAMSInstrParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRCAMSInstrParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRCAMSInstrParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRCAMSInstrParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRCAMSInstrParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRCAMSInstrParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRCAMSInstrParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRCAMSInstrParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRCAMSInstrParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSInstrParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}