
#include "PyCThostFtdcQryInvestorProdRULEMarginField.h"

///投资者产品RULE保证金查询

static int PyCThostFtdcQryInvestorProdRULEMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode", "CommodityGroupID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryInvestorProdRULEMarginField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdRULEMarginField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorProdRULEMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdRULEMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorProdRULEMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdRULEMarginField_InvestorID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInvestorProdRULEMarginField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdRULEMarginField_ProdFamilyCode_length = 0;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    int CThostFtdcQryInvestorProdRULEMarginField_CommodityGroupID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
        , &CThostFtdcQryInvestorProdRULEMarginField_ExchangeID, &CThostFtdcQryInvestorProdRULEMarginField_ExchangeID_length
        , &CThostFtdcQryInvestorProdRULEMarginField_BrokerID, &CThostFtdcQryInvestorProdRULEMarginField_BrokerID_length
        , &CThostFtdcQryInvestorProdRULEMarginField_InvestorID, &CThostFtdcQryInvestorProdRULEMarginField_InvestorID_length
        , &CThostFtdcQryInvestorProdRULEMarginField_ProdFamilyCode, &CThostFtdcQryInvestorProdRULEMarginField_ProdFamilyCode_length
        , &CThostFtdcQryInvestorProdRULEMarginField_CommodityGroupID
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRULEMarginFieldData>(self);
    CThostFtdcQryInvestorProdRULEMarginField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryInvestorProdRULEMarginField_ExchangeID != NULL ) {
        if(CThostFtdcQryInvestorProdRULEMarginField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryInvestorProdRULEMarginField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryInvestorProdRULEMarginField_ExchangeID, CThostFtdcQryInvestorProdRULEMarginField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryInvestorProdRULEMarginField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryInvestorProdRULEMarginField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorProdRULEMarginField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorProdRULEMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorProdRULEMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorProdRULEMarginField_BrokerID, CThostFtdcQryInvestorProdRULEMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorProdRULEMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorProdRULEMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorProdRULEMarginField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorProdRULEMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorProdRULEMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorProdRULEMarginField_InvestorID, CThostFtdcQryInvestorProdRULEMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorProdRULEMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorProdRULEMarginField_InvestorID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInvestorProdRULEMarginField_ProdFamilyCode != NULL ) {
        if(CThostFtdcQryInvestorProdRULEMarginField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcQryInvestorProdRULEMarginField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcQryInvestorProdRULEMarginField_ProdFamilyCode, CThostFtdcQryInvestorProdRULEMarginField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcQryInvestorProdRULEMarginField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcQryInvestorProdRULEMarginField_ProdFamilyCode = NULL;
    }

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    data->CommodityGroupID = CThostFtdcQryInvestorProdRULEMarginField_CommodityGroupID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorProdRULEMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRULEMarginFieldData>(self);
    CThostFtdcQryInvestorProdRULEMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "CommodityGroupID", data->CommodityGroupID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProdRULEMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProdRULEMarginField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryInvestorProdRULEMarginFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRULEMarginFieldData>(self);
    CThostFtdcQryInvestorProdRULEMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryInvestorProdRULEMarginFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdRULEMarginField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRULEMarginFieldData>(self);
    CThostFtdcQryInvestorProdRULEMarginField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorProdRULEMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRULEMarginFieldData>(self);
    CThostFtdcQryInvestorProdRULEMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorProdRULEMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdRULEMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRULEMarginFieldData>(self);
    CThostFtdcQryInvestorProdRULEMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorProdRULEMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRULEMarginFieldData>(self);
    CThostFtdcQryInvestorProdRULEMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorProdRULEMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdRULEMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRULEMarginFieldData>(self);
    CThostFtdcQryInvestorProdRULEMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInvestorProdRULEMarginFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRULEMarginFieldData>(self);
    CThostFtdcQryInvestorProdRULEMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcQryInvestorProdRULEMarginFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdRULEMarginField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRULEMarginFieldData>(self);
    CThostFtdcQryInvestorProdRULEMarginField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorProdRULEMarginFieldType_members[] = {
    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    {
        .name = "CommodityGroupID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryInvestorProdRULEMarginFieldData, data.CommodityGroupID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("商品群号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorProdRULEMarginFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryInvestorProdRULEMarginFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryInvestorProdRULEMarginFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorProdRULEMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorProdRULEMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorProdRULEMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorProdRULEMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcQryInvestorProdRULEMarginFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcQryInvestorProdRULEMarginFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorProdRULEMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorProdRULEMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者产品RULE保证金查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorProdRULEMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorProdRULEMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorProdRULEMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorProdRULEMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorProdRULEMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorProdRULEMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者产品RULE保证金查询")},
    {Py_tp_members, PyCThostFtdcQryInvestorProdRULEMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorProdRULEMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorProdRULEMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorProdRULEMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorProdRULEMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorProdRULEMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorProdRULEMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorProdRULEMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorProdRULEMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorProdRULEMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorProdRULEMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorProdRULEMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorProdRULEMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorProdRULEMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorProdRULEMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorProdRULEMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}