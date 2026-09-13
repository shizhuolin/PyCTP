
#include "PyCThostFtdcTradingAccountReserveField.h"

///资金账户基本准备金

static int PyCThostFtdcTradingAccountReserveFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "Reserve", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTradingAccountReserveField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTradingAccountReserveField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTradingAccountReserveField_AccountID = NULL;
    Py_ssize_t CThostFtdcTradingAccountReserveField_AccountID_length = 0;

    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTradingAccountReserveField_Reserve = 0.0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcTradingAccountReserveField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcTradingAccountReserveField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#", (char **)kwlist
        , &CThostFtdcTradingAccountReserveField_BrokerID, &CThostFtdcTradingAccountReserveField_BrokerID_length
        , &CThostFtdcTradingAccountReserveField_AccountID, &CThostFtdcTradingAccountReserveField_AccountID_length
        , &CThostFtdcTradingAccountReserveField_Reserve
        , &CThostFtdcTradingAccountReserveField_CurrencyID, &CThostFtdcTradingAccountReserveField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcTradingAccountReserveFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountReserveFieldData>(self);
    CThostFtdcTradingAccountReserveField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTradingAccountReserveField_BrokerID != NULL ) {
        if(CThostFtdcTradingAccountReserveField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTradingAccountReserveField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTradingAccountReserveField_BrokerID, CThostFtdcTradingAccountReserveField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTradingAccountReserveField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTradingAccountReserveField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTradingAccountReserveField_AccountID != NULL ) {
        if(CThostFtdcTradingAccountReserveField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcTradingAccountReserveField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcTradingAccountReserveField_AccountID, CThostFtdcTradingAccountReserveField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcTradingAccountReserveField_AccountID, sizeof(data->AccountID));
        CThostFtdcTradingAccountReserveField_AccountID = NULL;
    }

    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    data->Reserve = CThostFtdcTradingAccountReserveField_Reserve;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcTradingAccountReserveField_CurrencyID != NULL ) {
        if(CThostFtdcTradingAccountReserveField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcTradingAccountReserveField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcTradingAccountReserveField_CurrencyID, CThostFtdcTradingAccountReserveField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcTradingAccountReserveField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcTradingAccountReserveField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTradingAccountReserveFieldType_repr(PyObject *self) {

    PyCThostFtdcTradingAccountReserveFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountReserveFieldData>(self);
    CThostFtdcTradingAccountReserveField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "Reserve", data->Reserve
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountReserveField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountReserveField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTradingAccountReserveFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountReserveFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountReserveFieldData>(self);
    CThostFtdcTradingAccountReserveField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTradingAccountReserveFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountReserveField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountReserveFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountReserveFieldData>(self);
    CThostFtdcTradingAccountReserveField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTradingAccountReserveFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountReserveFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountReserveFieldData>(self);
    CThostFtdcTradingAccountReserveField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcTradingAccountReserveFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountReserveField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountReserveFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountReserveFieldData>(self);
    CThostFtdcTradingAccountReserveField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcTradingAccountReserveFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcTradingAccountReserveFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountReserveFieldData>(self);
    CThostFtdcTradingAccountReserveField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcTradingAccountReserveFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingAccountReserveField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingAccountReserveFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountReserveFieldData>(self);
    CThostFtdcTradingAccountReserveField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTradingAccountReserveFieldType_members[] = {
    /// 基本准备金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Reserve",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTradingAccountReserveFieldData, data.Reserve),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("基本准备金")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTradingAccountReserveFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTradingAccountReserveFieldType_get_BrokerID,
    .set = PyCThostFtdcTradingAccountReserveFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcTradingAccountReserveFieldType_get_AccountID,
    .set = PyCThostFtdcTradingAccountReserveFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcTradingAccountReserveFieldType_get_CurrencyID,
    .set = PyCThostFtdcTradingAccountReserveFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTradingAccountReserveFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTradingAccountReserveField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("资金账户基本准备金")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTradingAccountReserveFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTradingAccountReserveFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTradingAccountReserveFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTradingAccountReserveFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTradingAccountReserveFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTradingAccountReserveFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("资金账户基本准备金")},
    {Py_tp_members, PyCThostFtdcTradingAccountReserveFieldType_members},
    {Py_tp_getset, PyCThostFtdcTradingAccountReserveFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTradingAccountReserveFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTradingAccountReserveFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTradingAccountReserveFieldType_spec = {
    .name = "PyCTP.CThostFtdcTradingAccountReserveField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTradingAccountReserveFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTradingAccountReserveFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTradingAccountReserveFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTradingAccountReserveFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTradingAccountReserveFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTradingAccountReserveFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTradingAccountReserveFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTradingAccountReserveFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTradingAccountReserveField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountReserveField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}