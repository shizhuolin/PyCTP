
#include "PyCThostFtdcQryTradingAccountField.h"

///查询资金账户

static int PyCThostFtdcQryTradingAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "CurrencyID", "BizType", "AccountID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryTradingAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryTradingAccountField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryTradingAccountField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryTradingAccountField_InvestorID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcQryTradingAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcQryTradingAccountField_CurrencyID_length = 0;

    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    char CThostFtdcQryTradingAccountField_BizType = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcQryTradingAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcQryTradingAccountField_AccountID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#", (char **)kwlist
        , &CThostFtdcQryTradingAccountField_BrokerID, &CThostFtdcQryTradingAccountField_BrokerID_length
        , &CThostFtdcQryTradingAccountField_InvestorID, &CThostFtdcQryTradingAccountField_InvestorID_length
        , &CThostFtdcQryTradingAccountField_CurrencyID, &CThostFtdcQryTradingAccountField_CurrencyID_length
        , &CThostFtdcQryTradingAccountField_BizType
        , &CThostFtdcQryTradingAccountField_AccountID, &CThostFtdcQryTradingAccountField_AccountID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryTradingAccountField_BrokerID != NULL ) {
        if(CThostFtdcQryTradingAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryTradingAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryTradingAccountField_BrokerID, CThostFtdcQryTradingAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryTradingAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryTradingAccountField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryTradingAccountField_InvestorID != NULL ) {
        if(CThostFtdcQryTradingAccountField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryTradingAccountField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryTradingAccountField_InvestorID, CThostFtdcQryTradingAccountField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryTradingAccountField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryTradingAccountField_InvestorID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcQryTradingAccountField_CurrencyID != NULL ) {
        if(CThostFtdcQryTradingAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcQryTradingAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcQryTradingAccountField_CurrencyID, CThostFtdcQryTradingAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcQryTradingAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcQryTradingAccountField_CurrencyID = NULL;
    }

    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    data->BizType = CThostFtdcQryTradingAccountField_BizType;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcQryTradingAccountField_AccountID != NULL ) {
        if(CThostFtdcQryTradingAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcQryTradingAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcQryTradingAccountField_AccountID, CThostFtdcQryTradingAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcQryTradingAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcQryTradingAccountField_AccountID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryTradingAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "BizType", data->BizType
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradingAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradingAccountField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryTradingAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryTradingAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryTradingAccountFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryTradingAccountFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingAccountField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcQryTradingAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcQryTradingAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务类型
/// typedef char TThostFtdcBizTypeType
static PyObject *PyCThostFtdcQryTradingAccountFieldType_get_BizType(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BizType), 1);
}

static int PyCThostFtdcQryTradingAccountFieldType_set_BizType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BizType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryTradingAccountField::BizType)) {
        PyErr_SetString(PyExc_ValueError, "BizType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);
    data->BizType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcQryTradingAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcQryTradingAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(self);
    CThostFtdcQryTradingAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryTradingAccountFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryTradingAccountFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryTradingAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcQryTradingAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryTradingAccountFieldType_get_InvestorID,
    .set = PyCThostFtdcQryTradingAccountFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcQryTradingAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcQryTradingAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    {
    .name = "BizType",
    .get = PyCThostFtdcQryTradingAccountFieldType_get_BizType,
    .set = PyCThostFtdcQryTradingAccountFieldType_set_BizType,
    .doc = PyDoc_STR("业务类型"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcQryTradingAccountFieldType_get_AccountID,
    .set = PyCThostFtdcQryTradingAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryTradingAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryTradingAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询资金账户")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryTradingAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryTradingAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryTradingAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryTradingAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryTradingAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryTradingAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询资金账户")},
    {Py_tp_members, PyCThostFtdcQryTradingAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryTradingAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryTradingAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryTradingAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryTradingAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryTradingAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryTradingAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryTradingAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryTradingAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryTradingAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryTradingAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryTradingAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryTradingAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryTradingAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryTradingAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTradingAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}