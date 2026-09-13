
#include "PyCThostFtdcInvestorAccountField.h"

///投资者账户

static int PyCThostFtdcInvestorAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "AccountID", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorAccountField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorAccountField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorAccountField_InvestorID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcInvestorAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcInvestorAccountField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcInvestorAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcInvestorAccountField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcInvestorAccountField_BrokerID, &CThostFtdcInvestorAccountField_BrokerID_length
        , &CThostFtdcInvestorAccountField_InvestorID, &CThostFtdcInvestorAccountField_InvestorID_length
        , &CThostFtdcInvestorAccountField_AccountID, &CThostFtdcInvestorAccountField_AccountID_length
        , &CThostFtdcInvestorAccountField_CurrencyID, &CThostFtdcInvestorAccountField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcInvestorAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorAccountFieldData>(self);
    CThostFtdcInvestorAccountField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorAccountField_BrokerID != NULL ) {
        if(CThostFtdcInvestorAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorAccountField_BrokerID, CThostFtdcInvestorAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorAccountField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorAccountField_InvestorID != NULL ) {
        if(CThostFtdcInvestorAccountField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorAccountField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorAccountField_InvestorID, CThostFtdcInvestorAccountField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorAccountField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorAccountField_InvestorID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcInvestorAccountField_AccountID != NULL ) {
        if(CThostFtdcInvestorAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcInvestorAccountField_AccountID, CThostFtdcInvestorAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcInvestorAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcInvestorAccountField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcInvestorAccountField_CurrencyID != NULL ) {
        if(CThostFtdcInvestorAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcInvestorAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcInvestorAccountField_CurrencyID, CThostFtdcInvestorAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcInvestorAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcInvestorAccountField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorAccountFieldData>(self);
    CThostFtdcInvestorAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorAccountField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorAccountFieldData>(self);
    CThostFtdcInvestorAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorAccountFieldData>(self);
    CThostFtdcInvestorAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorAccountFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorAccountFieldData>(self);
    CThostFtdcInvestorAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorAccountFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorAccountField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorAccountFieldData>(self);
    CThostFtdcInvestorAccountField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcInvestorAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorAccountFieldData>(self);
    CThostFtdcInvestorAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcInvestorAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorAccountFieldData>(self);
    CThostFtdcInvestorAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcInvestorAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorAccountFieldData>(self);
    CThostFtdcInvestorAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcInvestorAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorAccountFieldData>(self);
    CThostFtdcInvestorAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorAccountFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorAccountFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorAccountFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorAccountFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcInvestorAccountFieldType_get_AccountID,
    .set = PyCThostFtdcInvestorAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcInvestorAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcInvestorAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者账户")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者账户")},
    {Py_tp_members, PyCThostFtdcInvestorAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}