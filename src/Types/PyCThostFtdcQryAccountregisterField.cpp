
#include "PyCThostFtdcQryAccountregisterField.h"

///请求查询银期签约关系

static int PyCThostFtdcQryAccountregisterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "BankID", "BankBranchID", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryAccountregisterField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryAccountregisterField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcQryAccountregisterField_AccountID = NULL;
    Py_ssize_t CThostFtdcQryAccountregisterField_AccountID_length = 0;

    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcQryAccountregisterField_BankID = NULL;
    Py_ssize_t CThostFtdcQryAccountregisterField_BankID_length = 0;

    /// 银行分支机构编码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcQryAccountregisterField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcQryAccountregisterField_BankBranchID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcQryAccountregisterField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcQryAccountregisterField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryAccountregisterField_BrokerID, &CThostFtdcQryAccountregisterField_BrokerID_length
        , &CThostFtdcQryAccountregisterField_AccountID, &CThostFtdcQryAccountregisterField_AccountID_length
        , &CThostFtdcQryAccountregisterField_BankID, &CThostFtdcQryAccountregisterField_BankID_length
        , &CThostFtdcQryAccountregisterField_BankBranchID, &CThostFtdcQryAccountregisterField_BankBranchID_length
        , &CThostFtdcQryAccountregisterField_CurrencyID, &CThostFtdcQryAccountregisterField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryAccountregisterField_BrokerID != NULL ) {
        if(CThostFtdcQryAccountregisterField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryAccountregisterField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryAccountregisterField_BrokerID, CThostFtdcQryAccountregisterField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryAccountregisterField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryAccountregisterField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcQryAccountregisterField_AccountID != NULL ) {
        if(CThostFtdcQryAccountregisterField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcQryAccountregisterField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcQryAccountregisterField_AccountID, CThostFtdcQryAccountregisterField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcQryAccountregisterField_AccountID, sizeof(data->AccountID));
        CThostFtdcQryAccountregisterField_AccountID = NULL;
    }

    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcQryAccountregisterField_BankID != NULL ) {
        if(CThostFtdcQryAccountregisterField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcQryAccountregisterField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcQryAccountregisterField_BankID, CThostFtdcQryAccountregisterField_BankID_length);
        strncpy(data->BankID, CThostFtdcQryAccountregisterField_BankID, sizeof(data->BankID));
        CThostFtdcQryAccountregisterField_BankID = NULL;
    }

    /// 银行分支机构编码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcQryAccountregisterField_BankBranchID != NULL ) {
        if(CThostFtdcQryAccountregisterField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcQryAccountregisterField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcQryAccountregisterField_BankBranchID, CThostFtdcQryAccountregisterField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcQryAccountregisterField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcQryAccountregisterField_BankBranchID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcQryAccountregisterField_CurrencyID != NULL ) {
        if(CThostFtdcQryAccountregisterField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcQryAccountregisterField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcQryAccountregisterField_CurrencyID, CThostFtdcQryAccountregisterField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcQryAccountregisterField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcQryAccountregisterField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryAccountregisterFieldType_repr(PyObject *self) {

    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankBranchID", data->BankBranchID//, (Py_ssize_t)sizeof(data->BankBranchID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryAccountregisterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryAccountregisterField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryAccountregisterFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryAccountregisterFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryAccountregisterField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcQryAccountregisterFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcQryAccountregisterFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryAccountregisterField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行编码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcQryAccountregisterFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcQryAccountregisterFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryAccountregisterField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构编码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcQryAccountregisterFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcQryAccountregisterFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryAccountregisterField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcQryAccountregisterFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcQryAccountregisterFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryAccountregisterField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(self);
    CThostFtdcQryAccountregisterField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryAccountregisterFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryAccountregisterFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryAccountregisterFieldType_get_BrokerID,
    .set = PyCThostFtdcQryAccountregisterFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcQryAccountregisterFieldType_get_AccountID,
    .set = PyCThostFtdcQryAccountregisterFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcQryAccountregisterFieldType_get_BankID,
    .set = PyCThostFtdcQryAccountregisterFieldType_set_BankID,
    .doc = PyDoc_STR("银行编码"),
    },
    /// 银行分支机构编码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcQryAccountregisterFieldType_get_BankBranchID,
    .set = PyCThostFtdcQryAccountregisterFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构编码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcQryAccountregisterFieldType_get_CurrencyID,
    .set = PyCThostFtdcQryAccountregisterFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryAccountregisterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryAccountregisterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("请求查询银期签约关系")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryAccountregisterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryAccountregisterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryAccountregisterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryAccountregisterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryAccountregisterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryAccountregisterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("请求查询银期签约关系")},
    {Py_tp_members, PyCThostFtdcQryAccountregisterFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryAccountregisterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryAccountregisterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryAccountregisterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryAccountregisterFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryAccountregisterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryAccountregisterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryAccountregisterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryAccountregisterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryAccountregisterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryAccountregisterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryAccountregisterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryAccountregisterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryAccountregisterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryAccountregisterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryAccountregisterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}