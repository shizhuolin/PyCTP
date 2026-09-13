
#include "PyCThostFtdcTradingAccountPasswordUpdateField.h"

///资金账户口令变更域

static int PyCThostFtdcTradingAccountPasswordUpdateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "OldPassword", "NewPassword", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTradingAccountPasswordUpdateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTradingAccountPasswordUpdateField_AccountID = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateField_AccountID_length = 0;

    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcTradingAccountPasswordUpdateField_OldPassword = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateField_OldPassword_length = 0;

    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcTradingAccountPasswordUpdateField_NewPassword = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateField_NewPassword_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcTradingAccountPasswordUpdateField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcTradingAccountPasswordUpdateField_BrokerID, &CThostFtdcTradingAccountPasswordUpdateField_BrokerID_length
        , &CThostFtdcTradingAccountPasswordUpdateField_AccountID, &CThostFtdcTradingAccountPasswordUpdateField_AccountID_length
        , &CThostFtdcTradingAccountPasswordUpdateField_OldPassword, &CThostFtdcTradingAccountPasswordUpdateField_OldPassword_length
        , &CThostFtdcTradingAccountPasswordUpdateField_NewPassword, &CThostFtdcTradingAccountPasswordUpdateField_NewPassword_length
        , &CThostFtdcTradingAccountPasswordUpdateField_CurrencyID, &CThostFtdcTradingAccountPasswordUpdateField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTradingAccountPasswordUpdateField_BrokerID != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTradingAccountPasswordUpdateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTradingAccountPasswordUpdateField_BrokerID, CThostFtdcTradingAccountPasswordUpdateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTradingAccountPasswordUpdateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTradingAccountPasswordUpdateField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTradingAccountPasswordUpdateField_AccountID != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcTradingAccountPasswordUpdateField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcTradingAccountPasswordUpdateField_AccountID, CThostFtdcTradingAccountPasswordUpdateField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcTradingAccountPasswordUpdateField_AccountID, sizeof(data->AccountID));
        CThostFtdcTradingAccountPasswordUpdateField_AccountID = NULL;
    }

    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcTradingAccountPasswordUpdateField_OldPassword != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateField_OldPassword_length >= (Py_ssize_t)sizeof(data->OldPassword)) {
            PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is 40)", CThostFtdcTradingAccountPasswordUpdateField_OldPassword_length);
            return -1;
        }
        // memset(data->OldPassword, 0, sizeof(data->OldPassword));
        // memcpy(data->OldPassword, CThostFtdcTradingAccountPasswordUpdateField_OldPassword, CThostFtdcTradingAccountPasswordUpdateField_OldPassword_length);
        strncpy(data->OldPassword, CThostFtdcTradingAccountPasswordUpdateField_OldPassword, sizeof(data->OldPassword));
        CThostFtdcTradingAccountPasswordUpdateField_OldPassword = NULL;
    }

    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcTradingAccountPasswordUpdateField_NewPassword != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateField_NewPassword_length >= (Py_ssize_t)sizeof(data->NewPassword)) {
            PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is 40)", CThostFtdcTradingAccountPasswordUpdateField_NewPassword_length);
            return -1;
        }
        // memset(data->NewPassword, 0, sizeof(data->NewPassword));
        // memcpy(data->NewPassword, CThostFtdcTradingAccountPasswordUpdateField_NewPassword, CThostFtdcTradingAccountPasswordUpdateField_NewPassword_length);
        strncpy(data->NewPassword, CThostFtdcTradingAccountPasswordUpdateField_NewPassword, sizeof(data->NewPassword));
        CThostFtdcTradingAccountPasswordUpdateField_NewPassword = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcTradingAccountPasswordUpdateField_CurrencyID != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcTradingAccountPasswordUpdateField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcTradingAccountPasswordUpdateField_CurrencyID, CThostFtdcTradingAccountPasswordUpdateField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcTradingAccountPasswordUpdateField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcTradingAccountPasswordUpdateField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFieldType_repr(PyObject *self) {

    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "OldPassword", data->OldPassword//, (Py_ssize_t)sizeof(data->OldPassword)
        , "NewPassword", data->NewPassword//, (Py_ssize_t)sizeof(data->NewPassword)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTradingAccountPasswordUpdateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcTradingAccountPasswordUpdateFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 原来的口令
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFieldType_get_OldPassword(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OldPassword, (Py_ssize_t)sizeof(data->OldPassword));
    return PyBytes_FromString(data->OldPassword);
}

static int PyCThostFtdcTradingAccountPasswordUpdateFieldType_set_OldPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OldPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateField::OldPassword)) {
        PyErr_SetString(PyExc_ValueError, "OldPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);
    // memset(data->OldPassword, 0, sizeof(data->OldPassword));
    // memcpy(data->OldPassword, buf, len);
    strncpy(data->OldPassword, buf, sizeof(data->OldPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 新的口令
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFieldType_get_NewPassword(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NewPassword, (Py_ssize_t)sizeof(data->NewPassword));
    return PyBytes_FromString(data->NewPassword);
}

static int PyCThostFtdcTradingAccountPasswordUpdateFieldType_set_NewPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NewPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateField::NewPassword)) {
        PyErr_SetString(PyExc_ValueError, "NewPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);
    // memset(data->NewPassword, 0, sizeof(data->NewPassword));
    // memcpy(data->NewPassword, buf, len);
    strncpy(data->NewPassword, buf, sizeof(data->NewPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcTradingAccountPasswordUpdateFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTradingAccountPasswordUpdateFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTradingAccountPasswordUpdateFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTradingAccountPasswordUpdateFieldType_get_BrokerID,
    .set = PyCThostFtdcTradingAccountPasswordUpdateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcTradingAccountPasswordUpdateFieldType_get_AccountID,
    .set = PyCThostFtdcTradingAccountPasswordUpdateFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "OldPassword",
    .get = PyCThostFtdcTradingAccountPasswordUpdateFieldType_get_OldPassword,
    .set = PyCThostFtdcTradingAccountPasswordUpdateFieldType_set_OldPassword,
    .doc = PyDoc_STR("原来的口令"),
    },
    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "NewPassword",
    .get = PyCThostFtdcTradingAccountPasswordUpdateFieldType_get_NewPassword,
    .set = PyCThostFtdcTradingAccountPasswordUpdateFieldType_set_NewPassword,
    .doc = PyDoc_STR("新的口令"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcTradingAccountPasswordUpdateFieldType_get_CurrencyID,
    .set = PyCThostFtdcTradingAccountPasswordUpdateFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTradingAccountPasswordUpdateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTradingAccountPasswordUpdateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("资金账户口令变更域")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTradingAccountPasswordUpdateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTradingAccountPasswordUpdateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTradingAccountPasswordUpdateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTradingAccountPasswordUpdateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTradingAccountPasswordUpdateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTradingAccountPasswordUpdateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("资金账户口令变更域")},
    {Py_tp_members, PyCThostFtdcTradingAccountPasswordUpdateFieldType_members},
    {Py_tp_getset, PyCThostFtdcTradingAccountPasswordUpdateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTradingAccountPasswordUpdateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTradingAccountPasswordUpdateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTradingAccountPasswordUpdateFieldType_spec = {
    .name = "PyCTP.CThostFtdcTradingAccountPasswordUpdateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTradingAccountPasswordUpdateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTradingAccountPasswordUpdateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTradingAccountPasswordUpdateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTradingAccountPasswordUpdateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTradingAccountPasswordUpdateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTradingAccountPasswordUpdateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTradingAccountPasswordUpdateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTradingAccountPasswordUpdateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTradingAccountPasswordUpdateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountPasswordUpdateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}