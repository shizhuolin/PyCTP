
#include "PyCThostFtdcSPBMInvestorPortfDefField.h"

///投资者套餐选择

static int PyCThostFtdcSPBMInvestorPortfDefFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "PortfolioDefID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSPBMInvestorPortfDefField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSPBMInvestorPortfDefField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSPBMInvestorPortfDefField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSPBMInvestorPortfDefField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSPBMInvestorPortfDefField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSPBMInvestorPortfDefField_InvestorID_length = 0;

    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    int CThostFtdcSPBMInvestorPortfDefField_PortfolioDefID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
        , &CThostFtdcSPBMInvestorPortfDefField_ExchangeID, &CThostFtdcSPBMInvestorPortfDefField_ExchangeID_length
        , &CThostFtdcSPBMInvestorPortfDefField_BrokerID, &CThostFtdcSPBMInvestorPortfDefField_BrokerID_length
        , &CThostFtdcSPBMInvestorPortfDefField_InvestorID, &CThostFtdcSPBMInvestorPortfDefField_InvestorID_length
        , &CThostFtdcSPBMInvestorPortfDefField_PortfolioDefID
    )) {
        return -1;
    }

    PyCThostFtdcSPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInvestorPortfDefFieldData>(self);
    CThostFtdcSPBMInvestorPortfDefField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSPBMInvestorPortfDefField_ExchangeID != NULL ) {
        if(CThostFtdcSPBMInvestorPortfDefField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSPBMInvestorPortfDefField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSPBMInvestorPortfDefField_ExchangeID, CThostFtdcSPBMInvestorPortfDefField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSPBMInvestorPortfDefField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSPBMInvestorPortfDefField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSPBMInvestorPortfDefField_BrokerID != NULL ) {
        if(CThostFtdcSPBMInvestorPortfDefField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSPBMInvestorPortfDefField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSPBMInvestorPortfDefField_BrokerID, CThostFtdcSPBMInvestorPortfDefField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSPBMInvestorPortfDefField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSPBMInvestorPortfDefField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSPBMInvestorPortfDefField_InvestorID != NULL ) {
        if(CThostFtdcSPBMInvestorPortfDefField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSPBMInvestorPortfDefField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSPBMInvestorPortfDefField_InvestorID, CThostFtdcSPBMInvestorPortfDefField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSPBMInvestorPortfDefField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSPBMInvestorPortfDefField_InvestorID = NULL;
    }

    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    data->PortfolioDefID = CThostFtdcSPBMInvestorPortfDefField_PortfolioDefID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSPBMInvestorPortfDefFieldType_repr(PyObject *self) {

    PyCThostFtdcSPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInvestorPortfDefFieldData>(self);
    CThostFtdcSPBMInvestorPortfDefField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "PortfolioDefID", data->PortfolioDefID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMInvestorPortfDefField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMInvestorPortfDefField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSPBMInvestorPortfDefFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInvestorPortfDefFieldData>(self);
    CThostFtdcSPBMInvestorPortfDefField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSPBMInvestorPortfDefFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMInvestorPortfDefField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInvestorPortfDefFieldData>(self);
    CThostFtdcSPBMInvestorPortfDefField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSPBMInvestorPortfDefFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInvestorPortfDefFieldData>(self);
    CThostFtdcSPBMInvestorPortfDefField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSPBMInvestorPortfDefFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMInvestorPortfDefField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInvestorPortfDefFieldData>(self);
    CThostFtdcSPBMInvestorPortfDefField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSPBMInvestorPortfDefFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInvestorPortfDefFieldData>(self);
    CThostFtdcSPBMInvestorPortfDefField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSPBMInvestorPortfDefFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMInvestorPortfDefField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMInvestorPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInvestorPortfDefFieldData>(self);
    CThostFtdcSPBMInvestorPortfDefField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSPBMInvestorPortfDefFieldType_members[] = {
    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    {
        .name = "PortfolioDefID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMInvestorPortfDefFieldData, data.PortfolioDefID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("组合保证金套餐代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSPBMInvestorPortfDefFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSPBMInvestorPortfDefFieldType_get_ExchangeID,
    .set = PyCThostFtdcSPBMInvestorPortfDefFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSPBMInvestorPortfDefFieldType_get_BrokerID,
    .set = PyCThostFtdcSPBMInvestorPortfDefFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSPBMInvestorPortfDefFieldType_get_InvestorID,
    .set = PyCThostFtdcSPBMInvestorPortfDefFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSPBMInvestorPortfDefFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSPBMInvestorPortfDefField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者套餐选择")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSPBMInvestorPortfDefFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSPBMInvestorPortfDefFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSPBMInvestorPortfDefFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSPBMInvestorPortfDefFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSPBMInvestorPortfDefFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSPBMInvestorPortfDefFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者套餐选择")},
    {Py_tp_members, PyCThostFtdcSPBMInvestorPortfDefFieldType_members},
    {Py_tp_getset, PyCThostFtdcSPBMInvestorPortfDefFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSPBMInvestorPortfDefFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSPBMInvestorPortfDefFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSPBMInvestorPortfDefFieldType_spec = {
    .name = "PyCTP.CThostFtdcSPBMInvestorPortfDefField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSPBMInvestorPortfDefFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSPBMInvestorPortfDefFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSPBMInvestorPortfDefFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSPBMInvestorPortfDefFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSPBMInvestorPortfDefFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSPBMInvestorPortfDefFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSPBMInvestorPortfDefFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSPBMInvestorPortfDefFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSPBMInvestorPortfDefField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMInvestorPortfDefField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}