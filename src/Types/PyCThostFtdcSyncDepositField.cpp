
#include "PyCThostFtdcSyncDepositField.h"

///出入金同步

static int PyCThostFtdcSyncDepositFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "DepositSeqNo", "BrokerID", "InvestorID", "Deposit", "IsForce", "CurrencyID", "IsFromSopt", "TradingPassword", "IsSecAgentTranfer", NULL };


    /// 出入金流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    char *CThostFtdcSyncDepositField_DepositSeqNo = NULL;
    Py_ssize_t CThostFtdcSyncDepositField_DepositSeqNo_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDepositField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDepositField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDepositField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDepositField_InvestorID_length = 0;

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDepositField_Deposit = 0.0;

    /// 是否强制进行
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncDepositField_IsForce = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSyncDepositField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcSyncDepositField_CurrencyID_length = 0;

    /// 是否是个股期权内转
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncDepositField_IsFromSopt = 0;

    /// 资金密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcSyncDepositField_TradingPassword = NULL;
    Py_ssize_t CThostFtdcSyncDepositField_TradingPassword_length = 0;

    /// 是否二级代理商的内转
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncDepositField_IsSecAgentTranfer = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#diy#iy#i", (char **)kwlist
        , &CThostFtdcSyncDepositField_DepositSeqNo, &CThostFtdcSyncDepositField_DepositSeqNo_length
        , &CThostFtdcSyncDepositField_BrokerID, &CThostFtdcSyncDepositField_BrokerID_length
        , &CThostFtdcSyncDepositField_InvestorID, &CThostFtdcSyncDepositField_InvestorID_length
        , &CThostFtdcSyncDepositField_Deposit
        , &CThostFtdcSyncDepositField_IsForce
        , &CThostFtdcSyncDepositField_CurrencyID, &CThostFtdcSyncDepositField_CurrencyID_length
        , &CThostFtdcSyncDepositField_IsFromSopt
        , &CThostFtdcSyncDepositField_TradingPassword, &CThostFtdcSyncDepositField_TradingPassword_length
        , &CThostFtdcSyncDepositField_IsSecAgentTranfer
    )) {
        return -1;
    }

    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);


    /// 出入金流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    if( CThostFtdcSyncDepositField_DepositSeqNo != NULL ) {
        if(CThostFtdcSyncDepositField_DepositSeqNo_length >= (Py_ssize_t)sizeof(data->DepositSeqNo)) {
            PyErr_Format(PyExc_ValueError, "DepositSeqNo too long: length=%zd (max allowed is 14)", CThostFtdcSyncDepositField_DepositSeqNo_length);
            return -1;
        }
        // memset(data->DepositSeqNo, 0, sizeof(data->DepositSeqNo));
        // memcpy(data->DepositSeqNo, CThostFtdcSyncDepositField_DepositSeqNo, CThostFtdcSyncDepositField_DepositSeqNo_length);
        strncpy(data->DepositSeqNo, CThostFtdcSyncDepositField_DepositSeqNo, sizeof(data->DepositSeqNo));
        CThostFtdcSyncDepositField_DepositSeqNo = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDepositField_BrokerID != NULL ) {
        if(CThostFtdcSyncDepositField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDepositField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDepositField_BrokerID, CThostFtdcSyncDepositField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDepositField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDepositField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDepositField_InvestorID != NULL ) {
        if(CThostFtdcSyncDepositField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDepositField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDepositField_InvestorID, CThostFtdcSyncDepositField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDepositField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDepositField_InvestorID = NULL;
    }

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    data->Deposit = CThostFtdcSyncDepositField_Deposit;

    /// 是否强制进行
    /// typedef int TThostFtdcBoolType
    data->IsForce = CThostFtdcSyncDepositField_IsForce;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSyncDepositField_CurrencyID != NULL ) {
        if(CThostFtdcSyncDepositField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSyncDepositField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcSyncDepositField_CurrencyID, CThostFtdcSyncDepositField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcSyncDepositField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcSyncDepositField_CurrencyID = NULL;
    }

    /// 是否是个股期权内转
    /// typedef int TThostFtdcBoolType
    data->IsFromSopt = CThostFtdcSyncDepositField_IsFromSopt;

    /// 资金密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcSyncDepositField_TradingPassword != NULL ) {
        if(CThostFtdcSyncDepositField_TradingPassword_length >= (Py_ssize_t)sizeof(data->TradingPassword)) {
            PyErr_Format(PyExc_ValueError, "TradingPassword too long: length=%zd (max allowed is 40)", CThostFtdcSyncDepositField_TradingPassword_length);
            return -1;
        }
        // memset(data->TradingPassword, 0, sizeof(data->TradingPassword));
        // memcpy(data->TradingPassword, CThostFtdcSyncDepositField_TradingPassword, CThostFtdcSyncDepositField_TradingPassword_length);
        strncpy(data->TradingPassword, CThostFtdcSyncDepositField_TradingPassword, sizeof(data->TradingPassword));
        CThostFtdcSyncDepositField_TradingPassword = NULL;
    }

    /// 是否二级代理商的内转
    /// typedef int TThostFtdcBoolType
    data->IsSecAgentTranfer = CThostFtdcSyncDepositField_IsSecAgentTranfer;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDepositFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d,s:i,s:y,s:i,s:y,s:i}"
        , "DepositSeqNo", data->DepositSeqNo//, (Py_ssize_t)sizeof(data->DepositSeqNo)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "Deposit", data->Deposit
        , "IsForce", data->IsForce
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "IsFromSopt", data->IsFromSopt
        , "TradingPassword", data->TradingPassword//, (Py_ssize_t)sizeof(data->TradingPassword)
        , "IsSecAgentTranfer", data->IsSecAgentTranfer
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDepositField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDepositField repr");
        return NULL;
    }

    return repr;
}


/// 出入金流水号
/// typedef char TThostFtdcDepositSeqNoType[15]
static PyObject *PyCThostFtdcSyncDepositFieldType_get_DepositSeqNo(PyObject *self, void *closure) {
    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DepositSeqNo, (Py_ssize_t)sizeof(data->DepositSeqNo));
    return PyBytes_FromString(data->DepositSeqNo);
}

static int PyCThostFtdcSyncDepositFieldType_set_DepositSeqNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DepositSeqNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDepositField::DepositSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "DepositSeqNo must be less than 14 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);
    // memset(data->DepositSeqNo, 0, sizeof(data->DepositSeqNo));
    // memcpy(data->DepositSeqNo, buf, len);
    strncpy(data->DepositSeqNo, buf, sizeof(data->DepositSeqNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDepositFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDepositFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDepositField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDepositFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDepositFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDepositField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSyncDepositFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcSyncDepositFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDepositField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcSyncDepositFieldType_get_TradingPassword(PyObject *self, void *closure) {
    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingPassword, (Py_ssize_t)sizeof(data->TradingPassword));
    return PyBytes_FromString(data->TradingPassword);
}

static int PyCThostFtdcSyncDepositFieldType_set_TradingPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDepositField::TradingPassword)) {
        PyErr_SetString(PyExc_ValueError, "TradingPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDepositFieldData>(self);
    CThostFtdcSyncDepositField *data = &(extra->data);
    // memset(data->TradingPassword, 0, sizeof(data->TradingPassword));
    // memcpy(data->TradingPassword, buf, len);
    strncpy(data->TradingPassword, buf, sizeof(data->TradingPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDepositFieldType_members[] = {
    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Deposit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDepositFieldData, data.Deposit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("入金金额")
    },
    /// 是否强制进行
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsForce",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDepositFieldData, data.IsForce),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否强制进行")
    },
    /// 是否是个股期权内转
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsFromSopt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDepositFieldData, data.IsFromSopt),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否是个股期权内转")
    },
    /// 是否二级代理商的内转
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsSecAgentTranfer",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDepositFieldData, data.IsSecAgentTranfer),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否二级代理商的内转")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDepositFieldType_getsets[] = {
    /// 出入金流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    {
    .name = "DepositSeqNo",
    .get = PyCThostFtdcSyncDepositFieldType_get_DepositSeqNo,
    .set = PyCThostFtdcSyncDepositFieldType_set_DepositSeqNo,
    .doc = PyDoc_STR("出入金流水号"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDepositFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDepositFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDepositFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDepositFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcSyncDepositFieldType_get_CurrencyID,
    .set = PyCThostFtdcSyncDepositFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 资金密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "TradingPassword",
    .get = PyCThostFtdcSyncDepositFieldType_get_TradingPassword,
    .set = PyCThostFtdcSyncDepositFieldType_set_TradingPassword,
    .doc = PyDoc_STR("资金密码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDepositFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDepositField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("出入金同步")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDepositFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDepositFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDepositFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDepositFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDepositFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDepositFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("出入金同步")},
    {Py_tp_members, PyCThostFtdcSyncDepositFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDepositFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDepositFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDepositFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDepositFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDepositField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDepositFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDepositFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDepositFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDepositFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDepositFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDepositFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDepositFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDepositFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDepositField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDepositField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}