
#include "PyCThostFtdcInvestorWithdrawAlgorithmField.h"

///经纪公司可提资金算法表

static int PyCThostFtdcInvestorWithdrawAlgorithmFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorRange", "InvestorID", "UsingRatio", "CurrencyID", "FundMortgageRatio", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorWithdrawAlgorithmField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorWithdrawAlgorithmField_BrokerID_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcInvestorWithdrawAlgorithmField_InvestorRange = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorWithdrawAlgorithmField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorWithdrawAlgorithmField_InvestorID_length = 0;

    /// 可提资金比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInvestorWithdrawAlgorithmField_UsingRatio = 0.0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcInvestorWithdrawAlgorithmField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcInvestorWithdrawAlgorithmField_CurrencyID_length = 0;

    /// 货币质押比率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInvestorWithdrawAlgorithmField_FundMortgageRatio = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#dy#d", (char **)kwlist
        , &CThostFtdcInvestorWithdrawAlgorithmField_BrokerID, &CThostFtdcInvestorWithdrawAlgorithmField_BrokerID_length
        , &CThostFtdcInvestorWithdrawAlgorithmField_InvestorRange
        , &CThostFtdcInvestorWithdrawAlgorithmField_InvestorID, &CThostFtdcInvestorWithdrawAlgorithmField_InvestorID_length
        , &CThostFtdcInvestorWithdrawAlgorithmField_UsingRatio
        , &CThostFtdcInvestorWithdrawAlgorithmField_CurrencyID, &CThostFtdcInvestorWithdrawAlgorithmField_CurrencyID_length
        , &CThostFtdcInvestorWithdrawAlgorithmField_FundMortgageRatio
    )) {
        return -1;
    }

    PyCThostFtdcInvestorWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorWithdrawAlgorithmFieldData>(self);
    CThostFtdcInvestorWithdrawAlgorithmField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorWithdrawAlgorithmField_BrokerID != NULL ) {
        if(CThostFtdcInvestorWithdrawAlgorithmField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorWithdrawAlgorithmField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorWithdrawAlgorithmField_BrokerID, CThostFtdcInvestorWithdrawAlgorithmField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorWithdrawAlgorithmField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorWithdrawAlgorithmField_BrokerID = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcInvestorWithdrawAlgorithmField_InvestorRange;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorWithdrawAlgorithmField_InvestorID != NULL ) {
        if(CThostFtdcInvestorWithdrawAlgorithmField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorWithdrawAlgorithmField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorWithdrawAlgorithmField_InvestorID, CThostFtdcInvestorWithdrawAlgorithmField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorWithdrawAlgorithmField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorWithdrawAlgorithmField_InvestorID = NULL;
    }

    /// 可提资金比例
    /// typedef double TThostFtdcRatioType
    data->UsingRatio = CThostFtdcInvestorWithdrawAlgorithmField_UsingRatio;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcInvestorWithdrawAlgorithmField_CurrencyID != NULL ) {
        if(CThostFtdcInvestorWithdrawAlgorithmField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcInvestorWithdrawAlgorithmField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcInvestorWithdrawAlgorithmField_CurrencyID, CThostFtdcInvestorWithdrawAlgorithmField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcInvestorWithdrawAlgorithmField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcInvestorWithdrawAlgorithmField_CurrencyID = NULL;
    }

    /// 货币质押比率
    /// typedef double TThostFtdcRatioType
    data->FundMortgageRatio = CThostFtdcInvestorWithdrawAlgorithmField_FundMortgageRatio;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorWithdrawAlgorithmFieldData>(self);
    CThostFtdcInvestorWithdrawAlgorithmField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:d,s:y,s:d}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorRange", data->InvestorRange
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "UsingRatio", data->UsingRatio
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "FundMortgageRatio", data->FundMortgageRatio
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorWithdrawAlgorithmField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorWithdrawAlgorithmField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorWithdrawAlgorithmFieldData>(self);
    CThostFtdcInvestorWithdrawAlgorithmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorWithdrawAlgorithmFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorWithdrawAlgorithmField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorWithdrawAlgorithmFieldData>(self);
    CThostFtdcInvestorWithdrawAlgorithmField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcInvestorWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorWithdrawAlgorithmFieldData>(self);
    CThostFtdcInvestorWithdrawAlgorithmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcInvestorWithdrawAlgorithmFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorWithdrawAlgorithmField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorWithdrawAlgorithmFieldData>(self);
    CThostFtdcInvestorWithdrawAlgorithmField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorWithdrawAlgorithmFieldData>(self);
    CThostFtdcInvestorWithdrawAlgorithmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorWithdrawAlgorithmFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorWithdrawAlgorithmField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorWithdrawAlgorithmFieldData>(self);
    CThostFtdcInvestorWithdrawAlgorithmField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorWithdrawAlgorithmFieldData>(self);
    CThostFtdcInvestorWithdrawAlgorithmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcInvestorWithdrawAlgorithmFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorWithdrawAlgorithmField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorWithdrawAlgorithmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorWithdrawAlgorithmFieldData>(self);
    CThostFtdcInvestorWithdrawAlgorithmField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorWithdrawAlgorithmFieldType_members[] = {
    /// 可提资金比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "UsingRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorWithdrawAlgorithmFieldData, data.UsingRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("可提资金比例")
    },
    /// 货币质押比率
    /// typedef double TThostFtdcRatioType
    {
        .name = "FundMortgageRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorWithdrawAlgorithmFieldData, data.FundMortgageRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("货币质押比率")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorWithdrawAlgorithmFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorWithdrawAlgorithmFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorWithdrawAlgorithmFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcInvestorWithdrawAlgorithmFieldType_get_InvestorRange,
    .set = PyCThostFtdcInvestorWithdrawAlgorithmFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorWithdrawAlgorithmFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorWithdrawAlgorithmFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcInvestorWithdrawAlgorithmFieldType_get_CurrencyID,
    .set = PyCThostFtdcInvestorWithdrawAlgorithmFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorWithdrawAlgorithmFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorWithdrawAlgorithmField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("经纪公司可提资金算法表")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorWithdrawAlgorithmFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorWithdrawAlgorithmFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorWithdrawAlgorithmFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorWithdrawAlgorithmFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorWithdrawAlgorithmFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorWithdrawAlgorithmFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("经纪公司可提资金算法表")},
    {Py_tp_members, PyCThostFtdcInvestorWithdrawAlgorithmFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorWithdrawAlgorithmFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorWithdrawAlgorithmFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorWithdrawAlgorithmFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorWithdrawAlgorithmFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorWithdrawAlgorithmField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorWithdrawAlgorithmFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorWithdrawAlgorithmFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorWithdrawAlgorithmFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorWithdrawAlgorithmFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorWithdrawAlgorithmFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorWithdrawAlgorithmFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorWithdrawAlgorithmFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorWithdrawAlgorithmFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorWithdrawAlgorithmField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorWithdrawAlgorithmField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}