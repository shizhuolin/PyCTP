
#include "PyCThostFtdcSyncFundMortgageField.h"

///货币质押同步

static int PyCThostFtdcSyncFundMortgageFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "MortgageSeqNo", "BrokerID", "InvestorID", "FromCurrencyID", "MortgageAmount", "ToCurrencyID", NULL };


    /// 货币质押流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    char *CThostFtdcSyncFundMortgageField_MortgageSeqNo = NULL;
    Py_ssize_t CThostFtdcSyncFundMortgageField_MortgageSeqNo_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncFundMortgageField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncFundMortgageField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncFundMortgageField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncFundMortgageField_InvestorID_length = 0;

    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSyncFundMortgageField_FromCurrencyID = NULL;
    Py_ssize_t CThostFtdcSyncFundMortgageField_FromCurrencyID_length = 0;

    /// 质押金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncFundMortgageField_MortgageAmount = 0.0;

    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSyncFundMortgageField_ToCurrencyID = NULL;
    Py_ssize_t CThostFtdcSyncFundMortgageField_ToCurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dy#", (char **)kwlist
        , &CThostFtdcSyncFundMortgageField_MortgageSeqNo, &CThostFtdcSyncFundMortgageField_MortgageSeqNo_length
        , &CThostFtdcSyncFundMortgageField_BrokerID, &CThostFtdcSyncFundMortgageField_BrokerID_length
        , &CThostFtdcSyncFundMortgageField_InvestorID, &CThostFtdcSyncFundMortgageField_InvestorID_length
        , &CThostFtdcSyncFundMortgageField_FromCurrencyID, &CThostFtdcSyncFundMortgageField_FromCurrencyID_length
        , &CThostFtdcSyncFundMortgageField_MortgageAmount
        , &CThostFtdcSyncFundMortgageField_ToCurrencyID, &CThostFtdcSyncFundMortgageField_ToCurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);


    /// 货币质押流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    if( CThostFtdcSyncFundMortgageField_MortgageSeqNo != NULL ) {
        if(CThostFtdcSyncFundMortgageField_MortgageSeqNo_length >= (Py_ssize_t)sizeof(data->MortgageSeqNo)) {
            PyErr_Format(PyExc_ValueError, "MortgageSeqNo too long: length=%zd (max allowed is 14)", CThostFtdcSyncFundMortgageField_MortgageSeqNo_length);
            return -1;
        }
        // memset(data->MortgageSeqNo, 0, sizeof(data->MortgageSeqNo));
        // memcpy(data->MortgageSeqNo, CThostFtdcSyncFundMortgageField_MortgageSeqNo, CThostFtdcSyncFundMortgageField_MortgageSeqNo_length);
        strncpy(data->MortgageSeqNo, CThostFtdcSyncFundMortgageField_MortgageSeqNo, sizeof(data->MortgageSeqNo));
        CThostFtdcSyncFundMortgageField_MortgageSeqNo = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncFundMortgageField_BrokerID != NULL ) {
        if(CThostFtdcSyncFundMortgageField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncFundMortgageField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncFundMortgageField_BrokerID, CThostFtdcSyncFundMortgageField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncFundMortgageField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncFundMortgageField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncFundMortgageField_InvestorID != NULL ) {
        if(CThostFtdcSyncFundMortgageField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncFundMortgageField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncFundMortgageField_InvestorID, CThostFtdcSyncFundMortgageField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncFundMortgageField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncFundMortgageField_InvestorID = NULL;
    }

    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSyncFundMortgageField_FromCurrencyID != NULL ) {
        if(CThostFtdcSyncFundMortgageField_FromCurrencyID_length >= (Py_ssize_t)sizeof(data->FromCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSyncFundMortgageField_FromCurrencyID_length);
            return -1;
        }
        // memset(data->FromCurrencyID, 0, sizeof(data->FromCurrencyID));
        // memcpy(data->FromCurrencyID, CThostFtdcSyncFundMortgageField_FromCurrencyID, CThostFtdcSyncFundMortgageField_FromCurrencyID_length);
        strncpy(data->FromCurrencyID, CThostFtdcSyncFundMortgageField_FromCurrencyID, sizeof(data->FromCurrencyID));
        CThostFtdcSyncFundMortgageField_FromCurrencyID = NULL;
    }

    /// 质押金额
    /// typedef double TThostFtdcMoneyType
    data->MortgageAmount = CThostFtdcSyncFundMortgageField_MortgageAmount;

    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSyncFundMortgageField_ToCurrencyID != NULL ) {
        if(CThostFtdcSyncFundMortgageField_ToCurrencyID_length >= (Py_ssize_t)sizeof(data->ToCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "ToCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSyncFundMortgageField_ToCurrencyID_length);
            return -1;
        }
        // memset(data->ToCurrencyID, 0, sizeof(data->ToCurrencyID));
        // memcpy(data->ToCurrencyID, CThostFtdcSyncFundMortgageField_ToCurrencyID, CThostFtdcSyncFundMortgageField_ToCurrencyID_length);
        strncpy(data->ToCurrencyID, CThostFtdcSyncFundMortgageField_ToCurrencyID, sizeof(data->ToCurrencyID));
        CThostFtdcSyncFundMortgageField_ToCurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncFundMortgageFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:y}"
        , "MortgageSeqNo", data->MortgageSeqNo//, (Py_ssize_t)sizeof(data->MortgageSeqNo)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "FromCurrencyID", data->FromCurrencyID//, (Py_ssize_t)sizeof(data->FromCurrencyID)
        , "MortgageAmount", data->MortgageAmount
        , "ToCurrencyID", data->ToCurrencyID//, (Py_ssize_t)sizeof(data->ToCurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncFundMortgageField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncFundMortgageField repr");
        return NULL;
    }

    return repr;
}


/// 货币质押流水号
/// typedef char TThostFtdcDepositSeqNoType[15]
static PyObject *PyCThostFtdcSyncFundMortgageFieldType_get_MortgageSeqNo(PyObject *self, void *closure) {
    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MortgageSeqNo, (Py_ssize_t)sizeof(data->MortgageSeqNo));
    return PyBytes_FromString(data->MortgageSeqNo);
}

static int PyCThostFtdcSyncFundMortgageFieldType_set_MortgageSeqNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MortgageSeqNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncFundMortgageField::MortgageSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "MortgageSeqNo must be less than 14 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);
    // memset(data->MortgageSeqNo, 0, sizeof(data->MortgageSeqNo));
    // memcpy(data->MortgageSeqNo, buf, len);
    strncpy(data->MortgageSeqNo, buf, sizeof(data->MortgageSeqNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncFundMortgageFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncFundMortgageFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncFundMortgageField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncFundMortgageFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncFundMortgageFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncFundMortgageField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 源币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSyncFundMortgageFieldType_get_FromCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FromCurrencyID, (Py_ssize_t)sizeof(data->FromCurrencyID));
    return PyBytes_FromString(data->FromCurrencyID);
}

static int PyCThostFtdcSyncFundMortgageFieldType_set_FromCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncFundMortgageField::FromCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);
    // memset(data->FromCurrencyID, 0, sizeof(data->FromCurrencyID));
    // memcpy(data->FromCurrencyID, buf, len);
    strncpy(data->FromCurrencyID, buf, sizeof(data->FromCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 目标币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSyncFundMortgageFieldType_get_ToCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ToCurrencyID, (Py_ssize_t)sizeof(data->ToCurrencyID));
    return PyBytes_FromString(data->ToCurrencyID);
}

static int PyCThostFtdcSyncFundMortgageFieldType_set_ToCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ToCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncFundMortgageField::ToCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "ToCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncFundMortgageFieldData>(self);
    CThostFtdcSyncFundMortgageField *data = &(extra->data);
    // memset(data->ToCurrencyID, 0, sizeof(data->ToCurrencyID));
    // memcpy(data->ToCurrencyID, buf, len);
    strncpy(data->ToCurrencyID, buf, sizeof(data->ToCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncFundMortgageFieldType_members[] = {
    /// 质押金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MortgageAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncFundMortgageFieldData, data.MortgageAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("质押金额")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncFundMortgageFieldType_getsets[] = {
    /// 货币质押流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    {
    .name = "MortgageSeqNo",
    .get = PyCThostFtdcSyncFundMortgageFieldType_get_MortgageSeqNo,
    .set = PyCThostFtdcSyncFundMortgageFieldType_set_MortgageSeqNo,
    .doc = PyDoc_STR("货币质押流水号"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncFundMortgageFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncFundMortgageFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncFundMortgageFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncFundMortgageFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "FromCurrencyID",
    .get = PyCThostFtdcSyncFundMortgageFieldType_get_FromCurrencyID,
    .set = PyCThostFtdcSyncFundMortgageFieldType_set_FromCurrencyID,
    .doc = PyDoc_STR("源币种"),
    },
    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "ToCurrencyID",
    .get = PyCThostFtdcSyncFundMortgageFieldType_get_ToCurrencyID,
    .set = PyCThostFtdcSyncFundMortgageFieldType_set_ToCurrencyID,
    .doc = PyDoc_STR("目标币种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncFundMortgageFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncFundMortgageField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("货币质押同步")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncFundMortgageFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncFundMortgageFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncFundMortgageFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncFundMortgageFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncFundMortgageFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncFundMortgageFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("货币质押同步")},
    {Py_tp_members, PyCThostFtdcSyncFundMortgageFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncFundMortgageFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncFundMortgageFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncFundMortgageFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncFundMortgageFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncFundMortgageField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncFundMortgageFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncFundMortgageFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncFundMortgageFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncFundMortgageFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncFundMortgageFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncFundMortgageFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncFundMortgageFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncFundMortgageFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncFundMortgageField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncFundMortgageField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}