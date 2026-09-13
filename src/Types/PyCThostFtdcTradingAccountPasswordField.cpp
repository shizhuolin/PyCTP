
#include "PyCThostFtdcTradingAccountPasswordField.h"

///资金账户口令域

static int PyCThostFtdcTradingAccountPasswordFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "Password", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTradingAccountPasswordField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTradingAccountPasswordField_AccountID = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordField_AccountID_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcTradingAccountPasswordField_Password = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordField_Password_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcTradingAccountPasswordField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcTradingAccountPasswordField_BrokerID, &CThostFtdcTradingAccountPasswordField_BrokerID_length
        , &CThostFtdcTradingAccountPasswordField_AccountID, &CThostFtdcTradingAccountPasswordField_AccountID_length
        , &CThostFtdcTradingAccountPasswordField_Password, &CThostFtdcTradingAccountPasswordField_Password_length
        , &CThostFtdcTradingAccountPasswordField_CurrencyID, &CThostFtdcTradingAccountPasswordField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcTradingAccountPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordFieldData>(self);
    CThostFtdcTradingAccountPasswordField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTradingAccountPasswordField_BrokerID != NULL ) {
        if(CThostFtdcTradingAccountPasswordField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTradingAccountPasswordField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTradingAccountPasswordField_BrokerID, CThostFtdcTradingAccountPasswordField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTradingAccountPasswordField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTradingAccountPasswordField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTradingAccountPasswordField_AccountID != NULL ) {
        if(CThostFtdcTradingAccountPasswordField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcTradingAccountPasswordField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcTradingAccountPasswordField_AccountID, CThostFtdcTradingAccountPasswordField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcTradingAccountPasswordField_AccountID, sizeof(data->AccountID));
        CThostFtdcTradingAccountPasswordField_AccountID = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcTradingAccountPasswordField_Password != NULL ) {
        if(CThostFtdcTradingAccountPasswordField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcTradingAccountPasswordField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcTradingAccountPasswordField_Password, CThostFtdcTradingAccountPasswordField_Password_length);
        strncpy(data->Password, CThostFtdcTradingAccountPasswordField_Password, sizeof(data->Password));
        CThostFtdcTradingAccountPasswordField_Password = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcTradingAccountPasswordField_CurrencyID != NULL ) {
        if(CThostFtdcTradingAccountPasswordField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcTradingAccountPasswordField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcTradingAccountPasswordField_CurrencyID, CThostFtdcTradingAccountPasswordField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcTradingAccountPasswordField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcTradingAccountPasswordField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTradingAccountPasswordFieldType_repr(PyObject *self) {

    PyCThostFtdcTradingAccountPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordFieldData>(self);
    CThostFtdcTradingAccountPasswordField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTradingAccountPasswordFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordFieldData>(self);
    CThostFtdcTradingAccountPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTradingAccountPasswordFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordFieldData>(self);
    CThostFtdcTradingAccountPasswordField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTradingAccountPasswordFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordFieldData>(self);
    CThostFtdcTradingAccountPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcTradingAccountPasswordFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordFieldData>(self);
    CThostFtdcTradingAccountPasswordField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcTradingAccountPasswordFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordFieldData>(self);
    CThostFtdcTradingAccountPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcTradingAccountPasswordFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordFieldData>(self);
    CThostFtdcTradingAccountPasswordField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcTradingAccountPasswordFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordFieldData>(self);
    CThostFtdcTradingAccountPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcTradingAccountPasswordFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordFieldData>(self);
    CThostFtdcTradingAccountPasswordField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTradingAccountPasswordFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTradingAccountPasswordFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTradingAccountPasswordFieldType_get_BrokerID,
    .set = PyCThostFtdcTradingAccountPasswordFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcTradingAccountPasswordFieldType_get_AccountID,
    .set = PyCThostFtdcTradingAccountPasswordFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcTradingAccountPasswordFieldType_get_Password,
    .set = PyCThostFtdcTradingAccountPasswordFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcTradingAccountPasswordFieldType_get_CurrencyID,
    .set = PyCThostFtdcTradingAccountPasswordFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTradingAccountPasswordFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTradingAccountPasswordField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("资金账户口令域")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTradingAccountPasswordFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTradingAccountPasswordFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTradingAccountPasswordFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTradingAccountPasswordFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTradingAccountPasswordFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTradingAccountPasswordFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("资金账户口令域")},
    {Py_tp_members, PyCThostFtdcTradingAccountPasswordFieldType_members},
    {Py_tp_getset, PyCThostFtdcTradingAccountPasswordFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTradingAccountPasswordFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTradingAccountPasswordFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTradingAccountPasswordFieldType_spec = {
    .name = "PyCTP.CThostFtdcTradingAccountPasswordField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTradingAccountPasswordFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTradingAccountPasswordFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTradingAccountPasswordFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTradingAccountPasswordFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTradingAccountPasswordFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTradingAccountPasswordFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTradingAccountPasswordFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTradingAccountPasswordFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTradingAccountPasswordField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountPasswordField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}