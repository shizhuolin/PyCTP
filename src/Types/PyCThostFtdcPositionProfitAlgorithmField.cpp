
#include "PyCThostFtdcPositionProfitAlgorithmField.h"

///浮动盈亏算法

static int PyCThostFtdcPositionProfitAlgorithmFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "Algorithm", "Memo", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcPositionProfitAlgorithmField_BrokerID = NULL;
    Py_ssize_t CThostFtdcPositionProfitAlgorithmField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcPositionProfitAlgorithmField_AccountID = NULL;
    Py_ssize_t CThostFtdcPositionProfitAlgorithmField_AccountID_length = 0;

    /// 盈亏算法
    /// typedef char TThostFtdcAlgorithmType
    char CThostFtdcPositionProfitAlgorithmField_Algorithm = 0;

    /// 备注
    /// typedef char TThostFtdcMemoType[161]
    char *CThostFtdcPositionProfitAlgorithmField_Memo = NULL;
    Py_ssize_t CThostFtdcPositionProfitAlgorithmField_Memo_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcPositionProfitAlgorithmField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcPositionProfitAlgorithmField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#", (char **)kwlist
        , &CThostFtdcPositionProfitAlgorithmField_BrokerID, &CThostFtdcPositionProfitAlgorithmField_BrokerID_length
        , &CThostFtdcPositionProfitAlgorithmField_AccountID, &CThostFtdcPositionProfitAlgorithmField_AccountID_length
        , &CThostFtdcPositionProfitAlgorithmField_Algorithm
        , &CThostFtdcPositionProfitAlgorithmField_Memo, &CThostFtdcPositionProfitAlgorithmField_Memo_length
        , &CThostFtdcPositionProfitAlgorithmField_CurrencyID, &CThostFtdcPositionProfitAlgorithmField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcPositionProfitAlgorithmField_BrokerID != NULL ) {
        if(CThostFtdcPositionProfitAlgorithmField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcPositionProfitAlgorithmField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcPositionProfitAlgorithmField_BrokerID, CThostFtdcPositionProfitAlgorithmField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcPositionProfitAlgorithmField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcPositionProfitAlgorithmField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcPositionProfitAlgorithmField_AccountID != NULL ) {
        if(CThostFtdcPositionProfitAlgorithmField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcPositionProfitAlgorithmField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcPositionProfitAlgorithmField_AccountID, CThostFtdcPositionProfitAlgorithmField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcPositionProfitAlgorithmField_AccountID, sizeof(data->AccountID));
        CThostFtdcPositionProfitAlgorithmField_AccountID = NULL;
    }

    /// 盈亏算法
    /// typedef char TThostFtdcAlgorithmType
    data->Algorithm = CThostFtdcPositionProfitAlgorithmField_Algorithm;

    /// 备注
    /// typedef char TThostFtdcMemoType[161]
    if( CThostFtdcPositionProfitAlgorithmField_Memo != NULL ) {
        if(CThostFtdcPositionProfitAlgorithmField_Memo_length >= (Py_ssize_t)sizeof(data->Memo)) {
            PyErr_Format(PyExc_ValueError, "Memo too long: length=%zd (max allowed is 160)", CThostFtdcPositionProfitAlgorithmField_Memo_length);
            return -1;
        }
        // memset(data->Memo, 0, sizeof(data->Memo));
        // memcpy(data->Memo, CThostFtdcPositionProfitAlgorithmField_Memo, CThostFtdcPositionProfitAlgorithmField_Memo_length);
        strncpy(data->Memo, CThostFtdcPositionProfitAlgorithmField_Memo, sizeof(data->Memo));
        CThostFtdcPositionProfitAlgorithmField_Memo = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcPositionProfitAlgorithmField_CurrencyID != NULL ) {
        if(CThostFtdcPositionProfitAlgorithmField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcPositionProfitAlgorithmField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcPositionProfitAlgorithmField_CurrencyID, CThostFtdcPositionProfitAlgorithmField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcPositionProfitAlgorithmField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcPositionProfitAlgorithmField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcPositionProfitAlgorithmFieldType_repr(PyObject *self) {

    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "Algorithm", data->Algorithm
        , "Memo", data->Memo//, (Py_ssize_t)sizeof(data->Memo)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcPositionProfitAlgorithmField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcPositionProfitAlgorithmField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcPositionProfitAlgorithmFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcPositionProfitAlgorithmFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcPositionProfitAlgorithmField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcPositionProfitAlgorithmFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcPositionProfitAlgorithmFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcPositionProfitAlgorithmField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 盈亏算法
/// typedef char TThostFtdcAlgorithmType
static PyObject *PyCThostFtdcPositionProfitAlgorithmFieldType_get_Algorithm(PyObject *self, void *closure) {
    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Algorithm), 1);
}

static int PyCThostFtdcPositionProfitAlgorithmFieldType_set_Algorithm(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Algorithm Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcPositionProfitAlgorithmField::Algorithm)) {
        PyErr_SetString(PyExc_ValueError, "Algorithm must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);
    data->Algorithm = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 备注
/// typedef char TThostFtdcMemoType[161]
static PyObject *PyCThostFtdcPositionProfitAlgorithmFieldType_get_Memo(PyObject *self, void *closure) {
    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Memo, (Py_ssize_t)sizeof(data->Memo));
    return PyBytes_FromString(data->Memo);
}

static int PyCThostFtdcPositionProfitAlgorithmFieldType_set_Memo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Memo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcPositionProfitAlgorithmField::Memo)) {
        PyErr_SetString(PyExc_ValueError, "Memo must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);
    // memset(data->Memo, 0, sizeof(data->Memo));
    // memcpy(data->Memo, buf, len);
    strncpy(data->Memo, buf, sizeof(data->Memo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcPositionProfitAlgorithmFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcPositionProfitAlgorithmFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcPositionProfitAlgorithmField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcPositionProfitAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcPositionProfitAlgorithmFieldData>(self);
    CThostFtdcPositionProfitAlgorithmField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcPositionProfitAlgorithmFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcPositionProfitAlgorithmFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcPositionProfitAlgorithmFieldType_get_BrokerID,
    .set = PyCThostFtdcPositionProfitAlgorithmFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcPositionProfitAlgorithmFieldType_get_AccountID,
    .set = PyCThostFtdcPositionProfitAlgorithmFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 盈亏算法
    /// typedef char TThostFtdcAlgorithmType
    {
    .name = "Algorithm",
    .get = PyCThostFtdcPositionProfitAlgorithmFieldType_get_Algorithm,
    .set = PyCThostFtdcPositionProfitAlgorithmFieldType_set_Algorithm,
    .doc = PyDoc_STR("盈亏算法"),
    },
    /// 备注
    /// typedef char TThostFtdcMemoType[161]
    {
    .name = "Memo",
    .get = PyCThostFtdcPositionProfitAlgorithmFieldType_get_Memo,
    .set = PyCThostFtdcPositionProfitAlgorithmFieldType_set_Memo,
    .doc = PyDoc_STR("备注"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcPositionProfitAlgorithmFieldType_get_CurrencyID,
    .set = PyCThostFtdcPositionProfitAlgorithmFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcPositionProfitAlgorithmFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcPositionProfitAlgorithmField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("浮动盈亏算法")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcPositionProfitAlgorithmFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcPositionProfitAlgorithmFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcPositionProfitAlgorithmFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcPositionProfitAlgorithmFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcPositionProfitAlgorithmFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcPositionProfitAlgorithmFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("浮动盈亏算法")},
    {Py_tp_members, PyCThostFtdcPositionProfitAlgorithmFieldType_members},
    {Py_tp_getset, PyCThostFtdcPositionProfitAlgorithmFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcPositionProfitAlgorithmFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcPositionProfitAlgorithmFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcPositionProfitAlgorithmFieldType_spec = {
    .name = "PyCTP.CThostFtdcPositionProfitAlgorithmField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcPositionProfitAlgorithmFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcPositionProfitAlgorithmFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcPositionProfitAlgorithmFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcPositionProfitAlgorithmFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcPositionProfitAlgorithmFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcPositionProfitAlgorithmFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcPositionProfitAlgorithmFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcPositionProfitAlgorithmFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcPositionProfitAlgorithmField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcPositionProfitAlgorithmField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}