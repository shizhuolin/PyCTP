
#include "PyCThostFtdcTransferQryBankReqField.h"

///查询银行资金请求，TradeCode=204002

static int PyCThostFtdcTransferQryBankReqFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FutureAccount", "FuturePwdFlag", "FutureAccPwd", "CurrencyCode", NULL };


    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTransferQryBankReqField_FutureAccount = NULL;
    Py_ssize_t CThostFtdcTransferQryBankReqField_FutureAccount_length = 0;

    /// 密码标志
    /// typedef char TThostFtdcFuturePwdFlagType
    char CThostFtdcTransferQryBankReqField_FuturePwdFlag = 0;

    /// 密码
    /// typedef char TThostFtdcFutureAccPwdType[17]
    char *CThostFtdcTransferQryBankReqField_FutureAccPwd = NULL;
    Py_ssize_t CThostFtdcTransferQryBankReqField_FutureAccPwd_length = 0;

    /// 币种：RMB-人民币 USD-美圆 HKD-港元
    /// typedef char TThostFtdcCurrencyCodeType[4]
    char *CThostFtdcTransferQryBankReqField_CurrencyCode = NULL;
    Py_ssize_t CThostFtdcTransferQryBankReqField_CurrencyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#", (char **)kwlist
        , &CThostFtdcTransferQryBankReqField_FutureAccount, &CThostFtdcTransferQryBankReqField_FutureAccount_length
        , &CThostFtdcTransferQryBankReqField_FuturePwdFlag
        , &CThostFtdcTransferQryBankReqField_FutureAccPwd, &CThostFtdcTransferQryBankReqField_FutureAccPwd_length
        , &CThostFtdcTransferQryBankReqField_CurrencyCode, &CThostFtdcTransferQryBankReqField_CurrencyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcTransferQryBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankReqFieldData>(self);
    CThostFtdcTransferQryBankReqField *data = &(extra->data);


    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTransferQryBankReqField_FutureAccount != NULL ) {
        if(CThostFtdcTransferQryBankReqField_FutureAccount_length >= (Py_ssize_t)sizeof(data->FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is 12)", CThostFtdcTransferQryBankReqField_FutureAccount_length);
            return -1;
        }
        // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
        // memcpy(data->FutureAccount, CThostFtdcTransferQryBankReqField_FutureAccount, CThostFtdcTransferQryBankReqField_FutureAccount_length);
        strncpy(data->FutureAccount, CThostFtdcTransferQryBankReqField_FutureAccount, sizeof(data->FutureAccount));
        CThostFtdcTransferQryBankReqField_FutureAccount = NULL;
    }

    /// 密码标志
    /// typedef char TThostFtdcFuturePwdFlagType
    data->FuturePwdFlag = CThostFtdcTransferQryBankReqField_FuturePwdFlag;

    /// 密码
    /// typedef char TThostFtdcFutureAccPwdType[17]
    if( CThostFtdcTransferQryBankReqField_FutureAccPwd != NULL ) {
        if(CThostFtdcTransferQryBankReqField_FutureAccPwd_length >= (Py_ssize_t)sizeof(data->FutureAccPwd)) {
            PyErr_Format(PyExc_ValueError, "FutureAccPwd too long: length=%zd (max allowed is 16)", CThostFtdcTransferQryBankReqField_FutureAccPwd_length);
            return -1;
        }
        // memset(data->FutureAccPwd, 0, sizeof(data->FutureAccPwd));
        // memcpy(data->FutureAccPwd, CThostFtdcTransferQryBankReqField_FutureAccPwd, CThostFtdcTransferQryBankReqField_FutureAccPwd_length);
        strncpy(data->FutureAccPwd, CThostFtdcTransferQryBankReqField_FutureAccPwd, sizeof(data->FutureAccPwd));
        CThostFtdcTransferQryBankReqField_FutureAccPwd = NULL;
    }

    /// 币种：RMB-人民币 USD-美圆 HKD-港元
    /// typedef char TThostFtdcCurrencyCodeType[4]
    if( CThostFtdcTransferQryBankReqField_CurrencyCode != NULL ) {
        if(CThostFtdcTransferQryBankReqField_CurrencyCode_length >= (Py_ssize_t)sizeof(data->CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is 3)", CThostFtdcTransferQryBankReqField_CurrencyCode_length);
            return -1;
        }
        // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
        // memcpy(data->CurrencyCode, CThostFtdcTransferQryBankReqField_CurrencyCode, CThostFtdcTransferQryBankReqField_CurrencyCode_length);
        strncpy(data->CurrencyCode, CThostFtdcTransferQryBankReqField_CurrencyCode, sizeof(data->CurrencyCode));
        CThostFtdcTransferQryBankReqField_CurrencyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTransferQryBankReqFieldType_repr(PyObject *self) {

    PyCThostFtdcTransferQryBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankReqFieldData>(self);
    CThostFtdcTransferQryBankReqField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y}"
        , "FutureAccount", data->FutureAccount//, (Py_ssize_t)sizeof(data->FutureAccount)
        , "FuturePwdFlag", data->FuturePwdFlag
        , "FutureAccPwd", data->FutureAccPwd//, (Py_ssize_t)sizeof(data->FutureAccPwd)
        , "CurrencyCode", data->CurrencyCode//, (Py_ssize_t)sizeof(data->CurrencyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryBankReqField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryBankReqField repr");
        return NULL;
    }

    return repr;
}


/// 期货资金账户
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTransferQryBankReqFieldType_get_FutureAccount(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankReqFieldData>(self);
    CThostFtdcTransferQryBankReqField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureAccount, (Py_ssize_t)sizeof(data->FutureAccount));
    return PyBytes_FromString(data->FutureAccount);
}

static int PyCThostFtdcTransferQryBankReqFieldType_set_FutureAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryBankReqField::FutureAccount)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankReqFieldData>(self);
    CThostFtdcTransferQryBankReqField *data = &(extra->data);
    // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
    // memcpy(data->FutureAccount, buf, len);
    strncpy(data->FutureAccount, buf, sizeof(data->FutureAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码标志
/// typedef char TThostFtdcFuturePwdFlagType
static PyObject *PyCThostFtdcTransferQryBankReqFieldType_get_FuturePwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankReqFieldData>(self);
    CThostFtdcTransferQryBankReqField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FuturePwdFlag), 1);
}

static int PyCThostFtdcTransferQryBankReqFieldType_set_FuturePwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FuturePwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTransferQryBankReqField::FuturePwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "FuturePwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankReqFieldData>(self);
    CThostFtdcTransferQryBankReqField *data = &(extra->data);
    data->FuturePwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcFutureAccPwdType[17]
static PyObject *PyCThostFtdcTransferQryBankReqFieldType_get_FutureAccPwd(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankReqFieldData>(self);
    CThostFtdcTransferQryBankReqField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureAccPwd, (Py_ssize_t)sizeof(data->FutureAccPwd));
    return PyBytes_FromString(data->FutureAccPwd);
}

static int PyCThostFtdcTransferQryBankReqFieldType_set_FutureAccPwd(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccPwd Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryBankReqField::FutureAccPwd)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccPwd must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankReqFieldData>(self);
    CThostFtdcTransferQryBankReqField *data = &(extra->data);
    // memset(data->FutureAccPwd, 0, sizeof(data->FutureAccPwd));
    // memcpy(data->FutureAccPwd, buf, len);
    strncpy(data->FutureAccPwd, buf, sizeof(data->FutureAccPwd));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种：RMB-人民币 USD-美圆 HKD-港元
/// typedef char TThostFtdcCurrencyCodeType[4]
static PyObject *PyCThostFtdcTransferQryBankReqFieldType_get_CurrencyCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankReqFieldData>(self);
    CThostFtdcTransferQryBankReqField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyCode, (Py_ssize_t)sizeof(data->CurrencyCode));
    return PyBytes_FromString(data->CurrencyCode);
}

static int PyCThostFtdcTransferQryBankReqFieldType_set_CurrencyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryBankReqField::CurrencyCode)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyCode must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryBankReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankReqFieldData>(self);
    CThostFtdcTransferQryBankReqField *data = &(extra->data);
    // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
    // memcpy(data->CurrencyCode, buf, len);
    strncpy(data->CurrencyCode, buf, sizeof(data->CurrencyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTransferQryBankReqFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTransferQryBankReqFieldType_getsets[] = {
    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "FutureAccount",
    .get = PyCThostFtdcTransferQryBankReqFieldType_get_FutureAccount,
    .set = PyCThostFtdcTransferQryBankReqFieldType_set_FutureAccount,
    .doc = PyDoc_STR("期货资金账户"),
    },
    /// 密码标志
    /// typedef char TThostFtdcFuturePwdFlagType
    {
    .name = "FuturePwdFlag",
    .get = PyCThostFtdcTransferQryBankReqFieldType_get_FuturePwdFlag,
    .set = PyCThostFtdcTransferQryBankReqFieldType_set_FuturePwdFlag,
    .doc = PyDoc_STR("密码标志"),
    },
    /// 密码
    /// typedef char TThostFtdcFutureAccPwdType[17]
    {
    .name = "FutureAccPwd",
    .get = PyCThostFtdcTransferQryBankReqFieldType_get_FutureAccPwd,
    .set = PyCThostFtdcTransferQryBankReqFieldType_set_FutureAccPwd,
    .doc = PyDoc_STR("密码"),
    },
    /// 币种：RMB-人民币 USD-美圆 HKD-港元
    /// typedef char TThostFtdcCurrencyCodeType[4]
    {
    .name = "CurrencyCode",
    .get = PyCThostFtdcTransferQryBankReqFieldType_get_CurrencyCode,
    .set = PyCThostFtdcTransferQryBankReqFieldType_set_CurrencyCode,
    .doc = PyDoc_STR("币种：RMB-人民币 USD-美圆 HKD-港元"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTransferQryBankReqFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTransferQryBankReqField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询银行资金请求，TradeCode=204002")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTransferQryBankReqFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTransferQryBankReqFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTransferQryBankReqFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTransferQryBankReqFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTransferQryBankReqFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTransferQryBankReqFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询银行资金请求，TradeCode=204002")},
    {Py_tp_members, PyCThostFtdcTransferQryBankReqFieldType_members},
    {Py_tp_getset, PyCThostFtdcTransferQryBankReqFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTransferQryBankReqFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTransferQryBankReqFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTransferQryBankReqFieldType_spec = {
    .name = "PyCTP.CThostFtdcTransferQryBankReqField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTransferQryBankReqFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTransferQryBankReqFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTransferQryBankReqFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTransferQryBankReqFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTransferQryBankReqFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTransferQryBankReqFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTransferQryBankReqFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTransferQryBankReqFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTransferQryBankReqField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferQryBankReqField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}