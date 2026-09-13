
#include "PyCThostFtdcInvestorPortfMarginRatioField.h"

///投资者新型组合保证金系数

static int PyCThostFtdcInvestorPortfMarginRatioFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InvestorRange", "BrokerID", "InvestorID", "ExchangeID", "MarginRatio", "ProductGroupID", NULL };


    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcInvestorPortfMarginRatioField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorPortfMarginRatioField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorPortfMarginRatioField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorPortfMarginRatioField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorPortfMarginRatioField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorPortfMarginRatioField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorPortfMarginRatioField_ExchangeID_length = 0;

    /// 会员对投资者收取的保证金和交易所对投资者收取的保证金的比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInvestorPortfMarginRatioField_MarginRatio = 0.0;

    /// 产品群代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcInvestorPortfMarginRatioField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcInvestorPortfMarginRatioField_ProductGroupID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|cy#y#y#dy#", (char **)kwlist
        , &CThostFtdcInvestorPortfMarginRatioField_InvestorRange
        , &CThostFtdcInvestorPortfMarginRatioField_BrokerID, &CThostFtdcInvestorPortfMarginRatioField_BrokerID_length
        , &CThostFtdcInvestorPortfMarginRatioField_InvestorID, &CThostFtdcInvestorPortfMarginRatioField_InvestorID_length
        , &CThostFtdcInvestorPortfMarginRatioField_ExchangeID, &CThostFtdcInvestorPortfMarginRatioField_ExchangeID_length
        , &CThostFtdcInvestorPortfMarginRatioField_MarginRatio
        , &CThostFtdcInvestorPortfMarginRatioField_ProductGroupID, &CThostFtdcInvestorPortfMarginRatioField_ProductGroupID_length
    )) {
        return -1;
    }

    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);


    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcInvestorPortfMarginRatioField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorPortfMarginRatioField_BrokerID != NULL ) {
        if(CThostFtdcInvestorPortfMarginRatioField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorPortfMarginRatioField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorPortfMarginRatioField_BrokerID, CThostFtdcInvestorPortfMarginRatioField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorPortfMarginRatioField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorPortfMarginRatioField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorPortfMarginRatioField_InvestorID != NULL ) {
        if(CThostFtdcInvestorPortfMarginRatioField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorPortfMarginRatioField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorPortfMarginRatioField_InvestorID, CThostFtdcInvestorPortfMarginRatioField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorPortfMarginRatioField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorPortfMarginRatioField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorPortfMarginRatioField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorPortfMarginRatioField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorPortfMarginRatioField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorPortfMarginRatioField_ExchangeID, CThostFtdcInvestorPortfMarginRatioField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorPortfMarginRatioField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorPortfMarginRatioField_ExchangeID = NULL;
    }

    /// 会员对投资者收取的保证金和交易所对投资者收取的保证金的比例
    /// typedef double TThostFtdcRatioType
    data->MarginRatio = CThostFtdcInvestorPortfMarginRatioField_MarginRatio;

    /// 产品群代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcInvestorPortfMarginRatioField_ProductGroupID != NULL ) {
        if(CThostFtdcInvestorPortfMarginRatioField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 40)", CThostFtdcInvestorPortfMarginRatioField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcInvestorPortfMarginRatioField_ProductGroupID, CThostFtdcInvestorPortfMarginRatioField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcInvestorPortfMarginRatioField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcInvestorPortfMarginRatioField_ProductGroupID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorPortfMarginRatioFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:c,s:y,s:y,s:y,s:d,s:y}"
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "MarginRatio", data->MarginRatio
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPortfMarginRatioField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPortfMarginRatioField repr");
        return NULL;
    }

    return repr;
}


/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcInvestorPortfMarginRatioFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcInvestorPortfMarginRatioFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorPortfMarginRatioField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorPortfMarginRatioFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorPortfMarginRatioFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPortfMarginRatioField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorPortfMarginRatioFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorPortfMarginRatioFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPortfMarginRatioField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorPortfMarginRatioFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorPortfMarginRatioFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPortfMarginRatioField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品群代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcInvestorPortfMarginRatioFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcInvestorPortfMarginRatioFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPortfMarginRatioField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcInvestorPortfMarginRatioField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorPortfMarginRatioFieldType_members[] = {
    /// 会员对投资者收取的保证金和交易所对投资者收取的保证金的比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "MarginRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPortfMarginRatioFieldData, data.MarginRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会员对投资者收取的保证金和交易所对投资者收取的保证金的比例")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorPortfMarginRatioFieldType_getsets[] = {
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcInvestorPortfMarginRatioFieldType_get_InvestorRange,
    .set = PyCThostFtdcInvestorPortfMarginRatioFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorPortfMarginRatioFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorPortfMarginRatioFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorPortfMarginRatioFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorPortfMarginRatioFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorPortfMarginRatioFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorPortfMarginRatioFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品群代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcInvestorPortfMarginRatioFieldType_get_ProductGroupID,
    .set = PyCThostFtdcInvestorPortfMarginRatioFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("产品群代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorPortfMarginRatioFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorPortfMarginRatioField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者新型组合保证金系数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorPortfMarginRatioFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorPortfMarginRatioFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorPortfMarginRatioFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorPortfMarginRatioFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorPortfMarginRatioFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorPortfMarginRatioFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者新型组合保证金系数")},
    {Py_tp_members, PyCThostFtdcInvestorPortfMarginRatioFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorPortfMarginRatioFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorPortfMarginRatioFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorPortfMarginRatioFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorPortfMarginRatioFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorPortfMarginRatioField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorPortfMarginRatioFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorPortfMarginRatioFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorPortfMarginRatioFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorPortfMarginRatioFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorPortfMarginRatioFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorPortfMarginRatioFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorPortfMarginRatioFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorPortfMarginRatioFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorPortfMarginRatioField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPortfMarginRatioField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}