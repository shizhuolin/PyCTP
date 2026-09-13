
#include "PyCThostFtdcQrySPBMInvestorPortfDefField.h"

///投资者套餐选择查询

static int PyCThostFtdcQrySPBMInvestorPortfDefFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQrySPBMInvestorPortfDefField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQrySPBMInvestorPortfDefField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQrySPBMInvestorPortfDefField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQrySPBMInvestorPortfDefField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQrySPBMInvestorPortfDefField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQrySPBMInvestorPortfDefField_InvestorID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQrySPBMInvestorPortfDefField_ExchangeID, &CThostFtdcQrySPBMInvestorPortfDefField_ExchangeID_length
        , &CThostFtdcQrySPBMInvestorPortfDefField_BrokerID, &CThostFtdcQrySPBMInvestorPortfDefField_BrokerID_length
        , &CThostFtdcQrySPBMInvestorPortfDefField_InvestorID, &CThostFtdcQrySPBMInvestorPortfDefField_InvestorID_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInvestorPortfDefFieldData>(self);
    CThostFtdcQrySPBMInvestorPortfDefField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQrySPBMInvestorPortfDefField_ExchangeID != NULL ) {
        if(CThostFtdcQrySPBMInvestorPortfDefField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQrySPBMInvestorPortfDefField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQrySPBMInvestorPortfDefField_ExchangeID, CThostFtdcQrySPBMInvestorPortfDefField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQrySPBMInvestorPortfDefField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQrySPBMInvestorPortfDefField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQrySPBMInvestorPortfDefField_BrokerID != NULL ) {
        if(CThostFtdcQrySPBMInvestorPortfDefField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQrySPBMInvestorPortfDefField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQrySPBMInvestorPortfDefField_BrokerID, CThostFtdcQrySPBMInvestorPortfDefField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQrySPBMInvestorPortfDefField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQrySPBMInvestorPortfDefField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQrySPBMInvestorPortfDefField_InvestorID != NULL ) {
        if(CThostFtdcQrySPBMInvestorPortfDefField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQrySPBMInvestorPortfDefField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQrySPBMInvestorPortfDefField_InvestorID, CThostFtdcQrySPBMInvestorPortfDefField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQrySPBMInvestorPortfDefField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQrySPBMInvestorPortfDefField_InvestorID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySPBMInvestorPortfDefFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInvestorPortfDefFieldData>(self);
    CThostFtdcQrySPBMInvestorPortfDefField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMInvestorPortfDefField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMInvestorPortfDefField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQrySPBMInvestorPortfDefFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInvestorPortfDefFieldData>(self);
    CThostFtdcQrySPBMInvestorPortfDefField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQrySPBMInvestorPortfDefFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMInvestorPortfDefField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInvestorPortfDefFieldData>(self);
    CThostFtdcQrySPBMInvestorPortfDefField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQrySPBMInvestorPortfDefFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInvestorPortfDefFieldData>(self);
    CThostFtdcQrySPBMInvestorPortfDefField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQrySPBMInvestorPortfDefFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMInvestorPortfDefField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInvestorPortfDefFieldData>(self);
    CThostFtdcQrySPBMInvestorPortfDefField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQrySPBMInvestorPortfDefFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInvestorPortfDefFieldData>(self);
    CThostFtdcQrySPBMInvestorPortfDefField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQrySPBMInvestorPortfDefFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMInvestorPortfDefField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInvestorPortfDefFieldData>(self);
    CThostFtdcQrySPBMInvestorPortfDefField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySPBMInvestorPortfDefFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySPBMInvestorPortfDefFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQrySPBMInvestorPortfDefFieldType_get_ExchangeID,
    .set = PyCThostFtdcQrySPBMInvestorPortfDefFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQrySPBMInvestorPortfDefFieldType_get_BrokerID,
    .set = PyCThostFtdcQrySPBMInvestorPortfDefFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQrySPBMInvestorPortfDefFieldType_get_InvestorID,
    .set = PyCThostFtdcQrySPBMInvestorPortfDefFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySPBMInvestorPortfDefFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySPBMInvestorPortfDefField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者套餐选择查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySPBMInvestorPortfDefFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySPBMInvestorPortfDefFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySPBMInvestorPortfDefFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySPBMInvestorPortfDefFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySPBMInvestorPortfDefFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySPBMInvestorPortfDefFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者套餐选择查询")},
    {Py_tp_members, PyCThostFtdcQrySPBMInvestorPortfDefFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySPBMInvestorPortfDefFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySPBMInvestorPortfDefFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySPBMInvestorPortfDefFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySPBMInvestorPortfDefFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySPBMInvestorPortfDefField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySPBMInvestorPortfDefFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySPBMInvestorPortfDefFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySPBMInvestorPortfDefFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySPBMInvestorPortfDefFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySPBMInvestorPortfDefFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySPBMInvestorPortfDefFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySPBMInvestorPortfDefFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySPBMInvestorPortfDefFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySPBMInvestorPortfDefField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMInvestorPortfDefField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}