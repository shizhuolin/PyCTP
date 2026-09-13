
#include "PyCThostFtdcTransferFutureToBankReqField.h"

///期货资金转银行请求，TradeCode=202002

static int PyCThostFtdcTransferFutureToBankReqFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FutureAccount", "FuturePwdFlag", "FutureAccPwd", "TradeAmt", "CustFee", "CurrencyCode", NULL };


    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTransferFutureToBankReqField_FutureAccount = NULL;
    Py_ssize_t CThostFtdcTransferFutureToBankReqField_FutureAccount_length = 0;

    /// 密码标志
    /// typedef char TThostFtdcFuturePwdFlagType
    char CThostFtdcTransferFutureToBankReqField_FuturePwdFlag = 0;

    /// 密码
    /// typedef char TThostFtdcFutureAccPwdType[17]
    char *CThostFtdcTransferFutureToBankReqField_FutureAccPwd = NULL;
    Py_ssize_t CThostFtdcTransferFutureToBankReqField_FutureAccPwd_length = 0;

    /// 转账金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferFutureToBankReqField_TradeAmt = 0.0;

    /// 客户手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferFutureToBankReqField_CustFee = 0.0;

    /// 币种：RMB-人民币 USD-美圆 HKD-港元
    /// typedef char TThostFtdcCurrencyCodeType[4]
    char *CThostFtdcTransferFutureToBankReqField_CurrencyCode = NULL;
    Py_ssize_t CThostFtdcTransferFutureToBankReqField_CurrencyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#ddy#", (char **)kwlist
        , &CThostFtdcTransferFutureToBankReqField_FutureAccount, &CThostFtdcTransferFutureToBankReqField_FutureAccount_length
        , &CThostFtdcTransferFutureToBankReqField_FuturePwdFlag
        , &CThostFtdcTransferFutureToBankReqField_FutureAccPwd, &CThostFtdcTransferFutureToBankReqField_FutureAccPwd_length
        , &CThostFtdcTransferFutureToBankReqField_TradeAmt
        , &CThostFtdcTransferFutureToBankReqField_CustFee
        , &CThostFtdcTransferFutureToBankReqField_CurrencyCode, &CThostFtdcTransferFutureToBankReqField_CurrencyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcTransferFutureToBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankReqFieldData>(self);
    CThostFtdcTransferFutureToBankReqField *data = &(extra->data);


    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTransferFutureToBankReqField_FutureAccount != NULL ) {
        if(CThostFtdcTransferFutureToBankReqField_FutureAccount_length >= (Py_ssize_t)sizeof(data->FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is 12)", CThostFtdcTransferFutureToBankReqField_FutureAccount_length);
            return -1;
        }
        // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
        // memcpy(data->FutureAccount, CThostFtdcTransferFutureToBankReqField_FutureAccount, CThostFtdcTransferFutureToBankReqField_FutureAccount_length);
        strncpy(data->FutureAccount, CThostFtdcTransferFutureToBankReqField_FutureAccount, sizeof(data->FutureAccount));
        CThostFtdcTransferFutureToBankReqField_FutureAccount = NULL;
    }

    /// 密码标志
    /// typedef char TThostFtdcFuturePwdFlagType
    data->FuturePwdFlag = CThostFtdcTransferFutureToBankReqField_FuturePwdFlag;

    /// 密码
    /// typedef char TThostFtdcFutureAccPwdType[17]
    if( CThostFtdcTransferFutureToBankReqField_FutureAccPwd != NULL ) {
        if(CThostFtdcTransferFutureToBankReqField_FutureAccPwd_length >= (Py_ssize_t)sizeof(data->FutureAccPwd)) {
            PyErr_Format(PyExc_ValueError, "FutureAccPwd too long: length=%zd (max allowed is 16)", CThostFtdcTransferFutureToBankReqField_FutureAccPwd_length);
            return -1;
        }
        // memset(data->FutureAccPwd, 0, sizeof(data->FutureAccPwd));
        // memcpy(data->FutureAccPwd, CThostFtdcTransferFutureToBankReqField_FutureAccPwd, CThostFtdcTransferFutureToBankReqField_FutureAccPwd_length);
        strncpy(data->FutureAccPwd, CThostFtdcTransferFutureToBankReqField_FutureAccPwd, sizeof(data->FutureAccPwd));
        CThostFtdcTransferFutureToBankReqField_FutureAccPwd = NULL;
    }

    /// 转账金额
    /// typedef double TThostFtdcMoneyType
    data->TradeAmt = CThostFtdcTransferFutureToBankReqField_TradeAmt;

    /// 客户手续费
    /// typedef double TThostFtdcMoneyType
    data->CustFee = CThostFtdcTransferFutureToBankReqField_CustFee;

    /// 币种：RMB-人民币 USD-美圆 HKD-港元
    /// typedef char TThostFtdcCurrencyCodeType[4]
    if( CThostFtdcTransferFutureToBankReqField_CurrencyCode != NULL ) {
        if(CThostFtdcTransferFutureToBankReqField_CurrencyCode_length >= (Py_ssize_t)sizeof(data->CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is 3)", CThostFtdcTransferFutureToBankReqField_CurrencyCode_length);
            return -1;
        }
        // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
        // memcpy(data->CurrencyCode, CThostFtdcTransferFutureToBankReqField_CurrencyCode, CThostFtdcTransferFutureToBankReqField_CurrencyCode_length);
        strncpy(data->CurrencyCode, CThostFtdcTransferFutureToBankReqField_CurrencyCode, sizeof(data->CurrencyCode));
        CThostFtdcTransferFutureToBankReqField_CurrencyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTransferFutureToBankReqFieldType_repr(PyObject *self) {

    PyCThostFtdcTransferFutureToBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankReqFieldData>(self);
    CThostFtdcTransferFutureToBankReqField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferFutureToBankReqField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferFutureToBankReqField repr");
        return NULL;
    }

    return repr;
}


/// 期货资金账户
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTransferFutureToBankReqFieldType_get_FutureAccount(PyObject *self, void *closure) {
    PyCThostFtdcTransferFutureToBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankReqFieldData>(self);
    CThostFtdcTransferFutureToBankReqField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureAccount, (Py_ssize_t)sizeof(data->FutureAccount));
    return PyBytes_FromString(data->FutureAccount);
}

static int PyCThostFtdcTransferFutureToBankReqFieldType_set_FutureAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferFutureToBankReqField::FutureAccount)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferFutureToBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankReqFieldData>(self);
    CThostFtdcTransferFutureToBankReqField *data = &(extra->data);
    // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
    // memcpy(data->FutureAccount, buf, len);
    strncpy(data->FutureAccount, buf, sizeof(data->FutureAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码标志
/// typedef char TThostFtdcFuturePwdFlagType
static PyObject *PyCThostFtdcTransferFutureToBankReqFieldType_get_FuturePwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcTransferFutureToBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankReqFieldData>(self);
    CThostFtdcTransferFutureToBankReqField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FuturePwdFlag), 1);
}

static int PyCThostFtdcTransferFutureToBankReqFieldType_set_FuturePwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FuturePwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTransferFutureToBankReqField::FuturePwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "FuturePwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferFutureToBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankReqFieldData>(self);
    CThostFtdcTransferFutureToBankReqField *data = &(extra->data);
    data->FuturePwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcFutureAccPwdType[17]
static PyObject *PyCThostFtdcTransferFutureToBankReqFieldType_get_FutureAccPwd(PyObject *self, void *closure) {
    PyCThostFtdcTransferFutureToBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankReqFieldData>(self);
    CThostFtdcTransferFutureToBankReqField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureAccPwd, (Py_ssize_t)sizeof(data->FutureAccPwd));
    return PyBytes_FromString(data->FutureAccPwd);
}

static int PyCThostFtdcTransferFutureToBankReqFieldType_set_FutureAccPwd(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccPwd Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferFutureToBankReqField::FutureAccPwd)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccPwd must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferFutureToBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankReqFieldData>(self);
    CThostFtdcTransferFutureToBankReqField *data = &(extra->data);
    // memset(data->FutureAccPwd, 0, sizeof(data->FutureAccPwd));
    // memcpy(data->FutureAccPwd, buf, len);
    strncpy(data->FutureAccPwd, buf, sizeof(data->FutureAccPwd));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种：RMB-人民币 USD-美圆 HKD-港元
/// typedef char TThostFtdcCurrencyCodeType[4]
static PyObject *PyCThostFtdcTransferFutureToBankReqFieldType_get_CurrencyCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferFutureToBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankReqFieldData>(self);
    CThostFtdcTransferFutureToBankReqField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyCode, (Py_ssize_t)sizeof(data->CurrencyCode));
    return PyBytes_FromString(data->CurrencyCode);
}

static int PyCThostFtdcTransferFutureToBankReqFieldType_set_CurrencyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferFutureToBankReqField::CurrencyCode)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyCode must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferFutureToBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankReqFieldData>(self);
    CThostFtdcTransferFutureToBankReqField *data = &(extra->data);
    // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
    // memcpy(data->CurrencyCode, buf, len);
    strncpy(data->CurrencyCode, buf, sizeof(data->CurrencyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTransferFutureToBankReqFieldType_members[] = {
    /// 转账金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "TradeAmt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferFutureToBankReqFieldData, data.TradeAmt),
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
        .offset = offsetof(PyCThostFtdcTransferFutureToBankReqFieldData, data.CustFee),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("客户手续费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTransferFutureToBankReqFieldType_getsets[] = {
    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "FutureAccount",
    .get = PyCThostFtdcTransferFutureToBankReqFieldType_get_FutureAccount,
    .set = PyCThostFtdcTransferFutureToBankReqFieldType_set_FutureAccount,
    .doc = PyDoc_STR("期货资金账户"),
    },
    /// 密码标志
    /// typedef char TThostFtdcFuturePwdFlagType
    {
    .name = "FuturePwdFlag",
    .get = PyCThostFtdcTransferFutureToBankReqFieldType_get_FuturePwdFlag,
    .set = PyCThostFtdcTransferFutureToBankReqFieldType_set_FuturePwdFlag,
    .doc = PyDoc_STR("密码标志"),
    },
    /// 密码
    /// typedef char TThostFtdcFutureAccPwdType[17]
    {
    .name = "FutureAccPwd",
    .get = PyCThostFtdcTransferFutureToBankReqFieldType_get_FutureAccPwd,
    .set = PyCThostFtdcTransferFutureToBankReqFieldType_set_FutureAccPwd,
    .doc = PyDoc_STR("密码"),
    },
    /// 币种：RMB-人民币 USD-美圆 HKD-港元
    /// typedef char TThostFtdcCurrencyCodeType[4]
    {
    .name = "CurrencyCode",
    .get = PyCThostFtdcTransferFutureToBankReqFieldType_get_CurrencyCode,
    .set = PyCThostFtdcTransferFutureToBankReqFieldType_set_CurrencyCode,
    .doc = PyDoc_STR("币种：RMB-人民币 USD-美圆 HKD-港元"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTransferFutureToBankReqFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTransferFutureToBankReqField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期货资金转银行请求，TradeCode=202002")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTransferFutureToBankReqFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTransferFutureToBankReqFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTransferFutureToBankReqFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTransferFutureToBankReqFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTransferFutureToBankReqFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTransferFutureToBankReqFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期货资金转银行请求，TradeCode=202002")},
    {Py_tp_members, PyCThostFtdcTransferFutureToBankReqFieldType_members},
    {Py_tp_getset, PyCThostFtdcTransferFutureToBankReqFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTransferFutureToBankReqFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTransferFutureToBankReqFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTransferFutureToBankReqFieldType_spec = {
    .name = "PyCTP.CThostFtdcTransferFutureToBankReqField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTransferFutureToBankReqFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTransferFutureToBankReqFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTransferFutureToBankReqFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTransferFutureToBankReqFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTransferFutureToBankReqFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTransferFutureToBankReqFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTransferFutureToBankReqFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTransferFutureToBankReqFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTransferFutureToBankReqField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferFutureToBankReqField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}