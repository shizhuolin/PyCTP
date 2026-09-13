
#include "PyCThostFtdcTransferBankToFutureRspField.h"

///银行资金转期货请求响应

static int PyCThostFtdcTransferBankToFutureRspFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "RetCode", "RetInfo", "FutureAccount", "TradeAmt", "CustFee", "CurrencyCode", NULL };


    /// 响应代码
    /// typedef char TThostFtdcRetCodeType[5]
    char *CThostFtdcTransferBankToFutureRspField_RetCode = NULL;
    Py_ssize_t CThostFtdcTransferBankToFutureRspField_RetCode_length = 0;

    /// 响应信息
    /// typedef char TThostFtdcRetInfoType[129]
    char *CThostFtdcTransferBankToFutureRspField_RetInfo = NULL;
    Py_ssize_t CThostFtdcTransferBankToFutureRspField_RetInfo_length = 0;

    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTransferBankToFutureRspField_FutureAccount = NULL;
    Py_ssize_t CThostFtdcTransferBankToFutureRspField_FutureAccount_length = 0;

    /// 转帐金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferBankToFutureRspField_TradeAmt = 0.0;

    /// 应收客户手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferBankToFutureRspField_CustFee = 0.0;

    /// 币种
    /// typedef char TThostFtdcCurrencyCodeType[4]
    char *CThostFtdcTransferBankToFutureRspField_CurrencyCode = NULL;
    Py_ssize_t CThostFtdcTransferBankToFutureRspField_CurrencyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddy#", (char **)kwlist
        , &CThostFtdcTransferBankToFutureRspField_RetCode, &CThostFtdcTransferBankToFutureRspField_RetCode_length
        , &CThostFtdcTransferBankToFutureRspField_RetInfo, &CThostFtdcTransferBankToFutureRspField_RetInfo_length
        , &CThostFtdcTransferBankToFutureRspField_FutureAccount, &CThostFtdcTransferBankToFutureRspField_FutureAccount_length
        , &CThostFtdcTransferBankToFutureRspField_TradeAmt
        , &CThostFtdcTransferBankToFutureRspField_CustFee
        , &CThostFtdcTransferBankToFutureRspField_CurrencyCode, &CThostFtdcTransferBankToFutureRspField_CurrencyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcTransferBankToFutureRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureRspFieldData>(self);
    CThostFtdcTransferBankToFutureRspField *data = &(extra->data);


    /// 响应代码
    /// typedef char TThostFtdcRetCodeType[5]
    if( CThostFtdcTransferBankToFutureRspField_RetCode != NULL ) {
        if(CThostFtdcTransferBankToFutureRspField_RetCode_length >= (Py_ssize_t)sizeof(data->RetCode)) {
            PyErr_Format(PyExc_ValueError, "RetCode too long: length=%zd (max allowed is 4)", CThostFtdcTransferBankToFutureRspField_RetCode_length);
            return -1;
        }
        // memset(data->RetCode, 0, sizeof(data->RetCode));
        // memcpy(data->RetCode, CThostFtdcTransferBankToFutureRspField_RetCode, CThostFtdcTransferBankToFutureRspField_RetCode_length);
        strncpy(data->RetCode, CThostFtdcTransferBankToFutureRspField_RetCode, sizeof(data->RetCode));
        CThostFtdcTransferBankToFutureRspField_RetCode = NULL;
    }

    /// 响应信息
    /// typedef char TThostFtdcRetInfoType[129]
    if( CThostFtdcTransferBankToFutureRspField_RetInfo != NULL ) {
        if(CThostFtdcTransferBankToFutureRspField_RetInfo_length >= (Py_ssize_t)sizeof(data->RetInfo)) {
            PyErr_Format(PyExc_ValueError, "RetInfo too long: length=%zd (max allowed is 128)", CThostFtdcTransferBankToFutureRspField_RetInfo_length);
            return -1;
        }
        // memset(data->RetInfo, 0, sizeof(data->RetInfo));
        // memcpy(data->RetInfo, CThostFtdcTransferBankToFutureRspField_RetInfo, CThostFtdcTransferBankToFutureRspField_RetInfo_length);
        strncpy(data->RetInfo, CThostFtdcTransferBankToFutureRspField_RetInfo, sizeof(data->RetInfo));
        CThostFtdcTransferBankToFutureRspField_RetInfo = NULL;
    }

    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTransferBankToFutureRspField_FutureAccount != NULL ) {
        if(CThostFtdcTransferBankToFutureRspField_FutureAccount_length >= (Py_ssize_t)sizeof(data->FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is 12)", CThostFtdcTransferBankToFutureRspField_FutureAccount_length);
            return -1;
        }
        // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
        // memcpy(data->FutureAccount, CThostFtdcTransferBankToFutureRspField_FutureAccount, CThostFtdcTransferBankToFutureRspField_FutureAccount_length);
        strncpy(data->FutureAccount, CThostFtdcTransferBankToFutureRspField_FutureAccount, sizeof(data->FutureAccount));
        CThostFtdcTransferBankToFutureRspField_FutureAccount = NULL;
    }

    /// 转帐金额
    /// typedef double TThostFtdcMoneyType
    data->TradeAmt = CThostFtdcTransferBankToFutureRspField_TradeAmt;

    /// 应收客户手续费
    /// typedef double TThostFtdcMoneyType
    data->CustFee = CThostFtdcTransferBankToFutureRspField_CustFee;

    /// 币种
    /// typedef char TThostFtdcCurrencyCodeType[4]
    if( CThostFtdcTransferBankToFutureRspField_CurrencyCode != NULL ) {
        if(CThostFtdcTransferBankToFutureRspField_CurrencyCode_length >= (Py_ssize_t)sizeof(data->CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is 3)", CThostFtdcTransferBankToFutureRspField_CurrencyCode_length);
            return -1;
        }
        // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
        // memcpy(data->CurrencyCode, CThostFtdcTransferBankToFutureRspField_CurrencyCode, CThostFtdcTransferBankToFutureRspField_CurrencyCode_length);
        strncpy(data->CurrencyCode, CThostFtdcTransferBankToFutureRspField_CurrencyCode, sizeof(data->CurrencyCode));
        CThostFtdcTransferBankToFutureRspField_CurrencyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTransferBankToFutureRspFieldType_repr(PyObject *self) {

    PyCThostFtdcTransferBankToFutureRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureRspFieldData>(self);
    CThostFtdcTransferBankToFutureRspField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:y}"
        , "RetCode", data->RetCode//, (Py_ssize_t)sizeof(data->RetCode)
        , "RetInfo", data->RetInfo//, (Py_ssize_t)sizeof(data->RetInfo)
        , "FutureAccount", data->FutureAccount//, (Py_ssize_t)sizeof(data->FutureAccount)
        , "TradeAmt", data->TradeAmt
        , "CustFee", data->CustFee
        , "CurrencyCode", data->CurrencyCode//, (Py_ssize_t)sizeof(data->CurrencyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankToFutureRspField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankToFutureRspField repr");
        return NULL;
    }

    return repr;
}


/// 响应代码
/// typedef char TThostFtdcRetCodeType[5]
static PyObject *PyCThostFtdcTransferBankToFutureRspFieldType_get_RetCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferBankToFutureRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureRspFieldData>(self);
    CThostFtdcTransferBankToFutureRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RetCode, (Py_ssize_t)sizeof(data->RetCode));
    return PyBytes_FromString(data->RetCode);
}

static int PyCThostFtdcTransferBankToFutureRspFieldType_set_RetCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RetCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferBankToFutureRspField::RetCode)) {
        PyErr_SetString(PyExc_ValueError, "RetCode must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferBankToFutureRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureRspFieldData>(self);
    CThostFtdcTransferBankToFutureRspField *data = &(extra->data);
    // memset(data->RetCode, 0, sizeof(data->RetCode));
    // memcpy(data->RetCode, buf, len);
    strncpy(data->RetCode, buf, sizeof(data->RetCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 响应信息
/// typedef char TThostFtdcRetInfoType[129]
static PyObject *PyCThostFtdcTransferBankToFutureRspFieldType_get_RetInfo(PyObject *self, void *closure) {
    PyCThostFtdcTransferBankToFutureRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureRspFieldData>(self);
    CThostFtdcTransferBankToFutureRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RetInfo, (Py_ssize_t)sizeof(data->RetInfo));
    return PyBytes_FromString(data->RetInfo);
}

static int PyCThostFtdcTransferBankToFutureRspFieldType_set_RetInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RetInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferBankToFutureRspField::RetInfo)) {
        PyErr_SetString(PyExc_ValueError, "RetInfo must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferBankToFutureRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureRspFieldData>(self);
    CThostFtdcTransferBankToFutureRspField *data = &(extra->data);
    // memset(data->RetInfo, 0, sizeof(data->RetInfo));
    // memcpy(data->RetInfo, buf, len);
    strncpy(data->RetInfo, buf, sizeof(data->RetInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账户
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTransferBankToFutureRspFieldType_get_FutureAccount(PyObject *self, void *closure) {
    PyCThostFtdcTransferBankToFutureRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureRspFieldData>(self);
    CThostFtdcTransferBankToFutureRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureAccount, (Py_ssize_t)sizeof(data->FutureAccount));
    return PyBytes_FromString(data->FutureAccount);
}

static int PyCThostFtdcTransferBankToFutureRspFieldType_set_FutureAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferBankToFutureRspField::FutureAccount)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferBankToFutureRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureRspFieldData>(self);
    CThostFtdcTransferBankToFutureRspField *data = &(extra->data);
    // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
    // memcpy(data->FutureAccount, buf, len);
    strncpy(data->FutureAccount, buf, sizeof(data->FutureAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种
/// typedef char TThostFtdcCurrencyCodeType[4]
static PyObject *PyCThostFtdcTransferBankToFutureRspFieldType_get_CurrencyCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferBankToFutureRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureRspFieldData>(self);
    CThostFtdcTransferBankToFutureRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyCode, (Py_ssize_t)sizeof(data->CurrencyCode));
    return PyBytes_FromString(data->CurrencyCode);
}

static int PyCThostFtdcTransferBankToFutureRspFieldType_set_CurrencyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferBankToFutureRspField::CurrencyCode)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyCode must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferBankToFutureRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankToFutureRspFieldData>(self);
    CThostFtdcTransferBankToFutureRspField *data = &(extra->data);
    // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
    // memcpy(data->CurrencyCode, buf, len);
    strncpy(data->CurrencyCode, buf, sizeof(data->CurrencyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTransferBankToFutureRspFieldType_members[] = {
    /// 转帐金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "TradeAmt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferBankToFutureRspFieldData, data.TradeAmt),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("转帐金额")
    },
    /// 应收客户手续费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CustFee",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferBankToFutureRspFieldData, data.CustFee),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("应收客户手续费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTransferBankToFutureRspFieldType_getsets[] = {
    /// 响应代码
    /// typedef char TThostFtdcRetCodeType[5]
    {
    .name = "RetCode",
    .get = PyCThostFtdcTransferBankToFutureRspFieldType_get_RetCode,
    .set = PyCThostFtdcTransferBankToFutureRspFieldType_set_RetCode,
    .doc = PyDoc_STR("响应代码"),
    },
    /// 响应信息
    /// typedef char TThostFtdcRetInfoType[129]
    {
    .name = "RetInfo",
    .get = PyCThostFtdcTransferBankToFutureRspFieldType_get_RetInfo,
    .set = PyCThostFtdcTransferBankToFutureRspFieldType_set_RetInfo,
    .doc = PyDoc_STR("响应信息"),
    },
    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "FutureAccount",
    .get = PyCThostFtdcTransferBankToFutureRspFieldType_get_FutureAccount,
    .set = PyCThostFtdcTransferBankToFutureRspFieldType_set_FutureAccount,
    .doc = PyDoc_STR("资金账户"),
    },
    /// 币种
    /// typedef char TThostFtdcCurrencyCodeType[4]
    {
    .name = "CurrencyCode",
    .get = PyCThostFtdcTransferBankToFutureRspFieldType_get_CurrencyCode,
    .set = PyCThostFtdcTransferBankToFutureRspFieldType_set_CurrencyCode,
    .doc = PyDoc_STR("币种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTransferBankToFutureRspFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTransferBankToFutureRspField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("银行资金转期货请求响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTransferBankToFutureRspFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTransferBankToFutureRspFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTransferBankToFutureRspFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTransferBankToFutureRspFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTransferBankToFutureRspFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTransferBankToFutureRspFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("银行资金转期货请求响应")},
    {Py_tp_members, PyCThostFtdcTransferBankToFutureRspFieldType_members},
    {Py_tp_getset, PyCThostFtdcTransferBankToFutureRspFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTransferBankToFutureRspFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTransferBankToFutureRspFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTransferBankToFutureRspFieldType_spec = {
    .name = "PyCTP.CThostFtdcTransferBankToFutureRspField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTransferBankToFutureRspFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTransferBankToFutureRspFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTransferBankToFutureRspFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTransferBankToFutureRspFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTransferBankToFutureRspFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTransferBankToFutureRspFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTransferBankToFutureRspFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTransferBankToFutureRspFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTransferBankToFutureRspField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferBankToFutureRspField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}