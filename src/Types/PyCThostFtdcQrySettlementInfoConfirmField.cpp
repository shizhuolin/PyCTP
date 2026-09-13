
#include "PyCThostFtdcQrySettlementInfoConfirmField.h"

///查询结算信息确认域

static int PyCThostFtdcQrySettlementInfoConfirmFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "AccountID", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQrySettlementInfoConfirmField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQrySettlementInfoConfirmField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQrySettlementInfoConfirmField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQrySettlementInfoConfirmField_InvestorID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcQrySettlementInfoConfirmField_AccountID = NULL;
    Py_ssize_t CThostFtdcQrySettlementInfoConfirmField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcQrySettlementInfoConfirmField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcQrySettlementInfoConfirmField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQrySettlementInfoConfirmField_BrokerID, &CThostFtdcQrySettlementInfoConfirmField_BrokerID_length
        , &CThostFtdcQrySettlementInfoConfirmField_InvestorID, &CThostFtdcQrySettlementInfoConfirmField_InvestorID_length
        , &CThostFtdcQrySettlementInfoConfirmField_AccountID, &CThostFtdcQrySettlementInfoConfirmField_AccountID_length
        , &CThostFtdcQrySettlementInfoConfirmField_CurrencyID, &CThostFtdcQrySettlementInfoConfirmField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoConfirmFieldData>(self);
    CThostFtdcQrySettlementInfoConfirmField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQrySettlementInfoConfirmField_BrokerID != NULL ) {
        if(CThostFtdcQrySettlementInfoConfirmField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQrySettlementInfoConfirmField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQrySettlementInfoConfirmField_BrokerID, CThostFtdcQrySettlementInfoConfirmField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQrySettlementInfoConfirmField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQrySettlementInfoConfirmField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQrySettlementInfoConfirmField_InvestorID != NULL ) {
        if(CThostFtdcQrySettlementInfoConfirmField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQrySettlementInfoConfirmField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQrySettlementInfoConfirmField_InvestorID, CThostFtdcQrySettlementInfoConfirmField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQrySettlementInfoConfirmField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQrySettlementInfoConfirmField_InvestorID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcQrySettlementInfoConfirmField_AccountID != NULL ) {
        if(CThostFtdcQrySettlementInfoConfirmField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcQrySettlementInfoConfirmField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcQrySettlementInfoConfirmField_AccountID, CThostFtdcQrySettlementInfoConfirmField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcQrySettlementInfoConfirmField_AccountID, sizeof(data->AccountID));
        CThostFtdcQrySettlementInfoConfirmField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcQrySettlementInfoConfirmField_CurrencyID != NULL ) {
        if(CThostFtdcQrySettlementInfoConfirmField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcQrySettlementInfoConfirmField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcQrySettlementInfoConfirmField_CurrencyID, CThostFtdcQrySettlementInfoConfirmField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcQrySettlementInfoConfirmField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcQrySettlementInfoConfirmField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySettlementInfoConfirmFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoConfirmFieldData>(self);
    CThostFtdcQrySettlementInfoConfirmField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySettlementInfoConfirmField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySettlementInfoConfirmField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQrySettlementInfoConfirmFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQrySettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoConfirmFieldData>(self);
    CThostFtdcQrySettlementInfoConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQrySettlementInfoConfirmFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySettlementInfoConfirmField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoConfirmFieldData>(self);
    CThostFtdcQrySettlementInfoConfirmField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQrySettlementInfoConfirmFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQrySettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoConfirmFieldData>(self);
    CThostFtdcQrySettlementInfoConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQrySettlementInfoConfirmFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySettlementInfoConfirmField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoConfirmFieldData>(self);
    CThostFtdcQrySettlementInfoConfirmField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcQrySettlementInfoConfirmFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcQrySettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoConfirmFieldData>(self);
    CThostFtdcQrySettlementInfoConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcQrySettlementInfoConfirmFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySettlementInfoConfirmField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoConfirmFieldData>(self);
    CThostFtdcQrySettlementInfoConfirmField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcQrySettlementInfoConfirmFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcQrySettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoConfirmFieldData>(self);
    CThostFtdcQrySettlementInfoConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcQrySettlementInfoConfirmFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySettlementInfoConfirmField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySettlementInfoConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoConfirmFieldData>(self);
    CThostFtdcQrySettlementInfoConfirmField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySettlementInfoConfirmFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySettlementInfoConfirmFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQrySettlementInfoConfirmFieldType_get_BrokerID,
    .set = PyCThostFtdcQrySettlementInfoConfirmFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQrySettlementInfoConfirmFieldType_get_InvestorID,
    .set = PyCThostFtdcQrySettlementInfoConfirmFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcQrySettlementInfoConfirmFieldType_get_AccountID,
    .set = PyCThostFtdcQrySettlementInfoConfirmFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcQrySettlementInfoConfirmFieldType_get_CurrencyID,
    .set = PyCThostFtdcQrySettlementInfoConfirmFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySettlementInfoConfirmFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySettlementInfoConfirmField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询结算信息确认域")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySettlementInfoConfirmFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySettlementInfoConfirmFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySettlementInfoConfirmFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySettlementInfoConfirmFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySettlementInfoConfirmFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySettlementInfoConfirmFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询结算信息确认域")},
    {Py_tp_members, PyCThostFtdcQrySettlementInfoConfirmFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySettlementInfoConfirmFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySettlementInfoConfirmFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySettlementInfoConfirmFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySettlementInfoConfirmFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySettlementInfoConfirmField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySettlementInfoConfirmFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySettlementInfoConfirmFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySettlementInfoConfirmFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySettlementInfoConfirmFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySettlementInfoConfirmFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySettlementInfoConfirmFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySettlementInfoConfirmFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySettlementInfoConfirmFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySettlementInfoConfirmField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySettlementInfoConfirmField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}