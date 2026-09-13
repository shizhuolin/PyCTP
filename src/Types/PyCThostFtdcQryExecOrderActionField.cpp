
#include "PyCThostFtdcQryExecOrderActionField.h"

///执行宣告操作查询

static int PyCThostFtdcQryExecOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExchangeID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryExecOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryExecOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryExecOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryExecOrderActionField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryExecOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryExecOrderActionField_ExchangeID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryExecOrderActionField_BrokerID, &CThostFtdcQryExecOrderActionField_BrokerID_length
        , &CThostFtdcQryExecOrderActionField_InvestorID, &CThostFtdcQryExecOrderActionField_InvestorID_length
        , &CThostFtdcQryExecOrderActionField_ExchangeID, &CThostFtdcQryExecOrderActionField_ExchangeID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderActionFieldData>(self);
    CThostFtdcQryExecOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryExecOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcQryExecOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryExecOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryExecOrderActionField_BrokerID, CThostFtdcQryExecOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryExecOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryExecOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryExecOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcQryExecOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryExecOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryExecOrderActionField_InvestorID, CThostFtdcQryExecOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryExecOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryExecOrderActionField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryExecOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcQryExecOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryExecOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryExecOrderActionField_ExchangeID, CThostFtdcQryExecOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryExecOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryExecOrderActionField_ExchangeID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryExecOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderActionFieldData>(self);
    CThostFtdcQryExecOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExecOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExecOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryExecOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderActionFieldData>(self);
    CThostFtdcQryExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryExecOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExecOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderActionFieldData>(self);
    CThostFtdcQryExecOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryExecOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderActionFieldData>(self);
    CThostFtdcQryExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryExecOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExecOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderActionFieldData>(self);
    CThostFtdcQryExecOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryExecOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderActionFieldData>(self);
    CThostFtdcQryExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryExecOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExecOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderActionFieldData>(self);
    CThostFtdcQryExecOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryExecOrderActionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryExecOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryExecOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryExecOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryExecOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcQryExecOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryExecOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryExecOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryExecOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryExecOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("执行宣告操作查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryExecOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryExecOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryExecOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryExecOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryExecOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryExecOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("执行宣告操作查询")},
    {Py_tp_members, PyCThostFtdcQryExecOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryExecOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryExecOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryExecOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryExecOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryExecOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryExecOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryExecOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryExecOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryExecOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryExecOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryExecOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryExecOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryExecOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryExecOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExecOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}