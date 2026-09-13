
#include "PyCThostFtdcQryInvestorPortfMarginRatioField.h"

///投资者新型组合保证金系数查询

static int PyCThostFtdcQryInvestorPortfMarginRatioFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExchangeID", "ProductGroupID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorPortfMarginRatioField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPortfMarginRatioField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorPortfMarginRatioField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPortfMarginRatioField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryInvestorPortfMarginRatioField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPortfMarginRatioField_ExchangeID_length = 0;

    /// 产品群代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryInvestorPortfMarginRatioField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPortfMarginRatioField_ProductGroupID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorPortfMarginRatioField_BrokerID, &CThostFtdcQryInvestorPortfMarginRatioField_BrokerID_length
        , &CThostFtdcQryInvestorPortfMarginRatioField_InvestorID, &CThostFtdcQryInvestorPortfMarginRatioField_InvestorID_length
        , &CThostFtdcQryInvestorPortfMarginRatioField_ExchangeID, &CThostFtdcQryInvestorPortfMarginRatioField_ExchangeID_length
        , &CThostFtdcQryInvestorPortfMarginRatioField_ProductGroupID, &CThostFtdcQryInvestorPortfMarginRatioField_ProductGroupID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcQryInvestorPortfMarginRatioField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorPortfMarginRatioField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorPortfMarginRatioField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorPortfMarginRatioField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorPortfMarginRatioField_BrokerID, CThostFtdcQryInvestorPortfMarginRatioField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorPortfMarginRatioField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorPortfMarginRatioField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorPortfMarginRatioField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorPortfMarginRatioField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorPortfMarginRatioField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorPortfMarginRatioField_InvestorID, CThostFtdcQryInvestorPortfMarginRatioField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorPortfMarginRatioField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorPortfMarginRatioField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryInvestorPortfMarginRatioField_ExchangeID != NULL ) {
        if(CThostFtdcQryInvestorPortfMarginRatioField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryInvestorPortfMarginRatioField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryInvestorPortfMarginRatioField_ExchangeID, CThostFtdcQryInvestorPortfMarginRatioField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryInvestorPortfMarginRatioField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryInvestorPortfMarginRatioField_ExchangeID = NULL;
    }

    /// 产品群代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryInvestorPortfMarginRatioField_ProductGroupID != NULL ) {
        if(CThostFtdcQryInvestorPortfMarginRatioField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 40)", CThostFtdcQryInvestorPortfMarginRatioField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcQryInvestorPortfMarginRatioField_ProductGroupID, CThostFtdcQryInvestorPortfMarginRatioField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcQryInvestorPortfMarginRatioField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcQryInvestorPortfMarginRatioField_ProductGroupID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorPortfMarginRatioFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcQryInvestorPortfMarginRatioField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPortfMarginRatioField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPortfMarginRatioField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorPortfMarginRatioFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcQryInvestorPortfMarginRatioField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorPortfMarginRatioFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPortfMarginRatioField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcQryInvestorPortfMarginRatioField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorPortfMarginRatioFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcQryInvestorPortfMarginRatioField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorPortfMarginRatioFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPortfMarginRatioField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcQryInvestorPortfMarginRatioField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryInvestorPortfMarginRatioFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcQryInvestorPortfMarginRatioField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryInvestorPortfMarginRatioFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPortfMarginRatioField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcQryInvestorPortfMarginRatioField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品群代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryInvestorPortfMarginRatioFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcQryInvestorPortfMarginRatioField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcQryInvestorPortfMarginRatioFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPortfMarginRatioField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPortfMarginRatioFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfMarginRatioFieldData>(self);
    CThostFtdcQryInvestorPortfMarginRatioField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorPortfMarginRatioFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorPortfMarginRatioFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorPortfMarginRatioFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorPortfMarginRatioFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorPortfMarginRatioFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorPortfMarginRatioFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryInvestorPortfMarginRatioFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryInvestorPortfMarginRatioFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品群代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcQryInvestorPortfMarginRatioFieldType_get_ProductGroupID,
    .set = PyCThostFtdcQryInvestorPortfMarginRatioFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("产品群代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorPortfMarginRatioFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorPortfMarginRatioField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者新型组合保证金系数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorPortfMarginRatioFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorPortfMarginRatioFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorPortfMarginRatioFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorPortfMarginRatioFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorPortfMarginRatioFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorPortfMarginRatioFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者新型组合保证金系数查询")},
    {Py_tp_members, PyCThostFtdcQryInvestorPortfMarginRatioFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorPortfMarginRatioFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorPortfMarginRatioFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorPortfMarginRatioFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorPortfMarginRatioFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorPortfMarginRatioField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorPortfMarginRatioFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorPortfMarginRatioFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorPortfMarginRatioFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorPortfMarginRatioFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorPortfMarginRatioFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorPortfMarginRatioFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorPortfMarginRatioFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorPortfMarginRatioFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPortfMarginRatioField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPortfMarginRatioField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}