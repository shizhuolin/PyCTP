
#include "PyCThostFtdcQryBrokerTradingParamsField.h"

///查询经纪公司交易参数

static int PyCThostFtdcQryBrokerTradingParamsFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "CurrencyID", "AccountID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryBrokerTradingParamsField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryBrokerTradingParamsField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryBrokerTradingParamsField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryBrokerTradingParamsField_InvestorID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcQryBrokerTradingParamsField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcQryBrokerTradingParamsField_CurrencyID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcQryBrokerTradingParamsField_AccountID = NULL;
    Py_ssize_t CThostFtdcQryBrokerTradingParamsField_AccountID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryBrokerTradingParamsField_BrokerID, &CThostFtdcQryBrokerTradingParamsField_BrokerID_length
        , &CThostFtdcQryBrokerTradingParamsField_InvestorID, &CThostFtdcQryBrokerTradingParamsField_InvestorID_length
        , &CThostFtdcQryBrokerTradingParamsField_CurrencyID, &CThostFtdcQryBrokerTradingParamsField_CurrencyID_length
        , &CThostFtdcQryBrokerTradingParamsField_AccountID, &CThostFtdcQryBrokerTradingParamsField_AccountID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingParamsFieldData>(self);
    CThostFtdcQryBrokerTradingParamsField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryBrokerTradingParamsField_BrokerID != NULL ) {
        if(CThostFtdcQryBrokerTradingParamsField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryBrokerTradingParamsField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryBrokerTradingParamsField_BrokerID, CThostFtdcQryBrokerTradingParamsField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryBrokerTradingParamsField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryBrokerTradingParamsField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryBrokerTradingParamsField_InvestorID != NULL ) {
        if(CThostFtdcQryBrokerTradingParamsField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryBrokerTradingParamsField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryBrokerTradingParamsField_InvestorID, CThostFtdcQryBrokerTradingParamsField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryBrokerTradingParamsField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryBrokerTradingParamsField_InvestorID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcQryBrokerTradingParamsField_CurrencyID != NULL ) {
        if(CThostFtdcQryBrokerTradingParamsField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcQryBrokerTradingParamsField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcQryBrokerTradingParamsField_CurrencyID, CThostFtdcQryBrokerTradingParamsField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcQryBrokerTradingParamsField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcQryBrokerTradingParamsField_CurrencyID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcQryBrokerTradingParamsField_AccountID != NULL ) {
        if(CThostFtdcQryBrokerTradingParamsField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcQryBrokerTradingParamsField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcQryBrokerTradingParamsField_AccountID, CThostFtdcQryBrokerTradingParamsField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcQryBrokerTradingParamsField_AccountID, sizeof(data->AccountID));
        CThostFtdcQryBrokerTradingParamsField_AccountID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryBrokerTradingParamsFieldType_repr(PyObject *self) {

    PyCThostFtdcQryBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingParamsFieldData>(self);
    CThostFtdcQryBrokerTradingParamsField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerTradingParamsField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerTradingParamsField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryBrokerTradingParamsFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingParamsFieldData>(self);
    CThostFtdcQryBrokerTradingParamsField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryBrokerTradingParamsFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerTradingParamsField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingParamsFieldData>(self);
    CThostFtdcQryBrokerTradingParamsField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryBrokerTradingParamsFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingParamsFieldData>(self);
    CThostFtdcQryBrokerTradingParamsField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryBrokerTradingParamsFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerTradingParamsField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingParamsFieldData>(self);
    CThostFtdcQryBrokerTradingParamsField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcQryBrokerTradingParamsFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingParamsFieldData>(self);
    CThostFtdcQryBrokerTradingParamsField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcQryBrokerTradingParamsFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerTradingParamsField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingParamsFieldData>(self);
    CThostFtdcQryBrokerTradingParamsField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcQryBrokerTradingParamsFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingParamsFieldData>(self);
    CThostFtdcQryBrokerTradingParamsField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcQryBrokerTradingParamsFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerTradingParamsField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerTradingParamsFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingParamsFieldData>(self);
    CThostFtdcQryBrokerTradingParamsField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryBrokerTradingParamsFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryBrokerTradingParamsFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryBrokerTradingParamsFieldType_get_BrokerID,
    .set = PyCThostFtdcQryBrokerTradingParamsFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryBrokerTradingParamsFieldType_get_InvestorID,
    .set = PyCThostFtdcQryBrokerTradingParamsFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcQryBrokerTradingParamsFieldType_get_CurrencyID,
    .set = PyCThostFtdcQryBrokerTradingParamsFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcQryBrokerTradingParamsFieldType_get_AccountID,
    .set = PyCThostFtdcQryBrokerTradingParamsFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryBrokerTradingParamsFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryBrokerTradingParamsField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询经纪公司交易参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryBrokerTradingParamsFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryBrokerTradingParamsFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryBrokerTradingParamsFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryBrokerTradingParamsFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryBrokerTradingParamsFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryBrokerTradingParamsFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询经纪公司交易参数")},
    {Py_tp_members, PyCThostFtdcQryBrokerTradingParamsFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryBrokerTradingParamsFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryBrokerTradingParamsFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryBrokerTradingParamsFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryBrokerTradingParamsFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryBrokerTradingParamsField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryBrokerTradingParamsFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryBrokerTradingParamsFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryBrokerTradingParamsFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryBrokerTradingParamsFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryBrokerTradingParamsFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryBrokerTradingParamsFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryBrokerTradingParamsFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryBrokerTradingParamsFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryBrokerTradingParamsField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBrokerTradingParamsField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}