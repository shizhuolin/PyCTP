
#include "PyCThostFtdcQryQuoteActionField.h"

///报价操作查询

static int PyCThostFtdcQryQuoteActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExchangeID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryQuoteActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryQuoteActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryQuoteActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryQuoteActionField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryQuoteActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryQuoteActionField_ExchangeID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryQuoteActionField_BrokerID, &CThostFtdcQryQuoteActionField_BrokerID_length
        , &CThostFtdcQryQuoteActionField_InvestorID, &CThostFtdcQryQuoteActionField_InvestorID_length
        , &CThostFtdcQryQuoteActionField_ExchangeID, &CThostFtdcQryQuoteActionField_ExchangeID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteActionFieldData>(self);
    CThostFtdcQryQuoteActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryQuoteActionField_BrokerID != NULL ) {
        if(CThostFtdcQryQuoteActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryQuoteActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryQuoteActionField_BrokerID, CThostFtdcQryQuoteActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryQuoteActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryQuoteActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryQuoteActionField_InvestorID != NULL ) {
        if(CThostFtdcQryQuoteActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryQuoteActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryQuoteActionField_InvestorID, CThostFtdcQryQuoteActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryQuoteActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryQuoteActionField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryQuoteActionField_ExchangeID != NULL ) {
        if(CThostFtdcQryQuoteActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryQuoteActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryQuoteActionField_ExchangeID, CThostFtdcQryQuoteActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryQuoteActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryQuoteActionField_ExchangeID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryQuoteActionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteActionFieldData>(self);
    CThostFtdcQryQuoteActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryQuoteActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryQuoteActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryQuoteActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteActionFieldData>(self);
    CThostFtdcQryQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryQuoteActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteActionFieldData>(self);
    CThostFtdcQryQuoteActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryQuoteActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteActionFieldData>(self);
    CThostFtdcQryQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryQuoteActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteActionFieldData>(self);
    CThostFtdcQryQuoteActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryQuoteActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteActionFieldData>(self);
    CThostFtdcQryQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryQuoteActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryQuoteActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteActionFieldData>(self);
    CThostFtdcQryQuoteActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryQuoteActionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryQuoteActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryQuoteActionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryQuoteActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryQuoteActionFieldType_get_InvestorID,
    .set = PyCThostFtdcQryQuoteActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryQuoteActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryQuoteActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryQuoteActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryQuoteActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("报价操作查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryQuoteActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryQuoteActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryQuoteActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryQuoteActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryQuoteActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryQuoteActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("报价操作查询")},
    {Py_tp_members, PyCThostFtdcQryQuoteActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryQuoteActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryQuoteActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryQuoteActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryQuoteActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryQuoteActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryQuoteActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryQuoteActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryQuoteActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryQuoteActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryQuoteActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryQuoteActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryQuoteActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryQuoteActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryQuoteActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryQuoteActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}