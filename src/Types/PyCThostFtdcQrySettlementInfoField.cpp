
#include "PyCThostFtdcQrySettlementInfoField.h"

///查询投资者结算结果

static int PyCThostFtdcQrySettlementInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "TradingDay", "AccountID", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQrySettlementInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQrySettlementInfoField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQrySettlementInfoField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQrySettlementInfoField_InvestorID_length = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcQrySettlementInfoField_TradingDay = NULL;
    Py_ssize_t CThostFtdcQrySettlementInfoField_TradingDay_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcQrySettlementInfoField_AccountID = NULL;
    Py_ssize_t CThostFtdcQrySettlementInfoField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcQrySettlementInfoField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcQrySettlementInfoField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQrySettlementInfoField_BrokerID, &CThostFtdcQrySettlementInfoField_BrokerID_length
        , &CThostFtdcQrySettlementInfoField_InvestorID, &CThostFtdcQrySettlementInfoField_InvestorID_length
        , &CThostFtdcQrySettlementInfoField_TradingDay, &CThostFtdcQrySettlementInfoField_TradingDay_length
        , &CThostFtdcQrySettlementInfoField_AccountID, &CThostFtdcQrySettlementInfoField_AccountID_length
        , &CThostFtdcQrySettlementInfoField_CurrencyID, &CThostFtdcQrySettlementInfoField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQrySettlementInfoField_BrokerID != NULL ) {
        if(CThostFtdcQrySettlementInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQrySettlementInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQrySettlementInfoField_BrokerID, CThostFtdcQrySettlementInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQrySettlementInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQrySettlementInfoField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQrySettlementInfoField_InvestorID != NULL ) {
        if(CThostFtdcQrySettlementInfoField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQrySettlementInfoField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQrySettlementInfoField_InvestorID, CThostFtdcQrySettlementInfoField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQrySettlementInfoField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQrySettlementInfoField_InvestorID = NULL;
    }

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcQrySettlementInfoField_TradingDay != NULL ) {
        if(CThostFtdcQrySettlementInfoField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcQrySettlementInfoField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcQrySettlementInfoField_TradingDay, CThostFtdcQrySettlementInfoField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcQrySettlementInfoField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcQrySettlementInfoField_TradingDay = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcQrySettlementInfoField_AccountID != NULL ) {
        if(CThostFtdcQrySettlementInfoField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcQrySettlementInfoField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcQrySettlementInfoField_AccountID, CThostFtdcQrySettlementInfoField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcQrySettlementInfoField_AccountID, sizeof(data->AccountID));
        CThostFtdcQrySettlementInfoField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcQrySettlementInfoField_CurrencyID != NULL ) {
        if(CThostFtdcQrySettlementInfoField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcQrySettlementInfoField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcQrySettlementInfoField_CurrencyID, CThostFtdcQrySettlementInfoField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcQrySettlementInfoField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcQrySettlementInfoField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySettlementInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySettlementInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySettlementInfoField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQrySettlementInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQrySettlementInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySettlementInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQrySettlementInfoFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQrySettlementInfoFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySettlementInfoField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcQrySettlementInfoFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcQrySettlementInfoFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySettlementInfoField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcQrySettlementInfoFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcQrySettlementInfoFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySettlementInfoField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcQrySettlementInfoFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcQrySettlementInfoFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySettlementInfoField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(self);
    CThostFtdcQrySettlementInfoField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySettlementInfoFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySettlementInfoFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQrySettlementInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcQrySettlementInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQrySettlementInfoFieldType_get_InvestorID,
    .set = PyCThostFtdcQrySettlementInfoFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcQrySettlementInfoFieldType_get_TradingDay,
    .set = PyCThostFtdcQrySettlementInfoFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcQrySettlementInfoFieldType_get_AccountID,
    .set = PyCThostFtdcQrySettlementInfoFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcQrySettlementInfoFieldType_get_CurrencyID,
    .set = PyCThostFtdcQrySettlementInfoFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySettlementInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySettlementInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询投资者结算结果")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySettlementInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySettlementInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySettlementInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySettlementInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySettlementInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySettlementInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询投资者结算结果")},
    {Py_tp_members, PyCThostFtdcQrySettlementInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySettlementInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySettlementInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySettlementInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySettlementInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySettlementInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySettlementInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySettlementInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySettlementInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySettlementInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySettlementInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySettlementInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySettlementInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySettlementInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySettlementInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySettlementInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}