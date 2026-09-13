
#include "PyCThostFtdcRCAMSInterParameterField.h"

///RCAMS跨品种风险折抵参数

static int PyCThostFtdcRCAMSInterParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "ProductGroupID", "Priority", "CreditRate", "CombProduct1", "CombProduct2", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcRCAMSInterParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRCAMSInterParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcRCAMSInterParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcRCAMSInterParameterField_ExchangeID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcRCAMSInterParameterField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcRCAMSInterParameterField_ProductGroupID_length = 0;

    /// 优先级
    /// typedef int TThostFtdcRCAMSPriorityType
    int CThostFtdcRCAMSInterParameterField_Priority = 0;

    /// 折抵率
    /// typedef double TThostFtdcHedgeRateType
    double CThostFtdcRCAMSInterParameterField_CreditRate = 0.0;

    /// 产品组合代码1
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcRCAMSInterParameterField_CombProduct1 = NULL;
    Py_ssize_t CThostFtdcRCAMSInterParameterField_CombProduct1_length = 0;

    /// 产品组合代码2
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcRCAMSInterParameterField_CombProduct2 = NULL;
    Py_ssize_t CThostFtdcRCAMSInterParameterField_CombProduct2_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#idy#y#", (char **)kwlist
        , &CThostFtdcRCAMSInterParameterField_TradingDay, &CThostFtdcRCAMSInterParameterField_TradingDay_length
        , &CThostFtdcRCAMSInterParameterField_ExchangeID, &CThostFtdcRCAMSInterParameterField_ExchangeID_length
        , &CThostFtdcRCAMSInterParameterField_ProductGroupID, &CThostFtdcRCAMSInterParameterField_ProductGroupID_length
        , &CThostFtdcRCAMSInterParameterField_Priority
        , &CThostFtdcRCAMSInterParameterField_CreditRate
        , &CThostFtdcRCAMSInterParameterField_CombProduct1, &CThostFtdcRCAMSInterParameterField_CombProduct1_length
        , &CThostFtdcRCAMSInterParameterField_CombProduct2, &CThostFtdcRCAMSInterParameterField_CombProduct2_length
    )) {
        return -1;
    }

    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcRCAMSInterParameterField_TradingDay != NULL ) {
        if(CThostFtdcRCAMSInterParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRCAMSInterParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRCAMSInterParameterField_TradingDay, CThostFtdcRCAMSInterParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRCAMSInterParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRCAMSInterParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcRCAMSInterParameterField_ExchangeID != NULL ) {
        if(CThostFtdcRCAMSInterParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcRCAMSInterParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcRCAMSInterParameterField_ExchangeID, CThostFtdcRCAMSInterParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcRCAMSInterParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcRCAMSInterParameterField_ExchangeID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcRCAMSInterParameterField_ProductGroupID != NULL ) {
        if(CThostFtdcRCAMSInterParameterField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 40)", CThostFtdcRCAMSInterParameterField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcRCAMSInterParameterField_ProductGroupID, CThostFtdcRCAMSInterParameterField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcRCAMSInterParameterField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcRCAMSInterParameterField_ProductGroupID = NULL;
    }

    /// 优先级
    /// typedef int TThostFtdcRCAMSPriorityType
    data->Priority = CThostFtdcRCAMSInterParameterField_Priority;

    /// 折抵率
    /// typedef double TThostFtdcHedgeRateType
    data->CreditRate = CThostFtdcRCAMSInterParameterField_CreditRate;

    /// 产品组合代码1
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcRCAMSInterParameterField_CombProduct1 != NULL ) {
        if(CThostFtdcRCAMSInterParameterField_CombProduct1_length >= (Py_ssize_t)sizeof(data->CombProduct1)) {
            PyErr_Format(PyExc_ValueError, "CombProduct1 too long: length=%zd (max allowed is 40)", CThostFtdcRCAMSInterParameterField_CombProduct1_length);
            return -1;
        }
        // memset(data->CombProduct1, 0, sizeof(data->CombProduct1));
        // memcpy(data->CombProduct1, CThostFtdcRCAMSInterParameterField_CombProduct1, CThostFtdcRCAMSInterParameterField_CombProduct1_length);
        strncpy(data->CombProduct1, CThostFtdcRCAMSInterParameterField_CombProduct1, sizeof(data->CombProduct1));
        CThostFtdcRCAMSInterParameterField_CombProduct1 = NULL;
    }

    /// 产品组合代码2
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcRCAMSInterParameterField_CombProduct2 != NULL ) {
        if(CThostFtdcRCAMSInterParameterField_CombProduct2_length >= (Py_ssize_t)sizeof(data->CombProduct2)) {
            PyErr_Format(PyExc_ValueError, "CombProduct2 too long: length=%zd (max allowed is 40)", CThostFtdcRCAMSInterParameterField_CombProduct2_length);
            return -1;
        }
        // memset(data->CombProduct2, 0, sizeof(data->CombProduct2));
        // memcpy(data->CombProduct2, CThostFtdcRCAMSInterParameterField_CombProduct2, CThostFtdcRCAMSInterParameterField_CombProduct2_length);
        strncpy(data->CombProduct2, CThostFtdcRCAMSInterParameterField_CombProduct2, sizeof(data->CombProduct2));
        CThostFtdcRCAMSInterParameterField_CombProduct2 = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRCAMSInterParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:d,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
        , "Priority", data->Priority
        , "CreditRate", data->CreditRate
        , "CombProduct1", data->CombProduct1//, (Py_ssize_t)sizeof(data->CombProduct1)
        , "CombProduct2", data->CombProduct2//, (Py_ssize_t)sizeof(data->CombProduct2)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInterParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInterParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcRCAMSInterParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRCAMSInterParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInterParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcRCAMSInterParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcRCAMSInterParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInterParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcRCAMSInterParameterFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcRCAMSInterParameterFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInterParameterField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码1
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcRCAMSInterParameterFieldType_get_CombProduct1(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProduct1, (Py_ssize_t)sizeof(data->CombProduct1));
    return PyBytes_FromString(data->CombProduct1);
}

static int PyCThostFtdcRCAMSInterParameterFieldType_set_CombProduct1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProduct1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInterParameterField::CombProduct1)) {
        PyErr_SetString(PyExc_ValueError, "CombProduct1 must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);
    // memset(data->CombProduct1, 0, sizeof(data->CombProduct1));
    // memcpy(data->CombProduct1, buf, len);
    strncpy(data->CombProduct1, buf, sizeof(data->CombProduct1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码2
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcRCAMSInterParameterFieldType_get_CombProduct2(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProduct2, (Py_ssize_t)sizeof(data->CombProduct2));
    return PyBytes_FromString(data->CombProduct2);
}

static int PyCThostFtdcRCAMSInterParameterFieldType_set_CombProduct2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProduct2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSInterParameterField::CombProduct2)) {
        PyErr_SetString(PyExc_ValueError, "CombProduct2 must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(self);
    CThostFtdcRCAMSInterParameterField *data = &(extra->data);
    // memset(data->CombProduct2, 0, sizeof(data->CombProduct2));
    // memcpy(data->CombProduct2, buf, len);
    strncpy(data->CombProduct2, buf, sizeof(data->CombProduct2));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRCAMSInterParameterFieldType_members[] = {
    /// 优先级
    /// typedef int TThostFtdcRCAMSPriorityType
    {
        .name = "Priority",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRCAMSInterParameterFieldData, data.Priority),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("优先级")
    },
    /// 折抵率
    /// typedef double TThostFtdcHedgeRateType
    {
        .name = "CreditRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRCAMSInterParameterFieldData, data.CreditRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("折抵率")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRCAMSInterParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRCAMSInterParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcRCAMSInterParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcRCAMSInterParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcRCAMSInterParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcRCAMSInterParameterFieldType_get_ProductGroupID,
    .set = PyCThostFtdcRCAMSInterParameterFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    /// 产品组合代码1
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProduct1",
    .get = PyCThostFtdcRCAMSInterParameterFieldType_get_CombProduct1,
    .set = PyCThostFtdcRCAMSInterParameterFieldType_set_CombProduct1,
    .doc = PyDoc_STR("产品组合代码1"),
    },
    /// 产品组合代码2
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProduct2",
    .get = PyCThostFtdcRCAMSInterParameterFieldType_get_CombProduct2,
    .set = PyCThostFtdcRCAMSInterParameterFieldType_set_CombProduct2,
    .doc = PyDoc_STR("产品组合代码2"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRCAMSInterParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRCAMSInterParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS跨品种风险折抵参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRCAMSInterParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRCAMSInterParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRCAMSInterParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRCAMSInterParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRCAMSInterParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRCAMSInterParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS跨品种风险折抵参数")},
    {Py_tp_members, PyCThostFtdcRCAMSInterParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcRCAMSInterParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRCAMSInterParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRCAMSInterParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRCAMSInterParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcRCAMSInterParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRCAMSInterParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRCAMSInterParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRCAMSInterParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRCAMSInterParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRCAMSInterParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRCAMSInterParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRCAMSInterParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRCAMSInterParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRCAMSInterParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSInterParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}