
#include "PyCThostFtdcQryTransferSerialField.h"

///请求查询转帐流水

static int PyCThostFtdcQryTransferSerialFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "BankID", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryTransferSerialField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryTransferSerialField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcQryTransferSerialField_AccountID = NULL;
    Py_ssize_t CThostFtdcQryTransferSerialField_AccountID_length = 0;

    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcQryTransferSerialField_BankID = NULL;
    Py_ssize_t CThostFtdcQryTransferSerialField_BankID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcQryTransferSerialField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcQryTransferSerialField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryTransferSerialField_BrokerID, &CThostFtdcQryTransferSerialField_BrokerID_length
        , &CThostFtdcQryTransferSerialField_AccountID, &CThostFtdcQryTransferSerialField_AccountID_length
        , &CThostFtdcQryTransferSerialField_BankID, &CThostFtdcQryTransferSerialField_BankID_length
        , &CThostFtdcQryTransferSerialField_CurrencyID, &CThostFtdcQryTransferSerialField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferSerialFieldData>(self);
    CThostFtdcQryTransferSerialField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryTransferSerialField_BrokerID != NULL ) {
        if(CThostFtdcQryTransferSerialField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryTransferSerialField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryTransferSerialField_BrokerID, CThostFtdcQryTransferSerialField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryTransferSerialField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryTransferSerialField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcQryTransferSerialField_AccountID != NULL ) {
        if(CThostFtdcQryTransferSerialField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcQryTransferSerialField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcQryTransferSerialField_AccountID, CThostFtdcQryTransferSerialField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcQryTransferSerialField_AccountID, sizeof(data->AccountID));
        CThostFtdcQryTransferSerialField_AccountID = NULL;
    }

    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcQryTransferSerialField_BankID != NULL ) {
        if(CThostFtdcQryTransferSerialField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcQryTransferSerialField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcQryTransferSerialField_BankID, CThostFtdcQryTransferSerialField_BankID_length);
        strncpy(data->BankID, CThostFtdcQryTransferSerialField_BankID, sizeof(data->BankID));
        CThostFtdcQryTransferSerialField_BankID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcQryTransferSerialField_CurrencyID != NULL ) {
        if(CThostFtdcQryTransferSerialField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcQryTransferSerialField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcQryTransferSerialField_CurrencyID, CThostFtdcQryTransferSerialField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcQryTransferSerialField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcQryTransferSerialField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryTransferSerialFieldType_repr(PyObject *self) {

    PyCThostFtdcQryTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferSerialFieldData>(self);
    CThostFtdcQryTransferSerialField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTransferSerialField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTransferSerialField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryTransferSerialFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferSerialFieldData>(self);
    CThostFtdcQryTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryTransferSerialFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTransferSerialField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferSerialFieldData>(self);
    CThostFtdcQryTransferSerialField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcQryTransferSerialFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcQryTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferSerialFieldData>(self);
    CThostFtdcQryTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcQryTransferSerialFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTransferSerialField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferSerialFieldData>(self);
    CThostFtdcQryTransferSerialField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行编码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcQryTransferSerialFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcQryTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferSerialFieldData>(self);
    CThostFtdcQryTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcQryTransferSerialFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTransferSerialField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferSerialFieldData>(self);
    CThostFtdcQryTransferSerialField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcQryTransferSerialFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcQryTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferSerialFieldData>(self);
    CThostFtdcQryTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcQryTransferSerialFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTransferSerialField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferSerialFieldData>(self);
    CThostFtdcQryTransferSerialField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryTransferSerialFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryTransferSerialFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryTransferSerialFieldType_get_BrokerID,
    .set = PyCThostFtdcQryTransferSerialFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcQryTransferSerialFieldType_get_AccountID,
    .set = PyCThostFtdcQryTransferSerialFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcQryTransferSerialFieldType_get_BankID,
    .set = PyCThostFtdcQryTransferSerialFieldType_set_BankID,
    .doc = PyDoc_STR("银行编码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcQryTransferSerialFieldType_get_CurrencyID,
    .set = PyCThostFtdcQryTransferSerialFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryTransferSerialFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryTransferSerialField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("请求查询转帐流水")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryTransferSerialFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryTransferSerialFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryTransferSerialFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryTransferSerialFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryTransferSerialFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryTransferSerialFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("请求查询转帐流水")},
    {Py_tp_members, PyCThostFtdcQryTransferSerialFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryTransferSerialFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryTransferSerialFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryTransferSerialFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryTransferSerialFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryTransferSerialField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryTransferSerialFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryTransferSerialFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryTransferSerialFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryTransferSerialFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryTransferSerialFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryTransferSerialFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryTransferSerialFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryTransferSerialFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryTransferSerialField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTransferSerialField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}