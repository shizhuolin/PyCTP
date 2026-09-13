
#include "PyCThostFtdcProductExchRateField.h"

///产品报价汇率

static int PyCThostFtdcProductExchRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "QuoteCurrencyID", "ExchangeRate", "ExchangeID", "ProductID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcProductExchRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcProductExchRateField_reserve1_length = 0;

    /// 报价币种类型
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcProductExchRateField_QuoteCurrencyID = NULL;
    Py_ssize_t CThostFtdcProductExchRateField_QuoteCurrencyID_length = 0;

    /// 汇率
    /// typedef double TThostFtdcExchangeRateType
    double CThostFtdcProductExchRateField_ExchangeRate = 0.0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcProductExchRateField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcProductExchRateField_ExchangeID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcProductExchRateField_ProductID = NULL;
    Py_ssize_t CThostFtdcProductExchRateField_ProductID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#y#", (char **)kwlist
        , &CThostFtdcProductExchRateField_reserve1, &CThostFtdcProductExchRateField_reserve1_length
        , &CThostFtdcProductExchRateField_QuoteCurrencyID, &CThostFtdcProductExchRateField_QuoteCurrencyID_length
        , &CThostFtdcProductExchRateField_ExchangeRate
        , &CThostFtdcProductExchRateField_ExchangeID, &CThostFtdcProductExchRateField_ExchangeID_length
        , &CThostFtdcProductExchRateField_ProductID, &CThostFtdcProductExchRateField_ProductID_length
    )) {
        return -1;
    }

    PyCThostFtdcProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductExchRateFieldData>(self);
    CThostFtdcProductExchRateField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcProductExchRateField_reserve1 != NULL ) {
        if(CThostFtdcProductExchRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcProductExchRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcProductExchRateField_reserve1, CThostFtdcProductExchRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcProductExchRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcProductExchRateField_reserve1 = NULL;
    }

    /// 报价币种类型
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcProductExchRateField_QuoteCurrencyID != NULL ) {
        if(CThostFtdcProductExchRateField_QuoteCurrencyID_length >= (Py_ssize_t)sizeof(data->QuoteCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "QuoteCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcProductExchRateField_QuoteCurrencyID_length);
            return -1;
        }
        // memset(data->QuoteCurrencyID, 0, sizeof(data->QuoteCurrencyID));
        // memcpy(data->QuoteCurrencyID, CThostFtdcProductExchRateField_QuoteCurrencyID, CThostFtdcProductExchRateField_QuoteCurrencyID_length);
        strncpy(data->QuoteCurrencyID, CThostFtdcProductExchRateField_QuoteCurrencyID, sizeof(data->QuoteCurrencyID));
        CThostFtdcProductExchRateField_QuoteCurrencyID = NULL;
    }

    /// 汇率
    /// typedef double TThostFtdcExchangeRateType
    data->ExchangeRate = CThostFtdcProductExchRateField_ExchangeRate;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcProductExchRateField_ExchangeID != NULL ) {
        if(CThostFtdcProductExchRateField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcProductExchRateField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcProductExchRateField_ExchangeID, CThostFtdcProductExchRateField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcProductExchRateField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcProductExchRateField_ExchangeID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcProductExchRateField_ProductID != NULL ) {
        if(CThostFtdcProductExchRateField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcProductExchRateField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcProductExchRateField_ProductID, CThostFtdcProductExchRateField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcProductExchRateField_ProductID, sizeof(data->ProductID));
        CThostFtdcProductExchRateField_ProductID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcProductExchRateFieldType_repr(PyObject *self) {

    PyCThostFtdcProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductExchRateFieldData>(self);
    CThostFtdcProductExchRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "QuoteCurrencyID", data->QuoteCurrencyID//, (Py_ssize_t)sizeof(data->QuoteCurrencyID)
        , "ExchangeRate", data->ExchangeRate
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductExchRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductExchRateField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcProductExchRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductExchRateFieldData>(self);
    CThostFtdcProductExchRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcProductExchRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductExchRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductExchRateFieldData>(self);
    CThostFtdcProductExchRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价币种类型
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcProductExchRateFieldType_get_QuoteCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductExchRateFieldData>(self);
    CThostFtdcProductExchRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteCurrencyID, (Py_ssize_t)sizeof(data->QuoteCurrencyID));
    return PyBytes_FromString(data->QuoteCurrencyID);
}

static int PyCThostFtdcProductExchRateFieldType_set_QuoteCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductExchRateField::QuoteCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductExchRateFieldData>(self);
    CThostFtdcProductExchRateField *data = &(extra->data);
    // memset(data->QuoteCurrencyID, 0, sizeof(data->QuoteCurrencyID));
    // memcpy(data->QuoteCurrencyID, buf, len);
    strncpy(data->QuoteCurrencyID, buf, sizeof(data->QuoteCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcProductExchRateFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductExchRateFieldData>(self);
    CThostFtdcProductExchRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcProductExchRateFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductExchRateField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductExchRateFieldData>(self);
    CThostFtdcProductExchRateField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcProductExchRateFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductExchRateFieldData>(self);
    CThostFtdcProductExchRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcProductExchRateFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductExchRateField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductExchRateFieldData>(self);
    CThostFtdcProductExchRateField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcProductExchRateFieldType_members[] = {
    /// 汇率
    /// typedef double TThostFtdcExchangeRateType
    {
        .name = "ExchangeRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcProductExchRateFieldData, data.ExchangeRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("汇率")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcProductExchRateFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcProductExchRateFieldType_get_reserve1,
    .set = PyCThostFtdcProductExchRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 报价币种类型
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "QuoteCurrencyID",
    .get = PyCThostFtdcProductExchRateFieldType_get_QuoteCurrencyID,
    .set = PyCThostFtdcProductExchRateFieldType_set_QuoteCurrencyID,
    .doc = PyDoc_STR("报价币种类型"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcProductExchRateFieldType_get_ExchangeID,
    .set = PyCThostFtdcProductExchRateFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcProductExchRateFieldType_get_ProductID,
    .set = PyCThostFtdcProductExchRateFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcProductExchRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcProductExchRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("产品报价汇率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcProductExchRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcProductExchRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcProductExchRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcProductExchRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcProductExchRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcProductExchRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("产品报价汇率")},
    {Py_tp_members, PyCThostFtdcProductExchRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcProductExchRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcProductExchRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcProductExchRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcProductExchRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcProductExchRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcProductExchRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcProductExchRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcProductExchRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcProductExchRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcProductExchRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcProductExchRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcProductExchRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcProductExchRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcProductExchRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcProductExchRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}