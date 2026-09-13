
#include "PyCThostFtdcQryInvestorProdSPBMDetailField.h"

///投资者产品SPBM明细查询

static int PyCThostFtdcQryInvestorProdSPBMDetailFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryInvestorProdSPBMDetailField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdSPBMDetailField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorProdSPBMDetailField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdSPBMDetailField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorProdSPBMDetailField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdSPBMDetailField_InvestorID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInvestorProdSPBMDetailField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdSPBMDetailField_ProdFamilyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorProdSPBMDetailField_ExchangeID, &CThostFtdcQryInvestorProdSPBMDetailField_ExchangeID_length
        , &CThostFtdcQryInvestorProdSPBMDetailField_BrokerID, &CThostFtdcQryInvestorProdSPBMDetailField_BrokerID_length
        , &CThostFtdcQryInvestorProdSPBMDetailField_InvestorID, &CThostFtdcQryInvestorProdSPBMDetailField_InvestorID_length
        , &CThostFtdcQryInvestorProdSPBMDetailField_ProdFamilyCode, &CThostFtdcQryInvestorProdSPBMDetailField_ProdFamilyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcQryInvestorProdSPBMDetailField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryInvestorProdSPBMDetailField_ExchangeID != NULL ) {
        if(CThostFtdcQryInvestorProdSPBMDetailField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryInvestorProdSPBMDetailField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryInvestorProdSPBMDetailField_ExchangeID, CThostFtdcQryInvestorProdSPBMDetailField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryInvestorProdSPBMDetailField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryInvestorProdSPBMDetailField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorProdSPBMDetailField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorProdSPBMDetailField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorProdSPBMDetailField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorProdSPBMDetailField_BrokerID, CThostFtdcQryInvestorProdSPBMDetailField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorProdSPBMDetailField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorProdSPBMDetailField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorProdSPBMDetailField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorProdSPBMDetailField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorProdSPBMDetailField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorProdSPBMDetailField_InvestorID, CThostFtdcQryInvestorProdSPBMDetailField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorProdSPBMDetailField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorProdSPBMDetailField_InvestorID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInvestorProdSPBMDetailField_ProdFamilyCode != NULL ) {
        if(CThostFtdcQryInvestorProdSPBMDetailField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcQryInvestorProdSPBMDetailField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcQryInvestorProdSPBMDetailField_ProdFamilyCode, CThostFtdcQryInvestorProdSPBMDetailField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcQryInvestorProdSPBMDetailField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcQryInvestorProdSPBMDetailField_ProdFamilyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcQryInvestorProdSPBMDetailField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProdSPBMDetailField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProdSPBMDetailField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcQryInvestorProdSPBMDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryInvestorProdSPBMDetailFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdSPBMDetailField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcQryInvestorProdSPBMDetailField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcQryInvestorProdSPBMDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorProdSPBMDetailFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdSPBMDetailField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcQryInvestorProdSPBMDetailField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcQryInvestorProdSPBMDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorProdSPBMDetailFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdSPBMDetailField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcQryInvestorProdSPBMDetailField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcQryInvestorProdSPBMDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcQryInvestorProdSPBMDetailFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdSPBMDetailField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcQryInvestorProdSPBMDetailField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorProdSPBMDetailFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorProdSPBMDetailFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryInvestorProdSPBMDetailFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryInvestorProdSPBMDetailFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorProdSPBMDetailFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorProdSPBMDetailFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorProdSPBMDetailFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorProdSPBMDetailFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcQryInvestorProdSPBMDetailFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcQryInvestorProdSPBMDetailFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorProdSPBMDetailFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorProdSPBMDetailField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者产品SPBM明细查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorProdSPBMDetailFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorProdSPBMDetailFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorProdSPBMDetailFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorProdSPBMDetailFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorProdSPBMDetailFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorProdSPBMDetailFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者产品SPBM明细查询")},
    {Py_tp_members, PyCThostFtdcQryInvestorProdSPBMDetailFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorProdSPBMDetailFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorProdSPBMDetailFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorProdSPBMDetailFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorProdSPBMDetailFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorProdSPBMDetailField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorProdSPBMDetailFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorProdSPBMDetailFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorProdSPBMDetailFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorProdSPBMDetailFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorProdSPBMDetailFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorProdSPBMDetailFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorProdSPBMDetailFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorProdSPBMDetailFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorProdSPBMDetailField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorProdSPBMDetailField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}