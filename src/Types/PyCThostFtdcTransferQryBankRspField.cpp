
#include "PyCThostFtdcTransferQryBankRspField.h"

///查询银行资金请求响应

static int PyCThostFtdcTransferQryBankRspFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "RetCode", "RetInfo", "FutureAccount", "TradeAmt", "UseAmt", "FetchAmt", "CurrencyCode", NULL };


    /// 响应代码
    /// typedef char TThostFtdcRetCodeType[5]
    char *CThostFtdcTransferQryBankRspField_RetCode = NULL;
    Py_ssize_t CThostFtdcTransferQryBankRspField_RetCode_length = 0;

    /// 响应信息
    /// typedef char TThostFtdcRetInfoType[129]
    char *CThostFtdcTransferQryBankRspField_RetInfo = NULL;
    Py_ssize_t CThostFtdcTransferQryBankRspField_RetInfo_length = 0;

    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTransferQryBankRspField_FutureAccount = NULL;
    Py_ssize_t CThostFtdcTransferQryBankRspField_FutureAccount_length = 0;

    /// 银行余额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferQryBankRspField_TradeAmt = 0.0;

    /// 银行可用余额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferQryBankRspField_UseAmt = 0.0;

    /// 银行可取余额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferQryBankRspField_FetchAmt = 0.0;

    /// 币种
    /// typedef char TThostFtdcCurrencyCodeType[4]
    char *CThostFtdcTransferQryBankRspField_CurrencyCode = NULL;
    Py_ssize_t CThostFtdcTransferQryBankRspField_CurrencyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#dddy#", (char **)kwlist
        , &CThostFtdcTransferQryBankRspField_RetCode, &CThostFtdcTransferQryBankRspField_RetCode_length
        , &CThostFtdcTransferQryBankRspField_RetInfo, &CThostFtdcTransferQryBankRspField_RetInfo_length
        , &CThostFtdcTransferQryBankRspField_FutureAccount, &CThostFtdcTransferQryBankRspField_FutureAccount_length
        , &CThostFtdcTransferQryBankRspField_TradeAmt
        , &CThostFtdcTransferQryBankRspField_UseAmt
        , &CThostFtdcTransferQryBankRspField_FetchAmt
        , &CThostFtdcTransferQryBankRspField_CurrencyCode, &CThostFtdcTransferQryBankRspField_CurrencyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcTransferQryBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankRspFieldData>(self);
    CThostFtdcTransferQryBankRspField *data = &(extra->data);


    /// 响应代码
    /// typedef char TThostFtdcRetCodeType[5]
    if( CThostFtdcTransferQryBankRspField_RetCode != NULL ) {
        if(CThostFtdcTransferQryBankRspField_RetCode_length >= (Py_ssize_t)sizeof(data->RetCode)) {
            PyErr_Format(PyExc_ValueError, "RetCode too long: length=%zd (max allowed is 4)", CThostFtdcTransferQryBankRspField_RetCode_length);
            return -1;
        }
        // memset(data->RetCode, 0, sizeof(data->RetCode));
        // memcpy(data->RetCode, CThostFtdcTransferQryBankRspField_RetCode, CThostFtdcTransferQryBankRspField_RetCode_length);
        strncpy(data->RetCode, CThostFtdcTransferQryBankRspField_RetCode, sizeof(data->RetCode));
        CThostFtdcTransferQryBankRspField_RetCode = NULL;
    }

    /// 响应信息
    /// typedef char TThostFtdcRetInfoType[129]
    if( CThostFtdcTransferQryBankRspField_RetInfo != NULL ) {
        if(CThostFtdcTransferQryBankRspField_RetInfo_length >= (Py_ssize_t)sizeof(data->RetInfo)) {
            PyErr_Format(PyExc_ValueError, "RetInfo too long: length=%zd (max allowed is 128)", CThostFtdcTransferQryBankRspField_RetInfo_length);
            return -1;
        }
        // memset(data->RetInfo, 0, sizeof(data->RetInfo));
        // memcpy(data->RetInfo, CThostFtdcTransferQryBankRspField_RetInfo, CThostFtdcTransferQryBankRspField_RetInfo_length);
        strncpy(data->RetInfo, CThostFtdcTransferQryBankRspField_RetInfo, sizeof(data->RetInfo));
        CThostFtdcTransferQryBankRspField_RetInfo = NULL;
    }

    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTransferQryBankRspField_FutureAccount != NULL ) {
        if(CThostFtdcTransferQryBankRspField_FutureAccount_length >= (Py_ssize_t)sizeof(data->FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is 12)", CThostFtdcTransferQryBankRspField_FutureAccount_length);
            return -1;
        }
        // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
        // memcpy(data->FutureAccount, CThostFtdcTransferQryBankRspField_FutureAccount, CThostFtdcTransferQryBankRspField_FutureAccount_length);
        strncpy(data->FutureAccount, CThostFtdcTransferQryBankRspField_FutureAccount, sizeof(data->FutureAccount));
        CThostFtdcTransferQryBankRspField_FutureAccount = NULL;
    }

    /// 银行余额
    /// typedef double TThostFtdcMoneyType
    data->TradeAmt = CThostFtdcTransferQryBankRspField_TradeAmt;

    /// 银行可用余额
    /// typedef double TThostFtdcMoneyType
    data->UseAmt = CThostFtdcTransferQryBankRspField_UseAmt;

    /// 银行可取余额
    /// typedef double TThostFtdcMoneyType
    data->FetchAmt = CThostFtdcTransferQryBankRspField_FetchAmt;

    /// 币种
    /// typedef char TThostFtdcCurrencyCodeType[4]
    if( CThostFtdcTransferQryBankRspField_CurrencyCode != NULL ) {
        if(CThostFtdcTransferQryBankRspField_CurrencyCode_length >= (Py_ssize_t)sizeof(data->CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is 3)", CThostFtdcTransferQryBankRspField_CurrencyCode_length);
            return -1;
        }
        // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
        // memcpy(data->CurrencyCode, CThostFtdcTransferQryBankRspField_CurrencyCode, CThostFtdcTransferQryBankRspField_CurrencyCode_length);
        strncpy(data->CurrencyCode, CThostFtdcTransferQryBankRspField_CurrencyCode, sizeof(data->CurrencyCode));
        CThostFtdcTransferQryBankRspField_CurrencyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTransferQryBankRspFieldType_repr(PyObject *self) {

    PyCThostFtdcTransferQryBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankRspFieldData>(self);
    CThostFtdcTransferQryBankRspField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:d,s:y}"
        , "RetCode", data->RetCode//, (Py_ssize_t)sizeof(data->RetCode)
        , "RetInfo", data->RetInfo//, (Py_ssize_t)sizeof(data->RetInfo)
        , "FutureAccount", data->FutureAccount//, (Py_ssize_t)sizeof(data->FutureAccount)
        , "TradeAmt", data->TradeAmt
        , "UseAmt", data->UseAmt
        , "FetchAmt", data->FetchAmt
        , "CurrencyCode", data->CurrencyCode//, (Py_ssize_t)sizeof(data->CurrencyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryBankRspField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryBankRspField repr");
        return NULL;
    }

    return repr;
}


/// 响应代码
/// typedef char TThostFtdcRetCodeType[5]
static PyObject *PyCThostFtdcTransferQryBankRspFieldType_get_RetCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankRspFieldData>(self);
    CThostFtdcTransferQryBankRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RetCode, (Py_ssize_t)sizeof(data->RetCode));
    return PyBytes_FromString(data->RetCode);
}

static int PyCThostFtdcTransferQryBankRspFieldType_set_RetCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RetCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryBankRspField::RetCode)) {
        PyErr_SetString(PyExc_ValueError, "RetCode must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankRspFieldData>(self);
    CThostFtdcTransferQryBankRspField *data = &(extra->data);
    // memset(data->RetCode, 0, sizeof(data->RetCode));
    // memcpy(data->RetCode, buf, len);
    strncpy(data->RetCode, buf, sizeof(data->RetCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 响应信息
/// typedef char TThostFtdcRetInfoType[129]
static PyObject *PyCThostFtdcTransferQryBankRspFieldType_get_RetInfo(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankRspFieldData>(self);
    CThostFtdcTransferQryBankRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RetInfo, (Py_ssize_t)sizeof(data->RetInfo));
    return PyBytes_FromString(data->RetInfo);
}

static int PyCThostFtdcTransferQryBankRspFieldType_set_RetInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RetInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryBankRspField::RetInfo)) {
        PyErr_SetString(PyExc_ValueError, "RetInfo must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankRspFieldData>(self);
    CThostFtdcTransferQryBankRspField *data = &(extra->data);
    // memset(data->RetInfo, 0, sizeof(data->RetInfo));
    // memcpy(data->RetInfo, buf, len);
    strncpy(data->RetInfo, buf, sizeof(data->RetInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账户
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTransferQryBankRspFieldType_get_FutureAccount(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankRspFieldData>(self);
    CThostFtdcTransferQryBankRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureAccount, (Py_ssize_t)sizeof(data->FutureAccount));
    return PyBytes_FromString(data->FutureAccount);
}

static int PyCThostFtdcTransferQryBankRspFieldType_set_FutureAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryBankRspField::FutureAccount)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankRspFieldData>(self);
    CThostFtdcTransferQryBankRspField *data = &(extra->data);
    // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
    // memcpy(data->FutureAccount, buf, len);
    strncpy(data->FutureAccount, buf, sizeof(data->FutureAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种
/// typedef char TThostFtdcCurrencyCodeType[4]
static PyObject *PyCThostFtdcTransferQryBankRspFieldType_get_CurrencyCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankRspFieldData>(self);
    CThostFtdcTransferQryBankRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyCode, (Py_ssize_t)sizeof(data->CurrencyCode));
    return PyBytes_FromString(data->CurrencyCode);
}

static int PyCThostFtdcTransferQryBankRspFieldType_set_CurrencyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryBankRspField::CurrencyCode)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyCode must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryBankRspFieldData>(self);
    CThostFtdcTransferQryBankRspField *data = &(extra->data);
    // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
    // memcpy(data->CurrencyCode, buf, len);
    strncpy(data->CurrencyCode, buf, sizeof(data->CurrencyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTransferQryBankRspFieldType_members[] = {
    /// 银行余额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "TradeAmt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferQryBankRspFieldData, data.TradeAmt),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("银行余额")
    },
    /// 银行可用余额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "UseAmt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferQryBankRspFieldData, data.UseAmt),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("银行可用余额")
    },
    /// 银行可取余额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FetchAmt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferQryBankRspFieldData, data.FetchAmt),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("银行可取余额")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTransferQryBankRspFieldType_getsets[] = {
    /// 响应代码
    /// typedef char TThostFtdcRetCodeType[5]
    {
    .name = "RetCode",
    .get = PyCThostFtdcTransferQryBankRspFieldType_get_RetCode,
    .set = PyCThostFtdcTransferQryBankRspFieldType_set_RetCode,
    .doc = PyDoc_STR("响应代码"),
    },
    /// 响应信息
    /// typedef char TThostFtdcRetInfoType[129]
    {
    .name = "RetInfo",
    .get = PyCThostFtdcTransferQryBankRspFieldType_get_RetInfo,
    .set = PyCThostFtdcTransferQryBankRspFieldType_set_RetInfo,
    .doc = PyDoc_STR("响应信息"),
    },
    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "FutureAccount",
    .get = PyCThostFtdcTransferQryBankRspFieldType_get_FutureAccount,
    .set = PyCThostFtdcTransferQryBankRspFieldType_set_FutureAccount,
    .doc = PyDoc_STR("资金账户"),
    },
    /// 币种
    /// typedef char TThostFtdcCurrencyCodeType[4]
    {
    .name = "CurrencyCode",
    .get = PyCThostFtdcTransferQryBankRspFieldType_get_CurrencyCode,
    .set = PyCThostFtdcTransferQryBankRspFieldType_set_CurrencyCode,
    .doc = PyDoc_STR("币种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTransferQryBankRspFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTransferQryBankRspField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询银行资金请求响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTransferQryBankRspFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTransferQryBankRspFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTransferQryBankRspFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTransferQryBankRspFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTransferQryBankRspFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTransferQryBankRspFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询银行资金请求响应")},
    {Py_tp_members, PyCThostFtdcTransferQryBankRspFieldType_members},
    {Py_tp_getset, PyCThostFtdcTransferQryBankRspFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTransferQryBankRspFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTransferQryBankRspFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTransferQryBankRspFieldType_spec = {
    .name = "PyCTP.CThostFtdcTransferQryBankRspField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTransferQryBankRspFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTransferQryBankRspFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTransferQryBankRspFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTransferQryBankRspFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTransferQryBankRspFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTransferQryBankRspFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTransferQryBankRspFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTransferQryBankRspFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTransferQryBankRspField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferQryBankRspField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}