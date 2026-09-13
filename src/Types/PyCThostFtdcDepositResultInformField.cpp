
#include "PyCThostFtdcDepositResultInformField.h"

///验证期货资金密码和客户信息

static int PyCThostFtdcDepositResultInformFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "DepositSeqNo", "BrokerID", "InvestorID", "Deposit", "RequestID", "ReturnCode", "DescrInfoForReturnCode", NULL };


    /// 出入金流水号，该流水号为银期报盘返回的流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    char *CThostFtdcDepositResultInformField_DepositSeqNo = NULL;
    Py_ssize_t CThostFtdcDepositResultInformField_DepositSeqNo_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcDepositResultInformField_BrokerID = NULL;
    Py_ssize_t CThostFtdcDepositResultInformField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcDepositResultInformField_InvestorID = NULL;
    Py_ssize_t CThostFtdcDepositResultInformField_InvestorID_length = 0;

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcDepositResultInformField_Deposit = 0.0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcDepositResultInformField_RequestID = 0;

    /// 返回代码
    /// typedef char TThostFtdcReturnCodeType[7]
    char *CThostFtdcDepositResultInformField_ReturnCode = NULL;
    Py_ssize_t CThostFtdcDepositResultInformField_ReturnCode_length = 0;

    /// 返回码描述
    /// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
    char *CThostFtdcDepositResultInformField_DescrInfoForReturnCode = NULL;
    Py_ssize_t CThostFtdcDepositResultInformField_DescrInfoForReturnCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#diy#y#", (char **)kwlist
        , &CThostFtdcDepositResultInformField_DepositSeqNo, &CThostFtdcDepositResultInformField_DepositSeqNo_length
        , &CThostFtdcDepositResultInformField_BrokerID, &CThostFtdcDepositResultInformField_BrokerID_length
        , &CThostFtdcDepositResultInformField_InvestorID, &CThostFtdcDepositResultInformField_InvestorID_length
        , &CThostFtdcDepositResultInformField_Deposit
        , &CThostFtdcDepositResultInformField_RequestID
        , &CThostFtdcDepositResultInformField_ReturnCode, &CThostFtdcDepositResultInformField_ReturnCode_length
        , &CThostFtdcDepositResultInformField_DescrInfoForReturnCode, &CThostFtdcDepositResultInformField_DescrInfoForReturnCode_length
    )) {
        return -1;
    }

    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);


    /// 出入金流水号，该流水号为银期报盘返回的流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    if( CThostFtdcDepositResultInformField_DepositSeqNo != NULL ) {
        if(CThostFtdcDepositResultInformField_DepositSeqNo_length >= (Py_ssize_t)sizeof(data->DepositSeqNo)) {
            PyErr_Format(PyExc_ValueError, "DepositSeqNo too long: length=%zd (max allowed is 14)", CThostFtdcDepositResultInformField_DepositSeqNo_length);
            return -1;
        }
        // memset(data->DepositSeqNo, 0, sizeof(data->DepositSeqNo));
        // memcpy(data->DepositSeqNo, CThostFtdcDepositResultInformField_DepositSeqNo, CThostFtdcDepositResultInformField_DepositSeqNo_length);
        strncpy(data->DepositSeqNo, CThostFtdcDepositResultInformField_DepositSeqNo, sizeof(data->DepositSeqNo));
        CThostFtdcDepositResultInformField_DepositSeqNo = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcDepositResultInformField_BrokerID != NULL ) {
        if(CThostFtdcDepositResultInformField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcDepositResultInformField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcDepositResultInformField_BrokerID, CThostFtdcDepositResultInformField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcDepositResultInformField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcDepositResultInformField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcDepositResultInformField_InvestorID != NULL ) {
        if(CThostFtdcDepositResultInformField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcDepositResultInformField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcDepositResultInformField_InvestorID, CThostFtdcDepositResultInformField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcDepositResultInformField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcDepositResultInformField_InvestorID = NULL;
    }

    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    data->Deposit = CThostFtdcDepositResultInformField_Deposit;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcDepositResultInformField_RequestID;

    /// 返回代码
    /// typedef char TThostFtdcReturnCodeType[7]
    if( CThostFtdcDepositResultInformField_ReturnCode != NULL ) {
        if(CThostFtdcDepositResultInformField_ReturnCode_length >= (Py_ssize_t)sizeof(data->ReturnCode)) {
            PyErr_Format(PyExc_ValueError, "ReturnCode too long: length=%zd (max allowed is 6)", CThostFtdcDepositResultInformField_ReturnCode_length);
            return -1;
        }
        // memset(data->ReturnCode, 0, sizeof(data->ReturnCode));
        // memcpy(data->ReturnCode, CThostFtdcDepositResultInformField_ReturnCode, CThostFtdcDepositResultInformField_ReturnCode_length);
        strncpy(data->ReturnCode, CThostFtdcDepositResultInformField_ReturnCode, sizeof(data->ReturnCode));
        CThostFtdcDepositResultInformField_ReturnCode = NULL;
    }

    /// 返回码描述
    /// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
    if( CThostFtdcDepositResultInformField_DescrInfoForReturnCode != NULL ) {
        if(CThostFtdcDepositResultInformField_DescrInfoForReturnCode_length >= (Py_ssize_t)sizeof(data->DescrInfoForReturnCode)) {
            PyErr_Format(PyExc_ValueError, "DescrInfoForReturnCode too long: length=%zd (max allowed is 128)", CThostFtdcDepositResultInformField_DescrInfoForReturnCode_length);
            return -1;
        }
        // memset(data->DescrInfoForReturnCode, 0, sizeof(data->DescrInfoForReturnCode));
        // memcpy(data->DescrInfoForReturnCode, CThostFtdcDepositResultInformField_DescrInfoForReturnCode, CThostFtdcDepositResultInformField_DescrInfoForReturnCode_length);
        strncpy(data->DescrInfoForReturnCode, CThostFtdcDepositResultInformField_DescrInfoForReturnCode, sizeof(data->DescrInfoForReturnCode));
        CThostFtdcDepositResultInformField_DescrInfoForReturnCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcDepositResultInformFieldType_repr(PyObject *self) {

    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d,s:i,s:y,s:y}"
        , "DepositSeqNo", data->DepositSeqNo//, (Py_ssize_t)sizeof(data->DepositSeqNo)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "Deposit", data->Deposit
        , "RequestID", data->RequestID
        , "ReturnCode", data->ReturnCode//, (Py_ssize_t)sizeof(data->ReturnCode)
        , "DescrInfoForReturnCode", data->DescrInfoForReturnCode//, (Py_ssize_t)sizeof(data->DescrInfoForReturnCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDepositResultInformField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDepositResultInformField repr");
        return NULL;
    }

    return repr;
}


/// 出入金流水号，该流水号为银期报盘返回的流水号
/// typedef char TThostFtdcDepositSeqNoType[15]
static PyObject *PyCThostFtdcDepositResultInformFieldType_get_DepositSeqNo(PyObject *self, void *closure) {
    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DepositSeqNo, (Py_ssize_t)sizeof(data->DepositSeqNo));
    return PyBytes_FromString(data->DepositSeqNo);
}

static int PyCThostFtdcDepositResultInformFieldType_set_DepositSeqNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DepositSeqNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepositResultInformField::DepositSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "DepositSeqNo must be less than 14 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);
    // memset(data->DepositSeqNo, 0, sizeof(data->DepositSeqNo));
    // memcpy(data->DepositSeqNo, buf, len);
    strncpy(data->DepositSeqNo, buf, sizeof(data->DepositSeqNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcDepositResultInformFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcDepositResultInformFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepositResultInformField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcDepositResultInformFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcDepositResultInformFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepositResultInformField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 返回代码
/// typedef char TThostFtdcReturnCodeType[7]
static PyObject *PyCThostFtdcDepositResultInformFieldType_get_ReturnCode(PyObject *self, void *closure) {
    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ReturnCode, (Py_ssize_t)sizeof(data->ReturnCode));
    return PyBytes_FromString(data->ReturnCode);
}

static int PyCThostFtdcDepositResultInformFieldType_set_ReturnCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ReturnCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepositResultInformField::ReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "ReturnCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);
    // memset(data->ReturnCode, 0, sizeof(data->ReturnCode));
    // memcpy(data->ReturnCode, buf, len);
    strncpy(data->ReturnCode, buf, sizeof(data->ReturnCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 返回码描述
/// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
static PyObject *PyCThostFtdcDepositResultInformFieldType_get_DescrInfoForReturnCode(PyObject *self, void *closure) {
    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DescrInfoForReturnCode, (Py_ssize_t)sizeof(data->DescrInfoForReturnCode));
    return PyBytes_FromString(data->DescrInfoForReturnCode);
}

static int PyCThostFtdcDepositResultInformFieldType_set_DescrInfoForReturnCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DescrInfoForReturnCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepositResultInformField::DescrInfoForReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "DescrInfoForReturnCode must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepositResultInformFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepositResultInformFieldData>(self);
    CThostFtdcDepositResultInformField *data = &(extra->data);
    // memset(data->DescrInfoForReturnCode, 0, sizeof(data->DescrInfoForReturnCode));
    // memcpy(data->DescrInfoForReturnCode, buf, len);
    strncpy(data->DescrInfoForReturnCode, buf, sizeof(data->DescrInfoForReturnCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcDepositResultInformFieldType_members[] = {
    /// 入金金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Deposit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcDepositResultInformFieldData, data.Deposit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("入金金额")
    },
    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    {
        .name = "RequestID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcDepositResultInformFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcDepositResultInformFieldType_getsets[] = {
    /// 出入金流水号，该流水号为银期报盘返回的流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    {
    .name = "DepositSeqNo",
    .get = PyCThostFtdcDepositResultInformFieldType_get_DepositSeqNo,
    .set = PyCThostFtdcDepositResultInformFieldType_set_DepositSeqNo,
    .doc = PyDoc_STR("出入金流水号，该流水号为银期报盘返回的流水号"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcDepositResultInformFieldType_get_BrokerID,
    .set = PyCThostFtdcDepositResultInformFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcDepositResultInformFieldType_get_InvestorID,
    .set = PyCThostFtdcDepositResultInformFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 返回代码
    /// typedef char TThostFtdcReturnCodeType[7]
    {
    .name = "ReturnCode",
    .get = PyCThostFtdcDepositResultInformFieldType_get_ReturnCode,
    .set = PyCThostFtdcDepositResultInformFieldType_set_ReturnCode,
    .doc = PyDoc_STR("返回代码"),
    },
    /// 返回码描述
    /// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
    {
    .name = "DescrInfoForReturnCode",
    .get = PyCThostFtdcDepositResultInformFieldType_get_DescrInfoForReturnCode,
    .set = PyCThostFtdcDepositResultInformFieldType_set_DescrInfoForReturnCode,
    .doc = PyDoc_STR("返回码描述"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcDepositResultInformFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcDepositResultInformField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("验证期货资金密码和客户信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcDepositResultInformFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcDepositResultInformFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcDepositResultInformFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcDepositResultInformFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcDepositResultInformFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcDepositResultInformFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("验证期货资金密码和客户信息")},
    {Py_tp_members, PyCThostFtdcDepositResultInformFieldType_members},
    {Py_tp_getset, PyCThostFtdcDepositResultInformFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcDepositResultInformFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcDepositResultInformFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcDepositResultInformFieldType_spec = {
    .name = "PyCTP.CThostFtdcDepositResultInformField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcDepositResultInformFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcDepositResultInformFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcDepositResultInformFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcDepositResultInformFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcDepositResultInformFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcDepositResultInformFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcDepositResultInformFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcDepositResultInformFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcDepositResultInformField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDepositResultInformField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}