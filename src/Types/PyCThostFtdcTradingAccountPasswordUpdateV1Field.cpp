
#include "PyCThostFtdcTradingAccountPasswordUpdateV1Field.h"

///资金账户口令变更域

static int PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "OldPassword", "NewPassword", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTradingAccountPasswordUpdateV1Field_BrokerID = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateV1Field_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcTradingAccountPasswordUpdateV1Field_InvestorID = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateV1Field_InvestorID_length = 0;

    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcTradingAccountPasswordUpdateV1Field_OldPassword = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateV1Field_OldPassword_length = 0;

    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcTradingAccountPasswordUpdateV1Field_NewPassword = NULL;
    Py_ssize_t CThostFtdcTradingAccountPasswordUpdateV1Field_NewPassword_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcTradingAccountPasswordUpdateV1Field_BrokerID, &CThostFtdcTradingAccountPasswordUpdateV1Field_BrokerID_length
        , &CThostFtdcTradingAccountPasswordUpdateV1Field_InvestorID, &CThostFtdcTradingAccountPasswordUpdateV1Field_InvestorID_length
        , &CThostFtdcTradingAccountPasswordUpdateV1Field_OldPassword, &CThostFtdcTradingAccountPasswordUpdateV1Field_OldPassword_length
        , &CThostFtdcTradingAccountPasswordUpdateV1Field_NewPassword, &CThostFtdcTradingAccountPasswordUpdateV1Field_NewPassword_length
    )) {
        return -1;
    }

    PyCThostFtdcTradingAccountPasswordUpdateV1FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateV1FieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateV1Field *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTradingAccountPasswordUpdateV1Field_BrokerID != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateV1Field_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTradingAccountPasswordUpdateV1Field_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTradingAccountPasswordUpdateV1Field_BrokerID, CThostFtdcTradingAccountPasswordUpdateV1Field_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTradingAccountPasswordUpdateV1Field_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTradingAccountPasswordUpdateV1Field_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcTradingAccountPasswordUpdateV1Field_InvestorID != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateV1Field_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcTradingAccountPasswordUpdateV1Field_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcTradingAccountPasswordUpdateV1Field_InvestorID, CThostFtdcTradingAccountPasswordUpdateV1Field_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcTradingAccountPasswordUpdateV1Field_InvestorID, sizeof(data->InvestorID));
        CThostFtdcTradingAccountPasswordUpdateV1Field_InvestorID = NULL;
    }

    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcTradingAccountPasswordUpdateV1Field_OldPassword != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateV1Field_OldPassword_length >= (Py_ssize_t)sizeof(data->OldPassword)) {
            PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is 40)", CThostFtdcTradingAccountPasswordUpdateV1Field_OldPassword_length);
            return -1;
        }
        // memset(data->OldPassword, 0, sizeof(data->OldPassword));
        // memcpy(data->OldPassword, CThostFtdcTradingAccountPasswordUpdateV1Field_OldPassword, CThostFtdcTradingAccountPasswordUpdateV1Field_OldPassword_length);
        strncpy(data->OldPassword, CThostFtdcTradingAccountPasswordUpdateV1Field_OldPassword, sizeof(data->OldPassword));
        CThostFtdcTradingAccountPasswordUpdateV1Field_OldPassword = NULL;
    }

    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcTradingAccountPasswordUpdateV1Field_NewPassword != NULL ) {
        if(CThostFtdcTradingAccountPasswordUpdateV1Field_NewPassword_length >= (Py_ssize_t)sizeof(data->NewPassword)) {
            PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is 40)", CThostFtdcTradingAccountPasswordUpdateV1Field_NewPassword_length);
            return -1;
        }
        // memset(data->NewPassword, 0, sizeof(data->NewPassword));
        // memcpy(data->NewPassword, CThostFtdcTradingAccountPasswordUpdateV1Field_NewPassword, CThostFtdcTradingAccountPasswordUpdateV1Field_NewPassword_length);
        strncpy(data->NewPassword, CThostFtdcTradingAccountPasswordUpdateV1Field_NewPassword, sizeof(data->NewPassword));
        CThostFtdcTradingAccountPasswordUpdateV1Field_NewPassword = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_repr(PyObject *self) {

    PyCThostFtdcTradingAccountPasswordUpdateV1FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateV1FieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateV1Field *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "OldPassword", data->OldPassword//, (Py_ssize_t)sizeof(data->OldPassword)
        , "NewPassword", data->NewPassword//, (Py_ssize_t)sizeof(data->NewPassword)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateV1Field repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateV1Field repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateV1FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateV1FieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateV1Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateV1Field::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateV1FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateV1FieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateV1Field *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateV1FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateV1FieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateV1Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateV1Field::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateV1FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateV1FieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateV1Field *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 原来的口令
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_get_OldPassword(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateV1FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateV1FieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateV1Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OldPassword, (Py_ssize_t)sizeof(data->OldPassword));
    return PyBytes_FromString(data->OldPassword);
}

static int PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_set_OldPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OldPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateV1Field::OldPassword)) {
        PyErr_SetString(PyExc_ValueError, "OldPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateV1FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateV1FieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateV1Field *data = &(extra->data);
    // memset(data->OldPassword, 0, sizeof(data->OldPassword));
    // memcpy(data->OldPassword, buf, len);
    strncpy(data->OldPassword, buf, sizeof(data->OldPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 新的口令
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_get_NewPassword(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountPasswordUpdateV1FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateV1FieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateV1Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NewPassword, (Py_ssize_t)sizeof(data->NewPassword));
    return PyBytes_FromString(data->NewPassword);
}

static int PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_set_NewPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NewPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountPasswordUpdateV1Field::NewPassword)) {
        PyErr_SetString(PyExc_ValueError, "NewPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountPasswordUpdateV1FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateV1FieldData>(self);
    CThostFtdcTradingAccountPasswordUpdateV1Field *data = &(extra->data);
    // memset(data->NewPassword, 0, sizeof(data->NewPassword));
    // memcpy(data->NewPassword, buf, len);
    strncpy(data->NewPassword, buf, sizeof(data->NewPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_get_BrokerID,
    .set = PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_get_InvestorID,
    .set = PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "OldPassword",
    .get = PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_get_OldPassword,
    .set = PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_set_OldPassword,
    .doc = PyDoc_STR("原来的口令"),
    },
    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "NewPassword",
    .get = PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_get_NewPassword,
    .set = PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_set_NewPassword,
    .doc = PyDoc_STR("新的口令"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTradingAccountPasswordUpdateV1Field"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("资金账户口令变更域")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTradingAccountPasswordUpdateV1FieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("资金账户口令变更域")},
    {Py_tp_members, PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_members},
    {Py_tp_getset, PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_spec = {
    .name = "PyCTP.CThostFtdcTradingAccountPasswordUpdateV1Field",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTradingAccountPasswordUpdateV1FieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTradingAccountPasswordUpdateV1FieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTradingAccountPasswordUpdateV1FieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTradingAccountPasswordUpdateV1FieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTradingAccountPasswordUpdateV1Field", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountPasswordUpdateV1Field to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}