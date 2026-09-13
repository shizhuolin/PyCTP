
#include "PyCThostFtdcTransferBankToFutureReqField.h"

///银行资金转期货请求，TradeCode=202001

static int PyCThostFtdcTransferBankToFutureReqFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FutureAccount", "FuturePwdFlag", "FutureAccPwd", "TradeAmt", "CustFee", "CurrencyCode", NULL };


    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTransferBankToFutureReqField_FutureAccount = NULL;
    Py_ssize_t CThostFtdcTransferBankToFutureReqField_FutureAccount_length = 0;

    /// 密码标志
    /// typedef char TThostFtdcFuturePwdFlagType
    char CThostFtdcTransferBankToFutureReqField_FuturePwdFlag = 0;

    /// 密码
    /// typedef char TThostFtdcFutureAccPwdType[17]
    char *CThostFtdcTransferBankToFutureReqField_FutureAccPwd = NULL;
    Py_ssize_t CThostFtdcTransferBankToFutureReqField_FutureAccPwd_length = 0;

    /// 转账金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferBankToFutureReqField_TradeAmt = 0.0;

    /// 客户手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferBankToFutureReqField_CustFee = 0.0;

    /// 币种：RMB-人民币 USD-美圆 HKD-港元
    /// typedef char TThostFtdcCurrencyCodeType[4]
    char *CThostFtdcTransferBankToFutureReqField_CurrencyCode = NULL;
    Py_ssize_t CThostFtdcTransferBankToFutureReqField_CurrencyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#ddy#", (char **)kwlist
        , &CThostFtdcTransferBankToFutureReqField_FutureAccount, &CThostFtdcTransferBankToFutureReqField_FutureAccount_length
        , &CThostFtdcTransferBankToFutureReqField_FuturePwdFlag
        , &CThostFtdcTransferBankToFutureReqField_FutureAccPwd, &CThostFtdcTransferBankToFutureReqField_FutureAccPwd_length
        , &CThostFtdcTransferBankToFutureReqField_TradeAmt
        , &CThostFtdcTransferBankToFutureReqField_CustFee
        , &CThostFtdcTransferBankToFutureReqField_CurrencyCode, &CThostFtdcTransferBankToFutureReqField_CurrencyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcTransferBankToFutureReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureReqFieldData>(self);
    CThostFtdcTransferBankToFutureReqField *data = &(extra->data);


    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTransferBankToFutureReqField_FutureAccount != NULL ) {
        if(CThostFtdcTransferBankToFutureReqField_FutureAccount_length >= (Py_ssize_t)sizeof(data->FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is 12)", CThostFtdcTransferBankToFutureReqField_FutureAccount_length);
            return -1;
        }
        // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
        // memcpy(data->FutureAccount, CThostFtdcTransferBankToFutureReqField_FutureAccount, CThostFtdcTransferBankToFutureReqField_FutureAccount_length);
        strncpy(data->FutureAccount, CThostFtdcTransferBankToFutureReqField_FutureAccount, sizeof(data->FutureAccount));
        CThostFtdcTransferBankToFutureReqField_FutureAccount = NULL;
    }

    /// 密码标志
    /// typedef char TThostFtdcFuturePwdFlagType
    data->FuturePwdFlag = CThostFtdcTransferBankToFutureReqField_FuturePwdFlag;

    /// 密码
    /// typedef char TThostFtdcFutureAccPwdType[17]
    if( CThostFtdcTransferBankToFutureReqField_FutureAccPwd != NULL ) {
        if(CThostFtdcTransferBankToFutureReqField_FutureAccPwd_length >= (Py_ssize_t)sizeof(data->FutureAccPwd)) {
            PyErr_Format(PyExc_ValueError, "FutureAccPwd too long: length=%zd (max allowed is 16)", CThostFtdcTransferBankToFutureReqField_FutureAccPwd_length);
            return -1;
        }
        // memset(data->FutureAccPwd, 0, sizeof(data->FutureAccPwd));
        // memcpy(data->FutureAccPwd, CThostFtdcTransferBankToFutureReqField_FutureAccPwd, CThostFtdcTransferBankToFutureReqField_FutureAccPwd_length);
        strncpy(data->FutureAccPwd, CThostFtdcTransferBankToFutureReqField_FutureAccPwd, sizeof(data->FutureAccPwd));
        CThostFtdcTransferBankToFutureReqField_FutureAccPwd = NULL;
    }

    /// 转账金额
    /// typedef double TThostFtdcMoneyType
    data->TradeAmt = CThostFtdcTransferBankToFutureReqField_TradeAmt;

    /// 客户手续费
    /// typedef double TThostFtdcMoneyType
    data->CustFee = CThostFtdcTransferBankToFutureReqField_CustFee;

    /// 币种：RMB-人民币 USD-美圆 HKD-港元
    /// typedef char TThostFtdcCurrencyCodeType[4]
    if( CThostFtdcTransferBankToFutureReqField_CurrencyCode != NULL ) {
        if(CThostFtdcTransferBankToFutureReqField_CurrencyCode_length >= (Py_ssize_t)sizeof(data->CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is 3)", CThostFtdcTransferBankToFutureReqField_CurrencyCode_length);
            return -1;
        }
        // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
        // memcpy(data->CurrencyCode, CThostFtdcTransferBankToFutureReqField_CurrencyCode, CThostFtdcTransferBankToFutureReqField_CurrencyCode_length);
        strncpy(data->CurrencyCode, CThostFtdcTransferBankToFutureReqField_CurrencyCode, sizeof(data->CurrencyCode));
        CThostFtdcTransferBankToFutureReqField_CurrencyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTransferBankToFutureReqFieldType_repr(PyObject *self) {

    PyCThostFtdcTransferBankToFutureReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureReqFieldData>(self);
    CThostFtdcTransferBankToFutureReqField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:d,s:d,s:y}"
        , "FutureAccount", data->FutureAccount//, (Py_ssize_t)sizeof(data->FutureAccount)
        , "FuturePwdFlag", data->FuturePwdFlag
        , "FutureAccPwd", data->FutureAccPwd//, (Py_ssize_t)sizeof(data->FutureAccPwd)
        , "TradeAmt", data->TradeAmt
        , "CustFee", data->CustFee
        , "CurrencyCode", data->CurrencyCode//, (Py_ssize_t)sizeof(data->CurrencyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankToFutureReqField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankToFutureReqField repr");
        return NULL;
    }

    return repr;
}


/// 期货资金账户
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTransferBankToFutureReqFieldType_get_FutureAccount(PyObject *self, void *closure) {
    PyCThostFtdcTransferBankToFutureReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureReqFieldData>(self);
    CThostFtdcTransferBankToFutureReqField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureAccount, (Py_ssize_t)sizeof(data->FutureAccount));
    return PyBytes_FromString(data->FutureAccount);
}

static int PyCThostFtdcTransferBankToFutureReqFieldType_set_FutureAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferBankToFutureReqField::FutureAccount)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferBankToFutureReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureReqFieldData>(self);
    CThostFtdcTransferBankToFutureReqField *data = &(extra->data);
    // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
    // memcpy(data->FutureAccount, buf, len);
    strncpy(data->FutureAccount, buf, sizeof(data->FutureAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码标志
/// typedef char TThostFtdcFuturePwdFlagType
static PyObject *PyCThostFtdcTransferBankToFutureReqFieldType_get_FuturePwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcTransferBankToFutureReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureReqFieldData>(self);
    CThostFtdcTransferBankToFutureReqField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FuturePwdFlag), 1);
}

static int PyCThostFtdcTransferBankToFutureReqFieldType_set_FuturePwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FuturePwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTransferBankToFutureReqField::FuturePwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "FuturePwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferBankToFutureReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureReqFieldData>(self);
    CThostFtdcTransferBankToFutureReqField *data = &(extra->data);
    data->FuturePwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcFutureAccPwdType[17]
static PyObject *PyCThostFtdcTransferBankToFutureReqFieldType_get_FutureAccPwd(PyObject *self, void *closure) {
    PyCThostFtdcTransferBankToFutureReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureReqFieldData>(self);
    CThostFtdcTransferBankToFutureReqField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureAccPwd, (Py_ssize_t)sizeof(data->FutureAccPwd));
    return PyBytes_FromString(data->FutureAccPwd);
}

static int PyCThostFtdcTransferBankToFutureReqFieldType_set_FutureAccPwd(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccPwd Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferBankToFutureReqField::FutureAccPwd)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccPwd must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferBankToFutureReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureReqFieldData>(self);
    CThostFtdcTransferBankToFutureReqField *data = &(extra->data);
    // memset(data->FutureAccPwd, 0, sizeof(data->FutureAccPwd));
    // memcpy(data->FutureAccPwd, buf, len);
    strncpy(data->FutureAccPwd, buf, sizeof(data->FutureAccPwd));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种：RMB-人民币 USD-美圆 HKD-港元
/// typedef char TThostFtdcCurrencyCodeType[4]
static PyObject *PyCThostFtdcTransferBankToFutureReqFieldType_get_CurrencyCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferBankToFutureReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureReqFieldData>(self);
    CThostFtdcTransferBankToFutureReqField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyCode, (Py_ssize_t)sizeof(data->CurrencyCode));
    return PyBytes_FromString(data->CurrencyCode);
}

static int PyCThostFtdcTransferBankToFutureReqFieldType_set_CurrencyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferBankToFutureReqField::CurrencyCode)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyCode must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferBankToFutureReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureReqFieldData>(self);
    CThostFtdcTransferBankToFutureReqField *data = &(extra->data);
    // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
    // memcpy(data->CurrencyCode, buf, len);
    strncpy(data->CurrencyCode, buf, sizeof(data->CurrencyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTransferBankToFutureReqFieldType_members[] = {
    /// 转账金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "TradeAmt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferBankToFutureReqFieldData, data.TradeAmt),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("转账金额")
    },
    /// 客户手续费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CustFee",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferBankToFutureReqFieldData, data.CustFee),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("客户手续费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTransferBankToFutureReqFieldType_getsets[] = {
    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "FutureAccount",
    .get = PyCThostFtdcTransferBankToFutureReqFieldType_get_FutureAccount,
    .set = PyCThostFtdcTransferBankToFutureReqFieldType_set_FutureAccount,
    .doc = PyDoc_STR("期货资金账户"),
    },
    /// 密码标志
    /// typedef char TThostFtdcFuturePwdFlagType
    {
    .name = "FuturePwdFlag",
    .get = PyCThostFtdcTransferBankToFutureReqFieldType_get_FuturePwdFlag,
    .set = PyCThostFtdcTransferBankToFutureReqFieldType_set_FuturePwdFlag,
    .doc = PyDoc_STR("密码标志"),
    },
    /// 密码
    /// typedef char TThostFtdcFutureAccPwdType[17]
    {
    .name = "FutureAccPwd",
    .get = PyCThostFtdcTransferBankToFutureReqFieldType_get_FutureAccPwd,
    .set = PyCThostFtdcTransferBankToFutureReqFieldType_set_FutureAccPwd,
    .doc = PyDoc_STR("密码"),
    },
    /// 币种：RMB-人民币 USD-美圆 HKD-港元
    /// typedef char TThostFtdcCurrencyCodeType[4]
    {
    .name = "CurrencyCode",
    .get = PyCThostFtdcTransferBankToFutureReqFieldType_get_CurrencyCode,
    .set = PyCThostFtdcTransferBankToFutureReqFieldType_set_CurrencyCode,
    .doc = PyDoc_STR("币种：RMB-人民币 USD-美圆 HKD-港元"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTransferBankToFutureReqFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTransferBankToFutureReqField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("银行资金转期货请求，TradeCode=202001")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTransferBankToFutureReqFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTransferBankToFutureReqFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTransferBankToFutureReqFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTransferBankToFutureReqFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTransferBankToFutureReqFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTransferBankToFutureReqFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("银行资金转期货请求，TradeCode=202001")},
    {Py_tp_members, PyCThostFtdcTransferBankToFutureReqFieldType_members},
    {Py_tp_getset, PyCThostFtdcTransferBankToFutureReqFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTransferBankToFutureReqFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTransferBankToFutureReqFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTransferBankToFutureReqFieldType_spec = {
    .name = "PyCTP.CThostFtdcTransferBankToFutureReqField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTransferBankToFutureReqFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTransferBankToFutureReqFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTransferBankToFutureReqFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTransferBankToFutureReqFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTransferBankToFutureReqFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTransferBankToFutureReqFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTransferBankToFutureReqFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTransferBankToFutureReqFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTransferBankToFutureReqField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferBankToFutureReqField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}