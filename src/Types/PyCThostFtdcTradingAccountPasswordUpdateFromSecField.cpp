
#include "PyCThostFtdcTradingAccountPasswordUpdateFromSecField.h"

///来自次席的资金账户口令变更

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "OldPassword", "NewPassword", "CurrencyID", "FromSec", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTradingAccountPasswordUpdateFromSecField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateFromSecField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTradingAccountPasswordUpdateFromSecField_AccountID = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateFromSecField_AccountID_length = 0;

    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcTradingAccountPasswordUpdateFromSecField_OldPassword = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateFromSecField_OldPassword_length = 0;

    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcTradingAccountPasswordUpdateFromSecField_NewPassword = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateFromSecField_NewPassword_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcTradingAccountPasswordUpdateFromSecField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateFromSecField_CurrencyID_length = 0;

    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcTradingAccountPasswordUpdateFromSecField_FromSec = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#i", (char **)kwlist
        , &CThostFtdcTradingAccountPasswordUpdateFromSecField_BrokerID, &CThostFtdcTradingAccountPasswordUpdateFromSecField_BrokerID_length
        , &CThostFtdcTradingAccountPasswordUpdateFromSecField_AccountID, &CThostFtdcTradingAccountPasswordUpdateFromSecField_AccountID_length
        , &CThostFtdcTradingAccountPasswordUpdateFromSecField_OldPassword, &CThostFtdcTradingAccountPasswordUpdateFromSecField_OldPassword_length
        , &CThostFtdcTradingAccountPasswordUpdateFromSecField_NewPassword, &CThostFtdcTradingAccountPasswordUpdateFromSecField_NewPassword_length
        , &CThostFtdcTradingAccountPasswordUpdateFromSecField_CurrencyID, &CThostFtdcTradingAccountPasswordUpdateFromSecField_CurrencyID_length
        , &CThostFtdcTradingAccountPasswordUpdateFromSecField_FromSec
    )) {
        return -1;
    }

    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTradingAccountPasswordUpdateFromSecField_BrokerID != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateFromSecField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTradingAccountPasswordUpdateFromSecField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTradingAccountPasswordUpdateFromSecField_BrokerID, CThostFtdcTradingAccountPasswordUpdateFromSecField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTradingAccountPasswordUpdateFromSecField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTradingAccountPasswordUpdateFromSecField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTradingAccountPasswordUpdateFromSecField_AccountID != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateFromSecField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcTradingAccountPasswordUpdateFromSecField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcTradingAccountPasswordUpdateFromSecField_AccountID, CThostFtdcTradingAccountPasswordUpdateFromSecField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcTradingAccountPasswordUpdateFromSecField_AccountID, sizeof(data->AccountID));
        CThostFtdcTradingAccountPasswordUpdateFromSecField_AccountID = NULL;
    }

    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcTradingAccountPasswordUpdateFromSecField_OldPassword != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateFromSecField_OldPassword_length >= (Py_ssize_t)sizeof(data->OldPassword)) {
            PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is 40)", CThostFtdcTradingAccountPasswordUpdateFromSecField_OldPassword_length);
            return -1;
        }
        // memset(data->OldPassword, 0, sizeof(data->OldPassword));
        // memcpy(data->OldPassword, CThostFtdcTradingAccountPasswordUpdateFromSecField_OldPassword, CThostFtdcTradingAccountPasswordUpdateFromSecField_OldPassword_length);
        strncpy(data->OldPassword, CThostFtdcTradingAccountPasswordUpdateFromSecField_OldPassword, sizeof(data->OldPassword));
        CThostFtdcTradingAccountPasswordUpdateFromSecField_OldPassword = NULL;
    }

    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcTradingAccountPasswordUpdateFromSecField_NewPassword != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateFromSecField_NewPassword_length >= (Py_ssize_t)sizeof(data->NewPassword)) {
            PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is 40)", CThostFtdcTradingAccountPasswordUpdateFromSecField_NewPassword_length);
            return -1;
        }
        // memset(data->NewPassword, 0, sizeof(data->NewPassword));
        // memcpy(data->NewPassword, CThostFtdcTradingAccountPasswordUpdateFromSecField_NewPassword, CThostFtdcTradingAccountPasswordUpdateFromSecField_NewPassword_length);
        strncpy(data->NewPassword, CThostFtdcTradingAccountPasswordUpdateFromSecField_NewPassword, sizeof(data->NewPassword));
        CThostFtdcTradingAccountPasswordUpdateFromSecField_NewPassword = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcTradingAccountPasswordUpdateFromSecField_CurrencyID != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateFromSecField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcTradingAccountPasswordUpdateFromSecField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcTradingAccountPasswordUpdateFromSecField_CurrencyID, CThostFtdcTradingAccountPasswordUpdateFromSecField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcTradingAccountPasswordUpdateFromSecField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcTradingAccountPasswordUpdateFromSecField_CurrencyID = NULL;
    }

    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->FromSec = CThostFtdcTradingAccountPasswordUpdateFromSecField_FromSec;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_repr(PyObject *self) {

    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "OldPassword", data->OldPassword//, (Py_ssize_t)sizeof(data->OldPassword)
        , "NewPassword", data->NewPassword//, (Py_ssize_t)sizeof(data->NewPassword)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "FromSec", data->FromSec
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateFromSecField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateFromSecField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateFromSecField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateFromSecField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 原来的口令
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_get_OldPassword(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OldPassword, (Py_ssize_t)sizeof(data->OldPassword));
    return PyBytes_FromString(data->OldPassword);
}

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_set_OldPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OldPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateFromSecField::OldPassword)) {
        PyErr_SetString(PyExc_ValueError, "OldPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);
    // memset(data->OldPassword, 0, sizeof(data->OldPassword));
    // memcpy(data->OldPassword, buf, len);
    strncpy(data->OldPassword, buf, sizeof(data->OldPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 新的口令
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_get_NewPassword(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NewPassword, (Py_ssize_t)sizeof(data->NewPassword));
    return PyBytes_FromString(data->NewPassword);
}

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_set_NewPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NewPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateFromSecField::NewPassword)) {
        PyErr_SetString(PyExc_ValueError, "NewPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);
    // memset(data->NewPassword, 0, sizeof(data->NewPassword));
    // memcpy(data->NewPassword, buf, len);
    strncpy(data->NewPassword, buf, sizeof(data->NewPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateFromSecField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateFromSecField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_members[] = {
    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "FromSec",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData, data.FromSec),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("次席的交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_get_BrokerID,
    .set = PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_get_AccountID,
    .set = PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "OldPassword",
    .get = PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_get_OldPassword,
    .set = PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_set_OldPassword,
    .doc = PyDoc_STR("原来的口令"),
    },
    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "NewPassword",
    .get = PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_get_NewPassword,
    .set = PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_set_NewPassword,
    .doc = PyDoc_STR("新的口令"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_get_CurrencyID,
    .set = PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTradingAccountPasswordUpdateFromSecField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("来自次席的资金账户口令变更")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("来自次席的资金账户口令变更")},
    {Py_tp_members, PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_members},
    {Py_tp_getset, PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_spec = {
    .name = "PyCTP.CThostFtdcTradingAccountPasswordUpdateFromSecField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTradingAccountPasswordUpdateFromSecField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountPasswordUpdateFromSecField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}