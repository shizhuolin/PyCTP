
#include "PyCThostFtdcTransferFutureToBankRspField.h"

///期货资金转银行请求响应

static int PyCThostFtdcTransferFutureToBankRspFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "RetCode", "RetInfo", "FutureAccount", "TradeAmt", "CustFee", "CurrencyCode", NULL };


    /// 响应代码
    /// typedef char TThostFtdcRetCodeType[5]
    char *CThostFtdcTransferFutureToBankRspField_RetCode = NULL;
    Py_ssize_t CThostFtdcTransferFutureToBankRspField_RetCode_length = 0;

    /// 响应信息
    /// typedef char TThostFtdcRetInfoType[129]
    char *CThostFtdcTransferFutureToBankRspField_RetInfo = NULL;
    Py_ssize_t CThostFtdcTransferFutureToBankRspField_RetInfo_length = 0;

    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTransferFutureToBankRspField_FutureAccount = NULL;
    Py_ssize_t CThostFtdcTransferFutureToBankRspField_FutureAccount_length = 0;

    /// 转帐金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferFutureToBankRspField_TradeAmt = 0.0;

    /// 应收客户手续费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferFutureToBankRspField_CustFee = 0.0;

    /// 币种
    /// typedef char TThostFtdcCurrencyCodeType[4]
    char *CThostFtdcTransferFutureToBankRspField_CurrencyCode = NULL;
    Py_ssize_t CThostFtdcTransferFutureToBankRspField_CurrencyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddy#", (char **)kwlist
        , &CThostFtdcTransferFutureToBankRspField_RetCode, &CThostFtdcTransferFutureToBankRspField_RetCode_length
        , &CThostFtdcTransferFutureToBankRspField_RetInfo, &CThostFtdcTransferFutureToBankRspField_RetInfo_length
        , &CThostFtdcTransferFutureToBankRspField_FutureAccount, &CThostFtdcTransferFutureToBankRspField_FutureAccount_length
        , &CThostFtdcTransferFutureToBankRspField_TradeAmt
        , &CThostFtdcTransferFutureToBankRspField_CustFee
        , &CThostFtdcTransferFutureToBankRspField_CurrencyCode, &CThostFtdcTransferFutureToBankRspField_CurrencyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcTransferFutureToBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankRspFieldData>(self);
    CThostFtdcTransferFutureToBankRspField *data = &(extra->data);


    /// 响应代码
    /// typedef char TThostFtdcRetCodeType[5]
    if( CThostFtdcTransferFutureToBankRspField_RetCode != NULL ) {
        if(CThostFtdcTransferFutureToBankRspField_RetCode_length >= (Py_ssize_t)sizeof(data->RetCode)) {
            PyErr_Format(PyExc_ValueError, "RetCode too long: length=%zd (max allowed is 4)", CThostFtdcTransferFutureToBankRspField_RetCode_length);
            return -1;
        }
        // memset(data->RetCode, 0, sizeof(data->RetCode));
        // memcpy(data->RetCode, CThostFtdcTransferFutureToBankRspField_RetCode, CThostFtdcTransferFutureToBankRspField_RetCode_length);
        strncpy(data->RetCode, CThostFtdcTransferFutureToBankRspField_RetCode, sizeof(data->RetCode));
        CThostFtdcTransferFutureToBankRspField_RetCode = NULL;
    }

    /// 响应信息
    /// typedef char TThostFtdcRetInfoType[129]
    if( CThostFtdcTransferFutureToBankRspField_RetInfo != NULL ) {
        if(CThostFtdcTransferFutureToBankRspField_RetInfo_length >= (Py_ssize_t)sizeof(data->RetInfo)) {
            PyErr_Format(PyExc_ValueError, "RetInfo too long: length=%zd (max allowed is 128)", CThostFtdcTransferFutureToBankRspField_RetInfo_length);
            return -1;
        }
        // memset(data->RetInfo, 0, sizeof(data->RetInfo));
        // memcpy(data->RetInfo, CThostFtdcTransferFutureToBankRspField_RetInfo, CThostFtdcTransferFutureToBankRspField_RetInfo_length);
        strncpy(data->RetInfo, CThostFtdcTransferFutureToBankRspField_RetInfo, sizeof(data->RetInfo));
        CThostFtdcTransferFutureToBankRspField_RetInfo = NULL;
    }

    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTransferFutureToBankRspField_FutureAccount != NULL ) {
        if(CThostFtdcTransferFutureToBankRspField_FutureAccount_length >= (Py_ssize_t)sizeof(data->FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is 12)", CThostFtdcTransferFutureToBankRspField_FutureAccount_length);
            return -1;
        }
        // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
        // memcpy(data->FutureAccount, CThostFtdcTransferFutureToBankRspField_FutureAccount, CThostFtdcTransferFutureToBankRspField_FutureAccount_length);
        strncpy(data->FutureAccount, CThostFtdcTransferFutureToBankRspField_FutureAccount, sizeof(data->FutureAccount));
        CThostFtdcTransferFutureToBankRspField_FutureAccount = NULL;
    }

    /// 转帐金额
    /// typedef double TThostFtdcMoneyType
    data->TradeAmt = CThostFtdcTransferFutureToBankRspField_TradeAmt;

    /// 应收客户手续费
    /// typedef double TThostFtdcMoneyType
    data->CustFee = CThostFtdcTransferFutureToBankRspField_CustFee;

    /// 币种
    /// typedef char TThostFtdcCurrencyCodeType[4]
    if( CThostFtdcTransferFutureToBankRspField_CurrencyCode != NULL ) {
        if(CThostFtdcTransferFutureToBankRspField_CurrencyCode_length >= (Py_ssize_t)sizeof(data->CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is 3)", CThostFtdcTransferFutureToBankRspField_CurrencyCode_length);
            return -1;
        }
        // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
        // memcpy(data->CurrencyCode, CThostFtdcTransferFutureToBankRspField_CurrencyCode, CThostFtdcTransferFutureToBankRspField_CurrencyCode_length);
        strncpy(data->CurrencyCode, CThostFtdcTransferFutureToBankRspField_CurrencyCode, sizeof(data->CurrencyCode));
        CThostFtdcTransferFutureToBankRspField_CurrencyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTransferFutureToBankRspFieldType_repr(PyObject *self) {

    PyCThostFtdcTransferFutureToBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankRspFieldData>(self);
    CThostFtdcTransferFutureToBankRspField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferFutureToBankRspField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferFutureToBankRspField repr");
        return NULL;
    }

    return repr;
}


/// 响应代码
/// typedef char TThostFtdcRetCodeType[5]
static PyObject *PyCThostFtdcTransferFutureToBankRspFieldType_get_RetCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferFutureToBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankRspFieldData>(self);
    CThostFtdcTransferFutureToBankRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RetCode, (Py_ssize_t)sizeof(data->RetCode));
    return PyBytes_FromString(data->RetCode);
}

static int PyCThostFtdcTransferFutureToBankRspFieldType_set_RetCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RetCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferFutureToBankRspField::RetCode)) {
        PyErr_SetString(PyExc_ValueError, "RetCode must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferFutureToBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankRspFieldData>(self);
    CThostFtdcTransferFutureToBankRspField *data = &(extra->data);
    // memset(data->RetCode, 0, sizeof(data->RetCode));
    // memcpy(data->RetCode, buf, len);
    strncpy(data->RetCode, buf, sizeof(data->RetCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 响应信息
/// typedef char TThostFtdcRetInfoType[129]
static PyObject *PyCThostFtdcTransferFutureToBankRspFieldType_get_RetInfo(PyObject *self, void *closure) {
    PyCThostFtdcTransferFutureToBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankRspFieldData>(self);
    CThostFtdcTransferFutureToBankRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RetInfo, (Py_ssize_t)sizeof(data->RetInfo));
    return PyBytes_FromString(data->RetInfo);
}

static int PyCThostFtdcTransferFutureToBankRspFieldType_set_RetInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RetInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferFutureToBankRspField::RetInfo)) {
        PyErr_SetString(PyExc_ValueError, "RetInfo must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferFutureToBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankRspFieldData>(self);
    CThostFtdcTransferFutureToBankRspField *data = &(extra->data);
    // memset(data->RetInfo, 0, sizeof(data->RetInfo));
    // memcpy(data->RetInfo, buf, len);
    strncpy(data->RetInfo, buf, sizeof(data->RetInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账户
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTransferFutureToBankRspFieldType_get_FutureAccount(PyObject *self, void *closure) {
    PyCThostFtdcTransferFutureToBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankRspFieldData>(self);
    CThostFtdcTransferFutureToBankRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureAccount, (Py_ssize_t)sizeof(data->FutureAccount));
    return PyBytes_FromString(data->FutureAccount);
}

static int PyCThostFtdcTransferFutureToBankRspFieldType_set_FutureAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferFutureToBankRspField::FutureAccount)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferFutureToBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankRspFieldData>(self);
    CThostFtdcTransferFutureToBankRspField *data = &(extra->data);
    // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
    // memcpy(data->FutureAccount, buf, len);
    strncpy(data->FutureAccount, buf, sizeof(data->FutureAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种
/// typedef char TThostFtdcCurrencyCodeType[4]
static PyObject *PyCThostFtdcTransferFutureToBankRspFieldType_get_CurrencyCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferFutureToBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankRspFieldData>(self);
    CThostFtdcTransferFutureToBankRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyCode, (Py_ssize_t)sizeof(data->CurrencyCode));
    return PyBytes_FromString(data->CurrencyCode);
}

static int PyCThostFtdcTransferFutureToBankRspFieldType_set_CurrencyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferFutureToBankRspField::CurrencyCode)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyCode must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferFutureToBankRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferFutureToBankRspFieldData>(self);
    CThostFtdcTransferFutureToBankRspField *data = &(extra->data);
    // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
    // memcpy(data->CurrencyCode, buf, len);
    strncpy(data->CurrencyCode, buf, sizeof(data->CurrencyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTransferFutureToBankRspFieldType_members[] = {
    /// 转帐金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "TradeAmt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferFutureToBankRspFieldData, data.TradeAmt),
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
        .offset = offsetof(PyCThostFtdcTransferFutureToBankRspFieldData, data.CustFee),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("应收客户手续费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTransferFutureToBankRspFieldType_getsets[] = {
    /// 响应代码
    /// typedef char TThostFtdcRetCodeType[5]
    {
    .name = "RetCode",
    .get = PyCThostFtdcTransferFutureToBankRspFieldType_get_RetCode,
    .set = PyCThostFtdcTransferFutureToBankRspFieldType_set_RetCode,
    .doc = PyDoc_STR("响应代码"),
    },
    /// 响应信息
    /// typedef char TThostFtdcRetInfoType[129]
    {
    .name = "RetInfo",
    .get = PyCThostFtdcTransferFutureToBankRspFieldType_get_RetInfo,
    .set = PyCThostFtdcTransferFutureToBankRspFieldType_set_RetInfo,
    .doc = PyDoc_STR("响应信息"),
    },
    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "FutureAccount",
    .get = PyCThostFtdcTransferFutureToBankRspFieldType_get_FutureAccount,
    .set = PyCThostFtdcTransferFutureToBankRspFieldType_set_FutureAccount,
    .doc = PyDoc_STR("资金账户"),
    },
    /// 币种
    /// typedef char TThostFtdcCurrencyCodeType[4]
    {
    .name = "CurrencyCode",
    .get = PyCThostFtdcTransferFutureToBankRspFieldType_get_CurrencyCode,
    .set = PyCThostFtdcTransferFutureToBankRspFieldType_set_CurrencyCode,
    .doc = PyDoc_STR("币种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTransferFutureToBankRspFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTransferFutureToBankRspField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期货资金转银行请求响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTransferFutureToBankRspFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTransferFutureToBankRspFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTransferFutureToBankRspFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTransferFutureToBankRspFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTransferFutureToBankRspFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTransferFutureToBankRspFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期货资金转银行请求响应")},
    {Py_tp_members, PyCThostFtdcTransferFutureToBankRspFieldType_members},
    {Py_tp_getset, PyCThostFtdcTransferFutureToBankRspFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTransferFutureToBankRspFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTransferFutureToBankRspFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTransferFutureToBankRspFieldType_spec = {
    .name = "PyCTP.CThostFtdcTransferFutureToBankRspField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTransferFutureToBankRspFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTransferFutureToBankRspFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTransferFutureToBankRspFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTransferFutureToBankRspFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTransferFutureToBankRspFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTransferFutureToBankRspFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTransferFutureToBankRspFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTransferFutureToBankRspFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTransferFutureToBankRspField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferFutureToBankRspField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}