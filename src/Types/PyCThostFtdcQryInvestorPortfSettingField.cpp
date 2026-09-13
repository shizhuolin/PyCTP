
#include "PyCThostFtdcQryInvestorPortfSettingField.h"

///投资者新组保设置查询

static int PyCThostFtdcQryInvestorPortfSettingFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryInvestorPortfSettingField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPortfSettingField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorPortfSettingField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPortfSettingField_BrokerID_length = 0;

    /// 投资者编号
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorPortfSettingField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPortfSettingField_InvestorID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorPortfSettingField_ExchangeID, &CThostFtdcQryInvestorPortfSettingField_ExchangeID_length
        , &CThostFtdcQryInvestorPortfSettingField_BrokerID, &CThostFtdcQryInvestorPortfSettingField_BrokerID_length
        , &CThostFtdcQryInvestorPortfSettingField_InvestorID, &CThostFtdcQryInvestorPortfSettingField_InvestorID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfSettingFieldData>(self);
    CThostFtdcQryInvestorPortfSettingField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryInvestorPortfSettingField_ExchangeID != NULL ) {
        if(CThostFtdcQryInvestorPortfSettingField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryInvestorPortfSettingField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryInvestorPortfSettingField_ExchangeID, CThostFtdcQryInvestorPortfSettingField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryInvestorPortfSettingField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryInvestorPortfSettingField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorPortfSettingField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorPortfSettingField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorPortfSettingField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorPortfSettingField_BrokerID, CThostFtdcQryInvestorPortfSettingField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorPortfSettingField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorPortfSettingField_BrokerID = NULL;
    }

    /// 投资者编号
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorPortfSettingField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorPortfSettingField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorPortfSettingField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorPortfSettingField_InvestorID, CThostFtdcQryInvestorPortfSettingField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorPortfSettingField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorPortfSettingField_InvestorID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorPortfSettingFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfSettingFieldData>(self);
    CThostFtdcQryInvestorPortfSettingField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPortfSettingField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPortfSettingField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryInvestorPortfSettingFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfSettingFieldData>(self);
    CThostFtdcQryInvestorPortfSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryInvestorPortfSettingFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPortfSettingField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfSettingFieldData>(self);
    CThostFtdcQryInvestorPortfSettingField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorPortfSettingFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfSettingFieldData>(self);
    CThostFtdcQryInvestorPortfSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorPortfSettingFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPortfSettingField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfSettingFieldData>(self);
    CThostFtdcQryInvestorPortfSettingField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者编号
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorPortfSettingFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfSettingFieldData>(self);
    CThostFtdcQryInvestorPortfSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorPortfSettingFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPortfSettingField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfSettingFieldData>(self);
    CThostFtdcQryInvestorPortfSettingField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorPortfSettingFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorPortfSettingFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryInvestorPortfSettingFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryInvestorPortfSettingFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorPortfSettingFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorPortfSettingFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者编号
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorPortfSettingFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorPortfSettingFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者编号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorPortfSettingFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorPortfSettingField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者新组保设置查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorPortfSettingFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorPortfSettingFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorPortfSettingFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorPortfSettingFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorPortfSettingFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorPortfSettingFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者新组保设置查询")},
    {Py_tp_members, PyCThostFtdcQryInvestorPortfSettingFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorPortfSettingFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorPortfSettingFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorPortfSettingFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorPortfSettingFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorPortfSettingField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorPortfSettingFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorPortfSettingFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorPortfSettingFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorPortfSettingFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorPortfSettingFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorPortfSettingFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorPortfSettingFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorPortfSettingFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPortfSettingField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPortfSettingField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}